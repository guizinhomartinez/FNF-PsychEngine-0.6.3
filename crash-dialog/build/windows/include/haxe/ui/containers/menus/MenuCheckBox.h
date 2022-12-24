#ifndef INCLUDED_haxe_ui_containers_menus_MenuCheckBox
#define INCLUDED_haxe_ui_containers_menus_MenuCheckBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,MenuCheckBox)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,MenuItem)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace menus{


class HXCPP_CLASS_ATTRIBUTES MenuCheckBox_obj : public  ::haxe::ui::containers::menus::MenuItem_obj
{
	public:
		typedef  ::haxe::ui::containers::menus::MenuItem_obj super;
		typedef MenuCheckBox_obj OBJ_;
		MenuCheckBox_obj();

	public:
		enum { _hx_ClassId = 0x264587e2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.menus.MenuCheckBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.menus.MenuCheckBox"); }
		static ::hx::ObjectPtr< MenuCheckBox_obj > __new();
		static ::hx::ObjectPtr< MenuCheckBox_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuCheckBox_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuCheckBox",02,0f,38,2d); }

		void registerBehaviours();

		bool get_selected();
		::Dynamic get_selected_dyn();

		bool set_selected(bool value);
		::Dynamic set_selected_dyn();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

		void registerComposite();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus

#endif /* INCLUDED_haxe_ui_containers_menus_MenuCheckBox */ 
