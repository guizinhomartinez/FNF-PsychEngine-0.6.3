#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvents
#define INCLUDED_haxe_ui_containers_menus_MenuEvents

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
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,Menu)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,MenuEvents)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,MenuItem)
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
namespace containers{
namespace menus{


class HXCPP_CLASS_ATTRIBUTES MenuEvents_obj : public  ::haxe::ui::events::Events_obj
{
	public:
		typedef  ::haxe::ui::events::Events_obj super;
		typedef MenuEvents_obj OBJ_;
		MenuEvents_obj();

	public:
		enum { _hx_ClassId = 0x261a4bfc };

		void __construct( ::haxe::ui::containers::menus::Menu menu);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.menus.MenuEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.menus.MenuEvents"); }
		static ::hx::ObjectPtr< MenuEvents_obj > __new( ::haxe::ui::containers::menus::Menu menu);
		static ::hx::ObjectPtr< MenuEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::menus::Menu menu);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuEvents",38,8e,9f,6f); }

		 ::haxe::ui::containers::menus::Menu _menu;
		 ::haxe::ui::containers::menus::MenuItem _currentItem;
		 ::haxe::ui::containers::menus::Menu currentSubMenu;
		 ::haxe::ui::containers::menus::Menu parentMenu;
		 ::haxe::ui::components::Button button;
		void _hx_register();

		void unregister();

		bool _over;
		void onMouseOver( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseOver_dyn();

		void onMouseOut( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseOut_dyn();

		void onItemClick( ::haxe::ui::events::MouseEvent event);
		::Dynamic onItemClick_dyn();

		void onItemMouseOver( ::haxe::ui::events::MouseEvent event);
		::Dynamic onItemMouseOver_dyn();

		void onItemMouseOut( ::haxe::ui::events::MouseEvent event);
		::Dynamic onItemMouseOut_dyn();

		void showSubMenu( ::haxe::ui::containers::menus::Menu subMenu, ::haxe::ui::containers::menus::MenuItem source);
		::Dynamic showSubMenu_dyn();

		void hideMenu();
		::Dynamic hideMenu_dyn();

		void hideCurrentSubMenu();
		::Dynamic hideCurrentSubMenu_dyn();

		void onHidden( ::haxe::ui::events::UIEvent event);
		::Dynamic onHidden_dyn();

		void onShown( ::haxe::ui::events::UIEvent event);
		::Dynamic onShown_dyn();

		 ::haxe::ui::containers::menus::Menu findRootMenu();
		::Dynamic findRootMenu_dyn();

		bool hasScreenMouseDown;
		void addScreenMouseDown();
		::Dynamic addScreenMouseDown_dyn();

		void removeScreenMouseDown();
		::Dynamic removeScreenMouseDown_dyn();

		void onScreenMouseDown( ::haxe::ui::events::MouseEvent event);
		::Dynamic onScreenMouseDown_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus

#endif /* INCLUDED_haxe_ui_containers_menus_MenuEvents */ 
