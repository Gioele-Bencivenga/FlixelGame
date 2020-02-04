// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9a56c040d4e8c231_5_new,"flixel.system.frontEnds.SignalFrontEnd","new",0xa84da1e6,"flixel.system.frontEnds.SignalFrontEnd.new","flixel/system/frontEnds/SignalFrontEnd.hx",5,0x6eb9cd09)
HX_LOCAL_STACK_FRAME(_hx_pos_9a56c040d4e8c231_50_get_stateSwitched,"flixel.system.frontEnds.SignalFrontEnd","get_stateSwitched",0xf04d6de1,"flixel.system.frontEnds.SignalFrontEnd.get_stateSwitched","flixel/system/frontEnds/SignalFrontEnd.hx",50,0x6eb9cd09)
HX_LOCAL_STACK_FRAME(_hx_pos_9a56c040d4e8c231_55_get_gameStarted,"flixel.system.frontEnds.SignalFrontEnd","get_gameStarted",0xbd64598c,"flixel.system.frontEnds.SignalFrontEnd.get_gameStarted","flixel/system/frontEnds/SignalFrontEnd.hx",55,0x6eb9cd09)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void SignalFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9a56c040d4e8c231_5_new)
HXLINE(  43)		this->focusLost =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  42)		this->focusGained =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  41)		this->postDraw =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  40)		this->preDraw =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  39)		this->postUpdate =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  38)		this->preUpdate =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  34)		this->postGameStart =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  29)		this->preGameStart =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  24)		this->postGameReset =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  23)		this->preGameReset =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  21)		this->gameResized =  ::flixel::util::_FlxSignal::FlxSignal2_obj::__alloc( HX_CTX );
HXLINE(  15)		this->preStateCreate =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  12)		this->postStateSwitch =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
HXLINE(  10)		this->preStateSwitch =  ::flixel::util::_FlxSignal::FlxSignal0_obj::__alloc( HX_CTX );
            	}

Dynamic SignalFrontEnd_obj::__CreateEmpty() { return new SignalFrontEnd_obj; }

void *SignalFrontEnd_obj::_hx_vtable = 0;

Dynamic SignalFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SignalFrontEnd_obj > _hx_result = new SignalFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SignalFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57bea7cc;
}

 ::flixel::util::_FlxSignal::FlxSignal0 SignalFrontEnd_obj::get_stateSwitched(){
            	HX_STACKFRAME(&_hx_pos_9a56c040d4e8c231_50_get_stateSwitched)
HXDLIN(  50)		return this->preStateSwitch;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignalFrontEnd_obj,get_stateSwitched,return )

 ::flixel::util::_FlxSignal::FlxSignal0 SignalFrontEnd_obj::get_gameStarted(){
            	HX_STACKFRAME(&_hx_pos_9a56c040d4e8c231_55_get_gameStarted)
HXDLIN(  55)		return this->postGameStart;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignalFrontEnd_obj,get_gameStarted,return )


hx::ObjectPtr< SignalFrontEnd_obj > SignalFrontEnd_obj::__new() {
	hx::ObjectPtr< SignalFrontEnd_obj > __this = new SignalFrontEnd_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SignalFrontEnd_obj > SignalFrontEnd_obj::__alloc(hx::Ctx *_hx_ctx) {
	SignalFrontEnd_obj *__this = (SignalFrontEnd_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SignalFrontEnd_obj), true, "flixel.system.frontEnds.SignalFrontEnd"));
	*(void **)__this = SignalFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SignalFrontEnd_obj::SignalFrontEnd_obj()
{
}

void SignalFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SignalFrontEnd);
	HX_MARK_MEMBER_NAME(preStateSwitch,"preStateSwitch");
	HX_MARK_MEMBER_NAME(postStateSwitch,"postStateSwitch");
	HX_MARK_MEMBER_NAME(preStateCreate,"preStateCreate");
	HX_MARK_MEMBER_NAME(gameResized,"gameResized");
	HX_MARK_MEMBER_NAME(preGameReset,"preGameReset");
	HX_MARK_MEMBER_NAME(postGameReset,"postGameReset");
	HX_MARK_MEMBER_NAME(preGameStart,"preGameStart");
	HX_MARK_MEMBER_NAME(postGameStart,"postGameStart");
	HX_MARK_MEMBER_NAME(preUpdate,"preUpdate");
	HX_MARK_MEMBER_NAME(postUpdate,"postUpdate");
	HX_MARK_MEMBER_NAME(preDraw,"preDraw");
	HX_MARK_MEMBER_NAME(postDraw,"postDraw");
	HX_MARK_MEMBER_NAME(focusGained,"focusGained");
	HX_MARK_MEMBER_NAME(focusLost,"focusLost");
	HX_MARK_END_CLASS();
}

void SignalFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(preStateSwitch,"preStateSwitch");
	HX_VISIT_MEMBER_NAME(postStateSwitch,"postStateSwitch");
	HX_VISIT_MEMBER_NAME(preStateCreate,"preStateCreate");
	HX_VISIT_MEMBER_NAME(gameResized,"gameResized");
	HX_VISIT_MEMBER_NAME(preGameReset,"preGameReset");
	HX_VISIT_MEMBER_NAME(postGameReset,"postGameReset");
	HX_VISIT_MEMBER_NAME(preGameStart,"preGameStart");
	HX_VISIT_MEMBER_NAME(postGameStart,"postGameStart");
	HX_VISIT_MEMBER_NAME(preUpdate,"preUpdate");
	HX_VISIT_MEMBER_NAME(postUpdate,"postUpdate");
	HX_VISIT_MEMBER_NAME(preDraw,"preDraw");
	HX_VISIT_MEMBER_NAME(postDraw,"postDraw");
	HX_VISIT_MEMBER_NAME(focusGained,"focusGained");
	HX_VISIT_MEMBER_NAME(focusLost,"focusLost");
}

