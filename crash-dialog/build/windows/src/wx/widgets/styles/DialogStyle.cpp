#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_DialogStyle
#include <wx/widgets/styles/DialogStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_10_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",10,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_12_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",12,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_14_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",14,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_16_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",16,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_18_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",18,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_20_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",20,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_22_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",22,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_26_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",26,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_31_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",31,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_35_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",35,0x2fba64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_58b00fd83c28904e_37_boot,"wx.widgets.styles.DialogStyle","boot",0x1c4d85d7,"wx.widgets.styles.DialogStyle.boot","wx/widgets/styles/DialogStyle.hx",37,0x2fba64f4)
namespace wx{
namespace widgets{
namespace styles{

void DialogStyle_obj::__construct() { }

Dynamic DialogStyle_obj::__CreateEmpty() { return new DialogStyle_obj; }

void *DialogStyle_obj::_hx_vtable = 0;

Dynamic DialogStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogStyle_obj > _hx_result = new DialogStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DialogStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e052d19;
}

int DialogStyle_obj::CAPTION;

int DialogStyle_obj::DEFAULT_DIALOG_STYLE;

int DialogStyle_obj::RESIZE_BORDER;

int DialogStyle_obj::SYSTEM_MENU;

int DialogStyle_obj::CLOSE_BOX;

int DialogStyle_obj::MAXIMIZE_BOX;

int DialogStyle_obj::MINIMIZE_BOX;

int DialogStyle_obj::STAY_ON_TOP;

int DialogStyle_obj::DIALOG_NO_PARENT;

int DialogStyle_obj::DIALOG_EX_CONTEXTHELP;

int DialogStyle_obj::DIALOG_EX_METAL;


DialogStyle_obj::DialogStyle_obj()
{
}

bool DialogStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"CAPTION") ) { outValue = ( CAPTION ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CLOSE_BOX") ) { outValue = ( CLOSE_BOX ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SYSTEM_MENU") ) { outValue = ( SYSTEM_MENU ); return true; }
		if (HX_FIELD_EQ(inName,"STAY_ON_TOP") ) { outValue = ( STAY_ON_TOP ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAXIMIZE_BOX") ) { outValue = ( MAXIMIZE_BOX ); return true; }
		if (HX_FIELD_EQ(inName,"MINIMIZE_BOX") ) { outValue = ( MINIMIZE_BOX ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RESIZE_BORDER") ) { outValue = ( RESIZE_BORDER ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DIALOG_EX_METAL") ) { outValue = ( DIALOG_EX_METAL ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DIALOG_NO_PARENT") ) { outValue = ( DIALOG_NO_PARENT ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEFAULT_DIALOG_STYLE") ) { outValue = ( DEFAULT_DIALOG_STYLE ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DIALOG_EX_CONTEXTHELP") ) { outValue = ( DIALOG_EX_CONTEXTHELP ); return true; }
	}
	return false;
}

bool DialogStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"CAPTION") ) { CAPTION=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CLOSE_BOX") ) { CLOSE_BOX=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SYSTEM_MENU") ) { SYSTEM_MENU=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"STAY_ON_TOP") ) { STAY_ON_TOP=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAXIMIZE_BOX") ) { MAXIMIZE_BOX=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MINIMIZE_BOX") ) { MINIMIZE_BOX=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RESIZE_BORDER") ) { RESIZE_BORDER=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DIALOG_EX_METAL") ) { DIALOG_EX_METAL=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DIALOG_NO_PARENT") ) { DIALOG_NO_PARENT=ioValue.Cast< int >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEFAULT_DIALOG_STYLE") ) { DEFAULT_DIALOG_STYLE=ioValue.Cast< int >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DIALOG_EX_CONTEXTHELP") ) { DIALOG_EX_CONTEXTHELP=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DialogStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DialogStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &DialogStyle_obj::CAPTION,HX_("CAPTION",c6,86,1c,27)},
	{::hx::fsInt,(void *) &DialogStyle_obj::DEFAULT_DIALOG_STYLE,HX_("DEFAULT_DIALOG_STYLE",b8,70,4e,cd)},
	{::hx::fsInt,(void *) &DialogStyle_obj::RESIZE_BORDER,HX_("RESIZE_BORDER",17,6b,25,c6)},
	{::hx::fsInt,(void *) &DialogStyle_obj::SYSTEM_MENU,HX_("SYSTEM_MENU",2f,e4,c1,af)},
	{::hx::fsInt,(void *) &DialogStyle_obj::CLOSE_BOX,HX_("CLOSE_BOX",84,9a,8a,2e)},
	{::hx::fsInt,(void *) &DialogStyle_obj::MAXIMIZE_BOX,HX_("MAXIMIZE_BOX",b8,a9,0a,c5)},
	{::hx::fsInt,(void *) &DialogStyle_obj::MINIMIZE_BOX,HX_("MINIMIZE_BOX",0a,55,15,49)},
	{::hx::fsInt,(void *) &DialogStyle_obj::STAY_ON_TOP,HX_("STAY_ON_TOP",fb,8a,56,7f)},
	{::hx::fsInt,(void *) &DialogStyle_obj::DIALOG_NO_PARENT,HX_("DIALOG_NO_PARENT",31,ef,ae,e5)},
	{::hx::fsInt,(void *) &DialogStyle_obj::DIALOG_EX_CONTEXTHELP,HX_("DIALOG_EX_CONTEXTHELP",db,fb,8e,f9)},
	{::hx::fsInt,(void *) &DialogStyle_obj::DIALOG_EX_METAL,HX_("DIALOG_EX_METAL",72,23,6f,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void DialogStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogStyle_obj::CAPTION,"CAPTION");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::DEFAULT_DIALOG_STYLE,"DEFAULT_DIALOG_STYLE");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::RESIZE_BORDER,"RESIZE_BORDER");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::SYSTEM_MENU,"SYSTEM_MENU");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::CLOSE_BOX,"CLOSE_BOX");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::MAXIMIZE_BOX,"MAXIMIZE_BOX");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::MINIMIZE_BOX,"MINIMIZE_BOX");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::STAY_ON_TOP,"STAY_ON_TOP");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::DIALOG_NO_PARENT,"DIALOG_NO_PARENT");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::DIALOG_EX_CONTEXTHELP,"DIALOG_EX_CONTEXTHELP");
	HX_MARK_MEMBER_NAME(DialogStyle_obj::DIALOG_EX_METAL,"DIALOG_EX_METAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::CAPTION,"CAPTION");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::DEFAULT_DIALOG_STYLE,"DEFAULT_DIALOG_STYLE");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::RESIZE_BORDER,"RESIZE_BORDER");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::SYSTEM_MENU,"SYSTEM_MENU");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::CLOSE_BOX,"CLOSE_BOX");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::MAXIMIZE_BOX,"MAXIMIZE_BOX");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::MINIMIZE_BOX,"MINIMIZE_BOX");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::STAY_ON_TOP,"STAY_ON_TOP");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::DIALOG_NO_PARENT,"DIALOG_NO_PARENT");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::DIALOG_EX_CONTEXTHELP,"DIALOG_EX_CONTEXTHELP");
	HX_VISIT_MEMBER_NAME(DialogStyle_obj::DIALOG_EX_METAL,"DIALOG_EX_METAL");
};

