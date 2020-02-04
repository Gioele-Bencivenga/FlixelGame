// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_atf_ATFReader
#include <openfl/_internal/formats/atf/ATFReader.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_29_new,"openfl._internal.formats.atf.ATFReader","new",0x7c26602b,"openfl._internal.formats.atf.ATFReader.new","openfl/_internal/formats/atf/ATFReader.hx",29,0xe5c2fe69)
HX_LOCAL_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_75_readHeader,"openfl._internal.formats.atf.ATFReader","readHeader",0x01a9bd18,"openfl._internal.formats.atf.ATFReader.readHeader","openfl/_internal/formats/atf/ATFReader.hx",75,0xe5c2fe69)
HX_LOCAL_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_113_readTextures,"openfl._internal.formats.atf.ATFReader","readTextures",0x2ef4e383,"openfl._internal.formats.atf.ATFReader.readTextures","openfl/_internal/formats/atf/ATFReader.hx",113,0xe5c2fe69)
HX_LOCAL_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_145___readUInt24,"openfl._internal.formats.atf.ATFReader","__readUInt24",0xd90f37a7,"openfl._internal.formats.atf.ATFReader.__readUInt24","openfl/_internal/formats/atf/ATFReader.hx",145,0xe5c2fe69)
HX_LOCAL_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_154___readUInt32,"openfl._internal.formats.atf.ATFReader","__readUInt32",0xd90f3884,"openfl._internal.formats.atf.ATFReader.__readUInt32","openfl/_internal/formats/atf/ATFReader.hx",154,0xe5c2fe69)
HX_LOCAL_STACK_FRAME(_hx_pos_d3b26b6427ce3c40_29_boot,"openfl._internal.formats.atf.ATFReader","boot",0x1d86c607,"openfl._internal.formats.atf.ATFReader.boot","openfl/_internal/formats/atf/ATFReader.hx",29,0xe5c2fe69)
namespace openfl{
namespace _internal{
namespace formats{
namespace atf{

void ATFReader_obj::__construct( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_29_new)
HXLINE(  36)		this->version = 0;
HXLINE(  41)		data->position = byteArrayOffset;
HXLINE(  42)		::String signature = data->readUTFBytes(3);
HXLINE(  43)		data->position = byteArrayOffset;
HXLINE(  45)		if ((signature != HX_("ATF",f3,9b,31,00))) {
HXLINE(  47)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF signature not found",a0,f7,2f,3a)));
            		}
HXLINE(  50)		int length = 0;
HXLINE(  53)		if ((data->b->__get((byteArrayOffset + 6)) == 255)) {
HXLINE(  55)			this->version = ( (int)(data->b->__get((byteArrayOffset + 7))) );
HXLINE(  56)			data->position = (byteArrayOffset + 8);
HXLINE(  57)			length = this->_hx___readUInt32(data);
            		}
            		else {
HXLINE(  61)			this->version = 0;
HXLINE(  62)			data->position = (byteArrayOffset + 3);
HXLINE(  63)			length = this->_hx___readUInt24(data);
            		}
HXLINE(  66)		int a = (byteArrayOffset + length);
HXDLIN(  66)		int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data);
HXDLIN(  66)		bool aNeg = (a < 0);
HXDLIN(  66)		bool bNeg = (b < 0);
HXDLIN(  66)		bool _hx_tmp;
HXDLIN(  66)		if ((aNeg != bNeg)) {
HXLINE(  66)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE(  66)			_hx_tmp = (a > b);
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  68)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF length exceeds byte array length",d7,29,45,0f)));
            		}
HXLINE(  71)		this->data = data;
            	}

Dynamic ATFReader_obj::__CreateEmpty() { return new ATFReader_obj; }

void *ATFReader_obj::_hx_vtable = 0;

Dynamic ATFReader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ATFReader_obj > _hx_result = new ATFReader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ATFReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32a52097;
}

bool ATFReader_obj::readHeader(int _hx___width,int _hx___height,bool cubeMap){
            	HX_GC_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_75_readHeader)
HXLINE(  76)		int tdata = this->data->readUnsignedByte();
HXLINE(  77)		int type = hx::UShr(tdata,7);
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		if (!(cubeMap)) {
HXLINE(  79)			_hx_tmp = (type != 0);
            		}
            		else {
HXLINE(  79)			_hx_tmp = false;
            		}
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  81)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube map not expected",a7,74,ca,c8)));
            		}
HXLINE(  84)		bool _hx_tmp1;
HXDLIN(  84)		if (cubeMap) {
HXLINE(  84)			_hx_tmp1 = (type != 1);
            		}
            		else {
HXLINE(  84)			_hx_tmp1 = false;
            		}
HXDLIN(  84)		if (_hx_tmp1) {
HXLINE(  86)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube map expected",fa,fe,ed,52)));
            		}
