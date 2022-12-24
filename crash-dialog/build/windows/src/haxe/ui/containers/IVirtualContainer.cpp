#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

namespace haxe{
namespace ui{
namespace containers{


static ::String IVirtualContainer_obj_sMemberFields[] = {
	HX_("get_itemWidth",ca,ef,b1,8b),
	HX_("set_itemWidth",d6,d1,b7,d0),
	HX_("get_itemHeight",a3,59,4f,66),
	HX_("set_itemHeight",17,42,6f,86),
	HX_("get_itemCount",93,7e,b2,0b),
	HX_("set_itemCount",9f,60,b8,50),
	HX_("get_variableItemSize",d9,e6,6f,c9),
	HX_("set_variableItemSize",4d,9e,27,96),
	HX_("get_virtual",22,fe,0b,9d),
	HX_("set_virtual",2e,05,79,a7),
	HX_("get_hscrollPos",68,3e,3d,d2),
	HX_("set_hscrollPos",dc,26,5d,f2),
	HX_("get_hscrollMax",78,eb,3a,d2),
	HX_("set_hscrollMax",ec,d3,5a,f2),
	HX_("get_hscrollPageSize",5c,19,50,f2),
	HX_("set_hscrollPageSize",68,0c,ed,2e),
	HX_("get_vscrollPos",9a,cc,4f,56),
	HX_("set_vscrollPos",0e,b5,6f,76),
	HX_("get_vscrollMax",aa,79,4d,56),
	HX_("set_vscrollMax",1e,62,6d,76),
	HX_("get_vscrollPageSize",ea,d5,12,18),
	HX_("set_vscrollPageSize",f6,c8,af,54),
	HX_("get_itemRenderer",ff,fd,a3,9b),
	HX_("set_itemRenderer",73,eb,e5,f1),
	HX_("get_itemRendererClass",b9,cd,4d,70),
	HX_("set_itemRendererClass",c5,9b,56,c4),
	::String(null()) };

::hx::Class IVirtualContainer_obj::__mClass;

void IVirtualContainer_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.IVirtualContainer",d5,a2,19,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IVirtualContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x3d194ad3 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
