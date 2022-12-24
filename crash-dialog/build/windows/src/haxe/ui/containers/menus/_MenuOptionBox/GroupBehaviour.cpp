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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuOptionBox_GroupBehaviour
#include <haxe/ui/containers/menus/_MenuOptionBox/GroupBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8171369b78303cea_20_new,"haxe.ui.containers.menus._MenuOptionBox.GroupBehaviour","new",0xe1234fe2,"haxe.ui.containers.menus._MenuOptionBox.GroupBehaviour.new","haxe/ui/containers/menus/MenuOptionBox.hx",20,0x896244ad)
HX_LOCAL_STACK_FRAME(_hx_pos_8171369b78303cea_21_validateData,"haxe.ui.containers.menus._MenuOptionBox.GroupBehaviour","validateData",0x3afcd61e,"haxe.ui.containers.menus._MenuOptionBox.GroupBehaviour.validateData","haxe/ui/containers/menus/MenuOptionBox.hx",21,0x896244ad)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuOptionBox{

void GroupBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_8171369b78303cea_20_new)
HXDLIN(  20)		super::__construct(component);
            	}

Dynamic GroupBehaviour_obj::__CreateEmpty() { return new GroupBehaviour_obj; }

void *GroupBehaviour_obj::_hx_vtable = 0;

Dynamic GroupBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GroupBehaviour_obj > _hx_result = new GroupBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GroupBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x39d85ed6) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x39d85ed6;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void GroupBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_8171369b78303cea_21_validateData)
HXLINE(  22)		 ::haxe::ui::components::OptionBox optionbox = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::OptionBox >(),false,null()).StaticCast<  ::haxe::ui::components::OptionBox >();
HXLINE(  23)		if (::hx::IsNull( optionbox )) {
HXLINE(  24)			optionbox =  ::haxe::ui::components::OptionBox_obj::__alloc( HX_CTX );
HXLINE(  25)			optionbox->set_styleNames(HX_("menuitem-optionbox",9b,0c,7d,bf));
HXLINE(  26)			optionbox->set_scriptAccess(false);
HXLINE(  27)			this->_component->addComponent(optionbox);
            		}
HXLINE(  30)		optionbox->set_componentGroup(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            	}



::hx::ObjectPtr< GroupBehaviour_obj > GroupBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< GroupBehaviour_obj > __this = new GroupBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< GroupBehaviour_obj > GroupBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	GroupBehaviour_obj *__this = (GroupBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GroupBehaviour_obj), true, "haxe.ui.containers.menus._MenuOptionBox.GroupBehaviour"));
	*(void **)__this = GroupBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

GroupBehaviour_obj::GroupBehaviour_obj()
{
}

::hx::Val GroupBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GroupBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GroupBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String GroupBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class GroupBehaviour_obj::__mClass;

void GroupBehaviour_obj::__register()
{
	GroupBehaviour_obj _hx_dummy;
	GroupBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._MenuOptionBox.GroupBehaviour",f0,76,49,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GroupBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GroupBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GroupBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GroupBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
} // end namespace _MenuOptionBox
