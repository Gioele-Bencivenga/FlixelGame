// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_html_HTMLParser
#include <openfl/_internal/formats/html/HTMLParser.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#include <openfl/text/_TextFormatAlign/TextFormatAlign_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_31_parse,"openfl._internal.formats.html.HTMLParser","parse",0x1023e310,"openfl._internal.formats.html.HTMLParser.parse","openfl/_internal/formats/html/HTMLParser.hx",31,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_253___getAttributeMatch,"openfl._internal.formats.html.HTMLParser","__getAttributeMatch",0xdadef73c,"openfl._internal.formats.html.HTMLParser.__getAttributeMatch","openfl/_internal/formats/html/HTMLParser.hx",253,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_13_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",13,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_15_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",15,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_16_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",16,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_17_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",17,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_18_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",18,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_19_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",19,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_20_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",20,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_21_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",21,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_22_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",22,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_23_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",23,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_24_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",24,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_25_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",25,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_26_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",26,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_27_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",27,0x6cb5a975)
HX_LOCAL_STACK_FRAME(_hx_pos_f7ce69a5a5ff89f9_28_boot,"openfl._internal.formats.html.HTMLParser","boot",0xbd75fbf5,"openfl._internal.formats.html.HTMLParser.boot","openfl/_internal/formats/html/HTMLParser.hx",28,0x6cb5a975)
namespace openfl{
namespace _internal{
namespace formats{
namespace html{

void HTMLParser_obj::__construct() { }

Dynamic HTMLParser_obj::__CreateEmpty() { return new HTMLParser_obj; }

void *HTMLParser_obj::_hx_vtable = 0;

Dynamic HTMLParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HTMLParser_obj > _hx_result = new HTMLParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HTMLParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4591e6e5;
}

 ::EReg HTMLParser_obj::_hx___regexAlign;

 ::EReg HTMLParser_obj::_hx___regexBreakTag;

 ::EReg HTMLParser_obj::_hx___regexBlockIndent;

 ::EReg HTMLParser_obj::_hx___regexColor;

::Array< ::Dynamic> HTMLParser_obj::_hx___regexEntities;

 ::EReg HTMLParser_obj::_hx___regexFace;

 ::EReg HTMLParser_obj::_hx___regexHTMLTag;

 ::EReg HTMLParser_obj::_hx___regexHref;

 ::EReg HTMLParser_obj::_hx___regexIndent;

 ::EReg HTMLParser_obj::_hx___regexLeading;

 ::EReg HTMLParser_obj::_hx___regexLeftMargin;

 ::EReg HTMLParser_obj::_hx___regexRightMargin;

 ::EReg HTMLParser_obj::_hx___regexSize;

