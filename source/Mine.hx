import flixel.math.FlxMath;
import flixel.system.FlxSound;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.effects.particles.FlxEmitter;
import nape.geom.Vec2;
import nape.callbacks.CbType;
import flixel.addons.nape.FlxNapeSprite;

enum abstract MineSize(Int) to Int {
	var Small = 0;
	var Medium = 1;
	var Large = 2;
}

class Mine extends FlxNapeSprite {
	public var integrity(default, null):Int;
	public var damage(default, null):Int;

	public var size(default, null):MineSize;

	var maxVel:Int;

	var distanceFromPlayer:Float;

	public static var CBODYMine = new CbType();

	var direction:Vec2;

	var player:Player;

	var angry:Bool; // flag to see if the mine detected the player and should move towards it

	var explosionEmitter:FlxEmitter;

	var explosionSound:FlxSound; // sound played when the mine explodes
	var hitSound:FlxSound; // sound played when the mine impacts something
	var alarmSound:FlxSound; // sound played by the mines

	public function new() {
		super();
	}

	public function create(_x:Int = 0, _y:Int = 0, _size:MineSize, _explosionEmitter:FlxEmitter, _player:Player) {
		/// POSITION
		x = _x;
		y = _y;

		/// SIZE ASSIGNMENT
		if (_size != Small && _size != Medium && _size != Large) {
			_size = Small;
		}
		size = _size;

		/// STATS
		switch size {
			case Small:
				damage = 4;
				integrity = 15;
				maxVel = 700;
				distanceFromPlayer = 600;
			case Medium:
				damage = 8;
				integrity = 30;
				maxVel = 670;
				distanceFromPlayer = 800;
			case Large:
				damage = 12;
				integrity = 40;
				maxVel = 640;
				distanceFromPlayer = 1200;
		}

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

	// this function gets called on animation frame changes
	function BlinkCallback(name:String, frameNumber:Int, frameIndex:Int) {
		if (frameNumber == 1) {
			alarmSound.proximity(x, y, player, PlayState.MAX_SOUND_DISTANCE, true);
			alarmSound.play();
		}
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		if (player.alive) {
			if (FlxMath.isDistanceWithin(this, player, 1500)) {
				angry = true;
				MoveTowardsPlayer();
			} else {
				if (angry == true) {
					angry = false;
					animation.reset();
				}
			}
		} else {
			if (angry == true) {
				angry = false;
				animation.reset();
			}
		}
	}

	private function MoveTowardsPlayer() {
		animation.play('blink');

		var randOffX = FlxG.random.int(-200, 200); // random offset so that mines don't go to the exact player position
		var randOffY = FlxG.random.int(-200, 200);
		direction = new Vec2(player.body.position.x + randOffX, player.body.position.y + randOffY);
		direction.subeq(body.position);
		direction.length = switch size { // denser bodies need a longer vector in order to move fast enough
			case Small: 50;
			case Medium: 200;
			case Large: 400;
		}

		body.applyImpulse(direction);

		if (body.velocity.length > maxVel) {
			body.velocity.length = maxVel;
		}
	}

	public function TakeDamage(_amount:Int) {
		if (integrity > 0) {
			integrity -= _amount;

			hitSound.proximity(x, y, player, PlayState.MAX_SOUND_DISTANCE, true);
			hitSound.play(true);
		}

		if (integrity <= 0) {
			Explode();
		}
	}

	public function Explode() {
		switch size { // bigger mines will produce bigger explosions
			case Small:
				explosionEmitter.scale.set(2, 2, 3, 3, 3, 3, 4, 4);
				explosionEmitter.speed.set(200, 500);
				explosionEmitter.lifespan.set(0.2, 0.5);
			case Medium:
				explosionEmitter.scale.set(2.5, 2.5, 3.5, 3.5, 3.5, 3.5, 4.5, 4.5);
				explosionEmitter.speed.set(400, 700);
				explosionEmitter.lifespan.set(0.3, 0.6);
			case Large:
				explosionEmitter.scale.set(3, 3, 4, 4, 4, 4, 5, 5);
				explosionEmitter.speed.set(600, 900);
				explosionEmitter.lifespan.set(0.4, 0.7);
		}

		explosionEmitter.focusOn(this);
		explosionEmitter.start();

		explosionSound.proximity(x, y, player, PlayState.MAX_SOUND_DISTANCE, true);
		explosionSound.play();

		kill();
	}
}
