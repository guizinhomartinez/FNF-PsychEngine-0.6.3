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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_Menu
#include <haxe/ui/containers/menus/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvent
#include <haxe/ui/containers/menus/MenuEvent.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b1e6dcd73aecd082_18_new,"haxe.ui.containers.menus.MenuEvent","new",0xb7984089,"haxe.ui.containers.menus.MenuEvent.new","haxe/ui/containers/menus/Menu.hx",18,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_b1e6dcd73aecd082_30_clone,"haxe.ui.containers.menus.MenuEvent","clone",0xadc29fc6,"haxe.ui.containers.menus.MenuEvent.clone","haxe/ui/containers/menus/Menu.hx",30,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_b1e6dcd73aecd082_19_boot,"haxe.ui.containers.menus.MenuEvent","boot",0xe5b937e9,"haxe.ui.containers.menus.MenuEvent.boot","haxe/ui/containers/menus/Menu.hx",19,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_b1e6dcd73aecd082_20_boot,"haxe.ui.containers.menus.MenuEvent","boot",0xe5b937e9,"haxe.ui.containers.menus.MenuEvent.boot","haxe/ui/containers/menus/Menu.hx",20,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_b1e6dcd73aecd082_21_boot,"haxe.ui.containers.menus.MenuEvent","boot",0xe5b937e9,"haxe.ui.containers.menus.MenuEvent.boot","haxe/ui/containers/menus/Menu.hx",21,0x5a36fdb9)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{

void MenuEvent_obj::__construct(::String type, ::Dynamic __o_bubble, ::Dynamic data){
            		 ::Dynamic bubble = __o_bubble;
            		if (::hx::IsNull(__o_bubble)) bubble = false;
            	HX_STACKFRAME(&_hx_pos_b1e6dcd73aecd082_18_new)
HXLINE(  24)		this->menuItem = null();
HXLINE(  23)		this->menu = null();
HXLINE(  27)		super::__construct(type,true,data);
            	}

Dynamic MenuEvent_obj::__CreateEmpty() { return new MenuEvent_obj; }

void *MenuEvent_obj::_hx_vtable = 0;

Dynamic MenuEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuEvent_obj > _hx_result = new MenuEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MenuEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x2e09615f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2e09615f;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent MenuEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b1e6dcd73aecd082_30_clone)
HXLINE(  31)		 ::haxe::ui::containers::menus::MenuEvent c =  ::haxe::ui::containers::menus::MenuEvent_obj::__alloc( HX_CTX ,this->type,null(),null());
HXLINE(  32)		c->menu = this->menu;
HXLINE(  33)		c->menuItem = this->menuItem;
HXLINE(  34)		c->type = this->type;
HXLINE(  35)		c->bubble = this->bubble;
HXLINE(  36)		c->target = this->target;
HXLINE(  37)		c->data = this->data;
HXLINE(  38)		c->canceled = this->canceled;
HXLINE(  39)		this->postClone(c);
HXLINE(  40)		return c;
            	}


::String MenuEvent_obj::MENU_SELECTED;

::String MenuEvent_obj::MENU_OPENED;

::String MenuEvent_obj::MENU_CLOSED;


::hx::ObjectPtr< MenuEvent_obj > MenuEvent_obj::__new(::String type, ::Dynamic __o_bubble, ::Dynamic data) {
	::hx::ObjectPtr< MenuEvent_obj > __this = new MenuEvent_obj();
	__this->__construct(type,__o_bubble,data);
	return __this;
}

::hx::ObjectPtr< MenuEvent_obj > MenuEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic __o_bubble, ::Dynamic data) {
	MenuEvent_obj *__this = (MenuEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuEvent_obj), true, "haxe.ui.containers.menus.MenuEvent"));
	*(void **)__this = MenuEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubble,data);
	return __this;
}

MenuEvent_obj::MenuEvent_obj()
{
}

void MenuEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuEvent);
	HX_MARK_MEMBER_NAME(menu,"menu");
	HX_MARK_MEMBER_NAME(menuItem,"menuItem");
	 ::haxe::ui::events::UIEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menu,"menu");
	HX_VISIT_MEMBER_NAME(menuItem,"menuItem");
	 ::haxe::ui::events::UIEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"menu") ) { return ::hx::Val( menu ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuItem") ) { return ::hx::Val( menuItem ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"menu") ) { menu=inValue.Cast<  ::haxe::ui::containers::menus::Menu >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuItem") ) { menuItem=inValue.Cast<  ::haxe::ui::containers::menus::MenuItem >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menu",9f,45,59,48));
	outFields->push(HX_("menuItem",52,f2,2e,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::menus::Menu */ ,(int)offsetof(MenuEvent_obj,menu),HX_("menu",9f,45,59,48)},
	{::hx::fsObject /*  ::haxe::ui::containers::menus::MenuItem */ ,(int)offsetof(MenuEvent_obj,menuItem),HX_("menuItem",52,f2,2e,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MenuEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MenuEvent_obj::MENU_SELECTED,HX_("MENU_SELECTED",3b,78,85,22)},
	{::hx::fsString,(void *) &MenuEvent_obj::MENU_OPENED,HX_("MENU_OPENED",89,94,d4,1c)},
	{::hx::fsString,(void *) &MenuEvent_obj::MENU_CLOSED,HX_("MENU_CLOSED",8c,db,91,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MenuEvent_obj_sMemberFields[] = {
	HX_("menu",9f,45,59,48),
	HX_("menuItem",52,f2,2e,4c),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void MenuEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuEvent_obj::MENU_SELECTED,"MENU_SELECTED");
	HX_MARK_MEMBER_NAME(MenuEvent_obj::MENU_OPENED,"MENU_OPENED");
	HX_MARK_MEMBER_NAME(MenuEvent_obj::MENU_CLOSED,"MENU_CLOSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::MENU_SELECTED,"MENU_SELECTED");
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::MENU_OPENED,"MENU_OPENED");
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::MENU_CLOSED,"MENU_CLOSED");
};

#endif

::hx::Class MenuEvent_obj::__mClass;

static ::String MenuEvent_obj_sStaticFields[] = {
	HX_("MENU_SELECTED",3b,78,85,22),
	HX_("MENU_OPENED",89,94,d4,1c),
	HX_("MENU_CLOSED",8c,db,91,09),
	::String(null())
};

void MenuEvent_obj::__register()
{
	MenuEvent_obj _hx_dummy;
	MenuEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus.MenuEvent",17,48,61,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MenuEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MenuEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MenuEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b1e6dcd73aecd082_19_boot)
HXDLIN(  19)		MENU_SELECTED = HX_("menuselected",fa,a6,03,90);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1e6dcd73aecd082_20_boot)
HXDLIN(  20)		MENU_OPENED = HX_("menuopened",88,29,84,cf);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1e6dcd73aecd082_21_boot)
HXDLIN(  21)		MENU_CLOSED = HX_("menuclosed",8b,70,41,bc);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
