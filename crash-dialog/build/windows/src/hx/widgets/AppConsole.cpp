#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_AppConsole
#include <hx/widgets/AppConsole.h>
#endif
#ifndef INCLUDED_hx_widgets_EventFilter
#include <hx/widgets/EventFilter.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cbd0daf39bbdc774_13_new,"hx.widgets.AppConsole","new",0x120ae3c5,"hx.widgets.AppConsole.new","hx/widgets/AppConsole.hx",13,0x61c11909)
HX_LOCAL_STACK_FRAME(_hx_pos_cbd0daf39bbdc774_17_yield,"hx.widgets.AppConsole","yield",0x2d5f10f2,"hx.widgets.AppConsole.yield","hx/widgets/AppConsole.hx",17,0x61c11909)
HX_LOCAL_STACK_FRAME(_hx_pos_cbd0daf39bbdc774_21_scheduleForDestruction,"hx.widgets.AppConsole","scheduleForDestruction",0x8efb5adb,"hx.widgets.AppConsole.scheduleForDestruction","hx/widgets/AppConsole.hx",21,0x61c11909)
HX_LOCAL_STACK_FRAME(_hx_pos_cbd0daf39bbdc774_29_get_appConsoleRef,"hx.widgets.AppConsole","get_appConsoleRef",0xf166efb9,"hx.widgets.AppConsole.get_appConsoleRef","hx/widgets/AppConsole.hx",29,0x61c11909)
namespace hx{
namespace widgets{

void AppConsole_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cbd0daf39bbdc774_13_new)
HXDLIN(  13)		super::__construct();
            	}

Dynamic AppConsole_obj::__CreateEmpty() { return new AppConsole_obj; }

void *AppConsole_obj::_hx_vtable = 0;

Dynamic AppConsole_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AppConsole_obj > _hx_result = new AppConsole_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AppConsole_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41dfbfb5) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x41dfbfb5;
		}
	} else {
		return inClassId==(int)0x467ba226;
	}
}

static ::hx::widgets::EventFilter_obj _hx_hx_widgets_AppConsole__hx_hx_widgets_EventFilter= {
};

void *AppConsole_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x50f534d3: return &_hx_hx_widgets_AppConsole__hx_hx_widgets_EventFilter;
	}
	return super::_hx_getInterface(inHash);
}

bool AppConsole_obj::yield(::hx::Null< bool >  __o_onlyIfNeeded){
            		bool onlyIfNeeded = __o_onlyIfNeeded.Default(false);
            	HX_STACKFRAME(&_hx_pos_cbd0daf39bbdc774_17_yield)
HXDLIN(  17)		return this->get_appConsoleRef()->ptr->Yield(onlyIfNeeded);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AppConsole_obj,yield,return )

void AppConsole_obj::scheduleForDestruction( ::hx::widgets::Object object){
            	HX_STACKFRAME(&_hx_pos_cbd0daf39bbdc774_21_scheduleForDestruction)
HXDLIN(  21)		 wxAppConsole * _hx_tmp = this->get_appConsoleRef()->ptr;
HXDLIN(  21)		(*(_hx_tmp)).ScheduleForDestruction(object->_ref->get_raw());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AppConsole_obj,scheduleForDestruction,(void))

::cpp::Pointer<  wxAppConsole > AppConsole_obj::get_appConsoleRef(){
            	HX_STACKFRAME(&_hx_pos_cbd0daf39bbdc774_29_get_appConsoleRef)
HXDLIN(  29)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppConsole_obj,get_appConsoleRef,return )


::hx::ObjectPtr< AppConsole_obj > AppConsole_obj::__new() {
	::hx::ObjectPtr< AppConsole_obj > __this = new AppConsole_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AppConsole_obj > AppConsole_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AppConsole_obj *__this = (AppConsole_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AppConsole_obj), true, "hx.widgets.AppConsole"));
	*(void **)__this = AppConsole_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AppConsole_obj::AppConsole_obj()
{
}

void AppConsole_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppConsole);
	HX_MARK_MEMBER_NAME(appConsoleRef,"appConsoleRef");
	 ::hx::widgets::EvtHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppConsole_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appConsoleRef,"appConsoleRef");
	 ::hx::widgets::EvtHandler_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AppConsole_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"yield") ) { return ::hx::Val( yield_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"appConsoleRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_appConsoleRef() : appConsoleRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_appConsoleRef") ) { return ::hx::Val( get_appConsoleRef_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"scheduleForDestruction") ) { return ::hx::Val( scheduleForDestruction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AppConsole_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"appConsoleRef") ) { appConsoleRef=inValue.Cast< ::cpp::Pointer<  wxAppConsole > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppConsole_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("appConsoleRef",3d,8a,de,72));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AppConsole_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxAppConsole > */ ,(int)offsetof(AppConsole_obj,appConsoleRef),HX_("appConsoleRef",3d,8a,de,72)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AppConsole_obj_sStaticStorageInfo = 0;
#endif

static ::String AppConsole_obj_sMemberFields[] = {
	HX_("yield",4d,9a,30,f1),
	HX_("scheduleForDestruction",20,9b,65,74),
	HX_("appConsoleRef",3d,8a,de,72),
	HX_("get_appConsoleRef",94,95,4e,79),
	::String(null()) };

::hx::Class AppConsole_obj::__mClass;

void AppConsole_obj::__register()
{
	AppConsole_obj _hx_dummy;
	AppConsole_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.AppConsole",53,9d,fa,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AppConsole_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AppConsole_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppConsole_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppConsole_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
