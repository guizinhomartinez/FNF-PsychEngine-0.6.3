#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
#endif

namespace hx{
namespace widgets{


static ::String ItemContainerImmutable_obj_sMemberFields[] = {
	HX_("setString",13,9e,d7,70),
	HX_("getString",07,b2,86,8d),
	::String(null()) };

::hx::Class ItemContainerImmutable_obj::__mClass;

void ItemContainerImmutable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ItemContainerImmutable",d1,44,61,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ItemContainerImmutable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x73706cf3 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
