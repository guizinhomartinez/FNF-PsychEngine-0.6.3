#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_NumberStepper
#include <haxe/ui/components/NumberStepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_Builder
#include <haxe/ui/components/_NumberStepper/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_Events
#include <haxe/ui/components/_NumberStepper/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_PosBehaviour
#include <haxe/ui/components/_NumberStepper/PosBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_Formats
#include <haxe/ui/locale/Formats.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_935bee7c67bd6ec6_27_new,"haxe.ui.components.NumberStepper","new",0x964a8ed4,"haxe.ui.components.NumberStepper.new","haxe/ui/components/NumberStepper.hx",27,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_441_registerBehaviours,"haxe.ui.components.NumberStepper","registerBehaviours",0xc3894be5,"haxe.ui.components.NumberStepper.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_475_get_pos,"haxe.ui.components.NumberStepper","get_pos",0xdc732e9f,"haxe.ui.components.NumberStepper.get_pos","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_491_set_pos,"haxe.ui.components.NumberStepper","set_pos",0xcf74bfab,"haxe.ui.components.NumberStepper.set_pos","haxe/ui/macros/Macros.hx",491,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_475_get_step,"haxe.ui.components.NumberStepper","get_step",0x0a54ffe1,"haxe.ui.components.NumberStepper.get_step","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_520_set_step,"haxe.ui.components.NumberStepper","set_step",0xb8b25955,"haxe.ui.components.NumberStepper.set_step","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_475_get_max,"haxe.ui.components.NumberStepper","get_max",0xdc70dbaf,"haxe.ui.components.NumberStepper.get_max","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_520_set_max,"haxe.ui.components.NumberStepper","set_max",0xcf726cbb,"haxe.ui.components.NumberStepper.set_max","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_475_get_min,"haxe.ui.components.NumberStepper","get_min",0xdc70e29d,"haxe.ui.components.NumberStepper.get_min","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_520_set_min,"haxe.ui.components.NumberStepper","set_min",0xcf7273a9,"haxe.ui.components.NumberStepper.set_min","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_475_get_precision,"haxe.ui.components.NumberStepper","get_precision",0xa0048089,"haxe.ui.components.NumberStepper.get_precision","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_520_set_precision,"haxe.ui.components.NumberStepper","set_precision",0xe50a6295,"haxe.ui.components.NumberStepper.set_precision","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_475_get_autoCorrect,"haxe.ui.components.NumberStepper","get_autoCorrect",0x33d960c6,"haxe.ui.components.NumberStepper.get_autoCorrect","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_520_set_autoCorrect,"haxe.ui.components.NumberStepper","set_autoCorrect",0x2fa4ddd2,"haxe.ui.components.NumberStepper.set_autoCorrect","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_475_get_decimalSeparator,"haxe.ui.components.NumberStepper","get_decimalSeparator",0x34dc15a9,"haxe.ui.components.NumberStepper.get_decimalSeparator","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_506_set_decimalSeparator,"haxe.ui.components.NumberStepper","set_decimalSeparator",0x0193cd1d,"haxe.ui.components.NumberStepper.set_decimalSeparator","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_602_get_value,"haxe.ui.components.NumberStepper","get_value",0xadb4e93c,"haxe.ui.components.NumberStepper.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_605_set_value,"haxe.ui.components.NumberStepper","set_value",0x9105d548,"haxe.ui.components.NumberStepper.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_41703d0a40144b05_565_cloneComponent,"haxe.ui.components.NumberStepper","cloneComponent",0xe63a97ac,"haxe.ui.components.NumberStepper.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_423_self,"haxe.ui.components.NumberStepper","self",0xee407298,"haxe.ui.components.NumberStepper.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32ef210da4c6323f_138_registerComposite,"haxe.ui.components.NumberStepper","registerComposite",0x198b8698,"haxe.ui.components.NumberStepper.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void NumberStepper_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_935bee7c67bd6ec6_27_new)
HXDLIN(  27)		super::__construct();
            	}

Dynamic NumberStepper_obj::__CreateEmpty() { return new NumberStepper_obj; }

void *NumberStepper_obj::_hx_vtable = 0;

