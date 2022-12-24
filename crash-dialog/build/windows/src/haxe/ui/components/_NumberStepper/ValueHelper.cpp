#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_components_NumberStepper
#include <haxe/ui/components/NumberStepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_ValueHelper
#include <haxe/ui/components/_NumberStepper/ValueHelper.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_71ca4e673ee6c097_421_validateValue,"haxe.ui.components._NumberStepper.ValueHelper","validateValue",0x80c7c32d,"haxe.ui.components._NumberStepper.ValueHelper.validateValue","haxe/ui/components/NumberStepper.hx",421,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_71ca4e673ee6c097_458_incrementValue,"haxe.ui.components._NumberStepper.ValueHelper","incrementValue",0x6ffb4650,"haxe.ui.components._NumberStepper.ValueHelper.incrementValue","haxe/ui/components/NumberStepper.hx",458,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_71ca4e673ee6c097_480_deincrementValue,"haxe.ui.components._NumberStepper.ValueHelper","deincrementValue",0xcd14dd11,"haxe.ui.components._NumberStepper.ValueHelper.deincrementValue","haxe/ui/components/NumberStepper.hx",480,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void ValueHelper_obj::__construct() { }

Dynamic ValueHelper_obj::__CreateEmpty() { return new ValueHelper_obj; }

void *ValueHelper_obj::_hx_vtable = 0;

Dynamic ValueHelper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValueHelper_obj > _hx_result = new ValueHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ValueHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ce46962;
}

 ::Dynamic ValueHelper_obj::validateValue( ::haxe::ui::components::NumberStepper stepper){
            	HX_STACKFRAME(&_hx_pos_71ca4e673ee6c097_421_validateValue)
HXLINE( 422)		 ::haxe::ui::components::TextField value = stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 423)		::String textValue = value->get_text();
HXLINE( 424)		 ::Dynamic min = stepper->get_min();
HXLINE( 425)		 ::Dynamic max = stepper->get_max();
HXLINE( 427)		textValue = ::StringTools_obj::replace(textValue,HX_(",",2c,00,00,00),HX_(".",2e,00,00,00));
HXLINE( 428)		textValue = ::StringTools_obj::replace(textValue,stepper->get_decimalSeparator(),HX_(".",2e,00,00,00));
HXLINE( 429)		 ::Dynamic parsedValue = ::Std_obj::parseFloat(textValue);
HXLINE( 431)		int valid;
HXDLIN( 431)		bool valid1;
HXDLIN( 431)		if (::hx::IsNotNull( textValue )) {
HXLINE( 431)			valid1 = (textValue == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 431)			valid1 = true;
            		}
HXDLIN( 431)		if (valid1) {
HXLINE( 431)			valid = 0;
            		}
            		else {
HXLINE( 431)			valid = (textValue.split(HX_(".",2e,00,00,00))->length - 1);
            		}
HXDLIN( 431)		bool valid2 = (valid <= 1);
HXLINE( 432)		bool _hx_tmp;
HXDLIN( 432)		if (::hx::IsNotNull( textValue )) {
HXLINE( 432)			_hx_tmp = (::StringTools_obj::trim(textValue) == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 432)			_hx_tmp = true;
            		}
HXDLIN( 432)		if (_hx_tmp) {
HXLINE( 433)			valid2 = false;
            		}
HXLINE( 436)		if (::Math_obj::isNaN(( (Float)(parsedValue) ))) {
HXLINE( 437)			valid2 = false;
            		}
HXLINE( 440)		bool _hx_tmp1;
HXDLIN( 440)		if (::hx::IsNotNull( min )) {
HXLINE( 440)			_hx_tmp1 = ::hx::IsLess( parsedValue,min );
            		}
            		else {
HXLINE( 440)			_hx_tmp1 = false;
            		}
HXDLIN( 440)		if (_hx_tmp1) {
HXLINE( 441)			valid2 = false;
            		}
HXLINE( 444)		bool _hx_tmp2;
HXDLIN( 444)		if (::hx::IsNotNull( max )) {
HXLINE( 444)			_hx_tmp2 = ::hx::IsGreater( parsedValue,max );
            		}
            		else {
HXLINE( 444)			_hx_tmp2 = false;
            		}
HXDLIN( 444)		if (_hx_tmp2) {
HXLINE( 445)			valid2 = false;
            		}
