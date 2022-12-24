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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Stepper
#include <haxe/ui/components/Stepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Stepper_DeincBehaviour
#include <haxe/ui/components/_Stepper/DeincBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21d158419e3b5e77_73_new,"haxe.ui.components._Stepper.DeincBehaviour","new",0xa3b35548,"haxe.ui.components._Stepper.DeincBehaviour.new","haxe/ui/components/Stepper.hx",73,0x78893714)
HX_LOCAL_STACK_FRAME(_hx_pos_21d158419e3b5e77_74_call,"haxe.ui.components._Stepper.DeincBehaviour","call",0x91eedeb6,"haxe.ui.components._Stepper.DeincBehaviour.call","haxe/ui/components/Stepper.hx",74,0x78893714)
namespace haxe{
namespace ui{
namespace components{
namespace _Stepper{

void DeincBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_21d158419e3b5e77_73_new)
HXDLIN(  73)		super::__construct(component);
            	}

Dynamic DeincBehaviour_obj::__CreateEmpty() { return new DeincBehaviour_obj; }

void *DeincBehaviour_obj::_hx_vtable = 0;

Dynamic DeincBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DeincBehaviour_obj > _hx_result = new DeincBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DeincBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03124896) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x03124896;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType DeincBehaviour_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_21d158419e3b5e77_74_call)
HXLINE(  75)		 ::haxe::ui::components::Stepper stepper = ::hx::TCast<  ::haxe::ui::components::Stepper >::cast(this->_component);
HXLINE(  76)		Float newPos = stepper->get_pos();
HXLINE(  77)		newPos = (newPos - stepper->get_step());
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		if (::hx::IsNotNull( stepper->get_min() )) {
HXLINE(  79)			_hx_tmp = ::hx::IsLess( newPos,stepper->get_min() );
            		}
            		else {
HXLINE(  79)			_hx_tmp = false;
            		}
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  80)			newPos = ( (Float)(stepper->get_min()) );
            		}
HXLINE(  83)		if (::hx::IsNotNull( stepper->get_precision() )) {
HXLINE(  84)			int precision = ( (int)(stepper->get_precision()) );
HXDLIN(  84)			newPos = (( (Float)(::Math_obj::round((newPos * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ))))) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
            		}
HXLINE(  87)		stepper->set_pos(newPos);
HXLINE(  88)		return null();
            	}



::hx::ObjectPtr< DeincBehaviour_obj > DeincBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DeincBehaviour_obj > __this = new DeincBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DeincBehaviour_obj > DeincBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DeincBehaviour_obj *__this = (DeincBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DeincBehaviour_obj), true, "haxe.ui.components._Stepper.DeincBehaviour"));
	*(void **)__this = DeincBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DeincBehaviour_obj::DeincBehaviour_obj()
{
}

::hx::Val DeincBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DeincBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DeincBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DeincBehaviour_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class DeincBehaviour_obj::__mClass;

void DeincBehaviour_obj::__register()
{
	DeincBehaviour_obj _hx_dummy;
	DeincBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Stepper.DeincBehaviour",56,51,05,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DeincBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DeincBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DeincBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DeincBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Stepper
