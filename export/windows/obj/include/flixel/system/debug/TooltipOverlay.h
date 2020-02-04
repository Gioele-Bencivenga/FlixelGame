// Generated by Haxe 4.0.2
#ifndef INCLUDED_flixel_system_debug_TooltipOverlay
#define INCLUDED_flixel_system_debug_TooltipOverlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,TooltipOverlay)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES TooltipOverlay_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef TooltipOverlay_obj OBJ_;
		TooltipOverlay_obj();

	public:
		enum { _hx_ClassId = 0x4e3cd7b1 };

		void __construct( ::openfl::display::Sprite target,::String text,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.TooltipOverlay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.TooltipOverlay"); }
		static hx::ObjectPtr< TooltipOverlay_obj > __new( ::openfl::display::Sprite target,::String text,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		static hx::ObjectPtr< TooltipOverlay_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::Sprite target,::String text,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TooltipOverlay_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TooltipOverlay",ed,48,61,22); }

		static void __boot();
		static int BG_COLOR;
		static Float TEXT_ALPHA;
		static int MARGIN_X;
		static Float MARGIN_Y;
		int _width;
		int _height;
		 ::openfl::display::Bitmap _background;
		 ::openfl::display::Bitmap _shadow;
		 ::openfl::text::TextField textField;
		 ::openfl::display::Sprite owner;
		 ::openfl::geom::Point maxSize;
		void destroy();
		::Dynamic destroy_dyn();

		void resize(Float Width,Float Height);
		::Dynamic resize_dyn();

		void reposition(Float X,Float Y);
		::Dynamic reposition_dyn();

		void setVisible(bool Value);
		::Dynamic setVisible_dyn();

		void setText(::String Text);
		::Dynamic setText_dyn();

		void toggleVisible();
		::Dynamic toggleVisible_dyn();

		void putOnTop();
		::Dynamic putOnTop_dyn();

		void update();
		::Dynamic update_dyn();

		void updateSize();
		::Dynamic updateSize_dyn();

		void ensureOnScreen();
		::Dynamic ensureOnScreen_dyn();

		void handleMouseEvents( ::openfl::events::MouseEvent event);
		::Dynamic handleMouseEvents_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_TooltipOverlay */ 