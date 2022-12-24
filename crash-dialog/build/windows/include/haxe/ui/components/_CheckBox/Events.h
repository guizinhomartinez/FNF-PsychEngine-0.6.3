#ifndef INCLUDED_haxe_ui_components__CheckBox_Events
#define INCLUDED_haxe_ui_components__CheckBox_Events

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
HX_DECLARE_CLASS3(haxe,ui,components,CheckBox)
HX_DECLARE_CLASS4(haxe,ui,components,_CheckBox,Events)
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
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _CheckBox{


class HXCPP_CLASS_ATTRIBUTES Events_obj : public  ::haxe::ui::events::Events_obj
{
	public:
		typedef  ::haxe::ui::events::Events_obj super;
		typedef Events_obj OBJ_;
		Events_obj();

	public:
		enum { _hx_ClassId = 0x0776ae27 };

		void __construct( ::haxe::ui::components::CheckBox checkbox);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._CheckBox.Events")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._CheckBox.Events"); }
		static ::hx::ObjectPtr< Events_obj > __new( ::haxe::ui::components::CheckBox checkbox);
		static ::hx::ObjectPtr< Events_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::CheckBox checkbox);
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

		 ::haxe::ui::components::CheckBox _checkbox;
		void _hx_register();

		void unregister();

		void onMouseOver( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseOver_dyn();

		void onMouseOut( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseOut_dyn();

		void onClick( ::haxe::ui::events::MouseEvent event);
		::Dynamic onClick_dyn();

		void onMouseDown( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseDown_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _CheckBox

#endif /* INCLUDED_haxe_ui_components__CheckBox_Events */ 
