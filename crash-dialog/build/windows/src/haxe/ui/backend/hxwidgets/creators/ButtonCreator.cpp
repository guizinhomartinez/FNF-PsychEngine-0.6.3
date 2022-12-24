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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_ButtonCreator
#include <haxe/ui/backend/hxwidgets/creators/ButtonCreator.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
#endif
#ifndef INCLUDED_hx_widgets_Button
#include <hx/widgets/Button.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_ToggleButton
#include <hx/widgets/ToggleButton.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_85cb51bd82c21802_11_new,"haxe.ui.backend.hxwidgets.creators.ButtonCreator","new",0x83699660,"haxe.ui.backend.hxwidgets.creators.ButtonCreator.new","haxe/ui/backend/hxwidgets/creators/ButtonCreator.hx",11,0x1a4e2cef)
HX_LOCAL_STACK_FRAME(_hx_pos_85cb51bd82c21802_16_createWindow,"haxe.ui.backend.hxwidgets.creators.ButtonCreator","createWindow",0xffe34e0c,"haxe.ui.backend.hxwidgets.creators.ButtonCreator.createWindow","haxe/ui/backend/hxwidgets/creators/ButtonCreator.hx",16,0x1a4e2cef)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void ButtonCreator_obj::__construct( ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_85cb51bd82c21802_11_new)
HXLINE(  12)		super::__construct(button);
HXLINE(  13)		this->_button = button;
            	}

Dynamic ButtonCreator_obj::__CreateEmpty() { return new ButtonCreator_obj; }

void *ButtonCreator_obj::_hx_vtable = 0;

Dynamic ButtonCreator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonCreator_obj > _hx_result = new ButtonCreator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonCreator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3925cb80) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3925cb80;
	} else {
		return inClassId==(int)0x6e4f573a;
	}
}

 ::hx::widgets::Object ButtonCreator_obj::createWindow( ::hx::widgets::Object parent,::hx::Null< int >  __o_style){
            		int style = __o_style.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_85cb51bd82c21802_16_createWindow)
HXLINE(  17)		 ::hx::widgets::Object b = null();
HXLINE(  18)		if ((this->_button->get_toggle() == true)) {
HXLINE(  19)			b =  ::hx::widgets::ToggleButton_obj::__alloc( HX_CTX ,::hx::TCast<  ::hx::widgets::Window >::cast(parent),null(),style,null());
            		}
            		else {
HXLINE(  21)			b =  ::hx::widgets::Button_obj::__alloc( HX_CTX ,::hx::TCast<  ::hx::widgets::Window >::cast(parent),null(),style,null());
            		}
HXLINE(  23)		return b;
            	}



::hx::ObjectPtr< ButtonCreator_obj > ButtonCreator_obj::__new( ::haxe::ui::components::Button button) {
	::hx::ObjectPtr< ButtonCreator_obj > __this = new ButtonCreator_obj();
	__this->__construct(button);
	return __this;
}

::hx::ObjectPtr< ButtonCreator_obj > ButtonCreator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Button button) {
	ButtonCreator_obj *__this = (ButtonCreator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonCreator_obj), true, "haxe.ui.backend.hxwidgets.creators.ButtonCreator"));
	*(void **)__this = ButtonCreator_obj::_hx_vtable;
	__this->__construct(button);
	return __this;
}

ButtonCreator_obj::ButtonCreator_obj()
{
}

void ButtonCreator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonCreator);
	HX_MARK_MEMBER_NAME(_button,"_button");
	 ::haxe::ui::backend::hxwidgets::creators::Creator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonCreator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_button,"_button");
	 ::haxe::ui::backend::hxwidgets::creators::Creator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonCreator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return ::hx::Val( _button ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return ::hx::Val( createWindow_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonCreator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonCreator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_button",91,73,57,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonCreator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(ButtonCreator_obj,_button),HX_("_button",91,73,57,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonCreator_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonCreator_obj_sMemberFields[] = {
	HX_("_button",91,73,57,48),
	HX_("createWindow",0c,d4,e1,74),
	::String(null()) };

::hx::Class ButtonCreator_obj::__mClass;

void ButtonCreator_obj::__register()
{
	ButtonCreator_obj _hx_dummy;
	ButtonCreator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.ButtonCreator",6e,26,0f,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonCreator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonCreator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonCreator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonCreator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
