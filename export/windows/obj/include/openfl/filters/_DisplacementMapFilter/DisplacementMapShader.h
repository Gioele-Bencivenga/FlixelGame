// Generated by Haxe 4.0.2
#ifndef INCLUDED_openfl_filters__DisplacementMapFilter_DisplacementMapShader
#define INCLUDED_openfl_filters__DisplacementMapFilter_DisplacementMapShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS3(openfl,filters,_DisplacementMapFilter,DisplacementMapShader)

namespace openfl{
namespace filters{
namespace _DisplacementMapFilter{


class HXCPP_CLASS_ATTRIBUTES DisplacementMapShader_obj : public  ::openfl::filters::BitmapFilterShader_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilterShader_obj super;
		typedef DisplacementMapShader_obj OBJ_;
		DisplacementMapShader_obj();

	public:
		enum { _hx_ClassId = 0x72485ac5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._DisplacementMapFilter.DisplacementMapShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.filters._DisplacementMapFilter.DisplacementMapShader"); }
		static hx::ObjectPtr< DisplacementMapShader_obj > __new();
		static hx::ObjectPtr< DisplacementMapShader_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplacementMapShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DisplacementMapShader",ea,44,d3,6b); }

		 ::openfl::display::ShaderParameter_Float mapTextureCoordsOffset;
		 ::openfl::display::ShaderInput_openfl_display_BitmapData mapTexture;
		 ::openfl::display::ShaderParameter_Float uOffsets;
		 ::openfl::display::ShaderParameter_Float uDisplacements;
};

} // end namespace openfl
} // end namespace filters
} // end namespace _DisplacementMapFilter

#endif /* INCLUDED_openfl_filters__DisplacementMapFilter_DisplacementMapShader */ 
