#ifndef INCLUDED_haxe_ui_containers_menus_MenuBar
#define INCLUDED_haxe_ui_containers_menus_MenuBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,MenuBar)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,MenuEvent)
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


class HXCPP_CLASS_ATTRIBUTES MenuBar_obj : public  ::haxe::ui::containers::HBox_obj
{
	public:
		typedef  ::haxe::ui::containers::HBox_obj super;
		typedef MenuBar_obj OBJ_;
		MenuBar_obj();

	public:
		enum { _hx_ClassId = 0x578ca5ac };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.menus.MenuBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.menus.MenuBar"); }
		static ::hx::ObjectPtr< MenuBar_obj > __new();
		static ::hx::ObjectPtr< MenuBar_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuBar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuBar",54,59,9c,87); }

		void onThemeChanged();

		void registerComposite();

		 ::Dynamic _internal__onMenuSelected;
		Dynamic _internal__onMenuSelected_dyn() { return _internal__onMenuSelected;}
		 ::Dynamic onMenuSelected;
		Dynamic onMenuSelected_dyn() { return onMenuSelected;}
		 ::Dynamic set_onMenuSelected( ::Dynamic value);
		::Dynamic set_onMenuSelected_dyn();

		 ::Dynamic _internal__onMenuOpened;
		Dynamic _internal__onMenuOpened_dyn() { return _internal__onMenuOpened;}
		 ::Dynamic onMenuOpened;
		Dynamic onMenuOpened_dyn() { return onMenuOpened;}
		 ::Dynamic set_onMenuOpened( ::Dynamic value);
		::Dynamic set_onMenuOpened_dyn();

		 ::Dynamic _internal__onMenuClosed;
		Dynamic _internal__onMenuClosed_dyn() { return _internal__onMenuClosed;}
		 ::Dynamic onMenuClosed;
		Dynamic onMenuClosed_dyn() { return onMenuClosed;}
		 ::Dynamic set_onMenuClosed( ::Dynamic value);
		::Dynamic set_onMenuClosed_dyn();

		void registerBehaviours();

		::String get_menuStyleNames();
		::Dynamic get_menuStyleNames_dyn();

		::String set_menuStyleNames(::String value);
		::Dynamic set_menuStyleNames_dyn();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus

#endif /* INCLUDED_haxe_ui_containers_menus_MenuBar */ 
