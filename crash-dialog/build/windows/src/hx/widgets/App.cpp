#include <hxcpp.h>

#ifndef INCLUDED_461fe5b5a6849249
#define INCLUDED_461fe5b5a6849249
#include "wx/apptrait.h"
#endif
#ifndef INCLUDED_c98dd3744054cb1f
#define INCLUDED_c98dd3744054cb1f
#include "wx/intl.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_hx_widgets_App
#include <hx/widgets/App.h>
#endif
#ifndef INCLUDED_hx_widgets_AppConsole
#include <hx/widgets/AppConsole.h>
#endif
#ifndef INCLUDED_hx_widgets_AppTraits
#include <hx/widgets/AppTraits.h>
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
#ifndef INCLUDED_wx_widgets_Entry
#include <wx/widgets/Entry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc46ed79f42626d1_16_new,"hx.widgets.App","new",0x6858ed56,"hx.widgets.App.new","hx/widgets/App.hx",16,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_31_init,"hx.widgets.App","init",0xe22f755a,"hx.widgets.App.init","hx/widgets/App.hx",31,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_37_run,"hx.widgets.App","run",0x685c0441,"hx.widgets.App.run","hx/widgets/App.hx",37,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_40_exit,"hx.widgets.App","exit",0xdf923168,"hx.widgets.App.exit","hx/widgets/App.hx",40,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_51_setCLocale,"hx.widgets.App","setCLocale",0x439007a5,"hx.widgets.App.setCLocale","hx/widgets/App.hx",51,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_56_get_traits,"hx.widgets.App","get_traits",0x83993e78,"hx.widgets.App.get_traits","hx/widgets/App.hx",56,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_68_get_appRef,"hx.widgets.App","get_appRef",0xcddcecc5,"hx.widgets.App.get_appRef","hx/widgets/App.hx",68,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_47_setInstance,"hx.widgets.App","setInstance",0x1abdec4d,"hx.widgets.App.setInstance","hx/widgets/App.hx",47,0x19b9a55c)
namespace hx{
namespace widgets{

void App_obj::__construct(::hx::Null< bool >  __o_setInstance){
            		bool setInstance = __o_setInstance.Default(true);
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_16_new)
HXLINE(  17)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxApp()))->reinterpret();
HXLINE(  18)		if (setInstance) {
HXLINE(  19)			::hx::widgets::App_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  20)			::hx::widgets::App_obj::setInstance(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  23)		super::__construct();
HXLINE(  24)		int systemLanguage = wxLocale::GetSystemLanguage();
HXLINE(  25)		if ((systemLanguage != 1)) {
HXLINE(  26)			this->_locale = ::cpp::Pointer_obj::fromRaw((new wxLocale(systemLanguage)));
            		}
            	}

Dynamic App_obj::__CreateEmpty() { return new App_obj; }

void *App_obj::_hx_vtable = 0;

Dynamic App_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< App_obj > _hx_result = new App_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool App_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41dfbfb5) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x41dfbfb5;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x7d9089d6;
	}
}

bool App_obj::init(){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_31_init)
HXLINE(  32)		::wx::widgets::Entry_obj::start(::Sys_obj::args());
HXLINE(  33)		return this->get_appRef()->ptr->OnInit();
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,init,return )

void App_obj::run(){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_37_run)
HXDLIN(  37)		this->get_appRef()->ptr->OnRun();
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,run,(void))

void App_obj::exit(){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_40_exit)
HXLINE(  41)		this->_locale->destroy();
HXLINE(  42)		this->get_appRef()->ptr->OnExit();
HXLINE(  43)		::wx::widgets::Entry_obj::cleanup();
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,exit,(void))

void App_obj::setCLocale(){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_51_setCLocale)
HXDLIN(  51)		this->get_appRef()->ptr->SetCLocale();
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,setCLocale,(void))

 ::hx::widgets::AppTraits App_obj::get_traits(){
            	HX_GC_STACKFRAME(&_hx_pos_cc46ed79f42626d1_56_get_traits)
HXLINE(  57)		 wxAppTraits* p = this->get_appRef()->ptr->GetTraits();
HXLINE(  58)		 ::hx::widgets::AppTraits appTraits =  ::hx::widgets::AppTraits_obj::__alloc( HX_CTX );
HXLINE(  59)		appTraits->_ref = ::cpp::Pointer_obj::fromRaw(p);
HXLINE(  60)		return appTraits;
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,get_traits,return )

