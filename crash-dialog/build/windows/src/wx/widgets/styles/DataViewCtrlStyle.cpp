#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_DataViewCtrlStyle
#include <wx/widgets/styles/DataViewCtrlStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c66f63c56fb858b5_5_boot,"wx.widgets.styles.DataViewCtrlStyle","boot",0xc9958589,"wx.widgets.styles.DataViewCtrlStyle.boot","wx/widgets/styles/DataViewCtrlStyle.hx",5,0x0702dd66)
HX_LOCAL_STACK_FRAME(_hx_pos_c66f63c56fb858b5_6_boot,"wx.widgets.styles.DataViewCtrlStyle","boot",0xc9958589,"wx.widgets.styles.DataViewCtrlStyle.boot","wx/widgets/styles/DataViewCtrlStyle.hx",6,0x0702dd66)
HX_LOCAL_STACK_FRAME(_hx_pos_c66f63c56fb858b5_7_boot,"wx.widgets.styles.DataViewCtrlStyle","boot",0xc9958589,"wx.widgets.styles.DataViewCtrlStyle.boot","wx/widgets/styles/DataViewCtrlStyle.hx",7,0x0702dd66)
HX_LOCAL_STACK_FRAME(_hx_pos_c66f63c56fb858b5_8_boot,"wx.widgets.styles.DataViewCtrlStyle","boot",0xc9958589,"wx.widgets.styles.DataViewCtrlStyle.boot","wx/widgets/styles/DataViewCtrlStyle.hx",8,0x0702dd66)
HX_LOCAL_STACK_FRAME(_hx_pos_c66f63c56fb858b5_9_boot,"wx.widgets.styles.DataViewCtrlStyle","boot",0xc9958589,"wx.widgets.styles.DataViewCtrlStyle.boot","wx/widgets/styles/DataViewCtrlStyle.hx",9,0x0702dd66)
HX_LOCAL_STACK_FRAME(_hx_pos_c66f63c56fb858b5_10_boot,"wx.widgets.styles.DataViewCtrlStyle","boot",0xc9958589,"wx.widgets.styles.DataViewCtrlStyle.boot","wx/widgets/styles/DataViewCtrlStyle.hx",10,0x0702dd66)
namespace wx{
namespace widgets{
namespace styles{

void DataViewCtrlStyle_obj::__construct() { }

Dynamic DataViewCtrlStyle_obj::__CreateEmpty() { return new DataViewCtrlStyle_obj; }

void *DataViewCtrlStyle_obj::_hx_vtable = 0;

Dynamic DataViewCtrlStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewCtrlStyle_obj > _hx_result = new DataViewCtrlStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataViewCtrlStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0212b76f;
}

int DataViewCtrlStyle_obj::DV_HORIZ_RULES;

int DataViewCtrlStyle_obj::DV_MULTIPLE;

int DataViewCtrlStyle_obj::DV_NO_HEADER;

int DataViewCtrlStyle_obj::DV_ROW_LINES;

int DataViewCtrlStyle_obj::DV_SINGLE;

int DataViewCtrlStyle_obj::DV_VERT_RULES;


DataViewCtrlStyle_obj::DataViewCtrlStyle_obj()
{
}

bool DataViewCtrlStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"DV_SINGLE") ) { outValue = ( DV_SINGLE ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"DV_MULTIPLE") ) { outValue = ( DV_MULTIPLE ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DV_NO_HEADER") ) { outValue = ( DV_NO_HEADER ); return true; }
		if (HX_FIELD_EQ(inName,"DV_ROW_LINES") ) { outValue = ( DV_ROW_LINES ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DV_VERT_RULES") ) { outValue = ( DV_VERT_RULES ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DV_HORIZ_RULES") ) { outValue = ( DV_HORIZ_RULES ); return true; }
	}
	return false;
}

