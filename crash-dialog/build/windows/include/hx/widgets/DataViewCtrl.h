#ifndef INCLUDED_hx_widgets_DataViewCtrl
#define INCLUDED_hx_widgets_DataViewCtrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,DataViewColumn)
HX_DECLARE_CLASS2(hx,widgets,DataViewCtrl)
HX_DECLARE_CLASS2(hx,widgets,DataViewItem)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,HeaderColumn)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,SettableHeaderColumn)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewCtrl_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef DataViewCtrl_obj OBJ_;
		DataViewCtrl_obj();

	public:
		enum { _hx_ClassId = 0x2bc5f4d5 };

		void __construct( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewCtrl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewCtrl"); }
		static ::hx::ObjectPtr< DataViewCtrl_obj > __new( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id);
		static ::hx::ObjectPtr< DataViewCtrl_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewCtrl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewCtrl",1a,16,f3,b2); }

		 ::hx::widgets::DataViewColumn getColumn(int pos);
		::Dynamic getColumn_dyn();

		int columnCount;
		int get_columnCount();
		::Dynamic get_columnCount_dyn();

		void collapse( ::hx::widgets::DataViewItem item);
		::Dynamic collapse_dyn();

		void expand( ::hx::widgets::DataViewItem item);
		::Dynamic expand_dyn();

		 ::hx::widgets::DataViewItem get_selection();
		::Dynamic get_selection_dyn();

		 ::hx::widgets::DataViewItem set_selection( ::hx::widgets::DataViewItem value);
		::Dynamic set_selection_dyn();

		bool isExpanded( ::hx::widgets::DataViewItem item);
		::Dynamic isExpanded_dyn();

		bool isSelected( ::hx::widgets::DataViewItem item);
		::Dynamic isSelected_dyn();

		void ensureVisible( ::hx::widgets::DataViewItem item);
		::Dynamic ensureVisible_dyn();

		void unselect( ::hx::widgets::DataViewItem item);
		::Dynamic unselect_dyn();

		void unselectAll();
		::Dynamic unselectAll_dyn();

		::cpp::Pointer<  wxDataViewCtrl > dataViewCtrlRef;
		::cpp::Pointer<  wxDataViewCtrl > get_dataViewCtrlRef();
		::Dynamic get_dataViewCtrlRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewCtrl */ 
