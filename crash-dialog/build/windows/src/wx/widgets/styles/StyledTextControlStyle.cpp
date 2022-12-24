#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_StyledTextControlStyle
#include <wx/widgets/styles/StyledTextControlStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_5_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",5,0xf63342ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_6_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",6,0xf63342ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_7_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",7,0xf63342ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_8_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",8,0xf63342ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_9_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",9,0xf63342ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_10_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",10,0xf63342ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_11_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",11,0xf63342ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_12_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",12,0xf63342ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_13_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",13,0xf63342ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7f199294f2dd9063_14_boot,"wx.widgets.styles.StyledTextControlStyle","boot",0x6716776c,"wx.widgets.styles.StyledTextControlStyle.boot","wx/widgets/styles/StyledTextControlStyle.hx",14,0xf63342ab)
namespace wx{
namespace widgets{
namespace styles{

void StyledTextControlStyle_obj::__construct() { }

Dynamic StyledTextControlStyle_obj::__CreateEmpty() { return new StyledTextControlStyle_obj; }

void *StyledTextControlStyle_obj::_hx_vtable = 0;

Dynamic StyledTextControlStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyledTextControlStyle_obj > _hx_result = new StyledTextControlStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyledTextControlStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c5b5a60;
}

int StyledTextControlStyle_obj::DEFAULT;

int StyledTextControlStyle_obj::LINENUMBER;

int StyledTextControlStyle_obj::BRACELIGHT;

int StyledTextControlStyle_obj::BRACEBAD;

int StyledTextControlStyle_obj::CONTROLCHAR;

int StyledTextControlStyle_obj::INDENTGUIDE;

int StyledTextControlStyle_obj::CALLTIP;

int StyledTextControlStyle_obj::FOLDDISPLAYTEXT;

int StyledTextControlStyle_obj::LASTPREDEFINED;

int StyledTextControlStyle_obj::MAX;


StyledTextControlStyle_obj::StyledTextControlStyle_obj()
{
}

bool StyledTextControlStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"MAX") ) { outValue = ( MAX ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { outValue = ( DEFAULT ); return true; }
		if (HX_FIELD_EQ(inName,"CALLTIP") ) { outValue = ( CALLTIP ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BRACEBAD") ) { outValue = ( BRACEBAD ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINENUMBER") ) { outValue = ( LINENUMBER ); return true; }
		if (HX_FIELD_EQ(inName,"BRACELIGHT") ) { outValue = ( BRACELIGHT ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CONTROLCHAR") ) { outValue = ( CONTROLCHAR ); return true; }
		if (HX_FIELD_EQ(inName,"INDENTGUIDE") ) { outValue = ( INDENTGUIDE ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LASTPREDEFINED") ) { outValue = ( LASTPREDEFINED ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FOLDDISPLAYTEXT") ) { outValue = ( FOLDDISPLAYTEXT ); return true; }
	}
	return false;
}

bool StyledTextControlStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"MAX") ) { MAX=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { DEFAULT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CALLTIP") ) { CALLTIP=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BRACEBAD") ) { BRACEBAD=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINENUMBER") ) { LINENUMBER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BRACELIGHT") ) { BRACELIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CONTROLCHAR") ) { CONTROLCHAR=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"INDENTGUIDE") ) { INDENTGUIDE=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LASTPREDEFINED") ) { LASTPREDEFINED=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FOLDDISPLAYTEXT") ) { FOLDDISPLAYTEXT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StyledTextControlStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StyledTextControlStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::DEFAULT,HX_("DEFAULT",a1,ac,97,1b)},
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::LINENUMBER,HX_("LINENUMBER",bd,81,97,33)},
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::BRACELIGHT,HX_("BRACELIGHT",83,46,fe,15)},
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::BRACEBAD,HX_("BRACEBAD",32,ce,ba,cf)},
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::CONTROLCHAR,HX_("CONTROLCHAR",93,48,52,f2)},
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::INDENTGUIDE,HX_("INDENTGUIDE",b0,32,34,24)},
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::CALLTIP,HX_("CALLTIP",5d,d3,40,d4)},
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::FOLDDISPLAYTEXT,HX_("FOLDDISPLAYTEXT",6e,15,98,1c)},
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::LASTPREDEFINED,HX_("LASTPREDEFINED",dc,3f,6e,4f)},
	{::hx::fsInt,(void *) &StyledTextControlStyle_obj::MAX,HX_("MAX",84,a6,3a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StyledTextControlStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::LINENUMBER,"LINENUMBER");
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::BRACELIGHT,"BRACELIGHT");
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::BRACEBAD,"BRACEBAD");
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::CONTROLCHAR,"CONTROLCHAR");
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::INDENTGUIDE,"INDENTGUIDE");
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::CALLTIP,"CALLTIP");
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::FOLDDISPLAYTEXT,"FOLDDISPLAYTEXT");
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::LASTPREDEFINED,"LASTPREDEFINED");
	HX_MARK_MEMBER_NAME(StyledTextControlStyle_obj::MAX,"MAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StyledTextControlStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::LINENUMBER,"LINENUMBER");
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::BRACELIGHT,"BRACELIGHT");
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::BRACEBAD,"BRACEBAD");
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::CONTROLCHAR,"CONTROLCHAR");
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::INDENTGUIDE,"INDENTGUIDE");
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::CALLTIP,"CALLTIP");
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::FOLDDISPLAYTEXT,"FOLDDISPLAYTEXT");
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::LASTPREDEFINED,"LASTPREDEFINED");
	HX_VISIT_MEMBER_NAME(StyledTextControlStyle_obj::MAX,"MAX");
};

