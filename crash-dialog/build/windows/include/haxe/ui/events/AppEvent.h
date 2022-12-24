#ifndef INCLUDED_haxe_ui_events_AppEvent
#define INCLUDED_haxe_ui_events_AppEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,AppEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace events{


class HXCPP_CLASS_ATTRIBUTES AppEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef AppEvent_obj OBJ_;
		AppEvent_obj();

	public:
		enum { _hx_ClassId = 0x5417ff2c };

		void __construct(::String type, ::Dynamic bubble, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.AppEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.AppEvent"); }
		static ::hx::ObjectPtr< AppEvent_obj > __new(::String type, ::Dynamic bubble, ::Dynamic data);
		static ::hx::ObjectPtr< AppEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AppEvent_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AppEvent",d9,8f,1d,88); }

		static void __boot();
		static ::String APP_READY;
		static ::String APP_STARTED;
		static ::String APP_CLOSED;
		static ::String APP_EXITED;
};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_AppEvent */ 
