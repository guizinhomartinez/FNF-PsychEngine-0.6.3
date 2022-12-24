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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler
#include <haxe/ui/backend/hxwidgets/handlers/NativeHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_TextCtrlHandler
#include <haxe/ui/backend/hxwidgets/handlers/TextCtrlHandler.h>
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
#ifndef INCLUDED_wx_widgets_styles_TextCtrlStyle
#include <wx/widgets/styles/TextCtrlStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_772c1db8f90f90a8_6_new,"haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler","new",0xd4c4795a,"haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler.new","haxe/ui/backend/hxwidgets/handlers/TextCtrlHandler.hx",6,0x93573cf5)
HX_LOCAL_STACK_FRAME(_hx_pos_772c1db8f90f90a8_7_applyStyle,"haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler","applyStyle",0xbf26eb29,"haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler.applyStyle","haxe/ui/backend/hxwidgets/handlers/TextCtrlHandler.hx",7,0x93573cf5)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{

void TextCtrlHandler_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_772c1db8f90f90a8_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic TextCtrlHandler_obj::__CreateEmpty() { return new TextCtrlHandler_obj; }

void *TextCtrlHandler_obj::_hx_vtable = 0;

Dynamic TextCtrlHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextCtrlHandler_obj > _hx_result = new TextCtrlHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextCtrlHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27587c24) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27587c24;
	} else {
		return inClassId==(int)0x70a0e439;
	}
}

bool TextCtrlHandler_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_772c1db8f90f90a8_7_applyStyle)
HXLINE(   8)		if (::hx::IsNotNull( style->textAlign )) {
HXLINE(   9)			int alignStyle;
HXDLIN(   9)			::String _g = style->textAlign;
HXDLIN(   9)			if (::hx::IsNull( _g )) {
HXLINE(   9)				alignStyle = ::wx::widgets::styles::TextCtrlStyle_obj::LEFT;
            			}
            			else {
HXLINE(   9)				::String _hx_switch_0 = _g;
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(   9)					alignStyle = ::wx::widgets::styles::TextCtrlStyle_obj::CENTRE;
HXDLIN(   9)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(   9)					alignStyle = ::wx::widgets::styles::TextCtrlStyle_obj::RIGHT;
HXDLIN(   9)					goto _hx_goto_1;
            				}
            				/* default */{
HXLINE(   9)					alignStyle = ::wx::widgets::styles::TextCtrlStyle_obj::LEFT;
            				}
            				_hx_goto_1:;
            			}
HXLINE(  14)			 ::hx::widgets::Window _hx_tmp = this->get_window();
HXDLIN(  14)			int _hx_tmp1 = this->get_window()->get_windowStyle();
HXDLIN(  14)			_hx_tmp->set_windowStyle(((_hx_tmp1 & ~(((::wx::widgets::styles::TextCtrlStyle_obj::LEFT | ::wx::widgets::styles::TextCtrlStyle_obj::RIGHT) | ::wx::widgets::styles::TextCtrlStyle_obj::CENTRE))) | alignStyle));
            		}
HXLINE(  17)		return true;
            	}



::hx::ObjectPtr< TextCtrlHandler_obj > TextCtrlHandler_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TextCtrlHandler_obj > __this = new TextCtrlHandler_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TextCtrlHandler_obj > TextCtrlHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextCtrlHandler_obj *__this = (TextCtrlHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextCtrlHandler_obj), true, "haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler"));
	*(void **)__this = TextCtrlHandler_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextCtrlHandler_obj::TextCtrlHandler_obj()
{
}

::hx::Val TextCtrlHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextCtrlHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextCtrlHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String TextCtrlHandler_obj_sMemberFields[] = {
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class TextCtrlHandler_obj::__mClass;

void TextCtrlHandler_obj::__register()
{
	TextCtrlHandler_obj _hx_dummy;
	TextCtrlHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler",68,84,ca,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextCtrlHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextCtrlHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextCtrlHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextCtrlHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers
