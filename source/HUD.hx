import flixel.util.FlxSpriteUtil;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.group.FlxGroup;

class HUD extends FlxGroup {
	var background:FlxSprite;

	var txtScore:FlxText;
	var txtHealth:FlxText;

	var player:Player;

	public function new(_player:Player) {
		super();

		player = _player;

		background = new FlxSprite();
		background.makeGraphic(FlxG.width, 50, FlxColor.GRAY);
		FlxSpriteUtil.drawRect(background, 0, 48, FlxG.width, 2, FlxColor.WHITE);
		add(background);
		background.scrollFactor.set(0, 0);

		txtScore = new FlxText((FlxG.width / 2) - 100, 0, 200, "Score: " + player.score, 40);
		add(txtScore);
		txtScore.scrollFactor.set(0, 0);

		// we call the function on each element, by setting scrollFactor to 0,0 the elements won't scroll based on camera movements
		// forEach(SetScrollFactor); figure out/ask why it doesn't work
	}

	public function UpdateHUD(){
		
	}

	private function SetScrollFactor(spr:FlxSprite):Void {
		spr.scrollFactor.set(0, 0);
	}
}
