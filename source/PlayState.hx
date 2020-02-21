package;

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

		// adding asteroids
		asteroids = new FlxTypedGroup<Asteroid>();
		for (i in 0...5) {
			var asteroid = asteroids.recycle(Asteroid.new);

			asteroid.create();
		}
		add(asteroids);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);

		// pressing ESC brings back to the menu
		if (FlxG.keys.pressed.ESCAPE) {
			FlxG.switchState(new MenuState());
		}
	}
}
