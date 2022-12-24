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
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Progress_Min
#include <haxe/ui/components/_Progress/Min.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d6198b63343776a5_74_new,"haxe.ui.components._Progress.Min","new",0x8bad2cdc,"haxe.ui.components._Progress.Min.new","haxe/ui/components/Progress.hx",74,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_d6198b63343776a5_75_set,"haxe.ui.components._Progress.Min","set",0x8bb0f81e,"haxe.ui.components._Progress.Min.set","haxe/ui/components/Progress.hx",75,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{
namespace _Progress{

void Min_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d6198b63343776a5_74_new)
HXDLIN(  74)		super::__construct(component);
            	}

Dynamic Min_obj::__CreateEmpty() { return new Min_obj; }

void *Min_obj::_hx_vtable = 0;

Dynamic Min_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Min_obj > _hx_result = new Min_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Min_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x2587a896) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2587a896;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

void Min_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_d6198b63343776a5_75_set)
HXLINE(  76)		 ::haxe::ui::components::Progress progress = ::hx::TCast<  ::haxe::ui::components::Progress >::cast(this->_component);
HXLINE(  78)		progress->set_start(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(value));
            	}



::hx::ObjectPtr< Min_obj > Min_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Min_obj > __this = new Min_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Min_obj > Min_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Min_obj *__this = (Min_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Min_obj), true, "haxe.ui.components._Progress.Min"));
	*(void **)__this = Min_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Min_obj::Min_obj()
{
}

::hx::Val Min_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Min_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Min_obj_sStaticStorageInfo = 0;
#endif

static ::String Min_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class Min_obj::__mClass;

void Min_obj::__register()
{
	Min_obj _hx_dummy;
	Min_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Progress.Min",ea,ce,ae,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Min_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Min_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Min_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Min_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Progress
