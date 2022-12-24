#ifndef INCLUDED_hx_widgets_DataViewEvent
#define INCLUDED_hx_widgets_DataViewEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DataViewEvent)
HX_DECLARE_CLASS2(hx,widgets,DataViewItem)
HX_DECLARE_CLASS2(hx,widgets,Event)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewEvent_obj : public  ::hx::widgets::Event_obj
{
	public:
		typedef  ::hx::widgets::Event_obj super;
		typedef DataViewEvent_obj OBJ_;
		DataViewEvent_obj();

	public:
		enum { _hx_ClassId = 0x498600b0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewEvent"); }
		static ::hx::ObjectPtr< DataViewEvent_obj > __new();
		static ::hx::ObjectPtr< DataViewEvent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewEvent",cb,fb,d5,09); }

		int column;
		int get_column();
		::Dynamic get_column_dyn();

		int selection;
		int get_selection();
		::Dynamic get_selection_dyn();

		 ::hx::widgets::DataViewItem item;
		 ::hx::widgets::DataViewItem get_item();
		::Dynamic get_item_dyn();

		::cpp::Pointer<  wxDataViewEvent > dataViewEventRef;
		::cpp::Pointer<  wxDataViewEvent > get_dataViewEventRef();
		::Dynamic get_dataViewEventRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewEvent */ 
