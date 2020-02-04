// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime__internal_graphics__ImageDataUtil_ImageDataView
#include <lime/_internal/graphics/_ImageDataUtil/ImageDataView.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0f70c5927802d56d_1663_new,"lime._internal.graphics._ImageDataUtil.ImageDataView","new",0x36089ace,"lime._internal.graphics._ImageDataUtil.ImageDataView.new","lime/_internal/graphics/ImageDataUtil.hx",1663,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1687_clip,"lime._internal.graphics._ImageDataUtil.ImageDataView","clip",0x0a3ec4a2,"lime._internal.graphics._ImageDataUtil.ImageDataView.clip","lime/_internal/graphics/ImageDataUtil.hx",1687,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1697_hasRow,"lime._internal.graphics._ImageDataUtil.ImageDataView","hasRow",0xdbd8dd32,"lime._internal.graphics._ImageDataUtil.ImageDataView.hasRow","lime/_internal/graphics/ImageDataUtil.hx",1697,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1701_offset,"lime._internal.graphics._ImageDataUtil.ImageDataView","offset",0x80da85e5,"lime._internal.graphics._ImageDataUtil.ImageDataView.offset","lime/_internal/graphics/ImageDataUtil.hx",1701,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1729_row,"lime._internal.graphics._ImageDataUtil.ImageDataView","row",0x360bac88,"lime._internal.graphics._ImageDataUtil.ImageDataView.row","lime/_internal/graphics/ImageDataUtil.hx",1729,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_0f70c5927802d56d_1733___update,"lime._internal.graphics._ImageDataUtil.ImageDataView","__update",0xdf2597fb,"lime._internal.graphics._ImageDataUtil.ImageDataView.__update","lime/_internal/graphics/ImageDataUtil.hx",1733,0x59dddace)
namespace lime{
namespace _internal{
namespace graphics{
namespace _ImageDataUtil{

void ImageDataView_obj::__construct( ::lime::graphics::Image image, ::lime::math::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1663_new)
HXLINE(1664)		this->image = image;
HXLINE(1666)		if (hx::IsNull( rect )) {
HXLINE(1668)			this->rect = image->get_rect();
            		}
            		else {
HXLINE(1672)			if ((rect->x < 0)) {
HXLINE(1672)				rect->x = ( (Float)(0) );
            			}
HXLINE(1673)			if ((rect->y < 0)) {
HXLINE(1673)				rect->y = ( (Float)(0) );
            			}
HXLINE(1674)			if (((rect->x + rect->width) > image->width)) {
HXLINE(1674)				rect->width = (( (Float)(image->width) ) - rect->x);
            			}
HXLINE(1675)			if (((rect->y + rect->height) > image->height)) {
HXLINE(1675)				rect->height = (( (Float)(image->height) ) - rect->y);
            			}
HXLINE(1676)			if ((rect->width < 0)) {
HXLINE(1676)				rect->width = ( (Float)(0) );
            			}
HXLINE(1677)			if ((rect->height < 0)) {
HXLINE(1677)				rect->height = ( (Float)(0) );
            			}
HXLINE(1678)			this->rect = rect;
            		}
HXLINE(1681)		this->stride = image->buffer->get_stride();
HXLINE(1683)		this->_hx___update();
            	}

Dynamic ImageDataView_obj::__CreateEmpty() { return new ImageDataView_obj; }

void *ImageDataView_obj::_hx_vtable = 0;

Dynamic ImageDataView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageDataView_obj > _hx_result = new ImageDataView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ImageDataView_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58696d14;
}

void ImageDataView_obj::clip(int x,int y,int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_0f70c5927802d56d_1687_clip)
HXLINE(1688)		if (hx::IsNull( this->tempRect )) {
HXLINE(1688)			this->tempRect =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(1689)		this->tempRect->setTo(( (Float)(x) ),( (Float)(y) ),( (Float)(width) ),( (Float)(height) ));
HXLINE(1691)		this->rect->intersection(this->tempRect,this->rect);
HXLINE(1692)		this->_hx___update();
            	}


HX_DEFINE_DYNAMIC_FUNC4(ImageDataView_obj,clip,(void))

bool ImageDataView_obj::hasRow(int y){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1697_hasRow)
HXDLIN(1697)		if ((y >= 0)) {
HXDLIN(1697)			return (y < this->height);
            		}
            		else {
HXDLIN(1697)			return false;
            		}
HXDLIN(1697)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDataView_obj,hasRow,return )

void ImageDataView_obj::offset(int x,int y){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1701_offset)
HXLINE(1702)		if ((x < 0)) {
HXLINE(1704)			 ::lime::math::Rectangle _hx_tmp = this->rect;
HXDLIN(1704)			_hx_tmp->x = (_hx_tmp->x + x);
HXLINE(1705)			if ((this->rect->x < 0)) {
HXLINE(1705)				this->rect->x = ( (Float)(0) );
            			}
            		}
            		else {
HXLINE(1709)			 ::lime::math::Rectangle _hx_tmp1 = this->rect;
HXDLIN(1709)			_hx_tmp1->x = (_hx_tmp1->x + x);
HXLINE(1710)			 ::lime::math::Rectangle _hx_tmp2 = this->rect;
HXDLIN(1710)			_hx_tmp2->width = (_hx_tmp2->width - ( (Float)(x) ));
            		}
HXLINE(1713)		if ((y < 0)) {
HXLINE(1715)			 ::lime::math::Rectangle _hx_tmp3 = this->rect;
HXDLIN(1715)			_hx_tmp3->y = (_hx_tmp3->y + y);
HXLINE(1716)			if ((this->rect->y < 0)) {
HXLINE(1716)				this->rect->y = ( (Float)(0) );
            			}
            		}
            		else {
HXLINE(1720)			 ::lime::math::Rectangle _hx_tmp4 = this->rect;
HXDLIN(1720)			_hx_tmp4->y = (_hx_tmp4->y + y);
HXLINE(1721)			 ::lime::math::Rectangle _hx_tmp5 = this->rect;
HXDLIN(1721)			_hx_tmp5->height = (_hx_tmp5->height - ( (Float)(y) ));
            		}
HXLINE(1724)		this->_hx___update();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ImageDataView_obj,offset,(void))

