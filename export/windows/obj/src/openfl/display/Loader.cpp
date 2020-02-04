// Generated by Haxe 4.0.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_198_new,"openfl.display.Loader","new",0x0b8c4b6f,"openfl.display.Loader.new","openfl/display/Loader.hx",198,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_208_addChild,"openfl.display.Loader","addChild",0xed9ade4c,"openfl.display.Loader.addChild","openfl/display/Loader.hx",208,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_214_addChildAt,"openfl.display.Loader","addChildAt",0xb0c8425f,"openfl.display.Loader.addChildAt","openfl/display/Loader.hx",214,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_226_close,"openfl.display.Loader","close",0xeefbb487,"openfl.display.Loader.close","openfl/display/Loader.hx",226,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_386_load,"openfl.display.Loader","load",0x0deacc37,"openfl.display.Loader.load","openfl/display/Loader.hx",386,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_562_loadBytes,"openfl.display.Loader","loadBytes",0x5dd804b4,"openfl.display.Loader.loadBytes","openfl/display/Loader.hx",562,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_567_removeChild,"openfl.display.Loader","removeChild",0xa0be28c7,"openfl.display.Loader.removeChild","openfl/display/Loader.hx",567,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_573_removeChildAt,"openfl.display.Loader","removeChildAt",0xeb2f619a,"openfl.display.Loader.removeChildAt","openfl/display/Loader.hx",573,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_579_setChildIndex,"openfl.display.Loader","setChildIndex",0xa9d0cde7,"openfl.display.Loader.setChildIndex","openfl/display/Loader.hx",579,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_612_unload,"openfl.display.Loader","unload",0x847d3950,"openfl.display.Loader.unload","openfl/display/Loader.hx",612,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_667_unloadAndStop,"openfl.display.Loader","unloadAndStop",0x25cb8709,"openfl.display.Loader.unloadAndStop","openfl/display/Loader.hx",667,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_691___dispatchError,"openfl.display.Loader","__dispatchError",0xdd48591d,"openfl.display.Loader.__dispatchError","openfl/display/Loader.hx",691,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_698___setContent,"openfl.display.Loader","__setContent",0x7ea757e8,"openfl.display.Loader.__setContent","openfl/display/Loader.hx",698,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_718_BitmapData_onError,"openfl.display.Loader","BitmapData_onError",0x2d70cc54,"openfl.display.Loader.BitmapData_onError","openfl/display/Loader.hx",718,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_722_BitmapData_onLoad,"openfl.display.Loader","BitmapData_onLoad",0x9c5aef1a,"openfl.display.Loader.BitmapData_onLoad","openfl/display/Loader.hx",722,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_737_BitmapData_onProgress,"openfl.display.Loader","BitmapData_onProgress",0x8ecdd6a1,"openfl.display.Loader.BitmapData_onProgress","openfl/display/Loader.hx",737,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_745_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",745,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_772_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",772,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_787_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",787,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_816_loader_onError,"openfl.display.Loader","loader_onError",0x53aca80e,"openfl.display.Loader.loader_onError","openfl/display/Loader.hx",816,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_824_loader_onProgress,"openfl.display.Loader","loader_onProgress",0xfc1e8b27,"openfl.display.Loader.loader_onProgress","openfl/display/Loader.hx",824,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_89_boot,"openfl.display.Loader","boot",0x074eb643,"openfl.display.Loader.boot","openfl/display/Loader.hx",89,0x7a569d9f)
namespace openfl{
namespace display{

void Loader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_198_new)
HXLINE( 199)		super::__construct();
HXLINE( 201)		this->contentLoaderInfo = ::openfl::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));
HXLINE( 202)		this->uncaughtErrorEvents = this->contentLoaderInfo->uncaughtErrorEvents;
HXLINE( 203)		this->_hx___unloaded = true;
            	}

Dynamic Loader_obj::__CreateEmpty() { return new Loader_obj; }

