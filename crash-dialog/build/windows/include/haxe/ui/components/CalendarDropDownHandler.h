#ifndef INCLUDED_haxe_ui_components_CalendarDropDownHandler
#define INCLUDED_haxe_ui_components_CalendarDropDownHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_DropDownHandler
#include <haxe/ui/components/DropDownHandler.h>
#endif
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,CalendarDropDownHandler)
HX_DECLARE_CLASS3(haxe,ui,components,DropDown)
HX_DECLARE_CLASS3(haxe,ui,components,DropDownHandler)
HX_DECLARE_CLASS3(haxe,ui,components,IDropDownHandler)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,CalendarView)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES CalendarDropDownHandler_obj : public  ::haxe::ui::components::DropDownHandler_obj
{
	public:
		typedef  ::haxe::ui::components::DropDownHandler_obj super;
		typedef CalendarDropDownHandler_obj OBJ_;
		CalendarDropDownHandler_obj();

	public:
		enum { _hx_ClassId = 0x236b4fcb };

		void __construct( ::haxe::ui::components::DropDown dropdown);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.CalendarDropDownHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.CalendarDropDownHandler"); }
		static ::hx::ObjectPtr< CalendarDropDownHandler_obj > __new( ::haxe::ui::components::DropDown dropdown);
		static ::hx::ObjectPtr< CalendarDropDownHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CalendarDropDownHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CalendarDropDownHandler",5b,e6,1b,0c); }

		 ::haxe::ui::containers::CalendarView _calendar;
		 ::haxe::ui::core::Component get_component();

		void prepare( ::haxe::ui::containers::Box wrapper);

		 ::Date _cachedSelectedDate;
		 ::Dynamic get_selectedItem();

		 ::Dynamic set_selectedItem( ::Dynamic value);

		void onCalendarChange( ::haxe::ui::events::UIEvent event);
		::Dynamic onCalendarChange_dyn();

		void applyDefault();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_CalendarDropDownHandler */ 
