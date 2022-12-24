#ifndef INCLUDED_haxe_ui_events_SortEvent
#define INCLUDED_haxe_ui_events_SortEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,SortEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace events{


class HXCPP_CLASS_ATTRIBUTES SortEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef SortEvent_obj OBJ_;
		SortEvent_obj();

	public:
		enum { _hx_ClassId = 0x0fd58741 };

		void __construct(::String type, ::Dynamic bubble, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.SortEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.SortEvent"); }
		static ::hx::ObjectPtr< SortEvent_obj > __new(::String type, ::Dynamic bubble, ::Dynamic data);
		static ::hx::ObjectPtr< SortEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SortEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SortEvent",bc,7b,0b,20); }

		static void __boot();
		static ::String SORT_CHANGED;
		::String direction;
		 ::haxe::ui::events::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_SortEvent */ 
