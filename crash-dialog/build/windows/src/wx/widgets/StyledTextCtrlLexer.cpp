#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_StyledTextCtrlLexer
#include <wx/widgets/StyledTextCtrlLexer.h>
#endif

namespace wx{
namespace widgets{

void StyledTextCtrlLexer_obj::__construct() { }

Dynamic StyledTextCtrlLexer_obj::__CreateEmpty() { return new StyledTextCtrlLexer_obj; }

void *StyledTextCtrlLexer_obj::_hx_vtable = 0;

Dynamic StyledTextCtrlLexer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyledTextCtrlLexer_obj > _hx_result = new StyledTextCtrlLexer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyledTextCtrlLexer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x516944d3;
}


StyledTextCtrlLexer_obj::StyledTextCtrlLexer_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StyledTextCtrlLexer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StyledTextCtrlLexer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class StyledTextCtrlLexer_obj::__mClass;

void StyledTextCtrlLexer_obj::__register()
{
	StyledTextCtrlLexer_obj _hx_dummy;
	StyledTextCtrlLexer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.StyledTextCtrlLexer",35,bd,f5,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StyledTextCtrlLexer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyledTextCtrlLexer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyledTextCtrlLexer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace wx
} // end namespace widgets
