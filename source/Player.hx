import flixel.util.FlxSpriteUtil;
import flixel.math.FlxPoint;
import flixel.FlxG;
import flixel.FlxSprite;

class Player extends FlxSprite {
	var thrust:Int = 200;
	// the speed at which the player is able to turn left/right
	var turnVelocity = 300;

	public function new() {
		// we create the sprite at the centre of the screen
		super(FlxG.width / 2, FlxG.height / 2);

		// setting a small amount of drag so that the player will slow down over time
		drag.x = 5;
		drag.y = 5;

		// make it bounce
		elasticity = 1;
		// make it collidable
		solid = true;

		// enlarging hitbox
		width *= 2;
		height *= 2;
		// centering bounding box with graphics
		//centerOffsets();

		// smooth rotations, affects perfomance
		antialiasing = true;
	}

	override public function update(elapsed:Float) {
		ProcessMovement();

		// enable screenwrap for testing, hopefully temporary
		FlxSpriteUtil.screenWrap(this);

		super.update(elapsed);
	}

	private function ProcessMovement() {
		// we reset this so the player stops spinning when the key is released
		angularVelocity = 0;
		// if any key from the array is pressed
		if (FlxG.keys.anyPressed([A, LEFT])) {
			angularVelocity -= turnVelocity;
		}
		if (FlxG.keys.anyPressed([D, RIGHT])) {
			angularVelocity += turnVelocity;
		}

		// we reset this so the player stops accelerating when the key is released
		acceleration.set();
		if (FlxG.keys.anyPressed([W, UP])) {
			// we set the acceleration on the X axis (this would make the sprite move down the screen)
			acceleration.set(thrust, 0);

			// we rotate the acceleration according to the sprite's rotation
			// without this, no matter the rotation the sprite would only move down
			acceleration.rotate(FlxPoint.weak(0, 0), angle);
		}
	}
}
