#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_components_Stepper
#include <haxe/ui/components/Stepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Stepper_Builder
#include <haxe/ui/components/_Stepper/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Stepper_DeincBehaviour
#include <haxe/ui/components/_Stepper/DeincBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Stepper_Events
#include <haxe/ui/components/_Stepper/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Stepper_IncBehaviour
#include <haxe/ui/components/_Stepper/IncBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Stepper_PosBehaviour
#include <haxe/ui/components/_Stepper/PosBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_42aba6608bd51679_16_new,"haxe.ui.components.Stepper","new",0x604cdb9d,"haxe.ui.components.Stepper.new","haxe/ui/components/Stepper.hx",16,0x78893714)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_568_increment,"haxe.ui.components.Stepper","increment",0xa76f9d2c,"haxe.ui.components.Stepper.increment","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_568_deincrement,"haxe.ui.components.Stepper","deincrement",0x8a4446cb,"haxe.ui.components.Stepper.deincrement","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_138_registerComposite,"haxe.ui.components.Stepper","registerComposite",0x500b4121,"haxe.ui.components.Stepper.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_441_registerBehaviours,"haxe.ui.components.Stepper","registerBehaviours",0x3cccc93c,"haxe.ui.components.Stepper.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_475_get_pos,"haxe.ui.components.Stepper","get_pos",0xff1613e8,"haxe.ui.components.Stepper.get_pos","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_491_set_pos,"haxe.ui.components.Stepper","set_pos",0xf217a4f4,"haxe.ui.components.Stepper.set_pos","haxe/ui/macros/Macros.hx",491,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_475_get_step,"haxe.ui.components.Stepper","get_step",0x363aba78,"haxe.ui.components.Stepper.get_step","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_520_set_step,"haxe.ui.components.Stepper","set_step",0xe49813ec,"haxe.ui.components.Stepper.set_step","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_475_get_min,"haxe.ui.components.Stepper","get_min",0xff13c7e6,"haxe.ui.components.Stepper.get_min","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_520_set_min,"haxe.ui.components.Stepper","set_min",0xf21558f2,"haxe.ui.components.Stepper.set_min","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_475_get_max,"haxe.ui.components.Stepper","get_max",0xff13c0f8,"haxe.ui.components.Stepper.get_max","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_520_set_max,"haxe.ui.components.Stepper","set_max",0xf2155204,"haxe.ui.components.Stepper.set_max","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_475_get_precision,"haxe.ui.components.Stepper","get_precision",0xf7000292,"haxe.ui.components.Stepper.get_precision","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_520_set_precision,"haxe.ui.components.Stepper","set_precision",0x3c05e49e,"haxe.ui.components.Stepper.set_precision","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_475_get_repeater,"haxe.ui.components.Stepper","get_repeater",0x233b95b4,"haxe.ui.components.Stepper.get_repeater","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_520_set_repeater,"haxe.ui.components.Stepper","set_repeater",0x3834b928,"haxe.ui.components.Stepper.set_repeater","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_475_get_repeatInterval,"haxe.ui.components.Stepper","get_repeatInterval",0xe96921ec,"haxe.ui.components.Stepper.get_repeatInterval","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_520_set_repeatInterval,"haxe.ui.components.Stepper","set_repeatInterval",0xc6185460,"haxe.ui.components.Stepper.set_repeatInterval","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_602_get_value,"haxe.ui.components.Stepper","get_value",0xead272c5,"haxe.ui.components.Stepper.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_605_set_value,"haxe.ui.components.Stepper","set_value",0xce235ed1,"haxe.ui.components.Stepper.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_117fdbd367429884_565_cloneComponent,"haxe.ui.components.Stepper","cloneComponent",0xab50dd83,"haxe.ui.components.Stepper.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_9ad7fb54d94a07dc_423_self,"haxe.ui.components.Stepper","self",0xe64155af,"haxe.ui.components.Stepper.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Stepper_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_42aba6608bd51679_16_new)
HXDLIN(  16)		super::__construct();
            	}

Dynamic Stepper_obj::__CreateEmpty() { return new Stepper_obj; }

void *Stepper_obj::_hx_vtable = 0;

Dynamic Stepper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stepper_obj > _hx_result = new Stepper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stepper_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4df2b661) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x2eb1d3e1 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x4df2b661;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

