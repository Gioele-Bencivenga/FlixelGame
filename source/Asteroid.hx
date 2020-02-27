import nape.callbacks.*;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;

class Asteroid extends FlxNapeSprite {
	// asteroid sizes are small(0), medium(1), large(2), huge(3)
	var size:Int;

	// callback bodytype needed for collision listening
	// needs to be public since a getter method won't work for reasons beyond my comprehension
	public static var CBODYAsteroid:CbType = new CbType();

	var integrity:Int; // health 

	public function new() {
		super();

		antialiasing = true; // smooth rotations, bad performance
	}

	public function create(_x:Int = 0, _y:Int = 0, _size:Int = -1, _xVel = 0, _yVel = 0):Asteroid {
		revive();

		if (_x != 0) {
			x = _x;
		} else {
			x = FlxG.random.int(0, FlxG.width);
		}
		if (_y != 0) {
			y = _y;
		} else {
			y = FlxG.random.int(0, FlxG.height);
		}
		if (_size != -1) {
			size = _size;
		} else {
			size = FlxG.random.int(0, 3);
		}

		AssignSprite();
		AssignIntegrity();
		AssignBody();

		body.velocity.setxy(_xVel, _yVel);
		body.applyAngularImpulse(FlxG.random.float(50, 200)); // figure out why they don't spin

		return this;
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
	}

	private function AssignIntegrity() {
		if (size == 0) {
			integrity = 2;
		} else if (size == 1) {
			integrity = 4;
		} else if (size == 2) {
			integrity = 8;
		} else if (size == 3) {
			//integrity = 15;
			integrity = 1;
		} else {
			trace("Size is different than expected values?!?!?");
		}
	}

	private function AssignBody() {
		if (size == 0) {
			createCircularBody(10);
			setBodyMaterial(1, 0.2, 0.4, 2, 0.001);
		} else if (size == 1) {
			createCircularBody(23);
			setBodyMaterial(1, 0.2, 0.4, 3, 0.001);
		} else if (size == 2) {
			createCircularBody(50);
			setBodyMaterial(1, 0.2, 0.4, 5, 0.001);
		} else if (size == 3) {
			createCircularBody(90);
			setBodyMaterial(1, 0.2, 0.4, 7, 0.001);
		} else {
			trace("Houston, we have a problem with size in AssignBody()");
		}
		body.cbTypes.add(CBODYAsteroid);
		body.userData.data = this;
	}

	private function AssignSprite() {
		var minerals = FlxG.random.bool(); // 50% chance of having minerals
		if (size == 0) {
			loadGraphic(AssetPaths.Asteroid_Small__png);
		} else if (size == 1) {
			// 50% chance of being the mineral version
			if (minerals) {
				loadGraphic(AssetPaths.Asteroid_Medium__png);
			} else {
				loadGraphic(AssetPaths.Asteroid_Medium_Minerals__png);
			}
		} else if (size == 2) {
			if (minerals) {
				loadGraphic(AssetPaths.Asteroid_Large__png);
			} else {
				loadGraphic(AssetPaths.Asteroid_Large_Minerals__png);
			}
		} else if (size == 3) {
			if (minerals) {
				loadGraphic(AssetPaths.Asteroid_Huge__png);
			} else {
				loadGraphic(AssetPaths.Asteroid_Huge_Minerals__png);
			}
		} else {
			trace("Houston, we have a problem with asteroid size in AssignSprite()");
		}
	}

	public function ChangeIntegrity(_amount:Int) {
		if (integrity > 0) {
			integrity += _amount;
		}

		if (integrity <= 0) {
			kill();
		}
	}

	public function GetIntegrity() {
		return integrity;
	}

	public function GetSize() {
		return size;
	}
}