::cpp::Pointer<  wxApp > App_obj::get_appRef(){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_68_get_appRef)
HXDLIN(  68)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,get_appRef,return )

 ::hx::widgets::App App_obj::instance;

void App_obj::setInstance( ::hx::widgets::App instance){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_47_setInstance)
HXDLIN(  47)		wxApp::SetInstance(instance->get_appRef()->get_raw());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,setInstance,(void))


::hx::ObjectPtr< App_obj > App_obj::__new(::hx::Null< bool >  __o_setInstance) {
	::hx::ObjectPtr< App_obj > __this = new App_obj();
	__this->__construct(__o_setInstance);
	return __this;
}

::hx::ObjectPtr< App_obj > App_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_setInstance) {
	App_obj *__this = (App_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(App_obj), true, "hx.widgets.App"));
	*(void **)__this = App_obj::_hx_vtable;
	__this->__construct(__o_setInstance);
	return __this;
}

App_obj::App_obj()
{
}

void App_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(App);
	HX_MARK_MEMBER_NAME(_locale,"_locale");
	HX_MARK_MEMBER_NAME(traits,"traits");
	HX_MARK_MEMBER_NAME(appRef,"appRef");
	 ::hx::widgets::AppConsole_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void App_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_locale,"_locale");
	HX_VISIT_MEMBER_NAME(traits,"traits");
	HX_VISIT_MEMBER_NAME(appRef,"appRef");
	 ::hx::widgets::AppConsole_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val App_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"exit") ) { return ::hx::Val( exit_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"traits") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_traits() : traits ); }
		if (HX_FIELD_EQ(inName,"appRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_appRef() : appRef ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_locale") ) { return ::hx::Val( _locale ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setCLocale") ) { return ::hx::Val( setCLocale_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_traits") ) { return ::hx::Val( get_traits_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_appRef") ) { return ::hx::Val( get_appRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool App_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setInstance") ) { outValue = setInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val App_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"traits") ) { traits=inValue.Cast<  ::hx::widgets::AppTraits >(); return inValue; }
		if (HX_FIELD_EQ(inName,"appRef") ) { appRef=inValue.Cast< ::cpp::Pointer<  wxApp > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_locale") ) { _locale=inValue.Cast< ::cpp::Pointer<  wxLocale > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool App_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::hx::widgets::App >(); return true; }
	}
	return false;
}

void App_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_locale",39,86,36,c8));
	outFields->push(HX_("traits",e5,c0,81,45));
	outFields->push(HX_("appRef",32,6f,c5,8f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo App_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxLocale > */ ,(int)offsetof(App_obj,_locale),HX_("_locale",39,86,36,c8)},
	{::hx::fsObject /*  ::hx::widgets::AppTraits */ ,(int)offsetof(App_obj,traits),HX_("traits",e5,c0,81,45)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxApp > */ ,(int)offsetof(App_obj,appRef),HX_("appRef",32,6f,c5,8f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo App_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::App */ ,(void *) &App_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String App_obj_sMemberFields[] = {
	HX_("_locale",39,86,36,c8),
	HX_("init",10,3b,bb,45),
	HX_("run",4b,e7,56,00),
	HX_("exit",1e,f7,1d,43),
	HX_("setCLocale",db,f9,ff,f5),
	HX_("traits",e5,c0,81,45),
	HX_("get_traits",ae,30,09,36),
	HX_("appRef",32,6f,c5,8f),
	HX_("get_appRef",fb,de,4c,80),
	::String(null()) };

static void App_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(App_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void App_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(App_obj::instance,"instance");
};

#endif

::hx::Class App_obj::__mClass;

static ::String App_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	HX_("setInstance",57,e9,41,8a),
	::String(null())
};

void App_obj::__register()
{
	App_obj _hx_dummy;
	App_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.App",64,4a,9e,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &App_obj::__GetStatic;
	__mClass->mSetStaticField = &App_obj::__SetStatic;
	__mClass->mMarkFunc = App_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(App_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(App_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< App_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = App_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = App_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = App_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
