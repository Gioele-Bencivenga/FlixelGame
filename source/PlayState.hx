package;

import flixel.FlxBasic;
import flixel.FlxObject;
import flixel.effects.particles.FlxParticle;
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
	var asteroidKillTimer:FlxTimer; // timer used to kill asteroids too far away
	var asteroidSpawnRate:Int; // how often we spawn a batch of asteroids

	public static var bullets:FlxTypedGroup<Bullet>; // group of bullets

	var bulletKillTimer:FlxTimer; // timer to kill far bullets

	public var mines:FlxTypedGroup<Mine>; // group of mines

	var mineExplosionEmitter:FlxEmitter;

	public static var bulletHitEmitter:FlxEmitter;

	var text:FlxText;

	override public function create():Void {
		// initializing the space for physics simulation
		FlxNapeSpace.init();
		FlxNapeSpace.velocityIterations = 5;
		FlxNapeSpace.positionIterations = 5;

		super.create();

		/// EMITTERS
		// mine emitter
		mineExplosionEmitter = new FlxEmitter();
		mineExplosionEmitter.loadParticles(AssetPaths.explosion__png, 50);
		mineExplosionEmitter.scale.set(2, 2, 3, 3, 3, 3, 4, 4);
		mineExplosionEmitter.lifespan.set(0.2, 0.5);
		mineExplosionEmitter.speed.set(200, 500);
		mineExplosionEmitter.alpha.set(1, 1, 0.2, 0.4);
		mineExplosionEmitter.color.set(FlxColor.ORANGE, FlxColor.YELLOW, FlxColor.GRAY, FlxColor.RED);
		add(mineExplosionEmitter);
		// bullet emitter
		bulletHitEmitter = new FlxEmitter();
		bulletHitEmitter.loadParticles(AssetPaths.laserHit__png, 10);
		bulletHitEmitter.scale.set(2, 2, 2, 2, 1, 1, 1, 1);
		bulletHitEmitter.lifespan.set(0.2, 0.5);
		bulletHitEmitter.speed.set(200, 500);
		bulletHitEmitter.alpha.set(1, 1, 0.2, 0.4);
		bulletHitEmitter.color.set(FlxColor.WHITE, FlxColor.CYAN, FlxColor.BLUE, FlxColor.CYAN);
		add(bulletHitEmitter);

		/// PLAYER
		player = new Player();
		add(player.thrustEmitter); // emitters first so the player gets drawn over the particles
		add(player.explosionEmitter);
		add(player);

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
		bullets = new FlxTypedGroup<Bullet>(numOfBullets);
		add(bullets);

		/// MINES
		mines = new FlxTypedGroup<Mine>();
		add(mines);

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

		player.TakeDamage(asteroid.GetDamage());
	}

	private function CollAsteroidToAsteroid(i:InteractionCallback) {
		var asteroid1:Asteroid = i.int1.userData.data;
		var asteroid2:Asteroid = i.int2.userData.data;

		asteroid1.TakeDamage(asteroid2.GetDamage());
		asteroid2.TakeDamage(asteroid1.GetDamage());

		if (asteroid1.GetIntegrity() <= 0)
			FragmentAsteroid(asteroid1);

		if (asteroid2.GetIntegrity() <= 0)
			FragmentAsteroid(asteroid2);
	}

	private function CollBulletToAsteroid(i:InteractionCallback) {
		var bullet:Bullet = i.int1.userData.data;
		var asteroid:Asteroid = i.int2.userData.data;

		asteroid.TakeDamage(bullet.GetDamage());
		bullet.kill();

		if (asteroid.GetIntegrity() <= 0)
			FragmentAsteroid(asteroid);
	}

	private function CollMineToAsteroid(i:InteractionCallback) {
		var mine:Mine = i.int1.userData.data;
		var asteroid:Asteroid = i.int2.userData.data;

		mine.TakeDamage(asteroid.GetDamage());
		
		if (mine.GetIntegrity() <= 0) { // if the mine explodes we apply the damage to the asteroid
			asteroid.TakeDamage(mine.GetDamage());
		}else{ // else we just do a little damage
			asteroid.TakeDamage(1);
		}

		if (asteroid.GetIntegrity() <= 0)
			FragmentAsteroid(asteroid);
	}

	private function CollBulletToMine(i:InteractionCallback) {
		var bullet:Bullet = i.int1.userData.data;
		var mine:Mine = i.int2.userData.data;

		mine.TakeDamage(bullet.GetDamage());
		bullet.kill();
	}

	private function CollPlayerToMine(i:InteractionCallback) {
		var mine:Mine = i.int2.userData.data;

		mine.Explode();
		player.TakeDamage(mine.GetDamage());
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
		} else if (asteroids.countLiving() > 90) {
			asteroidSpawnNumber = 1;
		} else if (asteroids.countLiving() > 60) {
			asteroidSpawnNumber = 2;
		} else if (asteroids.countLiving() > 40) {
			asteroidSpawnNumber = 3;
		} else {
			asteroidSpawnNumber = 4;
		}

		if (mines.countLiving() < 8) {
			SpawnMine(Std.int(player.x - 1500), Std.int(player.y + 1500));
			SpawnMine(Std.int(player.x + 1500), Std.int(player.y - 1500));
			SpawnMine(Std.int(player.x - 1500), Std.int(player.y - 1500));
			SpawnMine(Std.int(player.x + 1500), Std.int(player.y + 1500));
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

	// this function exists just for the convenience of not rewriting asteroids.recycle every time
	private function SpawnAsteroid(_x:Int = 0, _y:Int = 0, _size = 0, _xVel = 0, _yVel = 0) {
		var asteroid = asteroids.recycle(Asteroid.new);
		asteroid.create(_x, _y, _size, _xVel, _yVel);
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

	private function SpawnMine(_x:Int = 0, _y:Int = 0) {
		var mine = mines.recycle(Mine.new);
		mine.create(_x, _y, mineExplosionEmitter, player.body.position);
	}

	override public function update(elapsed:Float):Void {
		// pressing ESC brings back to the menu
		if (FlxG.keys.justReleased.ESCAPE) {
			FlxG.switchState(new MenuState());
		}

		// pressing period/comma zooms in/out
		if (FlxG.keys.justPressed.PERIOD) {
			setZoom(FlxG.camera.zoom += 0.3);
		}
		if (FlxG.keys.justPressed.COMMA) {
			setZoom(FlxG.camera.zoom -= 0.3);
		}

		super.update(elapsed);
	}

	private function setZoom(_zoom:Float) {
		FlxG.camera.zoom = FlxMath.bound(_zoom, 0.4, 3);
	}
}
