// Generated by Haxe 4.0.2
#ifndef INCLUDED_openfl__internal_formats_animate_AnimateFrame
#define INCLUDED_openfl__internal_formats_animate_AnimateFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7b5fd2a58fd67c03_15_new)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateFrame)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateFrameObject)

namespace openfl{
namespace _internal{
namespace formats{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateFrame_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AnimateFrame_obj OBJ_;
		AnimateFrame_obj();

	public:
		enum { _hx_ClassId = 0x39e2c1b5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.formats.animate.AnimateFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.formats.animate.AnimateFrame"); }

		inline static hx::ObjectPtr< AnimateFrame_obj > __new() {
			hx::ObjectPtr< AnimateFrame_obj > __this = new AnimateFrame_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< AnimateFrame_obj > __alloc(hx::Ctx *_hx_ctx) {
			AnimateFrame_obj *__this = (AnimateFrame_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AnimateFrame_obj), true, "openfl._internal.formats.animate.AnimateFrame"));
			*(void **)__this = AnimateFrame_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7b5fd2a58fd67c03_15_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimateFrame_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateFrame",ec,31,15,40); }

		::String label;
		::Array< ::Dynamic> objects;
		 ::Dynamic script;
		Dynamic script_dyn() { return script;}
		::String scriptSource;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace animate

#endif /* INCLUDED_openfl__internal_formats_animate_AnimateFrame */ 