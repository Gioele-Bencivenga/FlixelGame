import flixel.effects.FlxFlicker;
import flixel.util.FlxSpriteUtil;
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
	var hittable:Bool; // flag for when the player can be hit (player has invincibility frames when flickering)

	var shootTimer:FlxTimer; // timer used to reset the canShoot flag

	public var thrustEmitter:FlxEmitter; // particle emitter for thrusters
	public var explosionEmitter:FlxEmitter; // practicle emitter for player's explosion

	public static var CBODYPlayer:CbType = new CbType(); // callback bodytype needed for collision listening

	public function new() {
		super(FlxG.width / 2, FlxG.height / 2); // we create the obj at the centre of the screen

		/// STATS STUFF
		integrity = 50;
		turnVel = 150;
		thrust = 20;
		maxVel = 500;
		hittable = true;
		// shooting
		shotDamage = 4;
		canShoot = true;
		rateOfFire = 0.15; // 1 shot each rateOfFire seconds

		/// GRAPHIC STUFF
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

		/// EMITTER STUFF
		thrustEmitter = new FlxEmitter(x, y);
		explosionEmitter = new FlxEmitter(x, y);
		// emitters are just FlxGroups that help you recycle particles for repeated usage.
		// As such, we need to add the particle into the emitters before we can use them.
		for (i in 0...50) {
			var p = new FlxParticle();
			p.loadGraphic(AssetPaths.thrustFire__png);
			thrustEmitter.add(p);
		}
		for (i in 0...100) {
			var p = new FlxParticle();
			p.loadGraphic(AssetPaths.thrustFire__png);
			explosionEmitter.add(p);
		}
		SetEmitterProperties();
	}

	private function SetEmitterProperties() {
		thrustEmitter.scale.set(1, 1, 2, 2, 3, 3, 4, 4);
		thrustEmitter.lifespan.set(0.3, 0.5);
		thrustEmitter.speed.set(1000);
		thrustEmitter.alpha.set(1, 1, 0.2, 0.4);
		thrustEmitter.color.set(FlxColor.ORANGE, FlxColor.YELLOW, FlxColor.GRAY, FlxColor.RED);

		explosionEmitter.scale.set(2, 2, 3, 3, 4, 4, 5, 5);
		explosionEmitter.lifespan.set(1.5, 3);
		explosionEmitter.speed.set(500, 1500);
		explosionEmitter.alpha.set(1, 1, 0.2, 0.4);
		explosionEmitter.color.set(FlxColor.ORANGE, FlxColor.YELLOW, FlxColor.GRAY, FlxColor.RED);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		UpdateEmitterPosAndAngle();
		ProcessInput();

		if (body.velocity.length > maxVel) {
			body.velocity.length = maxVel;
		}
	}

	private function UpdateEmitterPosAndAngle() {
		thrustEmitter.focusOn(this); // instead of emitter.setPosition((x + (width / 2)), (y + (height / 2)));
		thrustEmitter.launchAngle.set(angle - 165, angle - 195);
	}

	private function ProcessInput() {
		/// MOVEMENT
		if (FlxG.keys.anyPressed([W, UP])) { // if any key from the array is pressed
			direction = Vec2.fromPolar(thrust, body.rotation);
			body.applyImpulse(direction); // applying the impulse in the direction vector moves the body in the direction it's facing

			thrustEmitter.start(false, 0.01, 1);
		}
		if (FlxG.keys.anyPressed([S, DOWN])) {
			if (body.velocity.length <= maxVel) {
				direction = Vec2.fromPolar(-(thrust / 2), body.rotation);
				body.applyImpulse(direction);
			}
		}
		if (FlxG.keys.anyPressed([A, LEFT])) {
			body.applyAngularImpulse(-turnVel);
		}
		if (FlxG.keys.anyPressed([D, RIGHT])) {
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
		shootTimer.start(rateOfFire, function(_) canShoot = true, 1); // we start the timer so that after rateOfFire seconds we can shoot again
	}

	public function ChangeIntegrity(_amount:Int) {
		if (integrity > 0 && hittable) {
			integrity += _amount;
			hittable = false;

			FlxSpriteUtil.flicker(this, 1, 0.05, true, true, function(_) hittable = true); // if the syntax scares you see inlineFunctions.md
		}

		if (integrity <= 0) {
			kill();
		}
	}
	
	override public function kill() {
		explosionEmitter.focusOn(this);
		explosionEmitter.start(true);
		
		super.kill();
	}

	public function GetIntegrity():Int {
		return integrity;
	}
}
