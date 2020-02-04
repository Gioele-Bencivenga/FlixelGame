// Generated by Haxe 4.0.2
#ifndef INCLUDED_haxe_crypto_Base64
#define INCLUDED_haxe_crypto_Base64

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Base64)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES Base64_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Base64_obj OBJ_;
		Base64_obj();

	public:
		enum { _hx_ClassId = 0x65bbd7fa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Base64")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.crypto.Base64"); }

		inline static hx::ObjectPtr< Base64_obj > __new() {
			hx::ObjectPtr< Base64_obj > __this = new Base64_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Base64_obj > __alloc(hx::Ctx *_hx_ctx) {
			Base64_obj *__this = (Base64_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Base64_obj), false, "haxe.crypto.Base64"));
			*(void **)__this = Base64_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Base64_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Base64",af,71,bc,89); }

		static void __boot();
		static ::String CHARS;
		static  ::haxe::io::Bytes BYTES;
		static  ::haxe::io::Bytes decode(::String str,hx::Null< bool >  complement);
		static ::Dynamic decode_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Base64 */ 
