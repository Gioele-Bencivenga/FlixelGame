// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineToView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/LineToView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0768e4473d6cced6_945__new,"openfl._internal.renderer._DrawCommandReader.LineToView_Impl_","_new",0xdb6ba453,"openfl._internal.renderer._DrawCommandReader.LineToView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",945,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_0768e4473d6cced6_954_get_x,"openfl._internal.renderer._DrawCommandReader.LineToView_Impl_","get_x",0xb8112a1d,"openfl._internal.renderer._DrawCommandReader.LineToView_Impl_.get_x","openfl/_internal/renderer/DrawCommandReader.hx",954,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_0768e4473d6cced6_961_get_y,"openfl._internal.renderer._DrawCommandReader.LineToView_Impl_","get_y",0xb8112a1e,"openfl._internal.renderer._DrawCommandReader.LineToView_Impl_.get_y","openfl/_internal/renderer/DrawCommandReader.hx",961,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void LineToView_Impl__obj::__construct() { }

Dynamic LineToView_Impl__obj::__CreateEmpty() { return new LineToView_Impl__obj; }

void *LineToView_Impl__obj::_hx_vtable = 0;

Dynamic LineToView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineToView_Impl__obj > _hx_result = new LineToView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineToView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3faa2a0e;
}

 ::openfl::_internal::renderer::DrawCommandReader LineToView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_0768e4473d6cced6_945__new)
HXDLIN( 945)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 945)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineToView_Impl__obj,_new,return )

Float LineToView_Impl__obj::get_x( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_0768e4473d6cced6_954_get_x)
HXDLIN( 954)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineToView_Impl__obj,get_x,return )

Float LineToView_Impl__obj::get_y( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_0768e4473d6cced6_961_get_y)
HXDLIN( 961)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineToView_Impl__obj,get_y,return )


LineToView_Impl__obj::LineToView_Impl__obj()
{
}

bool LineToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *LineToView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LineToView_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class LineToView_Impl__obj::__mClass;

static ::String LineToView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	::String(null())
};

void LineToView_Impl__obj::__register()
{
	LineToView_Impl__obj _hx_dummy;
	LineToView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer._DrawCommandReader.LineToView_Impl_",bc,36,f6,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LineToView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineToView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineToView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineToView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
