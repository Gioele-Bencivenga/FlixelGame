import nape.callbacks.*;
import flixel.effects.particles.FlxParticle;
import flixel.effects.particles.FlxEmitter;
import nape.geom.Vec2;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;

class Player extends FlxNapeSprite {
	var thrust:Float = 1.7;
	// the speed at which the player is able to turn left/right
	var turnVelocity:Float = 1;

	// vector used in the movement
	var direction:Vec2;

	// particle emitter for thrusters
	var emitter:FlxEmitter;

	// callback bodytype needed for collision listening
	public static var CBODYPlayer:CbType;

	var integrity:Int = 10;

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

		// initializing the emitters
		emitter = new FlxEmitter(x, y);

		// emitters are just FlxGroups that help you recycle particles for repeated usage.
		// As such, we need to add the particle into the emitters before we can use them.
		for (i in 0...100) {
			var p = new FlxParticle();
			p.makeGraphic(10, 10, 0xFFFFFFFF);
			p.exists = false;
			emitter.add(p);
		}

		// adding CBODY
		CBODYPlayer = new CbType();
		body.cbTypes.add(CBODYPlayer);
		body.userData.data = this;
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

	public function ChangeIntegrity(_amount:Int) {
		if (integrity > 0) {
			integrity += _amount;
		}
	}

	public function GetIntegrity():Int {
		return integrity;
	}
}
