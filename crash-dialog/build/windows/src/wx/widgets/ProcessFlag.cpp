#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_ProcessFlag
#include <wx/widgets/ProcessFlag.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b02275eccde5de2c_5_boot,"wx.widgets.ProcessFlag","boot",0xa6597af1,"wx.widgets.ProcessFlag.boot","wx/widgets/ProcessFlag.hx",5,0x471d3c91)
HX_LOCAL_STACK_FRAME(_hx_pos_b02275eccde5de2c_6_boot,"wx.widgets.ProcessFlag","boot",0xa6597af1,"wx.widgets.ProcessFlag.boot","wx/widgets/ProcessFlag.hx",6,0x471d3c91)
namespace wx{
namespace widgets{

void ProcessFlag_obj::__construct() { }

Dynamic ProcessFlag_obj::__CreateEmpty() { return new ProcessFlag_obj; }

void *ProcessFlag_obj::_hx_vtable = 0;

Dynamic ProcessFlag_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProcessFlag_obj > _hx_result = new ProcessFlag_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ProcessFlag_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f4b9bad;
}

int ProcessFlag_obj::PROCESS_DEFAULT;

int ProcessFlag_obj::PROCESS_REDIRECT;


ProcessFlag_obj::ProcessFlag_obj()
{
}

bool ProcessFlag_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"PROCESS_DEFAULT") ) { outValue = ( PROCESS_DEFAULT ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PROCESS_REDIRECT") ) { outValue = ( PROCESS_REDIRECT ); return true; }
	}
	return false;
}

bool ProcessFlag_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"PROCESS_DEFAULT") ) { PROCESS_DEFAULT=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PROCESS_REDIRECT") ) { PROCESS_REDIRECT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ProcessFlag_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ProcessFlag_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ProcessFlag_obj::PROCESS_DEFAULT,HX_("PROCESS_DEFAULT",71,e3,53,73)},
	{::hx::fsInt,(void *) &ProcessFlag_obj::PROCESS_REDIRECT,HX_("PROCESS_REDIRECT",4c,46,52,63)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ProcessFlag_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProcessFlag_obj::PROCESS_DEFAULT,"PROCESS_DEFAULT");
	HX_MARK_MEMBER_NAME(ProcessFlag_obj::PROCESS_REDIRECT,"PROCESS_REDIRECT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProcessFlag_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProcessFlag_obj::PROCESS_DEFAULT,"PROCESS_DEFAULT");
	HX_VISIT_MEMBER_NAME(ProcessFlag_obj::PROCESS_REDIRECT,"PROCESS_REDIRECT");
};

#endif

::hx::Class ProcessFlag_obj::__mClass;

static ::String ProcessFlag_obj_sStaticFields[] = {
	HX_("PROCESS_DEFAULT",71,e3,53,73),
	HX_("PROCESS_REDIRECT",4c,46,52,63),
	::String(null())
};

void ProcessFlag_obj::__register()
{
	ProcessFlag_obj _hx_dummy;
	ProcessFlag_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.ProcessFlag",0f,e2,b7,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ProcessFlag_obj::__GetStatic;
	__mClass->mSetStaticField = &ProcessFlag_obj::__SetStatic;
	__mClass->mMarkFunc = ProcessFlag_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ProcessFlag_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ProcessFlag_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProcessFlag_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProcessFlag_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProcessFlag_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ProcessFlag_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b02275eccde5de2c_5_boot)
HXDLIN(   5)		PROCESS_DEFAULT = wxPROCESS_DEFAULT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b02275eccde5de2c_6_boot)
HXDLIN(   6)		PROCESS_REDIRECT = wxPROCESS_REDIRECT;
            	}
}

} // end namespace wx
} // end namespace widgets
