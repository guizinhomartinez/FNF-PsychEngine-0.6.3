#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
#endif

namespace hx{
namespace widgets{


static ::String ItemContainer_obj_sMemberFields[] = {
	HX_("append",da,e1,d3,8f),
	::String(null()) };

::hx::Class ItemContainer_obj::__mClass;

void ItemContainer_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ItemContainer",31,15,6f,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ItemContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x112d794f >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
