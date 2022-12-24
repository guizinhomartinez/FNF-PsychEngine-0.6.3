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

HX_DEFINE_STACK_FRAME(_hx_pos_278a34db55409f46_10_new,"haxe.ui.backend.hxwidgets.handlers.NativeHandler","new",0x1002089b,"haxe.ui.backend.hxwidgets.handlers.NativeHandler.new","haxe/ui/backend/hxwidgets/handlers/NativeHandler.hx",10,0xdaa61b14)
HX_LOCAL_STACK_FRAME(_hx_pos_278a34db55409f46_13_link,"haxe.ui.backend.hxwidgets.handlers.NativeHandler","link",0xf076135f,"haxe.ui.backend.hxwidgets.handlers.NativeHandler.link","haxe/ui/backend/hxwidgets/handlers/NativeHandler.hx",13,0xdaa61b14)
HX_LOCAL_STACK_FRAME(_hx_pos_278a34db55409f46_16_unlink,"haxe.ui.backend.hxwidgets.handlers.NativeHandler","unlink",0x018c7d78,"haxe.ui.backend.hxwidgets.handlers.NativeHandler.unlink","haxe/ui/backend/hxwidgets/handlers/NativeHandler.hx",16,0xdaa61b14)
HX_LOCAL_STACK_FRAME(_hx_pos_278a34db55409f46_20_applyStyle,"haxe.ui.backend.hxwidgets.handlers.NativeHandler","applyStyle",0xc9183608,"haxe.ui.backend.hxwidgets.handlers.NativeHandler.applyStyle","haxe/ui/backend/hxwidgets/handlers/NativeHandler.hx",20,0xdaa61b14)
HX_LOCAL_STACK_FRAME(_hx_pos_278a34db55409f46_25_get_window,"haxe.ui.backend.hxwidgets.handlers.NativeHandler","get_window",0xdcbd18de,"haxe.ui.backend.hxwidgets.handlers.NativeHandler.get_window","haxe/ui/backend/hxwidgets/handlers/NativeHandler.hx",25,0xdaa61b14)
HX_LOCAL_STACK_FRAME(_hx_pos_278a34db55409f46_28_resize,"haxe.ui.backend.hxwidgets.handlers.NativeHandler","resize",0xa47fb899,"haxe.ui.backend.hxwidgets.handlers.NativeHandler.resize","haxe/ui/backend/hxwidgets/handlers/NativeHandler.hx",28,0xdaa61b14)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{

void NativeHandler_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_278a34db55409f46_10_new)
HXDLIN(  10)		this->_component = component;
            	}

Dynamic NativeHandler_obj::__CreateEmpty() { return new NativeHandler_obj; }

void *NativeHandler_obj::_hx_vtable = 0;

Dynamic NativeHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeHandler_obj > _hx_result = new NativeHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NativeHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70a0e439;
}

void NativeHandler_obj::link(){
            	HX_STACKFRAME(&_hx_pos_278a34db55409f46_13_link)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeHandler_obj,link,(void))

void NativeHandler_obj::unlink(){
            	HX_STACKFRAME(&_hx_pos_278a34db55409f46_16_unlink)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeHandler_obj,unlink,(void))

bool NativeHandler_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_278a34db55409f46_20_applyStyle)
HXDLIN(  20)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeHandler_obj,applyStyle,return )

 ::hx::widgets::Window NativeHandler_obj::get_window(){
            	HX_STACKFRAME(&_hx_pos_278a34db55409f46_25_get_window)
HXDLIN(  25)		return this->_component->get_window();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeHandler_obj,get_window,return )

void NativeHandler_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_278a34db55409f46_28_resize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHandler_obj,resize,(void))


::hx::ObjectPtr< NativeHandler_obj > NativeHandler_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< NativeHandler_obj > __this = new NativeHandler_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< NativeHandler_obj > NativeHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NativeHandler_obj *__this = (NativeHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeHandler_obj), true, "haxe.ui.backend.hxwidgets.handlers.NativeHandler"));
	*(void **)__this = NativeHandler_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NativeHandler_obj::NativeHandler_obj()
{
}

void NativeHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeHandler);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_END_CLASS();
}

void NativeHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(window,"window");
}

::hx::Val NativeHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { return ::hx::Val( link_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unlink") ) { return ::hx::Val( unlink_dyn() ); }
		if (HX_FIELD_EQ(inName,"window") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_window() : window ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return ::hx::Val( _component ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_window") ) { return ::hx::Val( get_window_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NativeHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::hx::widgets::Window >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_component",7e,6c,f6,6a));
	outFields->push(HX_("window",f0,93,8c,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(NativeHandler_obj,_component),HX_("_component",7e,6c,f6,6a)},
	{::hx::fsObject /*  ::hx::widgets::Window */ ,(int)offsetof(NativeHandler_obj,window),HX_("window",f0,93,8c,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NativeHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String NativeHandler_obj_sMemberFields[] = {
	HX_("_component",7e,6c,f6,6a),
	HX_("link",fa,17,b3,47),
	HX_("unlink",d3,1e,88,65),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("window",f0,93,8c,52),
	HX_("get_window",b9,03,14,43),
	HX_("resize",f4,59,7b,08),
	::String(null()) };

::hx::Class NativeHandler_obj::__mClass;

void NativeHandler_obj::__register()
{
	NativeHandler_obj _hx_dummy;
	NativeHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.handlers.NativeHandler",29,1f,5d,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers
