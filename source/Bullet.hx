import flixel.util.FlxColor;
import flixel.effects.particles.FlxParticle;
import flixel.effects.particles.FlxEmitter;
import nape.geom.Vec2;
import nape.callbacks.CbType;
import flixel.addons.nape.FlxNapeSprite;

class Bullet extends FlxNapeSprite {
	public var damage(default, null):Int;

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
		hitEmitter = PlayState.bulletHitEmitter;
		hitEmitter.loadParticles(AssetPaths.laserHit__png, 20);
		hitEmitter.scale.set(2, 2, 2, 2, 1, 1, 1, 1);
		hitEmitter.lifespan.set(0.1, 0.2);
		hitEmitter.speed.set(300, 800);
		hitEmitter.alpha.set(1, 1, 0.2, 0.4);
		hitEmitter.color.set(FlxColor.WHITE, FlxColor.CYAN, FlxColor.BLUE, FlxColor.CYAN);

		/// BODY
		createRectangularBody(40, 15);
		setDrag(1, 0);
		body.rotation = _rotation; // we rotate the bullet to the direction the player is facing
		body.cbTypes.add(CBODYBullet);
		body.userData.data = this;
		body.applyImpulse(direction.muleq(15)); // we multiply the vector so the bullet travels faster
	}

	// if too many bullets try to start the emitter the particles are killed prematurely. I don't know how to fix this, if you reader know you can let me know or open a pull request!
	override public function kill() {
		hitEmitter.focusOn(this);
		hitEmitter.start();

		super.kill();
	}
}