Dynamic NumberStepper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NumberStepper_obj > _hx_result = new NumberStepper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NumberStepper_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x5cb18e98) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x395782b4 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x5cb18e98;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void NumberStepper_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("pos",94,5d,55,00),::hx::ClassOf< ::haxe::ui::components::_NumberStepper::PosBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("step",4c,e7,5b,4c),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(1));
HXDLIN( 543)		this->behaviours->_hx_register(HX_("max",a4,0a,53,00),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 543)		this->behaviours->_hx_register(HX_("min",92,11,53,00),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 543)		this->behaviours->_hx_register(HX_("precision",3e,d5,c7,80),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 543)		_hx_tmp2->_hx_register(HX_("autoCorrect",bb,0c,a3,4b),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp3 = this->behaviours;
HXDLIN( 543)		_hx_tmp3->_hx_register(HX_("decimalSeparator",94,f1,95,40),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(::haxe::ui::locale::Formats_obj::get_decimalSeperator()));
            	}


 ::Dynamic NumberStepper_obj::get_pos(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_475_get_pos)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("pos",94,5d,55,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NumberStepper_obj,get_pos,return )

 ::Dynamic NumberStepper_obj::set_pos( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_32ef210da4c6323f_491_set_pos)
HXLINE( 492)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 492)		_hx_tmp->set(HX_("pos",94,5d,55,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 493)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("pos",94,5d,55,00)));
HXLINE( 494)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NumberStepper_obj,set_pos,return )

Float NumberStepper_obj::get_step(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_475_get_step)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("step",4c,e7,5b,4c)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NumberStepper_obj,get_step,return )

Float NumberStepper_obj::set_step(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_32ef210da4c6323f_520_set_step)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("step",4c,e7,5b,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("step",4c,e7,5b,4c)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NumberStepper_obj,set_step,return )

 ::Dynamic NumberStepper_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_475_get_max)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("max",a4,0a,53,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NumberStepper_obj,get_max,return )

 ::Dynamic NumberStepper_obj::set_max( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_32ef210da4c6323f_520_set_max)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("max",a4,0a,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("max",a4,0a,53,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NumberStepper_obj,set_max,return )

 ::Dynamic NumberStepper_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_475_get_min)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("min",92,11,53,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NumberStepper_obj,get_min,return )

 ::Dynamic NumberStepper_obj::set_min( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_32ef210da4c6323f_520_set_min)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("min",92,11,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("min",92,11,53,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NumberStepper_obj,set_min,return )

 ::Dynamic NumberStepper_obj::get_precision(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_475_get_precision)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("precision",3e,d5,c7,80)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NumberStepper_obj,get_precision,return )

 ::Dynamic NumberStepper_obj::set_precision( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_32ef210da4c6323f_520_set_precision)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("precision",3e,d5,c7,80),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(( (int)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("precision",3e,d5,c7,80)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NumberStepper_obj,set_precision,return )

bool NumberStepper_obj::get_autoCorrect(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_475_get_autoCorrect)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("autoCorrect",bb,0c,a3,4b)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NumberStepper_obj,get_autoCorrect,return )

bool NumberStepper_obj::set_autoCorrect(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_32ef210da4c6323f_520_set_autoCorrect)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("autoCorrect",bb,0c,a3,4b),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("autoCorrect",bb,0c,a3,4b)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NumberStepper_obj,set_autoCorrect,return )

::String NumberStepper_obj::get_decimalSeparator(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_475_get_decimalSeparator)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("decimalSeparator",94,f1,95,40)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NumberStepper_obj,get_decimalSeparator,return )

::String NumberStepper_obj::set_decimalSeparator(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_32ef210da4c6323f_506_set_decimalSeparator)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("decimalSeparator",94,f1,95,40),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("decimalSeparator",94,f1,95,40),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("decimalSeparator",94,f1,95,40)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NumberStepper_obj,set_decimalSeparator,return )

 ::Dynamic NumberStepper_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_602_get_value)
HXDLIN( 602)		return this->get_pos();
            	}


 ::Dynamic NumberStepper_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_605_set_value)
HXLINE( 606)		this->set_pos(value);
HXLINE( 607)		return value;
            	}


 ::haxe::ui::core::ComponentContainer NumberStepper_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_41703d0a40144b05_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::NumberStepper c = ( ( ::haxe::ui::components::NumberStepper)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_pos() )) {
HXLINE( 380)			c->set_pos(this->get_pos());
            		}
