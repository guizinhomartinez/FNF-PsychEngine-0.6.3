#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_ListCtrlStyle
#include <wx/widgets/styles/ListCtrlStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_5_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",5,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_6_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",6,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_7_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",7,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_8_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",8,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_9_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",9,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_10_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",10,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_11_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",11,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_12_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",12,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_13_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",13,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_14_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",14,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_15_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",15,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_16_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",16,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_17_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",17,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_18_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",18,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_19_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",19,0xe55df715)
namespace wx{
namespace widgets{
namespace styles{

void ListCtrlStyle_obj::__construct() { }

Dynamic ListCtrlStyle_obj::__CreateEmpty() { return new ListCtrlStyle_obj; }

void *ListCtrlStyle_obj::_hx_vtable = 0;

Dynamic ListCtrlStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListCtrlStyle_obj > _hx_result = new ListCtrlStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ListCtrlStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x14b432e0;
}

int ListCtrlStyle_obj::LIST;

int ListCtrlStyle_obj::REPORT;

int ListCtrlStyle_obj::VIRTUAL;

int ListCtrlStyle_obj::ICON;

int ListCtrlStyle_obj::SMALL_ICON;

int ListCtrlStyle_obj::ALIGN_TOP;

int ListCtrlStyle_obj::ALIGN_LEFT;

int ListCtrlStyle_obj::AUTOARRANGE;

int ListCtrlStyle_obj::EDIT_LABELS;

int ListCtrlStyle_obj::NO_HEADER;

int ListCtrlStyle_obj::SINGLE_SEL;

int ListCtrlStyle_obj::SORT_ASCENDING;

int ListCtrlStyle_obj::SORT_DESCENDING;

int ListCtrlStyle_obj::HRULES;

int ListCtrlStyle_obj::VRULES;


ListCtrlStyle_obj::ListCtrlStyle_obj()
{
}

bool ListCtrlStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LIST") ) { outValue = ( LIST ); return true; }
		if (HX_FIELD_EQ(inName,"ICON") ) { outValue = ( ICON ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"REPORT") ) { outValue = ( REPORT ); return true; }
		if (HX_FIELD_EQ(inName,"HRULES") ) { outValue = ( HRULES ); return true; }
		if (HX_FIELD_EQ(inName,"VRULES") ) { outValue = ( VRULES ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VIRTUAL") ) { outValue = ( VIRTUAL ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALIGN_TOP") ) { outValue = ( ALIGN_TOP ); return true; }
		if (HX_FIELD_EQ(inName,"NO_HEADER") ) { outValue = ( NO_HEADER ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SMALL_ICON") ) { outValue = ( SMALL_ICON ); return true; }
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { outValue = ( ALIGN_LEFT ); return true; }
		if (HX_FIELD_EQ(inName,"SINGLE_SEL") ) { outValue = ( SINGLE_SEL ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"AUTOARRANGE") ) { outValue = ( AUTOARRANGE ); return true; }
		if (HX_FIELD_EQ(inName,"EDIT_LABELS") ) { outValue = ( EDIT_LABELS ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SORT_ASCENDING") ) { outValue = ( SORT_ASCENDING ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SORT_DESCENDING") ) { outValue = ( SORT_DESCENDING ); return true; }
	}
	return false;
}

bool ListCtrlStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LIST") ) { LIST=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ICON") ) { ICON=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"REPORT") ) { REPORT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"HRULES") ) { HRULES=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"VRULES") ) { VRULES=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VIRTUAL") ) { VIRTUAL=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALIGN_TOP") ) { ALIGN_TOP=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NO_HEADER") ) { NO_HEADER=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SMALL_ICON") ) { SMALL_ICON=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { ALIGN_LEFT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SINGLE_SEL") ) { SINGLE_SEL=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"AUTOARRANGE") ) { AUTOARRANGE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"EDIT_LABELS") ) { EDIT_LABELS=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SORT_ASCENDING") ) { SORT_ASCENDING=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SORT_DESCENDING") ) { SORT_DESCENDING=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ListCtrlStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ListCtrlStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::LIST,HX_("LIST",5e,e4,73,32)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::REPORT,HX_("REPORT",b4,e8,06,b9)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::VIRTUAL,HX_("VIRTUAL",eb,71,e5,96)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::ICON,HX_("ICON",79,af,73,30)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::SMALL_ICON,HX_("SMALL_ICON",51,e5,93,ef)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::ALIGN_TOP,HX_("ALIGN_TOP",9b,8c,87,f1)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::ALIGN_LEFT,HX_("ALIGN_LEFT",21,27,c2,5f)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::AUTOARRANGE,HX_("AUTOARRANGE",7d,4f,3f,29)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::EDIT_LABELS,HX_("EDIT_LABELS",d4,08,96,25)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::NO_HEADER,HX_("NO_HEADER",0b,fd,18,0a)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::SINGLE_SEL,HX_("SINGLE_SEL",03,73,9e,d1)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::SORT_ASCENDING,HX_("SORT_ASCENDING",57,9a,57,02)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::SORT_DESCENDING,HX_("SORT_DESCENDING",79,07,71,27)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::HRULES,HX_("HRULES",8f,96,f6,38)},
	{::hx::fsInt,(void *) &ListCtrlStyle_obj::VRULES,HX_("VRULES",c1,a3,f5,d1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ListCtrlStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::LIST,"LIST");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::REPORT,"REPORT");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::VIRTUAL,"VIRTUAL");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::ICON,"ICON");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::SMALL_ICON,"SMALL_ICON");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::ALIGN_TOP,"ALIGN_TOP");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::AUTOARRANGE,"AUTOARRANGE");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::EDIT_LABELS,"EDIT_LABELS");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::NO_HEADER,"NO_HEADER");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::SINGLE_SEL,"SINGLE_SEL");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::SORT_ASCENDING,"SORT_ASCENDING");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::SORT_DESCENDING,"SORT_DESCENDING");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::HRULES,"HRULES");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::VRULES,"VRULES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListCtrlStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::LIST,"LIST");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::REPORT,"REPORT");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::VIRTUAL,"VIRTUAL");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::ICON,"ICON");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::SMALL_ICON,"SMALL_ICON");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::ALIGN_TOP,"ALIGN_TOP");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::AUTOARRANGE,"AUTOARRANGE");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::EDIT_LABELS,"EDIT_LABELS");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::NO_HEADER,"NO_HEADER");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::SINGLE_SEL,"SINGLE_SEL");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::SORT_ASCENDING,"SORT_ASCENDING");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::SORT_DESCENDING,"SORT_DESCENDING");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::HRULES,"HRULES");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::VRULES,"VRULES");
};