static ::haxe::ui::core::IValueComponent_obj _hx_haxe_ui_components_Stepper__hx_haxe_ui_core_IValueComponent= {
	(  ::Dynamic (::hx::Object::*)())&::haxe::ui::components::Stepper_obj::get_value,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ui::components::Stepper_obj::set_value,
};

void *Stepper_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9229be7c: return &_hx_haxe_ui_components_Stepper__hx_haxe_ui_core_IValueComponent;
	}
	return super::_hx_getInterface(inHash);
}

 ::haxe::ui::util::VariantType Stepper_obj::increment(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_568_increment)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("increment",2f,06,ff,31),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stepper_obj,increment,return )

 ::haxe::ui::util::VariantType Stepper_obj::deincrement(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_568_deincrement)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("deincrement",8e,36,42,66),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stepper_obj,deincrement,return )

void Stepper_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::_Stepper::Events >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_Stepper::Builder >();
            	}


void Stepper_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("pos",94,5d,55,00),::hx::ClassOf< ::haxe::ui::components::_Stepper::PosBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("step",4c,e7,5b,4c),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(1));
HXDLIN( 543)		this->behaviours->_hx_register(HX_("min",92,11,53,00),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 543)		this->behaviours->_hx_register(HX_("max",a4,0a,53,00),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 543)		this->behaviours->_hx_register(HX_("precision",3e,d5,c7,80),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("repeater",88,bc,55,10),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 543)		_hx_tmp2->_hx_register(HX_("repeatInterval",c0,1f,6a,45),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(100));
HXLINE( 578)		this->behaviours->_hx_register(HX_("increment",2f,06,ff,31),::hx::ClassOf< ::haxe::ui::components::_Stepper::IncBehaviour >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("deincrement",8e,36,42,66),::hx::ClassOf< ::haxe::ui::components::_Stepper::DeincBehaviour >(),null());
            	}


Float Stepper_obj::get_pos(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_475_get_pos)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("pos",94,5d,55,00)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stepper_obj,get_pos,return )

Float Stepper_obj::set_pos(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_491_set_pos)
HXLINE( 492)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 492)		_hx_tmp->set(HX_("pos",94,5d,55,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 493)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("pos",94,5d,55,00)));
HXLINE( 494)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stepper_obj,set_pos,return )

Float Stepper_obj::get_step(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_475_get_step)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("step",4c,e7,5b,4c)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stepper_obj,get_step,return )

Float Stepper_obj::set_step(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_520_set_step)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("step",4c,e7,5b,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("step",4c,e7,5b,4c)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stepper_obj,set_step,return )

 ::Dynamic Stepper_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_475_get_min)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("min",92,11,53,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stepper_obj,get_min,return )

 ::Dynamic Stepper_obj::set_min( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_520_set_min)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("min",92,11,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("min",92,11,53,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stepper_obj,set_min,return )

 ::Dynamic Stepper_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_475_get_max)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("max",a4,0a,53,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stepper_obj,get_max,return )

 ::Dynamic Stepper_obj::set_max( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_520_set_max)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("max",a4,0a,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("max",a4,0a,53,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stepper_obj,set_max,return )

 ::Dynamic Stepper_obj::get_precision(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_475_get_precision)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("precision",3e,d5,c7,80)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stepper_obj,get_precision,return )

 ::Dynamic Stepper_obj::set_precision( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_520_set_precision)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("precision",3e,d5,c7,80),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(( (int)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("precision",3e,d5,c7,80)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stepper_obj,set_precision,return )

bool Stepper_obj::get_repeater(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_475_get_repeater)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("repeater",88,bc,55,10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stepper_obj,get_repeater,return )

bool Stepper_obj::set_repeater(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_520_set_repeater)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("repeater",88,bc,55,10),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("repeater",88,bc,55,10)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stepper_obj,set_repeater,return )

int Stepper_obj::get_repeatInterval(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_475_get_repeatInterval)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("repeatInterval",c0,1f,6a,45)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stepper_obj,get_repeatInterval,return )

int Stepper_obj::set_repeatInterval(int value){
            	HX_GC_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_520_set_repeatInterval)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("repeatInterval",c0,1f,6a,45),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("repeatInterval",c0,1f,6a,45)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stepper_obj,set_repeatInterval,return )

 ::Dynamic Stepper_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_602_get_value)
