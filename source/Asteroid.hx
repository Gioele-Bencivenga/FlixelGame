import flixel.util.FlxSpriteUtil;
import flixel.FlxSprite;

class Asteroid extends FlxSprite {
	public function new() {
		super();

		// make it bounce
		elasticity = 1;
		// smooth rotations, bad performance
		antialiasing = true;
	}

	public function create(_x:Int = 0, _y:Int = 0, _xVelocity:Float = 0, _yVelocity:Float = 0):Asteroid {
		// I don't get why and if you need to set true on visible and active when you are already setting exist
		// call update() and draw() on it
		exists = true;
		// call draw() on it
		visible = true;
		// call update() on it
		active = true;
		// make it collidable
        solid = true;
        
        loadGraphic("assets/images/Asteroid2.png");

		// enlarging hitbox
		width *= 2;
		height *= 2;
        // centering bounding box with graphics
		//centerOffsets();  watch out! enabling this actually breaks the screenwrapping of the asterod image 

        // if we created the asteroid and set at least 1 coordinate
		if (_x != 0 || _y != 0) {
			x = _x;
			y = _y;
			velocity.x = _xVelocity;
			velocity.y = _yVelocity;
            angularVelocity = (Math.abs(velocity.x) + Math.abs(velocity.y));
            
            return this;
		}

		return this;
	}

	override public function update(elapsed:Float) {
		// enabling screenwrap for testing, hopefully temporary
		FlxSpriteUtil.screenWrap(this);

		super.update(elapsed);
	}
}
