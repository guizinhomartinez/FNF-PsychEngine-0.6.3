#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_StaticTextStyle
#include <wx/widgets/styles/StaticTextStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_71c9383a266852cc_6_boot,"wx.widgets.styles.StaticTextStyle","boot",0x61c4b34a,"wx.widgets.styles.StaticTextStyle.boot","wx/widgets/styles/StaticTextStyle.hx",6,0xe5146b27)
HX_LOCAL_STACK_FRAME(_hx_pos_71c9383a266852cc_7_boot,"wx.widgets.styles.StaticTextStyle","boot",0x61c4b34a,"wx.widgets.styles.StaticTextStyle.boot","wx/widgets/styles/StaticTextStyle.hx",7,0xe5146b27)
HX_LOCAL_STACK_FRAME(_hx_pos_71c9383a266852cc_8_boot,"wx.widgets.styles.StaticTextStyle","boot",0x61c4b34a,"wx.widgets.styles.StaticTextStyle.boot","wx/widgets/styles/StaticTextStyle.hx",8,0xe5146b27)
HX_LOCAL_STACK_FRAME(_hx_pos_71c9383a266852cc_9_boot,"wx.widgets.styles.StaticTextStyle","boot",0x61c4b34a,"wx.widgets.styles.StaticTextStyle.boot","wx/widgets/styles/StaticTextStyle.hx",9,0xe5146b27)
HX_LOCAL_STACK_FRAME(_hx_pos_71c9383a266852cc_10_boot,"wx.widgets.styles.StaticTextStyle","boot",0x61c4b34a,"wx.widgets.styles.StaticTextStyle.boot","wx/widgets/styles/StaticTextStyle.hx",10,0xe5146b27)
HX_LOCAL_STACK_FRAME(_hx_pos_71c9383a266852cc_11_boot,"wx.widgets.styles.StaticTextStyle","boot",0x61c4b34a,"wx.widgets.styles.StaticTextStyle.boot","wx/widgets/styles/StaticTextStyle.hx",11,0xe5146b27)
HX_LOCAL_STACK_FRAME(_hx_pos_71c9383a266852cc_12_boot,"wx.widgets.styles.StaticTextStyle","boot",0x61c4b34a,"wx.widgets.styles.StaticTextStyle.boot","wx/widgets/styles/StaticTextStyle.hx",12,0xe5146b27)
namespace wx{
namespace widgets{
namespace styles{

void StaticTextStyle_obj::__construct() { }

Dynamic StaticTextStyle_obj::__CreateEmpty() { return new StaticTextStyle_obj; }

void *StaticTextStyle_obj::_hx_vtable = 0;

Dynamic StaticTextStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticTextStyle_obj > _hx_result = new StaticTextStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticTextStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3384cc86;
}

int StaticTextStyle_obj::ALIGN_LEFT;

int StaticTextStyle_obj::ALIGN_RIGHT;

int StaticTextStyle_obj::ALIGN_CENTRE_HORIZONTAL;

int StaticTextStyle_obj::NO_AUTORESIZE;

int StaticTextStyle_obj::ELLIPSIZE_START;

int StaticTextStyle_obj::ELLIPSIZE_MIDDLE;

int StaticTextStyle_obj::ELLIPSIZE_END;


StaticTextStyle_obj::StaticTextStyle_obj()
{
}

bool StaticTextStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { outValue = ( ALIGN_LEFT ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ALIGN_RIGHT") ) { outValue = ( ALIGN_RIGHT ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"NO_AUTORESIZE") ) { outValue = ( NO_AUTORESIZE ); return true; }
		if (HX_FIELD_EQ(inName,"ELLIPSIZE_END") ) { outValue = ( ELLIPSIZE_END ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ELLIPSIZE_START") ) { outValue = ( ELLIPSIZE_START ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ELLIPSIZE_MIDDLE") ) { outValue = ( ELLIPSIZE_MIDDLE ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTRE_HORIZONTAL") ) { outValue = ( ALIGN_CENTRE_HORIZONTAL ); return true; }
	}
	return false;
}

bool StaticTextStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { ALIGN_LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ALIGN_RIGHT") ) { ALIGN_RIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"NO_AUTORESIZE") ) { NO_AUTORESIZE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ELLIPSIZE_END") ) { ELLIPSIZE_END=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ELLIPSIZE_START") ) { ELLIPSIZE_START=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ELLIPSIZE_MIDDLE") ) { ELLIPSIZE_MIDDLE=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTRE_HORIZONTAL") ) { ALIGN_CENTRE_HORIZONTAL=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StaticTextStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StaticTextStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &StaticTextStyle_obj::ALIGN_LEFT,HX_("ALIGN_LEFT",21,27,c2,5f)},
	{::hx::fsInt,(void *) &StaticTextStyle_obj::ALIGN_RIGHT,HX_("ALIGN_RIGHT",62,23,2d,e1)},
	{::hx::fsInt,(void *) &StaticTextStyle_obj::ALIGN_CENTRE_HORIZONTAL,HX_("ALIGN_CENTRE_HORIZONTAL",6e,d1,eb,e6)},
	{::hx::fsInt,(void *) &StaticTextStyle_obj::NO_AUTORESIZE,HX_("NO_AUTORESIZE",21,49,fe,8e)},
	{::hx::fsInt,(void *) &StaticTextStyle_obj::ELLIPSIZE_START,HX_("ELLIPSIZE_START",30,bb,65,7b)},
	{::hx::fsInt,(void *) &StaticTextStyle_obj::ELLIPSIZE_MIDDLE,HX_("ELLIPSIZE_MIDDLE",a7,80,02,c4)},
	{::hx::fsInt,(void *) &StaticTextStyle_obj::ELLIPSIZE_END,HX_("ELLIPSIZE_END",29,77,29,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StaticTextStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticTextStyle_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_MARK_MEMBER_NAME(StaticTextStyle_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_MARK_MEMBER_NAME(StaticTextStyle_obj::ALIGN_CENTRE_HORIZONTAL,"ALIGN_CENTRE_HORIZONTAL");
	HX_MARK_MEMBER_NAME(StaticTextStyle_obj::NO_AUTORESIZE,"NO_AUTORESIZE");
	HX_MARK_MEMBER_NAME(StaticTextStyle_obj::ELLIPSIZE_START,"ELLIPSIZE_START");
	HX_MARK_MEMBER_NAME(StaticTextStyle_obj::ELLIPSIZE_MIDDLE,"ELLIPSIZE_MIDDLE");
	HX_MARK_MEMBER_NAME(StaticTextStyle_obj::ELLIPSIZE_END,"ELLIPSIZE_END");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticTextStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticTextStyle_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_VISIT_MEMBER_NAME(StaticTextStyle_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_VISIT_MEMBER_NAME(StaticTextStyle_obj::ALIGN_CENTRE_HORIZONTAL,"ALIGN_CENTRE_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(StaticTextStyle_obj::NO_AUTORESIZE,"NO_AUTORESIZE");
	HX_VISIT_MEMBER_NAME(StaticTextStyle_obj::ELLIPSIZE_START,"ELLIPSIZE_START");
	HX_VISIT_MEMBER_NAME(StaticTextStyle_obj::ELLIPSIZE_MIDDLE,"ELLIPSIZE_MIDDLE");
	HX_VISIT_MEMBER_NAME(StaticTextStyle_obj::ELLIPSIZE_END,"ELLIPSIZE_END");
};

#endif

::hx::Class StaticTextStyle_obj::__mClass;

static ::String StaticTextStyle_obj_sStaticFields[] = {
	HX_("ALIGN_LEFT",21,27,c2,5f),
	HX_("ALIGN_RIGHT",62,23,2d,e1),
	HX_("ALIGN_CENTRE_HORIZONTAL",6e,d1,eb,e6),
	HX_("NO_AUTORESIZE",21,49,fe,8e),
	HX_("ELLIPSIZE_START",30,bb,65,7b),
	HX_("ELLIPSIZE_MIDDLE",a7,80,02,c4),
	HX_("ELLIPSIZE_END",29,77,29,b1),
	::String(null())
};

void StaticTextStyle_obj::__register()
{
	StaticTextStyle_obj _hx_dummy;
	StaticTextStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.StaticTextStyle",56,88,e9,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StaticTextStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &StaticTextStyle_obj::__SetStatic;
	__mClass->mMarkFunc = StaticTextStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StaticTextStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StaticTextStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticTextStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticTextStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticTextStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StaticTextStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_71c9383a266852cc_6_boot)
HXDLIN(   6)		ALIGN_LEFT = wxALIGN_LEFT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_71c9383a266852cc_7_boot)
HXDLIN(   7)		ALIGN_RIGHT = wxALIGN_RIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_71c9383a266852cc_8_boot)
HXDLIN(   8)		ALIGN_CENTRE_HORIZONTAL = wxALIGN_CENTRE_HORIZONTAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_71c9383a266852cc_9_boot)
HXDLIN(   9)		NO_AUTORESIZE = wxST_NO_AUTORESIZE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_71c9383a266852cc_10_boot)
HXDLIN(  10)		ELLIPSIZE_START = wxST_ELLIPSIZE_START;
            	}
{
            	HX_STACKFRAME(&_hx_pos_71c9383a266852cc_11_boot)
HXDLIN(  11)		ELLIPSIZE_MIDDLE = wxST_ELLIPSIZE_MIDDLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_71c9383a266852cc_12_boot)
HXDLIN(  12)		ELLIPSIZE_END = wxST_ELLIPSIZE_END;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
