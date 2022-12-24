#ifndef INCLUDED_haxe_ui_components_CalendarEvent
#define INCLUDED_haxe_ui_components_CalendarEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,components,CalendarEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES CalendarEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef CalendarEvent_obj OBJ_;
		CalendarEvent_obj();

	public:
		enum { _hx_ClassId = 0x54c535cc };

		void __construct(::String type, ::Dynamic bubble, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.CalendarEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.CalendarEvent"); }
		static ::hx::ObjectPtr< CalendarEvent_obj > __new(::String type, ::Dynamic bubble, ::Dynamic data);
		static ::hx::ObjectPtr< CalendarEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CalendarEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CalendarEvent",5c,f8,d2,c0); }

		static void __boot();
		static ::String DATE_CHANGE;
		 ::haxe::ui::events::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_CalendarEvent */ 
