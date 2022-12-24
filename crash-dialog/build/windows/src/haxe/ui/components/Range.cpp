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
#ifndef INCLUDED_haxe_ui_behaviours_InvalidatingBehaviour
#include <haxe/ui/behaviours/InvalidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components_RangeBuilder
#include <haxe/ui/components/RangeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_AllowInteraction
#include <haxe/ui/components/_Range/AllowInteraction.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_RangeEnd
#include <haxe/ui/components/_Range/RangeEnd.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_RangeMax
#include <haxe/ui/components/_Range/RangeMax.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_RangeMin
#include <haxe/ui/components/_Range/RangeMin.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_RangeStart
#include <haxe/ui/components/_Range/RangeStart.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2d10c29790a50976_30_new,"haxe.ui.components.Range","new",0x45b7e7c9,"haxe.ui.components.Range.new","haxe/ui/components/Range.hx",30,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_568_posFromCoord,"haxe.ui.components.Range","posFromCoord",0x23cb082e,"haxe.ui.components.Range.posFromCoord","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2d10c29790a50976_92_get_cssName,"haxe.ui.components.Range","get_cssName",0x7f96482e,"haxe.ui.components.Range.get_cssName","haxe/ui/components/Range.hx",92,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_441_registerBehaviours,"haxe.ui.components.Range","registerBehaviours",0xa5f64e90,"haxe.ui.components.Range.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_475_get_min,"haxe.ui.components.Range","get_min",0x9a965a12,"haxe.ui.components.Range.get_min","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_520_set_min,"haxe.ui.components.Range","set_min",0x8d97eb1e,"haxe.ui.components.Range.set_min","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_475_get_max,"haxe.ui.components.Range","get_max",0x9a965324,"haxe.ui.components.Range.get_max","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_520_set_max,"haxe.ui.components.Range","set_max",0x8d97e430,"haxe.ui.components.Range.set_max","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_475_get_start,"haxe.ui.components.Range","get_start",0xac11dce2,"haxe.ui.components.Range.get_start","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_520_set_start,"haxe.ui.components.Range","set_start",0x8f62c8ee,"haxe.ui.components.Range.set_start","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_475_get_end,"haxe.ui.components.Range","get_end",0x9a904c5b,"haxe.ui.components.Range.get_end","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_520_set_end,"haxe.ui.components.Range","set_end",0x8d91dd67,"haxe.ui.components.Range.set_end","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_475_get_precision,"haxe.ui.components.Range","get_precision",0x836c7dbe,"haxe.ui.components.Range.get_precision","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_520_set_precision,"haxe.ui.components.Range","set_precision",0xc8725fca,"haxe.ui.components.Range.set_precision","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_475_get_step,"haxe.ui.components.Range","get_step",0xacf80ecc,"haxe.ui.components.Range.get_step","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_520_set_step,"haxe.ui.components.Range","set_step",0x5b556840,"haxe.ui.components.Range.set_step","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a1204d998282a2ee_565_cloneComponent,"haxe.ui.components.Range","cloneComponent",0xfdd028d7,"haxe.ui.components.Range.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_423_self,"haxe.ui.components.Range","self",0xbe80f003,"haxe.ui.components.Range.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6f54a100f22fd105_138_registerComposite,"haxe.ui.components.Range","registerComposite",0x2172c24d,"haxe.ui.components.Range.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Range_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2d10c29790a50976_30_new)
HXDLIN(  30)		super::__construct();
            	}

Dynamic Range_obj::__CreateEmpty() { return new Range_obj; }

void *Range_obj::_hx_vtable = 0;

Dynamic Range_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Range_obj > _hx_result = new Range_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Range_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0eaf7545) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0eaf7545;
				}
			} else {
				return inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x13d76ae7) {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x395782b4) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x395782b4;
				} else {
					return inClassId==(int)0x4ba87886;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

static ::haxe::ui::core::IDirectionalComponent_obj _hx_haxe_ui_components_Range__hx_haxe_ui_core_IDirectionalComponent= {
};

void *Range_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4b5f75e3: return &_hx_haxe_ui_components_Range__hx_haxe_ui_core_IDirectionalComponent;
	}
	return super::_hx_getInterface(inHash);
}

