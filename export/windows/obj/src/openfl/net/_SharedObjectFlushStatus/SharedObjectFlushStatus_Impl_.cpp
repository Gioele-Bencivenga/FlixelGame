// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_net__SharedObjectFlushStatus_SharedObjectFlushStatus_Impl_
#include <openfl/net/_SharedObjectFlushStatus/SharedObjectFlushStatus_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_af97a71a2edef249_25_fromString,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","fromString",0x2501bd23,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.fromString","openfl/net/SharedObjectFlushStatus.hx",25,0x3756667d)
HX_LOCAL_STACK_FRAME(_hx_pos_af97a71a2edef249_35_toString,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","toString",0x6f407df4,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.toString","openfl/net/SharedObjectFlushStatus.hx",35,0x3756667d)
HX_LOCAL_STACK_FRAME(_hx_pos_af97a71a2edef249_15_boot,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","boot",0x7caaed7a,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.boot","openfl/net/SharedObjectFlushStatus.hx",15,0x3756667d)
HX_LOCAL_STACK_FRAME(_hx_pos_af97a71a2edef249_21_boot,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","boot",0x7caaed7a,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.boot","openfl/net/SharedObjectFlushStatus.hx",21,0x3756667d)
namespace openfl{
namespace net{
namespace _SharedObjectFlushStatus{

void SharedObjectFlushStatus_Impl__obj::__construct() { }

Dynamic SharedObjectFlushStatus_Impl__obj::__CreateEmpty() { return new SharedObjectFlushStatus_Impl__obj; }

void *SharedObjectFlushStatus_Impl__obj::_hx_vtable = 0;

Dynamic SharedObjectFlushStatus_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > _hx_result = new SharedObjectFlushStatus_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SharedObjectFlushStatus_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0214bf36;
}

 ::Dynamic SharedObjectFlushStatus_Impl__obj::FLUSHED;

 ::Dynamic SharedObjectFlushStatus_Impl__obj::PENDING;

 ::Dynamic SharedObjectFlushStatus_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_af97a71a2edef249_25_fromString)
HXDLIN(  25)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("flushed",23,f4,4c,6a)) ){
HXLINE(  27)			return 0;
HXDLIN(  27)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pending",57,98,ec,2b)) ){
HXLINE(  28)			return 1;
HXDLIN(  28)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  29)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObjectFlushStatus_Impl__obj,fromString,return )

::String SharedObjectFlushStatus_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_af97a71a2edef249_35_toString)
HXDLIN(  35)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  37)			return HX_("flushed",23,f4,4c,6a);
HXDLIN(  37)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  38)			return HX_("pending",57,98,ec,2b);
HXDLIN(  38)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  39)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  35)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObjectFlushStatus_Impl__obj,toString,return )


SharedObjectFlushStatus_Impl__obj::SharedObjectFlushStatus_Impl__obj()
{
}

bool SharedObjectFlushStatus_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *SharedObjectFlushStatus_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo SharedObjectFlushStatus_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(void *) &SharedObjectFlushStatus_Impl__obj::FLUSHED,HX_("FLUSHED",03,c8,20,ea)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &SharedObjectFlushStatus_Impl__obj::PENDING,HX_("PENDING",37,6c,c0,ab)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void SharedObjectFlushStatus_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::FLUSHED,"FLUSHED");
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::PENDING,"PENDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SharedObjectFlushStatus_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::FLUSHED,"FLUSHED");
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::PENDING,"PENDING");
};

#endif

hx::Class SharedObjectFlushStatus_Impl__obj::__mClass;

static ::String SharedObjectFlushStatus_Impl__obj_sStaticFields[] = {
	HX_("FLUSHED",03,c8,20,ea),
	HX_("PENDING",37,6c,c0,ab),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void SharedObjectFlushStatus_Impl__obj::__register()
{
	SharedObjectFlushStatus_Impl__obj _hx_dummy;
	SharedObjectFlushStatus_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_",26,7c,0d,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SharedObjectFlushStatus_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SharedObjectFlushStatus_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SharedObjectFlushStatus_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SharedObjectFlushStatus_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SharedObjectFlushStatus_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SharedObjectFlushStatus_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SharedObjectFlushStatus_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SharedObjectFlushStatus_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_af97a71a2edef249_15_boot)
HXDLIN(  15)		FLUSHED = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af97a71a2edef249_21_boot)
HXDLIN(  21)		PENDING = 1;
            	}
}

} // end namespace openfl
} // end namespace net
} // end namespace _SharedObjectFlushStatus