HXLINE(  89)		this->cubeMap = cubeMap;
HXLINE(  91)		this->atfFormat = (tdata & 127);
HXLINE(  94)		bool _hx_tmp2;
HXDLIN(  94)		if ((this->atfFormat != 3)) {
HXLINE(  94)			_hx_tmp2 = (this->atfFormat != 5);
            		}
            		else {
HXLINE(  94)			_hx_tmp2 = false;
            		}
HXDLIN(  94)		if (_hx_tmp2) {
HXLINE(  96)			::lime::utils::Log_obj::warn(HX_("Only ATF block compressed textures without JPEG-XR+LZMA are supported",25,8c,50,6a),hx::SourceInfo(HX_("openfl/_internal/formats/atf/ATFReader.hx",69,fe,c2,e5),96,HX_("openfl._internal.formats.atf.ATFReader",b9,6e,7a,7f),HX_("readHeader",83,ed,7b,f6)));
            		}
HXLINE(  99)		this->width = (1 << this->data->readUnsignedByte());
HXLINE( 100)		this->height = (1 << this->data->readUnsignedByte());
HXLINE( 102)		bool _hx_tmp3;
HXDLIN( 102)		if ((this->width == _hx___width)) {
HXLINE( 102)			_hx_tmp3 = (this->height != _hx___height);
            		}
            		else {
HXLINE( 102)			_hx_tmp3 = true;
            		}
HXDLIN( 102)		if (_hx_tmp3) {
HXLINE( 104)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF width and height dont match",3f,49,15,70)));
            		}
HXLINE( 107)		this->mipCount = this->data->readUnsignedByte();
HXLINE( 109)		return (this->atfFormat == 5);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ATFReader_obj,readHeader,return )

void ATFReader_obj::readTextures( ::Dynamic uploadCallback){
            	HX_GC_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_113_readTextures)
HXLINE( 116)		int gpuFormats;
HXDLIN( 116)		if ((this->version < 3)) {
HXLINE( 116)			gpuFormats = 3;
            		}
            		else {
HXLINE( 116)			gpuFormats = 4;
            		}
HXLINE( 117)		int sideCount;
HXDLIN( 117)		if (this->cubeMap) {
HXLINE( 117)			sideCount = 6;
            		}
            		else {
HXLINE( 117)			sideCount = 1;
            		}
HXLINE( 119)		{
HXLINE( 119)			int _g = 0;
HXDLIN( 119)			int _g1 = sideCount;
HXDLIN( 119)			while((_g < _g1)){
HXLINE( 119)				_g = (_g + 1);
HXDLIN( 119)				int side = (_g - 1);
HXLINE( 121)				{
HXLINE( 121)					int _g2 = 0;
HXDLIN( 121)					int _g11 = this->mipCount;
HXDLIN( 121)					while((_g2 < _g11)){
HXLINE( 121)						_g2 = (_g2 + 1);
HXDLIN( 121)						int level = (_g2 - 1);
HXLINE( 123)						{
HXLINE( 123)							int _g3 = 0;
HXDLIN( 123)							int _g12 = gpuFormats;
HXDLIN( 123)							while((_g3 < _g12)){
HXLINE( 123)								_g3 = (_g3 + 1);
HXDLIN( 123)								int gpuFormat = (_g3 - 1);
HXLINE( 125)								int blockLength;
HXDLIN( 125)								if ((this->version == 0)) {
HXLINE( 125)									blockLength = this->_hx___readUInt24(this->data);
            								}
            								else {
HXLINE( 125)									blockLength = this->_hx___readUInt32(this->data);
            								}
HXLINE( 127)								int a = (this->data->position + blockLength);
HXDLIN( 127)								int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->data);
HXDLIN( 127)								bool aNeg = (a < 0);
HXDLIN( 127)								bool bNeg = (b < 0);
HXDLIN( 127)								bool _hx_tmp;
HXDLIN( 127)								if ((aNeg != bNeg)) {
HXLINE( 127)									_hx_tmp = aNeg;
            								}
            								else {
HXLINE( 127)									_hx_tmp = (a > b);
            								}
HXDLIN( 127)								if (_hx_tmp) {
HXLINE( 129)									HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Block length exceeds ATF file length",15,23,c0,24)));
            								}
HXLINE( 132)								bool aNeg1 = (blockLength < 0);
HXDLIN( 132)								bool bNeg1 = (0 < 0);
HXDLIN( 132)								bool _hx_tmp1;
HXDLIN( 132)								if ((aNeg1 != bNeg1)) {
HXLINE( 132)									_hx_tmp1 = aNeg1;
            								}
            								else {
HXLINE( 132)									_hx_tmp1 = (blockLength > 0);
            								}
HXDLIN( 132)								if (_hx_tmp1) {
HXLINE( 134)									 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(blockLength);
HXLINE( 135)									{
HXLINE( 135)										 ::openfl::utils::ByteArrayData this1 = this->data;
HXDLIN( 135)										this1->readBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(bytes),0,blockLength);
            									}
HXLINE( 137)									uploadCallback(side,level,gpuFormat,(this->width >> level),(this->height >> level),blockLength,bytes);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,readTextures,(void))

int ATFReader_obj::_hx___readUInt24( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_145___readUInt24)
HXLINE( 146)		int value = (data->readUnsignedByte() << 16);
HXLINE( 148)		value = (value | (data->readUnsignedByte() << 8));
HXLINE( 149)		value = (value | data->readUnsignedByte());
HXLINE( 150)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,_hx___readUInt24,return )

int ATFReader_obj::_hx___readUInt32( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_154___readUInt32)
HXLINE( 155)		int value = (data->readUnsignedByte() << 24);
HXLINE( 157)		value = (value | (data->readUnsignedByte() << 16));
HXLINE( 158)		value = (value | (data->readUnsignedByte() << 8));
HXLINE( 159)		value = (value | data->readUnsignedByte());
HXLINE( 160)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,_hx___readUInt32,return )


hx::ObjectPtr< ATFReader_obj > ATFReader_obj::__new( ::openfl::utils::ByteArrayData data,int byteArrayOffset) {
	hx::ObjectPtr< ATFReader_obj > __this = new ATFReader_obj();
	__this->__construct(data,byteArrayOffset);
	return __this;
}

hx::ObjectPtr< ATFReader_obj > ATFReader_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData data,int byteArrayOffset) {
	ATFReader_obj *__this = (ATFReader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ATFReader_obj), true, "openfl._internal.formats.atf.ATFReader"));
	*(void **)__this = ATFReader_obj::_hx_vtable;
	__this->__construct(data,byteArrayOffset);
	return __this;
}

