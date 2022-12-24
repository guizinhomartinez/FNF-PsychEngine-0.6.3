#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_StyledTextCtrlEventType
#include <wx/widgets/StyledTextCtrlEventType.h>
#endif

namespace wx{
namespace widgets{

void StyledTextCtrlEventType_obj::__construct() { }

Dynamic StyledTextCtrlEventType_obj::__CreateEmpty() { return new StyledTextCtrlEventType_obj; }

void *StyledTextCtrlEventType_obj::_hx_vtable = 0;

Dynamic StyledTextCtrlEventType_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyledTextCtrlEventType_obj > _hx_result = new StyledTextCtrlEventType_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyledTextCtrlEventType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6075163b;
}


StyledTextCtrlEventType_obj::StyledTextCtrlEventType_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StyledTextCtrlEventType_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StyledTextCtrlEventType_obj_sStaticStorageInfo = 0;
#endif

::hx::Class StyledTextCtrlEventType_obj::__mClass;

void StyledTextCtrlEventType_obj::__register()
{
	StyledTextCtrlEventType_obj _hx_dummy;
	StyledTextCtrlEventType_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.StyledTextCtrlEventType",9d,67,e2,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StyledTextCtrlEventType_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyledTextCtrlEventType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyledTextCtrlEventType_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace wx
} // end namespace widgets
