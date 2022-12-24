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
#ifndef INCLUDED_haxe_ui_components__Calendar_NextYearBehaviour
#include <haxe/ui/components/_Calendar/NextYearBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_956c2550162f76ad_107_new,"haxe.ui.components._Calendar.NextYearBehaviour","new",0x7eead268,"haxe.ui.components._Calendar.NextYearBehaviour.new","haxe/ui/components/Calendar.hx",107,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_956c2550162f76ad_108_call,"haxe.ui.components._Calendar.NextYearBehaviour","call",0x8744dd96,"haxe.ui.components._Calendar.NextYearBehaviour.call","haxe/ui/components/Calendar.hx",108,0xa4f8a419)
namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{

void NextYearBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_956c2550162f76ad_107_new)
HXDLIN( 107)		super::__construct(component);
            	}

Dynamic NextYearBehaviour_obj::__CreateEmpty() { return new NextYearBehaviour_obj; }

void *NextYearBehaviour_obj::_hx_vtable = 0;

Dynamic NextYearBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NextYearBehaviour_obj > _hx_result = new NextYearBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NextYearBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x24ac1560) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x24ac1560;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType NextYearBehaviour_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_956c2550162f76ad_108_call)
HXLINE( 109)		 ::haxe::ui::components::Calendar calendar = ::hx::TCast<  ::haxe::ui::components::Calendar >::cast(this->_component);
HXLINE( 110)		calendar->set_date(::haxe::ui::components::_Calendar::DateUtils_obj::nextYear(calendar->get_date()));
HXLINE( 111)		return null();
            	}



::hx::ObjectPtr< NextYearBehaviour_obj > NextYearBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< NextYearBehaviour_obj > __this = new NextYearBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< NextYearBehaviour_obj > NextYearBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NextYearBehaviour_obj *__this = (NextYearBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NextYearBehaviour_obj), true, "haxe.ui.components._Calendar.NextYearBehaviour"));
	*(void **)__this = NextYearBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NextYearBehaviour_obj::NextYearBehaviour_obj()
{
}

::hx::Val NextYearBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NextYearBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NextYearBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String NextYearBehaviour_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class NextYearBehaviour_obj::__mClass;

void NextYearBehaviour_obj::__register()
{
	NextYearBehaviour_obj _hx_dummy;
	NextYearBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Calendar.NextYearBehaviour",76,be,2f,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NextYearBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NextYearBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NextYearBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NextYearBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Calendar
