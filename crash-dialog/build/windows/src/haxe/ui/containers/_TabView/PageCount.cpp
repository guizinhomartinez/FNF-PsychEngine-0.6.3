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
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_PageCount
#include <haxe/ui/containers/_TabView/PageCount.h>
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
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d6c0a6d4f05dfe5d_202_new,"haxe.ui.containers._TabView.PageCount","new",0xb5b56769,"haxe.ui.containers._TabView.PageCount.new","haxe/ui/containers/TabView.hx",202,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_d6c0a6d4f05dfe5d_203_get,"haxe.ui.containers._TabView.PageCount","get",0xb5b0179f,"haxe.ui.containers._TabView.PageCount.get","haxe/ui/containers/TabView.hx",203,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void PageCount_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d6c0a6d4f05dfe5d_202_new)
HXDLIN( 202)		super::__construct(component);
            	}

Dynamic PageCount_obj::__CreateEmpty() { return new PageCount_obj; }

void *PageCount_obj::_hx_vtable = 0;

Dynamic PageCount_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PageCount_obj > _hx_result = new PageCount_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PageCount_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x44c7f539;
	}
}

 ::haxe::ui::util::VariantType PageCount_obj::get(){
            	HX_STACKFRAME(&_hx_pos_d6c0a6d4f05dfe5d_203_get)
HXLINE( 204)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 205)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(builder->_tabs->get_tabCount());
            	}



::hx::ObjectPtr< PageCount_obj > PageCount_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PageCount_obj > __this = new PageCount_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PageCount_obj > PageCount_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PageCount_obj *__this = (PageCount_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PageCount_obj), true, "haxe.ui.containers._TabView.PageCount"));
	*(void **)__this = PageCount_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PageCount_obj::PageCount_obj()
{
}

::hx::Val PageCount_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PageCount_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PageCount_obj_sStaticStorageInfo = 0;
#endif

static ::String PageCount_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class PageCount_obj::__mClass;

void PageCount_obj::__register()
{
	PageCount_obj _hx_dummy;
	PageCount_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.PageCount",f7,7e,69,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PageCount_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PageCount_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PageCount_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PageCount_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
