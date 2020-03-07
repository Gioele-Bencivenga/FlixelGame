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
			FlxG.cameras.fade(FlxColor.BLACK, 1, false, function() FlxG.switchState(new PlayState()), true);
		}
		if (FlxG.keys.justReleased.ESCAPE) {
			FlxG.cameras.fade(FlxColor.BLACK, 1, false, function() QuitGame(), true);
		}
	}

	private function QuitGame() { // thanks to dean for this function!
		#if html5
		FlxG.openURL("https://gioelebencivenga.casa", "_self");
		#else
		#if cpp
		Sys.exit(0);
		#else
		openfl.system.System.exit(0);
		#end
		#end
	}
}