hx::Val SignalFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"preDraw") ) { return hx::Val( preDraw ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postDraw") ) { return hx::Val( postDraw ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preUpdate") ) { return hx::Val( preUpdate ); }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return hx::Val( focusLost ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return hx::Val( postUpdate ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameResized") ) { return hx::Val( gameResized ); }
		if (HX_FIELD_EQ(inName,"gameStarted") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_gameStarted() ); }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return hx::Val( focusGained ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preGameReset") ) { return hx::Val( preGameReset ); }
		if (HX_FIELD_EQ(inName,"preGameStart") ) { return hx::Val( preGameStart ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stateSwitched") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_stateSwitched() ); }
		if (HX_FIELD_EQ(inName,"postGameReset") ) { return hx::Val( postGameReset ); }
		if (HX_FIELD_EQ(inName,"postGameStart") ) { return hx::Val( postGameStart ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preStateSwitch") ) { return hx::Val( preStateSwitch ); }
		if (HX_FIELD_EQ(inName,"preStateCreate") ) { return hx::Val( preStateCreate ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"postStateSwitch") ) { return hx::Val( postStateSwitch ); }
		if (HX_FIELD_EQ(inName,"get_gameStarted") ) { return hx::Val( get_gameStarted_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_stateSwitched") ) { return hx::Val( get_stateSwitched_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SignalFrontEnd_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"preDraw") ) { preDraw=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postDraw") ) { postDraw=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preUpdate") ) { preUpdate=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { focusLost=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { postUpdate=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameResized") ) { gameResized=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusGained") ) { focusGained=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preGameReset") ) { preGameReset=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preGameStart") ) { preGameStart=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postGameReset") ) { postGameReset=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postGameStart") ) { postGameStart=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preStateSwitch") ) { preStateSwitch=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preStateCreate") ) { preStateCreate=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"postStateSwitch") ) { postStateSwitch=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SignalFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("preStateSwitch",82,cb,47,50));
	outFields->push(HX_("postStateSwitch",65,46,a8,db));
	outFields->push(HX_("stateSwitched",84,32,02,37));
	outFields->push(HX_("preStateCreate",8a,e8,dd,06));
	outFields->push(HX_("gameResized",1e,d2,29,48));
	outFields->push(HX_("preGameReset",da,1b,e3,c1));
	outFields->push(HX_("postGameReset",fd,07,96,c9));
	outFields->push(HX_("preGameStart",6d,46,26,5f));
	outFields->push(HX_("postGameStart",90,32,d9,66));
	outFields->push(HX_("gameStarted",6f,9f,d1,19));
	outFields->push(HX_("preUpdate",8c,96,a6,e5));
	outFields->push(HX_("postUpdate",89,06,3e,dc));
	outFields->push(HX_("preDraw",c7,05,d5,1a));
	outFields->push(HX_("postDraw",84,8c,af,00));
	outFields->push(HX_("focusGained",96,ec,66,a1));
	outFields->push(HX_("focusLost",dc,01,43,1f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo SignalFrontEnd_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,preStateSwitch),HX_("preStateSwitch",82,cb,47,50)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,postStateSwitch),HX_("postStateSwitch",65,46,a8,db)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(SignalFrontEnd_obj,preStateCreate),HX_("preStateCreate",8a,e8,dd,06)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal2 */ ,(int)offsetof(SignalFrontEnd_obj,gameResized),HX_("gameResized",1e,d2,29,48)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,preGameReset),HX_("preGameReset",da,1b,e3,c1)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,postGameReset),HX_("postGameReset",fd,07,96,c9)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,preGameStart),HX_("preGameStart",6d,46,26,5f)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,postGameStart),HX_("postGameStart",90,32,d9,66)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,preUpdate),HX_("preUpdate",8c,96,a6,e5)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,postUpdate),HX_("postUpdate",89,06,3e,dc)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,preDraw),HX_("preDraw",c7,05,d5,1a)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,postDraw),HX_("postDraw",84,8c,af,00)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,focusGained),HX_("focusGained",96,ec,66,a1)},
	{hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal0 */ ,(int)offsetof(SignalFrontEnd_obj,focusLost),HX_("focusLost",dc,01,43,1f)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SignalFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String SignalFrontEnd_obj_sMemberFields[] = {
	HX_("preStateSwitch",82,cb,47,50),
	HX_("postStateSwitch",65,46,a8,db),
	HX_("preStateCreate",8a,e8,dd,06),
	HX_("gameResized",1e,d2,29,48),
	HX_("preGameReset",da,1b,e3,c1),
	HX_("postGameReset",fd,07,96,c9),
	HX_("preGameStart",6d,46,26,5f),
	HX_("postGameStart",90,32,d9,66),
	HX_("preUpdate",8c,96,a6,e5),
	HX_("postUpdate",89,06,3e,dc),
	HX_("preDraw",c7,05,d5,1a),
	HX_("postDraw",84,8c,af,00),
	HX_("focusGained",96,ec,66,a1),
	HX_("focusLost",dc,01,43,1f),
	HX_("get_stateSwitched",db,3d,72,3d),
	HX_("get_gameStarted",06,57,b3,da),
	::String(null()) };

hx::Class SignalFrontEnd_obj::__mClass;

void SignalFrontEnd_obj::__register()
{
	SignalFrontEnd_obj _hx_dummy;
	SignalFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.SignalFrontEnd",f4,76,d9,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SignalFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SignalFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SignalFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SignalFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
