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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_StaticTextHandler
#include <haxe/ui/backend/hxwidgets/handlers/StaticTextHandler.h>
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
#ifndef INCLUDED_wx_widgets_styles_StaticTextStyle
#include <wx/widgets/styles/StaticTextStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37a7f5ba7940327a_6_new,"haxe.ui.backend.hxwidgets.handlers.StaticTextHandler","new",0xdf1dc337,"haxe.ui.backend.hxwidgets.handlers.StaticTextHandler.new","haxe/ui/backend/hxwidgets/handlers/StaticTextHandler.hx",6,0x2c388378)
HX_LOCAL_STACK_FRAME(_hx_pos_37a7f5ba7940327a_7_applyStyle,"haxe.ui.backend.hxwidgets.handlers.StaticTextHandler","applyStyle",0x650546ec,"haxe.ui.backend.hxwidgets.handlers.StaticTextHandler.applyStyle","haxe/ui/backend/hxwidgets/handlers/StaticTextHandler.hx",7,0x2c388378)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{

void StaticTextHandler_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_37a7f5ba7940327a_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic StaticTextHandler_obj::__CreateEmpty() { return new StaticTextHandler_obj; }

void *StaticTextHandler_obj::_hx_vtable = 0;

Dynamic StaticTextHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticTextHandler_obj > _hx_result = new StaticTextHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StaticTextHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0570ba81) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0570ba81;
	} else {
		return inClassId==(int)0x70a0e439;
	}
}

bool StaticTextHandler_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_37a7f5ba7940327a_7_applyStyle)
HXLINE(   8)		if (::hx::IsNotNull( style->textAlign )) {
HXLINE(   9)			int alignStyle;
HXDLIN(   9)			::String _g = style->textAlign;
HXDLIN(   9)			if (::hx::IsNull( _g )) {
HXLINE(   9)				alignStyle = ::wx::widgets::styles::StaticTextStyle_obj::ALIGN_LEFT;
            			}
            			else {
HXLINE(   9)				::String _hx_switch_0 = _g;
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(   9)					alignStyle = ::wx::widgets::styles::StaticTextStyle_obj::ALIGN_CENTRE_HORIZONTAL;
HXDLIN(   9)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(   9)					alignStyle = ::wx::widgets::styles::StaticTextStyle_obj::ALIGN_RIGHT;
HXDLIN(   9)					goto _hx_goto_1;
            				}
            				/* default */{
HXLINE(   9)					alignStyle = ::wx::widgets::styles::StaticTextStyle_obj::ALIGN_LEFT;
            				}
            				_hx_goto_1:;
            			}
HXLINE(  14)			 ::hx::widgets::Window _hx_tmp = this->get_window();
HXDLIN(  14)			int _hx_tmp1 = this->get_window()->get_windowStyle();
HXDLIN(  14)			_hx_tmp->set_windowStyle(((_hx_tmp1 & ~(((::wx::widgets::styles::StaticTextStyle_obj::ALIGN_LEFT | ::wx::widgets::styles::StaticTextStyle_obj::ALIGN_RIGHT) | ::wx::widgets::styles::StaticTextStyle_obj::ALIGN_CENTRE_HORIZONTAL))) | alignStyle));
            		}
HXLINE(  17)		return true;
            	}



::hx::ObjectPtr< StaticTextHandler_obj > StaticTextHandler_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< StaticTextHandler_obj > __this = new StaticTextHandler_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< StaticTextHandler_obj > StaticTextHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	StaticTextHandler_obj *__this = (StaticTextHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticTextHandler_obj), true, "haxe.ui.backend.hxwidgets.handlers.StaticTextHandler"));
	*(void **)__this = StaticTextHandler_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

StaticTextHandler_obj::StaticTextHandler_obj()
{
}

::hx::Val StaticTextHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StaticTextHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StaticTextHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticTextHandler_obj_sMemberFields[] = {
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class StaticTextHandler_obj::__mClass;

void StaticTextHandler_obj::__register()
{
	StaticTextHandler_obj _hx_dummy;
	StaticTextHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.handlers.StaticTextHandler",c5,5b,a8,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticTextHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticTextHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticTextHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticTextHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers
