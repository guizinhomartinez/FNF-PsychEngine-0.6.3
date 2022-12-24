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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_MenuDisable
#include <haxe/ui/backend/hxwidgets/behaviours/MenuDisable.h>
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
#ifndef INCLUDED_hx_widgets_MenuItem
#include <hx/widgets/MenuItem.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b08cabb70dba7a9_6_new,"haxe.ui.backend.hxwidgets.behaviours.MenuDisable","new",0x377dba1e,"haxe.ui.backend.hxwidgets.behaviours.MenuDisable.new","haxe/ui/backend/hxwidgets/behaviours/MenuDisable.hx",6,0x959c18b1)
HX_LOCAL_STACK_FRAME(_hx_pos_2b08cabb70dba7a9_8_validateData,"haxe.ui.backend.hxwidgets.behaviours.MenuDisable","validateData",0x30794462,"haxe.ui.backend.hxwidgets.behaviours.MenuDisable.validateData","haxe/ui/backend/hxwidgets/behaviours/MenuDisable.hx",8,0x959c18b1)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void MenuDisable_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2b08cabb70dba7a9_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic MenuDisable_obj::__CreateEmpty() { return new MenuDisable_obj; }

void *MenuDisable_obj::_hx_vtable = 0;

Dynamic MenuDisable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuDisable_obj > _hx_result = new MenuDisable_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuDisable_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x16d750ee) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x16d750ee;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void MenuDisable_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_2b08cabb70dba7a9_8_validateData)
HXDLIN(   8)		 ::hx::widgets::MenuItem _hx_tmp = ::hx::TCast<  ::hx::widgets::MenuItem >::cast(this->_component->object);
HXDLIN(   8)		_hx_tmp->set_enable(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(::haxe::ui::util::_Variant::Variant_Impl__obj::invert(this->_value)));
            	}



::hx::ObjectPtr< MenuDisable_obj > MenuDisable_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MenuDisable_obj > __this = new MenuDisable_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MenuDisable_obj > MenuDisable_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MenuDisable_obj *__this = (MenuDisable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuDisable_obj), true, "haxe.ui.backend.hxwidgets.behaviours.MenuDisable"));
	*(void **)__this = MenuDisable_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MenuDisable_obj::MenuDisable_obj()
{
}

::hx::Val MenuDisable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuDisable_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuDisable_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuDisable_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class MenuDisable_obj::__mClass;

void MenuDisable_obj::__register()
{
	MenuDisable_obj _hx_dummy;
	MenuDisable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.MenuDisable",2c,13,9b,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuDisable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuDisable_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuDisable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuDisable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
