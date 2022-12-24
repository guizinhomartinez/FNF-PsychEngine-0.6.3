#include <hxcpp.h>

#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_FrameCreator
#include <haxe/ui/backend/hxwidgets/creators/FrameCreator.h>
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
#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Panel
#include <hx/widgets/Panel.h>
#endif
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBoxSizer
#include <hx/widgets/StaticBoxSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7a8e8d350bbc600f_10_new,"haxe.ui.backend.hxwidgets.creators.FrameCreator","new",0xbb7cdf5d,"haxe.ui.backend.hxwidgets.creators.FrameCreator.new","haxe/ui/backend/hxwidgets/creators/FrameCreator.hx",10,0x5d4203b4)
HX_LOCAL_STACK_FRAME(_hx_pos_7a8e8d350bbc600f_11_createWindow,"haxe.ui.backend.hxwidgets.creators.FrameCreator","createWindow",0xa8bf7d6f,"haxe.ui.backend.hxwidgets.creators.FrameCreator.createWindow","haxe/ui/backend/hxwidgets/creators/FrameCreator.hx",11,0x5d4203b4)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void FrameCreator_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7a8e8d350bbc600f_10_new)
HXDLIN(  10)		super::__construct(component);
            	}

Dynamic FrameCreator_obj::__CreateEmpty() { return new FrameCreator_obj; }

void *FrameCreator_obj::_hx_vtable = 0;

Dynamic FrameCreator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FrameCreator_obj > _hx_result = new FrameCreator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FrameCreator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x15346773) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x15346773;
	} else {
		return inClassId==(int)0x3925cb80;
	}
}

 ::hx::widgets::Object FrameCreator_obj::createWindow( ::hx::widgets::Object parent,::hx::Null< int >  __o_style){
            		int style = __o_style.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_7a8e8d350bbc600f_11_createWindow)
HXLINE(  12)		 ::hx::widgets::Panel panel =  ::hx::widgets::Panel_obj::__alloc( HX_CTX ,::hx::TCast<  ::hx::widgets::Window >::cast(parent),style,null());
HXLINE(  13)		 ::hx::widgets::StaticBoxSizer sizer =  ::hx::widgets::StaticBoxSizer_obj::__alloc( HX_CTX ,wxVERTICAL,panel,null());
HXLINE(  14)		this->_component->userData = sizer;
HXLINE(  15)		return panel;
            	}



::hx::ObjectPtr< FrameCreator_obj > FrameCreator_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< FrameCreator_obj > __this = new FrameCreator_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< FrameCreator_obj > FrameCreator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	FrameCreator_obj *__this = (FrameCreator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FrameCreator_obj), true, "haxe.ui.backend.hxwidgets.creators.FrameCreator"));
	*(void **)__this = FrameCreator_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

FrameCreator_obj::FrameCreator_obj()
{
}

::hx::Val FrameCreator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return ::hx::Val( createWindow_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FrameCreator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FrameCreator_obj_sStaticStorageInfo = 0;
#endif

static ::String FrameCreator_obj_sMemberFields[] = {
	HX_("createWindow",0c,d4,e1,74),
	::String(null()) };

::hx::Class FrameCreator_obj::__mClass;

void FrameCreator_obj::__register()
{
	FrameCreator_obj _hx_dummy;
	FrameCreator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.FrameCreator",eb,ec,b0,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FrameCreator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FrameCreator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameCreator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameCreator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
