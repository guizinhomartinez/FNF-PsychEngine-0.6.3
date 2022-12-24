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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_MenuBuilder
#include <haxe/ui/backend/hxwidgets/builders/MenuBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
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
#ifndef INCLUDED_hx_widgets_Frame
#include <hx/widgets/Frame.h>
#endif
#ifndef INCLUDED_hx_widgets_Menu
#include <hx/widgets/Menu.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2899711b6bd2adc3_7_new,"haxe.ui.backend.hxwidgets.builders.MenuBuilder","new",0x5bfcd173,"haxe.ui.backend.hxwidgets.builders.MenuBuilder.new","haxe/ui/backend/hxwidgets/builders/MenuBuilder.hx",7,0xe1d22f7c)
HX_LOCAL_STACK_FRAME(_hx_pos_2899711b6bd2adc3_8_show,"haxe.ui.backend.hxwidgets.builders.MenuBuilder","show",0x248ac48a,"haxe.ui.backend.hxwidgets.builders.MenuBuilder.show","haxe/ui/backend/hxwidgets/builders/MenuBuilder.hx",8,0xe1d22f7c)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{

void MenuBuilder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2899711b6bd2adc3_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic MenuBuilder_obj::__CreateEmpty() { return new MenuBuilder_obj; }

void *MenuBuilder_obj::_hx_vtable = 0;

Dynamic MenuBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuBuilder_obj > _hx_result = new MenuBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x51a0a3db;
	}
}

bool MenuBuilder_obj::show(){
            	HX_STACKFRAME(&_hx_pos_2899711b6bd2adc3_8_show)
HXLINE(   9)		 ::hx::widgets::Frame frame = ::haxe::ui::core::Screen_obj::get_instance()->get_frame();
HXLINE(  10)		this->_component->ready();
HXLINE(  11)		 ::hx::widgets::Menu menu = ::hx::TCast<  ::hx::widgets::Menu >::cast(this->_component->object);
HXLINE(  12)		frame->popupMenu(menu);
HXLINE(  13)		return true;
            	}



::hx::ObjectPtr< MenuBuilder_obj > MenuBuilder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MenuBuilder_obj > __this = new MenuBuilder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MenuBuilder_obj > MenuBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MenuBuilder_obj *__this = (MenuBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuBuilder_obj), true, "haxe.ui.backend.hxwidgets.builders.MenuBuilder"));
	*(void **)__this = MenuBuilder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MenuBuilder_obj::MenuBuilder_obj()
{
}

::hx::Val MenuBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuBuilder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuBuilder_obj_sMemberFields[] = {
	HX_("show",fd,d4,52,4c),
	::String(null()) };

::hx::Class MenuBuilder_obj::__mClass;

void MenuBuilder_obj::__register()
{
	MenuBuilder_obj _hx_dummy;
	MenuBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.builders.MenuBuilder",01,9c,5c,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders
