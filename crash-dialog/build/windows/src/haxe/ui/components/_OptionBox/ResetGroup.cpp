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
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxGroups
#include <haxe/ui/components/OptionBoxGroups.h>
#endif
#ifndef INCLUDED_haxe_ui_components__OptionBox_ResetGroup
#include <haxe/ui/components/_OptionBox/ResetGroup.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8816803964aceebb_63_new,"haxe.ui.components._OptionBox.ResetGroup","new",0x1f62e013,"haxe.ui.components._OptionBox.ResetGroup.new","haxe/ui/components/OptionBox.hx",63,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_8816803964aceebb_64_call,"haxe.ui.components._OptionBox.ResetGroup","call",0x4fd8c58b,"haxe.ui.components._OptionBox.ResetGroup.call","haxe/ui/components/OptionBox.hx",64,0x8f34a36f)
namespace haxe{
namespace ui{
namespace components{
namespace _OptionBox{

void ResetGroup_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_8816803964aceebb_63_new)
HXDLIN(  63)		super::__construct(component);
            	}

Dynamic ResetGroup_obj::__CreateEmpty() { return new ResetGroup_obj; }

void *ResetGroup_obj::_hx_vtable = 0;

Dynamic ResetGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResetGroup_obj > _hx_result = new ResetGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ResetGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x75bf9bff;
	}
}

 ::haxe::ui::util::VariantType ResetGroup_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_8816803964aceebb_64_call)
HXLINE(  65)		 ::haxe::ui::components::OptionBox optionbox = ::hx::TCast<  ::haxe::ui::components::OptionBox >::cast(this->_component);
HXLINE(  66)		 ::haxe::ui::components::OptionBoxGroups _hx_tmp = ::haxe::ui::components::OptionBoxGroups_obj::get_instance();
HXDLIN(  66)		_hx_tmp->reset(optionbox->get_componentGroup());
HXLINE(  67)		return null();
            	}



::hx::ObjectPtr< ResetGroup_obj > ResetGroup_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ResetGroup_obj > __this = new ResetGroup_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ResetGroup_obj > ResetGroup_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ResetGroup_obj *__this = (ResetGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResetGroup_obj), true, "haxe.ui.components._OptionBox.ResetGroup"));
	*(void **)__this = ResetGroup_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ResetGroup_obj::ResetGroup_obj()
{
}

::hx::Val ResetGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ResetGroup_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ResetGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String ResetGroup_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class ResetGroup_obj::__mClass;

void ResetGroup_obj::__register()
{
	ResetGroup_obj _hx_dummy;
	ResetGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._OptionBox.ResetGroup",a1,da,ae,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResetGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResetGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResetGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResetGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _OptionBox
