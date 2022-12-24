#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_PropertyGridStyles
#include <wx/widgets/styles/PropertyGridStyles.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_5_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",5,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_6_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",6,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_7_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",7,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_8_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",8,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_9_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",9,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_10_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",10,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_11_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",11,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_12_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",12,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_13_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",13,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_14_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",14,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_15_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",15,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_16_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",16,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_17_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",17,0x5ab134a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bd6cc1581edc0f37_18_boot,"wx.widgets.styles.PropertyGridStyles","boot",0x425779a3,"wx.widgets.styles.PropertyGridStyles.boot","wx/widgets/styles/PropertyGridStyles.hx",18,0x5ab134a2)
namespace wx{
namespace widgets{
namespace styles{

void PropertyGridStyles_obj::__construct() { }

Dynamic PropertyGridStyles_obj::__CreateEmpty() { return new PropertyGridStyles_obj; }

void *PropertyGridStyles_obj::_hx_vtable = 0;

Dynamic PropertyGridStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyGridStyles_obj > _hx_result = new PropertyGridStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PropertyGridStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x039fda6d;
}

int PropertyGridStyles_obj::AUTO_SORT;

int PropertyGridStyles_obj::HIDE_CATEGORIES;

int PropertyGridStyles_obj::ALPHABETIC_MODE;

int PropertyGridStyles_obj::BOLD_MODIFIED;

int PropertyGridStyles_obj::SPLITTER_AUTO_CENTER;

int PropertyGridStyles_obj::TOOLTIPS;

int PropertyGridStyles_obj::HIDE_MARGIN;

int PropertyGridStyles_obj::STATIC_SPLITTER;

int PropertyGridStyles_obj::STATIC_LAYOUT;

int PropertyGridStyles_obj::LIMITED_EDITING;

int PropertyGridStyles_obj::TOOLBAR;

int PropertyGridStyles_obj::DESCRIPTION;

int PropertyGridStyles_obj::NO_INTERNAL_BORDER;

int PropertyGridStyles_obj::DEFAULT_STYLE;


PropertyGridStyles_obj::PropertyGridStyles_obj()
{
}

bool PropertyGridStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TOOLBAR") ) { outValue = ( TOOLBAR ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TOOLTIPS") ) { outValue = ( TOOLTIPS ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"AUTO_SORT") ) { outValue = ( AUTO_SORT ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HIDE_MARGIN") ) { outValue = ( HIDE_MARGIN ); return true; }
		if (HX_FIELD_EQ(inName,"DESCRIPTION") ) { outValue = ( DESCRIPTION ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"BOLD_MODIFIED") ) { outValue = ( BOLD_MODIFIED ); return true; }
		if (HX_FIELD_EQ(inName,"STATIC_LAYOUT") ) { outValue = ( STATIC_LAYOUT ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { outValue = ( DEFAULT_STYLE ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"HIDE_CATEGORIES") ) { outValue = ( HIDE_CATEGORIES ); return true; }
		if (HX_FIELD_EQ(inName,"ALPHABETIC_MODE") ) { outValue = ( ALPHABETIC_MODE ); return true; }
		if (HX_FIELD_EQ(inName,"STATIC_SPLITTER") ) { outValue = ( STATIC_SPLITTER ); return true; }
		if (HX_FIELD_EQ(inName,"LIMITED_EDITING") ) { outValue = ( LIMITED_EDITING ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"NO_INTERNAL_BORDER") ) { outValue = ( NO_INTERNAL_BORDER ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SPLITTER_AUTO_CENTER") ) { outValue = ( SPLITTER_AUTO_CENTER ); return true; }
	}
	return false;
}

bool PropertyGridStyles_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TOOLBAR") ) { TOOLBAR=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TOOLTIPS") ) { TOOLTIPS=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"AUTO_SORT") ) { AUTO_SORT=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HIDE_MARGIN") ) { HIDE_MARGIN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DESCRIPTION") ) { DESCRIPTION=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"BOLD_MODIFIED") ) { BOLD_MODIFIED=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"STATIC_LAYOUT") ) { STATIC_LAYOUT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { DEFAULT_STYLE=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"HIDE_CATEGORIES") ) { HIDE_CATEGORIES=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ALPHABETIC_MODE") ) { ALPHABETIC_MODE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"STATIC_SPLITTER") ) { STATIC_SPLITTER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"LIMITED_EDITING") ) { LIMITED_EDITING=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"NO_INTERNAL_BORDER") ) { NO_INTERNAL_BORDER=ioValue.Cast< int >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SPLITTER_AUTO_CENTER") ) { SPLITTER_AUTO_CENTER=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PropertyGridStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PropertyGridStyles_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::AUTO_SORT,HX_("AUTO_SORT",6e,11,72,b2)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::HIDE_CATEGORIES,HX_("HIDE_CATEGORIES",79,72,7e,6f)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::ALPHABETIC_MODE,HX_("ALPHABETIC_MODE",d5,00,5c,60)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::BOLD_MODIFIED,HX_("BOLD_MODIFIED",83,40,66,53)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::SPLITTER_AUTO_CENTER,HX_("SPLITTER_AUTO_CENTER",ad,5b,80,9e)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::TOOLTIPS,HX_("TOOLTIPS",10,46,10,2a)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::HIDE_MARGIN,HX_("HIDE_MARGIN",4b,2d,ea,61)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::STATIC_SPLITTER,HX_("STATIC_SPLITTER",38,b0,d9,fe)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::STATIC_LAYOUT,HX_("STATIC_LAYOUT",5b,75,de,99)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::LIMITED_EDITING,HX_("LIMITED_EDITING",b3,6c,0d,7d)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::TOOLBAR,HX_("TOOLBAR",5b,d1,52,ea)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::DESCRIPTION,HX_("DESCRIPTION",dc,14,59,35)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::NO_INTERNAL_BORDER,HX_("NO_INTERNAL_BORDER",b0,fd,29,44)},
	{::hx::fsInt,(void *) &PropertyGridStyles_obj::DEFAULT_STYLE,HX_("DEFAULT_STYLE",b3,7f,93,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PropertyGridStyles_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::AUTO_SORT,"AUTO_SORT");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::HIDE_CATEGORIES,"HIDE_CATEGORIES");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::ALPHABETIC_MODE,"ALPHABETIC_MODE");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::BOLD_MODIFIED,"BOLD_MODIFIED");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::SPLITTER_AUTO_CENTER,"SPLITTER_AUTO_CENTER");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::TOOLTIPS,"TOOLTIPS");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::HIDE_MARGIN,"HIDE_MARGIN");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::STATIC_SPLITTER,"STATIC_SPLITTER");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::STATIC_LAYOUT,"STATIC_LAYOUT");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::LIMITED_EDITING,"LIMITED_EDITING");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::TOOLBAR,"TOOLBAR");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::DESCRIPTION,"DESCRIPTION");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::NO_INTERNAL_BORDER,"NO_INTERNAL_BORDER");
	HX_MARK_MEMBER_NAME(PropertyGridStyles_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PropertyGridStyles_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::AUTO_SORT,"AUTO_SORT");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::HIDE_CATEGORIES,"HIDE_CATEGORIES");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::ALPHABETIC_MODE,"ALPHABETIC_MODE");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::BOLD_MODIFIED,"BOLD_MODIFIED");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::SPLITTER_AUTO_CENTER,"SPLITTER_AUTO_CENTER");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::TOOLTIPS,"TOOLTIPS");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::HIDE_MARGIN,"HIDE_MARGIN");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::STATIC_SPLITTER,"STATIC_SPLITTER");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::STATIC_LAYOUT,"STATIC_LAYOUT");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::LIMITED_EDITING,"LIMITED_EDITING");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::TOOLBAR,"TOOLBAR");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::DESCRIPTION,"DESCRIPTION");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::NO_INTERNAL_BORDER,"NO_INTERNAL_BORDER");
	HX_VISIT_MEMBER_NAME(PropertyGridStyles_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
};

