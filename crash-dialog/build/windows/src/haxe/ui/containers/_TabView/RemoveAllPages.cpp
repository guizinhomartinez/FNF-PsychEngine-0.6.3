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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TabView
#include <haxe/ui/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_RemoveAllPages
#include <haxe/ui/containers/_TabView/RemoveAllPages.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4fe948437cd74c1e_259_new,"haxe.ui.containers._TabView.RemoveAllPages","new",0x28793d62,"haxe.ui.containers._TabView.RemoveAllPages.new","haxe/ui/containers/TabView.hx",259,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_4fe948437cd74c1e_260_call,"haxe.ui.containers._TabView.RemoveAllPages","call",0x3a540d5c,"haxe.ui.containers._TabView.RemoveAllPages.call","haxe/ui/containers/TabView.hx",260,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void RemoveAllPages_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4fe948437cd74c1e_259_new)
HXDLIN( 259)		super::__construct(component);
            	}

Dynamic RemoveAllPages_obj::__CreateEmpty() { return new RemoveAllPages_obj; }

void *RemoveAllPages_obj::_hx_vtable = 0;

Dynamic RemoveAllPages_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RemoveAllPages_obj > _hx_result = new RemoveAllPages_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RemoveAllPages_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01f5acca) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01f5acca;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType RemoveAllPages_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_4fe948437cd74c1e_260_call)
HXLINE( 261)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 262)		while((builder->_views->length > 0)){
HXLINE( 263)			builder->_tabs->removeTab(0);
            		}
HXLINE( 265)		::hx::TCast<  ::haxe::ui::containers::TabView >::cast(this->_component)->set_pageIndex(-1);
HXLINE( 266)		builder->_tabs->set_selectedIndex(-1);
HXLINE( 267)		return null();
            	}



::hx::ObjectPtr< RemoveAllPages_obj > RemoveAllPages_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RemoveAllPages_obj > __this = new RemoveAllPages_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RemoveAllPages_obj > RemoveAllPages_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RemoveAllPages_obj *__this = (RemoveAllPages_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RemoveAllPages_obj), true, "haxe.ui.containers._TabView.RemoveAllPages"));
	*(void **)__this = RemoveAllPages_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RemoveAllPages_obj::RemoveAllPages_obj()
{
}

::hx::Val RemoveAllPages_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RemoveAllPages_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RemoveAllPages_obj_sStaticStorageInfo = 0;
#endif

static ::String RemoveAllPages_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class RemoveAllPages_obj::__mClass;

void RemoveAllPages_obj::__register()
{
	RemoveAllPages_obj _hx_dummy;
	RemoveAllPages_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.RemoveAllPages",70,a4,ba,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RemoveAllPages_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RemoveAllPages_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RemoveAllPages_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RemoveAllPages_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
