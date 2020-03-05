# Inline functions explanation by Gama11

You can also declare the function inline as an arrow function:

```Haxe
FlxSpriteUtil.flicker(this, 0.5, 0.04, true, true, _ -> hittable = true);
```

which is just a shorter syntax for:

```Haxe
FlxSpriteUtil.flicker(this, 0.5, 0.04, true, true, function(_) hittable = true);
```

and ```function(_) hittable = true``` is a shorter syntax for ```function(_) { hittable = true; }```
