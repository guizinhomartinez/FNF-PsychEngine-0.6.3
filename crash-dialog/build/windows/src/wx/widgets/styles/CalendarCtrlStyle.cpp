#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_CalendarCtrlStyle
#include <wx/widgets/styles/CalendarCtrlStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b0a90976cb8cbac8_5_boot,"wx.widgets.styles.CalendarCtrlStyle","boot",0x8b46eed8,"wx.widgets.styles.CalendarCtrlStyle.boot","wx/widgets/styles/CalendarCtrlStyle.hx",5,0x757004f5)
HX_LOCAL_STACK_FRAME(_hx_pos_b0a90976cb8cbac8_6_boot,"wx.widgets.styles.CalendarCtrlStyle","boot",0x8b46eed8,"wx.widgets.styles.CalendarCtrlStyle.boot","wx/widgets/styles/CalendarCtrlStyle.hx",6,0x757004f5)
HX_LOCAL_STACK_FRAME(_hx_pos_b0a90976cb8cbac8_7_boot,"wx.widgets.styles.CalendarCtrlStyle","boot",0x8b46eed8,"wx.widgets.styles.CalendarCtrlStyle.boot","wx/widgets/styles/CalendarCtrlStyle.hx",7,0x757004f5)
HX_LOCAL_STACK_FRAME(_hx_pos_b0a90976cb8cbac8_8_boot,"wx.widgets.styles.CalendarCtrlStyle","boot",0x8b46eed8,"wx.widgets.styles.CalendarCtrlStyle.boot","wx/widgets/styles/CalendarCtrlStyle.hx",8,0x757004f5)
HX_LOCAL_STACK_FRAME(_hx_pos_b0a90976cb8cbac8_9_boot,"wx.widgets.styles.CalendarCtrlStyle","boot",0x8b46eed8,"wx.widgets.styles.CalendarCtrlStyle.boot","wx/widgets/styles/CalendarCtrlStyle.hx",9,0x757004f5)
HX_LOCAL_STACK_FRAME(_hx_pos_b0a90976cb8cbac8_10_boot,"wx.widgets.styles.CalendarCtrlStyle","boot",0x8b46eed8,"wx.widgets.styles.CalendarCtrlStyle.boot","wx/widgets/styles/CalendarCtrlStyle.hx",10,0x757004f5)
HX_LOCAL_STACK_FRAME(_hx_pos_b0a90976cb8cbac8_11_boot,"wx.widgets.styles.CalendarCtrlStyle","boot",0x8b46eed8,"wx.widgets.styles.CalendarCtrlStyle.boot","wx/widgets/styles/CalendarCtrlStyle.hx",11,0x757004f5)
HX_LOCAL_STACK_FRAME(_hx_pos_b0a90976cb8cbac8_12_boot,"wx.widgets.styles.CalendarCtrlStyle","boot",0x8b46eed8,"wx.widgets.styles.CalendarCtrlStyle.boot","wx/widgets/styles/CalendarCtrlStyle.hx",12,0x757004f5)
namespace wx{
namespace widgets{
namespace styles{

void CalendarCtrlStyle_obj::__construct() { }

Dynamic CalendarCtrlStyle_obj::__CreateEmpty() { return new CalendarCtrlStyle_obj; }

void *CalendarCtrlStyle_obj::_hx_vtable = 0;

Dynamic CalendarCtrlStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CalendarCtrlStyle_obj > _hx_result = new CalendarCtrlStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CalendarCtrlStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c6ebc1c;
}

int CalendarCtrlStyle_obj::SUNDAY_FIRST;

int CalendarCtrlStyle_obj::MONDAY_FIRST;

int CalendarCtrlStyle_obj::SHOW_HOLIDAYS;

int CalendarCtrlStyle_obj::NO_YEAR_CHANGE;

int CalendarCtrlStyle_obj::NO_MONTH_CHANGE;

int CalendarCtrlStyle_obj::SEQUENTIAL_MONTH_SELECTION;

int CalendarCtrlStyle_obj::SHOW_SURROUNDING_WEEKS;

int CalendarCtrlStyle_obj::SHOW_WEEK_NUMBERS;


CalendarCtrlStyle_obj::CalendarCtrlStyle_obj()
{
}

bool CalendarCtrlStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"SUNDAY_FIRST") ) { outValue = ( SUNDAY_FIRST ); return true; }
		if (HX_FIELD_EQ(inName,"MONDAY_FIRST") ) { outValue = ( MONDAY_FIRST ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SHOW_HOLIDAYS") ) { outValue = ( SHOW_HOLIDAYS ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"NO_YEAR_CHANGE") ) { outValue = ( NO_YEAR_CHANGE ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NO_MONTH_CHANGE") ) { outValue = ( NO_MONTH_CHANGE ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SHOW_WEEK_NUMBERS") ) { outValue = ( SHOW_WEEK_NUMBERS ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"SHOW_SURROUNDING_WEEKS") ) { outValue = ( SHOW_SURROUNDING_WEEKS ); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"SEQUENTIAL_MONTH_SELECTION") ) { outValue = ( SEQUENTIAL_MONTH_SELECTION ); return true; }
	}
	return false;
}