Float Range_obj::posFromCoord( ::haxe::ui::geom::Point coord){
            	HX_STACKFRAME(&_hx_pos_6f54a100f22fd105_568_posFromCoord)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return ( (Float)(0) );
            		}
HXLINE( 572)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->call(HX_("posFromCoord",b7,d4,5e,a6),coord))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Range_obj,posFromCoord,return )

::String Range_obj::get_cssName(){
            	HX_STACKFRAME(&_hx_pos_2d10c29790a50976_92_get_cssName)
HXDLIN(  92)		return HX_("range",bd,a5,1f,e4);
            	}


void Range_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_6f54a100f22fd105_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("min",92,11,53,00),::hx::ClassOf< ::haxe::ui::components::_Range::RangeMin >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("max",a4,0a,53,00),::hx::ClassOf< ::haxe::ui::components::_Range::RangeMax >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(100));
HXDLIN( 543)		this->behaviours->_hx_register(HX_("start",62,74,0b,84),::hx::ClassOf< ::haxe::ui::components::_Range::RangeStart >(),null());
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 543)		_hx_tmp2->_hx_register(HX_("end",db,03,4d,00),::hx::ClassOf< ::haxe::ui::components::_Range::RangeEnd >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0));
HXLINE( 539)		this->behaviours->_hx_register(HX_("precision",3e,d5,c7,80),::hx::ClassOf< ::haxe::ui::behaviours::InvalidatingBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("step",4c,e7,5b,4c),::hx::ClassOf< ::haxe::ui::behaviours::InvalidatingBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp3 = this->behaviours;
HXDLIN( 543)		_hx_tmp3->_hx_register(HX_("allowInteraction",c9,55,84,63),::hx::ClassOf< ::haxe::ui::components::_Range::AllowInteraction >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXLINE( 578)		this->behaviours->_hx_register(HX_("posFromCoord",b7,d4,5e,a6),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


 ::Dynamic Range_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_6f54a100f22fd105_475_get_min)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("min",92,11,53,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Range_obj,get_min,return )

 ::Dynamic Range_obj::set_min( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_6f54a100f22fd105_520_set_min)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("min",92,11,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("min",92,11,53,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Range_obj,set_min,return )

 ::Dynamic Range_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_6f54a100f22fd105_475_get_max)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("max",a4,0a,53,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Range_obj,get_max,return )

 ::Dynamic Range_obj::set_max( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_6f54a100f22fd105_520_set_max)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("max",a4,0a,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("max",a4,0a,53,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Range_obj,set_max,return )

 ::Dynamic Range_obj::get_start(){
            	HX_STACKFRAME(&_hx_pos_6f54a100f22fd105_475_get_start)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("start",62,74,0b,84)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Range_obj,get_start,return )

 ::Dynamic Range_obj::set_start( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_6f54a100f22fd105_520_set_start)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("start",62,74,0b,84),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("start",62,74,0b,84)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Range_obj,set_start,return )

Float Range_obj::get_end(){
            	HX_STACKFRAME(&_hx_pos_6f54a100f22fd105_475_get_end)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("end",db,03,4d,00)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Range_obj,get_end,return )

Float Range_obj::set_end(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_6f54a100f22fd105_520_set_end)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("end",db,03,4d,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("end",db,03,4d,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Range_obj,set_end,return )

int Range_obj::get_precision(){
            	HX_STACKFRAME(&_hx_pos_6f54a100f22fd105_475_get_precision)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("precision",3e,d5,c7,80)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Range_obj,get_precision,return )

int Range_obj::set_precision(int value){
            	HX_GC_STACKFRAME(&_hx_pos_6f54a100f22fd105_520_set_precision)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("precision",3e,d5,c7,80),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("precision",3e,d5,c7,80)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Range_obj,set_precision,return )

Float Range_obj::get_step(){
            	HX_STACKFRAME(&_hx_pos_6f54a100f22fd105_475_get_step)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("step",4c,e7,5b,4c)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Range_obj,get_step,return )

Float Range_obj::set_step(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_6f54a100f22fd105_520_set_step)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("step",4c,e7,5b,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("step",4c,e7,5b,4c)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Range_obj,set_step,return )

 ::haxe::ui::core::ComponentContainer Range_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_a1204d998282a2ee_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Range c = ( ( ::haxe::ui::components::Range)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_min() )) {
HXLINE( 380)			c->set_min(this->get_min());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_max() )) {
HXLINE( 380)			c->set_max(this->get_max());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_start() )) {
HXLINE( 380)			c->set_start(this->get_start());
            		}
