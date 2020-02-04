// Generated by Haxe 4.0.2
#ifndef INCLUDED_openfl__internal_formats_animate_AnimateLibrary
#define INCLUDED_openfl__internal_formats_animate_AnimateLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(lime,utils,AssetManifest)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateBitmapSymbol)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateButtonSymbol)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateDynamicTextSymbol)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateFontSymbol)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateLibrary)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateShapeSymbol)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateSpriteSymbol)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateStaticTextSymbol)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateSymbol)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)

namespace openfl{
namespace _internal{
namespace formats{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateLibrary_obj : public  ::openfl::utils::AssetLibrary_obj
{
	public:
		typedef  ::openfl::utils::AssetLibrary_obj super;
		typedef AnimateLibrary_obj OBJ_;
		AnimateLibrary_obj();

	public:
		enum { _hx_ClassId = 0x5869209f };

		void __construct(::String id,::String uuid);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.formats.animate.AnimateLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.formats.animate.AnimateLibrary"); }
		static hx::ObjectPtr< AnimateLibrary_obj > __new(::String id,::String uuid);
		static hx::ObjectPtr< AnimateLibrary_obj > __alloc(hx::Ctx *_hx_ctx,::String id,::String uuid);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimateLibrary_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateLibrary",7a,0e,33,4c); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::haxe::ds::StringMap instances;
		static  ::openfl::_internal::formats::animate::AnimateLibrary get(::String uuid);
		static ::Dynamic get_dyn();

		 ::haxe::ds::StringMap alphaCheck;
		 ::haxe::ds::StringMap bitmapClassNames;
		::Array< ::Dynamic> bitmapSymbols;
		Float frameRate;
		::String id;
		::String instanceID;
		bool preloading;
		 ::openfl::_internal::formats::animate::AnimateSpriteSymbol root;
		::String rootPath;
		 ::haxe::ds::IntMap symbols;
		 ::haxe::ds::StringMap symbolsByClassName;
		::String uuid;
		bool exists(::String id,::String type);

		 ::lime::graphics::Image getImage(::String id);

		 ::openfl::display::MovieClip getMovieClip(::String id);

		bool isLocal(::String id,::String type);

		 ::lime::app::Future load();

		 ::lime::app::Future loadImage(::String id);

		void unload();

		void _hx___copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image alpha);
		::Dynamic _hx___copyChannel_dyn();

		void _hx___fromManifest( ::lime::utils::AssetManifest manifest);

		 ::lime::app::Future _hx___load();
		::Dynamic _hx___load_dyn();

		 ::lime::app::Future _hx___loadImage(::String id);
		::Dynamic _hx___loadImage_dyn();

		 ::openfl::_internal::formats::animate::AnimateBitmapSymbol _hx___parseBitmap( ::Dynamic data);
		::Dynamic _hx___parseBitmap_dyn();

		 ::openfl::_internal::formats::animate::AnimateButtonSymbol _hx___parseButton( ::Dynamic data);
		::Dynamic _hx___parseButton_dyn();

		 ::openfl::_internal::formats::animate::AnimateDynamicTextSymbol _hx___parseDynamicText( ::Dynamic data);
		::Dynamic _hx___parseDynamicText_dyn();

		 ::openfl::_internal::formats::animate::AnimateFontSymbol _hx___parseFont( ::Dynamic data);
		::Dynamic _hx___parseFont_dyn();

		 ::openfl::geom::Matrix _hx___parseMatrix(::Array< int > values);
		::Dynamic _hx___parseMatrix_dyn();

		 ::openfl::_internal::formats::animate::AnimateShapeSymbol _hx___parseShape( ::Dynamic data);
		::Dynamic _hx___parseShape_dyn();

		 ::openfl::_internal::formats::animate::AnimateSpriteSymbol _hx___parseSprite( ::Dynamic data);
		::Dynamic _hx___parseSprite_dyn();

		 ::openfl::_internal::formats::animate::AnimateStaticTextSymbol _hx___parseStaticText( ::Dynamic data);
		::Dynamic _hx___parseStaticText_dyn();

		Float _hx___pixel(int value);
		::Dynamic _hx___pixel_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace animate

#endif /* INCLUDED_openfl__internal_formats_animate_AnimateLibrary */ 
