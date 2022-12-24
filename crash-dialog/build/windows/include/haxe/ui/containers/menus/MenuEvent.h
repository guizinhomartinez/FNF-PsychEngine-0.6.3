#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvent
#define INCLUDED_haxe_ui_containers_menus_MenuEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,Menu)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,MenuEvent)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,MenuItem)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace menus{


class HXCPP_CLASS_ATTRIBUTES MenuEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef MenuEvent_obj OBJ_;
		MenuEvent_obj();

	public:
		enum { _hx_ClassId = 0x2e09615f };

		void __construct(::String type, ::Dynamic __o_bubble, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.menus.MenuEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.menus.MenuEvent"); }
		static ::hx::ObjectPtr< MenuEvent_obj > __new(::String type, ::Dynamic __o_bubble, ::Dynamic data);
		static ::hx::ObjectPtr< MenuEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic __o_bubble, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuEvent",db,11,70,b2); }

		static void __boot();
		static ::String MENU_SELECTED;
		static ::String MENU_OPENED;
		static ::String MENU_CLOSED;
		 ::haxe::ui::containers::menus::Menu menu;
		 ::haxe::ui::containers::menus::MenuItem menuItem;
		 ::haxe::ui::events::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus

#endif /* INCLUDED_haxe_ui_containers_menus_MenuEvent */ 
