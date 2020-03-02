import nape.geom.Vec2;
import nape.callbacks.CbType;
import flixel.addons.nape.FlxNapeSprite;

class Bullet extends FlxNapeSprite {
	var damage:Int;

	var direction:Vec2;

	public static var CBODYBullet:CbType = new CbType();

	public function new() {
		super();

		antialiasing = true;
	}

	public function create(_x:Float, _y:Float, _distance:Float, _rotation:Float, _damage = 1) {
        direction = Vec2.fromPolar(_distance, _rotation);
		
        x = _x + direction.x; // we spawn the bullet in front of the player
        y = _y + direction.y;

		damage = _damage;

		loadGraphic(AssetPaths.bullet__png);
		this.setGraphicSize(50);

        createCircularBody(15);
        body.rotation = _rotation; // we rotate the bullet to the direction the player is facing

		body.cbTypes.add(CBODYBullet);
		body.userData.data = this;

		body.applyImpulse(direction.muleq(11)); // we multiply the vector so the bullet travels faster

		return this;
	}

	override public function kill() {
		// when the bullet is killed it (hopefully) does a little explosion
		loadGraphic(AssetPaths.bulletExplosion__png);

		super.kill();
	}

	public function GetDamage() {
		return damage;
	}
}