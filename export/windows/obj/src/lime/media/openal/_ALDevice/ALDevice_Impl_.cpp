// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_openal__ALDevice_ALDevice_Impl_
#include <lime/media/openal/_ALDevice/ALDevice_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_02067b4964e6adc1_10__new,"lime.media.openal._ALDevice.ALDevice_Impl_","_new",0xc749fd0a,"lime.media.openal._ALDevice.ALDevice_Impl_._new","lime/media/openal/ALDevice.hx",10,0x64bc9f68)
namespace lime{
namespace media{
namespace openal{
namespace _ALDevice{

void ALDevice_Impl__obj::__construct() { }

Dynamic ALDevice_Impl__obj::__CreateEmpty() { return new ALDevice_Impl__obj; }

void *ALDevice_Impl__obj::_hx_vtable = 0;

Dynamic ALDevice_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ALDevice_Impl__obj > _hx_result = new ALDevice_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALDevice_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e2fac5d;
}

 ::Dynamic ALDevice_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_02067b4964e6adc1_10__new)
HXDLIN(  10)		 ::Dynamic this1 = handle;
HXDLIN(  10)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALDevice_Impl__obj,_new,return )


ALDevice_Impl__obj::ALDevice_Impl__obj()
{
}

bool ALDevice_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *ALDevice_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ALDevice_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class ALDevice_Impl__obj::__mClass;

static ::String ALDevice_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void ALDevice_Impl__obj::__register()
{
	ALDevice_Impl__obj _hx_dummy;
	ALDevice_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime.media.openal._ALDevice.ALDevice_Impl_",65,99,04,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALDevice_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ALDevice_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALDevice_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALDevice_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALDevice_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALDevice
