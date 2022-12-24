#ifndef INCLUDED_haxe_ui_components__NumberStepper_Events
#define INCLUDED_haxe_ui_components__NumberStepper_Events

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
HX_DECLARE_CLASS3(haxe,ui,backend,TimerImpl)
HX_DECLARE_CLASS3(haxe,ui,components,NumberStepper)
HX_DECLARE_CLASS4(haxe,ui,components,_NumberStepper,Events)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,ActionEvent)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,FocusEvent)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,util,Timer)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{


class HXCPP_CLASS_ATTRIBUTES Events_obj : public  ::haxe::ui::events::Events_obj
{
	public:
		typedef  ::haxe::ui::events::Events_obj super;
		typedef Events_obj OBJ_;
		Events_obj();

	public:
		enum { _hx_ClassId = 0x39fa6cf2 };

		void __construct( ::haxe::ui::components::NumberStepper stepper);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._NumberStepper.Events")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._NumberStepper.Events"); }
		static ::hx::ObjectPtr< Events_obj > __new( ::haxe::ui::components::NumberStepper stepper);
		static ::hx::ObjectPtr< Events_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::NumberStepper stepper);
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

		 ::haxe::ui::components::NumberStepper _stepper;
		void _hx_register();

		void unregister();

		 ::haxe::ui::util::Timer _autoCorrectTimer;
		void onValueFieldChange( ::haxe::ui::events::UIEvent event);
		::Dynamic onValueFieldChange_dyn();

		void onAutoCorrectTimer();
		::Dynamic onAutoCorrectTimer_dyn();

		void onDeinc( ::haxe::ui::events::MouseEvent event);
		::Dynamic onDeinc_dyn();

		void onInc( ::haxe::ui::events::MouseEvent event);
		::Dynamic onInc_dyn();

		bool isInScroller();
		::Dynamic isInScroller_dyn();

		void onMouseWheel( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseWheel_dyn();

		void onClick( ::Dynamic _);
		::Dynamic onClick_dyn();

		void onFocusIn( ::haxe::ui::events::FocusEvent event);
		::Dynamic onFocusIn_dyn();

		void onFocusOut( ::haxe::ui::events::FocusEvent event);
		::Dynamic onFocusOut_dyn();

		void onActionStart( ::haxe::ui::events::ActionEvent event);
		::Dynamic onActionStart_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper

#endif /* INCLUDED_haxe_ui_components__NumberStepper_Events */ 
