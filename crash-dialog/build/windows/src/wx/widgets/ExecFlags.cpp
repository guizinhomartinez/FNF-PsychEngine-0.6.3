#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_ExecFlags
#include <wx/widgets/ExecFlags.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_80caed8d0e1356b9_8_boot,"wx.widgets.ExecFlags","boot",0x9a9205d6,"wx.widgets.ExecFlags.boot","wx/widgets/ExecFlags.hx",8,0xc2c24fb6)
HX_LOCAL_STACK_FRAME(_hx_pos_80caed8d0e1356b9_9_boot,"wx.widgets.ExecFlags","boot",0x9a9205d6,"wx.widgets.ExecFlags.boot","wx/widgets/ExecFlags.hx",9,0xc2c24fb6)
HX_LOCAL_STACK_FRAME(_hx_pos_80caed8d0e1356b9_10_boot,"wx.widgets.ExecFlags","boot",0x9a9205d6,"wx.widgets.ExecFlags.boot","wx/widgets/ExecFlags.hx",10,0xc2c24fb6)
HX_LOCAL_STACK_FRAME(_hx_pos_80caed8d0e1356b9_11_boot,"wx.widgets.ExecFlags","boot",0x9a9205d6,"wx.widgets.ExecFlags.boot","wx/widgets/ExecFlags.hx",11,0xc2c24fb6)
HX_LOCAL_STACK_FRAME(_hx_pos_80caed8d0e1356b9_12_boot,"wx.widgets.ExecFlags","boot",0x9a9205d6,"wx.widgets.ExecFlags.boot","wx/widgets/ExecFlags.hx",12,0xc2c24fb6)
HX_LOCAL_STACK_FRAME(_hx_pos_80caed8d0e1356b9_13_boot,"wx.widgets.ExecFlags","boot",0x9a9205d6,"wx.widgets.ExecFlags.boot","wx/widgets/ExecFlags.hx",13,0xc2c24fb6)
HX_LOCAL_STACK_FRAME(_hx_pos_80caed8d0e1356b9_14_boot,"wx.widgets.ExecFlags","boot",0x9a9205d6,"wx.widgets.ExecFlags.boot","wx/widgets/ExecFlags.hx",14,0xc2c24fb6)
HX_LOCAL_STACK_FRAME(_hx_pos_80caed8d0e1356b9_15_boot,"wx.widgets.ExecFlags","boot",0x9a9205d6,"wx.widgets.ExecFlags.boot","wx/widgets/ExecFlags.hx",15,0xc2c24fb6)
namespace wx{
namespace widgets{

void ExecFlags_obj::__construct() { }

Dynamic ExecFlags_obj::__CreateEmpty() { return new ExecFlags_obj; }

void *ExecFlags_obj::_hx_vtable = 0;

Dynamic ExecFlags_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ExecFlags_obj > _hx_result = new ExecFlags_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ExecFlags_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67e8b768;
}

int ExecFlags_obj::ASYNC;

int ExecFlags_obj::SYNC;

int ExecFlags_obj::SHOW_CONSOLE;

int ExecFlags_obj::MAKE_GROUP_LEADER;

int ExecFlags_obj::NODISABLE;

int ExecFlags_obj::NOEVENTS;

int ExecFlags_obj::HIDE_CONSOLE;

int ExecFlags_obj::BLOCK;


ExecFlags_obj::ExecFlags_obj()
{
}

bool ExecFlags_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SYNC") ) { outValue = ( SYNC ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ASYNC") ) { outValue = ( ASYNC ); return true; }
		if (HX_FIELD_EQ(inName,"BLOCK") ) { outValue = ( BLOCK ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NOEVENTS") ) { outValue = ( NOEVENTS ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"NODISABLE") ) { outValue = ( NODISABLE ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SHOW_CONSOLE") ) { outValue = ( SHOW_CONSOLE ); return true; }
		if (HX_FIELD_EQ(inName,"HIDE_CONSOLE") ) { outValue = ( HIDE_CONSOLE ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MAKE_GROUP_LEADER") ) { outValue = ( MAKE_GROUP_LEADER ); return true; }
	}
	return false;
}

