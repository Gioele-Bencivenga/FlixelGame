// Generated by Haxe 4.0.2
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_format_BGRA8888
#define INCLUDED_lime_graphics_opengl_ext_EXT_texture_format_BGRA8888

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d5b9ccaa5426931f_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_texture_format_BGRA8888)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_texture_format_BGRA8888_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EXT_texture_format_BGRA8888_obj OBJ_;
		EXT_texture_format_BGRA8888_obj();

	public:
		enum { _hx_ClassId = 0x12ed8b4c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_texture_format_BGRA8888")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_texture_format_BGRA8888"); }

		inline static hx::ObjectPtr< EXT_texture_format_BGRA8888_obj > __new() {
			hx::ObjectPtr< EXT_texture_format_BGRA8888_obj > __this = new EXT_texture_format_BGRA8888_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< EXT_texture_format_BGRA8888_obj > __alloc(hx::Ctx *_hx_ctx) {
			EXT_texture_format_BGRA8888_obj *__this = (EXT_texture_format_BGRA8888_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EXT_texture_format_BGRA8888_obj), false, "lime.graphics.opengl.ext.EXT_texture_format_BGRA8888"));
			*(void **)__this = EXT_texture_format_BGRA8888_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d5b9ccaa5426931f_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::EXT_texture_format_BGRA8888)(__this) )->BGRA_EXT = 32993;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_texture_format_BGRA8888_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_texture_format_BGRA8888",5a,d2,bd,b2); }

		int BGRA_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_texture_format_BGRA8888 */ 
