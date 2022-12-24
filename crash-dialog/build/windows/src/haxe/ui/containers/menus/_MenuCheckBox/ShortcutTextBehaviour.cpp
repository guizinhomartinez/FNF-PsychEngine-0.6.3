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
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuCheckBox_ShortcutTextBehaviour
#include <haxe/ui/containers/menus/_MenuCheckBox/ShortcutTextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6912b6020eb4f388_34_new,"haxe.ui.containers.menus._MenuCheckBox.ShortcutTextBehaviour","new",0xe10ee7ab,"haxe.ui.containers.menus._MenuCheckBox.ShortcutTextBehaviour.new","haxe/ui/containers/menus/MenuCheckBox.hx",34,0x8c3cb656)
HX_LOCAL_STACK_FRAME(_hx_pos_6912b6020eb4f388_35_validateData,"haxe.ui.containers.menus._MenuCheckBox.ShortcutTextBehaviour","validateData",0x4cde7d35,"haxe.ui.containers.menus._MenuCheckBox.ShortcutTextBehaviour.validateData","haxe/ui/containers/menus/MenuCheckBox.hx",35,0x8c3cb656)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuCheckBox{

void ShortcutTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6912b6020eb4f388_34_new)
HXDLIN(  34)		super::__construct(component);
            	}

Dynamic ShortcutTextBehaviour_obj::__CreateEmpty() { return new ShortcutTextBehaviour_obj; }

void *ShortcutTextBehaviour_obj::_hx_vtable = 0;

Dynamic ShortcutTextBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShortcutTextBehaviour_obj > _hx_result = new ShortcutTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShortcutTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x25207171) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25207171;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void ShortcutTextBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_6912b6020eb4f388_35_validateData)
HXLINE(  36)		 ::haxe::ui::components::Label label = this->_component->findComponent(HX_("menuitem-shortcut-label",a8,00,78,8b),null(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE(  37)		if (::hx::IsNotNull( label )) {
HXLINE(  38)			label->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            		}
            	}



::hx::ObjectPtr< ShortcutTextBehaviour_obj > ShortcutTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ShortcutTextBehaviour_obj > __this = new ShortcutTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ShortcutTextBehaviour_obj > ShortcutTextBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ShortcutTextBehaviour_obj *__this = (ShortcutTextBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShortcutTextBehaviour_obj), true, "haxe.ui.containers.menus._MenuCheckBox.ShortcutTextBehaviour"));
	*(void **)__this = ShortcutTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ShortcutTextBehaviour_obj::ShortcutTextBehaviour_obj()
{
}

::hx::Val ShortcutTextBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShortcutTextBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShortcutTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ShortcutTextBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ShortcutTextBehaviour_obj::__mClass;

void ShortcutTextBehaviour_obj::__register()
{
	ShortcutTextBehaviour_obj _hx_dummy;
	ShortcutTextBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._MenuCheckBox.ShortcutTextBehaviour",39,36,a9,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShortcutTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShortcutTextBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShortcutTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShortcutTextBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
} // end namespace _MenuCheckBox