bool ExecFlags_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SYNC") ) { SYNC=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ASYNC") ) { ASYNC=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BLOCK") ) { BLOCK=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NOEVENTS") ) { NOEVENTS=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"NODISABLE") ) { NODISABLE=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SHOW_CONSOLE") ) { SHOW_CONSOLE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"HIDE_CONSOLE") ) { HIDE_CONSOLE=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MAKE_GROUP_LEADER") ) { MAKE_GROUP_LEADER=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ExecFlags_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ExecFlags_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ExecFlags_obj::ASYNC,HX_("ASYNC",1c,37,2c,a4)},
	{::hx::fsInt,(void *) &ExecFlags_obj::SYNC,HX_("SYNC",5b,82,20,37)},
	{::hx::fsInt,(void *) &ExecFlags_obj::SHOW_CONSOLE,HX_("SHOW_CONSOLE",b5,7a,06,69)},
	{::hx::fsInt,(void *) &ExecFlags_obj::MAKE_GROUP_LEADER,HX_("MAKE_GROUP_LEADER",9a,f3,11,73)},
	{::hx::fsInt,(void *) &ExecFlags_obj::NODISABLE,HX_("NODISABLE",a7,73,4b,1d)},
	{::hx::fsInt,(void *) &ExecFlags_obj::NOEVENTS,HX_("NOEVENTS",1a,66,6b,8b)},
	{::hx::fsInt,(void *) &ExecFlags_obj::HIDE_CONSOLE,HX_("HIDE_CONSOLE",7a,a7,7e,fe)},
	{::hx::fsInt,(void *) &ExecFlags_obj::BLOCK,HX_("BLOCK",2d,ad,ea,32)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ExecFlags_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExecFlags_obj::ASYNC,"ASYNC");
	HX_MARK_MEMBER_NAME(ExecFlags_obj::SYNC,"SYNC");
	HX_MARK_MEMBER_NAME(ExecFlags_obj::SHOW_CONSOLE,"SHOW_CONSOLE");
	HX_MARK_MEMBER_NAME(ExecFlags_obj::MAKE_GROUP_LEADER,"MAKE_GROUP_LEADER");
	HX_MARK_MEMBER_NAME(ExecFlags_obj::NODISABLE,"NODISABLE");
	HX_MARK_MEMBER_NAME(ExecFlags_obj::NOEVENTS,"NOEVENTS");
	HX_MARK_MEMBER_NAME(ExecFlags_obj::HIDE_CONSOLE,"HIDE_CONSOLE");
	HX_MARK_MEMBER_NAME(ExecFlags_obj::BLOCK,"BLOCK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ExecFlags_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExecFlags_obj::ASYNC,"ASYNC");
	HX_VISIT_MEMBER_NAME(ExecFlags_obj::SYNC,"SYNC");
	HX_VISIT_MEMBER_NAME(ExecFlags_obj::SHOW_CONSOLE,"SHOW_CONSOLE");
	HX_VISIT_MEMBER_NAME(ExecFlags_obj::MAKE_GROUP_LEADER,"MAKE_GROUP_LEADER");
	HX_VISIT_MEMBER_NAME(ExecFlags_obj::NODISABLE,"NODISABLE");
	HX_VISIT_MEMBER_NAME(ExecFlags_obj::NOEVENTS,"NOEVENTS");
	HX_VISIT_MEMBER_NAME(ExecFlags_obj::HIDE_CONSOLE,"HIDE_CONSOLE");
	HX_VISIT_MEMBER_NAME(ExecFlags_obj::BLOCK,"BLOCK");
};

#endif

::hx::Class ExecFlags_obj::__mClass;

static ::String ExecFlags_obj_sStaticFields[] = {
	HX_("ASYNC",1c,37,2c,a4),
	HX_("SYNC",5b,82,20,37),
	HX_("SHOW_CONSOLE",b5,7a,06,69),
	HX_("MAKE_GROUP_LEADER",9a,f3,11,73),
	HX_("NODISABLE",a7,73,4b,1d),
	HX_("NOEVENTS",1a,66,6b,8b),
	HX_("HIDE_CONSOLE",7a,a7,7e,fe),
	HX_("BLOCK",2d,ad,ea,32),
	::String(null())
};

void ExecFlags_obj::__register()
{
	ExecFlags_obj _hx_dummy;
	ExecFlags_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.ExecFlags",4a,41,b5,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ExecFlags_obj::__GetStatic;
	__mClass->mSetStaticField = &ExecFlags_obj::__SetStatic;
	__mClass->mMarkFunc = ExecFlags_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ExecFlags_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ExecFlags_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ExecFlags_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExecFlags_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExecFlags_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ExecFlags_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_80caed8d0e1356b9_8_boot)
HXDLIN(   8)		ASYNC = wxEXEC_ASYNC;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80caed8d0e1356b9_9_boot)
HXDLIN(   9)		SYNC = wxEXEC_SYNC;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80caed8d0e1356b9_10_boot)
HXDLIN(  10)		SHOW_CONSOLE = wxEXEC_SHOW_CONSOLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80caed8d0e1356b9_11_boot)
HXDLIN(  11)		MAKE_GROUP_LEADER = wxEXEC_MAKE_GROUP_LEADER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80caed8d0e1356b9_12_boot)
HXDLIN(  12)		NODISABLE = wxEXEC_NODISABLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80caed8d0e1356b9_13_boot)
HXDLIN(  13)		NOEVENTS = wxEXEC_NOEVENTS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80caed8d0e1356b9_14_boot)
HXDLIN(  14)		HIDE_CONSOLE = wxEXEC_HIDE_CONSOLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80caed8d0e1356b9_15_boot)
HXDLIN(  15)		BLOCK = wxEXEC_BLOCK;
            	}
}

} // end namespace wx
} // end namespace widgets
