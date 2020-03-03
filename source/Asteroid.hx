import nape.callbacks.*;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;

class Asteroid extends FlxNapeSprite {
	var size:Int; // asteroid sizes are small(0), medium(1), large(2), huge(3)
	var integrity:Int; // health
	var damage:Int;

	public static var CBODYAsteroid:CbType = new CbType(); // callback bodytype needed for collision listening

	public function new() {
		super();

		antialiasing = true; // smooth rotations, bad performance
	}

	public function create(_x:Int = 0, _y:Int = 0, _size:Int = 0, _xVel = 0, _yVel = 0) {
		x = _x;
		y = _y;

		// sometimes size will reach different values (usually when colliding with asteroids of size 1)
		if (_size != 0 && _size != 1 && _size != 2 && _size != 3) {
			_size = 0;
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

	private function AssignIntegrity() {
		if (size == 0) {
			integrity = 5;
		} else if (size == 1) {
			integrity = 15;
		} else if (size == 2) {
			integrity = 25;
		} else if (size == 3) {
			integrity = 35;
		} else {
			trace("Size is different than expected values?!?!?");
		}
	}

	private function AssignDamage() {
		damage = size + 1;
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

	public function GetDamage() {
		return damage;
	}
}