 ::EReg HTMLParser_obj::_hx___regexTabStops;

::String HTMLParser_obj::parse(::String value, ::openfl::text::TextFormat textFormat, ::openfl::_Vector::ObjectVector textFormatRanges){
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_31_parse)
HXLINE(  32)		value = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexBreakTag->replace(value,HX_("\n",0a,00,00,00));
HXLINE(  33)		value = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexEntities->__get(0).StaticCast<  ::EReg >()->replace(value,HX_("\"",22,00,00,00));
HXLINE(  34)		value = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexEntities->__get(1).StaticCast<  ::EReg >()->replace(value,HX_("'",27,00,00,00));
HXLINE(  35)		value = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexEntities->__get(2).StaticCast<  ::EReg >()->replace(value,HX_("&",26,00,00,00));
HXLINE(  36)		value = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexEntities->__get(5).StaticCast<  ::EReg >()->replace(value,HX_(" ",20,00,00,00));
HXLINE(  40)		::Array< ::String > segments = value.split(HX_("<",3c,00,00,00));
HXLINE(  42)		if ((segments->length == 1)) {
HXLINE(  44)			value = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexHTMLTag->replace(value,HX_("",00,00,00,00));
HXLINE(  46)			if ((textFormatRanges->get_length() > 1)) {
HXLINE(  48)				textFormatRanges->splice(1,(textFormatRanges->get_length() - 1));
            			}
HXLINE(  51)			value = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexEntities->__get(3).StaticCast<  ::EReg >()->replace(value,HX_("<",3c,00,00,00));
HXLINE(  52)			value = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexEntities->__get(4).StaticCast<  ::EReg >()->replace(value,HX_(">",3e,00,00,00));
HXLINE(  54)			 ::openfl::_internal::text::TextFormatRange range = textFormatRanges->get(0).StaticCast<  ::openfl::_internal::text::TextFormatRange >();
HXLINE(  55)			range->format = textFormat;
HXLINE(  56)			range->start = 0;
HXLINE(  57)			range->end = value.length;
HXLINE(  59)			return value;
            		}
            		else {
HXLINE(  63)			textFormatRanges->splice(0,textFormatRanges->get_length());
HXLINE(  65)			value = HX_("",00,00,00,00);
HXLINE(  66)			::String segment;
HXLINE(  68)			{
HXLINE(  68)				int _g = 0;
HXDLIN(  68)				int _g1 = segments->length;
HXDLIN(  68)				while((_g < _g1)){
HXLINE(  68)					_g = (_g + 1);
HXDLIN(  68)					int i = (_g - 1);
HXLINE(  70)					segment = segments->__get(i);
HXLINE(  71)					segment = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexEntities->__get(3).StaticCast<  ::EReg >()->replace(segment,HX_("<",3c,00,00,00));
HXLINE(  72)					segment = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexEntities->__get(4).StaticCast<  ::EReg >()->replace(segment,HX_(">",3e,00,00,00));
HXLINE(  73)					segments[i] = segment;
            				}
            			}
HXLINE(  76)			::Array< ::Dynamic> formatStack = ::Array_obj< ::Dynamic>::__new(1)->init(0,textFormat->clone());
HXLINE(  77)			::Array< ::Dynamic> tagStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  78)			::String sub;
HXLINE(  79)			bool noLineBreak = false;
HXLINE(  81)			{
HXLINE(  81)				int _g2 = 0;
HXDLIN(  81)				while((_g2 < segments->length)){
HXLINE(  81)					::String segment1 = segments->__get(_g2);
HXDLIN(  81)					_g2 = (_g2 + 1);
HXLINE(  83)					if ((segment1 == HX_("",00,00,00,00))) {
HXLINE(  83)						continue;
            					}
HXLINE(  85)					bool isClosingTag = (segment1.substr(0,1) == HX_("/",2f,00,00,00));
HXLINE(  86)					int tagEndIndex = segment1.indexOf(HX_(">",3e,00,00,00),null());
HXLINE(  87)					int start = (tagEndIndex + 1);
HXLINE(  88)					int spaceIndex = segment1.indexOf(HX_(" ",20,00,00,00),null());
HXLINE(  89)					int tagName;
HXDLIN(  89)					if (isClosingTag) {
HXLINE(  89)						tagName = 1;
            					}
            					else {
HXLINE(  89)						tagName = 0;
            					}
HXDLIN(  89)					 ::Dynamic tagName1;
HXDLIN(  89)					bool tagName2;
HXDLIN(  89)					if ((spaceIndex > -1)) {
HXLINE(  89)						tagName2 = (spaceIndex < tagEndIndex);
            					}
            					else {
HXLINE(  89)						tagName2 = false;
            					}
HXDLIN(  89)					if (tagName2) {
HXLINE(  89)						tagName1 = spaceIndex;
            					}
            					else {
HXLINE(  89)						tagName1 = tagEndIndex;
            					}
HXDLIN(  89)					::String tagName3 = segment1.substring(tagName,tagName1);
HXLINE(  91)					 ::openfl::text::TextFormat format;
HXLINE(  93)					if (isClosingTag) {
HXLINE(  95)						bool _hx_tmp;
HXDLIN(  95)						if ((tagStack->length != 0)) {
HXLINE(  95)							::String _hx_tmp1 = tagName3.toLowerCase();
HXDLIN(  95)							_hx_tmp = hx::IsNotEq( _hx_tmp1,tagStack->__get((tagStack->length - 1))->__Field(HX_("toLowerCase",56,4c,64,b8),hx::paccDynamic)() );
            						}
            						else {
HXLINE(  95)							_hx_tmp = true;
            						}
HXDLIN(  95)						if (_hx_tmp) {
HXLINE(  97)							::lime::utils::Log_obj::info((HX_("Invalid HTML, unexpected closing tag ignored: ",c0,13,d6,64) + tagName3),hx::SourceInfo(HX_("openfl/_internal/formats/html/HTMLParser.hx",75,a9,b5,6c),97,HX_("openfl._internal.formats.html.HTMLParser",8b,ff,72,57),HX_("parse",33,90,55,bd)));
HXLINE(  98)							continue;
            						}
HXLINE( 101)						tagStack->pop();
HXLINE( 102)						formatStack->pop().StaticCast<  ::openfl::text::TextFormat >();
HXLINE( 103)						format = formatStack->__get((formatStack->length - 1)).StaticCast<  ::openfl::text::TextFormat >()->clone();
HXLINE( 105)						bool _hx_tmp2;
HXDLIN( 105)						if ((tagName3.toLowerCase() == HX_("p",70,00,00,00))) {
HXLINE( 105)							_hx_tmp2 = (textFormatRanges->get_length() > 0);
            						}
            						else {
HXLINE( 105)							_hx_tmp2 = false;
            						}
HXDLIN( 105)						if (_hx_tmp2) {
HXLINE( 107)							value = (value + HX_("\n",0a,00,00,00));
HXLINE( 108)							noLineBreak = true;
HXLINE( 109)							 ::openfl::_internal::text::TextFormatRange _hx_tmp3 = textFormatRanges->get((textFormatRanges->get_length() - 1)).StaticCast<  ::openfl::_internal::text::TextFormatRange >();
HXDLIN( 109)							_hx_tmp3->end++;
            						}
HXLINE( 112)						if ((start < segment1.length)) {
HXLINE( 114)							sub = segment1.substr(start,null());
HXLINE( 115)							textFormatRanges->push( ::openfl::_internal::text::TextFormatRange_obj::__alloc( HX_CTX ,format,value.length,(value.length + sub.length)));
HXLINE( 116)							value = (value + sub);
HXLINE( 117)							noLineBreak = false;
            						}
            					}
            					else {
HXLINE( 122)						format = formatStack->__get((formatStack->length - 1)).StaticCast<  ::openfl::text::TextFormat >()->clone();
HXLINE( 124)						if ((tagEndIndex > -1)) {
HXLINE( 126)							::String _hx_switch_0 = tagName3.toLowerCase();
            							if (  (_hx_switch_0==HX_("a",61,00,00,00)) ){
HXLINE( 129)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexHref->match(segment1)) {
HXLINE( 131)									format->url = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexHref);
            								}
HXLINE( 129)								goto _hx_goto_2;
            							}
            							if (  (_hx_switch_0==HX_("b",62,00,00,00)) ){
HXLINE( 174)								format->bold = true;
HXDLIN( 174)								goto _hx_goto_2;
            							}
            							if (  (_hx_switch_0==HX_("em",68,58,00,00)) ||  (_hx_switch_0==HX_("i",69,00,00,00)) ){
HXLINE( 180)								format->italic = true;
HXDLIN( 180)								goto _hx_goto_2;
            							}
            							if (  (_hx_switch_0==HX_("font",cf,5d,c0,43)) ){
HXLINE( 147)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexFace->match(segment1)) {
HXLINE( 149)									format->font = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexFace);
            								}
HXLINE( 152)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexColor->match(segment1)) {
HXLINE( 154)									format->color = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + ::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexColor)));
            								}
