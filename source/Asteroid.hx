import nape.callbacks.*;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;

// the "to Int" syntax allows implicit casting of the enum
enum abstract AsteroidSize(Int) to Int {
	var Small = 0;
	var Medium = 1;
	var Large = 2;
	var Huge = 3;

	@:op(A - B) function subtract(rhs:Int):AsteroidSize; // to allow subtraction operations on the enum
}

class Asteroid extends FlxNapeSprite {
	// the following are properties, their get access is default and their set access is null, meaning they can be read like a variable but only set from withing this class
	public var integrity(default, null):Int; // health
	public var damage(default, null):Int;
	public var size(default, null):AsteroidSize;

	public static var CBODYAsteroid:CbType = new CbType(); // callback bodytype needed for collision listening

	public function new() {
		super();
	}

	public function create(_x:Int = 0, _y:Int = 0, _size:AsteroidSize = Small, _xVel = 0, _yVel = 0) {
		x = _x;
		y = _y;

		/// SIZE ASSIGNMENT (sometimes _size is an unexpected value so we fix it here)
		if (_size != Small && _size != Medium && _size != Large && _size != Huge) {
			_size = Small;
		}
		size = _size;

		AssignDamage();
		AssignIntegrity();
		AssignSprite();
		AssignBody();

		body.velocity.setxy(_xVel, _yVel);
		body.angularVel = FlxG.random.float(-7, 7);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
	}

	override public function kill() {
		super.kill();
	}

	private function AssignIntegrity() {
		if (size == Small) {
			integrity = 8;
		} else if (size == Medium) {
			integrity = 16;
		} else if (size == Large) {
			integrity = 26;
		} else if (size == Huge) {
			integrity = 36;
		} else {
			trace("Size is different than expected values?!?!?");
		}
	}

	private function AssignDamage() {
		damage = size;
	}

	private function AssignBody() {
		if (size == Small) {
			createCircularBody(10);
			setBodyMaterial(2, 0.2, 0.4, 2, 0.001);
		} else if (size == Medium) {
			createCircularBody(23);
			setBodyMaterial(1.5, 0.2, 0.4, 3, 0.001);
		} else if (size == Large) {
			createCircularBody(50);
			setBodyMaterial(1, 0.2, 0.4, 5, 0.001);
		} else if (size == Huge) {
			createCircularBody(90);
			setBodyMaterial(0.5, 0.2, 0.4, 8, 0.001);
		} else {
			trace("Houston, we have a problem with size in AssignBody()");
		}
		body.cbTypes.add(CBODYAsteroid);
		body.userData.data = this;
	}

	private function AssignSprite() {
		var minerals = FlxG.random.bool(); // 50% chance of having minerals
		if (size == Small) {
			loadGraphic(AssetPaths.Asteroid_Small__png);
		} else if (size == Medium) {
			// 50% chance of being the mineral version
			if (minerals) {
				loadGraphic(AssetPaths.Asteroid_Medium__png);
			} else {
				loadGraphic(AssetPaths.Asteroid_Medium_Minerals__png);
			}
		} else if (size == Large) {
			if (minerals) {
				loadGraphic(AssetPaths.Asteroid_Large__png);
			} else {
				loadGraphic(AssetPaths.Asteroid_Large_Minerals__png);
			}
		} else if (size == Huge) {
			if (minerals) {
				loadGraphic(AssetPaths.Asteroid_Huge__png);
			} else {
				loadGraphic(AssetPaths.Asteroid_Huge_Minerals__png);
			}
		} else {
			trace("Houston, we have a problem with asteroid size in AssignSprite()");
		}
	}

	public function TakeDamage(_amount:Int) {
		if (integrity > 0) {
			integrity -= _amount;
		}

		if (integrity <= 0) {
			kill();
		}
	}
}
