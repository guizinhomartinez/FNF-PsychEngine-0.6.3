#ifndef INCLUDED_haxe_ui_components_OptionBoxBuilder
#define INCLUDED_haxe_ui_components_OptionBoxBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_CheckBoxBuilder
#include <haxe/ui/components/CheckBoxBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,CheckBox)
HX_DECLARE_CLASS3(haxe,ui,components,CheckBoxBuilder)
HX_DECLARE_CLASS3(haxe,ui,components,OptionBox)
HX_DECLARE_CLASS3(haxe,ui,components,OptionBoxBuilder)
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
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES OptionBoxBuilder_obj : public  ::haxe::ui::components::CheckBoxBuilder_obj
{
	public:
		typedef  ::haxe::ui::components::CheckBoxBuilder_obj super;
		typedef OptionBoxBuilder_obj OBJ_;
		OptionBoxBuilder_obj();

	public:
		enum { _hx_ClassId = 0x2dd64139 };

		void __construct( ::haxe::ui::components::CheckBox checkbox);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.OptionBoxBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.OptionBoxBuilder"); }
		static ::hx::ObjectPtr< OptionBoxBuilder_obj > __new( ::haxe::ui::components::CheckBox checkbox);
		static ::hx::ObjectPtr< OptionBoxBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::CheckBox checkbox);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OptionBoxBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OptionBoxBuilder",45,64,93,70); }

		::String get_cssName();

		void setSelection( ::haxe::ui::components::OptionBox optionbox,bool value,::hx::Null< bool >  allowDeselection);
		::Dynamic setSelection_dyn();

		void destroy();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_OptionBoxBuilder */ 
