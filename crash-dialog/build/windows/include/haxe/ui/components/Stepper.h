#ifndef INCLUDED_haxe_ui_components_Stepper
#define INCLUDED_haxe_ui_components_Stepper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Stepper)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES Stepper_obj : public  ::haxe::ui::containers::VBox_obj
{
	public:
		typedef  ::haxe::ui::containers::VBox_obj super;
		typedef Stepper_obj OBJ_;
		Stepper_obj();

	public:
		enum { _hx_ClassId = 0x4df2b661 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Stepper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Stepper"); }
		static ::hx::ObjectPtr< Stepper_obj > __new();
		static ::hx::ObjectPtr< Stepper_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stepper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Stepper",f1,2c,b1,4e); }

		 ::haxe::ui::util::VariantType increment();
		::Dynamic increment_dyn();

		 ::haxe::ui::util::VariantType deincrement();
		::Dynamic deincrement_dyn();

		void registerComposite();

		void registerBehaviours();

		Float get_pos();
		::Dynamic get_pos_dyn();

		Float set_pos(Float value);
		::Dynamic set_pos_dyn();

		Float get_step();
		::Dynamic get_step_dyn();

		Float set_step(Float value);
		::Dynamic set_step_dyn();

		 ::Dynamic get_min();
		::Dynamic get_min_dyn();

		 ::Dynamic set_min( ::Dynamic value);
		::Dynamic set_min_dyn();

		 ::Dynamic get_max();
		::Dynamic get_max_dyn();

		 ::Dynamic set_max( ::Dynamic value);
		::Dynamic set_max_dyn();

		 ::Dynamic get_precision();
		::Dynamic get_precision_dyn();

		 ::Dynamic set_precision( ::Dynamic value);
		::Dynamic set_precision_dyn();

		bool get_repeater();
		::Dynamic get_repeater_dyn();

		bool set_repeater(bool value);
		::Dynamic set_repeater_dyn();

		int get_repeatInterval();
		::Dynamic get_repeatInterval_dyn();

		int set_repeatInterval(int value);
		::Dynamic set_repeatInterval_dyn();

		 ::Dynamic get_value();

		 ::Dynamic set_value( ::Dynamic value);

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Stepper */ 
