// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_utils_ITimeline
#include <openfl/_internal/utils/ITimeline.h>
#endif

namespace openfl{
namespace _internal{
namespace utils{


static ::String ITimeline_obj_sMemberFields[] = {
	HX_("addFrameScript",77,21,7f,bb),
	HX_("enterFrame",f5,03,50,02),
	HX_("gotoAndPlay",08,65,84,ef),
	HX_("gotoAndStop",16,27,86,f1),
	HX_("nextFrame",3a,92,c8,ad),
	HX_("play",f4,2d,5a,4a),
	HX_("prevFrame",3a,18,da,f1),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

hx::Class ITimeline_obj::__mClass;

void ITimeline_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.utils.ITimeline",3d,f7,5b,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = hx::Class_obj::dupFunctions(ITimeline_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xa37152a5 >;
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace utils