HXDLIN( 602)		return this->get_pos();
            	}


 ::Dynamic Stepper_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_605_set_value)
HXLINE( 606)		this->set_pos(( (Float)(value) ));
HXLINE( 607)		return value;
            	}


 ::haxe::ui::core::ComponentContainer Stepper_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_117fdbd367429884_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Stepper c = ( ( ::haxe::ui::components::Stepper)(this->super::cloneComponent()) );
HXLINE( 382)		c->set_pos(this->get_pos());
HXDLIN( 382)		c->set_step(this->get_step());
HXLINE( 380)		if (::hx::IsNotNull( this->get_min() )) {
HXLINE( 380)			c->set_min(this->get_min());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_max() )) {
HXLINE( 380)			c->set_max(this->get_max());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_precision() )) {
HXLINE( 380)			c->set_precision(this->get_precision());
            		}
HXLINE( 382)		c->set_repeater(this->get_repeater());
HXDLIN( 382)		c->set_repeatInterval(this->get_repeatInterval());
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


 ::haxe::ui::core::ComponentContainer Stepper_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_9ad7fb54d94a07dc_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Stepper_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Stepper_obj > Stepper_obj::__new() {
	::hx::ObjectPtr< Stepper_obj > __this = new Stepper_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Stepper_obj > Stepper_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Stepper_obj *__this = (Stepper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stepper_obj), true, "haxe.ui.components.Stepper"));
	*(void **)__this = Stepper_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Stepper_obj::Stepper_obj()
{
}

::hx::Val Stepper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pos() ); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_min() ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_max() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_step() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pos") ) { return ::hx::Val( get_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return ::hx::Val( set_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_min") ) { return ::hx::Val( get_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return ::hx::Val( set_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return ::hx::Val( get_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return ::hx::Val( set_max_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_step") ) { return ::hx::Val( get_step_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_step") ) { return ::hx::Val( set_step_dyn() ); }
		if (HX_FIELD_EQ(inName,"repeater") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_repeater() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { return ::hx::Val( increment_dyn() ); }
		if (HX_FIELD_EQ(inName,"precision") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_precision() ); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"deincrement") ) { return ::hx::Val( deincrement_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_repeater") ) { return ::hx::Val( get_repeater_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_repeater") ) { return ::hx::Val( set_repeater_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_precision") ) { return ::hx::Val( get_precision_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_precision") ) { return ::hx::Val( set_precision_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"repeatInterval") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_repeatInterval() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_repeatInterval") ) { return ::hx::Val( get_repeatInterval_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_repeatInterval") ) { return ::hx::Val( set_repeatInterval_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Stepper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_min(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_max(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_step(inValue.Cast< Float >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"repeater") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_repeater(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_precision(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"repeatInterval") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_repeatInterval(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stepper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("step",4c,e7,5b,4c));
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("precision",3e,d5,c7,80));
	outFields->push(HX_("repeater",88,bc,55,10));
	outFields->push(HX_("repeatInterval",c0,1f,6a,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Stepper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Stepper_obj_sStaticStorageInfo = 0;
#endif

static ::String Stepper_obj_sMemberFields[] = {
	HX_("increment",2f,06,ff,31),
	HX_("deincrement",8e,36,42,66),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_pos",2b,26,ca,26),
	HX_("set_pos",37,b7,cb,19),
	HX_("get_step",d5,a2,16,cc),
	HX_("set_step",49,fc,73,7a),
	HX_("get_min",29,da,c7,26),
	HX_("set_min",35,6b,c9,19),
	HX_("get_max",3b,d3,c7,26),
	HX_("set_max",47,64,c9,19),
	HX_("get_precision",15,a9,2b,42),
	HX_("set_precision",21,8b,31,87),
	HX_("get_repeater",91,70,6f,c5),
	HX_("set_repeater",05,94,68,da),
	HX_("get_repeatInterval",89,00,04,e1),
	HX_("set_repeatInterval",fd,32,b3,bd),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Stepper_obj::__mClass;

void Stepper_obj::__register()
{
	Stepper_obj _hx_dummy;
	Stepper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Stepper",2b,c9,3d,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Stepper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Stepper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stepper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stepper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
