#ifndef INCLUDED_hx_widgets_Grid
#define INCLUDED_hx_widgets_Grid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_ScrolledWindow
#include <hx/widgets/ScrolledWindow.h>
#endif
#ifndef INCLUDED_9fcbfe7be8db893f
#define INCLUDED_9fcbfe7be8db893f
#include "wx/grid.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Grid)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,ScrolledWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Grid_obj : public  ::hx::widgets::ScrolledWindow_obj
{
	public:
		typedef  ::hx::widgets::ScrolledWindow_obj super;
		typedef Grid_obj OBJ_;
		Grid_obj();

	public:
		enum { _hx_ClassId = 0x6dcce085 };

		void __construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Grid")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.Grid"); }
		static ::hx::ObjectPtr< Grid_obj > __new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< Grid_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Grid_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Grid",e6,02,45,2f); }

		bool createGrid(int rows,int cols);
		::Dynamic createGrid_dyn();

		void setCellValue(int row,int col,::String value);
		::Dynamic setCellValue_dyn();

		void setRowSize(int row,int height);
		::Dynamic setRowSize_dyn();

		void setColSize(int col,int width);
		::Dynamic setColSize_dyn();

		bool enableEditing;
		bool set_enableEditing(bool value);
		::Dynamic set_enableEditing_dyn();

		bool enableGridLines;
		bool set_enableGridLines(bool value);
		::Dynamic set_enableGridLines_dyn();

		::cpp::Pointer<  wxGrid > gridRef;
		::cpp::Pointer<  wxGrid > get_gridRef();
		::Dynamic get_gridRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Grid */ 
