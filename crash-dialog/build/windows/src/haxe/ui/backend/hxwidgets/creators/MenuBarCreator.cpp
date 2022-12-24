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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_MenuBarCreator
#include <haxe/ui/backend/hxwidgets/creators/MenuBarCreator.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuBar
#include <haxe/ui/containers/menus/MenuBar.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_MenuBar
#include <hx/widgets/MenuBar.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_33878b79ecf78eb0_8_new,"haxe.ui.backend.hxwidgets.creators.MenuBarCreator","new",0x0e954076,"haxe.ui.backend.hxwidgets.creators.MenuBarCreator.new","haxe/ui/backend/hxwidgets/creators/MenuBarCreator.hx",8,0x15430afb)
HX_LOCAL_STACK_FRAME(_hx_pos_33878b79ecf78eb0_9_createWindow,"haxe.ui.backend.hxwidgets.creators.MenuBarCreator","createWindow",0x3158b136,"haxe.ui.backend.hxwidgets.creators.MenuBarCreator.createWindow","haxe/ui/backend/hxwidgets/creators/MenuBarCreator.hx",9,0x15430afb)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void MenuBarCreator_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_33878b79ecf78eb0_8_new)
HXDLIN(   8)		super::__construct(component);
            	}

Dynamic MenuBarCreator_obj::__CreateEmpty() { return new MenuBarCreator_obj; }

void *MenuBarCreator_obj::_hx_vtable = 0;

Dynamic MenuBarCreator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuBarCreator_obj > _hx_result = new MenuBarCreator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuBarCreator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37498144) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x37498144;
	} else {
		return inClassId==(int)0x3925cb80;
	}
}

 ::hx::widgets::Object MenuBarCreator_obj::createWindow( ::hx::widgets::Object parent,::hx::Null< int >  __o_style){
            		int style = __o_style.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_33878b79ecf78eb0_9_createWindow)
HXLINE(  10)		this->_component->set_includeInLayout(false);
HXLINE(  11)		 ::hx::widgets::MenuBar menuBar =  ::hx::widgets::MenuBar_obj::__alloc( HX_CTX ,style,null());
HXLINE(  12)		 ::haxe::ui::core::Screen _hx_tmp = ::haxe::ui::core::Screen_obj::get_instance();
HXDLIN(  12)		_hx_tmp->linkMenuBar(::hx::TCast<  ::haxe::ui::containers::menus::MenuBar >::cast(this->_component),menuBar);
HXLINE(  13)		return menuBar;
            	}



::hx::ObjectPtr< MenuBarCreator_obj > MenuBarCreator_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MenuBarCreator_obj > __this = new MenuBarCreator_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MenuBarCreator_obj > MenuBarCreator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MenuBarCreator_obj *__this = (MenuBarCreator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuBarCreator_obj), true, "haxe.ui.backend.hxwidgets.creators.MenuBarCreator"));
	*(void **)__this = MenuBarCreator_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MenuBarCreator_obj::MenuBarCreator_obj()
{
}

::hx::Val MenuBarCreator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return ::hx::Val( createWindow_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuBarCreator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuBarCreator_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuBarCreator_obj_sMemberFields[] = {
	HX_("createWindow",0c,d4,e1,74),
	::String(null()) };

::hx::Class MenuBarCreator_obj::__mClass;

void MenuBarCreator_obj::__register()
{
	MenuBarCreator_obj _hx_dummy;
	MenuBarCreator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.MenuBarCreator",84,8d,2a,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuBarCreator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuBarCreator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuBarCreator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuBarCreator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
