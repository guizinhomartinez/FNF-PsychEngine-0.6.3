#ifndef INCLUDED_haxe_ui_components_TabBar
#define INCLUDED_haxe_ui_components_TabBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,TabBar)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES TabBar_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef TabBar_obj OBJ_;
		TabBar_obj();

	public:
		enum { _hx_ClassId = 0x41765b2e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.TabBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.TabBar"); }
		static ::hx::ObjectPtr< TabBar_obj > __new();
		static ::hx::ObjectPtr< TabBar_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabBar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabBar",9e,e6,d1,b0); }

		 ::haxe::ui::util::VariantType removeTab(int index);
		::Dynamic removeTab_dyn();

		 ::haxe::ui::core::Component getTab(int index);
		::Dynamic getTab_dyn();

		void registerComposite();

		void registerBehaviours();

		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		 ::haxe::ui::core::Component get_selectedTab();
		::Dynamic get_selectedTab_dyn();

		 ::haxe::ui::core::Component set_selectedTab( ::haxe::ui::core::Component value);
		::Dynamic set_selectedTab_dyn();

		::String get_tabPosition();
		::Dynamic get_tabPosition_dyn();

		::String set_tabPosition(::String value);
		::Dynamic set_tabPosition_dyn();

		int get_tabCount();
		::Dynamic get_tabCount_dyn();

		int set_tabCount(int value);
		::Dynamic set_tabCount_dyn();

		bool get_closable();
		::Dynamic get_closable_dyn();

		bool set_closable(bool value);
		::Dynamic set_closable_dyn();

		 ::Dynamic get_buttonWidth();
		::Dynamic get_buttonWidth_dyn();

		 ::Dynamic set_buttonWidth( ::Dynamic value);
		::Dynamic set_buttonWidth_dyn();

		 ::Dynamic get_buttonHeight();
		::Dynamic get_buttonHeight_dyn();

		 ::Dynamic set_buttonHeight( ::Dynamic value);
		::Dynamic set_buttonHeight_dyn();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_TabBar */ 
