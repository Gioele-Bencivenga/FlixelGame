// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81f6578febd56b01_11_new,"flixel.tweens.misc.ColorTween","new",0x82c0df68,"flixel.tweens.misc.ColorTween.new","flixel/tweens/misc/ColorTween.hx",11,0xe14ed287)
HX_LOCAL_STACK_FRAME(_hx_pos_81f6578febd56b01_27_destroy,"flixel.tweens.misc.ColorTween","destroy",0x7f5b6002,"flixel.tweens.misc.ColorTween.destroy","flixel/tweens/misc/ColorTween.hx",27,0xe14ed287)
HX_LOCAL_STACK_FRAME(_hx_pos_81f6578febd56b01_42_tween,"flixel.tweens.misc.ColorTween","tween",0xdc858b73,"flixel.tweens.misc.ColorTween.tween","flixel/tweens/misc/ColorTween.hx",42,0xe14ed287)
HX_LOCAL_STACK_FRAME(_hx_pos_81f6578febd56b01_52_update,"flixel.tweens.misc.ColorTween","update",0x76358c01,"flixel.tweens.misc.ColorTween.update","flixel/tweens/misc/ColorTween.hx",52,0xe14ed287)
namespace flixel{
namespace tweens{
namespace misc{

void ColorTween_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_81f6578febd56b01_11_new)
HXDLIN(  11)		super::__construct(Options,manager);
            	}

Dynamic ColorTween_obj::__CreateEmpty() { return new ColorTween_obj; }

void *ColorTween_obj::_hx_vtable = 0;

Dynamic ColorTween_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ColorTween_obj > _hx_result = new ColorTween_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ColorTween_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x123505a1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x123505a1;
	} else {
		return inClassId==(int)0x75d566bc;
	}
}

void ColorTween_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_81f6578febd56b01_27_destroy)
HXLINE(  28)		this->super::destroy();
HXLINE(  29)		this->sprite = null();
            	}


 ::flixel::tweens::misc::ColorTween ColorTween_obj::tween(Float Duration,int FromColor,int ToColor, ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_81f6578febd56b01_42_tween)
HXLINE(  43)		this->color = (this->startColor = FromColor);
HXLINE(  44)		this->endColor = ToColor;
HXLINE(  45)		this->duration = Duration;
HXLINE(  46)		this->sprite = Sprite;
HXLINE(  47)		this->start();
HXLINE(  48)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ColorTween_obj,tween,return )

void ColorTween_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_81f6578febd56b01_52_update)
HXLINE(  53)		this->super::update(elapsed);
HXLINE(  54)		int Color1 = this->startColor;
HXDLIN(  54)		int Color2 = this->endColor;
HXDLIN(  54)		Float Factor = this->scale;
HXDLIN(  54)		int r = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 16) & 255) - ((Color1 >> 16) & 255))) ) * Factor) + ((Color1 >> 16) & 255)));
HXDLIN(  54)		int g = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 8) & 255) - ((Color1 >> 8) & 255))) ) * Factor) + ((Color1 >> 8) & 255)));
HXDLIN(  54)		int b = ::Std_obj::_hx_int(((( (Float)(((Color2 & 255) - (Color1 & 255))) ) * Factor) + (Color1 & 255)));
HXDLIN(  54)		int a = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 24) & 255) - ((Color1 >> 24) & 255))) ) * Factor) + ((Color1 >> 24) & 255)));
HXDLIN(  54)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  54)		{
HXLINE(  54)			color = (color & -16711681);
HXDLIN(  54)			int color1;
HXDLIN(  54)			if ((r > 255)) {
HXLINE(  54)				color1 = 255;
            			}
            			else {
HXLINE(  54)				if ((r < 0)) {
HXLINE(  54)					color1 = 0;
            				}
            				else {
HXLINE(  54)					color1 = r;
            				}
            			}
HXDLIN(  54)			color = (color | (color1 << 16));
            		}
