// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif

namespace flixel{
namespace util{


static ::String IFlxPool_obj_sMemberFields[] = {
	HX_("preAllocate",00,4a,53,a6),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

hx::Class IFlxPool_obj::__mClass;

void IFlxPool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("flixel.util.IFlxPool",7f,e1,05,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = hx::Class_obj::dupFunctions(IFlxPool_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x5a90a383 >;
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