#endif

::hx::Class PropertyGridStyles_obj::__mClass;

static ::String PropertyGridStyles_obj_sStaticFields[] = {
	HX_("AUTO_SORT",6e,11,72,b2),
	HX_("HIDE_CATEGORIES",79,72,7e,6f),
	HX_("ALPHABETIC_MODE",d5,00,5c,60),
	HX_("BOLD_MODIFIED",83,40,66,53),
	HX_("SPLITTER_AUTO_CENTER",ad,5b,80,9e),
	HX_("TOOLTIPS",10,46,10,2a),
	HX_("HIDE_MARGIN",4b,2d,ea,61),
	HX_("STATIC_SPLITTER",38,b0,d9,fe),
	HX_("STATIC_LAYOUT",5b,75,de,99),
	HX_("LIMITED_EDITING",b3,6c,0d,7d),
	HX_("TOOLBAR",5b,d1,52,ea),
	HX_("DESCRIPTION",dc,14,59,35),
	HX_("NO_INTERNAL_BORDER",b0,fd,29,44),
	HX_("DEFAULT_STYLE",b3,7f,93,f7),
	::String(null())
};

void PropertyGridStyles_obj::__register()
{
	PropertyGridStyles_obj _hx_dummy;
	PropertyGridStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.PropertyGridStyles",9d,60,1e,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PropertyGridStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &PropertyGridStyles_obj::__SetStatic;
	__mClass->mMarkFunc = PropertyGridStyles_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PropertyGridStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PropertyGridStyles_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PropertyGridStyles_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyGridStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyGridStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PropertyGridStyles_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_5_boot)
HXDLIN(   5)		AUTO_SORT = wxPG_AUTO_SORT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_6_boot)
HXDLIN(   6)		HIDE_CATEGORIES = wxPG_HIDE_CATEGORIES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_7_boot)
HXDLIN(   7)		ALPHABETIC_MODE = wxPG_ALPHABETIC_MODE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_8_boot)
HXDLIN(   8)		BOLD_MODIFIED = wxPG_BOLD_MODIFIED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_9_boot)
HXDLIN(   9)		SPLITTER_AUTO_CENTER = wxPG_SPLITTER_AUTO_CENTER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_10_boot)
HXDLIN(  10)		TOOLTIPS = wxPG_TOOLTIPS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_11_boot)
HXDLIN(  11)		HIDE_MARGIN = wxPG_HIDE_MARGIN;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_12_boot)
HXDLIN(  12)		STATIC_SPLITTER = wxPG_STATIC_SPLITTER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_13_boot)
HXDLIN(  13)		STATIC_LAYOUT = wxPG_STATIC_LAYOUT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_14_boot)
HXDLIN(  14)		LIMITED_EDITING = wxPG_LIMITED_EDITING;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_15_boot)
HXDLIN(  15)		TOOLBAR = wxPG_TOOLBAR;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_16_boot)
HXDLIN(  16)		DESCRIPTION = wxPG_DESCRIPTION;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_17_boot)
HXDLIN(  17)		NO_INTERNAL_BORDER = wxPG_NO_INTERNAL_BORDER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bd6cc1581edc0f37_18_boot)
HXDLIN(  18)		DEFAULT_STYLE = wxPG_DEFAULT_STYLE;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
