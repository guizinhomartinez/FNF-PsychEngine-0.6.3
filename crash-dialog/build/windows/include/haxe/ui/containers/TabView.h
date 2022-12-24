#ifndef INCLUDED_haxe_ui_containers_TabView
#define INCLUDED_haxe_ui_containers_TabView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,TabView)
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
namespace containers{


class HXCPP_CLASS_ATTRIBUTES TabView_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef TabView_obj OBJ_;
		TabView_obj();

	public:
		enum { _hx_ClassId = 0x7f32c9f2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.TabView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.TabView"); }
		static ::hx::ObjectPtr< TabView_obj > __new();
		static ::hx::ObjectPtr< TabView_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabView",3a,2f,16,14); }

		 ::haxe::ui::util::VariantType removePage(int index);
		::Dynamic removePage_dyn();

		 ::haxe::ui::core::Component getPage(int index);
		::Dynamic getPage_dyn();

		 ::haxe::ui::core::Component getPageById(::String pageId);
		::Dynamic getPageById_dyn();

		 ::haxe::ui::util::VariantType removeAllPages();
		::Dynamic removeAllPages_dyn();

		void registerComposite();

		void registerBehaviours();

		int get_pageIndex();
		::Dynamic get_pageIndex_dyn();

		int set_pageIndex(int value);
		::Dynamic set_pageIndex_dyn();

		 ::haxe::ui::core::Component get_selectedPage();
		::Dynamic get_selectedPage_dyn();

		 ::haxe::ui::core::Component set_selectedPage( ::haxe::ui::core::Component value);
		::Dynamic set_selectedPage_dyn();

		::String get_tabPosition();
		::Dynamic get_tabPosition_dyn();

		::String set_tabPosition(::String value);
		::Dynamic set_tabPosition_dyn();

		int get_pageCount();
		::Dynamic get_pageCount_dyn();

		int set_pageCount(int value);
		::Dynamic set_pageCount_dyn();

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
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_TabView */ 
