// Generated by Haxe 4.0.2
#ifndef INCLUDED_lime_net_curl_CURLMultiMessage
#define INCLUDED_lime_net_curl_CURLMultiMessage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,net,curl,CURL)
HX_DECLARE_CLASS3(lime,net,curl,CURLMultiMessage)

namespace lime{
namespace net{
namespace curl{


class HXCPP_CLASS_ATTRIBUTES CURLMultiMessage_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CURLMultiMessage_obj OBJ_;
		CURLMultiMessage_obj();

	public:
		enum { _hx_ClassId = 0x62e36b2e };

		void __construct( ::lime::net::curl::CURL curl,int result);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.net.curl.CURLMultiMessage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.net.curl.CURLMultiMessage"); }
		static hx::ObjectPtr< CURLMultiMessage_obj > __new( ::lime::net::curl::CURL curl,int result);
		static hx::ObjectPtr< CURLMultiMessage_obj > __alloc(hx::Ctx *_hx_ctx, ::lime::net::curl::CURL curl,int result);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CURLMultiMessage_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CURLMultiMessage",5a,15,ed,e7); }

		 ::lime::net::curl::CURL curl;
		int result;
};

} // end namespace lime
} // end namespace net
} // end namespace curl

#endif /* INCLUDED_lime_net_curl_CURLMultiMessage */ 
