#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_ListState
#include <wx/widgets/ListState.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_92c9906a8e2b1003_7_boot,"wx.widgets.ListState","boot",0xdd3069d9,"wx.widgets.ListState.boot","wx/widgets/ListState.hx",7,0x2f409cf9)
HX_LOCAL_STACK_FRAME(_hx_pos_92c9906a8e2b1003_8_boot,"wx.widgets.ListState","boot",0xdd3069d9,"wx.widgets.ListState.boot","wx/widgets/ListState.hx",8,0x2f409cf9)
HX_LOCAL_STACK_FRAME(_hx_pos_92c9906a8e2b1003_9_boot,"wx.widgets.ListState","boot",0xdd3069d9,"wx.widgets.ListState.boot","wx/widgets/ListState.hx",9,0x2f409cf9)
HX_LOCAL_STACK_FRAME(_hx_pos_92c9906a8e2b1003_10_boot,"wx.widgets.ListState","boot",0xdd3069d9,"wx.widgets.ListState.boot","wx/widgets/ListState.hx",10,0x2f409cf9)
HX_LOCAL_STACK_FRAME(_hx_pos_92c9906a8e2b1003_11_boot,"wx.widgets.ListState","boot",0xdd3069d9,"wx.widgets.ListState.boot","wx/widgets/ListState.hx",11,0x2f409cf9)
HX_LOCAL_STACK_FRAME(_hx_pos_92c9906a8e2b1003_12_boot,"wx.widgets.ListState","boot",0xdd3069d9,"wx.widgets.ListState.boot","wx/widgets/ListState.hx",12,0x2f409cf9)
HX_LOCAL_STACK_FRAME(_hx_pos_92c9906a8e2b1003_13_boot,"wx.widgets.ListState","boot",0xdd3069d9,"wx.widgets.ListState.boot","wx/widgets/ListState.hx",13,0x2f409cf9)
HX_LOCAL_STACK_FRAME(_hx_pos_92c9906a8e2b1003_14_boot,"wx.widgets.ListState","boot",0xdd3069d9,"wx.widgets.ListState.boot","wx/widgets/ListState.hx",14,0x2f409cf9)
HX_LOCAL_STACK_FRAME(_hx_pos_92c9906a8e2b1003_15_boot,"wx.widgets.ListState","boot",0xdd3069d9,"wx.widgets.ListState.boot","wx/widgets/ListState.hx",15,0x2f409cf9)
namespace wx{
namespace widgets{

void ListState_obj::__construct() { }

Dynamic ListState_obj::__CreateEmpty() { return new ListState_obj; }

void *ListState_obj::_hx_vtable = 0;

Dynamic ListState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListState_obj > _hx_result = new ListState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ListState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x664ad245;
}

int ListState_obj::DISABLED;

int ListState_obj::DONTCARE;

int ListState_obj::DROPHILITED;

int ListState_obj::FILTERED;

int ListState_obj::FOCUSED;

int ListState_obj::INUSE;

int ListState_obj::PICKED;

int ListState_obj::SELECTED;

int ListState_obj::SOURCE;


ListState_obj::ListState_obj()
{
}

bool ListState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"INUSE") ) { outValue = ( INUSE ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PICKED") ) { outValue = ( PICKED ); return true; }
		if (HX_FIELD_EQ(inName,"SOURCE") ) { outValue = ( SOURCE ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FOCUSED") ) { outValue = ( FOCUSED ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DISABLED") ) { outValue = ( DISABLED ); return true; }
		if (HX_FIELD_EQ(inName,"DONTCARE") ) { outValue = ( DONTCARE ); return true; }
		if (HX_FIELD_EQ(inName,"FILTERED") ) { outValue = ( FILTERED ); return true; }
		if (HX_FIELD_EQ(inName,"SELECTED") ) { outValue = ( SELECTED ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"DROPHILITED") ) { outValue = ( DROPHILITED ); return true; }
	}
	return false;
}

