package;

import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new() {
		super();
		addChild(new FlxGame(1280, 720, MenuState, 1, 40, 40, false, true));
		addChild(new openfl.display.FPS(5, 5, FlxColor.WHITE));

		// we enable the system cursor instead of using flixel's
		// flixel's cursor is kind of laggy
		FlxG.mouse.useSystemCursor = true;
	}
}
