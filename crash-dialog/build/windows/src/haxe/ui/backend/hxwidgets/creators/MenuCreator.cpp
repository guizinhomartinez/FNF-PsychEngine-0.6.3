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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_MenuCreator
#include <haxe/ui/backend/hxwidgets/creators/MenuCreator.h>
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
#ifndef INCLUDED_hx_widgets_MenuBar
#include <hx/widgets/MenuBar.h>
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
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a4a5e67d7122de5_8_new,"haxe.ui.backend.hxwidgets.creators.MenuCreator","new",0x04cf5ad3,"haxe.ui.backend.hxwidgets.creators.MenuCreator.new","haxe/ui/backend/hxwidgets/creators/MenuCreator.hx",8,0x31c9f21c)
HX_LOCAL_STACK_FRAME(_hx_pos_0a4a5e67d7122de5_9_createWindow,"haxe.ui.backend.hxwidgets.creators.MenuCreator","createWindow",0x0f18e339,"haxe.ui.backend.hxwidgets.creators.MenuCreator.createWindow","haxe/ui/backend/hxwidgets/creators/MenuCreator.hx",9,0x31c9f21c)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void MenuCreator_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0a4a5e67d7122de5_8_new)
HXDLIN(   8)		super::__construct(component);
            	}

Dynamic MenuCreator_obj::__CreateEmpty() { return new MenuCreator_obj; }

void *MenuCreator_obj::_hx_vtable = 0;

Dynamic MenuCreator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuCreator_obj > _hx_result = new MenuCreator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuCreator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3925cb80) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3925cb80;
	} else {
		return inClassId==(int)0x63be29a1;
	}
}

 ::hx::widgets::Object MenuCreator_obj::createWindow( ::hx::widgets::Object parent,::hx::Null< int >  __o_style){
            		int style = __o_style.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_0a4a5e67d7122de5_9_createWindow)
HXLINE(  10)		 ::hx::widgets::Menu menu =  ::hx::widgets::Menu_obj::__alloc( HX_CTX ,null(),style);
HXLINE(  12)		if (::Std_obj::isOfType(parent,::hx::ClassOf< ::hx::widgets::MenuBar >())) {
HXLINE(  13)			::hx::TCast<  ::hx::widgets::MenuBar >::cast(parent)->append(menu,this->_component->get_text());
            		}
            		else {
HXLINE(  14)			if (::Std_obj::isOfType(parent,::hx::ClassOf< ::hx::widgets::Menu >())) {
HXLINE(  15)				::hx::TCast<  ::hx::widgets::Menu >::cast(parent)->appendSubMenu(menu,this->_component->get_text());
            			}
            		}
HXLINE(  18)		return menu;
            	}



::hx::ObjectPtr< MenuCreator_obj > MenuCreator_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MenuCreator_obj > __this = new MenuCreator_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MenuCreator_obj > MenuCreator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MenuCreator_obj *__this = (MenuCreator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuCreator_obj), true, "haxe.ui.backend.hxwidgets.creators.MenuCreator"));
	*(void **)__this = MenuCreator_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MenuCreator_obj::MenuCreator_obj()
{
}

::hx::Val MenuCreator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return ::hx::Val( createWindow_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuCreator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuCreator_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuCreator_obj_sMemberFields[] = {
	HX_("createWindow",0c,d4,e1,74),
	::String(null()) };

::hx::Class MenuCreator_obj::__mClass;

void MenuCreator_obj::__register()
{
	MenuCreator_obj _hx_dummy;
	MenuCreator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.MenuCreator",61,f5,16,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuCreator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuCreator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuCreator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuCreator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
