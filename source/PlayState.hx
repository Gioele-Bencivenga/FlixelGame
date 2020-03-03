package;

import flixel.addons.nape.FlxNapeSprite;
import flixel.text.FlxText;
import flixel.util.*;
import nape.callbacks.*;
import flixel.math.FlxMath;
import flixel.FlxCamera.FlxCameraFollowStyle;
import flixel.addons.nape.FlxNapeSpace;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.addons.display.FlxStarField.FlxStarField2D;
import flixel.FlxG;
import flixel.FlxState;

class PlayState extends FlxState {
	var starfield:FlxStarField2D;

	var player:Player;

	// group of asteroids
	public static var asteroids:FlxTypedGroup<Asteroid>; // having collisions in groups improves performance

	// timer used to spawn asteroids at an interval
	var asteroidTimer:FlxTimer;
	// timer used to kill asteroids too far away
	var asteroidKillTimer:FlxTimer;

	var asteroidSpawnRate:Int; // how often we spawn a batch of asteroids

	// group of bullets
	public static var bullets:FlxTypedGroup<Bullet>;

	// timer to kill far bullets
	var bulletKillTimer:FlxTimer;

	var text:FlxText;

	override public function create():Void {
		// initializing the space for physics simulation
		FlxNapeSpace.init();
		FlxNapeSpace.velocityIterations = 5;
		FlxNapeSpace.positionIterations = 5;

		super.create();

		// maybe find other backgrounds since this one is meh
		// starfield = new FlxStarField2D();
		// add(starfield);

		// adding player
		player = new Player();
		add(player);

		// adding player's emitter
		add(player.emitter);

		/// CAMERA
		FlxG.camera.follow(player, FlxCameraFollowStyle.LOCKON);
		camera.followLead.x += 5;
		camera.followLead.y += 5;
		setZoom(FlxG.camera.zoom -= 0.3);

		/// ASTEROIDS
		asteroids = new FlxTypedGroup<Asteroid>();
		add(asteroids);

		/// BULLETS
		var numOfBullets:Int = 128; // we'll have 128 bullets recycled over and over
		bullets = new FlxTypedGroup(numOfBullets);
		add(bullets);

		/// COLLISIONS
		// asteroid to asteroid collision listener
		var colListAsterToAster = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Asteroid.CBODYAsteroid, Asteroid.CBODYAsteroid,
			CollAsteroidToAsteroid);
		FlxNapeSpace.space.listeners.add(colListAsterToAster);

