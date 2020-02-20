package;

import flixel.FlxG;
import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(1280, 720, MenuState));
		addChild(new openfl.display.FPS(5, 5, 0xFFFFFF));

		// we enable the system cursor instead of using flixel's
		// flixel's cursor is kind of laggy
		FlxG.mouse.useSystemCursor = true;
	}
}
