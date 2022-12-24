#ifndef INCLUDED_haxe_ui_components_NumberStepper
#define INCLUDED_haxe_ui_components_NumberStepper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,NumberStepper)
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
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES NumberStepper_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef NumberStepper_obj OBJ_;
		NumberStepper_obj();

	public:
		enum { _hx_ClassId = 0x5cb18e98 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.NumberStepper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.NumberStepper"); }
		static ::hx::ObjectPtr< NumberStepper_obj > __new();
		static ::hx::ObjectPtr< NumberStepper_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NumberStepper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NumberStepper",28,51,bf,c8); }

		void registerBehaviours();

		 ::Dynamic get_pos();
		::Dynamic get_pos_dyn();

		 ::Dynamic set_pos( ::Dynamic value);
		::Dynamic set_pos_dyn();

		Float get_step();
		::Dynamic get_step_dyn();

		Float set_step(Float value);
		::Dynamic set_step_dyn();

		 ::Dynamic get_max();
		::Dynamic get_max_dyn();

		 ::Dynamic set_max( ::Dynamic value);
		::Dynamic set_max_dyn();

		 ::Dynamic get_min();
		::Dynamic get_min_dyn();

		 ::Dynamic set_min( ::Dynamic value);
		::Dynamic set_min_dyn();

		 ::Dynamic get_precision();
		::Dynamic get_precision_dyn();

		 ::Dynamic set_precision( ::Dynamic value);
		::Dynamic set_precision_dyn();

		bool get_autoCorrect();
		::Dynamic get_autoCorrect_dyn();

		bool set_autoCorrect(bool value);
		::Dynamic set_autoCorrect_dyn();

		::String get_decimalSeparator();
		::Dynamic get_decimalSeparator_dyn();

		::String set_decimalSeparator(::String value);
		::Dynamic set_decimalSeparator_dyn();

		 ::Dynamic get_value();

		 ::Dynamic set_value( ::Dynamic value);

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

		void registerComposite();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_NumberStepper */ 
