#ifndef INCLUDED_haxe_ui_containers__TabView_Events
#define INCLUDED_haxe_ui_containers__TabView_Events

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
HX_DECLARE_CLASS3(haxe,ui,containers,TabView)
HX_DECLARE_CLASS4(haxe,ui,containers,_TabView,Events)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{


class HXCPP_CLASS_ATTRIBUTES Events_obj : public  ::haxe::ui::events::Events_obj
{
	public:
		typedef  ::haxe::ui::events::Events_obj super;
		typedef Events_obj OBJ_;
		Events_obj();

	public:
		enum { _hx_ClassId = 0x2d6b9108 };

		void __construct( ::haxe::ui::containers::TabView tabview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TabView.Events")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TabView.Events"); }
		static ::hx::ObjectPtr< Events_obj > __new( ::haxe::ui::containers::TabView tabview);
		static ::hx::ObjectPtr< Events_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TabView tabview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Events_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Events",39,c3,fe,ca); }

		 ::haxe::ui::containers::TabView _tabview;
		void _hx_register();

		void unregister();

		void onBeforeTabClosed( ::haxe::ui::events::UIEvent event);
		::Dynamic onBeforeTabClosed_dyn();

		void onTabClosed( ::haxe::ui::events::UIEvent event);
		::Dynamic onTabClosed_dyn();

		void onTabChanged( ::haxe::ui::events::UIEvent event);
		::Dynamic onTabChanged_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView

#endif /* INCLUDED_haxe_ui_containers__TabView_Events */ 
