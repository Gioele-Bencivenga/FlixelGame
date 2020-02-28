package;

import flixel.util.FlxTimer;
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
	static public var asteroids:FlxTypedGroup<Asteroid>; // having collisions in groups improves performance

	// timer used to spawn asteroids at an interval
	var asteroidTimer:FlxTimer;
	// timer used to kill asteroids too far away
	var asteroidKillTimer:FlxTimer;

	var asteroidSpawnRate:Int; // how often we spawn a batch of asteroids

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

		/// CAMERA
		FlxG.camera.follow(player, FlxCameraFollowStyle.LOCKON);
		camera.followLead.x += 5;
		camera.followLead.y += 5;
		setZoom(FlxG.camera.zoom -= 0.3);

		// ASTEROIDS
		asteroids = new FlxTypedGroup<Asteroid>();
		SpawnAsteroid(Std.int(player.x + FlxG.random.int(-300, 300)), Std.int(player.y - 300), 3, FlxG.random.int(-100, 100), 200);
		// SpawnAsteroid(Std.int(player.x + FlxG.random.int(-500, 500)), Std.int(player.y - 500), 3, FlxG.random.int(-100, 100), 200);
		// SpawnAsteroid(Std.int(player.x + FlxG.random.int(-500, 500)), Std.int(player.y - 500), 3, FlxG.random.int(-100, 100), 200);
		// SpawnAsteroid(Std.int(player.x + FlxG.random.int(-500, 500)), Std.int(player.y - 500), 3, FlxG.random.int(-100, 100), 200);
		add(asteroids);

		/// COLLISIONS
		// asteroid to asteroid collision listener
		var colListAsterToAster = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Asteroid.CBODYAsteroid, Asteroid.CBODYAsteroid,
			CollAsteroidToAsteroid);
		FlxNapeSpace.space.listeners.add(colListAsterToAster);

		// asteroid to player collision listener
		var colListAsterToPlayer = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Asteroid.CBODYAsteroid, Player.CBODYPlayer,
			CollAsteroidToPlayer);
		FlxNapeSpace.space.listeners.add(colListAsterToPlayer);

		/// TIMERS
		asteroidSpawnRate = 3;
		asteroidTimer = new FlxTimer();
		asteroidKillTimer = new FlxTimer();
		asteroidTimer.start(asteroidSpawnRate, GenerateAsteroids, 0);
		asteroidKillTimer.start(1, RemoveAsteroids, 0);
	}

	// when the player collides he loses 1 integrity
	public function CollAsteroidToPlayer(i:InteractionCallback) {
		var asteroid:Asteroid = i.int1.userData.data;

		asteroid.ChangeIntegrity(-1);
		player.ChangeIntegrity(-asteroid.GetDamage());

		if (asteroid.GetIntegrity() <= 0) {
			FragmentAsteroid(asteroid);
		}
	}

	public function CollAsteroidToAsteroid(i:InteractionCallback) {
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

		// we don't want to overwhelm the player
		if (asteroids.countLiving() > 60) {
			asteroidSpawnNumber = 0;
		} else if (asteroids.countLiving() > 20) {
			asteroidSpawnNumber = 1;
		} else if (asteroids.countLiving() > 10) {
			asteroidSpawnNumber = 2;
		} else {
			asteroidSpawnNumber = 3;
		}

		var size = FlxG.random.int(2, 3); // we spawn asteroids of size 2 and 3
		var baseSpeed = 100;
		var distanceFromPlayer = 2000;
		// asteroid batch around player
		for (i in 0...asteroidSpawnNumber) {
			var speedVariation = FlxG.random.int(-50, 50); // each asteroid has a speed slightly different than another
			// coming from left
			SpawnAsteroid(Std.int(player.x - distanceFromPlayer),
				Std.int(player.y + FlxG.random.int(-Std.int(distanceFromPlayer / 2), Std.int(distanceFromPlayer / 2))), size, baseSpeed + speedVariation,
				FlxG.random.int(-Std.int(baseSpeed / 2), Std.int(baseSpeed / 2)));

			// coming from above
			SpawnAsteroid(Std.int(player.x + FlxG.random.int(-Std.int(distanceFromPlayer / 2), Std.int(distanceFromPlayer / 2))),
				Std.int(player.y - distanceFromPlayer), size, FlxG.random.int(-Std.int(baseSpeed / 2), Std.int(baseSpeed / 2)), baseSpeed + speedVariation);

			// coming from right
			SpawnAsteroid(Std.int(player.x + distanceFromPlayer),
				Std.int(player.y + FlxG.random.int(-Std.int(distanceFromPlayer / 2), Std.int(distanceFromPlayer / 2))), size, -(baseSpeed + speedVariation),
				FlxG.random.int(-Std.int(baseSpeed / 2), Std.int(baseSpeed / 2)));

			// coming from below
			SpawnAsteroid(Std.int(player.x + FlxG.random.int(-Std.int(distanceFromPlayer / 2), Std.int(distanceFromPlayer / 2))),
				Std.int(player.y + distanceFromPlayer), size, FlxG.random.int(-Std.int(baseSpeed / 2), Std.int(baseSpeed / 2)), -(baseSpeed + speedVariation));
		}
	}

	// function used by the killTimer for removing asteroid that are too far away
	private function RemoveAsteroids(_timer:FlxTimer):Void {
		// needs to be fixed, maybe use modulo opeerator? or calculate distance with points
		for (asteroid in asteroids.members) {
			var distanceFromPlayerX = asteroid.x - player.x;
			var distanceFromPlayerY = asteroid.y - player.y;
			
			if (distanceFromPlayerX > 300 || distanceFromPlayerY > 300) {
				asteroid.kill();
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
	}

	private function setZoom(_zoom:Float) {
		FlxG.camera.zoom = FlxMath.bound(_zoom, 0.4, 3);
	}
}