HXLINE( 382)		c->set_step(this->get_step());
HXLINE( 380)		if (::hx::IsNotNull( this->get_max() )) {
HXLINE( 380)			c->set_max(this->get_max());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_min() )) {
HXLINE( 380)			c->set_min(this->get_min());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_precision() )) {
HXLINE( 380)			c->set_precision(this->get_precision());
            		}
HXLINE( 382)		c->set_autoCorrect(this->get_autoCorrect());
HXLINE( 380)		if (::hx::IsNotNull( this->get_decimalSeparator() )) {
HXLINE( 380)			c->set_decimalSeparator(this->get_decimalSeparator());
            		}
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				::Array< ::Dynamic> _g1;
HXDLIN( 388)				if (::hx::IsNull( this->_children )) {
HXLINE( 388)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 388)					_g1 = this->_children;
            				}
HXDLIN( 388)				while((_g < _g1->length)){
HXLINE( 388)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 393)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 395)		return c;
            	}


 ::haxe::ui::core::ComponentContainer NumberStepper_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_32ef210da4c6323f_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::NumberStepper_obj::__alloc( HX_CTX );
            	}


void NumberStepper_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_32ef210da4c6323f_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::_NumberStepper::Events >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_NumberStepper::Builder >();
            	}



::hx::ObjectPtr< NumberStepper_obj > NumberStepper_obj::__new() {
	::hx::ObjectPtr< NumberStepper_obj > __this = new NumberStepper_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NumberStepper_obj > NumberStepper_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NumberStepper_obj *__this = (NumberStepper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NumberStepper_obj), true, "haxe.ui.components.NumberStepper"));
	*(void **)__this = NumberStepper_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NumberStepper_obj::NumberStepper_obj()
{
}

::hx::Val NumberStepper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pos() ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_max() ); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_min() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_step() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pos") ) { return ::hx::Val( get_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return ::hx::Val( set_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return ::hx::Val( get_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return ::hx::Val( set_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_min") ) { return ::hx::Val( get_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return ::hx::Val( set_min_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_step") ) { return ::hx::Val( get_step_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_step") ) { return ::hx::Val( set_step_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_precision() ); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoCorrect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoCorrect() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_precision") ) { return ::hx::Val( get_precision_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_precision") ) { return ::hx::Val( set_precision_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_autoCorrect") ) { return ::hx::Val( get_autoCorrect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoCorrect") ) { return ::hx::Val( set_autoCorrect_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"decimalSeparator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_decimalSeparator() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_decimalSeparator") ) { return ::hx::Val( get_decimalSeparator_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_decimalSeparator") ) { return ::hx::Val( set_decimalSeparator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NumberStepper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pos(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_max(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_min(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_step(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_precision(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoCorrect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoCorrect(inValue.Cast< bool >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"decimalSeparator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_decimalSeparator(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NumberStepper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("step",4c,e7,5b,4c));
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("precision",3e,d5,c7,80));
	outFields->push(HX_("autoCorrect",bb,0c,a3,4b));
	outFields->push(HX_("decimalSeparator",94,f1,95,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NumberStepper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NumberStepper_obj_sStaticStorageInfo = 0;
#endif

static ::String NumberStepper_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_pos",2b,26,ca,26),
	HX_("set_pos",37,b7,cb,19),
	HX_("get_step",d5,a2,16,cc),
	HX_("set_step",49,fc,73,7a),
	HX_("get_max",3b,d3,c7,26),
	HX_("set_max",47,64,c9,19),
	HX_("get_min",29,da,c7,26),
	HX_("set_min",35,6b,c9,19),
	HX_("get_precision",15,a9,2b,42),
	HX_("set_precision",21,8b,31,87),
	HX_("get_autoCorrect",52,c4,84,0c),
	HX_("set_autoCorrect",5e,41,50,08),
	HX_("get_decimalSeparator",9d,56,00,5f),
	HX_("set_decimalSeparator",11,0e,b8,2b),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class NumberStepper_obj::__mClass;

void NumberStepper_obj::__register()
{
	NumberStepper_obj _hx_dummy;
	NumberStepper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.NumberStepper",e2,d4,85,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NumberStepper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NumberStepper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NumberStepper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NumberStepper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
