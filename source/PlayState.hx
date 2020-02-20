package;

import flixel.addons.display.FlxStarField.FlxStarField2D;
import flixel.FlxG;
import flixel.FlxState;

class PlayState extends FlxState {
	var player:Player;
	var asteroid:Asteroid;

	override public function create():Void {
		super.create();

		// adding background particles
		add(new FlxStarField2D());

		// adding player
		player = new Player();
		add(player);

		asteroid = new Asteroid();
		asteroid.create(10, 10, 100, 100);
		add(asteroid);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);

		// pressing ESC brings back to the menu
		if (FlxG.keys.pressed.ESCAPE) {
			FlxG.switchState(new MenuState());
		}

		FlxG.collide(player, asteroid);
	}
}