#endif

::hx::Class DialogStyle_obj::__mClass;

static ::String DialogStyle_obj_sStaticFields[] = {
	HX_("CAPTION",c6,86,1c,27),
	HX_("DEFAULT_DIALOG_STYLE",b8,70,4e,cd),
	HX_("RESIZE_BORDER",17,6b,25,c6),
	HX_("SYSTEM_MENU",2f,e4,c1,af),
	HX_("CLOSE_BOX",84,9a,8a,2e),
	HX_("MAXIMIZE_BOX",b8,a9,0a,c5),
	HX_("MINIMIZE_BOX",0a,55,15,49),
	HX_("STAY_ON_TOP",fb,8a,56,7f),
	HX_("DIALOG_NO_PARENT",31,ef,ae,e5),
	HX_("DIALOG_EX_CONTEXTHELP",db,fb,8e,f9),
	HX_("DIALOG_EX_METAL",72,23,6f,e7),
	::String(null())
};

void DialogStyle_obj::__register()
{
	DialogStyle_obj _hx_dummy;
	DialogStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.DialogStyle",e9,c0,cb,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DialogStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &DialogStyle_obj::__SetStatic;
	__mClass->mMarkFunc = DialogStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DialogStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DialogStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_10_boot)
HXDLIN(  10)		CAPTION = wxCAPTION;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_12_boot)
HXDLIN(  12)		DEFAULT_DIALOG_STYLE = wxDEFAULT_DIALOG_STYLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_14_boot)
HXDLIN(  14)		RESIZE_BORDER = wxRESIZE_BORDER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_16_boot)
HXDLIN(  16)		SYSTEM_MENU = wxSYSTEM_MENU;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_18_boot)
HXDLIN(  18)		CLOSE_BOX = wxCLOSE_BOX;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_20_boot)
HXDLIN(  20)		MAXIMIZE_BOX = wxMAXIMIZE_BOX;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_22_boot)
HXDLIN(  22)		MINIMIZE_BOX = wxMINIMIZE_BOX;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_26_boot)
HXDLIN(  26)		STAY_ON_TOP = wxSTAY_ON_TOP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_31_boot)
HXDLIN(  31)		DIALOG_NO_PARENT = wxDIALOG_NO_PARENT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_35_boot)
HXDLIN(  35)		DIALOG_EX_CONTEXTHELP = wxDIALOG_EX_CONTEXTHELP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_58b00fd83c28904e_37_boot)
HXDLIN(  37)		DIALOG_EX_METAL = wxDIALOG_EX_METAL;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