bool ListState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"INUSE") ) { INUSE=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PICKED") ) { PICKED=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SOURCE") ) { SOURCE=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FOCUSED") ) { FOCUSED=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DISABLED") ) { DISABLED=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DONTCARE") ) { DONTCARE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"FILTERED") ) { FILTERED=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SELECTED") ) { SELECTED=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"DROPHILITED") ) { DROPHILITED=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ListState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ListState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ListState_obj::DISABLED,HX_("DISABLED",7c,d1,89,d5)},
	{::hx::fsInt,(void *) &ListState_obj::DONTCARE,HX_("DONTCARE",e2,ba,7f,c0)},
	{::hx::fsInt,(void *) &ListState_obj::DROPHILITED,HX_("DROPHILITED",66,54,3d,a0)},
	{::hx::fsInt,(void *) &ListState_obj::FILTERED,HX_("FILTERED",17,66,0c,6e)},
	{::hx::fsInt,(void *) &ListState_obj::FOCUSED,HX_("FOCUSED",17,32,57,c1)},
	{::hx::fsInt,(void *) &ListState_obj::INUSE,HX_("INUSE",62,c5,0f,3c)},
	{::hx::fsInt,(void *) &ListState_obj::PICKED,HX_("PICKED",80,a7,4f,31)},
	{::hx::fsInt,(void *) &ListState_obj::SELECTED,HX_("SELECTED",5b,ba,f2,0a)},
	{::hx::fsInt,(void *) &ListState_obj::SOURCE,HX_("SOURCE",db,5c,b4,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ListState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListState_obj::DISABLED,"DISABLED");
	HX_MARK_MEMBER_NAME(ListState_obj::DONTCARE,"DONTCARE");
	HX_MARK_MEMBER_NAME(ListState_obj::DROPHILITED,"DROPHILITED");
	HX_MARK_MEMBER_NAME(ListState_obj::FILTERED,"FILTERED");
	HX_MARK_MEMBER_NAME(ListState_obj::FOCUSED,"FOCUSED");
	HX_MARK_MEMBER_NAME(ListState_obj::INUSE,"INUSE");
	HX_MARK_MEMBER_NAME(ListState_obj::PICKED,"PICKED");
	HX_MARK_MEMBER_NAME(ListState_obj::SELECTED,"SELECTED");
	HX_MARK_MEMBER_NAME(ListState_obj::SOURCE,"SOURCE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListState_obj::DISABLED,"DISABLED");
	HX_VISIT_MEMBER_NAME(ListState_obj::DONTCARE,"DONTCARE");
	HX_VISIT_MEMBER_NAME(ListState_obj::DROPHILITED,"DROPHILITED");
	HX_VISIT_MEMBER_NAME(ListState_obj::FILTERED,"FILTERED");
	HX_VISIT_MEMBER_NAME(ListState_obj::FOCUSED,"FOCUSED");
	HX_VISIT_MEMBER_NAME(ListState_obj::INUSE,"INUSE");
	HX_VISIT_MEMBER_NAME(ListState_obj::PICKED,"PICKED");
	HX_VISIT_MEMBER_NAME(ListState_obj::SELECTED,"SELECTED");
	HX_VISIT_MEMBER_NAME(ListState_obj::SOURCE,"SOURCE");
};

#endif

::hx::Class ListState_obj::__mClass;

static ::String ListState_obj_sStaticFields[] = {
	HX_("DISABLED",7c,d1,89,d5),
	HX_("DONTCARE",e2,ba,7f,c0),
	HX_("DROPHILITED",66,54,3d,a0),
	HX_("FILTERED",17,66,0c,6e),
	HX_("FOCUSED",17,32,57,c1),
	HX_("INUSE",62,c5,0f,3c),
	HX_("PICKED",80,a7,4f,31),
	HX_("SELECTED",5b,ba,f2,0a),
	HX_("SOURCE",db,5c,b4,e4),
	::String(null())
};

void ListState_obj::__register()
{
	ListState_obj _hx_dummy;
	ListState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.ListState",27,5c,17,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ListState_obj::__GetStatic;
	__mClass->mSetStaticField = &ListState_obj::__SetStatic;
	__mClass->mMarkFunc = ListState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ListState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ListState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ListState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_92c9906a8e2b1003_7_boot)
HXDLIN(   7)		DISABLED = wxLIST_STATE_DISABLED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92c9906a8e2b1003_8_boot)
HXDLIN(   8)		DONTCARE = wxLIST_STATE_DONTCARE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92c9906a8e2b1003_9_boot)
HXDLIN(   9)		DROPHILITED = wxLIST_STATE_DROPHILITED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92c9906a8e2b1003_10_boot)
HXDLIN(  10)		FILTERED = wxLIST_STATE_FILTERED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92c9906a8e2b1003_11_boot)
HXDLIN(  11)		FOCUSED = wxLIST_STATE_FOCUSED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92c9906a8e2b1003_12_boot)
HXDLIN(  12)		INUSE = wxLIST_STATE_INUSE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92c9906a8e2b1003_13_boot)
HXDLIN(  13)		PICKED = wxLIST_STATE_PICKED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92c9906a8e2b1003_14_boot)
HXDLIN(  14)		SELECTED = wxLIST_STATE_SELECTED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92c9906a8e2b1003_15_boot)
HXDLIN(  15)		SOURCE = wxLIST_STATE_SOURCE;
            	}
}

} // end namespace wx
} // end namespace widgets