HXLINE( 157)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexSize->match(segment1)) {
HXLINE( 159)									::String sizeAttr = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexSize);
HXLINE( 160)									 ::Dynamic firstChar = sizeAttr.charCodeAt(0);
HXLINE( 162)									bool _hx_tmp4;
HXDLIN( 162)									if (hx::IsNotEq( firstChar,43 )) {
HXLINE( 162)										_hx_tmp4 = hx::IsEq( firstChar,45 );
            									}
            									else {
HXLINE( 162)										_hx_tmp4 = true;
            									}
HXDLIN( 162)									if (_hx_tmp4) {
HXLINE( 164)										 ::openfl::text::TextFormat parentFormat;
HXDLIN( 164)										if ((formatStack->length >= 2)) {
HXLINE( 164)											parentFormat = formatStack->__get((formatStack->length - 2)).StaticCast<  ::openfl::text::TextFormat >();
            										}
            										else {
HXLINE( 164)											parentFormat = textFormat;
            										}
HXLINE( 165)										 ::Dynamic parentFormat1 = parentFormat->size;
HXDLIN( 165)										format->size = (parentFormat1 + ::Std_obj::parseInt(sizeAttr));
            									}
            									else {
HXLINE( 169)										format->size = ::Std_obj::parseInt(sizeAttr);
            									}
            								}
