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
#ifndef INCLUDED_haxe_ui_components__DropDown_ShowDropDown
#include <haxe/ui/components/_DropDown/ShowDropDown.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f72592ce4ca3422c_90_new,"haxe.ui.components._DropDown.ShowDropDown","new",0xf17924e4,"haxe.ui.components._DropDown.ShowDropDown.new","haxe/ui/components/DropDown.hx",90,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_f72592ce4ca3422c_91_call,"haxe.ui.components._DropDown.ShowDropDown","call",0x513eb79a,"haxe.ui.components._DropDown.ShowDropDown.call","haxe/ui/components/DropDown.hx",91,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{
namespace _DropDown{

void ShowDropDown_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_f72592ce4ca3422c_90_new)
HXDLIN(  90)		super::__construct(component);
            	}

Dynamic ShowDropDown_obj::__CreateEmpty() { return new ShowDropDown_obj; }

void *ShowDropDown_obj::_hx_vtable = 0;

Dynamic ShowDropDown_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShowDropDown_obj > _hx_result = new ShowDropDown_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShowDropDown_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x002066da) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x002066da;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType ShowDropDown_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_f72592ce4ca3422c_91_call)
HXLINE(  92)		 ::haxe::ui::components::DropDownEvents events = ::hx::TCast<  ::haxe::ui::components::DropDownEvents >::cast(this->_component->_internalEvents);
HXLINE(  93)		events->showDropDown();
HXLINE(  94)		return null();
            	}



::hx::ObjectPtr< ShowDropDown_obj > ShowDropDown_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ShowDropDown_obj > __this = new ShowDropDown_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ShowDropDown_obj > ShowDropDown_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ShowDropDown_obj *__this = (ShowDropDown_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShowDropDown_obj), true, "haxe.ui.components._DropDown.ShowDropDown"));
	*(void **)__this = ShowDropDown_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ShowDropDown_obj::ShowDropDown_obj()
{
}

::hx::Val ShowDropDown_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShowDropDown_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShowDropDown_obj_sStaticStorageInfo = 0;
#endif

static ::String ShowDropDown_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class ShowDropDown_obj::__mClass;

void ShowDropDown_obj::__register()
{
	ShowDropDown_obj _hx_dummy;
	ShowDropDown_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._DropDown.ShowDropDown",f2,22,0c,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShowDropDown_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShowDropDown_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShowDropDown_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShowDropDown_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _DropDown
