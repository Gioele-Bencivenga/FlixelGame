// Generated by Haxe 4.0.2
#ifndef INCLUDED_openfl_utils__Dictionary_Dictionary_Impl_
#define INCLUDED_openfl_utils__Dictionary_Dictionary_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,utils,_Dictionary,ClassMap)
HX_DECLARE_CLASS3(openfl,utils,_Dictionary,Dictionary_Impl_)
HX_DECLARE_CLASS3(openfl,utils,_Dictionary,FloatMap)
HX_DECLARE_CLASS3(openfl,utils,_Dictionary,UtilsObjectMap)

namespace openfl{
namespace utils{
namespace _Dictionary{


class HXCPP_CLASS_ATTRIBUTES Dictionary_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Dictionary_Impl__obj OBJ_;
		Dictionary_Impl__obj();

	public:
		enum { _hx_ClassId = 0x67c2f8f2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.utils._Dictionary.Dictionary_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.utils._Dictionary.Dictionary_Impl_"); }

		inline static hx::ObjectPtr< Dictionary_Impl__obj > __new() {
			hx::ObjectPtr< Dictionary_Impl__obj > __this = new Dictionary_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Dictionary_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Dictionary_Impl__obj *__this = (Dictionary_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Dictionary_Impl__obj), false, "openfl.utils._Dictionary.Dictionary_Impl_"));
			*(void **)__this = Dictionary_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dictionary_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Dictionary_Impl_",d6,80,51,ba); }

		static bool exists(::Dynamic this1, ::Dynamic key);
		static ::Dynamic exists_dyn();

		static  ::Dynamic get(::Dynamic this1, ::Dynamic key);
		static ::Dynamic get_dyn();

		static  ::Dynamic keyValueIterator(::Dynamic this1);
		static ::Dynamic keyValueIterator_dyn();

		static bool remove(::Dynamic this1, ::Dynamic key);
		static ::Dynamic remove_dyn();

		static  ::Dynamic set(::Dynamic this1, ::Dynamic key, ::Dynamic value);
		static ::Dynamic set_dyn();

		static  ::Dynamic iterator(::Dynamic this1);
		static ::Dynamic iterator_dyn();

		static  ::Dynamic each(::Dynamic this1);
		static ::Dynamic each_dyn();

		static  ::haxe::ds::StringMap toStringMap(::Dynamic t,bool weakKeys);
		static ::Dynamic toStringMap_dyn();

		static  ::haxe::ds::IntMap toIntMap(::Dynamic t,bool weakKeys);
		static ::Dynamic toIntMap_dyn();

		static  ::openfl::utils::_Dictionary::FloatMap toFloatMap(::Dynamic t,bool weakKeys);
		static ::Dynamic toFloatMap_dyn();

		static  ::haxe::ds::EnumValueMap toEnumValueMapMap(::Dynamic t,bool weakKeys);
		static ::Dynamic toEnumValueMapMap_dyn();

		static  ::haxe::ds::ObjectMap toObjectMap(::Dynamic t,bool weakKeys);
		static ::Dynamic toObjectMap_dyn();

		static  ::openfl::utils::_Dictionary::UtilsObjectMap toUtilsObjectMap(::Dynamic t,bool weakKeys);
		static ::Dynamic toUtilsObjectMap_dyn();

		static  ::openfl::utils::_Dictionary::ClassMap toClassMap(::Dynamic t,bool weakKeys);
		static ::Dynamic toClassMap_dyn();

		static  ::haxe::ds::StringMap fromStringMap( ::haxe::ds::StringMap map);
		static ::Dynamic fromStringMap_dyn();

		static  ::haxe::ds::IntMap fromIntMap( ::haxe::ds::IntMap map);
		static ::Dynamic fromIntMap_dyn();

		static  ::openfl::utils::_Dictionary::FloatMap fromFloatMap( ::openfl::utils::_Dictionary::FloatMap map);
		static ::Dynamic fromFloatMap_dyn();

		static  ::haxe::ds::ObjectMap fromObjectMap( ::haxe::ds::ObjectMap map);
		static ::Dynamic fromObjectMap_dyn();

		static  ::openfl::utils::_Dictionary::UtilsObjectMap fromUtilsObjectMap( ::openfl::utils::_Dictionary::UtilsObjectMap map);
		static ::Dynamic fromUtilsObjectMap_dyn();

		static  ::openfl::utils::_Dictionary::UtilsObjectMap fromClassMap( ::openfl::utils::_Dictionary::ClassMap map);
		static ::Dynamic fromClassMap_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary

#endif /* INCLUDED_openfl_utils__Dictionary_Dictionary_Impl_ */ 
