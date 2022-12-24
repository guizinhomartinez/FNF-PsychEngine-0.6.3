#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_ui_components_NumberStepper
#include <haxe/ui/components/NumberStepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
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
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
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
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_982fc19fbf91f39a_80_new,"haxe.ui.components._NumberStepper.PosBehaviour","new",0x1514267a,"haxe.ui.components._NumberStepper.PosBehaviour.new","haxe/ui/components/NumberStepper.hx",80,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_982fc19fbf91f39a_81_validateData,"haxe.ui.components._NumberStepper.PosBehaviour","validateData",0x75786c86,"haxe.ui.components._NumberStepper.PosBehaviour.validateData","haxe/ui/components/NumberStepper.hx",81,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void PosBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_982fc19fbf91f39a_80_new)
HXDLIN(  80)		super::__construct(component);
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
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x23a8dd6a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23a8dd6a;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void PosBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_982fc19fbf91f39a_81_validateData)
HXLINE(  82)		 ::haxe::ui::components::NumberStepper stepper = ::hx::TCast<  ::haxe::ui::components::NumberStepper >::cast(this->_component);
HXLINE(  83)		 ::Dynamic preciseValue = ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value);
HXLINE(  84)		if (::hx::IsNull( preciseValue )) {
HXLINE(  85)			preciseValue = stepper->get_min();
            		}
HXLINE(  88)		 ::Dynamic v = preciseValue;
HXDLIN(  88)		 ::Dynamic min = stepper->get_min();
HXDLIN(  88)		 ::Dynamic max = stepper->get_max();
HXDLIN(  88)		bool preciseValue1;
HXDLIN(  88)		if (::hx::IsNotNull( v )) {
HXLINE(  88)			preciseValue1 = ::Math_obj::isNaN(( (Float)(v) ));
            		}
            		else {
HXLINE(  88)			preciseValue1 = true;
            		}
HXDLIN(  88)		if (preciseValue1) {
HXLINE(  88)			preciseValue = min;
            		}
            		else {
HXLINE(  88)			bool preciseValue1;
HXDLIN(  88)			if (::hx::IsNotNull( min )) {
HXLINE(  88)				preciseValue1 = ::hx::IsLess( v,min );
            			}
            			else {
HXLINE(  88)				preciseValue1 = false;
            			}
HXDLIN(  88)			if (preciseValue1) {
HXLINE(  88)				v = min;
            			}
            			else {
HXLINE(  88)				bool preciseValue;
HXDLIN(  88)				if (::hx::IsNotNull( max )) {
HXLINE(  88)					preciseValue = ::hx::IsGreater( v,max );
            				}
            				else {
HXLINE(  88)					preciseValue = false;
            				}
HXDLIN(  88)				if (preciseValue) {
HXLINE(  88)					v = max;
            				}
            			}
HXDLIN(  88)			preciseValue = v;
            		}
HXLINE(  89)		bool wasRounded = false;
HXLINE(  90)		if (::hx::IsNotNull( stepper->get_precision() )) {
HXLINE(  91)			int precision = ( (int)(stepper->get_precision()) );
HXDLIN(  91)			Float newPreciseValue = (( (Float)(::Math_obj::round((( (Float)(preciseValue) ) * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ))))) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
HXLINE(  92)			if (::hx::IsNotEq( newPreciseValue,preciseValue )) {
HXLINE(  93)				preciseValue = newPreciseValue;
HXLINE(  94)				wasRounded = true;
            			}
            		}
HXLINE(  97)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(preciseValue) ));
HXLINE(  99)		::String stringValue = ::haxe::ui::util::StringUtil_obj::padDecimal(( (Float)(preciseValue) ),stepper->get_precision());
HXLINE( 100)		 ::haxe::ui::components::TextField value = stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 101)		int carentIndex = value->get_caretIndex();
HXLINE( 102)		stringValue = ::StringTools_obj::replace(stringValue,HX_(",",2c,00,00,00),HX_(".",2e,00,00,00));
HXLINE( 103)		stringValue = ::StringTools_obj::replace(stringValue,HX_(".",2e,00,00,00),stepper->get_decimalSeparator());
HXLINE( 104)		value->set_text(stringValue);
HXLINE( 105)		if (wasRounded) {
HXLINE( 106)			value->set_caretIndex(stringValue.length);
            		}
            		else {
HXLINE( 108)			value->set_caretIndex(carentIndex);
            		}
HXLINE( 111)		 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 112)		event->previousValue = this->_previousValue;
HXLINE( 113)		event->value = this->_value;
HXLINE( 114)		this->_component->dispatch(event);
            	}



::hx::ObjectPtr< PosBehaviour_obj > PosBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PosBehaviour_obj > __this = new PosBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PosBehaviour_obj > PosBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PosBehaviour_obj *__this = (PosBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PosBehaviour_obj), true, "haxe.ui.components._NumberStepper.PosBehaviour"));
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
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.PosBehaviour",88,21,35,b0);
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
} // end namespace _NumberStepper
