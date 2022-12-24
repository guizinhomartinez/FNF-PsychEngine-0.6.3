#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_FrameStyle
#include <wx/widgets/styles/FrameStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_7_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",7,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_9_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",9,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_13_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",13,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_15_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",15,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_17_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",17,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_19_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",19,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_21_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",21,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_23_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",23,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_25_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",25,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_29_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",29,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_31_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",31,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_33_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",33,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_37_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",37,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_39_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",39,0x10a1927b)
HX_LOCAL_STACK_FRAME(_hx_pos_dcade1b6e3f5f105_41_boot,"wx.widgets.styles.FrameStyle","boot",0xba6bc8bc,"wx.widgets.styles.FrameStyle.boot","wx/widgets/styles/FrameStyle.hx",41,0x10a1927b)
namespace wx{
namespace widgets{
namespace styles{

void FrameStyle_obj::__construct() { }

Dynamic FrameStyle_obj::__CreateEmpty() { return new FrameStyle_obj; }

void *FrameStyle_obj::_hx_vtable = 0;

Dynamic FrameStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FrameStyle_obj > _hx_result = new FrameStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FrameStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1652ae64;
}

int FrameStyle_obj::DEFAULT_FRAME_STYLE;

int FrameStyle_obj::ICONIZE;

int FrameStyle_obj::CAPTION;

int FrameStyle_obj::MINIMIZE;

int FrameStyle_obj::MINIMIZE_BOX;

int FrameStyle_obj::MAXIMIZE;

int FrameStyle_obj::MAXIMIZE_BOX;

int FrameStyle_obj::CLOSE_BOX;

int FrameStyle_obj::STAY_ON_TOP;

int FrameStyle_obj::SYSTEM_MENU;

int FrameStyle_obj::RESIZE_BORDER;

int FrameStyle_obj::FRAME_TOOL_WINDOW;

int FrameStyle_obj::FRAME_NO_TASKBAR;

int FrameStyle_obj::FRAME_FLOAT_ON_PARENT;

int FrameStyle_obj::FRAME_SHAPED;


FrameStyle_obj::FrameStyle_obj()
{
}

bool FrameStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"ICONIZE") ) { outValue = ( ICONIZE ); return true; }
		if (HX_FIELD_EQ(inName,"CAPTION") ) { outValue = ( CAPTION ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MINIMIZE") ) { outValue = ( MINIMIZE ); return true; }
		if (HX_FIELD_EQ(inName,"MAXIMIZE") ) { outValue = ( MAXIMIZE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CLOSE_BOX") ) { outValue = ( CLOSE_BOX ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STAY_ON_TOP") ) { outValue = ( STAY_ON_TOP ); return true; }
		if (HX_FIELD_EQ(inName,"SYSTEM_MENU") ) { outValue = ( SYSTEM_MENU ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MINIMIZE_BOX") ) { outValue = ( MINIMIZE_BOX ); return true; }
		if (HX_FIELD_EQ(inName,"MAXIMIZE_BOX") ) { outValue = ( MAXIMIZE_BOX ); return true; }
		if (HX_FIELD_EQ(inName,"FRAME_SHAPED") ) { outValue = ( FRAME_SHAPED ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RESIZE_BORDER") ) { outValue = ( RESIZE_BORDER ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"FRAME_NO_TASKBAR") ) { outValue = ( FRAME_NO_TASKBAR ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"FRAME_TOOL_WINDOW") ) { outValue = ( FRAME_TOOL_WINDOW ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEFAULT_FRAME_STYLE") ) { outValue = ( DEFAULT_FRAME_STYLE ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FRAME_FLOAT_ON_PARENT") ) { outValue = ( FRAME_FLOAT_ON_PARENT ); return true; }
	}
	return false;
}

bool FrameStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"ICONIZE") ) { ICONIZE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CAPTION") ) { CAPTION=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MINIMIZE") ) { MINIMIZE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MAXIMIZE") ) { MAXIMIZE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CLOSE_BOX") ) { CLOSE_BOX=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STAY_ON_TOP") ) { STAY_ON_TOP=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SYSTEM_MENU") ) { SYSTEM_MENU=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MINIMIZE_BOX") ) { MINIMIZE_BOX=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MAXIMIZE_BOX") ) { MAXIMIZE_BOX=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"FRAME_SHAPED") ) { FRAME_SHAPED=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RESIZE_BORDER") ) { RESIZE_BORDER=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"FRAME_NO_TASKBAR") ) { FRAME_NO_TASKBAR=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"FRAME_TOOL_WINDOW") ) { FRAME_TOOL_WINDOW=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEFAULT_FRAME_STYLE") ) { DEFAULT_FRAME_STYLE=ioValue.Cast< int >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FRAME_FLOAT_ON_PARENT") ) { FRAME_FLOAT_ON_PARENT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FrameStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FrameStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FrameStyle_obj::DEFAULT_FRAME_STYLE,HX_("DEFAULT_FRAME_STYLE",41,24,e2,05)},
	{::hx::fsInt,(void *) &FrameStyle_obj::ICONIZE,HX_("ICONIZE",5b,35,f6,55)},
	{::hx::fsInt,(void *) &FrameStyle_obj::CAPTION,HX_("CAPTION",c6,86,1c,27)},
	{::hx::fsInt,(void *) &FrameStyle_obj::MINIMIZE,HX_("MINIMIZE",1e,cf,fe,7a)},
	{::hx::fsInt,(void *) &FrameStyle_obj::MINIMIZE_BOX,HX_("MINIMIZE_BOX",0a,55,15,49)},
	{::hx::fsInt,(void *) &FrameStyle_obj::MAXIMIZE,HX_("MAXIMIZE",cc,b4,e4,2d)},
	{::hx::fsInt,(void *) &FrameStyle_obj::MAXIMIZE_BOX,HX_("MAXIMIZE_BOX",b8,a9,0a,c5)},
	{::hx::fsInt,(void *) &FrameStyle_obj::CLOSE_BOX,HX_("CLOSE_BOX",84,9a,8a,2e)},
	{::hx::fsInt,(void *) &FrameStyle_obj::STAY_ON_TOP,HX_("STAY_ON_TOP",fb,8a,56,7f)},
	{::hx::fsInt,(void *) &FrameStyle_obj::SYSTEM_MENU,HX_("SYSTEM_MENU",2f,e4,c1,af)},
	{::hx::fsInt,(void *) &FrameStyle_obj::RESIZE_BORDER,HX_("RESIZE_BORDER",17,6b,25,c6)},
	{::hx::fsInt,(void *) &FrameStyle_obj::FRAME_TOOL_WINDOW,HX_("FRAME_TOOL_WINDOW",c5,86,ff,57)},
	{::hx::fsInt,(void *) &FrameStyle_obj::FRAME_NO_TASKBAR,HX_("FRAME_NO_TASKBAR",82,d4,fb,aa)},
	{::hx::fsInt,(void *) &FrameStyle_obj::FRAME_FLOAT_ON_PARENT,HX_("FRAME_FLOAT_ON_PARENT",55,38,4a,61)},
	{::hx::fsInt,(void *) &FrameStyle_obj::FRAME_SHAPED,HX_("FRAME_SHAPED",55,b3,d7,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FrameStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameStyle_obj::DEFAULT_FRAME_STYLE,"DEFAULT_FRAME_STYLE");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::ICONIZE,"ICONIZE");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::CAPTION,"CAPTION");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::MINIMIZE,"MINIMIZE");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::MINIMIZE_BOX,"MINIMIZE_BOX");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::MAXIMIZE,"MAXIMIZE");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::MAXIMIZE_BOX,"MAXIMIZE_BOX");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::CLOSE_BOX,"CLOSE_BOX");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::STAY_ON_TOP,"STAY_ON_TOP");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::SYSTEM_MENU,"SYSTEM_MENU");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::RESIZE_BORDER,"RESIZE_BORDER");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::FRAME_TOOL_WINDOW,"FRAME_TOOL_WINDOW");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::FRAME_NO_TASKBAR,"FRAME_NO_TASKBAR");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::FRAME_FLOAT_ON_PARENT,"FRAME_FLOAT_ON_PARENT");
	HX_MARK_MEMBER_NAME(FrameStyle_obj::FRAME_SHAPED,"FRAME_SHAPED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FrameStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::DEFAULT_FRAME_STYLE,"DEFAULT_FRAME_STYLE");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::ICONIZE,"ICONIZE");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::CAPTION,"CAPTION");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::MINIMIZE,"MINIMIZE");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::MINIMIZE_BOX,"MINIMIZE_BOX");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::MAXIMIZE,"MAXIMIZE");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::MAXIMIZE_BOX,"MAXIMIZE_BOX");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::CLOSE_BOX,"CLOSE_BOX");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::STAY_ON_TOP,"STAY_ON_TOP");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::SYSTEM_MENU,"SYSTEM_MENU");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::RESIZE_BORDER,"RESIZE_BORDER");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::FRAME_TOOL_WINDOW,"FRAME_TOOL_WINDOW");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::FRAME_NO_TASKBAR,"FRAME_NO_TASKBAR");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::FRAME_FLOAT_ON_PARENT,"FRAME_FLOAT_ON_PARENT");
	HX_VISIT_MEMBER_NAME(FrameStyle_obj::FRAME_SHAPED,"FRAME_SHAPED");
};

