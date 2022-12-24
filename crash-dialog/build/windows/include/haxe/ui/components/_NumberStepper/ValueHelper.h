#ifndef INCLUDED_haxe_ui_components__NumberStepper_ValueHelper
#define INCLUDED_haxe_ui_components__NumberStepper_ValueHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,NumberStepper)
HX_DECLARE_CLASS4(haxe,ui,components,_NumberStepper,ValueHelper)
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
namespace _NumberStepper{


class HXCPP_CLASS_ATTRIBUTES ValueHelper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ValueHelper_obj OBJ_;
		ValueHelper_obj();

	public:
		enum { _hx_ClassId = 0x6ce46962 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.components._NumberStepper.ValueHelper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.components._NumberStepper.ValueHelper"); }

		inline static ::hx::ObjectPtr< ValueHelper_obj > __new() {
			::hx::ObjectPtr< ValueHelper_obj > __this = new ValueHelper_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ValueHelper_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ValueHelper_obj *__this = (ValueHelper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValueHelper_obj), false, "haxe.ui.components._NumberStepper.ValueHelper"));
			*(void **)__this = ValueHelper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ValueHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ValueHelper",9f,b3,b0,e9); }

		static  ::Dynamic validateValue( ::haxe::ui::components::NumberStepper stepper);
		static ::Dynamic validateValue_dyn();

		static void incrementValue( ::haxe::ui::components::NumberStepper stepper);
		static ::Dynamic incrementValue_dyn();

		static void deincrementValue( ::haxe::ui::components::NumberStepper stepper);
		static ::Dynamic deincrementValue_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper

#endif /* INCLUDED_haxe_ui_components__NumberStepper_ValueHelper */ 
