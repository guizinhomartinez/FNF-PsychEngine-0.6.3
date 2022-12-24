#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_events_AppEvent
#include <haxe/ui/events/AppEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b4b702f57c3dca25_3_new,"haxe.ui.events.AppEvent","new",0x40a6d3ee,"haxe.ui.events.AppEvent.new","haxe/ui/events/AppEvent.hx",3,0x60eb4f81)
HX_LOCAL_STACK_FRAME(_hx_pos_b4b702f57c3dca25_4_boot,"haxe.ui.events.AppEvent","boot",0x496b9ce4,"haxe.ui.events.AppEvent.boot","haxe/ui/events/AppEvent.hx",4,0x60eb4f81)
HX_LOCAL_STACK_FRAME(_hx_pos_b4b702f57c3dca25_5_boot,"haxe.ui.events.AppEvent","boot",0x496b9ce4,"haxe.ui.events.AppEvent.boot","haxe/ui/events/AppEvent.hx",5,0x60eb4f81)
HX_LOCAL_STACK_FRAME(_hx_pos_b4b702f57c3dca25_6_boot,"haxe.ui.events.AppEvent","boot",0x496b9ce4,"haxe.ui.events.AppEvent.boot","haxe/ui/events/AppEvent.hx",6,0x60eb4f81)
HX_LOCAL_STACK_FRAME(_hx_pos_b4b702f57c3dca25_7_boot,"haxe.ui.events.AppEvent","boot",0x496b9ce4,"haxe.ui.events.AppEvent.boot","haxe/ui/events/AppEvent.hx",7,0x60eb4f81)
namespace haxe{
namespace ui{
namespace events{

void AppEvent_obj::__construct(::String type, ::Dynamic bubble, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_b4b702f57c3dca25_3_new)
HXDLIN(   3)		super::__construct(type,bubble,data);
            	}

Dynamic AppEvent_obj::__CreateEmpty() { return new AppEvent_obj; }

void *AppEvent_obj::_hx_vtable = 0;

Dynamic AppEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AppEvent_obj > _hx_result = new AppEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AppEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5417ff2c) {
		if (inClassId<=(int)0x3db3e34f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3db3e34f;
		} else {
			return inClassId==(int)0x5417ff2c;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

::String AppEvent_obj::APP_READY;

::String AppEvent_obj::APP_STARTED;

::String AppEvent_obj::APP_CLOSED;

::String AppEvent_obj::APP_EXITED;


::hx::ObjectPtr< AppEvent_obj > AppEvent_obj::__new(::String type, ::Dynamic bubble, ::Dynamic data) {
	::hx::ObjectPtr< AppEvent_obj > __this = new AppEvent_obj();
	__this->__construct(type,bubble,data);
	return __this;
}

::hx::ObjectPtr< AppEvent_obj > AppEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data) {
	AppEvent_obj *__this = (AppEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AppEvent_obj), true, "haxe.ui.events.AppEvent"));
	*(void **)__this = AppEvent_obj::_hx_vtable;
	__this->__construct(type,bubble,data);
	return __this;
}

AppEvent_obj::AppEvent_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AppEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AppEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AppEvent_obj::APP_READY,HX_("APP_READY",c5,8e,54,ce)},
	{::hx::fsString,(void *) &AppEvent_obj::APP_STARTED,HX_("APP_STARTED",23,d8,d6,a9)},
	{::hx::fsString,(void *) &AppEvent_obj::APP_CLOSED,HX_("APP_CLOSED",ea,50,68,cd)},
	{::hx::fsString,(void *) &AppEvent_obj::APP_EXITED,HX_("APP_EXITED",3b,7a,f7,7e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AppEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppEvent_obj::APP_READY,"APP_READY");
	HX_MARK_MEMBER_NAME(AppEvent_obj::APP_STARTED,"APP_STARTED");
	HX_MARK_MEMBER_NAME(AppEvent_obj::APP_CLOSED,"APP_CLOSED");
	HX_MARK_MEMBER_NAME(AppEvent_obj::APP_EXITED,"APP_EXITED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AppEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppEvent_obj::APP_READY,"APP_READY");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::APP_STARTED,"APP_STARTED");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::APP_CLOSED,"APP_CLOSED");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::APP_EXITED,"APP_EXITED");
};

#endif

::hx::Class AppEvent_obj::__mClass;

static ::String AppEvent_obj_sStaticFields[] = {
	HX_("APP_READY",c5,8e,54,ce),
	HX_("APP_STARTED",23,d8,d6,a9),
	HX_("APP_CLOSED",ea,50,68,cd),
	HX_("APP_EXITED",3b,7a,f7,7e),
	::String(null())
};

void AppEvent_obj::__register()
{
	AppEvent_obj _hx_dummy;
	AppEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.AppEvent",fc,04,1f,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AppEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AppEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AppEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AppEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AppEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b4b702f57c3dca25_4_boot)
HXDLIN(   4)		APP_READY = HX_("appready",22,3c,34,8c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4b702f57c3dca25_5_boot)
HXDLIN(   5)		APP_STARTED = HX_("appstarted",c0,72,02,61);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4b702f57c3dca25_6_boot)
HXDLIN(   6)		APP_CLOSED = HX_("appclosed",0d,55,40,33);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4b702f57c3dca25_7_boot)
HXDLIN(   7)		APP_EXITED = HX_("appexited",5e,7e,cf,e4);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
