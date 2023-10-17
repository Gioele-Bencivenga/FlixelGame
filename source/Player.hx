import flixel.sound.FlxSound;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import nape.callbacks.*;
import flixel.effects.particles.FlxParticle;
import flixel.effects.particles.FlxEmitter;
import nape.geom.Vec2;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;

class Player extends FlxNapeSprite {
	var thrust:Float; // aka speed

	public var integrity(default, null):Int; // aka health, it's a property so it can be read from wherever but only set from inside this class
	public var maxIntegrity(default, null):Int;

	var turnVel:Float; // spinning speed
	var maxVel:Float; // maximum velocity

	var direction:Vec2; // vector used in the movement

	var shotDamage:Int; // damage done by shooting
	var rateOfFire:Float; // seconds between each shot

	var canShoot:Bool; // pretty self explanatory flag
	var hittable:Bool; // flag for when the player can be hit (player has invincibility frames when flickering)
	var goingForward:Bool; // flag used by the emitter to know if it should be shooting backward or forward

	var shootTimer:FlxTimer; // timer used to reset the canShoot flag

	public var thrustEmitter:FlxEmitter; // particle emitter for thrusters
	public var explosionEmitter:FlxEmitter; // practicle emitter for player's explosion

	public static var CBODYPlayer:CbType = new CbType(); // callback bodytype needed for collision listening

	public var score:Int;

	var shotSound:FlxSound; // sound played when shooting tha lazer
	var deathSound:FlxSound; // sound played when player explodes
	var hitSound:FlxSound; // sound played when player is hit (only when it flickers)
	var thrusterSound:FlxSound; // sound player when using the engines

	public function new() {
		super(FlxG.width / 2, FlxG.height / 2); // we create the obj at the centre of the screen

		/// STATS STUFF
		maxIntegrity = 50;
		integrity = maxIntegrity;
		turnVel = 170;
		thrust = 50;
		maxVel = 540;
		hittable = true;
		score = 0;
		goingForward = true;
		// shooting
		shotDamage = 7;
		canShoot = true;
		rateOfFire = 0.23; // 1 shot each rateOfFire seconds

		/// GRAPHIC STUFF
		loadGraphic(AssetPaths.ship__png);
		setGraphicSize(50);

		/// PHYSICS STUFF
		createCircularBody(22); // creating hitbox
		setBodyMaterial(1, 0.001, 0.001, 1, 0.001);
		setDrag(0.999, 0.90); // setting a small amount of drag so that the player will slow down over time
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

		/// SOUND STUFF
		shotSound = FlxG.sound.load(AssetPaths.playerLaser__wav);
		shotSound.volume = 0.2;
		deathSound = FlxG.sound.load(AssetPaths.playerExp__wav);
		hitSound = FlxG.sound.load(AssetPaths.playerHit__wav);
		thrusterSound = FlxG.sound.load(AssetPaths.playerThrusters__wav);
		thrusterSound.volume = 0.05;
	}

	private function SetEmitterProperties() {
		thrustEmitter.scale.set(1, 1, 2, 2, 3, 3, 4, 4);
		thrustEmitter.lifespan.set(0.3, 0.5);
		thrustEmitter.speed.set(1000);
		thrustEmitter.alpha.set(1, 1, 0.2, 0.4);
		thrustEmitter.color.set(FlxColor.YELLOW);

		explosionEmitter.scale.set(2, 2, 3, 3, 4, 4, 5, 5);
		explosionEmitter.lifespan.set(1.5, 3);
		explosionEmitter.speed.set(500, 1500);
		explosionEmitter.alpha.set(1, 1, 0.2, 0.4);
		explosionEmitter.color.set(FlxColor.ORANGE, FlxColor.YELLOW, FlxColor.GRAY, FlxColor.RED);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		ProcessInput();
		UpdateEmitterPosAndAngle();

		if (goingForward) {
			maxVel = 540;
		} else {
			maxVel = 500;
		}

		if (body.velocity.length > maxVel) {
			body.velocity.length = maxVel;
		}
	}

	private function UpdateEmitterPosAndAngle() {
		thrustEmitter.focusOn(this); // instead of emitter.setPosition((x + (width / 2)), (y + (height / 2)));
		if (goingForward) {
			thrustEmitter.lifespan.set(0.3, 0.5);
			thrustEmitter.launchAngle.set(angle - 165, angle - 195);
		} else {
			thrustEmitter.lifespan.set(0.1, 0.2);
			thrustEmitter.launchAngle.set(angle + 15, angle - 15);
		}
	}

	private function ProcessInput() {
		/// MOVEMENT
		if (FlxG.keys.anyPressed([W, UP])) { // if any key from the array is pressed
			direction = Vec2.fromPolar(thrust, body.rotation);
			body.applyImpulse(direction); // applying the impulse in the direction vector moves the body in the direction it's facing

			thrusterSound.play(false, 0, 950);
			goingForward = true;
			thrustEmitter.start(false, 0.01, 1);
		}
		if (FlxG.keys.anyPressed([S, DOWN])) {
			direction = Vec2.fromPolar(-(thrust / 3), body.rotation);
			body.applyImpulse(direction);

			thrusterSound.play(false, 0, 850);
			goingForward = false;
			thrustEmitter.start(false, 0.01, 1);
		}
		if (FlxG.keys.anyPressed([A, LEFT])) {
			body.applyAngularImpulse(-turnVel);
		}
		if (FlxG.keys.anyPressed([D, RIGHT])) {
			body.applyAngularImpulse(turnVel);
		}

		if(FlxG.keys.anyJustReleased([W, UP, S, DOWN])){
			thrusterSound.pause();
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
		var bullet3 = PlayState.bullets.recycle(Bullet.new);

		bullet1.create(x + (width / 2), y + (height / 2), 45, body.rotation + 0.05, shotDamage);
		bullet2.create(x + (width / 2), y + (height / 2), 46, body.rotation, shotDamage);
		bullet3.create(x + (width / 2), y + (height / 2), 45, body.rotation - 0.05, shotDamage);

		shotSound.play(true);

		canShoot = false;
		shootTimer.start(rateOfFire, function(_) canShoot = true, 1); // we start the timer so that after rateOfFire seconds we can shoot again
	}

	public function TakeDamage(_amount:Int) {
		if (_amount > 0) {
			if (integrity > 0 && hittable) {
				integrity -= _amount;
				hittable = false;

				FlxSpriteUtil.flicker(this, 1, 0.05, true, true, function(_) hittable = true); // if the syntax scares you see inlineFunctions.md
				hitSound.play();
				FlxG.camera.shake(0.02, 0.2);
			}

			if (integrity <= 0) {
				kill();
			}
		}

		if (integrity < maxIntegrity / 2) {
			thrustEmitter.color.set(FlxColor.ORANGE);
		}
		
		if (integrity < maxIntegrity / 4) {
			thrustEmitter.color.set(FlxColor.RED);
		}
	}

	override public function kill() {
		FlxG.camera.shake(0.07, 1);

		explosionEmitter.focusOn(this);
		explosionEmitter.start(true);

		deathSound.play();

		super.kill();
	}
}
