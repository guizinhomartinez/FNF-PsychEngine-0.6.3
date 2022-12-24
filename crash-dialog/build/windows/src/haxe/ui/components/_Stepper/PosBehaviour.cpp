#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1abdedb8dd7b89bc_41_new,"haxe.ui.components._Stepper.PosBehaviour","new",0x5e57dfd1,"haxe.ui.components._Stepper.PosBehaviour.new","haxe/ui/components/Stepper.hx",41,0x78893714)
HX_LOCAL_STACK_FRAME(_hx_pos_1abdedb8dd7b89bc_42_validateData,"haxe.ui.components._Stepper.PosBehaviour","validateData",0x95c4504f,"haxe.ui.components._Stepper.PosBehaviour.validateData","haxe/ui/components/Stepper.hx",42,0x78893714)
namespace haxe{
namespace ui{
namespace components{
namespace _Stepper{

void PosBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_1abdedb8dd7b89bc_41_new)
HXDLIN(  41)		super::__construct(component);
            	}

Dynamic PosBehaviour_obj::__CreateEmpty() { return new PosBehaviour_obj; }

void *PosBehaviour_obj::_hx_vtable = 0;

Dynamic PosBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PosBehaviour_obj > _hx_result = new PosBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PosBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x79723a8b || inClassId==(int)0x7e17fa9f;
	}
}

void PosBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_1abdedb8dd7b89bc_42_validateData)
HXLINE(  43)		 ::haxe::ui::components::Stepper stepper = ::hx::TCast<  ::haxe::ui::components::Stepper >::cast(this->_component);
HXLINE(  44)		 ::Dynamic v = ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value);
HXDLIN(  44)		 ::Dynamic min = stepper->get_min();
HXDLIN(  44)		 ::Dynamic max = stepper->get_max();
HXDLIN(  44)		Float v1;
HXDLIN(  44)		bool v2;
HXDLIN(  44)		if (::hx::IsNotNull( v )) {
HXLINE(  44)			v2 = ::Math_obj::isNaN(( (Float)(v) ));
            		}
            		else {
HXLINE(  44)			v2 = true;
            		}
HXDLIN(  44)		if (v2) {
HXLINE(  44)			v1 = ( (Float)(min) );
            		}
            		else {
HXLINE(  44)			bool v2;
HXDLIN(  44)			if (::hx::IsNotNull( min )) {
HXLINE(  44)				v2 = ::hx::IsLess( v,min );
            			}
            			else {
HXLINE(  44)				v2 = false;
            			}
HXDLIN(  44)			if (v2) {
HXLINE(  44)				v = min;
            			}
            			else {
HXLINE(  44)				bool v1;
HXDLIN(  44)				if (::hx::IsNotNull( max )) {
HXLINE(  44)					v1 = ::hx::IsGreater( v,max );
            				}
            				else {
HXLINE(  44)					v1 = false;
            				}
HXDLIN(  44)				if (v1) {
HXLINE(  44)					v = max;
            				}
            			}
HXDLIN(  44)			v1 = ( (Float)(v) );
            		}
HXLINE(  45)		stepper->set_pos(v1);
HXLINE(  46)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(v1);
HXLINE(  47)		 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE(  48)		this->_component->dispatch(event);
            	}



::hx::ObjectPtr< PosBehaviour_obj > PosBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PosBehaviour_obj > __this = new PosBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PosBehaviour_obj > PosBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PosBehaviour_obj *__this = (PosBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PosBehaviour_obj), true, "haxe.ui.components._Stepper.PosBehaviour"));
	*(void **)__this = PosBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PosBehaviour_obj::PosBehaviour_obj()
{
}

::hx::Val PosBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PosBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PosBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String PosBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class PosBehaviour_obj::__mClass;

void PosBehaviour_obj::__register()
{
	PosBehaviour_obj _hx_dummy;
	PosBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Stepper.PosBehaviour",5f,a3,7d,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PosBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PosBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PosBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PosBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Stepper
