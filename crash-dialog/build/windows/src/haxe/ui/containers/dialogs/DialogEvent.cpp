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
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogEvent
#include <haxe/ui/containers/dialogs/DialogEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0e45f4bfcbde854d_53_new,"haxe.ui.containers.dialogs.DialogEvent","new",0x2be10f77,"haxe.ui.containers.dialogs.DialogEvent.new","haxe/ui/containers/dialogs/Dialog.hx",53,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_0e45f4bfcbde854d_58_clone,"haxe.ui.containers.dialogs.DialogEvent","clone",0x610f8634,"haxe.ui.containers.dialogs.DialogEvent.clone","haxe/ui/containers/dialogs/Dialog.hx",58,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_0e45f4bfcbde854d_54_boot,"haxe.ui.containers.dialogs.DialogEvent","boot",0x3125793b,"haxe.ui.containers.dialogs.DialogEvent.boot","haxe/ui/containers/dialogs/Dialog.hx",54,0x366f3767)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{

void DialogEvent_obj::__construct(::String type, ::Dynamic bubble, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_0e45f4bfcbde854d_53_new)
HXDLIN(  53)		super::__construct(type,bubble,data);
            	}

Dynamic DialogEvent_obj::__CreateEmpty() { return new DialogEvent_obj; }

void *DialogEvent_obj::_hx_vtable = 0;

Dynamic DialogEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogEvent_obj > _hx_result = new DialogEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DialogEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6ab20b1b) {
		if (inClassId<=(int)0x3db3e34f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3db3e34f;
		} else {
			return inClassId==(int)0x6ab20b1b;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent DialogEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_0e45f4bfcbde854d_58_clone)
HXLINE(  59)		 ::haxe::ui::containers::dialogs::DialogEvent c =  ::haxe::ui::containers::dialogs::DialogEvent_obj::__alloc( HX_CTX ,this->type,null(),null());
HXLINE(  60)		c->type = this->type;
HXLINE(  61)		c->bubble = this->bubble;
HXLINE(  62)		c->target = this->target;
HXLINE(  63)		c->data = this->data;
HXLINE(  64)		c->canceled = this->canceled;
HXLINE(  65)		c->button = this->button;
HXLINE(  66)		this->postClone(c);
HXLINE(  67)		return c;
            	}


::String DialogEvent_obj::DIALOG_CLOSED;


::hx::ObjectPtr< DialogEvent_obj > DialogEvent_obj::__new(::String type, ::Dynamic bubble, ::Dynamic data) {
	::hx::ObjectPtr< DialogEvent_obj > __this = new DialogEvent_obj();
	__this->__construct(type,bubble,data);
	return __this;
}

::hx::ObjectPtr< DialogEvent_obj > DialogEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data) {
	DialogEvent_obj *__this = (DialogEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogEvent_obj), true, "haxe.ui.containers.dialogs.DialogEvent"));
	*(void **)__this = DialogEvent_obj::_hx_vtable;
	__this->__construct(type,bubble,data);
	return __this;
}

DialogEvent_obj::DialogEvent_obj()
{
}

void DialogEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogEvent);
	HX_MARK_MEMBER_NAME(button,"button");
	 ::haxe::ui::events::UIEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button,"button");
	 ::haxe::ui::events::UIEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("button",f2,61,e0,d9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(DialogEvent_obj,button),HX_("button",f2,61,e0,d9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DialogEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DialogEvent_obj::DIALOG_CLOSED,HX_("DIALOG_CLOSED",83,df,14,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogEvent_obj_sMemberFields[] = {
	HX_("button",f2,61,e0,d9),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void DialogEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogEvent_obj::DIALOG_CLOSED,"DIALOG_CLOSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogEvent_obj::DIALOG_CLOSED,"DIALOG_CLOSED");
};

#endif

::hx::Class DialogEvent_obj::__mClass;

static ::String DialogEvent_obj_sStaticFields[] = {
	HX_("DIALOG_CLOSED",83,df,14,3a),
	::String(null())
};

void DialogEvent_obj::__register()
{
	DialogEvent_obj _hx_dummy;
	DialogEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.dialogs.DialogEvent",05,88,40,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DialogEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DialogEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0e45f4bfcbde854d_54_boot)
HXDLIN(  54)		DIALOG_CLOSED = HX_("dialogClosed",94,e8,f8,2e);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
