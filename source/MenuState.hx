import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.FlxState;

// Pretty self explanatory Menu State that prints 2 texts on the screen then waits for the user to press spacebar
class MenuState extends FlxState {
	override public function create():Void {
		var titleText:FlxText;
		var instructionText:FlxText;

		titleText = new FlxText(0, 0, FlxG.width, "GAME TITLE HERE");
		titleText.setFormat(null, 50, FlxColor.WHITE, CENTER);

		instructionText = new FlxText(0, FlxG.height - 40, FlxG.width, "Press SPACE to play");
		instructionText.setFormat(null, 30, FlxColor.WHITE, CENTER);

		add(titleText);
		add(instructionText);
	}

	override public function update(elapsed:Float):Void {
		if (FlxG.keys.justReleased.SPACE) {
			FlxG.switchState(new PlayState());
		}
	}
}
