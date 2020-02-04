// Generated by Haxe 4.0.2
#ifndef INCLUDED_openfl_display_TileContainer
#define INCLUDED_openfl_display_TileContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,Tile)
HX_DECLARE_CLASS2(openfl,display,TileContainer)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES TileContainer_obj : public  ::openfl::display::Tile_obj
{
	public:
		typedef  ::openfl::display::Tile_obj super;
		typedef TileContainer_obj OBJ_;
		TileContainer_obj();

	public:
		enum { _hx_ClassId = 0x4b539fa1 };

		void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.TileContainer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.TileContainer"); }
		static hx::ObjectPtr< TileContainer_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY);
		static hx::ObjectPtr< TileContainer_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileContainer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TileContainer",13,04,2a,77); }

		::Array< ::Dynamic> _hx___tiles;
		 ::openfl::display::Tile addTile( ::openfl::display::Tile tile);
		::Dynamic addTile_dyn();

		 ::openfl::display::Tile addTileAt( ::openfl::display::Tile tile,int index);
		::Dynamic addTileAt_dyn();

		::Array< ::Dynamic> addTiles(::Array< ::Dynamic> tiles);
		::Dynamic addTiles_dyn();

		 ::openfl::display::Tile clone();

		bool contains( ::openfl::display::Tile tile);
		::Dynamic contains_dyn();

		 ::openfl::geom::Rectangle getBounds( ::openfl::display::Tile targetCoordinateSpace);

		 ::openfl::display::Tile getTileAt(int index);
		::Dynamic getTileAt_dyn();

		int getTileIndex( ::openfl::display::Tile tile);
		::Dynamic getTileIndex_dyn();

		 ::openfl::display::Tile removeTile( ::openfl::display::Tile tile);
		::Dynamic removeTile_dyn();

		 ::openfl::display::Tile removeTileAt(int index);
		::Dynamic removeTileAt_dyn();

		void removeTiles(hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		::Dynamic removeTiles_dyn();

		void setTileIndex( ::openfl::display::Tile tile,int index);
		::Dynamic setTileIndex_dyn();

		void sortTiles( ::Dynamic compareFunction);
		::Dynamic sortTiles_dyn();

		void swapTiles( ::openfl::display::Tile tile1, ::openfl::display::Tile tile2);
		::Dynamic swapTiles_dyn();

		void swapTilesAt(int index1,int index2);
		::Dynamic swapTilesAt_dyn();

		int get_numTiles();
		::Dynamic get_numTiles_dyn();

		Float get_height();

		Float set_height(Float value);

		Float get_width();

		Float set_width(Float value);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_TileContainer */ 