package;

import nape.phys.Body;
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

	// group of asteroids
	static public var asteroids:FlxTypedGroup<Asteroid>; // having collisions in groups improves performance

	var player:Player;

	override public function create():Void {
		// initializing the space for physics simulation
		FlxNapeSpace.init();
		FlxNapeSpace.velocityIterations = 5;
		FlxNapeSpace.positionIterations = 5;

		super.create();

		// adding background particles
		starfield = new FlxStarField2D();
		add(starfield);

		// adding player
		player = new Player();
		add(player);

		FlxG.camera.follow(player, FlxCameraFollowStyle.LOCKON);
		camera.followLead.x += 5;
		camera.followLead.y += 5;

		// adding asteroids
		asteroids = new FlxTypedGroup<Asteroid>();
		SpawnAsteroid(Std.int(player.x - 500), Std.int(player.y), 3, 100);
		SpawnAsteroid(Std.int(player.x + 500), Std.int(player.y), 3, -100);
		add(asteroids);

		// asteroid to asteroid collision listener
		var colListAsterToAster = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Asteroid.CBODYAsteroid, Asteroid.CBODYAsteroid,
			CollAsteroidToAsteroid);
		FlxNapeSpace.space.listeners.add(colListAsterToAster);

		// asteroid to player collision listener
		var colListAsterToPlayer = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Asteroid.CBODYAsteroid, Player.CBODYPlayer,
			CollAsteroidToPlayer);
		FlxNapeSpace.space.listeners.add(colListAsterToPlayer);
	}

	// when the player collides he loses 1 integrity
	public function CollAsteroidToPlayer(i:InteractionCallback) {
		var asteroid:Asteroid = i.int1.userData.data;

		asteroid.ChangeIntegrity(-1);
		player.ChangeIntegrity(-1);

		if (asteroid.GetIntegrity() <= 0) {
			FragmentAsteroid(asteroid);
		}
	}

	public function CollAsteroidToAsteroid(i:InteractionCallback) {
		var asteroid1:Asteroid = i.int1.userData.data;
		//var asteroid2:Asteroid = i.int2.userData.data;

		asteroid1.ChangeIntegrity(-1);
		//asteroid2.ChangeIntegrity(-1);

		if (asteroid1.GetIntegrity() <= 0) {
			FragmentAsteroid(asteroid1);
		}
		//if (asteroid2.GetIntegrity() <= 0) {
		//	FragmentAsteroid(asteroid2);
		//}
	}

	private function FragmentAsteroid(_asteroid:Asteroid) {
		if (_asteroid.GetSize() > 0) { // if the asteroid is big enough to fragment
			var numOfChunks = FlxG.random.int(2, 5);
			var maxOff = 40; // maximum offset variable

			for (i in 0...numOfChunks) {
				var offset1 = FlxG.random.int(-maxOff, maxOff);
				var offset2 = FlxG.random.int(-maxOff, maxOff);

				var asteroid = asteroids.recycle(Asteroid.new);
				asteroid.create(Std.int((_asteroid.x + asteroid.width / 2))
					+ offset1, Std.int((_asteroid.y + asteroid.height / 2))
					+ offset2,
					_asteroid.GetSize()
					- 1, FlxG.random.int(-150, 150), FlxG.random.int(-150, 150));
			}
		}
	}

	private function SpawnAsteroid(_x:Int = 0, _y:Int = 0, _size = -1, _xVel = 0, _yVel = 0) {
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
