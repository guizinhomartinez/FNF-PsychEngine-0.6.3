#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_LexicalStates
#include <wx/widgets/styles/LexicalStates.h>
#endif

namespace wx{
namespace widgets{
namespace styles{

void LexicalStates_obj::__construct() { }

Dynamic LexicalStates_obj::__CreateEmpty() { return new LexicalStates_obj; }

void *LexicalStates_obj::_hx_vtable = 0;

Dynamic LexicalStates_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LexicalStates_obj > _hx_result = new LexicalStates_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LexicalStates_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d1d7b3a;
}


LexicalStates_obj::LexicalStates_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LexicalStates_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LexicalStates_obj_sStaticStorageInfo = 0;
#endif

::hx::Class LexicalStates_obj::__mClass;

void LexicalStates_obj::__register()
{
	LexicalStates_obj _hx_dummy;
	LexicalStates_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.LexicalStates",a6,90,26,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LexicalStates_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LexicalStates_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LexicalStates_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
