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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_FrameHandler
#include <haxe/ui/backend/hxwidgets/handlers/FrameHandler.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
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
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBox
#include <hx/widgets/StaticBox.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_15b83ccba9091bad_6_new,"haxe.ui.backend.hxwidgets.handlers.FrameHandler","new",0xc33d4819,"haxe.ui.backend.hxwidgets.handlers.FrameHandler.new","haxe/ui/backend/hxwidgets/handlers/FrameHandler.hx",6,0x17440678)
HX_LOCAL_STACK_FRAME(_hx_pos_15b83ccba9091bad_7_resize,"haxe.ui.backend.hxwidgets.handlers.FrameHandler","resize",0x5fdebbdb,"haxe.ui.backend.hxwidgets.handlers.FrameHandler.resize","haxe/ui/backend/hxwidgets/handlers/FrameHandler.hx",7,0x17440678)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{

void FrameHandler_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_15b83ccba9091bad_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic FrameHandler_obj::__CreateEmpty() { return new FrameHandler_obj; }

void *FrameHandler_obj::_hx_vtable = 0;

Dynamic FrameHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FrameHandler_obj > _hx_result = new FrameHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FrameHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1861ddcf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1861ddcf;
	} else {
		return inClassId==(int)0x70a0e439;
	}
}

void FrameHandler_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_15b83ccba9091bad_7_resize)
HXLINE(   8)		 ::hx::widgets::StaticBoxSizer sizer = ::hx::TCast<  ::hx::widgets::StaticBoxSizer >::cast(this->_component->userData);
HXLINE(   9)		sizer->get_staticBox()->resize(width,height);
            	}



::hx::ObjectPtr< FrameHandler_obj > FrameHandler_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< FrameHandler_obj > __this = new FrameHandler_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< FrameHandler_obj > FrameHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	FrameHandler_obj *__this = (FrameHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FrameHandler_obj), true, "haxe.ui.backend.hxwidgets.handlers.FrameHandler"));
	*(void **)__this = FrameHandler_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

FrameHandler_obj::FrameHandler_obj()
{
}

::hx::Val FrameHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FrameHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FrameHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String FrameHandler_obj_sMemberFields[] = {
	HX_("resize",f4,59,7b,08),
	::String(null()) };

::hx::Class FrameHandler_obj::__mClass;

void FrameHandler_obj::__register()
{
	FrameHandler_obj _hx_dummy;
	FrameHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.handlers.FrameHandler",a7,47,e7,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FrameHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FrameHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers
