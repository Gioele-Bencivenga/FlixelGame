package;

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

	// having collisions in groups improves performance
	//var asteroids:FlxTypedGroup<Asteroid>;

	var player:Player;
	var asteroid:Asteroid;

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
		asteroid = new Asteroid();
		asteroid = asteroid.create();
		add(asteroid);

		FlxG.camera.follow(player, FlxCameraFollowStyle.LOCKON);
		camera.followLead.x += 5;
		camera.followLead.y += 5;

		// adding asteroids
		//asteroids = new FlxTypedGroup<Asteroid>();
		//SpawnAsteroids(50);
		//add(asteroids);

		// we create an interaction listener that listens for the begin of a collision interaction between the player and any other body, calling CollPlayerToAnything
		var playerCollListener = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Player.CBODYPlayer, CbType.ANY_BODY, CollPlayerToAnything);
		FlxNapeSpace.space.listeners.add(playerCollListener);

		// asteroid to asteroid collision listener
		var asteroidCollListener = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, Asteroid.CBODYAsteroid, CbType.ANY_BODY,
			CollAsteroidToAsteroid);
		FlxNapeSpace.space.listeners.add(asteroidCollListener);
	}

	// when the player collides he loses 1 integrity
	public function CollPlayerToAnything(i:InteractionCallback) {
		player.ChangeIntegrity(-1);
		trace("Player collided");
	}

	public function CollAsteroidToAsteroid(i:InteractionCallback) {

		trace("Asteroid collided!!???!!?");

		/*
		var asteroid1:Asteroid = i.int1.castBody.userData.data;
		var asteroid2:Asteroid = i.int2.castBody.userData.data;
		asteroid1.ChangeIntegrity(-1);
		asteroid2.ChangeIntegrity(-1);
		trace('Ast1 integrity ${asteroid1.GetIntegrity()} Ast2 integrity ${asteroid2.GetIntegrity()}');
		*/

		/* should I do this here or in ChangeIntegrity()? 
			if(integrity <= 0){
				if(size == 0){
					kill();
				}else if(size == 1){
					// destroy and create size 0 chunks
				}else if(size == 2){
					// destroy and create size 1 chunks
				}else if(size == 3){
					// destroy and create size 2 chunks
				}
			}
		 */
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

	//private function SpawnAsteroids(_amount:Int = 1, ?_size:Int, ?_x:Int, ?_y:Int) {
	//	if (_size != null) {
	//		for (i in 0..._amount) {
	//			var asteroid = asteroids.recycle(Asteroid.new);
	//			asteroid.create(_x, _y, _size);
	//			asteroid.body.velocity.setxy(FlxG.random.float(-50, 50), FlxG.random.float(-50, 50));
	//		}
	//	} else {
	//		for (i in 0..._amount) {
	//			var asteroid = asteroids.recycle(Asteroid.new);
	//			asteroid.create();
	//			asteroid.body.velocity.setxy(FlxG.random.float(-50, 50), FlxG.random.float(-50, 50));
	//		}
	//	}
	//}

	private function setZoom(_zoom:Float) {
		FlxG.camera.zoom = FlxMath.bound(_zoom, 0.4, 3);
	}
}
