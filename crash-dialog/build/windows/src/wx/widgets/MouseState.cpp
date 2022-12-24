#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_MouseState
#include <wx/widgets/MouseState.h>
#endif

namespace wx{
namespace widgets{


static ::String MouseState_obj_sMemberFields[] = {
	HX_("GetX",22,2f,3b,2f),
	HX_("GetY",23,2f,3b,2f),
	::String(null()) };

::hx::Class MouseState_obj::__mClass;

void MouseState_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.MouseState",d8,ab,cf,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MouseState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x43356aba >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace wx
} // end namespace widgets
