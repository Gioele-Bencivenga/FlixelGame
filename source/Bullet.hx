import flixel.util.FlxColor;
import flixel.effects.particles.FlxParticle;
import flixel.effects.particles.FlxEmitter;
import nape.geom.Vec2;
import nape.callbacks.CbType;
import flixel.addons.nape.FlxNapeSprite;

class Bullet extends FlxNapeSprite {
	var damage:Int;

	var direction:Vec2;

	public static var CBODYBullet:CbType = new CbType();

	public var hitEmitter:FlxEmitter; // emitter for when the bullet hits something

	public function new() {
		super();
	}

	public function create(_x:Float, _y:Float, _distance:Float, _rotation:Float, _damage = 1) {
		/// POSITION
		direction = Vec2.fromPolar(_distance, _rotation);
		x = _x + direction.x; // we spawn the bullet in front of the player
		y = _y + direction.y;

		/// STATS
		damage = _damage;

		/// GRAPHICS
		loadGraphic(AssetPaths.laser__png);
		setGraphicSize(50);

		/// EMITTER
		hitEmitter = new FlxEmitter(x, y);
		for (i in 0...20) {
			var p = new FlxParticle();
			p.loadGraphic(AssetPaths.explosion__png);
			hitEmitter.add(p);
		}
		hitEmitter.scale.set(2, 2, 3, 3, 4, 4, 5, 5);
		hitEmitter.lifespan.set(1.5, 3);
		hitEmitter.speed.set(500, 1500);
		hitEmitter.alpha.set(1, 1, 0.2, 0.4);
		hitEmitter.color.set(FlxColor.ORANGE, FlxColor.YELLOW, FlxColor.GRAY, FlxColor.RED);

		/// BODY
		createRectangularBody(40, 10);
		body.rotation = _rotation; // we rotate the bullet to the direction the player is facing
		body.cbTypes.add(CBODYBullet);
		body.userData.data = this;
		body.applyImpulse(direction.muleq(11)); // we multiply the vector so the bullet travels faster
	}

	public function GetDamage() {
		return damage;
	}

	override public function kill() {
		hitEmitter.focusOn(this);
		hitEmitter.start(); // why is this not emitting?

		super.kill();
	}
}
