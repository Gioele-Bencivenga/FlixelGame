package;

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
		super.create();

		// adding background particles
		add(new FlxStarField2D());

		// adding player
		player = new Player();
		add(player);

		// adding asteroids
		asteroids = new FlxTypedGroup<Asteroid>();
		for (i in 0...20) {
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

		FlxG.collide(player, asteroids);
		FlxG.collide(asteroids, asteroids);
	}
}
