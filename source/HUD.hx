import flixel.ui.FlxBar;
import flixel.util.FlxSpriteUtil;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.group.FlxGroup;

class HUD extends FlxTypedGroup<FlxSprite> {
	var background:FlxSprite;
	var backgroundHeight:Int;
	var backgroundColor:FlxColor;

	var dividerHeight:Int;
	var dividerColor:FlxColor;

	var txtScore:FlxText;
	var txtHealth:FlxText;
	var txtEnemies:FlxText;

	var healthBar:FlxBar;
	var barWidth:Int;

	var player:Player;
	var mines:FlxTypedGroup<Mine>;

	public function new(_player:Player, _mines:FlxTypedGroup<Mine>) {
		super();

		player = _player;
		mines = _mines;

		backgroundHeight = 40;
		backgroundColor = FlxColor.fromRGB(0, 0, 255, 110);
		dividerHeight = 2;
		dividerColor = FlxColor.fromRGB(0, 0, 255, 255);

		background = new FlxSprite(0, FlxG.height - backgroundHeight);
		background.makeGraphic(FlxG.width, backgroundHeight, backgroundColor);
		FlxSpriteUtil.drawRect(background, 0, 0, FlxG.width, dividerHeight, dividerColor);
		add(background);

		barWidth = 400;
		healthBar = new FlxBar((FlxG.width / 2) - (barWidth / 2), background.y + 7, LEFT_TO_RIGHT, barWidth, backgroundHeight - 10, player, 'integrity', 0,
			player.maxIntegrity, false);
		healthBar.createColoredEmptyBar(FlxColor.fromRGB(0, 0, 0, 140), true, dividerColor);
		healthBar.createColoredFilledBar(FlxColor.fromRGB(0, 175, 255, 170), true, dividerColor);
		add(healthBar);

		txtHealth = new FlxText((FlxG.width / 2) - 80, background.y + 5, 160, 'HP: ${player.integrity}/${player.maxIntegrity}', 25);
		add(txtHealth);

		txtScore = new FlxText(10, background.y + 5, 400, 'SCORE: ${player.score}', 25);
		add(txtScore);

		txtEnemies = new FlxText(FlxG.width - 150, background.y + 5, 150, 'MINES: ${mines.countLiving()}', 25);
		add(txtEnemies);

		// we call the function on each element, by setting scrollFactor to 0,0 the elements won't scroll based on camera movements
		forEach(function(element:FlxSprite) {
			element.scrollFactor.set(0, 0);
		});
	}

	public function UpdateHUD() {
		txtScore.text = 'SCORE: ${player.score}';

		txtHealth.text = 'HP: ${player.integrity}/${player.maxIntegrity}';

		txtEnemies.text = 'MINES: ${mines.countLiving()}';
	}
}