void *Loader_obj::_hx_vtable = 0;

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Loader_obj > _hx_result = new Loader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Loader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			if (inClassId<=(int)0x17120186) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x17120186;
			} else {
				return inClassId==(int)0x19c29573;
			}
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3248531d || inClassId==(int)0x3f2b00af;
	}
}

 ::openfl::display::DisplayObject Loader_obj::addChild( ::openfl::display::DisplayObject child){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_208_addChild)
HXDLIN( 208)		HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Error #2069: The Loader class does not implement this method.",68,cb,24,3e),2069));
HXDLIN( 208)		return null();
            	}


 ::openfl::display::DisplayObject Loader_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_214_addChildAt)
HXDLIN( 214)		HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Error #2069: The Loader class does not implement this method.",68,cb,24,3e),2069));
HXDLIN( 214)		return null();
            	}


void Loader_obj::close(){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_226_close)
HXDLIN( 226)		::openfl::_internal::Lib_obj::notImplemented(hx::SourceInfo(HX_("openfl/display/Loader.hx",9f,9d,56,7a),226,HX_("openfl.display.Loader",fd,67,b0,e2),HX_("close",b8,17,63,48)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,close,(void))

void Loader_obj::load( ::openfl::net::URLRequest request, ::openfl::_hx_system::LoaderContext context){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_386_load)
HXLINE( 387)		this->unload();
HXLINE( 389)		this->contentLoaderInfo->loaderURL = ::openfl::Lib_obj::get_current()->get_loaderInfo()->url;
HXLINE( 390)		this->contentLoaderInfo->url = request->url;
HXLINE( 391)		this->_hx___unloaded = false;
HXLINE( 393)		bool _hx_tmp;
HXDLIN( 393)		if (hx::IsNotNull( request->contentType )) {
HXLINE( 393)			_hx_tmp = (request->contentType == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 393)			_hx_tmp = true;
            		}
HXDLIN( 393)		if (_hx_tmp) {
HXLINE( 395)			::String extension = HX_("",00,00,00,00);
HXLINE( 396)			this->_hx___path = request->url;
HXLINE( 398)			int queryIndex = this->_hx___path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 399)			if ((queryIndex > -1)) {
HXLINE( 401)				this->_hx___path = this->_hx___path.substring(0,queryIndex);
            			}
HXLINE( 404)			while(::StringTools_obj::endsWith(this->_hx___path,HX_("/",2f,00,00,00))){
HXLINE( 406)				this->_hx___path = this->_hx___path.substring(0,(this->_hx___path.length - 1));
            			}
HXLINE( 409)			if (::StringTools_obj::endsWith(this->_hx___path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 411)				 ::openfl::display::Loader _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 411)				_hx_tmp1->_hx___path = (_hx_tmp1->_hx___path + HX_("/library.json",2a,a7,07,47));
HXLINE( 413)				if ((queryIndex > -1)) {
HXLINE( 415)					::String _hx_tmp2 = this->_hx___path;
HXDLIN( 415)					request->url = (_hx_tmp2 + request->url.substring(queryIndex,null()));
            				}
            				else {
HXLINE( 419)					request->url = this->_hx___path;
            				}
            			}
HXLINE( 423)			int extIndex = this->_hx___path.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 424)			if ((extIndex > -1)) {
HXLINE( 426)				extension = this->_hx___path.substring((extIndex + 1),null());
            			}
