#ifndef INCLUDED_haxe_ui_components__TabBar_TabBarButtonLayout
#define INCLUDED_haxe_ui_components__TabBar_TabBarButtonLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_ButtonLayout
#include <haxe/ui/components/ButtonLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,ButtonLayout)
HX_DECLARE_CLASS4(haxe,ui,components,_TabBar,TabBarButtonLayout)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,geom,Size)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{


class HXCPP_CLASS_ATTRIBUTES TabBarButtonLayout_obj : public  ::haxe::ui::components::ButtonLayout_obj
{
	public:
		typedef  ::haxe::ui::components::ButtonLayout_obj super;
		typedef TabBarButtonLayout_obj OBJ_;
		TabBarButtonLayout_obj();

	public:
		enum { _hx_ClassId = 0x6b409503 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._TabBar.TabBarButtonLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._TabBar.TabBarButtonLayout"); }
		static ::hx::ObjectPtr< TabBarButtonLayout_obj > __new();
		static ::hx::ObjectPtr< TabBarButtonLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabBarButtonLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabBarButtonLayout",fa,2d,69,ec); }

		void repositionChildren();

		 ::haxe::ui::geom::Size calcAutoSize(::Array< ::Dynamic> exclusions);

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar

#endif /* INCLUDED_haxe_ui_components__TabBar_TabBarButtonLayout */ 
