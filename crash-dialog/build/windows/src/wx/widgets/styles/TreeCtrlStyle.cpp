#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_TreeCtrlStyle
#include <wx/widgets/styles/TreeCtrlStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_6_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",6,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_8_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",8,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_10_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",10,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_12_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",12,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_14_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",14,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_16_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",16,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_18_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",18,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_20_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",20,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_22_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",22,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_24_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",24,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_26_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",26,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_28_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",28,0x9ff5f415)
HX_LOCAL_STACK_FRAME(_hx_pos_3d7e64cd4b9875dc_30_boot,"wx.widgets.styles.TreeCtrlStyle","boot",0x120fd178,"wx.widgets.styles.TreeCtrlStyle.boot","wx/widgets/styles/TreeCtrlStyle.hx",30,0x9ff5f415)
namespace wx{
namespace widgets{
namespace styles{

void TreeCtrlStyle_obj::__construct() { }

Dynamic TreeCtrlStyle_obj::__CreateEmpty() { return new TreeCtrlStyle_obj; }

void *TreeCtrlStyle_obj::_hx_vtable = 0;

Dynamic TreeCtrlStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeCtrlStyle_obj > _hx_result = new TreeCtrlStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TreeCtrlStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0586037c;
}

int TreeCtrlStyle_obj::EDIT_LABELS;

int TreeCtrlStyle_obj::NO_BUTTONS;

int TreeCtrlStyle_obj::HAS_BUTTONS;

int TreeCtrlStyle_obj::TWIST_BUTTONS;

int TreeCtrlStyle_obj::NO_LINES;

int TreeCtrlStyle_obj::FULL_ROW_HIGHLIGHT;

int TreeCtrlStyle_obj::LINES_AT_ROOT;

int TreeCtrlStyle_obj::HIDE_ROOT;

int TreeCtrlStyle_obj::ROW_LINES;

int TreeCtrlStyle_obj::HAS_VARIABLE_ROW_HEIGHT;

int TreeCtrlStyle_obj::SINGLE;

int TreeCtrlStyle_obj::MULTIPLE;

int TreeCtrlStyle_obj::DEFAULT_STYLE;


TreeCtrlStyle_obj::TreeCtrlStyle_obj()
{
}

bool TreeCtrlStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SINGLE") ) { outValue = ( SINGLE ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_LINES") ) { outValue = ( NO_LINES ); return true; }
		if (HX_FIELD_EQ(inName,"MULTIPLE") ) { outValue = ( MULTIPLE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HIDE_ROOT") ) { outValue = ( HIDE_ROOT ); return true; }
		if (HX_FIELD_EQ(inName,"ROW_LINES") ) { outValue = ( ROW_LINES ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NO_BUTTONS") ) { outValue = ( NO_BUTTONS ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"EDIT_LABELS") ) { outValue = ( EDIT_LABELS ); return true; }
		if (HX_FIELD_EQ(inName,"HAS_BUTTONS") ) { outValue = ( HAS_BUTTONS ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TWIST_BUTTONS") ) { outValue = ( TWIST_BUTTONS ); return true; }
		if (HX_FIELD_EQ(inName,"LINES_AT_ROOT") ) { outValue = ( LINES_AT_ROOT ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { outValue = ( DEFAULT_STYLE ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"FULL_ROW_HIGHLIGHT") ) { outValue = ( FULL_ROW_HIGHLIGHT ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"HAS_VARIABLE_ROW_HEIGHT") ) { outValue = ( HAS_VARIABLE_ROW_HEIGHT ); return true; }
	}
	return false;
}

bool TreeCtrlStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SINGLE") ) { SINGLE=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_LINES") ) { NO_LINES=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MULTIPLE") ) { MULTIPLE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HIDE_ROOT") ) { HIDE_ROOT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ROW_LINES") ) { ROW_LINES=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NO_BUTTONS") ) { NO_BUTTONS=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"EDIT_LABELS") ) { EDIT_LABELS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"HAS_BUTTONS") ) { HAS_BUTTONS=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TWIST_BUTTONS") ) { TWIST_BUTTONS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"LINES_AT_ROOT") ) { LINES_AT_ROOT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { DEFAULT_STYLE=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"FULL_ROW_HIGHLIGHT") ) { FULL_ROW_HIGHLIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"HAS_VARIABLE_ROW_HEIGHT") ) { HAS_VARIABLE_ROW_HEIGHT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TreeCtrlStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TreeCtrlStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::EDIT_LABELS,HX_("EDIT_LABELS",d4,08,96,25)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::NO_BUTTONS,HX_("NO_BUTTONS",e3,6c,31,33)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::HAS_BUTTONS,HX_("HAS_BUTTONS",dc,24,bd,f9)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::TWIST_BUTTONS,HX_("TWIST_BUTTONS",29,d6,00,0e)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::NO_LINES,HX_("NO_LINES",21,c8,55,31)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::FULL_ROW_HIGHLIGHT,HX_("FULL_ROW_HIGHLIGHT",5f,5a,e6,ce)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::LINES_AT_ROOT,HX_("LINES_AT_ROOT",8e,2e,fe,38)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::HIDE_ROOT,HX_("HIDE_ROOT",ff,55,1c,2f)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::ROW_LINES,HX_("ROW_LINES",9a,92,87,48)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::HAS_VARIABLE_ROW_HEIGHT,HX_("HAS_VARIABLE_ROW_HEIGHT",6a,22,4d,25)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::SINGLE,HX_("SINGLE",88,12,a4,6b)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::MULTIPLE,HX_("MULTIPLE",10,72,12,f4)},
	{::hx::fsInt,(void *) &TreeCtrlStyle_obj::DEFAULT_STYLE,HX_("DEFAULT_STYLE",b3,7f,93,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TreeCtrlStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::EDIT_LABELS,"EDIT_LABELS");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::NO_BUTTONS,"NO_BUTTONS");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::HAS_BUTTONS,"HAS_BUTTONS");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::TWIST_BUTTONS,"TWIST_BUTTONS");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::NO_LINES,"NO_LINES");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::FULL_ROW_HIGHLIGHT,"FULL_ROW_HIGHLIGHT");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::LINES_AT_ROOT,"LINES_AT_ROOT");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::HIDE_ROOT,"HIDE_ROOT");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::ROW_LINES,"ROW_LINES");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::HAS_VARIABLE_ROW_HEIGHT,"HAS_VARIABLE_ROW_HEIGHT");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::SINGLE,"SINGLE");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::MULTIPLE,"MULTIPLE");
	HX_MARK_MEMBER_NAME(TreeCtrlStyle_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TreeCtrlStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::EDIT_LABELS,"EDIT_LABELS");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::NO_BUTTONS,"NO_BUTTONS");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::HAS_BUTTONS,"HAS_BUTTONS");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::TWIST_BUTTONS,"TWIST_BUTTONS");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::NO_LINES,"NO_LINES");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::FULL_ROW_HIGHLIGHT,"FULL_ROW_HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::LINES_AT_ROOT,"LINES_AT_ROOT");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::HIDE_ROOT,"HIDE_ROOT");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::ROW_LINES,"ROW_LINES");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::HAS_VARIABLE_ROW_HEIGHT,"HAS_VARIABLE_ROW_HEIGHT");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::SINGLE,"SINGLE");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::MULTIPLE,"MULTIPLE");
	HX_VISIT_MEMBER_NAME(TreeCtrlStyle_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
};

