#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_StandardId
#include <wx/widgets/StandardId.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c2edfad6db2aac48_5_boot,"wx.widgets.StandardId","boot",0x75185e3c,"wx.widgets.StandardId.boot","wx/widgets/StandardId.hx",5,0x78315c58)
HX_LOCAL_STACK_FRAME(_hx_pos_c2edfad6db2aac48_6_boot,"wx.widgets.StandardId","boot",0x75185e3c,"wx.widgets.StandardId.boot","wx/widgets/StandardId.hx",6,0x78315c58)
HX_LOCAL_STACK_FRAME(_hx_pos_c2edfad6db2aac48_7_boot,"wx.widgets.StandardId","boot",0x75185e3c,"wx.widgets.StandardId.boot","wx/widgets/StandardId.hx",7,0x78315c58)
HX_LOCAL_STACK_FRAME(_hx_pos_c2edfad6db2aac48_8_boot,"wx.widgets.StandardId","boot",0x75185e3c,"wx.widgets.StandardId.boot","wx/widgets/StandardId.hx",8,0x78315c58)
HX_LOCAL_STACK_FRAME(_hx_pos_c2edfad6db2aac48_9_boot,"wx.widgets.StandardId","boot",0x75185e3c,"wx.widgets.StandardId.boot","wx/widgets/StandardId.hx",9,0x78315c58)
HX_LOCAL_STACK_FRAME(_hx_pos_c2edfad6db2aac48_10_boot,"wx.widgets.StandardId","boot",0x75185e3c,"wx.widgets.StandardId.boot","wx/widgets/StandardId.hx",10,0x78315c58)
HX_LOCAL_STACK_FRAME(_hx_pos_c2edfad6db2aac48_11_boot,"wx.widgets.StandardId","boot",0x75185e3c,"wx.widgets.StandardId.boot","wx/widgets/StandardId.hx",11,0x78315c58)
HX_LOCAL_STACK_FRAME(_hx_pos_c2edfad6db2aac48_12_boot,"wx.widgets.StandardId","boot",0x75185e3c,"wx.widgets.StandardId.boot","wx/widgets/StandardId.hx",12,0x78315c58)
namespace wx{
namespace widgets{

void StandardId_obj::__construct() { }

Dynamic StandardId_obj::__CreateEmpty() { return new StandardId_obj; }

void *StandardId_obj::_hx_vtable = 0;

Dynamic StandardId_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StandardId_obj > _hx_result = new StandardId_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StandardId_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x552da6c6;
}

int StandardId_obj::NONE;

int StandardId_obj::CLOSE;

int StandardId_obj::OK;

int StandardId_obj::SAVE;

int StandardId_obj::_hx_YES;

int StandardId_obj::_hx_NO;

int StandardId_obj::CANCEL;

int StandardId_obj::APPLY;


StandardId_obj::StandardId_obj()
{
}

bool StandardId_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"OK") ) { outValue = ( OK ); return true; }
		if (HX_FIELD_EQ(inName,"NO") ) { outValue = ( _hx_NO ); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"YES") ) { outValue = ( _hx_YES ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { outValue = ( NONE ); return true; }
		if (HX_FIELD_EQ(inName,"SAVE") ) { outValue = ( SAVE ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLOSE") ) { outValue = ( CLOSE ); return true; }
		if (HX_FIELD_EQ(inName,"APPLY") ) { outValue = ( APPLY ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { outValue = ( CANCEL ); return true; }
	}
	return false;
}

bool StandardId_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"OK") ) { OK=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NO") ) { _hx_NO=ioValue.Cast< int >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"YES") ) { _hx_YES=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SAVE") ) { SAVE=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"APPLY") ) { APPLY=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { CANCEL=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StandardId_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StandardId_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &StandardId_obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &StandardId_obj::CLOSE,HX_("CLOSE",98,4f,51,c6)},
	{::hx::fsInt,(void *) &StandardId_obj::OK,HX_("OK",1c,45,00,00)},
	{::hx::fsInt,(void *) &StandardId_obj::SAVE,HX_("SAVE",3d,53,0e,37)},
	{::hx::fsInt,(void *) &StandardId_obj::_hx_YES,HX_("YES",07,c5,43,00)},
	{::hx::fsInt,(void *) &StandardId_obj::_hx_NO,HX_("NO",41,44,00,00)},
	{::hx::fsInt,(void *) &StandardId_obj::CANCEL,HX_("CANCEL",7a,99,b6,6a)},
	{::hx::fsInt,(void *) &StandardId_obj::APPLY,HX_("APPLY",4e,bd,29,a2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StandardId_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StandardId_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(StandardId_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(StandardId_obj::OK,"OK");
	HX_MARK_MEMBER_NAME(StandardId_obj::SAVE,"SAVE");
	HX_MARK_MEMBER_NAME(StandardId_obj::_hx_YES,"YES");
	HX_MARK_MEMBER_NAME(StandardId_obj::_hx_NO,"NO");
	HX_MARK_MEMBER_NAME(StandardId_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(StandardId_obj::APPLY,"APPLY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StandardId_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StandardId_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(StandardId_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(StandardId_obj::OK,"OK");
	HX_VISIT_MEMBER_NAME(StandardId_obj::SAVE,"SAVE");
	HX_VISIT_MEMBER_NAME(StandardId_obj::_hx_YES,"YES");
	HX_VISIT_MEMBER_NAME(StandardId_obj::_hx_NO,"NO");
	HX_VISIT_MEMBER_NAME(StandardId_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(StandardId_obj::APPLY,"APPLY");
};

#endif

::hx::Class StandardId_obj::__mClass;

static ::String StandardId_obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("CLOSE",98,4f,51,c6),
	HX_("OK",1c,45,00,00),
	HX_("SAVE",3d,53,0e,37),
	HX_("YES",07,c5,43,00),
	HX_("NO",41,44,00,00),
	HX_("CANCEL",7a,99,b6,6a),
	HX_("APPLY",4e,bd,29,a2),
	::String(null())
};

void StandardId_obj::__register()
{
	StandardId_obj _hx_dummy;
	StandardId_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.StandardId",a4,c2,59,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StandardId_obj::__GetStatic;
	__mClass->mSetStaticField = &StandardId_obj::__SetStatic;
	__mClass->mMarkFunc = StandardId_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StandardId_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StandardId_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StandardId_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StandardId_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StandardId_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StandardId_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c2edfad6db2aac48_5_boot)
HXDLIN(   5)		NONE = ::wxID_NONE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2edfad6db2aac48_6_boot)
HXDLIN(   6)		CLOSE = ::wxID_CLOSE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2edfad6db2aac48_7_boot)
HXDLIN(   7)		OK = ::wxID_OK;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2edfad6db2aac48_8_boot)
HXDLIN(   8)		SAVE = ::wxID_SAVE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2edfad6db2aac48_9_boot)
HXDLIN(   9)		_hx_YES = ::wxID_YES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2edfad6db2aac48_10_boot)
HXDLIN(  10)		_hx_NO = ::wxID_NO;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2edfad6db2aac48_11_boot)
HXDLIN(  11)		CANCEL = ::wxID_CANCEL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2edfad6db2aac48_12_boot)
HXDLIN(  12)		APPLY = ::wxID_APPLY;
            	}
}

} // end namespace wx
} // end namespace widgets
