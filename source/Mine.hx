import flixel.FlxG;
import flixel.FlxObject;
import haxe.display.Display.DeterminePackageResult;
import flixel.util.FlxColor;
import flixel.effects.particles.FlxParticle;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxTimer;
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

	var size(default, null):MineSize;

	var maxVel:Int;

	public static var CBODYMine = new CbType();

	var direction:Vec2;

	var playerPos:Vec2;

	var explosionEmitter:FlxEmitter;

	public function new() {
		super();
	}

	public function create(_x:Int = 0, _y:Int = 0, _size:MineSize, _explosionEmitter:FlxEmitter, _playerPos:Vec2) {
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
				damage = 5;
				integrity = 20;
				maxVel = 610;
			case Medium:
				damage = 10;
				integrity = 40;
				maxVel = 580;
			case Large:
				damage = 20;
				integrity = 60;
				maxVel = 560;
		}

		/// REFERENCES
		playerPos = _playerPos;

		/// GRAPHIC
		loadGraphic(AssetPaths.mine__png);
		switch size {
			case Small:
				setGraphicSize(35, 35);
			case Medium:
				setGraphicSize(60, 60);
			case Large:
				setGraphicSize(85, 85);
		}

		/// EMITTER
		explosionEmitter = _explosionEmitter;

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
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		MoveTowardsPlayer();
	}

	private function MoveTowardsPlayer() {
		direction = new Vec2(playerPos.x, playerPos.y);
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
		}

		if (integrity <= 0) {
			Explode();
		}
	}

	public function Explode() {
		explosionEmitter.focusOn(this);
		explosionEmitter.start();

		kill();
	}
}
