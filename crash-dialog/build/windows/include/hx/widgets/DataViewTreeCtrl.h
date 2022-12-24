#ifndef INCLUDED_hx_widgets_DataViewTreeCtrl
#define INCLUDED_hx_widgets_DataViewTreeCtrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DataViewCtrl
#include <hx/widgets/DataViewCtrl.h>
#endif
#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,DataViewCtrl)
HX_DECLARE_CLASS2(hx,widgets,DataViewItem)
HX_DECLARE_CLASS2(hx,widgets,DataViewTreeCtrl)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,ImageList)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewTreeCtrl_obj : public  ::hx::widgets::DataViewCtrl_obj
{
	public:
		typedef  ::hx::widgets::DataViewCtrl_obj super;
		typedef DataViewTreeCtrl_obj OBJ_;
		DataViewTreeCtrl_obj();

	public:
		enum { _hx_ClassId = 0x7f05c403 };

		void __construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewTreeCtrl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewTreeCtrl"); }
		static ::hx::ObjectPtr< DataViewTreeCtrl_obj > __new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< DataViewTreeCtrl_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewTreeCtrl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewTreeCtrl",18,c6,ff,dc); }

		 ::hx::widgets::DataViewItem appendContainer( ::hx::widgets::DataViewItem parent,::String text,::hx::Null< int >  icon,::hx::Null< int >  expanded);
		::Dynamic appendContainer_dyn();

		 ::hx::widgets::DataViewItem appendItem( ::hx::widgets::DataViewItem parent,::String text,::hx::Null< int >  icon);
		::Dynamic appendItem_dyn();

		 ::hx::widgets::ImageList _imageList;
		 ::hx::widgets::ImageList get_imageList();
		::Dynamic get_imageList_dyn();

		 ::hx::widgets::ImageList set_imageList( ::hx::widgets::ImageList value);
		::Dynamic set_imageList_dyn();

		::String getItemText( ::hx::widgets::DataViewItem item);
		::Dynamic getItemText_dyn();

		void setItemText( ::hx::widgets::DataViewItem item,::String text);
		::Dynamic setItemText_dyn();

		void setItemIconIndex( ::hx::widgets::DataViewItem item,int iconIndex);
		::Dynamic setItemIconIndex_dyn();

		void deleteAllItems();
		::Dynamic deleteAllItems_dyn();

		void deleteChildren( ::hx::widgets::DataViewItem item);
		::Dynamic deleteChildren_dyn();

		void deleteItem( ::hx::widgets::DataViewItem item);
		::Dynamic deleteItem_dyn();

		bool isContainer( ::hx::widgets::DataViewItem item);
		::Dynamic isContainer_dyn();

		int getChildCount( ::hx::widgets::DataViewItem parent);
		::Dynamic getChildCount_dyn();

		 ::hx::widgets::DataViewItem getNthChild( ::hx::widgets::DataViewItem parent,int pos);
		::Dynamic getNthChild_dyn();

		int get_indent();
		::Dynamic get_indent_dyn();

		int set_indent(int value);
		::Dynamic set_indent_dyn();

		::cpp::Pointer<  wxDataViewTreeCtrl > dataViewTreeCtrlRef;
		::cpp::Pointer<  wxDataViewTreeCtrl > get_dataViewTreeCtrlRef();
		::Dynamic get_dataViewTreeCtrlRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewTreeCtrl */ 