HXLINE( 146)								goto _hx_goto_2;
            							}
            							if (  (_hx_switch_0==HX_("p",70,00,00,00)) ){
HXLINE( 135)								bool _hx_tmp5;
HXDLIN( 135)								if ((textFormatRanges->get_length() > 0)) {
HXLINE( 135)									_hx_tmp5 = !(noLineBreak);
            								}
            								else {
HXLINE( 135)									_hx_tmp5 = false;
            								}
HXDLIN( 135)								if (_hx_tmp5) {
HXLINE( 137)									value = (value + HX_("\n",0a,00,00,00));
            								}
HXLINE( 140)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexAlign->match(segment1)) {
HXLINE( 142)									::String align = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexAlign).toLowerCase();
HXLINE( 143)									format->align = ::openfl::text::_TextFormatAlign::TextFormatAlign_Impl__obj::fromString(align);
            								}
HXLINE( 134)								goto _hx_goto_2;
            							}
            							if (  (_hx_switch_0==HX_("textformat",a4,9b,ea,ff)) ){
HXLINE( 183)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexBlockIndent->match(segment1)) {
HXLINE( 185)									format->blockIndent = ::Std_obj::parseInt(::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexBlockIndent));
            								}
HXLINE( 188)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexIndent->match(segment1)) {
HXLINE( 190)									format->indent = ::Std_obj::parseInt(::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexIndent));
            								}
HXLINE( 193)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexLeading->match(segment1)) {
HXLINE( 195)									format->leading = ::Std_obj::parseInt(::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexLeading));
            								}
HXLINE( 198)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexLeftMargin->match(segment1)) {
HXLINE( 200)									format->leftMargin = ::Std_obj::parseInt(::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexLeftMargin));
            								}
HXLINE( 203)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexRightMargin->match(segment1)) {
HXLINE( 205)									format->rightMargin = ::Std_obj::parseInt(::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexRightMargin));
            								}
HXLINE( 208)								if (::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexTabStops->match(segment1)) {
HXLINE( 210)									::Array< ::String > values = ::openfl::_internal::formats::html::HTMLParser_obj::_hx___getAttributeMatch(::openfl::_internal::formats::html::HTMLParser_obj::_hx___regexTabStops).split(HX_(" ",20,00,00,00));
HXLINE( 211)									::Array< ::Dynamic> tabStops = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 213)									{
HXLINE( 213)										int _g21 = 0;
HXDLIN( 213)										while((_g21 < values->length)){
HXLINE( 213)											::String stop = values->__get(_g21);
HXDLIN( 213)											_g21 = (_g21 + 1);
HXLINE( 215)											tabStops->push(::Std_obj::parseInt(stop));
            										}
            									}
HXLINE( 218)									format->tabStops = tabStops;
            								}
HXLINE( 182)								goto _hx_goto_2;
            							}
            							if (  (_hx_switch_0==HX_("u",75,00,00,00)) ){
HXLINE( 177)								format->underline = true;
HXDLIN( 177)								goto _hx_goto_2;
            							}
            							_hx_goto_2:;
HXLINE( 222)							formatStack->push(format);
HXLINE( 223)							tagStack->push(tagName3);
HXLINE( 225)							if ((start < segment1.length)) {
HXLINE( 227)								sub = segment1.substring(start,null());
HXLINE( 228)								textFormatRanges->push( ::openfl::_internal::text::TextFormatRange_obj::__alloc( HX_CTX ,format,value.length,(value.length + sub.length)));
HXLINE( 229)								value = (value + sub);
HXLINE( 230)								noLineBreak = false;
            							}
            						}
            						else {
HXLINE( 235)							textFormatRanges->push( ::openfl::_internal::text::TextFormatRange_obj::__alloc( HX_CTX ,format,value.length,(value.length + segment1.length)));
HXLINE( 236)							value = (value + segment1);
HXLINE( 237)							noLineBreak = false;
            						}
            					}
            				}
            			}
HXLINE( 242)			if ((textFormatRanges->get_length() == 0)) {
HXLINE( 244)				textFormatRanges->push( ::openfl::_internal::text::TextFormatRange_obj::__alloc( HX_CTX ,formatStack->__get(0).StaticCast<  ::openfl::text::TextFormat >(),0,0));
            			}
            		}
HXLINE( 248)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HTMLParser_obj,parse,return )

::String HTMLParser_obj::_hx___getAttributeMatch( ::EReg regex){
            	HX_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_253___getAttributeMatch)
HXDLIN( 253)		if (hx::IsNotNull( regex->matched(2) )) {
HXDLIN( 253)			return regex->matched(2);
            		}
            		else {
HXDLIN( 253)			return regex->matched(3);
            		}
HXDLIN( 253)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HTMLParser_obj,_hx___getAttributeMatch,return )


HTMLParser_obj::HTMLParser_obj()
{
}