HXLINE( 429)			::String _hx_tmp3;
HXDLIN( 429)			::String _hx_switch_0 = extension;
            			if (  (_hx_switch_0==HX_("gif",04,84,4e,00)) ){
HXLINE( 429)				_hx_tmp3 = HX_("image/gif",10,f4,ba,16);
HXDLIN( 429)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("jpeg",a8,f2,65,46)) ||  (_hx_switch_0==HX_("jpg",e1,d0,50,00)) ){
HXLINE( 429)				_hx_tmp3 = HX_("image/jpeg",1c,8d,db,ce);
HXDLIN( 429)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("js",c9,5c,00,00)) ){
HXLINE( 429)				_hx_tmp3 = HX_("application/javascript",cc,7a,f4,a7);
HXDLIN( 429)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("json",28,42,68,46)) ){
HXLINE( 429)				_hx_tmp3 = HX_("application/json",87,d8,7f,4e);
HXDLIN( 429)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("png",a9,5c,55,00)) ){
HXLINE( 429)				_hx_tmp3 = HX_("image/png",b5,cc,c1,16);
HXDLIN( 429)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("swf",42,ab,57,00)) ){
HXLINE( 429)				_hx_tmp3 = HX_("application/x-shockwave-flash",ea,f3,47,4a);
HXDLIN( 429)				goto _hx_goto_5;
            			}
            			/* default */{
HXLINE( 429)				_hx_tmp3 = HX_("application/x-www-form-urlencoded",9e,61,91,fa);
            			}
            			_hx_goto_5:;
HXDLIN( 429)			this->contentLoaderInfo->contentType = _hx_tmp3;
            		}
            		else {
HXLINE( 443)			this->contentLoaderInfo->contentType = request->contentType;
            		}
HXLINE( 460)		 ::openfl::net::URLLoader loader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 461)		loader->dataFormat = 0;
HXLINE( 463)		bool _hx_tmp4;
HXDLIN( 463)		bool _hx_tmp5;
HXDLIN( 463)		if ((this->contentLoaderInfo->contentType.indexOf(HX_("/json",d7,85,3d,56),null()) <= -1)) {
HXLINE( 463)			_hx_tmp5 = (this->contentLoaderInfo->contentType.indexOf(HX_("/javascript",1c,04,67,9b),null()) > -1);
            		}
            		else {
HXLINE( 463)			_hx_tmp5 = true;
            		}
HXDLIN( 463)		if (!(_hx_tmp5)) {
HXLINE( 463)			_hx_tmp4 = (this->contentLoaderInfo->contentType.indexOf(HX_("/ecmascript",ac,7b,0f,7d),null()) > -1);
            		}
            		else {
HXLINE( 463)			_hx_tmp4 = true;
            		}
HXDLIN( 463)		if (_hx_tmp4) {
HXLINE( 467)			loader->dataFormat = 1;
            		}
HXLINE( 470)		loader->addEventListener(HX_("complete",b9,00,c8,7f),this->loader_onComplete_dyn(),null(),null(),null());
HXLINE( 471)		loader->addEventListener(HX_("ioError",02,fe,41,76),this->loader_onError_dyn(),null(),null(),null());
HXLINE( 472)		loader->addEventListener(HX_("progress",ad,f7,2a,86),this->loader_onProgress_dyn(),null(),null(),null());
HXLINE( 473)		loader->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

void Loader_obj::loadBytes( ::openfl::utils::ByteArrayData buffer, ::openfl::_hx_system::LoaderContext context){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_562_loadBytes)
HXDLIN( 562)		::openfl::display::BitmapData_obj::loadFromBytes(buffer,null())->onComplete(this->BitmapData_onLoad_dyn())->onError(this->BitmapData_onError_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

 ::openfl::display::DisplayObject Loader_obj::removeChild( ::openfl::display::DisplayObject child){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_567_removeChild)
HXDLIN( 567)		HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Error #2069: The Loader class does not implement this method.",68,cb,24,3e),2069));
HXDLIN( 567)		return null();
            	}


 ::openfl::display::DisplayObject Loader_obj::removeChildAt(int index){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_573_removeChildAt)
HXDLIN( 573)		HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Error #2069: The Loader class does not implement this method.",68,cb,24,3e),2069));
HXDLIN( 573)		return null();
            	}


void Loader_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_579_setChildIndex)
HXDLIN( 579)		HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Error #2069: The Loader class does not implement this method.",68,cb,24,3e),2069));
            	}


