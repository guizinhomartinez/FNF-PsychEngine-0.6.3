#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_MenuItemHelper
#include <haxe/ui/backend/hxwidgets/MenuItemHelper.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e10a571c0bcade80_8_set,"haxe.ui.backend.hxwidgets.MenuItemHelper","set",0xd4aa324f,"haxe.ui.backend.hxwidgets.MenuItemHelper.set","haxe/ui/backend/hxwidgets/MenuItemHelper.hx",8,0x50c4f0e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e10a571c0bcade80_12_get,"haxe.ui.backend.hxwidgets.MenuItemHelper","get",0xd4a11743,"haxe.ui.backend.hxwidgets.MenuItemHelper.get","haxe/ui/backend/hxwidgets/MenuItemHelper.hx",12,0x50c4f0e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e10a571c0bcade80_5_boot,"haxe.ui.backend.hxwidgets.MenuItemHelper","boot",0x350cc4e5,"haxe.ui.backend.hxwidgets.MenuItemHelper.boot","haxe/ui/backend/hxwidgets/MenuItemHelper.hx",5,0x50c4f0e1)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void MenuItemHelper_obj::__construct() { }

Dynamic MenuItemHelper_obj::__CreateEmpty() { return new MenuItemHelper_obj; }

void *MenuItemHelper_obj::_hx_vtable = 0;

Dynamic MenuItemHelper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItemHelper_obj > _hx_result = new MenuItemHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MenuItemHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5806a1c5;
}

 ::haxe::ds::IntMap MenuItemHelper_obj::_menuItems;

void MenuItemHelper_obj::set(int id, ::haxe::ui::containers::menus::MenuItem item){
            	HX_STACKFRAME(&_hx_pos_e10a571c0bcade80_8_set)
HXDLIN(   8)		::haxe::ui::backend::hxwidgets::MenuItemHelper_obj::_menuItems->set(id,item);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MenuItemHelper_obj,set,(void))

 ::haxe::ui::containers::menus::MenuItem MenuItemHelper_obj::get(int id){
            	HX_STACKFRAME(&_hx_pos_e10a571c0bcade80_12_get)
HXDLIN(  12)		return ( ( ::haxe::ui::containers::menus::MenuItem)(::haxe::ui::backend::hxwidgets::MenuItemHelper_obj::_menuItems->get(id)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MenuItemHelper_obj,get,return )


MenuItemHelper_obj::MenuItemHelper_obj()
{
}

bool MenuItemHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_menuItems") ) { outValue = ( _menuItems ); return true; }
	}
	return false;
}

bool MenuItemHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_menuItems") ) { _menuItems=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuItemHelper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MenuItemHelper_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &MenuItemHelper_obj::_menuItems,HX_("_menuItems",a2,91,87,b8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MenuItemHelper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuItemHelper_obj::_menuItems,"_menuItems");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuItemHelper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuItemHelper_obj::_menuItems,"_menuItems");
};

#endif

::hx::Class MenuItemHelper_obj::__mClass;

static ::String MenuItemHelper_obj_sStaticFields[] = {
	HX_("_menuItems",a2,91,87,b8),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null())
};

void MenuItemHelper_obj::__register()
{
	MenuItemHelper_obj _hx_dummy;
	MenuItemHelper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.MenuItemHelper",9b,dc,30,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuItemHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuItemHelper_obj::__SetStatic;
	__mClass->mMarkFunc = MenuItemHelper_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MenuItemHelper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MenuItemHelper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuItemHelper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItemHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItemHelper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MenuItemHelper_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_e10a571c0bcade80_5_boot)
HXDLIN(   5)		_menuItems =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