bool HTMLParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { outValue = ( _hx___regexFace ); return true; }
		if (HX_FIELD_EQ(inName,"__regexHref") ) { outValue = ( _hx___regexHref ); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { outValue = ( _hx___regexSize ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { outValue = ( _hx___regexAlign ); return true; }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { outValue = ( _hx___regexColor ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { outValue = ( _hx___regexIndent ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { outValue = ( _hx___regexHTMLTag ); return true; }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { outValue = ( _hx___regexLeading ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { outValue = ( _hx___regexBreakTag ); return true; }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { outValue = ( _hx___regexEntities ); return true; }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { outValue = ( _hx___regexTabStops ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { outValue = ( _hx___regexLeftMargin ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { outValue = ( _hx___regexBlockIndent ); return true; }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { outValue = ( _hx___regexRightMargin ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__getAttributeMatch") ) { outValue = _hx___getAttributeMatch_dyn(); return true; }
	}
	return false;
}

bool HTMLParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { _hx___regexFace=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexHref") ) { _hx___regexHref=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { _hx___regexSize=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { _hx___regexAlign=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { _hx___regexColor=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { _hx___regexIndent=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { _hx___regexHTMLTag=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { _hx___regexLeading=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { _hx___regexBreakTag=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { _hx___regexEntities=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { _hx___regexTabStops=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { _hx___regexLeftMargin=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { _hx___regexBlockIndent=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { _hx___regexRightMargin=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *HTMLParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo HTMLParser_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexAlign,HX_("__regexAlign",9e,21,d1,2d)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexBreakTag,HX_("__regexBreakTag",a2,f1,6b,e6)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexBlockIndent,HX_("__regexBlockIndent",32,61,a3,a8)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexColor,HX_("__regexColor",3c,3c,9c,56)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &HTMLParser_obj::_hx___regexEntities,HX_("__regexEntities",08,59,3f,8c)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexFace,HX_("__regexFace",e4,c7,66,12)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexHTMLTag,HX_("__regexHTMLTag",e8,74,f4,76)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexHref,HX_("__regexHref",32,1d,c6,13)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexIndent,HX_("__regexIndent",73,bf,84,3f)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexLeading,HX_("__regexLeading",df,25,4c,7d)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexLeftMargin,HX_("__regexLeftMargin",1c,6e,33,f3)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexRightMargin,HX_("__regexRightMargin",c3,30,d7,98)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexSize,HX_("__regexSize",08,b4,04,1b)},
	{hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexTabStops,HX_("__regexTabStops",63,56,64,ec)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void HTMLParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexAlign,"__regexAlign");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexBreakTag,"__regexBreakTag");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexBlockIndent,"__regexBlockIndent");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexColor,"__regexColor");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexEntities,"__regexEntities");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexFace,"__regexFace");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexHTMLTag,"__regexHTMLTag");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexHref,"__regexHref");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexIndent,"__regexIndent");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexLeading,"__regexLeading");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexLeftMargin,"__regexLeftMargin");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexRightMargin,"__regexRightMargin");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexSize,"__regexSize");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexTabStops,"__regexTabStops");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HTMLParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexAlign,"__regexAlign");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexBreakTag,"__regexBreakTag");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexBlockIndent,"__regexBlockIndent");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexColor,"__regexColor");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexEntities,"__regexEntities");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexFace,"__regexFace");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexHTMLTag,"__regexHTMLTag");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexHref,"__regexHref");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexIndent,"__regexIndent");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexLeading,"__regexLeading");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexLeftMargin,"__regexLeftMargin");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexRightMargin,"__regexRightMargin");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexSize,"__regexSize");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexTabStops,"__regexTabStops");
};

#endif

hx::Class HTMLParser_obj::__mClass;

static ::String HTMLParser_obj_sStaticFields[] = {
	HX_("__regexAlign",9e,21,d1,2d),
	HX_("__regexBreakTag",a2,f1,6b,e6),
	HX_("__regexBlockIndent",32,61,a3,a8),
	HX_("__regexColor",3c,3c,9c,56),
	HX_("__regexEntities",08,59,3f,8c),
	HX_("__regexFace",e4,c7,66,12),
	HX_("__regexHTMLTag",e8,74,f4,76),
	HX_("__regexHref",32,1d,c6,13),
	HX_("__regexIndent",73,bf,84,3f),
	HX_("__regexLeading",df,25,4c,7d),
	HX_("__regexLeftMargin",1c,6e,33,f3),
	HX_("__regexRightMargin",c3,30,d7,98),
	HX_("__regexSize",08,b4,04,1b),
	HX_("__regexTabStops",63,56,64,ec),
	HX_("parse",33,90,55,bd),
	HX_("__getAttributeMatch",9f,3b,2c,45),
	::String(null())
};