void Loader_obj::unload(){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_612_unload)
HXDLIN( 612)		if (!(this->_hx___unloaded)) {
HXLINE( 614)			bool _hx_tmp;
HXDLIN( 614)			if (hx::IsNotNull( this->content )) {
HXLINE( 614)				_hx_tmp = hx::IsEq( this->content->parent,hx::ObjectPtr<OBJ_>(this) );
            			}
            			else {
HXLINE( 614)				_hx_tmp = false;
            			}
HXDLIN( 614)			if (_hx_tmp) {
HXLINE( 616)				this->super::removeChild(this->content);
            			}
HXLINE( 619)			if (hx::IsNotNull( this->_hx___library )) {
HXLINE( 621)				::openfl::utils::Assets_obj::unloadLibrary(this->contentLoaderInfo->url);
HXLINE( 622)				this->_hx___library = null();
            			}
HXLINE( 625)			this->content = null();
HXLINE( 626)			this->contentLoaderInfo->url = null();
HXLINE( 627)			this->contentLoaderInfo->contentType = null();
HXLINE( 628)			this->contentLoaderInfo->content = null();
HXLINE( 629)			this->contentLoaderInfo->bytesLoaded = 0;
HXLINE( 630)			this->contentLoaderInfo->bytesTotal = 0;
HXLINE( 631)			this->contentLoaderInfo->width = 0;
HXLINE( 632)			this->contentLoaderInfo->height = 0;
HXLINE( 633)			this->_hx___unloaded = true;
HXLINE( 635)			 ::openfl::display::LoaderInfo _hx_tmp1 = this->contentLoaderInfo;
HXDLIN( 635)			_hx_tmp1->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("unload",ff,a0,8c,65),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

void Loader_obj::unloadAndStop(hx::Null< bool >  __o_gc){
            		bool gc = __o_gc.Default(true);
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_667_unloadAndStop)
HXLINE( 668)		if (hx::IsNotNull( this->content )) {
HXLINE( 670)			this->content->_hx___stopAllMovieClips();
            		}
HXLINE( 673)		{
HXLINE( 673)			int _g = 0;
HXDLIN( 673)			int _g1 = this->get_numChildren();
HXDLIN( 673)			while((_g < _g1)){
HXLINE( 673)				_g = (_g + 1);
HXDLIN( 673)				int i = (_g - 1);
HXLINE( 675)				this->getChildAt(i)->_hx___stopAllMovieClips();
            			}
            		}
HXLINE( 678)		this->unload();
HXLINE( 680)		if (gc) {
HXLINE( 683)			__hxcpp_collect(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,unloadAndStop,(void))

void Loader_obj::_hx___dispatchError(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_691___dispatchError)
HXLINE( 692)		 ::openfl::events::IOErrorEvent event =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null());
HXLINE( 693)		event->text = text;
HXLINE( 694)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,_hx___dispatchError,(void))

void Loader_obj::_hx___setContent( ::openfl::display::DisplayObject content,int width,int height){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_698___setContent)
HXLINE( 699)		this->content = content;
HXLINE( 701)		this->contentLoaderInfo->content = content;
HXLINE( 702)		this->contentLoaderInfo->width = width;
HXLINE( 703)		this->contentLoaderInfo->height = height;
HXLINE( 705)		if (hx::IsNotNull( content )) {
HXLINE( 707)			this->super::addChildAt(content,0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Loader_obj,_hx___setContent,(void))

void Loader_obj::BitmapData_onError( ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_718_BitmapData_onError)
HXDLIN( 718)		this->_hx___dispatchError(::Std_obj::string(error));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onError,(void))

void Loader_obj::BitmapData_onLoad( ::openfl::display::BitmapData bitmapData){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_722_BitmapData_onLoad)
HXLINE( 725)		if (hx::IsNull( bitmapData )) {
HXLINE( 727)			this->_hx___dispatchError(HX_("Unknown error",92,0e,0f,10));
HXLINE( 728)			return;
            		}
