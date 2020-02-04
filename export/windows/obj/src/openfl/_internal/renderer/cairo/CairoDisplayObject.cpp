// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoDisplayObject
#include <openfl/_internal/renderer/cairo/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_29f2867d580e2ec4_18_render,"openfl._internal.renderer.cairo.CairoDisplayObject","render",0xdb2265aa,"openfl._internal.renderer.cairo.CairoDisplayObject.render","openfl/_internal/renderer/cairo/CairoDisplayObject.hx",18,0xea0a3da4)
HX_LOCAL_STACK_FRAME(_hx_pos_29f2867d580e2ec4_15_boot,"openfl._internal.renderer.cairo.CairoDisplayObject","boot",0x191b8186,"openfl._internal.renderer.cairo.CairoDisplayObject.boot","openfl/_internal/renderer/cairo/CairoDisplayObject.hx",15,0xea0a3da4)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoDisplayObject_obj::__construct() { }

Dynamic CairoDisplayObject_obj::__CreateEmpty() { return new CairoDisplayObject_obj; }

void *CairoDisplayObject_obj::_hx_vtable = 0;

Dynamic CairoDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoDisplayObject_obj > _hx_result = new CairoDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03db1e16;
}

void CairoDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::_internal::renderer::cairo::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_29f2867d580e2ec4_18_render)
HXLINE(  20)		bool _hx_tmp;
HXDLIN(  20)		if (hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  20)			_hx_tmp = hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  20)			_hx_tmp = false;
            		}
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  20)			return;
            		}
HXLINE(  21)		if (!(displayObject->_hx___renderable)) {
HXLINE(  21)			return;
            		}
HXLINE(  23)		Float alpha = renderer->_hx___getAlpha(displayObject->_hx___worldAlpha);
HXLINE(  24)		if ((alpha <= 0)) {
HXLINE(  24)			return;
            		}
HXLINE(  26)		bool _hx_tmp1;
HXDLIN(  26)		bool _hx_tmp2;
HXDLIN(  26)		bool _hx_tmp3;
HXDLIN(  26)		if (hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  26)			_hx_tmp3 = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  26)			_hx_tmp3 = false;
            		}
HXDLIN(  26)		if (_hx_tmp3) {
HXLINE(  26)			_hx_tmp2 = (displayObject->get_width() > 0);
            		}
            		else {
HXLINE(  26)			_hx_tmp2 = false;
            		}
HXDLIN(  26)		if (_hx_tmp2) {
HXLINE(  26)			_hx_tmp1 = (displayObject->get_height() > 0);
            		}
            		else {
HXLINE(  26)			_hx_tmp1 = false;
            		}
HXDLIN(  26)		if (_hx_tmp1) {
HXLINE(  31)			 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXLINE(  33)			renderer->_hx___setBlendMode(displayObject->_hx___worldBlendMode);
HXLINE(  34)			renderer->_hx___pushMaskObject(displayObject,null());
HXLINE(  36)			renderer->applyMatrix(displayObject->_hx___renderTransform,cairo);
HXLINE(  38)			int color = ( (int)(displayObject->opaqueBackground) );
HXLINE(  39)			cairo->setSourceRGB((( (Float)((hx::UShr(color,16) & 255)) ) / ( (Float)(255) )),(( (Float)((hx::UShr(color,8) & 255)) ) / ( (Float)(255) )),(( (Float)((color & 255)) ) / ( (Float)(255) )));
HXLINE(  40)			Float _hx_tmp4 = displayObject->get_width();
HXDLIN(  40)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),_hx_tmp4,displayObject->get_height());
HXLINE(  41)			cairo->fill();
HXLINE(  43)			renderer->_hx___popMaskObject(displayObject,null());
            		}
HXLINE(  46)		if (hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  48)			::openfl::_internal::renderer::cairo::CairoShape_obj::render(displayObject,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoDisplayObject_obj,render,(void))


CairoDisplayObject_obj::CairoDisplayObject_obj()
{
}

bool CairoDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoDisplayObject_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoDisplayObject_obj_sStaticStorageInfo = 0;
#endif

hx::Class CairoDisplayObject_obj::__mClass;

static ::String CairoDisplayObject_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	::String(null())
};

void CairoDisplayObject_obj::__register()
{
	CairoDisplayObject_obj _hx_dummy;
	CairoDisplayObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer.cairo.CairoDisplayObject",9a,63,fd,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoDisplayObject_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoDisplayObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoDisplayObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoDisplayObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_29f2867d580e2ec4_15_boot)
HXDLIN(  15)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo