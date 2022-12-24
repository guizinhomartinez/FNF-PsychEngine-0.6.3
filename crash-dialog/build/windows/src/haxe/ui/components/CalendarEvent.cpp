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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CalendarEvent
#include <haxe/ui/components/CalendarEvent.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b67f07623c4e4880_14_new,"haxe.ui.components.CalendarEvent","new",0x6f93e008,"haxe.ui.components.CalendarEvent.new","haxe/ui/components/Calendar.hx",14,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f07623c4e4880_17_clone,"haxe.ui.components.CalendarEvent","clone",0x13845d05,"haxe.ui.components.CalendarEvent.clone","haxe/ui/components/Calendar.hx",17,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_b67f07623c4e4880_15_boot,"haxe.ui.components.CalendarEvent","boot",0x29e9278a,"haxe.ui.components.CalendarEvent.boot","haxe/ui/components/Calendar.hx",15,0xa4f8a419)
namespace haxe{
namespace ui{
namespace components{

void CalendarEvent_obj::__construct(::String type, ::Dynamic bubble, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_b67f07623c4e4880_14_new)
HXDLIN(  14)		super::__construct(type,bubble,data);
            	}

Dynamic CalendarEvent_obj::__CreateEmpty() { return new CalendarEvent_obj; }

void *CalendarEvent_obj::_hx_vtable = 0;

Dynamic CalendarEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CalendarEvent_obj > _hx_result = new CalendarEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CalendarEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x54c535cc) {
		if (inClassId<=(int)0x3db3e34f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3db3e34f;
		} else {
			return inClassId==(int)0x54c535cc;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent CalendarEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b67f07623c4e4880_17_clone)
HXLINE(  18)		 ::haxe::ui::components::CalendarEvent c =  ::haxe::ui::components::CalendarEvent_obj::__alloc( HX_CTX ,this->type,null(),null());
HXLINE(  19)		c->type = this->type;
HXLINE(  20)		c->bubble = this->bubble;
HXLINE(  21)		c->target = this->target;
HXLINE(  22)		c->data = this->data;
HXLINE(  23)		c->canceled = this->canceled;
HXLINE(  24)		this->postClone(c);
HXLINE(  25)		return c;
            	}


::String CalendarEvent_obj::DATE_CHANGE;


::hx::ObjectPtr< CalendarEvent_obj > CalendarEvent_obj::__new(::String type, ::Dynamic bubble, ::Dynamic data) {
	::hx::ObjectPtr< CalendarEvent_obj > __this = new CalendarEvent_obj();
	__this->__construct(type,bubble,data);
	return __this;
}

::hx::ObjectPtr< CalendarEvent_obj > CalendarEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data) {
	CalendarEvent_obj *__this = (CalendarEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CalendarEvent_obj), true, "haxe.ui.components.CalendarEvent"));
	*(void **)__this = CalendarEvent_obj::_hx_vtable;
	__this->__construct(type,bubble,data);
	return __this;
}

CalendarEvent_obj::CalendarEvent_obj()
{
}

::hx::Val CalendarEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CalendarEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CalendarEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CalendarEvent_obj::DATE_CHANGE,HX_("DATE_CHANGE",a1,72,38,88)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CalendarEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void CalendarEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CalendarEvent_obj::DATE_CHANGE,"DATE_CHANGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CalendarEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CalendarEvent_obj::DATE_CHANGE,"DATE_CHANGE");
};

#endif

::hx::Class CalendarEvent_obj::__mClass;

static ::String CalendarEvent_obj_sStaticFields[] = {
	HX_("DATE_CHANGE",a1,72,38,88),
	::String(null())
};

void CalendarEvent_obj::__register()
{
	CalendarEvent_obj _hx_dummy;
	CalendarEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.CalendarEvent",16,7c,99,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CalendarEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CalendarEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CalendarEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CalendarEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CalendarEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CalendarEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CalendarEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CalendarEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b67f07623c4e4880_15_boot)
HXDLIN(  15)		DATE_CHANGE = HX_("datechange",1e,be,d5,14);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
