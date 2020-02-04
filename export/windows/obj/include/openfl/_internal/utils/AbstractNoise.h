// Generated by Haxe 4.0.2
#ifndef INCLUDED_openfl__internal_utils_AbstractNoise
#define INCLUDED_openfl__internal_utils_AbstractNoise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,utils,AbstractNoise)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace openfl{
namespace _internal{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES AbstractNoise_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AbstractNoise_obj OBJ_;
		AbstractNoise_obj();

	public:
		enum { _hx_ClassId = 0x2a4a4f8f };

		void __construct(int seed,int octaves,int channels,bool grayScale,Float falloff,hx::Null< bool >  __o_stitch,hx::Null< Float >  __o_stitch_threshold);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.utils.AbstractNoise")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.utils.AbstractNoise"); }
		static hx::ObjectPtr< AbstractNoise_obj > __new(int seed,int octaves,int channels,bool grayScale,Float falloff,hx::Null< bool >  __o_stitch,hx::Null< Float >  __o_stitch_threshold);
		static hx::ObjectPtr< AbstractNoise_obj > __alloc(hx::Ctx *_hx_ctx,int seed,int octaves,int channels,bool grayScale,Float falloff,hx::Null< bool >  __o_stitch,hx::Null< Float >  __o_stitch_threshold);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractNoise_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AbstractNoise",38,1b,91,2b); }

		static void __boot();
		static  ::Dynamic __meta__;
		int octaves;
		bool stitch;
		Float stitch_threshold;
		int channels;
		bool grayscale;
		::Array< Float > octaves_frequencies;
		::Array< Float > octaves_persistences;
		Float persistence_max;
		virtual void fill( ::openfl::display::BitmapData bitmap,Float _scale_x,Float _scale_y,Float _scale_z);
		::Dynamic fill_dyn();

		int stitching( ::openfl::display::BitmapData bitmap,int color,int px,int py,int stitch_w,int stitch_h,int width,int height);
		::Dynamic stitching_dyn();

		int color( ::Dynamic r_noise, ::Dynamic g_noise, ::Dynamic b_noise);
		::Dynamic color_dyn();

		int noiseToColor(Float noise);
		::Dynamic noiseToColor_dyn();

		Float fade(Float t);
		::Dynamic fade_dyn();

		int mixI(int x,int y,Float t);
		::Dynamic mixI_dyn();

		Float mix(Float x,Float y,Float t);
		::Dynamic mix_dyn();

		int fastfloor(Float x);
		::Dynamic fastfloor_dyn();

		Float dot2d(::Array< int > grad,Float x,Float y);
		::Dynamic dot2d_dyn();

		Float dot(::Array< int > grad,Float x,Float y,Float z);
		::Dynamic dot_dyn();

		void calculateOctaves(Float fPersistence);
		::Dynamic calculateOctaves_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace utils

#endif /* INCLUDED_openfl__internal_utils_AbstractNoise */ 
