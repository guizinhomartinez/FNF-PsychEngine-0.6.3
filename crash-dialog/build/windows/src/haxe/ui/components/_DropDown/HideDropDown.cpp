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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownEvents
#include <haxe/ui/components/DropDownEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_HideDropDown
#include <haxe/ui/components/_DropDown/HideDropDown.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9a4f2954f8eeed94_80_new,"haxe.ui.components._DropDown.HideDropDown","new",0xb2679829,"haxe.ui.components._DropDown.HideDropDown.new","haxe/ui/components/DropDown.hx",80,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_9a4f2954f8eeed94_81_call,"haxe.ui.components._DropDown.HideDropDown","call",0x60f520b5,"haxe.ui.components._DropDown.HideDropDown.call","haxe/ui/components/DropDown.hx",81,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{
namespace _DropDown{

void HideDropDown_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_9a4f2954f8eeed94_80_new)
HXDLIN(  80)		super::__construct(component);
            	}

Dynamic HideDropDown_obj::__CreateEmpty() { return new HideDropDown_obj; }

void *HideDropDown_obj::_hx_vtable = 0;

Dynamic HideDropDown_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HideDropDown_obj > _hx_result = new HideDropDown_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HideDropDown_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x286a9313) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x286a9313;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType HideDropDown_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_9a4f2954f8eeed94_81_call)
HXLINE(  82)		 ::haxe::ui::components::DropDownEvents events = ::hx::TCast<  ::haxe::ui::components::DropDownEvents >::cast(this->_component->_internalEvents);
HXLINE(  83)		events->hideDropDown();
HXLINE(  84)		return null();
            	}



::hx::ObjectPtr< HideDropDown_obj > HideDropDown_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< HideDropDown_obj > __this = new HideDropDown_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< HideDropDown_obj > HideDropDown_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	HideDropDown_obj *__this = (HideDropDown_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HideDropDown_obj), true, "haxe.ui.components._DropDown.HideDropDown"));
	*(void **)__this = HideDropDown_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

HideDropDown_obj::HideDropDown_obj()
{
}

::hx::Val HideDropDown_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HideDropDown_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HideDropDown_obj_sStaticStorageInfo = 0;
#endif

static ::String HideDropDown_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class HideDropDown_obj::__mClass;

void HideDropDown_obj::__register()
{
	HideDropDown_obj _hx_dummy;
	HideDropDown_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._DropDown.HideDropDown",b7,4f,84,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HideDropDown_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HideDropDown_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HideDropDown_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HideDropDown_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _DropDown
