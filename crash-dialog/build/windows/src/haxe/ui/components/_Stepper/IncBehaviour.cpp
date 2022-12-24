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
#ifndef INCLUDED_haxe_ui_components__Stepper_IncBehaviour
#include <haxe/ui/components/_Stepper/IncBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2b8123e341750227_53_new,"haxe.ui.components._Stepper.IncBehaviour","new",0x2c35ea47,"haxe.ui.components._Stepper.IncBehaviour.new","haxe/ui/components/Stepper.hx",53,0x78893714)
HX_LOCAL_STACK_FRAME(_hx_pos_2b8123e341750227_54_call,"haxe.ui.components._Stepper.IncBehaviour","call",0x7baea8d7,"haxe.ui.components._Stepper.IncBehaviour.call","haxe/ui/components/Stepper.hx",54,0x78893714)
namespace haxe{
namespace ui{
namespace components{
namespace _Stepper{

void IncBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2b8123e341750227_53_new)
HXDLIN(  53)		super::__construct(component);
            	}

Dynamic IncBehaviour_obj::__CreateEmpty() { return new IncBehaviour_obj; }

void *IncBehaviour_obj::_hx_vtable = 0;

Dynamic IncBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IncBehaviour_obj > _hx_result = new IncBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IncBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x79c185a9;
	}
}

 ::haxe::ui::util::VariantType IncBehaviour_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_2b8123e341750227_54_call)
HXLINE(  55)		 ::haxe::ui::components::Stepper stepper = ::hx::TCast<  ::haxe::ui::components::Stepper >::cast(this->_component);
HXLINE(  56)		Float newPos = stepper->get_pos();
HXLINE(  57)		newPos = (newPos + stepper->get_step());
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		if (::hx::IsNotNull( stepper->get_max() )) {
HXLINE(  59)			_hx_tmp = ::hx::IsGreater( newPos,stepper->get_max() );
            		}
            		else {
HXLINE(  59)			_hx_tmp = false;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			newPos = ( (Float)(stepper->get_max()) );
            		}
HXLINE(  63)		if (::hx::IsNotNull( stepper->get_precision() )) {
HXLINE(  64)			int precision = ( (int)(stepper->get_precision()) );
HXDLIN(  64)			newPos = (( (Float)(::Math_obj::round((newPos * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ))))) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
            		}
HXLINE(  67)		stepper->set_pos(newPos);
HXLINE(  68)		return null();
            	}



::hx::ObjectPtr< IncBehaviour_obj > IncBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< IncBehaviour_obj > __this = new IncBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< IncBehaviour_obj > IncBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	IncBehaviour_obj *__this = (IncBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IncBehaviour_obj), true, "haxe.ui.components._Stepper.IncBehaviour"));
	*(void **)__this = IncBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

IncBehaviour_obj::IncBehaviour_obj()
{
}

::hx::Val IncBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IncBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IncBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String IncBehaviour_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class IncBehaviour_obj::__mClass;

void IncBehaviour_obj::__register()
{
	IncBehaviour_obj _hx_dummy;
	IncBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Stepper.IncBehaviour",d5,ba,bb,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IncBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IncBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IncBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IncBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Stepper
