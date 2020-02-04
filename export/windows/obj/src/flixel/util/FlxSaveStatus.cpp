// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxSaveStatus FlxSaveStatus_obj::ERROR;

::flixel::util::FlxSaveStatus FlxSaveStatus_obj::PENDING;

::flixel::util::FlxSaveStatus FlxSaveStatus_obj::SUCCESS;

bool FlxSaveStatus_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ERROR",a8,03,18,f1)) { outValue = FlxSaveStatus_obj::ERROR; return true; }
	if (inName==HX_("PENDING",37,6c,c0,ab)) { outValue = FlxSaveStatus_obj::PENDING; return true; }
	if (inName==HX_("SUCCESS",a3,f9,21,38)) { outValue = FlxSaveStatus_obj::SUCCESS; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxSaveStatus_obj)

int FlxSaveStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ERROR",a8,03,18,f1)) return 2;
	if (inName==HX_("PENDING",37,6c,c0,ab)) return 1;
	if (inName==HX_("SUCCESS",a3,f9,21,38)) return 0;
	return super::__FindIndex(inName);
}

int FlxSaveStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ERROR",a8,03,18,f1)) return 0;
	if (inName==HX_("PENDING",37,6c,c0,ab)) return 0;
	if (inName==HX_("SUCCESS",a3,f9,21,38)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlxSaveStatus_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ERROR",a8,03,18,f1)) return ERROR;
	if (inName==HX_("PENDING",37,6c,c0,ab)) return PENDING;
	if (inName==HX_("SUCCESS",a3,f9,21,38)) return SUCCESS;
	return super::__Field(inName,inCallProp);
}

static ::String FlxSaveStatus_obj_sStaticFields[] = {
	HX_("SUCCESS",a3,f9,21,38),
	HX_("PENDING",37,6c,c0,ab),
	HX_("ERROR",a8,03,18,f1),
	::String(null())
};

hx::Class FlxSaveStatus_obj::__mClass;

Dynamic __Create_FlxSaveStatus_obj() { return new FlxSaveStatus_obj; }

void FlxSaveStatus_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("flixel.util.FlxSaveStatus",a7,aa,c7,52), hx::TCanCast< FlxSaveStatus_obj >,FlxSaveStatus_obj_sStaticFields,0,
	&__Create_FlxSaveStatus_obj, &__Create,
	&super::__SGetClass(), &CreateFlxSaveStatus_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxSaveStatus_obj::__GetStatic;
}

void FlxSaveStatus_obj::__boot()
{
ERROR = hx::CreateConstEnum< FlxSaveStatus_obj >(HX_("ERROR",a8,03,18,f1),2);
PENDING = hx::CreateConstEnum< FlxSaveStatus_obj >(HX_("PENDING",37,6c,c0,ab),1);
SUCCESS = hx::CreateConstEnum< FlxSaveStatus_obj >(HX_("SUCCESS",a3,f9,21,38),0);
}


} // end namespace flixel
} // end namespace util
