import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.group.FlxGroup;

class HUD extends FlxGroup {
	public var width(default, null):Int;
	public var height(default, null):Int;
    public var background(default, null):FlxSprite;
    
    public function new(_width:Int = 100, _height:Int = 50) {
        super();
        
        width = _width;
        height = _height;

        background = new FlxSprite(0, 0);
        background.makeGraphic(width, height, FlxColor.BLUE);
        add(background);

        add(new FlxText(background.x + 5, background.y + 5, width, "This is a try"));
    }
}