int ImageDataView_obj::row(int y){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1729_row)
HXDLIN(1729)		return (this->byteOffset + (this->stride * y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDataView_obj,row,return )

void ImageDataView_obj::_hx___update(){
            	HX_STACKFRAME(&_hx_pos_0f70c5927802d56d_1733___update)
HXLINE(1734)		this->x = ::Math_obj::ceil(this->rect->x);
HXLINE(1735)		this->y = ::Math_obj::ceil(this->rect->y);
HXLINE(1736)		this->width = ::Math_obj::floor(this->rect->width);
HXLINE(1737)		this->height = ::Math_obj::floor(this->rect->height);
HXLINE(1738)		this->byteOffset = ((this->stride * (this->y + this->image->offsetY)) + ((this->x + this->image->offsetX) * 4));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDataView_obj,_hx___update,(void))


hx::ObjectPtr< ImageDataView_obj > ImageDataView_obj::__new( ::lime::graphics::Image image, ::lime::math::Rectangle rect) {
	hx::ObjectPtr< ImageDataView_obj > __this = new ImageDataView_obj();
	__this->__construct(image,rect);
	return __this;
}

hx::ObjectPtr< ImageDataView_obj > ImageDataView_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::graphics::Image image, ::lime::math::Rectangle rect) {
	ImageDataView_obj *__this = (ImageDataView_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ImageDataView_obj), true, "lime._internal.graphics._ImageDataUtil.ImageDataView"));
	*(void **)__this = ImageDataView_obj::_hx_vtable;
	__this->__construct(image,rect);
	return __this;
}

ImageDataView_obj::ImageDataView_obj()
{
}

void ImageDataView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageDataView);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(tempRect,"tempRect");
	HX_MARK_END_CLASS();
}

void ImageDataView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(tempRect,"tempRect");
}

hx::Val ImageDataView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return hx::Val( row_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return hx::Val( rect ); }
		if (HX_FIELD_EQ(inName,"clip") ) { return hx::Val( clip_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"image") ) { return hx::Val( image ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"stride") ) { return hx::Val( stride ); }
		if (HX_FIELD_EQ(inName,"hasRow") ) { return hx::Val( hasRow_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tempRect") ) { return hx::Val( tempRect ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return hx::Val( _hx___update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return hx::Val( byteOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ImageDataView_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast<  ::lime::math::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast<  ::lime::graphics::Image >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tempRect") ) { tempRect=inValue.Cast<  ::lime::math::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDataView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("byteOffset",bb,20,44,38));
	outFields->push(HX_("image",5b,1f,69,bd));
	outFields->push(HX_("rect",24,4d,a7,4b));
	outFields->push(HX_("stride",19,20,30,11));
	outFields->push(HX_("tempRect",58,56,1b,9b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ImageDataView_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ImageDataView_obj,x),HX_("x",78,00,00,00)},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,y),HX_("y",79,00,00,00)},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,byteOffset),HX_("byteOffset",bb,20,44,38)},
	{hx::fsObject /*  ::lime::graphics::Image */ ,(int)offsetof(ImageDataView_obj,image),HX_("image",5b,1f,69,bd)},
	{hx::fsObject /*  ::lime::math::Rectangle */ ,(int)offsetof(ImageDataView_obj,rect),HX_("rect",24,4d,a7,4b)},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,stride),HX_("stride",19,20,30,11)},
	{hx::fsObject /*  ::lime::math::Rectangle */ ,(int)offsetof(ImageDataView_obj,tempRect),HX_("tempRect",58,56,1b,9b)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ImageDataView_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageDataView_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("height",e7,07,4c,02),
	HX_("width",06,b6,62,ca),
	HX_("byteOffset",bb,20,44,38),
	HX_("image",5b,1f,69,bd),
	HX_("rect",24,4d,a7,4b),
	HX_("stride",19,20,30,11),
	HX_("tempRect",58,56,1b,9b),
	HX_("clip",d0,6e,c2,41),
	HX_("hasRow",e0,ee,3d,bb),
	HX_("offset",93,97,3f,60),
	HX_("row",1a,e2,56,00),
	HX_("__update",29,f1,34,2f),
	::String(null()) };

hx::Class ImageDataView_obj::__mClass;

void ImageDataView_obj::__register()
{
	ImageDataView_obj _hx_dummy;
	ImageDataView_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime._internal.graphics._ImageDataUtil.ImageDataView",dc,db,9b,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ImageDataView_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageDataView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageDataView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageDataView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace graphics
} // end namespace _ImageDataUtil
