// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_formats_swf_ShapeCommand
#include <openfl/_internal/formats/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_FontSymbol
#include <openfl/_internal/symbols/FontSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb29cd710c44e9d0_23_new,"openfl._internal.symbols.FontSymbol","new",0x0fdcd23c,"openfl._internal.symbols.FontSymbol.new","openfl/_internal/symbols/FontSymbol.hx",23,0xbcdb7d91)
namespace openfl{
namespace _internal{
namespace symbols{

void FontSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cb29cd710c44e9d0_23_new)
HXDLIN(  23)		super::__construct();
            	}

Dynamic FontSymbol_obj::__CreateEmpty() { return new FontSymbol_obj; }

void *FontSymbol_obj::_hx_vtable = 0;

Dynamic FontSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FontSymbol_obj > _hx_result = new FontSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12c7c776) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12c7c776;
	} else {
		return inClassId==(int)0x5bdcc22b;
	}
}


hx::ObjectPtr< FontSymbol_obj > FontSymbol_obj::__new() {
	hx::ObjectPtr< FontSymbol_obj > __this = new FontSymbol_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FontSymbol_obj > FontSymbol_obj::__alloc(hx::Ctx *_hx_ctx) {
	FontSymbol_obj *__this = (FontSymbol_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FontSymbol_obj), true, "openfl._internal.symbols.FontSymbol"));
	*(void **)__this = FontSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FontSymbol_obj::FontSymbol_obj()
{
}

void FontSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FontSymbol);
	HX_MARK_MEMBER_NAME(advances,"advances");
	HX_MARK_MEMBER_NAME(ascent,"ascent");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(codes,"codes");
	HX_MARK_MEMBER_NAME(descent,"descent");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(name,"name");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FontSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advances,"advances");
	HX_VISIT_MEMBER_NAME(ascent,"ascent");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(codes,"codes");
	HX_VISIT_MEMBER_NAME(descent,"descent");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(name,"name");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FontSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return hx::Val( bold ); }
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"codes") ) { return hx::Val( codes ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return hx::Val( ascent ); }
		if (HX_FIELD_EQ(inName,"glyphs") ) { return hx::Val( glyphs ); }
		if (HX_FIELD_EQ(inName,"italic") ) { return hx::Val( italic ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return hx::Val( descent ); }
		if (HX_FIELD_EQ(inName,"leading") ) { return hx::Val( leading ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advances") ) { return hx::Val( advances ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FontSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"codes") ) { codes=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advances") ) { advances=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FontSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("advances",b1,69,7b,3b));
	outFields->push(HX_("ascent",5a,d9,6f,41));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("codes",a6,56,56,4a));
	outFields->push(HX_("descent",3a,ae,3f,19));
	outFields->push(HX_("glyphs",47,f9,58,ae));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("leading",c6,32,61,09));
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo FontSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< int > */ ,(int)offsetof(FontSymbol_obj,advances),HX_("advances",b1,69,7b,3b)},
	{hx::fsInt,(int)offsetof(FontSymbol_obj,ascent),HX_("ascent",5a,d9,6f,41)},
	{hx::fsBool,(int)offsetof(FontSymbol_obj,bold),HX_("bold",85,81,1b,41)},
	{hx::fsObject /* ::Array< int > */ ,(int)offsetof(FontSymbol_obj,codes),HX_("codes",a6,56,56,4a)},
	{hx::fsInt,(int)offsetof(FontSymbol_obj,descent),HX_("descent",3a,ae,3f,19)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FontSymbol_obj,glyphs),HX_("glyphs",47,f9,58,ae)},
	{hx::fsBool,(int)offsetof(FontSymbol_obj,italic),HX_("italic",f0,2e,64,06)},
	{hx::fsInt,(int)offsetof(FontSymbol_obj,leading),HX_("leading",c6,32,61,09)},
	{hx::fsString,(int)offsetof(FontSymbol_obj,name),HX_("name",4b,72,ff,48)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FontSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String FontSymbol_obj_sMemberFields[] = {
	HX_("advances",b1,69,7b,3b),
	HX_("ascent",5a,d9,6f,41),
	HX_("bold",85,81,1b,41),
	HX_("codes",a6,56,56,4a),
	HX_("descent",3a,ae,3f,19),
	HX_("glyphs",47,f9,58,ae),
	HX_("italic",f0,2e,64,06),
	HX_("leading",c6,32,61,09),
	HX_("name",4b,72,ff,48),
	::String(null()) };

hx::Class FontSymbol_obj::__mClass;

void FontSymbol_obj::__register()
{
	FontSymbol_obj _hx_dummy;
	FontSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.symbols.FontSymbol",4a,44,08,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FontSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FontSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