#endif

::hx::Class FrameStyle_obj::__mClass;

static ::String FrameStyle_obj_sStaticFields[] = {
	HX_("DEFAULT_FRAME_STYLE",41,24,e2,05),
	HX_("ICONIZE",5b,35,f6,55),
	HX_("CAPTION",c6,86,1c,27),
	HX_("MINIMIZE",1e,cf,fe,7a),
	HX_("MINIMIZE_BOX",0a,55,15,49),
	HX_("MAXIMIZE",cc,b4,e4,2d),
	HX_("MAXIMIZE_BOX",b8,a9,0a,c5),
	HX_("CLOSE_BOX",84,9a,8a,2e),
	HX_("STAY_ON_TOP",fb,8a,56,7f),
	HX_("SYSTEM_MENU",2f,e4,c1,af),
	HX_("RESIZE_BORDER",17,6b,25,c6),
	HX_("FRAME_TOOL_WINDOW",c5,86,ff,57),
	HX_("FRAME_NO_TASKBAR",82,d4,fb,aa),
	HX_("FRAME_FLOAT_ON_PARENT",55,38,4a,61),
	HX_("FRAME_SHAPED",55,b3,d7,2f),
	::String(null())
};

void FrameStyle_obj::__register()
{
	FrameStyle_obj _hx_dummy;
	FrameStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.FrameStyle",24,68,be,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FrameStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &FrameStyle_obj::__SetStatic;
	__mClass->mMarkFunc = FrameStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FrameStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FrameStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FrameStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FrameStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_7_boot)
