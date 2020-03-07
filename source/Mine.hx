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
	var integrity:Int;
	var damage:Int;

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
		damage = 8;
		integrity = 1;
		maxVel = 550;

		/// REFERENCES
		playerPos = _playerPos;

		/// GRAPHIC
		loadGraphic(AssetPaths.mine__png);
		setGraphicSize(35, 35);	
		
		/// EMITTER
		explosionEmitter = _explosionEmitter;
		explosionEmitter.allowCollisions = FlxObject.ANY;

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

	public function ChangeIntegrity(_amount:Int) {
		if (integrity > 0) {
			integrity += _amount;
		}

		if (integrity <= 0) {
			Explode();
		}
	}

	public function Explode() {
		explosionEmitter.focusOn(this);
		explosionEmitter.start(true);

		kill();
	}

	public function GetDamage() {
		return damage;
	}
}
