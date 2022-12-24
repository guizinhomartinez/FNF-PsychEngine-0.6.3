#ifndef INCLUDED_haxe_ui_components_CheckBoxBuilder
#define INCLUDED_haxe_ui_components_CheckBoxBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,CheckBox)
HX_DECLARE_CLASS3(haxe,ui,components,CheckBoxBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES CheckBoxBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef CheckBoxBuilder_obj OBJ_;
		CheckBoxBuilder_obj();

	public:
		enum { _hx_ClassId = 0x1cd5d488 };

		void __construct( ::haxe::ui::components::CheckBox checkbox);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.CheckBoxBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.CheckBoxBuilder"); }
		static ::hx::ObjectPtr< CheckBoxBuilder_obj > __new( ::haxe::ui::components::CheckBox checkbox);
		static ::hx::ObjectPtr< CheckBoxBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::CheckBox checkbox);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CheckBoxBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CheckBoxBuilder",18,5b,c5,f9); }

		 ::haxe::ui::components::CheckBox _checkbox;
		void create();

		void applyStyle( ::haxe::ui::styles::Style style);

		virtual ::String get_cssName();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_CheckBoxBuilder */ 
