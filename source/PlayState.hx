package;

import flixel.FlxCamera;
import Asteroid.AsteroidSize;
import Mine.MineSize;
import flixel.effects.particles.FlxEmitter;
import flixel.text.FlxText;
import flixel.util.*;
import nape.callbacks.*;
import flixel.math.FlxMath;
import flixel.FlxCamera.FlxCameraFollowStyle;
import flixel.addons.nape.FlxNapeSpace;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;
import flixel.FlxState;

class PlayState extends FlxState {
	var player:Player;

	public var asteroids:FlxTypedGroup<Asteroid>; // group of asteroids, having collisions in groups improves performance

	var asteroidTimer:FlxTimer; // timer used to spawn asteroids at an interval
	var asteroidSpawnRate:Int; // how often we spawn a batch of asteroids

	public var mines:FlxTypedGroup<Mine>; // group of mines

	var mineExplosionEmitter:FlxEmitter;

	public static var bullets:FlxTypedGroup<Bullet>; // group of bullets
	public static var bulletHitEmitter:FlxEmitter;

	var objectKillTimer:FlxTimer; // timer to kill far objects

	var hud:HUD; // the hud to display integrity, score and other stuff

	var gameCamera:FlxCamera;
	var hudCamera:FlxCamera;

	var text:FlxText;

	override public function create():Void {
		// initializing the space for physics simulation
		FlxNapeSpace.init();
		FlxNapeSpace.velocityIterations = 5;
		FlxNapeSpace.positionIterations = 5;

		super.create();

		/// EMITTERS
		mineExplosionEmitter = new FlxEmitter();
		add(mineExplosionEmitter);
		bulletHitEmitter = new FlxEmitter();
		add(bulletHitEmitter);

		/// PLAYER
		player = new Player();
		add(player.thrustEmitter); // emitters first so the player gets drawn over the particles
		add(player.explosionEmitter);
		add(player);

		/// ASTEROIDS
		asteroids = new FlxTypedGroup<Asteroid>();
		add(asteroids);

		/// BULLETS
		var numOfBullets:Int = 128; // we'll have 128 bullets recycled over and over
		bullets = new FlxTypedGroup<Bullet>(numOfBullets);
		add(bullets);

		/// MINES
		mines = new FlxTypedGroup<Mine>();
		add(mines);
		
		/// CAMERAS
		// game camera
		gameCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		gameCamera.bgColor = FlxColor.BLACK;
		gameCamera.zoom = 0.4;
		gameCamera.follow(player, LOCKON);
		gameCamera.followLead.x += 5;
		gameCamera.followLead.y += 5;
		FlxG.cameras.reset(gameCamera);
		// hud camera
		hudCamera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		hudCamera.bgColor = FlxColor.TRANSPARENT;
		FlxG.cameras.add(hudCamera);

		FlxCamera.defaultCameras = [gameCamera];
		
		/// HUD
		hud = new HUD(player);
		hud.cameras = [hudCamera];
		add(hud);

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

		// mine to asteroid collision listener
		var colListMineToAster = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Mine.CBODYMine, Asteroid.CBODYAsteroid, CollMineToAsteroid);
		FlxNapeSpace.space.listeners.add(colListMineToAster);

