package;

import flixel.math.FlxMath;
import flixel.FlxCamera.FlxCameraFollowStyle;
import flixel.addons.nape.FlxNapeSpace;
import flixel.group.FlxGroup.FlxTypedGroup;
import echo.Echo;
import flixel.addons.display.FlxStarField.FlxStarField2D;
import flixel.FlxG;
import flixel.FlxState;

class PlayState extends FlxState {
	// creating a static group of asteroids
	// having collisions in groups improves performance
	static var asteroids:FlxTypedGroup<Asteroid>;

	var player:Player;

	override public function create():Void {
		// initializing the space for physics simulation
		FlxNapeSpace.init();
		FlxNapeSpace.velocityIterations = 5;
		FlxNapeSpace.positionIterations = 5;

		super.create();

		// adding background particles
		add(new FlxStarField2D());

		// adding player
		player = new Player();
		add(player);

		FlxG.camera.follow(player, FlxCameraFollowStyle.LOCKON);
		camera.followLead.x += 5;
		camera.followLead.y += 5;

		// adding asteroids
		asteroids = new FlxTypedGroup<Asteroid>();
		for (i in 0...50) {
			var asteroid = asteroids.recycle(Asteroid.new);

			asteroid.create();
			asteroid.body.velocity.setxy(FlxG.random.float(-50, 50), FlxG.random.float(-50, 50));
		}
		add(asteroids);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);

		// pressing ESC brings back to the menu
		if (FlxG.keys.pressed.ESCAPE) {
			FlxG.switchState(new MenuState());
		}

		// pressing period/comma zooms in/out
		if(FlxG.keys.justPressed.PERIOD){
			setZoom(FlxG.camera.zoom += 0.3);
		}
		if(FlxG.keys.justPressed.COMMA){
			setZoom(FlxG.camera.zoom -= 0.3);
		}
	}

	private function setZoom(_zoom:Float) {
		FlxG.camera.zoom = FlxMath.bound(_zoom, 0.4, 3);
	}
}
