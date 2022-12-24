#include <hxcpp.h>

#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
#ifndef INCLUDED_73d5db1815414fb9
#define INCLUDED_73d5db1815414fb9
#include "wx/settings.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_SystemSettings
#include <hx/widgets/SystemSettings.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b370dac7b9543de4_5_new,"hx.widgets.SystemSettings","new",0x0bc97e81,"hx.widgets.SystemSettings.new","hx/widgets/SystemSettings.hx",5,0x16c5e0cd)
HX_LOCAL_STACK_FRAME(_hx_pos_b370dac7b9543de4_9_getMetric,"hx.widgets.SystemSettings","getMetric",0x09e98e47,"hx.widgets.SystemSettings.getMetric","hx/widgets/SystemSettings.hx",9,0x16c5e0cd)
HX_LOCAL_STACK_FRAME(_hx_pos_b370dac7b9543de4_13_getColour,"hx.widgets.SystemSettings","getColour",0xc70dce63,"hx.widgets.SystemSettings.getColour","hx/widgets/SystemSettings.hx",13,0x16c5e0cd)
namespace hx{
namespace widgets{

void SystemSettings_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b370dac7b9543de4_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic SystemSettings_obj::__CreateEmpty() { return new SystemSettings_obj; }

void *SystemSettings_obj::_hx_vtable = 0;

Dynamic SystemSettings_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SystemSettings_obj > _hx_result = new SystemSettings_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SystemSettings_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x71112571;
	}
}

int SystemSettings_obj::getMetric( cpp::Struct<wxSystemMetric, cpp::EnumHandler> metric, ::hx::widgets::Window window){
            	HX_STACKFRAME(&_hx_pos_b370dac7b9543de4_9_getMetric)
HXDLIN(   9)		return wxSystemSettings::GetMetric(metric,::hx::widgets::Window_obj::toRaw(window));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemSettings_obj,getMetric,return )

int SystemSettings_obj::getColour( cpp::Struct<wxSystemColour, cpp::EnumHandler> index){
            	HX_STACKFRAME(&_hx_pos_b370dac7b9543de4_13_getColour)
HXDLIN(  13)		return ( (int)(wxSystemSettings::GetColour(index).GetRGB()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemSettings_obj,getColour,return )


::hx::ObjectPtr< SystemSettings_obj > SystemSettings_obj::__new() {
	::hx::ObjectPtr< SystemSettings_obj > __this = new SystemSettings_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SystemSettings_obj > SystemSettings_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SystemSettings_obj *__this = (SystemSettings_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SystemSettings_obj), true, "hx.widgets.SystemSettings"));
	*(void **)__this = SystemSettings_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SystemSettings_obj::SystemSettings_obj()
{
}

bool SystemSettings_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getMetric") ) { outValue = getMetric_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getColour") ) { outValue = getColour_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SystemSettings_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SystemSettings_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SystemSettings_obj::__mClass;

static ::String SystemSettings_obj_sStaticFields[] = {
	HX_("getMetric",66,11,b9,85),
	HX_("getColour",82,51,dd,42),
	::String(null())
};

void SystemSettings_obj::__register()
{
	SystemSettings_obj _hx_dummy;
	SystemSettings_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.SystemSettings",0f,2a,ae,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SystemSettings_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SystemSettings_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SystemSettings_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SystemSettings_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SystemSettings_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
