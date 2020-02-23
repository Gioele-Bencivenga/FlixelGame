import flixel.addons.nape.FlxNapeSpace;
import nape.callbacks.*;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;

class Asteroid extends FlxNapeSprite {
	// asteroid sizes are small(0), medium(1), large(2), huge(3)
	public var size:Int;

	// callback bodies needed for collision listening
	var CBODYAsteroid:CbType;

	// each asteroid starts with 2 integrity, hitting an asteroid with 1 less size only takes 1 integrity away
	// hitting an asteroid of equal or bigger size takes all integrity away, breaking the ateroid into smaller
	// chunks, hitting an asteroid with less than 1 less size doesn't do any damage
	// this mechanic may change
	var integrity:Int;

	public function new() {
		super();

		// smooth rotations, bad performance
		antialiasing = true;
	}

	public function create(_x:Int = 0, _y:Int = 0, _size:Int = -1):Asteroid {
		// I don't get why and if you need to set true on visible and active when you are already setting exist
		// call update() and draw() on it
		exists = true;
		// call draw() on it
		visible = true;
		// call update() on it
		active = true;

		// if we created the asteroid and set at least 1 coordinate or its size
		if (_x != 0 || _y != 0 || _size != -1) {
			x = _x;
			y = _y;
			size = _size;
		} else {
			x = FlxG.random.int(0, FlxG.width);
			y = FlxG.random.int(0, FlxG.height);
			size = FlxG.random.int(0, 3);
		}

		AssignSprite();

		// adding CBODY
		CBODYAsteroid = new CbType();
		body.cbTypes.add(CBODYAsteroid);

		// we create an interaction listener that listens for the begin of a collision interaction between asteroids and any other body, calling OnCollision
		var collisionListener = new InteractionListener(CbEvent.BEGIN, InteractionType.COLLISION, CBODYAsteroid, CbType.ANY_BODY, OnCollision);
		FlxNapeSpace.space.listeners.add(collisionListener);

		return this;
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
	}

	private function OnCollision(clbk:InteractionCallback) {
		trace("Asteroid collided");
		// find out how to get information from the body that we collided with
		//this.integrity -= clbk.int1.castBody
	}

	private function AssignSprite() {
		if (size == 0) {
			loadGraphic("assets/images/Asteroids/Asteroid_Small.png");
			createCircularBody(10);
			setBodyMaterial(1, 0.2, 0.4, 3, 0.001);
		} else if (size == 1) {
			// 50% chance of being the mineral version
			if (FlxG.random.bool(50)) {
				loadGraphic("assets/images/Asteroids/Asteroid_Medium.png");
			} else {
				loadGraphic("assets/images/Asteroids/Asteroid_Medium_Minerals.png");
			}
			createCircularBody(23);
			setBodyMaterial(1, 0.2, 0.4, 4, 0.001);
		} else if (size == 2) {
			if (FlxG.random.bool(50)) {
				loadGraphic("assets/images/Asteroids/Asteroid_Large.png");
			} else {
				loadGraphic("assets/images/Asteroids/Asteroid_Large_Minerals.png");
			}
			createCircularBody(50);
			setBodyMaterial(1, 0.2, 0.4, 6, 0.001);
		} else if (size == 3) {
			if (FlxG.random.bool(50)) {
				loadGraphic("assets/images/Asteroids/Asteroid_Huge.png");
			} else {
				loadGraphic("assets/images/Asteroids/Asteroid_Huge_Minerals.png");
			}
			createCircularBody(90);
			setBodyMaterial(1, 0.2, 0.4, 8, 0.001);
		} else if (size == -1) {
			trace("Houston, we got a problem");
		}
	}
}
