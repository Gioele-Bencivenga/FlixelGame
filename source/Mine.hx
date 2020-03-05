import nape.geom.Vec2;
import nape.callbacks.CbType;
import flixel.addons.nape.FlxNapeSprite;

class Mine extends FlxNapeSprite {
	var integrity:Int;
	var damage:Int;

	var maxVel:Int;

	public static var CBODYMine = new CbType();

	var direction:Vec2;

	var player:Player;

	var playerPos:Vec2;

	public function new() {
		super();
	}

	public function create(_x:Int = 0, _y:Int = 0, _player:Player) {
		/// POSITION
		x = _x;
		y = _y;

		/// STATS
		damage = 8;
		integrity = 50;
		maxVel = 550;

		/// REFERENCES
		player = _player;

		/// GRAPHIC
		loadGraphic(AssetPaths.mine__png);
		setGraphicSize(35, 35);

		/// BODY
		createCircularBody(15);
		setBodyMaterial(1, 0.2, 0.4, 2, 0.001);
		body.cbTypes.add(CBODYMine);
		body.userData.data = this;
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		MoveTowardsPlayer();
	}

	private function MoveTowardsPlayer() {
		direction = new Vec2(player.x, player.y);
		direction.subeq(body.position);
		direction.length = 10;

		body.applyImpulse(direction);

		if(body.velocity.length > maxVel){
			body.velocity.length = maxVel;
		}
	}
}
