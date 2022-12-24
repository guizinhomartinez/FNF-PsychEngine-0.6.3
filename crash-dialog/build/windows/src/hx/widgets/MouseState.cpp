#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_MouseState
#include <hx/widgets/MouseState.h>
#endif

namespace hx{
namespace widgets{


static ::String MouseState_obj_sMemberFields[] = {
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	::String(null()) };

::hx::Class MouseState_obj::__mClass;

void MouseState_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.MouseState",49,aa,c4,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MouseState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xc03ba76b >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