HXLINE( 731)		this->_hx___setContent( ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bitmapData,null(),null()),bitmapData->width,bitmapData->height);
HXLINE( 733)		 ::openfl::display::LoaderInfo _hx_tmp = this->contentLoaderInfo;
HXDLIN( 733)		_hx_tmp->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onLoad,(void))

void Loader_obj::BitmapData_onProgress(int bytesLoaded,int bytesTotal){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_737_BitmapData_onProgress)
HXLINE( 738)		 ::openfl::events::ProgressEvent event =  ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,HX_("progress",ad,f7,2a,86),null(),null(),null(),null());
HXLINE( 739)		event->bytesLoaded = ( (Float)(bytesLoaded) );
HXLINE( 740)		event->bytesTotal = ( (Float)(bytesTotal) );
HXLINE( 741)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,BitmapData_onProgress,(void))

void Loader_obj::loader_onComplete( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_745_loader_onComplete)
HXLINE( 744)		 ::openfl::display::Loader _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 748)		 ::openfl::net::URLLoader loader = ( ( ::openfl::net::URLLoader)(event->target) );
HXLINE( 751)		bool _hx_tmp;
HXDLIN( 751)		if (hx::IsNotNull( this->contentLoaderInfo->contentType )) {
HXLINE( 751)			_hx_tmp = (this->contentLoaderInfo->contentType.indexOf(HX_("/json",d7,85,3d,56),null()) > -1);
            		}
            		else {
HXLINE( 751)			_hx_tmp = false;
            		}
HXDLIN( 751)		if (_hx_tmp) {
HXLINE( 753)			 ::Dynamic loader1 = loader->data;
HXDLIN( 753)			 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::parse(( (::String)(loader1) ),::haxe::io::Path_obj::directory(this->_hx___path));
HXLINE( 755)			if (hx::IsNull( manifest )) {
HXLINE( 757)				this->_hx___dispatchError(HX_("Cannot parse asset manifest",49,e5,68,e9));
HXLINE( 758)				return;
            			}
HXLINE( 761)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 763)			if (hx::IsNull( library )) {
HXLINE( 765)				this->_hx___dispatchError(HX_("Cannot open library",c2,bb,9d,77));
HXLINE( 766)				return;
            			}
HXLINE( 769)			if (::Std_obj::is(library,hx::ClassOf< ::openfl::utils::AssetLibrary >())) {
            				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::lime::utils::AssetManifest,manifest, ::openfl::display::Loader,_gthis, ::lime::utils::AssetLibrary,library) HXARGC(1)
            				void _hx_run( ::lime::utils::AssetLibrary _){
            					HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_772_loader_onComplete)
HXLINE( 773)					_gthis->_hx___library = ( ( ::openfl::utils::AssetLibrary)(library) );
HXLINE( 774)					::openfl::utils::Assets_obj::registerLibrary(_gthis->contentLoaderInfo->url,_gthis->_hx___library);
HXLINE( 776)					bool _hx_tmp1;
HXDLIN( 776)					if (hx::IsNotNull( manifest->name )) {
HXLINE( 776)						_hx_tmp1 = !(::openfl::utils::Assets_obj::hasLibrary(manifest->name));
            					}
            					else {
HXLINE( 776)						_hx_tmp1 = false;
            					}
HXDLIN( 776)					if (_hx_tmp1) {
HXLINE( 778)						::openfl::utils::Assets_obj::registerLibrary(manifest->name,_gthis->_hx___library);
            					}