#endif

::hx::Class TreeCtrlStyle_obj::__mClass;

static ::String TreeCtrlStyle_obj_sStaticFields[] = {
	HX_("EDIT_LABELS",d4,08,96,25),
	HX_("NO_BUTTONS",e3,6c,31,33),
	HX_("HAS_BUTTONS",dc,24,bd,f9),
	HX_("TWIST_BUTTONS",29,d6,00,0e),
	HX_("NO_LINES",21,c8,55,31),
	HX_("FULL_ROW_HIGHLIGHT",5f,5a,e6,ce),
	HX_("LINES_AT_ROOT",8e,2e,fe,38),
	HX_("HIDE_ROOT",ff,55,1c,2f),
	HX_("ROW_LINES",9a,92,87,48),
	HX_("HAS_VARIABLE_ROW_HEIGHT",6a,22,4d,25),
	HX_("SINGLE",88,12,a4,6b),
	HX_("MULTIPLE",10,72,12,f4),
	HX_("DEFAULT_STYLE",b3,7f,93,f7),
	::String(null())
};

void TreeCtrlStyle_obj::__register()
{
	TreeCtrlStyle_obj _hx_dummy;
	TreeCtrlStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.TreeCtrlStyle",e8,18,8f,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TreeCtrlStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &TreeCtrlStyle_obj::__SetStatic;
	__mClass->mMarkFunc = TreeCtrlStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TreeCtrlStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TreeCtrlStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TreeCtrlStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeCtrlStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeCtrlStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TreeCtrlStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_6_boot)
HXDLIN(   6)		EDIT_LABELS = wxTR_EDIT_LABELS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_8_boot)
HXDLIN(   8)		NO_BUTTONS = wxTR_NO_BUTTONS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_10_boot)
HXDLIN(  10)		HAS_BUTTONS = wxTR_HAS_BUTTONS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_12_boot)
HXDLIN(  12)		TWIST_BUTTONS = wxTR_TWIST_BUTTONS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_14_boot)
HXDLIN(  14)		NO_LINES = wxTR_NO_LINES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_16_boot)
HXDLIN(  16)		FULL_ROW_HIGHLIGHT = wxTR_FULL_ROW_HIGHLIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_18_boot)
HXDLIN(  18)		LINES_AT_ROOT = wxTR_LINES_AT_ROOT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_20_boot)
HXDLIN(  20)		HIDE_ROOT = wxTR_HIDE_ROOT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_22_boot)
HXDLIN(  22)		ROW_LINES = wxTR_ROW_LINES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_24_boot)
HXDLIN(  24)		HAS_VARIABLE_ROW_HEIGHT = wxTR_HAS_VARIABLE_ROW_HEIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_26_boot)
HXDLIN(  26)		SINGLE = wxTR_SINGLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_28_boot)
HXDLIN(  28)		MULTIPLE = wxTR_MULTIPLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3d7e64cd4b9875dc_30_boot)
HXDLIN(  30)		DEFAULT_STYLE = wxTR_DEFAULT_STYLE;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
