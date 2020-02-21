import flixel.FlxG;
import flixel.util.FlxSpriteUtil;
import flixel.FlxSprite;
import flixel.addons.nape.FlxNapeSprite;

class Asteroid extends FlxNapeSprite {
	// asteroid sizes are small(0), medium(1), large(2), huge(3)
	var size:Int;

	public function new() {
		super();

		// make it not bounce
		elasticity = 0;
		// smooth rotations, bad performance
		antialiasing = true;
	}

	public function create(_x:Int = 0, _y:Int = 0, _xVelocity:Float = 0, _yVelocity:Float = 0, _size:Int = -1):Asteroid {
		// I don't get why and if you need to set true on visible and active when you are already setting exist
		// call update() and draw() on it
		exists = true;
		// call draw() on it
		visible = true;
		// call update() on it
		active = true;
		// make it collidable
		solid = true;

		// if we created the asteroid and set at least 1 coordinate or its size
		if (_x != 0 || _y != 0 || _size != -1) {
			x = _x;
			y = _y;
			body.velocity.setxy(_xVelocity, _yVelocity);
			//body.angularVel = (Math.abs(velocity.x) + Math.abs(velocity.y));
			size = _size;
		} else {
			x = FlxG.random.int(0, FlxG.width);
			y = FlxG.random.int(0, FlxG.height);
			body.velocity.setxy(FlxG.random.float(0, 100), FlxG.random.float(0, 100));
			//body.angularVel = (Math.abs(velocity.x) + Math.abs(velocity.y));
			size = FlxG.random.int(0, 1);
		}

		AssignSprite();

		return this;
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
	}

	private function AssignSprite() {
		if (size == 0) {
			loadGraphic("assets/images/Asteroids/Asteroid_Small.png");
			createCircularBody(10);
			setBodyMaterial(0.1, 0.2, 0.4, 1, 0.001);
		} else if (size == 1) {
			// 50% chance of being the mineral version
			if (FlxG.random.bool(50)) {
				loadGraphic("assets/images/Asteroids/Asteroid_Medium.png");
			} else {
				loadGraphic("assets/images/Asteroids/Asteroid_Medium_Minerals.png");
			}
			createCircularBody(20);
			setBodyMaterial(0.1, 0.2, 0.4, 10, 0.001);
		} else if (size == 2) {
			if (FlxG.random.bool(50)) {
				loadGraphic("assets/images/Asteroids/Asteroid_Large.png");
			} else {
				loadGraphic("assets/images/Asteroids/Asteroid_Large_Minerals.png");
			}
		} else if (size == 3) {
			if (FlxG.random.bool(50)) {
				loadGraphic("assets/images/Asteroids/Asteroid_Huge.png");
			} else {
				loadGraphic("assets/images/Asteroids/Asteroid_Huge_Minerals.png");
			}
		}
	}
}
