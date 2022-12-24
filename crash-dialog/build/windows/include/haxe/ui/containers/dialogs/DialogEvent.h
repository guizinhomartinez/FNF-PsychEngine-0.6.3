#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogEvent
#define INCLUDED_haxe_ui_containers_dialogs_DialogEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{


class HXCPP_CLASS_ATTRIBUTES DialogEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef DialogEvent_obj OBJ_;
		DialogEvent_obj();

	public:
		enum { _hx_ClassId = 0x6ab20b1b };

		void __construct(::String type, ::Dynamic bubble, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.dialogs.DialogEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.dialogs.DialogEvent"); }
		static ::hx::ObjectPtr< DialogEvent_obj > __new(::String type, ::Dynamic bubble, ::Dynamic data);
		static ::hx::ObjectPtr< DialogEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DialogEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DialogEvent",12,76,e3,67); }

		static void __boot();
		static ::String DIALOG_CLOSED;
		::String button;
		 ::haxe::ui::events::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs

#endif /* INCLUDED_haxe_ui_containers_dialogs_DialogEvent */ 
