#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_TextEntry
#include <hx/widgets/TextEntry.h>
#endif

namespace hx{
namespace widgets{


::hx::Class TextEntry_obj::__mClass;

void TextEntry_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.TextEntry",88,8a,59,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xc39007a6 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
