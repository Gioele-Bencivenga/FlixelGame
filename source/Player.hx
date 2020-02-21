import nape.util.Debug;
import nape.geom.Vec3;
import js.html.svg.Point;
import nape.geom.Vec2;
import flixel.util.FlxSpriteUtil;
import flixel.math.FlxPoint;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;

class Player extends FlxNapeSprite {
	var thrust:Float = 1.7;
	// the speed at which the player is able to turn left/right
	var turnVelocity:Float = 1;

	// vector used in the movement
	var direction:Vec2;

	public function new() {
		// we create the sprite at the centre of the screen
		super(FlxG.width / 2, FlxG.height / 2);

		// setting a small amount of drag so that the player will slow down over time
		setDrag(0.995, 0.85);

		// smooth rotations, affects perfomance
		antialiasing = true;

		loadGraphic("assets/images/Spaceships/ship.png");
		createCircularBody(15);
		setBodyMaterial(0.1, 0.2, 0.4, 1, 0.001);
		body.debugDraw = false;
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		ProcessMovement();
	}

	private function ProcessMovement() {
		// if any key from the array is pressed
		if (FlxG.keys.anyPressed([W, UP])) {
			direction = Vec2.fromPolar(thrust, body.rotation);
			// applying the impulse in the direction vector moves the body in the direction it's facing
			body.applyImpulse(direction);
		}
		if (FlxG.keys.anyPressed([S, DOWN])) {
			direction = Vec2.fromPolar(-(thrust / 2), body.rotation);
			// applying the impulse in the direction vector moves the body in the direction it's facing
			body.applyImpulse(direction);
		}
		if (FlxG.keys.anyPressed([A, LEFT])) {
			body.angularVel -= turnVelocity;
		}
		if (FlxG.keys.anyPressed([D, RIGHT])) {
			body.angularVel += turnVelocity;
		}
	}
}