bool CalendarCtrlStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"SUNDAY_FIRST") ) { SUNDAY_FIRST=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MONDAY_FIRST") ) { MONDAY_FIRST=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SHOW_HOLIDAYS") ) { SHOW_HOLIDAYS=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"NO_YEAR_CHANGE") ) { NO_YEAR_CHANGE=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NO_MONTH_CHANGE") ) { NO_MONTH_CHANGE=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SHOW_WEEK_NUMBERS") ) { SHOW_WEEK_NUMBERS=ioValue.Cast< int >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"SHOW_SURROUNDING_WEEKS") ) { SHOW_SURROUNDING_WEEKS=ioValue.Cast< int >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"SEQUENTIAL_MONTH_SELECTION") ) { SEQUENTIAL_MONTH_SELECTION=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CalendarCtrlStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CalendarCtrlStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CalendarCtrlStyle_obj::SUNDAY_FIRST,HX_("SUNDAY_FIRST",a1,cb,f2,2e)},
	{::hx::fsInt,(void *) &CalendarCtrlStyle_obj::MONDAY_FIRST,HX_("MONDAY_FIRST",61,b6,3f,9f)},
	{::hx::fsInt,(void *) &CalendarCtrlStyle_obj::SHOW_HOLIDAYS,HX_("SHOW_HOLIDAYS",9d,f8,9a,04)},
	{::hx::fsInt,(void *) &CalendarCtrlStyle_obj::NO_YEAR_CHANGE,HX_("NO_YEAR_CHANGE",b4,ee,85,98)},
	{::hx::fsInt,(void *) &CalendarCtrlStyle_obj::NO_MONTH_CHANGE,HX_("NO_MONTH_CHANGE",ed,6d,50,a2)},
	{::hx::fsInt,(void *) &CalendarCtrlStyle_obj::SEQUENTIAL_MONTH_SELECTION,HX_("SEQUENTIAL_MONTH_SELECTION",8d,de,d2,24)},
	{::hx::fsInt,(void *) &CalendarCtrlStyle_obj::SHOW_SURROUNDING_WEEKS,HX_("SHOW_SURROUNDING_WEEKS",e2,43,16,fe)},
	{::hx::fsInt,(void *) &CalendarCtrlStyle_obj::SHOW_WEEK_NUMBERS,HX_("SHOW_WEEK_NUMBERS",a1,ae,a9,97)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CalendarCtrlStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CalendarCtrlStyle_obj::SUNDAY_FIRST,"SUNDAY_FIRST");
	HX_MARK_MEMBER_NAME(CalendarCtrlStyle_obj::MONDAY_FIRST,"MONDAY_FIRST");
	HX_MARK_MEMBER_NAME(CalendarCtrlStyle_obj::SHOW_HOLIDAYS,"SHOW_HOLIDAYS");
	HX_MARK_MEMBER_NAME(CalendarCtrlStyle_obj::NO_YEAR_CHANGE,"NO_YEAR_CHANGE");
	HX_MARK_MEMBER_NAME(CalendarCtrlStyle_obj::NO_MONTH_CHANGE,"NO_MONTH_CHANGE");
	HX_MARK_MEMBER_NAME(CalendarCtrlStyle_obj::SEQUENTIAL_MONTH_SELECTION,"SEQUENTIAL_MONTH_SELECTION");
	HX_MARK_MEMBER_NAME(CalendarCtrlStyle_obj::SHOW_SURROUNDING_WEEKS,"SHOW_SURROUNDING_WEEKS");
	HX_MARK_MEMBER_NAME(CalendarCtrlStyle_obj::SHOW_WEEK_NUMBERS,"SHOW_WEEK_NUMBERS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CalendarCtrlStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CalendarCtrlStyle_obj::SUNDAY_FIRST,"SUNDAY_FIRST");
	HX_VISIT_MEMBER_NAME(CalendarCtrlStyle_obj::MONDAY_FIRST,"MONDAY_FIRST");
	HX_VISIT_MEMBER_NAME(CalendarCtrlStyle_obj::SHOW_HOLIDAYS,"SHOW_HOLIDAYS");
	HX_VISIT_MEMBER_NAME(CalendarCtrlStyle_obj::NO_YEAR_CHANGE,"NO_YEAR_CHANGE");
	HX_VISIT_MEMBER_NAME(CalendarCtrlStyle_obj::NO_MONTH_CHANGE,"NO_MONTH_CHANGE");
	HX_VISIT_MEMBER_NAME(CalendarCtrlStyle_obj::SEQUENTIAL_MONTH_SELECTION,"SEQUENTIAL_MONTH_SELECTION");
	HX_VISIT_MEMBER_NAME(CalendarCtrlStyle_obj::SHOW_SURROUNDING_WEEKS,"SHOW_SURROUNDING_WEEKS");
	HX_VISIT_MEMBER_NAME(CalendarCtrlStyle_obj::SHOW_WEEK_NUMBERS,"SHOW_WEEK_NUMBERS");
};