bool DataViewCtrlStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"DV_SINGLE") ) { DV_SINGLE=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"DV_MULTIPLE") ) { DV_MULTIPLE=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DV_NO_HEADER") ) { DV_NO_HEADER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DV_ROW_LINES") ) { DV_ROW_LINES=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DV_VERT_RULES") ) { DV_VERT_RULES=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DV_HORIZ_RULES") ) { DV_HORIZ_RULES=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DataViewCtrlStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DataViewCtrlStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &DataViewCtrlStyle_obj::DV_HORIZ_RULES,HX_("DV_HORIZ_RULES",c7,f4,b4,0a)},
	{::hx::fsInt,(void *) &DataViewCtrlStyle_obj::DV_MULTIPLE,HX_("DV_MULTIPLE",9d,2b,c1,0f)},
	{::hx::fsInt,(void *) &DataViewCtrlStyle_obj::DV_NO_HEADER,HX_("DV_NO_HEADER",de,9e,4c,27)},
	{::hx::fsInt,(void *) &DataViewCtrlStyle_obj::DV_ROW_LINES,HX_("DV_ROW_LINES",6d,34,bb,65)},
	{::hx::fsInt,(void *) &DataViewCtrlStyle_obj::DV_SINGLE,HX_("DV_SINGLE",d5,5e,2d,19)},
	{::hx::fsInt,(void *) &DataViewCtrlStyle_obj::DV_VERT_RULES,HX_("DV_VERT_RULES",56,f1,6e,46)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void DataViewCtrlStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataViewCtrlStyle_obj::DV_HORIZ_RULES,"DV_HORIZ_RULES");
	HX_MARK_MEMBER_NAME(DataViewCtrlStyle_obj::DV_MULTIPLE,"DV_MULTIPLE");
	HX_MARK_MEMBER_NAME(DataViewCtrlStyle_obj::DV_NO_HEADER,"DV_NO_HEADER");
	HX_MARK_MEMBER_NAME(DataViewCtrlStyle_obj::DV_ROW_LINES,"DV_ROW_LINES");
	HX_MARK_MEMBER_NAME(DataViewCtrlStyle_obj::DV_SINGLE,"DV_SINGLE");
	HX_MARK_MEMBER_NAME(DataViewCtrlStyle_obj::DV_VERT_RULES,"DV_VERT_RULES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DataViewCtrlStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataViewCtrlStyle_obj::DV_HORIZ_RULES,"DV_HORIZ_RULES");
	HX_VISIT_MEMBER_NAME(DataViewCtrlStyle_obj::DV_MULTIPLE,"DV_MULTIPLE");
	HX_VISIT_MEMBER_NAME(DataViewCtrlStyle_obj::DV_NO_HEADER,"DV_NO_HEADER");
	HX_VISIT_MEMBER_NAME(DataViewCtrlStyle_obj::DV_ROW_LINES,"DV_ROW_LINES");
	HX_VISIT_MEMBER_NAME(DataViewCtrlStyle_obj::DV_SINGLE,"DV_SINGLE");
	HX_VISIT_MEMBER_NAME(DataViewCtrlStyle_obj::DV_VERT_RULES,"DV_VERT_RULES");
};

#endif

::hx::Class DataViewCtrlStyle_obj::__mClass;

static ::String DataViewCtrlStyle_obj_sStaticFields[] = {
	HX_("DV_HORIZ_RULES",c7,f4,b4,0a),
	HX_("DV_MULTIPLE",9d,2b,c1,0f),
	HX_("DV_NO_HEADER",de,9e,4c,27),
	HX_("DV_ROW_LINES",6d,34,bb,65),
	HX_("DV_SINGLE",d5,5e,2d,19),
	HX_("DV_VERT_RULES",56,f1,6e,46),
	::String(null())
};

void DataViewCtrlStyle_obj::__register()
{
	DataViewCtrlStyle_obj _hx_dummy;
	DataViewCtrlStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.DataViewCtrlStyle",77,de,27,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataViewCtrlStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &DataViewCtrlStyle_obj::__SetStatic;
	__mClass->mMarkFunc = DataViewCtrlStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DataViewCtrlStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DataViewCtrlStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DataViewCtrlStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewCtrlStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewCtrlStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DataViewCtrlStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c66f63c56fb858b5_5_boot)
HXDLIN(   5)		DV_HORIZ_RULES = wxDV_HORIZ_RULES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c66f63c56fb858b5_6_boot)
HXDLIN(   6)		DV_MULTIPLE = wxDV_MULTIPLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c66f63c56fb858b5_7_boot)
HXDLIN(   7)		DV_NO_HEADER = wxDV_NO_HEADER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c66f63c56fb858b5_8_boot)
HXDLIN(   8)		DV_ROW_LINES = wxDV_ROW_LINES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c66f63c56fb858b5_9_boot)
HXDLIN(   9)		DV_SINGLE = wxDV_SINGLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c66f63c56fb858b5_10_boot)
HXDLIN(  10)		DV_VERT_RULES = wxDV_VERT_RULES;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