HXLINE( 448)		if ((valid2 == false)) {
HXLINE( 449)			parsedValue = null();
HXLINE( 450)			stepper->addClass(HX_("invalid-value",5b,aa,a4,00),null(),null());
            		}
            		else {
HXLINE( 452)			stepper->removeClass(HX_("invalid-value",5b,aa,a4,00),null(),null());
            		}
HXLINE( 455)		return parsedValue;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueHelper_obj,validateValue,return )

void ValueHelper_obj::incrementValue( ::haxe::ui::components::NumberStepper stepper){
            	HX_STACKFRAME(&_hx_pos_71ca4e673ee6c097_458_incrementValue)
HXLINE( 459)		 ::haxe::ui::components::TextField value = stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 460)		::String textValue = value->get_text();
HXLINE( 461)		 ::Dynamic min = stepper->get_min();
HXLINE( 462)		 ::Dynamic max = stepper->get_max();
HXLINE( 463)		Float newValue = ( (Float)(stepper->get_pos()) );
HXLINE( 465)		bool _hx_tmp;
HXDLIN( 465)		if (::hx::IsNotNull( textValue )) {
HXLINE( 465)			_hx_tmp = (::StringTools_obj::trim(textValue) == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 465)			_hx_tmp = true;
            		}
HXDLIN( 465)		if (_hx_tmp) {
HXLINE( 466)			if (::hx::IsNotNull( min )) {
HXLINE( 467)				newValue = ( (Float)(min) );
            			}
            		}
            		else {
HXLINE( 470)			newValue = (newValue + stepper->get_step());
            		}
HXLINE( 473)		bool _hx_tmp1;
HXDLIN( 473)		if (::hx::IsNotNull( max )) {
HXLINE( 473)			_hx_tmp1 = ::hx::IsGreater( newValue,max );
            		}
            		else {
HXLINE( 473)			_hx_tmp1 = false;
            		}
HXDLIN( 473)		if (_hx_tmp1) {
HXLINE( 474)			newValue = ( (Float)(max) );
            		}
HXLINE( 477)		stepper->set_pos(newValue);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueHelper_obj,incrementValue,(void))

void ValueHelper_obj::deincrementValue( ::haxe::ui::components::NumberStepper stepper){
            	HX_STACKFRAME(&_hx_pos_71ca4e673ee6c097_480_deincrementValue)
HXLINE( 481)		 ::haxe::ui::components::TextField value = stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 482)		::String textValue = value->get_text();
HXLINE( 483)		 ::Dynamic min = stepper->get_min();
HXLINE( 484)		Float newValue = ( (Float)(stepper->get_pos()) );
HXLINE( 486)		bool _hx_tmp;
HXDLIN( 486)		if (::hx::IsNotNull( textValue )) {
HXLINE( 486)			_hx_tmp = (::StringTools_obj::trim(textValue) == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 486)			_hx_tmp = true;
            		}
HXDLIN( 486)		if (_hx_tmp) {
HXLINE( 487)			if (::hx::IsNotNull( min )) {
HXLINE( 488)				newValue = ( (Float)(min) );
            			}
            		}
            		else {
HXLINE( 491)			newValue = (newValue - stepper->get_step());
            		}
HXLINE( 494)		bool _hx_tmp1;
HXDLIN( 494)		if (::hx::IsNotNull( min )) {
HXLINE( 494)			_hx_tmp1 = ::hx::IsLess( newValue,min );
            		}
            		else {
HXLINE( 494)			_hx_tmp1 = false;
            		}
HXDLIN( 494)		if (_hx_tmp1) {
HXLINE( 495)			newValue = ( (Float)(min) );
            		}
HXLINE( 498)		stepper->set_pos(newValue);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueHelper_obj,deincrementValue,(void))


ValueHelper_obj::ValueHelper_obj()
{
}

bool ValueHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"validateValue") ) { outValue = validateValue_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"incrementValue") ) { outValue = incrementValue_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"deincrementValue") ) { outValue = deincrementValue_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ValueHelper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ValueHelper_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ValueHelper_obj::__mClass;

static ::String ValueHelper_obj_sStaticFields[] = {
	HX_("validateValue",fb,3e,b8,5d),
	HX_("incrementValue",c2,1e,77,e5),
	HX_("deincrementValue",03,36,8d,7b),
	::String(null())
};

void ValueHelper_obj::__register()
{
	ValueHelper_obj _hx_dummy;
	ValueHelper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.ValueHelper",20,d1,8a,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValueHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ValueHelper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ValueHelper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValueHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValueHelper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper
