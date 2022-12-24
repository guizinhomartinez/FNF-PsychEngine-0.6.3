#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_NotebookStyle
#include <wx/widgets/styles/NotebookStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e8ccbc7ba54c73f5_6_boot,"wx.widgets.styles.NotebookStyle","boot",0xb6cd1bea,"wx.widgets.styles.NotebookStyle.boot","wx/widgets/styles/NotebookStyle.hx",6,0xfc0f5e07)
HX_LOCAL_STACK_FRAME(_hx_pos_e8ccbc7ba54c73f5_7_boot,"wx.widgets.styles.NotebookStyle","boot",0xb6cd1bea,"wx.widgets.styles.NotebookStyle.boot","wx/widgets/styles/NotebookStyle.hx",7,0xfc0f5e07)
HX_LOCAL_STACK_FRAME(_hx_pos_e8ccbc7ba54c73f5_8_boot,"wx.widgets.styles.NotebookStyle","boot",0xb6cd1bea,"wx.widgets.styles.NotebookStyle.boot","wx/widgets/styles/NotebookStyle.hx",8,0xfc0f5e07)
HX_LOCAL_STACK_FRAME(_hx_pos_e8ccbc7ba54c73f5_9_boot,"wx.widgets.styles.NotebookStyle","boot",0xb6cd1bea,"wx.widgets.styles.NotebookStyle.boot","wx/widgets/styles/NotebookStyle.hx",9,0xfc0f5e07)
HX_LOCAL_STACK_FRAME(_hx_pos_e8ccbc7ba54c73f5_10_boot,"wx.widgets.styles.NotebookStyle","boot",0xb6cd1bea,"wx.widgets.styles.NotebookStyle.boot","wx/widgets/styles/NotebookStyle.hx",10,0xfc0f5e07)
HX_LOCAL_STACK_FRAME(_hx_pos_e8ccbc7ba54c73f5_11_boot,"wx.widgets.styles.NotebookStyle","boot",0xb6cd1bea,"wx.widgets.styles.NotebookStyle.boot","wx/widgets/styles/NotebookStyle.hx",11,0xfc0f5e07)
HX_LOCAL_STACK_FRAME(_hx_pos_e8ccbc7ba54c73f5_12_boot,"wx.widgets.styles.NotebookStyle","boot",0xb6cd1bea,"wx.widgets.styles.NotebookStyle.boot","wx/widgets/styles/NotebookStyle.hx",12,0xfc0f5e07)
namespace wx{
namespace widgets{
namespace styles{

void NotebookStyle_obj::__construct() { }

Dynamic NotebookStyle_obj::__CreateEmpty() { return new NotebookStyle_obj; }

void *NotebookStyle_obj::_hx_vtable = 0;

Dynamic NotebookStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotebookStyle_obj > _hx_result = new NotebookStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotebookStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x788abbe6;
}

int NotebookStyle_obj::TOP;

int NotebookStyle_obj::LEFT;

int NotebookStyle_obj::RIGHT;

int NotebookStyle_obj::BOTTOM;

int NotebookStyle_obj::FIXEDWIDTH;

int NotebookStyle_obj::MULTILINE;

int NotebookStyle_obj::NOPAGETHEME;


NotebookStyle_obj::NotebookStyle_obj()
{
}

bool NotebookStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { outValue = ( TOP ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { outValue = ( LEFT ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { outValue = ( RIGHT ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { outValue = ( BOTTOM ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MULTILINE") ) { outValue = ( MULTILINE ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FIXEDWIDTH") ) { outValue = ( FIXEDWIDTH ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NOPAGETHEME") ) { outValue = ( NOPAGETHEME ); return true; }
	}
	return false;
}

bool NotebookStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { TOP=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MULTILINE") ) { MULTILINE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FIXEDWIDTH") ) { FIXEDWIDTH=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NOPAGETHEME") ) { NOPAGETHEME=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NotebookStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo NotebookStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &NotebookStyle_obj::TOP,HX_("TOP",75,02,40,00)},
	{::hx::fsInt,(void *) &NotebookStyle_obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsInt,(void *) &NotebookStyle_obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsInt,(void *) &NotebookStyle_obj::BOTTOM,HX_("BOTTOM",eb,92,fb,17)},
	{::hx::fsInt,(void *) &NotebookStyle_obj::FIXEDWIDTH,HX_("FIXEDWIDTH",12,6c,69,12)},
	{::hx::fsInt,(void *) &NotebookStyle_obj::MULTILINE,HX_("MULTILINE",cd,42,6a,99)},
	{::hx::fsInt,(void *) &NotebookStyle_obj::NOPAGETHEME,HX_("NOPAGETHEME",d9,00,88,b8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void NotebookStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotebookStyle_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(NotebookStyle_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(NotebookStyle_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(NotebookStyle_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(NotebookStyle_obj::FIXEDWIDTH,"FIXEDWIDTH");
	HX_MARK_MEMBER_NAME(NotebookStyle_obj::MULTILINE,"MULTILINE");
	HX_MARK_MEMBER_NAME(NotebookStyle_obj::NOPAGETHEME,"NOPAGETHEME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NotebookStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotebookStyle_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(NotebookStyle_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(NotebookStyle_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(NotebookStyle_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(NotebookStyle_obj::FIXEDWIDTH,"FIXEDWIDTH");
	HX_VISIT_MEMBER_NAME(NotebookStyle_obj::MULTILINE,"MULTILINE");
	HX_VISIT_MEMBER_NAME(NotebookStyle_obj::NOPAGETHEME,"NOPAGETHEME");
};

#endif

::hx::Class NotebookStyle_obj::__mClass;

static ::String NotebookStyle_obj_sStaticFields[] = {
	HX_("TOP",75,02,40,00),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("BOTTOM",eb,92,fb,17),
	HX_("FIXEDWIDTH",12,6c,69,12),
	HX_("MULTILINE",cd,42,6a,99),
	HX_("NOPAGETHEME",d9,00,88,b8),
	::String(null())
};

void NotebookStyle_obj::__register()
{
	NotebookStyle_obj _hx_dummy;
	NotebookStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.NotebookStyle",b6,e3,f9,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NotebookStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &NotebookStyle_obj::__SetStatic;
	__mClass->mMarkFunc = NotebookStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NotebookStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NotebookStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NotebookStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NotebookStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e8ccbc7ba54c73f5_6_boot)
HXDLIN(   6)		TOP = wxNB_TOP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8ccbc7ba54c73f5_7_boot)
HXDLIN(   7)		LEFT = wxNB_LEFT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8ccbc7ba54c73f5_8_boot)
HXDLIN(   8)		RIGHT = wxNB_RIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8ccbc7ba54c73f5_9_boot)
HXDLIN(   9)		BOTTOM = wxNB_BOTTOM;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8ccbc7ba54c73f5_10_boot)
HXDLIN(  10)		FIXEDWIDTH = wxNB_FIXEDWIDTH;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8ccbc7ba54c73f5_11_boot)
HXDLIN(  11)		MULTILINE = wxNB_MULTILINE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8ccbc7ba54c73f5_12_boot)
HXDLIN(  12)		NOPAGETHEME = wxNB_NOPAGETHEME;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
