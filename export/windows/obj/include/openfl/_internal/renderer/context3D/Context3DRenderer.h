// Generated by Haxe 4.0.2
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DRenderer
#define INCLUDED_openfl__internal_renderer_context3D_Context3DRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS3(openfl,_internal,renderer,ShaderBuffer)
HX_DECLARE_CLASS4(openfl,_internal,renderer,context3D,Context3DAlphaMaskShader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,context3D,Context3DMaskShader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,context3D,Context3DRenderer)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,display,Tilemap)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,media,Video)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{


class HXCPP_CLASS_ATTRIBUTES Context3DRenderer_obj : public  ::openfl::display::OpenGLRenderer_obj
{
	public:
		typedef  ::openfl::display::OpenGLRenderer_obj super;
		typedef Context3DRenderer_obj OBJ_;
		Context3DRenderer_obj();

	public:
		enum { _hx_ClassId = 0x1b0ac8d2 };

		void __construct( ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.context3D.Context3DRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.context3D.Context3DRenderer"); }
		static hx::ObjectPtr< Context3DRenderer_obj > __new( ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget);
		static hx::ObjectPtr< Context3DRenderer_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DRenderer_obj();

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
		::String __ToString() const { return HX_("Context3DRenderer",a3,fd,52,7d); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::Array< Float > _hx___alphaValue;
		static  ::lime::utils::ObjectPool _hx___childRendererPool;
		static ::Array< Float > _hx___colorMultipliersValue;
		static ::Array< Float > _hx___colorOffsetsValue;
		static ::Array< Float > _hx___defaultColorMultipliersValue;
		static ::Array< Float > _hx___emptyColorValue;
		static ::Array< Float > _hx___emptyAlphaValue;
		static ::Array< bool > _hx___hasColorTransformValue;
		static  ::openfl::geom::Rectangle _hx___scissorRectangle;
		static ::Array< Float > _hx___textureSizeValue;
		 ::openfl::display3D::Context3D context3D;
		 ::openfl::_internal::renderer::context3D::Context3DAlphaMaskShader _hx___alphaMaskShader;
		::Array< ::Dynamic> _hx___clipRects;
		 ::lime::graphics::RenderContext _hx___context;
		 ::openfl::display::Shader _hx___currentDisplayShader;
		 ::openfl::display::Shader _hx___currentGraphicsShader;
		 ::openfl::display::BitmapData _hx___currentRenderTarget;
		 ::openfl::display::Shader _hx___currentShader;
		 ::openfl::_internal::renderer::ShaderBuffer _hx___currentShaderBuffer;
		 ::openfl::display::DisplayObjectShader _hx___defaultDisplayShader;
		 ::openfl::display::GraphicsShader _hx___defaultGraphicsShader;
		 ::openfl::display::BitmapData _hx___defaultRenderTarget;
		 ::openfl::display::Shader _hx___defaultShader;
		int _hx___displayHeight;
		int _hx___displayWidth;
		bool _hx___flipped;
		 ::lime::_internal::backend::native::NativeOpenGLRenderContext _hx___gl;
		int _hx___height;
		 ::openfl::_internal::renderer::context3D::Context3DMaskShader _hx___maskShader;
		 ::lime::utils::ArrayBufferView _hx___matrix;
		::Array< ::Dynamic> _hx___maskObjects;
		int _hx___numClipRects;
		int _hx___offsetX;
		int _hx___offsetY;
		 ::lime::utils::ArrayBufferView _hx___projection;
		 ::lime::utils::ArrayBufferView _hx___projectionFlipped;
		 ::lime::utils::ObjectPool _hx___scrollRectMasks;
		 ::openfl::display::DisplayObjectRenderer _hx___softwareRenderer;
		int _hx___stencilReference;
		 ::openfl::geom::ColorTransform _hx___tempColorTransform;
		 ::openfl::geom::Rectangle _hx___tempRect;
		bool _hx___updatedStencil;
		bool _hx___upscaled;
		::Array< Float > _hx___values;
		int _hx___width;
		void applyAlpha(Float alpha);

		void applyBitmapData( ::openfl::display::BitmapData bitmapData,bool smooth,hx::Null< bool >  repeat);

		void applyColorTransform( ::openfl::geom::ColorTransform colorTransform);

		void applyHasColorTransform(bool enabled);

		void applyMatrix(::Array< Float > matrix);

		 ::lime::utils::ArrayBufferView getMatrix( ::openfl::geom::Matrix transform);

		void setShader( ::openfl::display::Shader shader);

		void setViewport();

		void updateShader();

		void useAlphaArray();

		void useColorTransformArray();

		void _hx___cleanup();
		::Dynamic _hx___cleanup_dyn();

		void _hx___clear();

		void _hx___clearShader();
		::Dynamic _hx___clearShader_dyn();

		void _hx___copyShader( ::openfl::_internal::renderer::context3D::Context3DRenderer other);
		::Dynamic _hx___copyShader_dyn();

		void _hx___drawBitmapData( ::openfl::display::BitmapData bitmapData,::Dynamic source, ::openfl::geom::Rectangle clipRect);

		void _hx___fillRect( ::openfl::display::BitmapData bitmapData, ::openfl::geom::Rectangle rect,int color);
		::Dynamic _hx___fillRect_dyn();

		Float _hx___getAlpha(Float value);
		::Dynamic _hx___getAlpha_dyn();

		 ::openfl::geom::ColorTransform _hx___getColorTransform( ::openfl::geom::ColorTransform value);
		::Dynamic _hx___getColorTransform_dyn();

		::Array< Float > _hx___getMatrix( ::openfl::geom::Matrix transform, ::Dynamic pixelSnapping);
		::Dynamic _hx___getMatrix_dyn();

		void _hx___init( ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget);
		::Dynamic _hx___init_dyn();

		 ::openfl::display::Shader _hx___initShader( ::openfl::display::Shader shader);
		::Dynamic _hx___initShader_dyn();

		 ::openfl::display::Shader _hx___initDisplayShader( ::openfl::display::Shader shader);
		::Dynamic _hx___initDisplayShader_dyn();

		 ::openfl::display::Shader _hx___initGraphicsShader( ::openfl::display::Shader shader);
		::Dynamic _hx___initGraphicsShader_dyn();

		 ::openfl::display::Shader _hx___initShaderBuffer( ::openfl::_internal::renderer::ShaderBuffer shaderBuffer);
		::Dynamic _hx___initShaderBuffer_dyn();

		void _hx___popMask();
		::Dynamic _hx___popMask_dyn();

		void _hx___popMaskObject( ::openfl::display::DisplayObject object,hx::Null< bool >  handleScrollRect);
		::Dynamic _hx___popMaskObject_dyn();

		void _hx___popMaskRect();
		::Dynamic _hx___popMaskRect_dyn();

		int _hx___powerOfTwo(int value);
		::Dynamic _hx___powerOfTwo_dyn();

		void _hx___pushMask( ::openfl::display::DisplayObject mask);
		::Dynamic _hx___pushMask_dyn();

		void _hx___pushMaskObject( ::openfl::display::DisplayObject object,hx::Null< bool >  handleScrollRect);
		::Dynamic _hx___pushMaskObject_dyn();

		void _hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform);
		::Dynamic _hx___pushMaskRect_dyn();

		void _hx___render(::Dynamic object);

		void _hx___renderBitmap( ::openfl::display::Bitmap bitmap);
		::Dynamic _hx___renderBitmap_dyn();

		void _hx___renderBitmapData( ::openfl::display::BitmapData bitmapData);
		::Dynamic _hx___renderBitmapData_dyn();

		void _hx___renderDisplayObject( ::openfl::display::DisplayObject object);
		::Dynamic _hx___renderDisplayObject_dyn();

		void _hx___renderDisplayObjectContainer( ::openfl::display::DisplayObjectContainer container);
		::Dynamic _hx___renderDisplayObjectContainer_dyn();

		void _hx___renderFilterPass( ::openfl::display::BitmapData source, ::openfl::display::Shader shader,bool smooth,hx::Null< bool >  clear);
		::Dynamic _hx___renderFilterPass_dyn();

		void _hx___renderMask( ::openfl::display::DisplayObject mask);
		::Dynamic _hx___renderMask_dyn();

		void _hx___renderShape( ::openfl::display::DisplayObject shape);
		::Dynamic _hx___renderShape_dyn();

		void _hx___renderSimpleButton( ::openfl::display::SimpleButton button);
		::Dynamic _hx___renderSimpleButton_dyn();

		void _hx___renderTextField( ::openfl::text::TextField textField);
		::Dynamic _hx___renderTextField_dyn();

		void _hx___renderTilemap( ::openfl::display::Tilemap tilemap);
		::Dynamic _hx___renderTilemap_dyn();

		void _hx___renderVideo( ::openfl::media::Video video);
		::Dynamic _hx___renderVideo_dyn();

		void _hx___resize(int width,int height);

		void _hx___resumeClipAndMask( ::openfl::_internal::renderer::context3D::Context3DRenderer childRenderer);
		::Dynamic _hx___resumeClipAndMask_dyn();

		void _hx___scissorRect( ::openfl::geom::Rectangle clipRect);
		::Dynamic _hx___scissorRect_dyn();

		void _hx___setBlendMode( ::Dynamic value);
		::Dynamic _hx___setBlendMode_dyn();

		void _hx___setRenderTarget( ::openfl::display::BitmapData renderTarget);
		::Dynamic _hx___setRenderTarget_dyn();

		void _hx___setShaderBuffer( ::openfl::_internal::renderer::ShaderBuffer shaderBuffer);
		::Dynamic _hx___setShaderBuffer_dyn();

		 ::Dynamic _hx___shouldCacheHardware( ::openfl::display::DisplayObject object, ::Dynamic value);
		::Dynamic _hx___shouldCacheHardware_dyn();

		void _hx___suspendClipAndMask();
		::Dynamic _hx___suspendClipAndMask_dyn();

		bool _hx___updateCacheBitmap( ::openfl::display::DisplayObject object,bool force);
		::Dynamic _hx___updateCacheBitmap_dyn();

		void _hx___updateShaderBuffer(int bufferOffset);
		::Dynamic _hx___updateShaderBuffer_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D

#endif /* INCLUDED_openfl__internal_renderer_context3D_Context3DRenderer */ 