HXDLIN(  54)		{
HXLINE(  54)			color = (color & -65281);
HXDLIN(  54)			int color2;
HXDLIN(  54)			if ((g > 255)) {
HXLINE(  54)				color2 = 255;
            			}
            			else {
HXLINE(  54)				if ((g < 0)) {
HXLINE(  54)					color2 = 0;
            				}
            				else {
HXLINE(  54)					color2 = g;
            				}
            			}
HXDLIN(  54)			color = (color | (color2 << 8));
            		}
HXDLIN(  54)		{
HXLINE(  54)			color = (color & -256);
HXDLIN(  54)			int color3;
HXDLIN(  54)			if ((b > 255)) {
HXLINE(  54)				color3 = 255;
            			}
            			else {
HXLINE(  54)				if ((b < 0)) {
HXLINE(  54)					color3 = 0;
            				}
            				else {
HXLINE(  54)					color3 = b;
            				}
            			}
HXDLIN(  54)			color = (color | color3);
            		}
HXDLIN(  54)		{
HXLINE(  54)			color = (color & 16777215);
HXDLIN(  54)			int color4;
HXDLIN(  54)			if ((a > 255)) {
HXLINE(  54)				color4 = 255;
            			}
            			else {
HXLINE(  54)				if ((a < 0)) {
HXLINE(  54)					color4 = 0;
            				}
            				else {
HXLINE(  54)					color4 = a;
            				}
            			}
HXDLIN(  54)			color = (color | (color4 << 24));
            		}
HXDLIN(  54)		this->color = color;
HXLINE(  56)		if (hx::IsNotNull( this->sprite )) {
HXLINE(  58)			this->sprite->set_color(this->color);
HXLINE(  59)			this->sprite->set_alpha((( (Float)(((this->color >> 24) & 255)) ) / ( (Float)(255) )));
            		}
            	}



hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	hx::ObjectPtr< ColorTween_obj > __this = new ColorTween_obj();
	__this->__construct(Options,manager);
	return __this;
}

hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	ColorTween_obj *__this = (ColorTween_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ColorTween_obj), true, "flixel.tweens.misc.ColorTween"));
	*(void **)__this = ColorTween_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

ColorTween_obj::ColorTween_obj()
{
}

void ColorTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTween);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(startColor,"startColor");
	HX_MARK_MEMBER_NAME(endColor,"endColor");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	 ::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(startColor,"startColor");
	HX_VISIT_MEMBER_NAME(endColor,"endColor");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	 ::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ColorTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"tween") ) { return hx::Val( tween_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return hx::Val( sprite ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { return hx::Val( endColor ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { return hx::Val( startColor ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ColorTween_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { endColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { startColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("startColor",a1,49,73,66));
	outFields->push(HX_("endColor",88,03,5a,48));
	outFields->push(HX_("sprite",05,dc,95,c3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ColorTween_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ColorTween_obj,color),HX_("color",63,71,5c,4a)},
	{hx::fsInt,(int)offsetof(ColorTween_obj,startColor),HX_("startColor",a1,49,73,66)},
	{hx::fsInt,(int)offsetof(ColorTween_obj,endColor),HX_("endColor",88,03,5a,48)},
	{hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ColorTween_obj,sprite),HX_("sprite",05,dc,95,c3)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ColorTween_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorTween_obj_sMemberFields[] = {
	HX_("color",63,71,5c,4a),
	HX_("startColor",a1,49,73,66),
	HX_("endColor",88,03,5a,48),
	HX_("sprite",05,dc,95,c3),
	HX_("destroy",fa,2c,86,24),
	HX_("tween",6b,aa,70,19),
	HX_("update",09,86,05,87),
	::String(null()) };

hx::Class ColorTween_obj::__mClass;

void ColorTween_obj::__register()
{
	ColorTween_obj _hx_dummy;
	ColorTween_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.misc.ColorTween",76,4b,bb,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ColorTween_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTween_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorTween_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorTween_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
