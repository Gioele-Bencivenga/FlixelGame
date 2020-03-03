import flixel.util.FlxColor;
import flixel.math.FlxPoint;
import nape.phys.BodyType;
import flixel.util.FlxTimer;
import nape.callbacks.*;
import flixel.effects.particles.FlxParticle;
import flixel.effects.particles.FlxEmitter;
import nape.geom.Vec2;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;

class Player extends FlxNapeSprite {
	var thrust:Float; // aka speed
	var integrity:Int; // aka health
	var turnVel:Float; // spinning speed
	var maxVel:Float; // maximum velocity

	var direction:Vec2; // vector used in the movement

	var shotDamage:Int; // damage done by shooting
	var rateOfFire:Float; // seconds between each shot

	var canShoot:Bool; // pretty self explanatory flag

	var shootTimer:FlxTimer; // timer used to reset the canShoot flag

	public var emitter:FlxEmitter; // particle emitter for thrusters

	public static var CBODYPlayer:CbType = new CbType(); // callback bodytype needed for collision listening

	public function new() {
		super(FlxG.width / 2, FlxG.height / 2); // we create the obj at the centre of the screen

		/// STATS STUFF
		integrity = 50;
		// turnVel = 1;
		turnVel = 150;
		thrust = 20;
		maxVel = 500;
		// shooting
		shotDamage = 4;
		canShoot = true;
		rateOfFire = 0.20; // 1 shot each rateOfFire seconds

		/// GRAPHIC STUFF
		antialiasing = true; // smooths rotations, affects perfomance
		loadGraphic(AssetPaths.ship__png);
		setGraphicSize(50);

		/// PHYSICS STUFF
		createCircularBody(22); // creating hitbox
		setBodyMaterial(0.1, 0.2, 0.4, 1, 0.001);
		setDrag(0.999, 0.93); // setting a small amount of drag so that the player will slow down over time
		body.cbTypes.add(CBODYPlayer);
		body.userData.data = this; // we add this to the body's userdata so that we can access variables when colliding

		/// TIMER STUFF
		shootTimer = new FlxTimer();

		/// PARTICLE STUFF
		emitter = new FlxEmitter(x, y); // initializing the emitter

		// emitters are just FlxGroups that help you recycle particles for repeated usage.
		// As such, we need to add the particle into the emitters before we can use them.
		for (i in 0...50) {
			var p = new FlxParticle();
			p.makeGraphic(10, 10, FlxColor.ORANGE);
			p.exists = false;
			emitter.add(p);
		}

		emitter.lifespan.set(0.1, 0.6);
		emitter.setSize(25, 25);
		emitter.speed.set(500);
		emitter.launchAngle.set(body.rotation);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		emitter.setPosition(x + (width / 2), y + (height / 2));
		emitter.launchAngle.set((body.rotation * 57.5) + 180);
		ProcessInput();
	}

	private function ProcessInput() {
		/// MOVEMENT
		if (FlxG.keys.anyPressed([W, UP])) { // if any key from the array is pressed
			if (body.velocity.length <= maxVel) {
				direction = Vec2.fromPolar(thrust, body.rotation);
				body.applyImpulse(direction); // applying the impulse in the direction vector moves the body in the direction it's facing
				emitter.start(false, 0.01, 1);
			}
		}
		if (FlxG.keys.anyPressed([S, DOWN])) {
			if (body.velocity.length <= maxVel) {
				direction = Vec2.fromPolar(-(thrust / 2), body.rotation);
				body.applyImpulse(direction);
			}
		}
		if (FlxG.keys.anyPressed([A, LEFT])) {
			// body.angularVel -= turnVel;
			body.applyAngularImpulse(-turnVel);
		}
		if (FlxG.keys.anyPressed([D, RIGHT])) {
			// body.angularVel += turnVel;
			body.applyAngularImpulse(turnVel);
		}

		/// SHOOTING
		if (FlxG.keys.anyPressed([J, SPACE])) {
			if (canShoot) {
				Shoot();
			}
		}
	}

	private function Shoot() {
		var bullet1 = PlayState.bullets.recycle(Bullet.new);
		var bullet2 = PlayState.bullets.recycle(Bullet.new);

		bullet1.create(x + (width / 2), y + (height / 2), 45, body.rotation + 0.01, shotDamage);
		bullet2.create(x + (width / 2), y + (height / 2), 45, body.rotation - 0.01, shotDamage);

		canShoot = false;
		shootTimer.start(rateOfFire, ResetShotFlag, 1); // we start the timer so that after rateOfFire seconds we can shoot again
	}

	private function ResetShotFlag(_timer:FlxTimer) {
		canShoot = true;
	}

	public function ChangeIntegrity(_amount:Int) {
		if (integrity > 0) {
			integrity += _amount;
		}

		if (integrity <= 0) {
			kill();
		}
	}

	public function GetIntegrity():Int {
		return integrity;
	}
}
