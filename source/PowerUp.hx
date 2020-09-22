import Mine.MineSize;
import flixel.effects.particles.FlxEmitter;
import flixel.addons.nape.FlxNapeSprite;

class PowerUp extends Mine {
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
		loadGraphic(AssetPaths.mine__png, true, 17, 17);
		switch size {
			case Small:
				setGraphicSize(35, 35);
			case Medium:
				setGraphicSize(60, 60);
			case Large:
				setGraphicSize(85, 85);
		}
		animation.add('blink', [0, 1], FlxG.random.int(1, 6));
		animation.callback = BlinkCallback;

		/// EMITTER
		explosionEmitter = _explosionEmitter; // we assign the emitter to the one created in the PlayState
		explosionEmitter.loadParticles(AssetPaths.explosion__png, 80);
		explosionEmitter.alpha.set(1, 1, 0.2, 0.4);
		explosionEmitter.color.set(FlxColor.ORANGE, FlxColor.YELLOW, FlxColor.GRAY, FlxColor.RED);

		/// BODY
		switch size {
			case Small:
				createCircularBody(17);
				setBodyMaterial(1, 0.2, 0.4, 3, 0.001);
			case Medium:
				createCircularBody(30);
				setBodyMaterial(0.6, 0.2, 0.4, 5, 0.001);
			case Large:
				createCircularBody(45);
				setBodyMaterial(0.2, 0.2, 0.4, 7, 0.001);
		}
		body.cbTypes.add(CBODYMine);
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