HXDLIN(   7)		DEFAULT_FRAME_STYLE = wxDEFAULT_FRAME_STYLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_9_boot)
HXDLIN(   9)		ICONIZE = wxICONIZE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_13_boot)
HXDLIN(  13)		CAPTION = wxCAPTION;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_15_boot)
HXDLIN(  15)		MINIMIZE = wxMINIMIZE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_17_boot)
HXDLIN(  17)		MINIMIZE_BOX = wxMINIMIZE_BOX;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_19_boot)
HXDLIN(  19)		MAXIMIZE = wxMAXIMIZE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_21_boot)
HXDLIN(  21)		MAXIMIZE_BOX = wxMAXIMIZE_BOX;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_23_boot)
HXDLIN(  23)		CLOSE_BOX = wxCLOSE_BOX;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_25_boot)
HXDLIN(  25)		STAY_ON_TOP = wxSTAY_ON_TOP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_29_boot)
HXDLIN(  29)		SYSTEM_MENU = wxSYSTEM_MENU;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_31_boot)
HXDLIN(  31)		RESIZE_BORDER = wxRESIZE_BORDER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_33_boot)
HXDLIN(  33)		FRAME_TOOL_WINDOW = wxFRAME_TOOL_WINDOW;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_37_boot)
HXDLIN(  37)		FRAME_NO_TASKBAR = wxFRAME_NO_TASKBAR;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_39_boot)
HXDLIN(  39)		FRAME_FLOAT_ON_PARENT = wxFRAME_FLOAT_ON_PARENT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dcade1b6e3f5f105_41_boot)
HXDLIN(  41)		FRAME_SHAPED = wxFRAME_SHAPED;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
