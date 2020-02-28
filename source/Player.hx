import nape.callbacks.*;
import flixel.effects.particles.FlxParticle;
import flixel.effects.particles.FlxEmitter;
import nape.geom.Vec2;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;

class Player extends FlxNapeSprite {
	var thrust:Float; // aka speed
	var integrity:Int; // aka health
	var turnVelocity:Float; // spinning speed

	var direction:Vec2; // vector used in the movement

	var emitter:FlxEmitter; // particle emitter for thrusters

	public static var CBODYPlayer:CbType = new CbType(); // callback bodytype needed for collision listening

	public function new() {
		super(FlxG.width / 2, FlxG.height / 2); // we create the obj at the centre of the screen

		/// STATS STUFF
		integrity = 10;
		turnVelocity = 1;
		thrust = 1.8;

		/// GRAPHIC STUFF
		antialiasing = true; // smooths rotations, affects perfomance
		loadGraphic(AssetPaths.ship__png);

		/// PHYSICS STUFF
		createCircularBody(15); // creating hitbox
		setBodyMaterial(0.1, 0.2, 0.4, 1, 0.001);
		setDrag(0.995, 0.85); // setting a small amount of drag so that the player will slow down over time
		body.cbTypes.add(CBODYPlayer);
		body.userData.data = this; // we add this to the body's userdata so that we can access variables when colliding

		/// PARTICLE STUFF
		emitter = new FlxEmitter(x, y); // initializing the emitter

		// emitters are just FlxGroups that help you recycle particles for repeated usage.
		// As such, we need to add the particle into the emitters before we can use them.
		for (i in 0...100) {
			var p = new FlxParticle();
			p.makeGraphic(10, 10, 0xFFFFFFFF);
			p.exists = false;
			emitter.add(p);
		}
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		ProcessMovement();
	}

	private function ProcessMovement() {
		if (FlxG.keys.anyPressed([W, UP])) { // if any key from the array is pressed
			direction = Vec2.fromPolar(thrust, body.rotation);
			body.applyImpulse(direction); // applying the impulse in the direction vector moves the body in the direction it's facing
		}
		if (FlxG.keys.anyPressed([S, DOWN])) {
			direction = Vec2.fromPolar(-(thrust / 2), body.rotation);
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
		
		if (integrity <= 0){
			kill();
		}
	}

	public function GetIntegrity():Int {
		return integrity;
	}
}
