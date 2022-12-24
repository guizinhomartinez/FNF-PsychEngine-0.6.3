#ifndef INCLUDED_haxe_ui_components_DropDown
#define INCLUDED_haxe_ui_components_DropDown

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,DropDown)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
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
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES DropDown_obj : public  ::haxe::ui::components::Button_obj
{
	public:
		typedef  ::haxe::ui::components::Button_obj super;
		typedef DropDown_obj OBJ_;
		DropDown_obj();

	public:
		enum { _hx_ClassId = 0x1bd114e1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.DropDown")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.DropDown"); }
		static ::hx::ObjectPtr< DropDown_obj > __new();
		static ::hx::ObjectPtr< DropDown_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DropDown_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("DropDown",51,5c,ba,c1); }

		 ::haxe::ui::util::VariantType hideDropDown();
		::Dynamic hideDropDown_dyn();

		 ::haxe::ui::util::VariantType showDropDown();
		::Dynamic showDropDown_dyn();

		 ::haxe::ui::core::ItemRenderer _itemRenderer;
		 ::haxe::ui::core::ItemRenderer get_itemRenderer();
		::Dynamic get_itemRenderer_dyn();

		 ::haxe::ui::core::ItemRenderer set_itemRenderer( ::haxe::ui::core::ItemRenderer value);
		::Dynamic set_itemRenderer_dyn();

		void onThemeChanged();

		void postCloneComponent( ::haxe::ui::core::Component c);

		void registerComposite();

		void registerBehaviours();

		::String get_handlerStyleNames();
		::Dynamic get_handlerStyleNames_dyn();

		::String set_handlerStyleNames(::String value);
		::Dynamic set_handlerStyleNames_dyn();

		 ::haxe::ui::data::DataSource get_dataSource();
		::Dynamic get_dataSource_dyn();

		 ::haxe::ui::data::DataSource set_dataSource( ::haxe::ui::data::DataSource value);
		::Dynamic set_dataSource_dyn();

		::String get_type();
		::Dynamic get_type_dyn();

		::String set_type(::String value);
		::Dynamic set_type_dyn();

		bool get_virtual();
		::Dynamic get_virtual_dyn();

		bool set_virtual(bool value);
		::Dynamic set_virtual_dyn();

		 ::Dynamic get_dropdownWidth();
		::Dynamic get_dropdownWidth_dyn();

		 ::Dynamic set_dropdownWidth( ::Dynamic value);
		::Dynamic set_dropdownWidth_dyn();

		 ::Dynamic get_dropdownHeight();
		::Dynamic get_dropdownHeight_dyn();

		 ::Dynamic set_dropdownHeight( ::Dynamic value);
		::Dynamic set_dropdownHeight_dyn();

		 ::Dynamic get_dropdownSize();
		::Dynamic get_dropdownSize_dyn();

		 ::Dynamic set_dropdownSize( ::Dynamic value);
		::Dynamic set_dropdownSize_dyn();

		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		 ::Dynamic get_selectedItem();
		::Dynamic get_selectedItem_dyn();

		 ::Dynamic set_selectedItem( ::Dynamic value);
		::Dynamic set_selectedItem_dyn();

		bool get_searchable();
		::Dynamic get_searchable_dyn();

		bool set_searchable(bool value);
		::Dynamic set_searchable_dyn();

		::String get_searchPrompt();
		::Dynamic get_searchPrompt_dyn();

		::String set_searchPrompt(::String value);
		::Dynamic set_searchPrompt_dyn();

		 ::haxe::ui::core::Component get_searchField();
		::Dynamic get_searchField_dyn();

		 ::haxe::ui::core::Component set_searchField( ::haxe::ui::core::Component value);
		::Dynamic set_searchField_dyn();

		 ::Dynamic get_value();

		 ::Dynamic set_value( ::Dynamic value);

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_DropDown */ 
