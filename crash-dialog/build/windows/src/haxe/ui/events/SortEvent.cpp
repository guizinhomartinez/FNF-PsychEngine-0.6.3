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
#ifndef INCLUDED_haxe_ui_events_SortEvent
#include <haxe/ui/events/SortEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86b38536e1fbd84c_5_new,"haxe.ui.events.SortEvent","new",0xfa09b6ab,"haxe.ui.events.SortEvent.new","haxe/ui/events/SortEvent.hx",5,0xb738f206)
HX_LOCAL_STACK_FRAME(_hx_pos_86b38536e1fbd84c_10_clone,"haxe.ui.events.SortEvent","clone",0x88176268,"haxe.ui.events.SortEvent.clone","haxe/ui/events/SortEvent.hx",10,0xb738f206)
HX_LOCAL_STACK_FRAME(_hx_pos_86b38536e1fbd84c_6_boot,"haxe.ui.events.SortEvent","boot",0xc68f1f87,"haxe.ui.events.SortEvent.boot","haxe/ui/events/SortEvent.hx",6,0xb738f206)
namespace haxe{
namespace ui{
namespace events{

void SortEvent_obj::__construct(::String type, ::Dynamic bubble, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_86b38536e1fbd84c_5_new)
HXDLIN(   5)		super::__construct(type,bubble,data);
            	}

Dynamic SortEvent_obj::__CreateEmpty() { return new SortEvent_obj; }

void *SortEvent_obj::_hx_vtable = 0;

Dynamic SortEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SortEvent_obj > _hx_result = new SortEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SortEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x0fd58741) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0fd58741;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent SortEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_86b38536e1fbd84c_10_clone)
HXLINE(  11)		 ::haxe::ui::events::SortEvent c =  ::haxe::ui::events::SortEvent_obj::__alloc( HX_CTX ,this->type,null(),null());
HXLINE(  12)		c->type = this->type;
HXLINE(  13)		c->bubble = this->bubble;
HXLINE(  14)		c->target = this->target;
HXLINE(  15)		c->data = this->data;
HXLINE(  16)		c->canceled = this->canceled;
HXLINE(  17)		c->direction = this->direction;
HXLINE(  18)		this->postClone(c);
HXLINE(  19)		return c;
            	}


::String SortEvent_obj::SORT_CHANGED;


::hx::ObjectPtr< SortEvent_obj > SortEvent_obj::__new(::String type, ::Dynamic bubble, ::Dynamic data) {
	::hx::ObjectPtr< SortEvent_obj > __this = new SortEvent_obj();
	__this->__construct(type,bubble,data);
	return __this;
}

::hx::ObjectPtr< SortEvent_obj > SortEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data) {
	SortEvent_obj *__this = (SortEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SortEvent_obj), true, "haxe.ui.events.SortEvent"));
	*(void **)__this = SortEvent_obj::_hx_vtable;
	__this->__construct(type,bubble,data);
	return __this;
}

SortEvent_obj::SortEvent_obj()
{
}

void SortEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SortEvent);
	HX_MARK_MEMBER_NAME(direction,"direction");
	 ::haxe::ui::events::UIEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SortEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(direction,"direction");
	 ::haxe::ui::events::UIEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SortEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SortEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SortEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("direction",3f,62,40,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SortEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SortEvent_obj,direction),HX_("direction",3f,62,40,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SortEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SortEvent_obj::SORT_CHANGED,HX_("SORT_CHANGED",b3,5b,1d,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SortEvent_obj_sMemberFields[] = {
	HX_("direction",3f,62,40,10),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void SortEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SortEvent_obj::SORT_CHANGED,"SORT_CHANGED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SortEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SortEvent_obj::SORT_CHANGED,"SORT_CHANGED");
};

#endif

::hx::Class SortEvent_obj::__mClass;

static ::String SortEvent_obj_sStaticFields[] = {
	HX_("SORT_CHANGED",b3,5b,1d,6b),
	::String(null())
};

void SortEvent_obj::__register()
{
	SortEvent_obj _hx_dummy;
	SortEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.SortEvent",39,85,50,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SortEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SortEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SortEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SortEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SortEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SortEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SortEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SortEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_86b38536e1fbd84c_6_boot)
HXDLIN(   6)		SORT_CHANGED = HX_("sortchanged",56,51,5d,eb);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