#endif

::hx::Class ListCtrlStyle_obj::__mClass;

static ::String ListCtrlStyle_obj_sStaticFields[] = {
	HX_("LIST",5e,e4,73,32),
	HX_("REPORT",b4,e8,06,b9),
	HX_("VIRTUAL",eb,71,e5,96),
	HX_("ICON",79,af,73,30),
	HX_("SMALL_ICON",51,e5,93,ef),
	HX_("ALIGN_TOP",9b,8c,87,f1),
	HX_("ALIGN_LEFT",21,27,c2,5f),
	HX_("AUTOARRANGE",7d,4f,3f,29),
	HX_("EDIT_LABELS",d4,08,96,25),
	HX_("NO_HEADER",0b,fd,18,0a),
	HX_("SINGLE_SEL",03,73,9e,d1),
	HX_("SORT_ASCENDING",57,9a,57,02),
	HX_("SORT_DESCENDING",79,07,71,27),
	HX_("HRULES",8f,96,f6,38),
	HX_("VRULES",c1,a3,f5,d1),
	::String(null())
};

void ListCtrlStyle_obj::__register()
{
	ListCtrlStyle_obj _hx_dummy;
	ListCtrlStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.ListCtrlStyle",e8,35,57,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ListCtrlStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &ListCtrlStyle_obj::__SetStatic;
	__mClass->mMarkFunc = ListCtrlStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ListCtrlStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ListCtrlStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListCtrlStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListCtrlStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListCtrlStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ListCtrlStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_5_boot)
HXDLIN(   5)		LIST = wxLC_LIST;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_6_boot)
HXDLIN(   6)		REPORT = wxLC_REPORT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_7_boot)
HXDLIN(   7)		VIRTUAL = wxLC_VIRTUAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_8_boot)
HXDLIN(   8)		ICON = wxLC_ICON;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_9_boot)
HXDLIN(   9)		SMALL_ICON = wxLC_SMALL_ICON;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_10_boot)
HXDLIN(  10)		ALIGN_TOP = wxLC_ALIGN_TOP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_11_boot)
HXDLIN(  11)		ALIGN_LEFT = wxLC_ALIGN_LEFT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_12_boot)
HXDLIN(  12)		AUTOARRANGE = wxLC_AUTOARRANGE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_13_boot)
HXDLIN(  13)		EDIT_LABELS = wxLC_EDIT_LABELS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_14_boot)
HXDLIN(  14)		NO_HEADER = wxLC_NO_HEADER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_15_boot)
HXDLIN(  15)		SINGLE_SEL = wxLC_SINGLE_SEL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_16_boot)
HXDLIN(  16)		SORT_ASCENDING = wxLC_SORT_ASCENDING;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_17_boot)
HXDLIN(  17)		SORT_DESCENDING = wxLC_SORT_DESCENDING;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_18_boot)
HXDLIN(  18)		HRULES = wxLC_HRULES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_19_boot)
HXDLIN(  19)		VRULES = wxLC_VRULES;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
