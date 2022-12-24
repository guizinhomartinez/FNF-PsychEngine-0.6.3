#ifndef INCLUDED_hx_widgets_DataViewListCtrl
#define INCLUDED_hx_widgets_DataViewListCtrl

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
HX_DECLARE_CLASS2(hx,widgets,DataViewColumn)
HX_DECLARE_CLASS2(hx,widgets,DataViewCtrl)
HX_DECLARE_CLASS2(hx,widgets,DataViewItem)
HX_DECLARE_CLASS2(hx,widgets,DataViewListCtrl)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,HeaderColumn)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,SettableHeaderColumn)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewListCtrl_obj : public  ::hx::widgets::DataViewCtrl_obj
{
	public:
		typedef  ::hx::widgets::DataViewCtrl_obj super;
		typedef DataViewListCtrl_obj OBJ_;
		DataViewListCtrl_obj();

	public:
		enum { _hx_ClassId = 0x7f61aeaf };

		void __construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewListCtrl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewListCtrl"); }
		static ::hx::ObjectPtr< DataViewListCtrl_obj > __new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< DataViewListCtrl_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewListCtrl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewListCtrl",18,c9,2c,d9); }

		void appendColumn( ::hx::widgets::DataViewColumn column);
		::Dynamic appendColumn_dyn();

		void appendToggleColumn(::String label);
		::Dynamic appendToggleColumn_dyn();

		void appendTextColumn(::String label);
		::Dynamic appendTextColumn_dyn();

		void appendProgressColumn(::String label);
		::Dynamic appendProgressColumn_dyn();

		void appendBitmapColumn(::String label,int modelColumn);
		::Dynamic appendBitmapColumn_dyn();

		void deleteAllItems();
		::Dynamic deleteAllItems_dyn();

		void deleteItem(int row);
		::Dynamic deleteItem_dyn();

		int itemCount;
		int get_itemCount();
		::Dynamic get_itemCount_dyn();

		int get_selectedRow();
		::Dynamic get_selectedRow_dyn();

		int set_selectedRow(int value);
		::Dynamic set_selectedRow_dyn();

		int itemToRow( ::hx::widgets::DataViewItem item);
		::Dynamic itemToRow_dyn();

		 ::Dynamic getValue(int row,int col);
		::Dynamic getValue_dyn();

		void setValue(int row,int col, ::Dynamic value);
		::Dynamic setValue_dyn();

		::String getTextValue(int row,int col);
		::Dynamic getTextValue_dyn();

		void setTextValue(::String value,int row,int col);
		::Dynamic setTextValue_dyn();

		void appendItem(::cpp::VirtualArray values);
		::Dynamic appendItem_dyn();

		::cpp::Pointer<  wxDataViewListCtrl > dataViewListCtrlRef;
		::cpp::Pointer<  wxDataViewListCtrl > get_dataViewListCtrlRef();
		::Dynamic get_dataViewListCtrlRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewListCtrl */ 