		// bullet to mine collision listener
		var colListBullToMine = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Bullet.CBODYBullet, Mine.CBODYMine, CollBulletToMine);
		FlxNapeSpace.space.listeners.add(colListBullToMine);

		// player to mine collision listener
		var colListPlayerToMine = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Player.CBODYPlayer, Mine.CBODYMine, CollPlayerToMine);
		FlxNapeSpace.space.listeners.add(colListPlayerToMine);

		/// TIMERS
		asteroidSpawnRate = 1;
		// asteroid spawn
		asteroidTimer = new FlxTimer();
		asteroidTimer.start(asteroidSpawnRate, GenerateAsteroidsAndMines, 0);
		// objects kill
		objectKillTimer = new FlxTimer();
		objectKillTimer.start(1, RemoveFarObjects, 0);
	}

	private function CollAsteroidToPlayer(i:InteractionCallback) {
		var asteroid:Asteroid = i.int1.userData.data;

		player.TakeDamage(asteroid.damage);
	}

	private function CollAsteroidToAsteroid(i:InteractionCallback) {
		var asteroid1:Asteroid = i.int1.userData.data;
		var asteroid2:Asteroid = i.int2.userData.data;

		asteroid1.TakeDamage(asteroid2.damage);
		asteroid2.TakeDamage(asteroid1.damage);

		if (asteroid1.integrity <= 0)
			FragmentAsteroid(asteroid1);

		if (asteroid2.integrity <= 0)
			FragmentAsteroid(asteroid2);
	}

	private function CollBulletToAsteroid(i:InteractionCallback) {
		var bullet:Bullet = i.int1.userData.data;
		var asteroid:Asteroid = i.int2.userData.data;

		asteroid.TakeDamage(bullet.damage);
		bullet.kill();

		if (asteroid.integrity <= 0)
			FragmentAsteroid(asteroid);
	}

	private function CollMineToAsteroid(i:InteractionCallback) {
		var mine:Mine = i.int1.userData.data;
		var asteroid:Asteroid = i.int2.userData.data;

		mine.TakeDamage(asteroid.damage);

		if (mine.integrity <= 0) { // if the mine explodes we apply the damage to the asteroid
			asteroid.TakeDamage(mine.damage);
		} else { // else we just do a little damage
			asteroid.TakeDamage(1);
		}

		if (asteroid.integrity <= 0)
			FragmentAsteroid(asteroid);
	}

	private function CollBulletToMine(i:InteractionCallback) {
		var bullet:Bullet = i.int1.userData.data;
		var mine:Mine = i.int2.userData.data;

		bullet.kill();
		mine.TakeDamage(bullet.damage);

		if (mine.integrity <= 0) {
			player.score += 1;
		}
	}

	private function CollPlayerToMine(i:InteractionCallback) {
		var mine:Mine = i.int2.userData.data;

		mine.Explode();
		player.TakeDamage(mine.damage);
	}

	// this function creates between 3 and 6 asteroids (chunks) that are smaller than the one passed as an argument (_asteroid)
	// the chunks are created at the center of the _asteroid, with a random offset to help them not get stuck overlapping
	// initially it was calling SpawnAsteroid() but that was changed for reasons I have now forgot
	private function FragmentAsteroid(_asteroid:Asteroid) {
		if (_asteroid.size != Small) { // if the asteroid is big enough to fragment
			var numOfChunks = FlxG.random.int(3, 6);
			var maxOff = 40; // maximum offset variable

			for (i in 0...numOfChunks) {
				var offsetX = FlxG.random.int(-maxOff, maxOff);
				var offsetY = FlxG.random.int(-maxOff, maxOff);

				var newAsteroid = asteroids.recycle(Asteroid.new);
				newAsteroid.create(Std.int((_asteroid.x + _asteroid.width / 2))
					+ offsetX, Std.int((_asteroid.y + _asteroid.height / 2))
					+ offsetY,
					_asteroid.size
					- 1, FlxG.random.int(-150, 150), FlxG.random.int(-150, 150));
			}
		}
	}

	// function used by the timer for creating asteroid in the distance at a set interval
	private function GenerateAsteroidsAndMines(_timer:FlxTimer):Void {
		var maxMineNumber; // how many mines in the space at a time
		if (player.score < 20) {
			maxMineNumber = 2;
		} else if (player.score < 40) {
			maxMineNumber = 3;
		} else if (player.score < 60) {
			maxMineNumber = 4;
		} else {
			maxMineNumber = 5;
		}

		if (mines.countLiving() < maxMineNumber) {
			var size = FlxG.random.getObject([MineSize.Small, MineSize.Medium, MineSize.Large]);
			SpawnMine(Std.int(player.x - 1500), Std.int(player.y + 1500), size);
		}

		var asteroidSpawnNumber; // how many asteroids for each side
		// we don't want to overwhelm the player too much
		if (asteroids.countLiving() > 130) {
			asteroidSpawnNumber = 0;
		} else if (asteroids.countLiving() > 70) {
			asteroidSpawnNumber = 1;
		} else if (asteroids.countLiving() > 50) {
			asteroidSpawnNumber = 2;
		} else if (asteroids.countLiving() > 10) {
			asteroidSpawnNumber = 3;
		} else {
			asteroidSpawnNumber = 4;
		}

		var baseSpeed = 100;
		var distanceFromPlayer = 2000;
		// asteroid batch around player
		for (i in 0...asteroidSpawnNumber) {
			var size = FlxG.random.getObject([AsteroidSize.Medium, AsteroidSize.Large, AsteroidSize.Huge]); // each asteroid is of different size
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

	private function SpawnMine(_x:Int = 0, _y:Int = 0, _size:MineSize = Small) {
		var mine = mines.recycle(Mine.new);
		mine.create(_x, _y, _size, mineExplosionEmitter, player.body.position);
		mine.body.velocity.setxy(FlxG.random.int(-200, 200), FlxG.random.int(-20, 20));
	}

	// this function exists just for the convenience of not rewriting asteroids.recycle every time
	private function SpawnAsteroid(_x:Int = 0, _y:Int = 0, _size:AsteroidSize = Small, _xVel = 0, _yVel = 0) {
		var asteroid = asteroids.recycle(Asteroid.new);
		asteroid.create(_x, _y, _size, _xVel, _yVel);
	}

	// function used by the killTimer for removing objects that are too far away
	private function RemoveFarObjects(_timer:FlxTimer):Void {
		var maxDistance = 2500;

		for (bullet in bullets) {
			if (!FlxMath.isDistanceWithin(bullet, player, maxDistance)) {
				bullet.kill();
			}
		}

		for (asteroid in asteroids) {
			if (!FlxMath.isDistanceWithin(asteroid, player, maxDistance)) {
				asteroid.kill();
			}
		}

		for (mine in mines) {
			if (!FlxMath.isDistanceWithin(mine, player, maxDistance)) {
				mine.kill();
			}
		}
	}

	override public function update(elapsed:Float):Void {
		// pressing ESC brings back to the menu
		if (FlxG.keys.justReleased.ESCAPE) {
			FlxG.switchState(new MenuState());
		}

		// pressing period/comma zooms in/out
		if (FlxG.keys.justPressed.PERIOD) {
			SetZoom(FlxG.camera.zoom += 0.3);
		}
		if (FlxG.keys.justPressed.COMMA) {
			SetZoom(FlxG.camera.zoom -= 0.3);
		}

		//text.setPosition((camera.scroll.x + (FlxG.width / 2)) - text.width / 2, camera.scroll.y - FlxG.height / 2);
		//text.text = 'Score: ${Std.string(player.score)}';

		super.update(elapsed);
	}

	private function SetZoom(_zoom:Float) {
		gameCamera.zoom = FlxMath.bound(_zoom, 0.4, 3);
	}
}