void HTMLParser_obj::__register()
{
	HTMLParser_obj _hx_dummy;
	HTMLParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.formats.html.HTMLParser",8b,ff,72,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTMLParser_obj::__GetStatic;
	__mClass->mSetStaticField = &HTMLParser_obj::__SetStatic;
	__mClass->mMarkFunc = HTMLParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(HTMLParser_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HTMLParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HTMLParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTMLParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTMLParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HTMLParser_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_13_boot)
HXDLIN(  13)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_15_boot)
HXDLIN(  15)		_hx___regexAlign =  ::EReg_obj::__alloc( HX_CTX ,HX_("align\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",10,13,6b,f0),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_16_boot)
HXDLIN(  16)		_hx___regexBreakTag =  ::EReg_obj::__alloc( HX_CTX ,HX_("<br\\s*/?>",47,ed,43,f6),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_17_boot)
HXDLIN(  17)		_hx___regexBlockIndent =  ::EReg_obj::__alloc( HX_CTX ,HX_("blockindent\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",c4,9b,f6,bd),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_18_boot)
HXDLIN(  18)		_hx___regexColor =  ::EReg_obj::__alloc( HX_CTX ,HX_("color\\s?=\\s?(\"#([^\"]+)\"|'#([^']+)')",00,b9,16,dd),HX_("i",69,00,00,00));
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::Array< ::Dynamic> _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_19_boot)
HXDLIN(  19)			 ::EReg _hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("&quot;",2c,d9,81,8f),HX_("g",67,00,00,00));
HXDLIN(  19)			 ::EReg _hx_tmp1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&apos;",22,7f,ca,55),HX_("g",67,00,00,00));
HXDLIN(  19)			 ::EReg _hx_tmp2 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&amp;",dd,d4,aa,21),HX_("g",67,00,00,00));
HXDLIN(  19)			 ::EReg _hx_tmp3 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&lt;",4d,74,70,19),HX_("g",67,00,00,00));
HXDLIN(  19)			 ::EReg _hx_tmp4 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&gt;",08,a9,6c,19),HX_("g",67,00,00,00));
HXDLIN(  19)			return ::Array_obj< ::Dynamic>::__new(6)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5, ::EReg_obj::__alloc( HX_CTX ,HX_("&nbsp;",64,13,c2,c8),HX_("g",67,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_19_boot)
HXDLIN(  19)		_hx___regexEntities = ( (::Array< ::Dynamic>)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_20_boot)
HXDLIN(  20)		_hx___regexFace =  ::EReg_obj::__alloc( HX_CTX ,HX_("face\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",e8,04,9c,29),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_21_boot)
HXDLIN(  21)		_hx___regexHTMLTag =  ::EReg_obj::__alloc( HX_CTX ,HX_("<.*?>",97,b4,92,aa),HX_("g",67,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_22_boot)
HXDLIN(  22)		_hx___regexHref =  ::EReg_obj::__alloc( HX_CTX ,HX_("href\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",36,13,db,a4),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_23_boot)
HXDLIN(  23)		_hx___regexIndent =  ::EReg_obj::__alloc( HX_CTX ,HX_(" indent\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",57,ed,d3,82),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_24_boot)
HXDLIN(  24)		_hx___regexLeading =  ::EReg_obj::__alloc( HX_CTX ,HX_("leading\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",91,3e,34,39),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_25_boot)
HXDLIN(  25)		_hx___regexLeftMargin =  ::EReg_obj::__alloc( HX_CTX ,HX_("leftmargin\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",c0,1b,9a,30),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_26_boot)
HXDLIN(  26)		_hx___regexRightMargin =  ::EReg_obj::__alloc( HX_CTX ,HX_("rightmargin\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",d5,f2,36,34),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_27_boot)
HXDLIN(  27)		_hx___regexSize =  ::EReg_obj::__alloc( HX_CTX ,HX_("size\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",0c,1f,8b,76),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f7ce69a5a5ff89f9_28_boot)
HXDLIN(  28)		_hx___regexTabStops =  ::EReg_obj::__alloc( HX_CTX ,HX_("tabstops\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",87,94,2e,ca),HX_("i",69,00,00,00));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace html
