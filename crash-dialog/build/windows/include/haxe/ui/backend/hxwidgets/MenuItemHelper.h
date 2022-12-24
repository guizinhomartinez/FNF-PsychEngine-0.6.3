#ifndef INCLUDED_haxe_ui_backend_hxwidgets_MenuItemHelper
#define INCLUDED_haxe_ui_backend_hxwidgets_MenuItemHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,MenuItemHelper)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
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
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES MenuItemHelper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MenuItemHelper_obj OBJ_;
		MenuItemHelper_obj();

	public:
		enum { _hx_ClassId = 0x5806a1c5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.MenuItemHelper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.MenuItemHelper"); }

		inline static ::hx::ObjectPtr< MenuItemHelper_obj > __new() {
			::hx::ObjectPtr< MenuItemHelper_obj > __this = new MenuItemHelper_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MenuItemHelper_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MenuItemHelper_obj *__this = (MenuItemHelper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItemHelper_obj), false, "haxe.ui.backend.hxwidgets.MenuItemHelper"));
			*(void **)__this = MenuItemHelper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuItemHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuItemHelper",80,01,09,22); }

		static void __boot();
		static  ::haxe::ds::IntMap _menuItems;
		static void set(int id, ::haxe::ui::containers::menus::MenuItem item);
		static ::Dynamic set_dyn();

		static  ::haxe::ui::containers::menus::MenuItem get(int id);
		static ::Dynamic get_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_MenuItemHelper */ 
