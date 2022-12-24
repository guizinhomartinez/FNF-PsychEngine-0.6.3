#include <hxcpp.h>

#ifndef INCLUDED_73d5db1815414fb9
#define INCLUDED_73d5db1815414fb9
#include "wx/settings.h"
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_DialogSize
#include <haxe/ui/backend/hxwidgets/size/DialogSize.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
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
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_SystemSettings
#include <hx/widgets/SystemSettings.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_9_new,"haxe.ui.backend.hxwidgets.size.DialogSize","new",0x2494ab4d,"haxe.ui.backend.hxwidgets.size.DialogSize.new","haxe/ui/backend/hxwidgets/size/DialogSize.hx",9,0x18663a84)
HX_LOCAL_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_10_get_width,"haxe.ui.backend.hxwidgets.size.DialogSize","get_width",0xa8cb5d0a,"haxe.ui.backend.hxwidgets.size.DialogSize.get_width","haxe/ui/backend/hxwidgets/size/DialogSize.hx",10,0x18663a84)
HX_LOCAL_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_17_get_height,"haxe.ui.backend.hxwidgets.size.DialogSize","get_height",0xbf758463,"haxe.ui.backend.hxwidgets.size.DialogSize.get_height","haxe/ui/backend/hxwidgets/size/DialogSize.hx",17,0x18663a84)
HX_LOCAL_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_24_get_usableWidthModifier,"haxe.ui.backend.hxwidgets.size.DialogSize","get_usableWidthModifier",0x9de2a369,"haxe.ui.backend.hxwidgets.size.DialogSize.get_usableWidthModifier","haxe/ui/backend/hxwidgets/size/DialogSize.hx",24,0x18663a84)
HX_LOCAL_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_29_get_usableHeightModifier,"haxe.ui.backend.hxwidgets.size.DialogSize","get_usableHeightModifier",0xd2a66cf2,"haxe.ui.backend.hxwidgets.size.DialogSize.get_usableHeightModifier","haxe/ui/backend/hxwidgets/size/DialogSize.hx",29,0x18663a84)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{

void DialogSize_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic DialogSize_obj::__CreateEmpty() { return new DialogSize_obj; }

void *DialogSize_obj::_hx_vtable = 0;

Dynamic DialogSize_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogSize_obj > _hx_result = new DialogSize_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DialogSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x05501e1f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x05501e1f;
	} else {
		return inClassId==(int)0x099a2e57;
	}
}

Float DialogSize_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_10_get_width)
HXLINE(  11)		if (::hx::IsNull( this->component->get_window() )) {
HXLINE(  12)			return ( (Float)(0) );
            		}
HXLINE(  14)		return ( (Float)(this->component->get_window()->get_bestSize()->width) );
            	}


Float DialogSize_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_17_get_height)
HXLINE(  18)		if (::hx::IsNull( this->component->get_window() )) {
HXLINE(  19)			return ( (Float)(0) );
            		}
HXLINE(  21)		return ( (Float)(this->component->get_window()->get_bestSize()->height) );
            	}


Float DialogSize_obj::get_usableWidthModifier(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_24_get_usableWidthModifier)
HXLINE(  25)		int m = 6;
HXLINE(  26)		return ( (Float)(m) );
            	}


Float DialogSize_obj::get_usableHeightModifier(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_29_get_usableHeightModifier)
HXLINE(  30)		int m = ::hx::widgets::SystemSettings_obj::getMetric(wxSYS_CAPTION_Y,::haxe::ui::Toolkit_obj::get_screen()->get_frame());
HXLINE(  31)		return ( (Float)(m) );
            	}



::hx::ObjectPtr< DialogSize_obj > DialogSize_obj::__new() {
	::hx::ObjectPtr< DialogSize_obj > __this = new DialogSize_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DialogSize_obj > DialogSize_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DialogSize_obj *__this = (DialogSize_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogSize_obj), true, "haxe.ui.backend.hxwidgets.size.DialogSize"));
	*(void **)__this = DialogSize_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DialogSize_obj::DialogSize_obj()
{
}

::hx::Val DialogSize_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_usableWidthModifier") ) { return ::hx::Val( get_usableWidthModifier_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_usableHeightModifier") ) { return ::hx::Val( get_usableHeightModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DialogSize_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DialogSize_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogSize_obj_sMemberFields[] = {
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_usableWidthModifier",fc,e3,aa,e8),
	HX_("get_usableHeightModifier",ff,ac,16,f7),
	::String(null()) };

::hx::Class DialogSize_obj::__mClass;

void DialogSize_obj::__register()
{
	DialogSize_obj _hx_dummy;
	DialogSize_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.size.DialogSize",db,00,18,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogSize_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogSize_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogSize_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size
