#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_StaticLineStyle
#include <wx/widgets/styles/StaticLineStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_bfc089ac49922960_6_boot,"wx.widgets.styles.StaticLineStyle","boot",0x44d97d51,"wx.widgets.styles.StaticLineStyle.boot","wx/widgets/styles/StaticLineStyle.hx",6,0xfb84d56e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc089ac49922960_7_boot,"wx.widgets.styles.StaticLineStyle","boot",0x44d97d51,"wx.widgets.styles.StaticLineStyle.boot","wx/widgets/styles/StaticLineStyle.hx",7,0xfb84d56e)
namespace wx{
namespace widgets{
namespace styles{

void StaticLineStyle_obj::__construct() { }

Dynamic StaticLineStyle_obj::__CreateEmpty() { return new StaticLineStyle_obj; }

void *StaticLineStyle_obj::_hx_vtable = 0;

Dynamic StaticLineStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticLineStyle_obj > _hx_result = new StaticLineStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticLineStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x414726a7;
}

int StaticLineStyle_obj::HORIZONTAL;

int StaticLineStyle_obj::VERTICAL;


StaticLineStyle_obj::StaticLineStyle_obj()
{
}

bool StaticLineStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"VERTICAL") ) { outValue = ( VERTICAL ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HORIZONTAL") ) { outValue = ( HORIZONTAL ); return true; }
	}
	return false;
}

bool StaticLineStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"VERTICAL") ) { VERTICAL=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HORIZONTAL") ) { HORIZONTAL=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StaticLineStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StaticLineStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &StaticLineStyle_obj::HORIZONTAL,HX_("HORIZONTAL",e4,70,cd,07)},
	{::hx::fsInt,(void *) &StaticLineStyle_obj::VERTICAL,HX_("VERTICAL",76,4c,9b,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StaticLineStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticLineStyle_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(StaticLineStyle_obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticLineStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticLineStyle_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(StaticLineStyle_obj::VERTICAL,"VERTICAL");
};

#endif

::hx::Class StaticLineStyle_obj::__mClass;

static ::String StaticLineStyle_obj_sStaticFields[] = {
	HX_("HORIZONTAL",e4,70,cd,07),
	HX_("VERTICAL",76,4c,9b,c3),
	::String(null())
};

void StaticLineStyle_obj::__register()
{
	StaticLineStyle_obj _hx_dummy;
	StaticLineStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.StaticLineStyle",af,fb,f6,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StaticLineStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &StaticLineStyle_obj::__SetStatic;
	__mClass->mMarkFunc = StaticLineStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StaticLineStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StaticLineStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticLineStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticLineStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticLineStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StaticLineStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bfc089ac49922960_6_boot)
HXDLIN(   6)		HORIZONTAL = wxLI_HORIZONTAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bfc089ac49922960_7_boot)
HXDLIN(   7)		VERTICAL = wxLI_VERTICAL;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
