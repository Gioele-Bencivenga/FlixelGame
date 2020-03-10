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

class Mine extends FlxNapeSprite {
	public var integrity(default, null):Int;
	public var damage(default, null):Int;

	var maxVel:Int;

	public static var CBODYMine = new CbType();

	var direction:Vec2;

	var playerPos:Vec2;

	var explosionEmitter:FlxEmitter;

	public function new() {
		super();
	}

	public function create(_x:Int = 0, _y:Int = 0, _explosionEmitter:FlxEmitter, _playerPos:Vec2) {
		/// POSITION
		x = _x;
		y = _y;

		/// STATS
		damage = 10;
		integrity = 25;
		maxVel = 550;

		/// REFERENCES
		playerPos = _playerPos;

		/// GRAPHIC
		loadGraphic(AssetPaths.mine__png);
		setGraphicSize(35, 35);	
		
		/// EMITTER
		explosionEmitter = _explosionEmitter;

		/// BODY
		createCircularBody(17);
		setBodyMaterial(1, 0.2, 0.4, 2, 0.001);
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
		direction.length = 15;

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
