#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
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
#ifndef INCLUDED_haxe_ui_components_Calendar
#include <haxe/ui/components/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_DateUtils
#include <haxe/ui/components/_Calendar/DateUtils.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_PreviousMonthBehaviour
#include <haxe/ui/components/_Calendar/PreviousMonthBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a374567945f3d622_83_new,"haxe.ui.components._Calendar.PreviousMonthBehaviour","new",0x9f9eac9d,"haxe.ui.components._Calendar.PreviousMonthBehaviour.new","haxe/ui/components/Calendar.hx",83,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_a374567945f3d622_84_call,"haxe.ui.components._Calendar.PreviousMonthBehaviour","call",0x03eff1c1,"haxe.ui.components._Calendar.PreviousMonthBehaviour.call","haxe/ui/components/Calendar.hx",84,0xa4f8a419)
namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{

void PreviousMonthBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_a374567945f3d622_83_new)
HXDLIN(  83)		super::__construct(component);
            	}

Dynamic PreviousMonthBehaviour_obj::__CreateEmpty() { return new PreviousMonthBehaviour_obj; }

void *PreviousMonthBehaviour_obj::_hx_vtable = 0;

Dynamic PreviousMonthBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PreviousMonthBehaviour_obj > _hx_result = new PreviousMonthBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PreviousMonthBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x129ea455) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x129ea455;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType PreviousMonthBehaviour_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_a374567945f3d622_84_call)
HXLINE(  85)		 ::haxe::ui::components::Calendar calendar = ::hx::TCast<  ::haxe::ui::components::Calendar >::cast(this->_component);
HXLINE(  86)		calendar->set_date(::haxe::ui::components::_Calendar::DateUtils_obj::previousMonth(calendar->get_date()));
HXLINE(  87)		return null();
            	}



::hx::ObjectPtr< PreviousMonthBehaviour_obj > PreviousMonthBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PreviousMonthBehaviour_obj > __this = new PreviousMonthBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PreviousMonthBehaviour_obj > PreviousMonthBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PreviousMonthBehaviour_obj *__this = (PreviousMonthBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PreviousMonthBehaviour_obj), true, "haxe.ui.components._Calendar.PreviousMonthBehaviour"));
	*(void **)__this = PreviousMonthBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PreviousMonthBehaviour_obj::PreviousMonthBehaviour_obj()
{
}

::hx::Val PreviousMonthBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PreviousMonthBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PreviousMonthBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String PreviousMonthBehaviour_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class PreviousMonthBehaviour_obj::__mClass;

void PreviousMonthBehaviour_obj::__register()
{
	PreviousMonthBehaviour_obj _hx_dummy;
	PreviousMonthBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Calendar.PreviousMonthBehaviour",2b,1a,13,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PreviousMonthBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PreviousMonthBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PreviousMonthBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PreviousMonthBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Calendar
