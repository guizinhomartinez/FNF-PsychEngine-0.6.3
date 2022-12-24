#ifndef INCLUDED_hx_widgets_CalendarCtrl
#define INCLUDED_hx_widgets_CalendarCtrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_07569a2300d4747d
#define INCLUDED_07569a2300d4747d
#include "wx/calctrl.h"
#endif
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS2(hx,widgets,CalendarCtrl)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES CalendarCtrl_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef CalendarCtrl_obj OBJ_;
		CalendarCtrl_obj();

	public:
		enum { _hx_ClassId = 0x45d97564 };

		void __construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.CalendarCtrl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.CalendarCtrl"); }
		static ::hx::ObjectPtr< CalendarCtrl_obj > __new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< CalendarCtrl_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CalendarCtrl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CalendarCtrl",a9,96,06,cd); }

		 ::Date get_date();
		::Dynamic get_date_dyn();

		 ::Date set_date( ::Date value);
		::Dynamic set_date_dyn();

		::cpp::Pointer<  wxCalendarCtrl > calendarCtrlRef;
		::cpp::Pointer<  wxCalendarCtrl > get_calendarCtrlRef();
		::Dynamic get_calendarCtrlRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_CalendarCtrl */ 
