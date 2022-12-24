#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_MenuItemCreator
#include <haxe/ui/backend/hxwidgets/creators/MenuItemCreator.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuCheckBox
#include <haxe/ui/containers/menus/MenuCheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuOptionBox
#include <haxe/ui/containers/menus/MenuOptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuSeparator
#include <haxe/ui/containers/menus/MenuSeparator.h>
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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Menu
#include <hx/widgets/Menu.h>
#endif
#ifndef INCLUDED_hx_widgets_MenuItem
#include <hx/widgets/MenuItem.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2032bebc5f84c56a_10_new,"haxe.ui.backend.hxwidgets.creators.MenuItemCreator","new",0x3a2eaf00,"haxe.ui.backend.hxwidgets.creators.MenuItemCreator.new","haxe/ui/backend/hxwidgets/creators/MenuItemCreator.hx",10,0x7cd5fe0f)
HX_LOCAL_STACK_FRAME(_hx_pos_2032bebc5f84c56a_12_createWindow,"haxe.ui.backend.hxwidgets.creators.MenuItemCreator","createWindow",0xf246216c,"haxe.ui.backend.hxwidgets.creators.MenuItemCreator.createWindow","haxe/ui/backend/hxwidgets/creators/MenuItemCreator.hx",12,0x7cd5fe0f)
HX_LOCAL_STACK_FRAME(_hx_pos_2032bebc5f84c56a_11_boot,"haxe.ui.backend.hxwidgets.creators.MenuItemCreator","boot",0xa6c37192,"haxe.ui.backend.hxwidgets.creators.MenuItemCreator.boot","haxe/ui/backend/hxwidgets/creators/MenuItemCreator.hx",11,0x7cd5fe0f)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void MenuItemCreator_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2032bebc5f84c56a_10_new)
HXDLIN(  10)		super::__construct(component);
            	}

Dynamic MenuItemCreator_obj::__CreateEmpty() { return new MenuItemCreator_obj; }

void *MenuItemCreator_obj::_hx_vtable = 0;

Dynamic MenuItemCreator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItemCreator_obj > _hx_result = new MenuItemCreator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuItemCreator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3925cb80) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3925cb80;
	} else {
		return inClassId==(int)0x71e9c34e;
	}
}

 ::hx::widgets::Object MenuItemCreator_obj::createWindow( ::hx::widgets::Object parent,::hx::Null< int >  __o_style){
            		int style = __o_style.Default(0);
            	HX_STACKFRAME(&_hx_pos_2032bebc5f84c56a_12_createWindow)
HXLINE(  13)		 ::hx::widgets::Menu menu = ::hx::TCast<  ::hx::widgets::Menu >::cast(parent);
HXLINE(  14)		 ::hx::widgets::MenuItem menuItem = null();
HXLINE(  16)		int id = ::haxe::ui::backend::hxwidgets::creators::MenuItemCreator_obj::_menuId;
HXLINE(  17)		::haxe::ui::backend::hxwidgets::creators::MenuItemCreator_obj::_menuId++;
HXLINE(  20)		::String text = this->_component->get_text();
HXLINE(  21)		 ::haxe::ui::containers::menus::MenuItem item = ( ( ::haxe::ui::containers::menus::MenuItem)(this->_component) );
HXLINE(  22)		bool _hx_tmp;
HXDLIN(  22)		if (::hx::IsNotNull( item )) {
HXLINE(  22)			_hx_tmp = ::hx::IsNotNull( item->get_shortcutText() );
            		}
            		else {
HXLINE(  22)			_hx_tmp = false;
            		}
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  23)			text = (text + (HX_("\t",09,00,00,00) + item->get_shortcutText()));
            		}
HXLINE(  26)		if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::menus::MenuCheckBox >())) {
HXLINE(  27)			::haxe::ui::backend::hxwidgets::MenuItemHelper_obj::set(id,item);
HXLINE(  28)			menuItem = menu->appendCheckItem(id,text);
HXLINE(  29)			menuItem->check(::hx::TCast<  ::haxe::ui::containers::menus::MenuCheckBox >::cast(this->_component)->get_selected());
            		}
            		else {
HXLINE(  30)			if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::menus::MenuOptionBox >())) {
HXLINE(  31)				::haxe::ui::backend::hxwidgets::MenuItemHelper_obj::set(id,item);
HXLINE(  32)				menuItem = menu->appendRadioItem(id,text);
HXLINE(  33)				menuItem->check(::hx::TCast<  ::haxe::ui::containers::menus::MenuOptionBox >::cast(this->_component)->get_selected());
            			}
            			else {
HXLINE(  34)				if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::menus::MenuItem >())) {
HXLINE(  35)					::haxe::ui::backend::hxwidgets::MenuItemHelper_obj::set(id,item);
HXLINE(  36)					menuItem = menu->append(id,text);
            				}
            				else {
HXLINE(  37)					if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::menus::MenuSeparator >())) {
HXLINE(  38)						menuItem = menu->appendSeparator();
            					}
            				}
            			}
            		}
HXLINE(  41)		return menuItem;
            	}


int MenuItemCreator_obj::_menuId;


::hx::ObjectPtr< MenuItemCreator_obj > MenuItemCreator_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MenuItemCreator_obj > __this = new MenuItemCreator_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MenuItemCreator_obj > MenuItemCreator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MenuItemCreator_obj *__this = (MenuItemCreator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItemCreator_obj), true, "haxe.ui.backend.hxwidgets.creators.MenuItemCreator"));
	*(void **)__this = MenuItemCreator_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MenuItemCreator_obj::MenuItemCreator_obj()
{
}

::hx::Val MenuItemCreator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return ::hx::Val( createWindow_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MenuItemCreator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_menuId") ) { outValue = ( _menuId ); return true; }
	}
	return false;
}

bool MenuItemCreator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_menuId") ) { _menuId=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuItemCreator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MenuItemCreator_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &MenuItemCreator_obj::_menuId,HX_("_menuId",f9,7c,e4,73)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MenuItemCreator_obj_sMemberFields[] = {
	HX_("createWindow",0c,d4,e1,74),
	::String(null()) };

static void MenuItemCreator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuItemCreator_obj::_menuId,"_menuId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuItemCreator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuItemCreator_obj::_menuId,"_menuId");
};

#endif

::hx::Class MenuItemCreator_obj::__mClass;

static ::String MenuItemCreator_obj_sStaticFields[] = {
	HX_("_menuId",f9,7c,e4,73),
	::String(null())
};

void MenuItemCreator_obj::__register()
{
	MenuItemCreator_obj _hx_dummy;
	MenuItemCreator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.MenuItemCreator",0e,6f,f3,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuItemCreator_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuItemCreator_obj::__SetStatic;
	__mClass->mMarkFunc = MenuItemCreator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MenuItemCreator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItemCreator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItemCreator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuItemCreator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItemCreator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItemCreator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MenuItemCreator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2032bebc5f84c56a_11_boot)
HXDLIN(  11)		_menuId = 1;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
