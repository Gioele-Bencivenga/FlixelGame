import flixel.FlxG;
import flixel.FlxSprite;

class Player extends FlxSprite {
	var thrust:Float = 0;

	public function new() {
		// we create the sprite at the centre of the screen
		super(FlxG.width / 2, FlxG.height / 2);

		// enlarging hitbox
		width *= 2;
		height *= 2;
	}
}
