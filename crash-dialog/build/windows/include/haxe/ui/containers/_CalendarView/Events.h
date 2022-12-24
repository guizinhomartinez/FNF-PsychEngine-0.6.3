#ifndef INCLUDED_haxe_ui_containers__CalendarView_Events
#define INCLUDED_haxe_ui_containers__CalendarView_Events

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,components,CalendarEvent)
HX_DECLARE_CLASS4(haxe,ui,containers,_CalendarView,Events)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _CalendarView{


class HXCPP_CLASS_ATTRIBUTES Events_obj : public  ::haxe::ui::events::Events_obj
{
	public:
		typedef  ::haxe::ui::events::Events_obj super;
		typedef Events_obj OBJ_;
		Events_obj();

	public:
		enum { _hx_ClassId = 0x13e8892f };

		void __construct( ::haxe::ui::core::Component target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._CalendarView.Events")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._CalendarView.Events"); }
		static ::hx::ObjectPtr< Events_obj > __new( ::haxe::ui::core::Component target);
		static ::hx::ObjectPtr< Events_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Events_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Events",39,c3,fe,ca); }

		void _hx_register();

		void onPrevMonth( ::haxe::ui::events::MouseEvent event);
		::Dynamic onPrevMonth_dyn();

		void onNextMonth( ::haxe::ui::events::MouseEvent event);
		::Dynamic onNextMonth_dyn();

		void onYearChange( ::haxe::ui::events::UIEvent event);
		::Dynamic onYearChange_dyn();

		void onDateChange( ::haxe::ui::components::CalendarEvent event);
		::Dynamic onDateChange_dyn();

		void onCalendarChange( ::haxe::ui::components::CalendarEvent event);
		::Dynamic onCalendarChange_dyn();

		void onMouseWheel( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseWheel_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _CalendarView

#endif /* INCLUDED_haxe_ui_containers__CalendarView_Events */ 
