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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_MenuItemBitmap
#include <haxe/ui/backend/hxwidgets/behaviours/MenuItemBitmap.h>
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
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_MenuItem
#include <hx/widgets/MenuItem.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b05cf61cd9a4dc2_7_new,"haxe.ui.backend.hxwidgets.behaviours.MenuItemBitmap","new",0x1f359a90,"haxe.ui.backend.hxwidgets.behaviours.MenuItemBitmap.new","haxe/ui/backend/hxwidgets/behaviours/MenuItemBitmap.hx",7,0xd6d64ea1)
HX_LOCAL_STACK_FRAME(_hx_pos_2b05cf61cd9a4dc2_8_validateData,"haxe.ui.backend.hxwidgets.behaviours.MenuItemBitmap","validateData",0xe3eec5b0,"haxe.ui.backend.hxwidgets.behaviours.MenuItemBitmap.validateData","haxe/ui/backend/hxwidgets/behaviours/MenuItemBitmap.hx",8,0xd6d64ea1)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void MenuItemBitmap_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2b05cf61cd9a4dc2_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic MenuItemBitmap_obj::__CreateEmpty() { return new MenuItemBitmap_obj; }

void *MenuItemBitmap_obj::_hx_vtable = 0;

Dynamic MenuItemBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItemBitmap_obj > _hx_result = new MenuItemBitmap_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuItemBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x309c9a1c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x309c9a1c;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void MenuItemBitmap_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_2b05cf61cd9a4dc2_8_validateData)
HXLINE(   9)		 ::hx::widgets::Bitmap bmp = ::hx::widgets::Bitmap_obj::fromHaxeResource(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
HXLINE(  10)		 ::hx::widgets::MenuItem item = ::hx::TCast<  ::hx::widgets::MenuItem >::cast(this->_component->object);
HXLINE(  11)		item->set_bitmap(bmp);
            	}



::hx::ObjectPtr< MenuItemBitmap_obj > MenuItemBitmap_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MenuItemBitmap_obj > __this = new MenuItemBitmap_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MenuItemBitmap_obj > MenuItemBitmap_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MenuItemBitmap_obj *__this = (MenuItemBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItemBitmap_obj), true, "haxe.ui.backend.hxwidgets.behaviours.MenuItemBitmap"));
	*(void **)__this = MenuItemBitmap_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MenuItemBitmap_obj::MenuItemBitmap_obj()
{
}

::hx::Val MenuItemBitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuItemBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuItemBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItemBitmap_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class MenuItemBitmap_obj::__mClass;

void MenuItemBitmap_obj::__register()
{
	MenuItemBitmap_obj _hx_dummy;
	MenuItemBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.MenuItemBitmap",9e,52,19,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItemBitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItemBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItemBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItemBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