#endif

::hx::Class StyledTextControlStyle_obj::__mClass;

static ::String StyledTextControlStyle_obj_sStaticFields[] = {
	HX_("DEFAULT",a1,ac,97,1b),
	HX_("LINENUMBER",bd,81,97,33),
	HX_("BRACELIGHT",83,46,fe,15),
	HX_("BRACEBAD",32,ce,ba,cf),
	HX_("CONTROLCHAR",93,48,52,f2),
	HX_("INDENTGUIDE",b0,32,34,24),
	HX_("CALLTIP",5d,d3,40,d4),
	HX_("FOLDDISPLAYTEXT",6e,15,98,1c),
	HX_("LASTPREDEFINED",dc,3f,6e,4f),
	HX_("MAX",84,a6,3a,00),
	::String(null())
};

void StyledTextControlStyle_obj::__register()
{
	StyledTextControlStyle_obj _hx_dummy;
	StyledTextControlStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.StyledTextControlStyle",74,37,72,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyledTextControlStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &StyledTextControlStyle_obj::__SetStatic;
	__mClass->mMarkFunc = StyledTextControlStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StyledTextControlStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StyledTextControlStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StyledTextControlStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyledTextControlStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyledTextControlStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StyledTextControlStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_5_boot)
HXDLIN(   5)		DEFAULT = wxSTC_STYLE_DEFAULT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_6_boot)
HXDLIN(   6)		LINENUMBER = wxSTC_STYLE_LINENUMBER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_7_boot)
HXDLIN(   7)		BRACELIGHT = wxSTC_STYLE_BRACELIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_8_boot)
HXDLIN(   8)		BRACEBAD = wxSTC_STYLE_BRACEBAD;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_9_boot)
HXDLIN(   9)		CONTROLCHAR = wxSTC_STYLE_CONTROLCHAR;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_10_boot)
HXDLIN(  10)		INDENTGUIDE = wxSTC_STYLE_INDENTGUIDE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_11_boot)
HXDLIN(  11)		CALLTIP = wxSTC_STYLE_CALLTIP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_12_boot)
HXDLIN(  12)		FOLDDISPLAYTEXT = wxSTC_STYLE_FOLDDISPLAYTEXT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_13_boot)
HXDLIN(  13)		LASTPREDEFINED = wxSTC_STYLE_LASTPREDEFINED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7f199294f2dd9063_14_boot)
HXDLIN(  14)		MAX = wxSTC_STYLE_MAX;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