HXLINE( 781)					 ::openfl::display::MovieClip clip = _gthis->_hx___library->getMovieClip(HX_("",00,00,00,00));
HXLINE( 782)					int _hx_tmp2 = ::Std_obj::_hx_int(clip->get_width());
HXDLIN( 782)					int _hx_tmp3 = ::Std_obj::_hx_int(clip->get_height());
HXDLIN( 782)					_gthis->_hx___setContent(clip,_hx_tmp2,_hx_tmp3);
HXLINE( 784)					 ::openfl::display::LoaderInfo _gthis1 = _gthis->contentLoaderInfo;
HXDLIN( 784)					_gthis1->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::openfl::display::Loader,_gthis) HXARGC(1)
            				void _hx_run(::String e){
            					HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_787_loader_onComplete)
HXLINE( 787)					_gthis->_hx___dispatchError(e);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 771)				library->load()->onComplete( ::Dynamic(new _hx_Closure_0(manifest,_gthis,library)))->onError( ::Dynamic(new _hx_Closure_1(_gthis)));
            			}
            		}
            		else {
HXLINE( 793)			bool _hx_tmp4;
HXDLIN( 793)			if (hx::IsNotNull( this->contentLoaderInfo->contentType )) {
HXLINE( 794)				if ((this->contentLoaderInfo->contentType.indexOf(HX_("/javascript",1c,04,67,9b),null()) <= -1)) {
HXLINE( 793)					_hx_tmp4 = (this->contentLoaderInfo->contentType.indexOf(HX_("/ecmascript",ac,7b,0f,7d),null()) > -1);
            				}
            				else {
HXLINE( 793)					_hx_tmp4 = true;
            				}
            			}
            			else {
HXLINE( 793)				_hx_tmp4 = false;
            			}
HXDLIN( 793)			if (_hx_tmp4) {
HXLINE( 796)				this->_hx___setContent( ::openfl::display::Sprite_obj::__alloc( HX_CTX ),0,0);
HXLINE( 806)				 ::openfl::display::LoaderInfo _hx_tmp5 = this->contentLoaderInfo;
HXDLIN( 806)				_hx_tmp5->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            			}
            			else {
HXLINE( 810)				this->contentLoaderInfo->bytes = ( ( ::openfl::utils::ByteArrayData)(loader->data) );
HXLINE( 811)				::openfl::display::BitmapData_obj::loadFromBytes(( ( ::openfl::utils::ByteArrayData)(loader->data) ),null())->onComplete(this->BitmapData_onLoad_dyn())->onError(this->BitmapData_onError_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onComplete,(void))

void Loader_obj::loader_onError( ::openfl::events::IOErrorEvent event){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_816_loader_onError)
HXLINE( 819)		event->target = this->contentLoaderInfo;
HXLINE( 820)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onError,(void))

void Loader_obj::loader_onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_824_loader_onProgress)
HXLINE( 825)		event->target = this->contentLoaderInfo;
HXLINE( 826)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onProgress,(void))