ATFReader_obj::ATFReader_obj()
{
}

void ATFReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ATFReader);
	HX_MARK_MEMBER_NAME(atfFormat,"atfFormat");
	HX_MARK_MEMBER_NAME(cubeMap,"cubeMap");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(mipCount,"mipCount");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void ATFReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atfFormat,"atfFormat");
	HX_VISIT_MEMBER_NAME(cubeMap,"cubeMap");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(mipCount,"mipCount");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(width,"width");
}

hx::Val ATFReader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { return hx::Val( cubeMap ); }
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mipCount") ) { return hx::Val( mipCount ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"atfFormat") ) { return hx::Val( atfFormat ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readHeader") ) { return hx::Val( readHeader_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readTextures") ) { return hx::Val( readTextures_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readUInt24") ) { return hx::Val( _hx___readUInt24_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readUInt32") ) { return hx::Val( _hx___readUInt32_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ATFReader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { cubeMap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mipCount") ) { mipCount=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"atfFormat") ) { atfFormat=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ATFReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("atfFormat",aa,d3,04,9c));
	outFields->push(HX_("cubeMap",a7,4c,d0,8c));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("mipCount",9b,6a,51,0e));
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("width",06,b6,62,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ATFReader_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ATFReader_obj,atfFormat),HX_("atfFormat",aa,d3,04,9c)},
	{hx::fsBool,(int)offsetof(ATFReader_obj,cubeMap),HX_("cubeMap",a7,4c,d0,8c)},
	{hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(ATFReader_obj,data),HX_("data",2a,56,63,42)},
	{hx::fsInt,(int)offsetof(ATFReader_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsInt,(int)offsetof(ATFReader_obj,mipCount),HX_("mipCount",9b,6a,51,0e)},
	{hx::fsInt,(int)offsetof(ATFReader_obj,version),HX_("version",18,e7,f1,7c)},
	{hx::fsInt,(int)offsetof(ATFReader_obj,width),HX_("width",06,b6,62,ca)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ATFReader_obj_sStaticStorageInfo = 0;
#endif

static ::String ATFReader_obj_sMemberFields[] = {
	HX_("atfFormat",aa,d3,04,9c),
	HX_("cubeMap",a7,4c,d0,8c),
	HX_("data",2a,56,63,42),
	HX_("height",e7,07,4c,02),
	HX_("mipCount",9b,6a,51,0e),
	HX_("version",18,e7,f1,7c),
	HX_("width",06,b6,62,ca),
	HX_("readHeader",83,ed,7b,f6),
	HX_("readTextures",ae,44,04,a1),
	HX_("__readUInt24",d2,98,1e,4b),
	HX_("__readUInt32",af,99,1e,4b),
	::String(null()) };

hx::Class ATFReader_obj::__mClass;

void ATFReader_obj::__register()
{
	ATFReader_obj _hx_dummy;
	ATFReader_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.formats.atf.ATFReader",b9,6e,7a,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ATFReader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ATFReader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ATFReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ATFReader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ATFReader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d3b26b6427ce3c40_29_boot)
HXDLIN(  29)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace atf
