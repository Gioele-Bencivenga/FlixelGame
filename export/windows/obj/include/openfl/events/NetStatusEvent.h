// Generated by Haxe 4.0.2
#ifndef INCLUDED_openfl_events_NetStatusEvent
#define INCLUDED_openfl_events_NetStatusEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,NetStatusEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES NetStatusEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef NetStatusEvent_obj OBJ_;
		NetStatusEvent_obj();

	public:
		enum { _hx_ClassId = 0x0ab05474 };

		void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable, ::Dynamic info);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.NetStatusEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.events.NetStatusEvent"); }
		static hx::ObjectPtr< NetStatusEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable, ::Dynamic info);
		static hx::ObjectPtr< NetStatusEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable, ::Dynamic info);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NetStatusEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NetStatusEvent",4b,2a,fa,67); }

		static void __boot();
		static ::String NET_STATUS;
		static  ::lime::utils::ObjectPool _hx___pool;
		 ::Dynamic info;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_NetStatusEvent */ 
