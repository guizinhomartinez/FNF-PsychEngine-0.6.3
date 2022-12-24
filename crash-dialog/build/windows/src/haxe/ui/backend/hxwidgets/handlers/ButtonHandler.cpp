#include <hxcpp.h>

#ifndef INCLUDED_ba6509720fa912ce
#define INCLUDED_ba6509720fa912ce
#include "wx/defs.h"
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_ButtonHandler
#include <haxe/ui/backend/hxwidgets/handlers/ButtonHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler
#include <haxe/ui/backend/hxwidgets/handlers/NativeHandler.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
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
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_ButtonStyle
#include <wx/widgets/styles/ButtonStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_00c8fd9a668debf3_8_new,"haxe.ui.backend.hxwidgets.handlers.ButtonHandler","new",0x41416820,"haxe.ui.backend.hxwidgets.handlers.ButtonHandler.new","haxe/ui/backend/hxwidgets/handlers/ButtonHandler.hx",8,0xe2e7d32f)
HX_LOCAL_STACK_FRAME(_hx_pos_00c8fd9a668debf3_9_applyStyle,"haxe.ui.backend.hxwidgets.handlers.ButtonHandler","applyStyle",0x3d480123,"haxe.ui.backend.hxwidgets.handlers.ButtonHandler.applyStyle","haxe/ui/backend/hxwidgets/handlers/ButtonHandler.hx",9,0xe2e7d32f)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{

void ButtonHandler_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_00c8fd9a668debf3_8_new)
HXDLIN(   8)		super::__construct(component);
            	}

Dynamic ButtonHandler_obj::__CreateEmpty() { return new ButtonHandler_obj; }

void *ButtonHandler_obj::_hx_vtable = 0;

Dynamic ButtonHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonHandler_obj > _hx_result = new ButtonHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x053668ea) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x053668ea;
	} else {
		return inClassId==(int)0x70a0e439;
	}
}

bool ButtonHandler_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_00c8fd9a668debf3_9_applyStyle)
HXLINE(  10)		 ::hx::widgets::AnyButton button = ::hx::TCast<  ::hx::widgets::AnyButton >::cast(this->_component->get_window());
HXLINE(  11)		{
HXLINE(  11)			::String _g = style->iconPosition;
HXDLIN(  11)			if (::hx::IsNull( _g )) {
HXLINE(  19)				button->set_bitmapPosition(wxLEFT);
            			}
            			else {
HXLINE(  11)				::String _hx_switch_0 = _g;
            				if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  17)					button->set_bitmapPosition(wxBOTTOM);
HXDLIN(  17)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  13)					button->set_bitmapPosition(wxRIGHT);
HXDLIN(  13)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE(  15)					button->set_bitmapPosition(wxTOP);
HXDLIN(  15)					goto _hx_goto_1;
            				}
            				/* default */{
HXLINE(  19)					button->set_bitmapPosition(wxLEFT);
            				}
            				_hx_goto_1:;
            			}
            		}
HXLINE(  22)		if (::hx::IsNotNull( style->textAlign )) {
HXLINE(  23)			int alignStyle;
HXDLIN(  23)			::String _g = style->textAlign;
HXDLIN(  23)			if (::hx::IsNull( _g )) {
HXLINE(  23)				alignStyle = 0;
            			}
            			else {
HXLINE(  23)				::String _hx_switch_1 = _g;
            				if (  (_hx_switch_1==HX_("left",07,08,b0,47)) ){
HXLINE(  23)					alignStyle = ::wx::widgets::styles::ButtonStyle_obj::LEFT;
HXDLIN(  23)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_1==HX_("right",dc,0b,64,e9)) ){
HXLINE(  23)					alignStyle = ::wx::widgets::styles::ButtonStyle_obj::RIGHT;
HXDLIN(  23)					goto _hx_goto_2;
            				}
            				/* default */{
HXLINE(  23)					alignStyle = 0;
            				}
            				_hx_goto_2:;
            			}
HXLINE(  28)			 ::hx::widgets::Window _hx_tmp = this->get_window();
HXDLIN(  28)			int _hx_tmp1 = this->get_window()->get_windowStyle();
HXDLIN(  28)			_hx_tmp->set_windowStyle(((_hx_tmp1 & ~((::wx::widgets::styles::ButtonStyle_obj::LEFT | ::wx::widgets::styles::ButtonStyle_obj::RIGHT))) | alignStyle));
            		}
HXLINE(  31)		return true;
            	}



::hx::ObjectPtr< ButtonHandler_obj > ButtonHandler_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ButtonHandler_obj > __this = new ButtonHandler_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ButtonHandler_obj > ButtonHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ButtonHandler_obj *__this = (ButtonHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonHandler_obj), true, "haxe.ui.backend.hxwidgets.handlers.ButtonHandler"));
	*(void **)__this = ButtonHandler_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ButtonHandler_obj::ButtonHandler_obj()
{
}

::hx::Val ButtonHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ButtonHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ButtonHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonHandler_obj_sMemberFields[] = {
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class ButtonHandler_obj::__mClass;

void ButtonHandler_obj::__register()
{
	ButtonHandler_obj _hx_dummy;
	ButtonHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.handlers.ButtonHandler",2e,18,ab,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers
