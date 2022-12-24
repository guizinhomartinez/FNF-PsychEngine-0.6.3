#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_DirDialogStyle
#include <wx/widgets/styles/DirDialogStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ef5a6c2f275b7b90_10_boot,"wx.widgets.styles.DirDialogStyle","boot",0xc3bfd884,"wx.widgets.styles.DirDialogStyle.boot","wx/widgets/styles/DirDialogStyle.hx",10,0xfed764c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ef5a6c2f275b7b90_14_boot,"wx.widgets.styles.DirDialogStyle","boot",0xc3bfd884,"wx.widgets.styles.DirDialogStyle.boot","wx/widgets/styles/DirDialogStyle.hx",14,0xfed764c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ef5a6c2f275b7b90_16_boot,"wx.widgets.styles.DirDialogStyle","boot",0xc3bfd884,"wx.widgets.styles.DirDialogStyle.boot","wx/widgets/styles/DirDialogStyle.hx",16,0xfed764c3)
namespace wx{
namespace widgets{
namespace styles{

void DirDialogStyle_obj::__construct() { }

Dynamic DirDialogStyle_obj::__CreateEmpty() { return new DirDialogStyle_obj; }

void *DirDialogStyle_obj::_hx_vtable = 0;

Dynamic DirDialogStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DirDialogStyle_obj > _hx_result = new DirDialogStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DirDialogStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52a0bf2c;
}

int DirDialogStyle_obj::DEFAULT_STYLE;

int DirDialogStyle_obj::DIR_MUST_EXIST;

int DirDialogStyle_obj::CHANGE_DIR;


DirDialogStyle_obj::DirDialogStyle_obj()
{
}

bool DirDialogStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"CHANGE_DIR") ) { outValue = ( CHANGE_DIR ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { outValue = ( DEFAULT_STYLE ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DIR_MUST_EXIST") ) { outValue = ( DIR_MUST_EXIST ); return true; }
	}
	return false;
}

bool DirDialogStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"CHANGE_DIR") ) { CHANGE_DIR=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { DEFAULT_STYLE=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DIR_MUST_EXIST") ) { DIR_MUST_EXIST=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DirDialogStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DirDialogStyle_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &DirDialogStyle_obj::DEFAULT_STYLE,HX_("DEFAULT_STYLE",b3,7f,93,f7)},
	{::hx::fsInt,(void *) &DirDialogStyle_obj::DIR_MUST_EXIST,HX_("DIR_MUST_EXIST",b3,7d,ac,7d)},
	{::hx::fsInt,(void *) &DirDialogStyle_obj::CHANGE_DIR,HX_("CHANGE_DIR",9e,d3,b7,35)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void DirDialogStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirDialogStyle_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
	HX_MARK_MEMBER_NAME(DirDialogStyle_obj::DIR_MUST_EXIST,"DIR_MUST_EXIST");
	HX_MARK_MEMBER_NAME(DirDialogStyle_obj::CHANGE_DIR,"CHANGE_DIR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DirDialogStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirDialogStyle_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
	HX_VISIT_MEMBER_NAME(DirDialogStyle_obj::DIR_MUST_EXIST,"DIR_MUST_EXIST");
	HX_VISIT_MEMBER_NAME(DirDialogStyle_obj::CHANGE_DIR,"CHANGE_DIR");
};

#endif

::hx::Class DirDialogStyle_obj::__mClass;

static ::String DirDialogStyle_obj_sStaticFields[] = {
	HX_("DEFAULT_STYLE",b3,7f,93,f7),
	HX_("DIR_MUST_EXIST",b3,7d,ac,7d),
	HX_("CHANGE_DIR",9e,d3,b7,35),
	::String(null())
};

void DirDialogStyle_obj::__register()
{
	DirDialogStyle_obj _hx_dummy;
	DirDialogStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.DirDialogStyle",5c,6d,74,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DirDialogStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &DirDialogStyle_obj::__SetStatic;
	__mClass->mMarkFunc = DirDialogStyle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DirDialogStyle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DirDialogStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DirDialogStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DirDialogStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DirDialogStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DirDialogStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ef5a6c2f275b7b90_10_boot)
HXDLIN(  10)		DEFAULT_STYLE = wxDD_DEFAULT_STYLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ef5a6c2f275b7b90_14_boot)
HXDLIN(  14)		DIR_MUST_EXIST = wxDD_DIR_MUST_EXIST;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ef5a6c2f275b7b90_16_boot)
HXDLIN(  16)		CHANGE_DIR = wxDD_CHANGE_DIR;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
