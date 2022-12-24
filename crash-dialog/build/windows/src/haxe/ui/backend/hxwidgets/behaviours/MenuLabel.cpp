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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_MenuLabel
#include <haxe/ui/backend/hxwidgets/behaviours/MenuLabel.h>
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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c3874c80381a4a52_6_new,"haxe.ui.backend.hxwidgets.behaviours.MenuLabel","new",0x256d3b2a,"haxe.ui.backend.hxwidgets.behaviours.MenuLabel.new","haxe/ui/backend/hxwidgets/behaviours/MenuLabel.hx",6,0x4c518765)
HX_LOCAL_STACK_FRAME(_hx_pos_c3874c80381a4a52_7_validateData,"haxe.ui.backend.hxwidgets.behaviours.MenuLabel","validateData",0x168f41d6,"haxe.ui.backend.hxwidgets.behaviours.MenuLabel.validateData","haxe/ui/backend/hxwidgets/behaviours/MenuLabel.hx",7,0x4c518765)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void MenuLabel_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c3874c80381a4a52_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic MenuLabel_obj::__CreateEmpty() { return new MenuLabel_obj; }

void *MenuLabel_obj::_hx_vtable = 0;

Dynamic MenuLabel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuLabel_obj > _hx_result = new MenuLabel_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuLabel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x3dd8077a || inClassId==(int)0x7e17fa9f;
	}
}

void MenuLabel_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_c3874c80381a4a52_7_validateData)
HXLINE(   8)		 ::haxe::ui::containers::menus::MenuItem item = ::hx::TCast<  ::haxe::ui::containers::menus::MenuItem >::cast(this->_component);
HXLINE(   9)		::String label = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value);
HXLINE(  10)		if (::hx::IsNotNull( item->get_shortcutText() )) {
HXLINE(  11)			label = (label + (HX_("\t",09,00,00,00) + item->get_shortcutText()));
            		}
HXLINE(  13)		::hx::TCast<  ::hx::widgets::MenuItem >::cast(this->_component->object)->set_label(label);
            	}



::hx::ObjectPtr< MenuLabel_obj > MenuLabel_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MenuLabel_obj > __this = new MenuLabel_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MenuLabel_obj > MenuLabel_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MenuLabel_obj *__this = (MenuLabel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuLabel_obj), true, "haxe.ui.backend.hxwidgets.behaviours.MenuLabel"));
	*(void **)__this = MenuLabel_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MenuLabel_obj::MenuLabel_obj()
{
}

::hx::Val MenuLabel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuLabel_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuLabel_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuLabel_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class MenuLabel_obj::__mClass;

void MenuLabel_obj::__register()
{
	MenuLabel_obj _hx_dummy;
	MenuLabel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.MenuLabel",38,1e,da,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuLabel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuLabel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuLabel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuLabel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