hx::ObjectPtr< Loader_obj > Loader_obj::__new() {
	hx::ObjectPtr< Loader_obj > __this = new Loader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Loader_obj > Loader_obj::__alloc(hx::Ctx *_hx_ctx) {
	Loader_obj *__this = (Loader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Loader_obj), true, "openfl.display.Loader"));
	*(void **)__this = Loader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_MARK_MEMBER_NAME(_hx___library,"__library");
	HX_MARK_MEMBER_NAME(_hx___path,"__path");
	HX_MARK_MEMBER_NAME(_hx___unloaded,"__unloaded");
	 ::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_VISIT_MEMBER_NAME(_hx___library,"__library");
	HX_VISIT_MEMBER_NAME(_hx___path,"__path");
	HX_VISIT_MEMBER_NAME(_hx___unloaded,"__unloaded");
	 ::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return hx::Val( _hx___path ); }
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return hx::Val( content ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return hx::Val( addChild_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__library") ) { return hx::Val( _hx___library ); }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return hx::Val( loadBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__unloaded") ) { return hx::Val( _hx___unloaded ); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return hx::Val( addChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return hx::Val( removeChild_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__setContent") ) { return hx::Val( _hx___setContent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return hx::Val( removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return hx::Val( setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"unloadAndStop") ) { return hx::Val( unloadAndStop_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loader_onError") ) { return hx::Val( loader_onError_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchError") ) { return hx::Val( _hx___dispatchError_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return hx::Val( contentLoaderInfo ); }
		if (HX_FIELD_EQ(inName,"BitmapData_onLoad") ) { return hx::Val( BitmapData_onLoad_dyn() ); }
		if (HX_FIELD_EQ(inName,"loader_onComplete") ) { return hx::Val( loader_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"loader_onProgress") ) { return hx::Val( loader_onProgress_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BitmapData_onError") ) { return hx::Val( BitmapData_onError_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { return hx::Val( uncaughtErrorEvents ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"BitmapData_onProgress") ) { return hx::Val( BitmapData_onProgress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Loader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { _hx___path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__library") ) { _hx___library=inValue.Cast<  ::openfl::utils::AssetLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__unloaded") ) { _hx___unloaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast<  ::openfl::display::LoaderInfo >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { uncaughtErrorEvents=inValue.Cast<  ::openfl::events::UncaughtErrorEvents >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("content",39,8d,77,19));
	outFields->push(HX_("contentLoaderInfo",ba,64,65,14));
	outFields->push(HX_("uncaughtErrorEvents",6c,14,2c,48));
	outFields->push(HX_("__library",db,77,be,c0));
	outFields->push(HX_("__path",c5,48,4a,f9));
	outFields->push(HX_("__unloaded",3e,ea,ee,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Loader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Loader_obj,content),HX_("content",39,8d,77,19)},
	{hx::fsObject /*  ::openfl::display::LoaderInfo */ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_("contentLoaderInfo",ba,64,65,14)},
	{hx::fsObject /*  ::openfl::events::UncaughtErrorEvents */ ,(int)offsetof(Loader_obj,uncaughtErrorEvents),HX_("uncaughtErrorEvents",6c,14,2c,48)},
	{hx::fsObject /*  ::openfl::utils::AssetLibrary */ ,(int)offsetof(Loader_obj,_hx___library),HX_("__library",db,77,be,c0)},
	{hx::fsString,(int)offsetof(Loader_obj,_hx___path),HX_("__path",c5,48,4a,f9)},
	{hx::fsBool,(int)offsetof(Loader_obj,_hx___unloaded),HX_("__unloaded",3e,ea,ee,fd)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Loader_obj_sStaticStorageInfo = 0;
#endif

static ::String Loader_obj_sMemberFields[] = {
	HX_("content",39,8d,77,19),
	HX_("contentLoaderInfo",ba,64,65,14),
	HX_("uncaughtErrorEvents",6c,14,2c,48),
	HX_("__library",db,77,be,c0),
	HX_("__path",c5,48,4a,f9),
	HX_("__unloaded",3e,ea,ee,fd),
	HX_("addChild",bb,cf,16,bf),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("close",b8,17,63,48),
	HX_("load",26,9a,b7,47),
	HX_("loadBytes",65,54,cf,d8),
	HX_("removeChild",b8,86,ed,43),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("setChildIndex",18,4a,08,fe),
	HX_("unload",ff,a0,8c,65),
	HX_("unloadAndStop",3a,03,03,7a),
	HX_("__dispatchError",8e,03,7c,4b),
	HX_("__setContent",d7,2c,ea,a4),
	HX_("BitmapData_onError",83,7e,14,0a),
	HX_("BitmapData_onLoad",cb,d7,a2,be),
	HX_("BitmapData_onProgress",d2,6b,16,c1),
	HX_("loader_onComplete",e4,7c,03,18),
	HX_("loader_onError",bd,d6,01,b0),
	HX_("loader_onProgress",d8,73,66,1e),
	::String(null()) };

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	Loader_obj _hx_dummy;
	Loader_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Loader",fd,67,b0,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Loader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Loader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Loader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Loader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_89_boot)
HXDLIN(  89)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("BitmapData_onError",83,7e,14,0a), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display