#endif

::hx::Class CalendarCtrlStyle_obj::__mClass;

static ::String CalendarCtrlStyle_obj_sStaticFields[] = {
	HX_("SUNDAY_FIRST",a1,cb,f2,2e),
	HX_("MONDAY_FIRST",61,b6,3f,9f),
	HX_("SHOW_HOLIDAYS",9d,f8,9a,04),
	HX_("NO_YEAR_CHANGE",b4,ee,85,98),
	HX_("NO_MONTH_CHANGE",ed,6d,50,a2),
	HX_("SEQUENTIAL_MONTH_SELECTION",8d,de,d2,24),
	HX_("SHOW_SURROUNDING_WEEKS",e2,43,16,fe),
	HX_("SHOW_WEEK_NUMBERS",a1,ae,a9,97),
	::String(null())
};

void CalendarCtrlStyle_obj::__register()
{
	CalendarCtrlStyle_obj _hx_dummy;
	CalendarCtrlStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.CalendarCtrlStyle",88,f7,6c,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CalendarCtrlStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &CalendarCtrlStyle_obj::__SetStatic;
	__mClass->mMarkFunc = CalendarCtrlStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CalendarCtrlStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CalendarCtrlStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CalendarCtrlStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CalendarCtrlStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CalendarCtrlStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CalendarCtrlStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b0a90976cb8cbac8_5_boot)
HXDLIN(   5)		SUNDAY_FIRST = wxCAL_SUNDAY_FIRST;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0a90976cb8cbac8_6_boot)
HXDLIN(   6)		MONDAY_FIRST = wxCAL_MONDAY_FIRST;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0a90976cb8cbac8_7_boot)
HXDLIN(   7)		SHOW_HOLIDAYS = wxCAL_SHOW_HOLIDAYS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0a90976cb8cbac8_8_boot)
HXDLIN(   8)		NO_YEAR_CHANGE = wxCAL_NO_YEAR_CHANGE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0a90976cb8cbac8_9_boot)
HXDLIN(   9)		NO_MONTH_CHANGE = wxCAL_NO_MONTH_CHANGE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0a90976cb8cbac8_10_boot)
HXDLIN(  10)		SEQUENTIAL_MONTH_SELECTION = wxCAL_SEQUENTIAL_MONTH_SELECTION;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0a90976cb8cbac8_11_boot)
HXDLIN(  11)		SHOW_SURROUNDING_WEEKS = wxCAL_SHOW_SURROUNDING_WEEKS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0a90976cb8cbac8_12_boot)
HXDLIN(  12)		SHOW_WEEK_NUMBERS = wxCAL_SHOW_WEEK_NUMBERS;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