HXLINE( 382)		c->set_end(this->get_end());
HXDLIN( 382)		c->set_precision(this->get_precision());
HXDLIN( 382)		c->set_step(this->get_step());
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


 ::haxe::ui::core::ComponentContainer Range_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_6f54a100f22fd105_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Range_obj::__alloc( HX_CTX );
            	}


void Range_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_6f54a100f22fd105_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::RangeBuilder >();
            	}



::hx::ObjectPtr< Range_obj > Range_obj::__new() {
	::hx::ObjectPtr< Range_obj > __this = new Range_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Range_obj > Range_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Range_obj *__this = (Range_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Range_obj), true, "haxe.ui.components.Range"));
	*(void **)__this = Range_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Range_obj::Range_obj()
{
}

void Range_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Range);
	HX_MARK_MEMBER_NAME(virtualStart,"virtualStart");
	HX_MARK_MEMBER_NAME(virtualEnd,"virtualEnd");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Range_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(virtualStart,"virtualStart");
	HX_VISIT_MEMBER_NAME(virtualEnd,"virtualEnd");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Range_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_min() ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_max() ); }
		if (HX_FIELD_EQ(inName,"end") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_end() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_step() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_start() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return ::hx::Val( get_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return ::hx::Val( set_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return ::hx::Val( get_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return ::hx::Val( set_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_end") ) { return ::hx::Val( get_end_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_end") ) { return ::hx::Val( set_end_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_step") ) { return ::hx::Val( get_step_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_step") ) { return ::hx::Val( set_step_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_start") ) { return ::hx::Val( get_start_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_start") ) { return ::hx::Val( set_start_dyn() ); }
		if (HX_FIELD_EQ(inName,"precision") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_precision() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"virtualEnd") ) { return ::hx::Val( virtualEnd ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_cssName") ) { return ::hx::Val( get_cssName_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"virtualStart") ) { return ::hx::Val( virtualStart ); }
		if (HX_FIELD_EQ(inName,"posFromCoord") ) { return ::hx::Val( posFromCoord_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_precision") ) { return ::hx::Val( get_precision_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_precision") ) { return ::hx::Val( set_precision_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Range_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_min(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_max(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"end") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_end(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_step(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_start(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_precision(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"virtualEnd") ) { virtualEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"virtualStart") ) { virtualStart=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Range_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("virtualStart",57,7e,77,8b));
	outFields->push(HX_("virtualEnd",90,36,bf,60));
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("precision",3e,d5,c7,80));
	outFields->push(HX_("step",4c,e7,5b,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Range_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Range_obj,virtualStart),HX_("virtualStart",57,7e,77,8b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Range_obj,virtualEnd),HX_("virtualEnd",90,36,bf,60)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Range_obj_sStaticStorageInfo = 0;
#endif

static ::String Range_obj_sMemberFields[] = {
	HX_("virtualStart",57,7e,77,8b),
	HX_("virtualEnd",90,36,bf,60),
	HX_("posFromCoord",b7,d4,5e,a6),
	HX_("get_cssName",c5,1f,bf,00),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_min",29,da,c7,26),
	HX_("set_min",35,6b,c9,19),
	HX_("get_max",3b,d3,c7,26),
	HX_("set_max",47,64,c9,19),
	HX_("get_start",b9,d0,b4,c7),
	HX_("set_start",c5,bc,05,ab),
	HX_("get_end",72,cc,c1,26),
	HX_("set_end",7e,5d,c3,19),
	HX_("get_precision",15,a9,2b,42),
	HX_("set_precision",21,8b,31,87),
	HX_("get_step",d5,a2,16,cc),
	HX_("set_step",49,fc,73,7a),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class Range_obj::__mClass;

void Range_obj::__register()
{
	Range_obj _hx_dummy;
	Range_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Range",57,4f,4c,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Range_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Range_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Range_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Range_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
