// Generated by Haxe 4.0.2
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get2
#define INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d211b99717bb97fd_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_extended_get2)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES QCOM_extended_get2_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef QCOM_extended_get2_obj OBJ_;
		QCOM_extended_get2_obj();

	public:
		enum { _hx_ClassId = 0x078cf199 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_extended_get2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.QCOM_extended_get2"); }

		inline static hx::ObjectPtr< QCOM_extended_get2_obj > __new() {
			hx::ObjectPtr< QCOM_extended_get2_obj > __this = new QCOM_extended_get2_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< QCOM_extended_get2_obj > __alloc(hx::Ctx *_hx_ctx) {
			QCOM_extended_get2_obj *__this = (QCOM_extended_get2_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(QCOM_extended_get2_obj), false, "lime.graphics.opengl.ext.QCOM_extended_get2"));
			*(void **)__this = QCOM_extended_get2_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d211b99717bb97fd_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QCOM_extended_get2_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QCOM_extended_get2",13,c4,ad,8c); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get2 */ 