		// asteroid to player collision listener
		var colListAsterToPlayer = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Asteroid.CBODYAsteroid, Player.CBODYPlayer,
			CollAsteroidToPlayer);
		FlxNapeSpace.space.listeners.add(colListAsterToPlayer);

		// bullet to asteroid collision listener
		var colListBullToAster = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Bullet.CBODYBullet, Asteroid.CBODYAsteroid,
			CollBulletToAsteroid);
		FlxNapeSpace.space.listeners.add(colListBullToAster);

		/// TIMERS
		asteroidSpawnRate = 1;
		// asteroid spawn
		asteroidTimer = new FlxTimer();
		asteroidTimer.start(asteroidSpawnRate, GenerateAsteroids, 0);
		// asteroid kill
		asteroidKillTimer = new FlxTimer();
		asteroidKillTimer.start(1, RemoveAsteroids, 0);
		// bullet kill
		bulletKillTimer = new FlxTimer();
		bulletKillTimer.start(1, RemoveBullets, 0);

		text = new FlxText(player.x, player.y, FlxG.width);
		text.setFormat(null, 32, FlxColor.WHITE, CENTER, OUTLINE);
		add(text);
	}

	private function CollAsteroidToPlayer(i:InteractionCallback) {
		var asteroid:Asteroid = i.int1.userData.data;

		player.ChangeIntegrity(-asteroid.GetDamage());
	}

	private function CollAsteroidToAsteroid(i:InteractionCallback) {
		var asteroid1:Asteroid = i.int1.userData.data;
		var asteroid2:Asteroid = i.int2.userData.data;

		asteroid1.ChangeIntegrity(-asteroid2.GetDamage());
		asteroid2.ChangeIntegrity(-asteroid1.GetDamage());

		if (asteroid1.GetIntegrity() <= 0) {
			FragmentAsteroid(asteroid1);
		}
		if (asteroid2.GetIntegrity() <= 0) {
			FragmentAsteroid(asteroid2);
		}
	}

	private function CollBulletToAsteroid(i:InteractionCallback) {
		var bullet:Bullet = i.int1.userData.data;
		var asteroid:Asteroid = i.int2.userData.data;

		asteroid.ChangeIntegrity(-bullet.GetDamage());
		bullet.kill();

		if (asteroid.GetIntegrity() <= 0) {
			FragmentAsteroid(asteroid);
		}
	}

	// this function creates between 3 and 6 asteroids (chunks) that are smaller than the one passed as an argument (_asteroid)
	// the chunks are created at the center of the _asteroid, with a random offset to help them not get stuck overlapping
	// initially it was calling SpawnAsteroid() but that was changed for reasons I have now forgot
	private function FragmentAsteroid(_asteroid:Asteroid) {
		if (_asteroid.GetSize() > 0) { // if the asteroid is big enough to fragment
			var numOfChunks = FlxG.random.int(3, 6);
			var maxOff = 40; // maximum offset variable

			for (i in 0...numOfChunks) {
				var offsetX = FlxG.random.int(-maxOff, maxOff);
				var offsetY = FlxG.random.int(-maxOff, maxOff);

				var newAsteroid = asteroids.recycle(Asteroid.new);
				newAsteroid.create(Std.int((_asteroid.x + _asteroid.width / 2))
					+ offsetX, Std.int((_asteroid.y + _asteroid.height / 2))
					+ offsetY,
					_asteroid.GetSize()
					- 1, FlxG.random.int(-150, 150), FlxG.random.int(-150, 150));
			}
		}
	}

	// function used by the timer for creating asteroid in the distance at a set interval
	private function GenerateAsteroids(_timer:FlxTimer):Void {
		var asteroidSpawnNumber; // how many asteroids for each side

		// we don't want to overwhelm the player too much
		if (asteroids.countLiving() > 140) {
			asteroidSpawnNumber = 0;
		} else if (asteroids.countLiving() > 110) {
			asteroidSpawnNumber = 1;
		} else if (asteroids.countLiving() > 70) {
			asteroidSpawnNumber = 2;
		} else if (asteroids.countLiving() > 60) {
			asteroidSpawnNumber = 3;
		} else {
			asteroidSpawnNumber = 6;
		}

		var baseSpeed = 100;
		var distanceFromPlayer = 2000;
		// asteroid batch around player
		for (i in 0...asteroidSpawnNumber) {
			var size = FlxG.random.int(1, 3); // each asteroid is of different size
			var speedVariation = FlxG.random.int(-70, 70); // each asteroid has a speed slightly different than another
			// coming from left
			SpawnAsteroid(Std.int(player.x - distanceFromPlayer),
				Std.int(player.y + FlxG.random.int(-Std.int(distanceFromPlayer / 1.5), Std.int(distanceFromPlayer / 1.5))), size, baseSpeed + speedVariation,
				FlxG.random.int(-Std.int(baseSpeed / 1.5), Std.int(baseSpeed / 1.5)));

			// coming from above
			SpawnAsteroid(Std.int(player.x + FlxG.random.int(-Std.int(distanceFromPlayer / 1.5), Std.int(distanceFromPlayer / 1.5))),
				Std.int(player.y - distanceFromPlayer), size, FlxG.random.int(-Std.int(baseSpeed / 1.5), Std.int(baseSpeed / 1.5)),
				baseSpeed + speedVariation);

			// coming from right
			SpawnAsteroid(Std.int(player.x + distanceFromPlayer),
				Std.int(player.y + FlxG.random.int(-Std.int(distanceFromPlayer / 1.5), Std.int(distanceFromPlayer / 1.5))), size,
				-(baseSpeed + speedVariation), FlxG.random.int(-Std.int(baseSpeed / 1.5), Std.int(baseSpeed / 1.5)));

			// coming from below
			SpawnAsteroid(Std.int(player.x + FlxG.random.int(-Std.int(distanceFromPlayer / 1.5), Std.int(distanceFromPlayer / 1.5))),
				Std.int(player.y + distanceFromPlayer), size, FlxG.random.int(-Std.int(baseSpeed / 1.5), Std.int(baseSpeed / 1.5)),
				-(baseSpeed + speedVariation));
		}
	}

	// function used by the killTimer for removing asteroid that are too far away
	private function RemoveAsteroids(_timer:FlxTimer):Void {
		var maxDistance = 3000;

		for (asteroid in asteroids) {
			if (!FlxMath.isDistanceWithin(asteroid, player, maxDistance)) {
				asteroid.kill();
			}
		}
	}

	// function used by the killTimer for removing bullets that are too far away
	private function RemoveBullets(_timer:FlxTimer):Void {
		var maxDistance = 3000;

		for (bullet in bullets) {
			if (!FlxMath.isDistanceWithin(bullet, player, maxDistance)) {
				bullet.kill();
			}
		}
	}

	// this function exists just for the convenience of not rewriting asteroids.recycle every time
	private function SpawnAsteroid(_x:Int = 0, _y:Int = 0, _size = 0, _xVel = 0, _yVel = 0) {
		var asteroid = asteroids.recycle(Asteroid.new);
		asteroid.create(_x, _y, _size, _xVel, _yVel);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);

		// pressing ESC brings back to the menu
		if (FlxG.keys.pressed.ESCAPE) {
			FlxG.switchState(new MenuState());
		}

		// pressing period/comma zooms in/out
		if (FlxG.keys.justPressed.PERIOD) {
			setZoom(FlxG.camera.zoom += 0.3);
		}
		if (FlxG.keys.justPressed.COMMA) {
			setZoom(FlxG.camera.zoom -= 0.3);
		}

		text.text = Std.string(asteroids.countLiving());
		text.setPosition(player.x, player.y);
	}

	private function setZoom(_zoom:Float) {
		FlxG.camera.zoom = FlxMath.bound(_zoom, 0.4, 3);
	}
}
