import flixel.util.FlxColor;
import flixel.FlxG;
import Mine.MineSize;
import flixel.effects.particles.FlxEmitter;
import nape.callbacks.CbType;
import flixel.addons.nape.FlxNapeSprite;

class PowerUp extends Mine {
	public static var CBODYPowerUp = new CbType();

	public function new() {
		super();
	}

	override function create(_x:Int = 0, _y:Int = 0, _size:MineSize, _explosionEmitter:FlxEmitter, _player:Player) {
		/// POSITION
		x = _x;
		y = _y;

		/// SIZE ASSIGNMENT
		if (_size != Small && _size != Medium && _size != Large) {
			_size = Small;
		}
		size = _size;

		/// STATS
		damage = 0;
		integrity = 0;
		maxVel = 1000;

		/// REFERENCES
		player = _player;

		/// GRAPHIC
		loadGraphic(AssetPaths.fireUp__png, true, 17, 17);
		switch size {
			case Small:
				setGraphicSize(35, 35);
			case Medium:
				setGraphicSize(60, 60);
			case Large:
				setGraphicSize(85, 85);
		}
		animation.add('blink', [0, 1, 2, 3, 2, 1, 0], FlxG.random.int(1, 11));

		/// EMITTER
		explosionEmitter = _explosionEmitter; // we assign the emitter to the one created in the PlayState
		explosionEmitter.loadParticles(AssetPaths.explosion__png, 80);
		explosionEmitter.alpha.set(1, 1, 0.2, 0.4);
		explosionEmitter.color.set(FlxColor.BLUE, FlxColor.CYAN, FlxColor.GRAY, FlxColor.PURPLE);

		/// BODY
		switch size {
			case Small:
				createCircularBody(20);

			case Medium:
				createCircularBody(35);

			case Large:
				createCircularBody(50);
		}
		setBodyMaterial(2, 0, 0, 0, 0); // powerups bounce a lot
		body.cbTypes.add(CBODYPowerUp);
		body.userData.data = this;

		/// SOUND
		switch size {
			case Small:
				explosionSound = FlxG.sound.load(AssetPaths.smallMineExp__wav);
				alarmSound = FlxG.sound.load(AssetPaths.mineAlarmSm__wav);
			case Medium:
				explosionSound = FlxG.sound.load(AssetPaths.mediumMineExp__wav);
				alarmSound = FlxG.sound.load(AssetPaths.mineAlarmMd__wav);
			case Large:
				explosionSound = FlxG.sound.load(AssetPaths.largeMineExp__wav);
				alarmSound = FlxG.sound.load(AssetPaths.mineAlarmLg__wav);
		}
		hitSound = FlxG.sound.load(AssetPaths.mineHit__wav);
		alarmSound.volume = 0.03;
	}
}
