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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_SelectedTab
#include <haxe/ui/components/_TabBar/SelectedTab.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bb42a3261ab0b0aa_178_new,"haxe.ui.components._TabBar.SelectedTab","new",0xb84bb695,"haxe.ui.components._TabBar.SelectedTab.new","haxe/ui/components/TabBar.hx",178,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_bb42a3261ab0b0aa_179_get,"haxe.ui.components._TabBar.SelectedTab","get",0xb84666cb,"haxe.ui.components._TabBar.SelectedTab.get","haxe/ui/components/TabBar.hx",179,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void SelectedTab_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_bb42a3261ab0b0aa_178_new)
HXDLIN( 178)		super::__construct(component);
            	}

Dynamic SelectedTab_obj::__CreateEmpty() { return new SelectedTab_obj; }

void *SelectedTab_obj::_hx_vtable = 0;

Dynamic SelectedTab_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedTab_obj > _hx_result = new SelectedTab_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedTab_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x32acbc71) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32acbc71;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType SelectedTab_obj::get(){
            	HX_STACKFRAME(&_hx_pos_bb42a3261ab0b0aa_179_get)
HXLINE( 180)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 181)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(builder->_container->findComponent(HX_("tabbar-button-selected",67,00,aa,e0),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >());
            	}



::hx::ObjectPtr< SelectedTab_obj > SelectedTab_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedTab_obj > __this = new SelectedTab_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedTab_obj > SelectedTab_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedTab_obj *__this = (SelectedTab_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedTab_obj), true, "haxe.ui.components._TabBar.SelectedTab"));
	*(void **)__this = SelectedTab_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedTab_obj::SelectedTab_obj()
{
}

::hx::Val SelectedTab_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedTab_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedTab_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedTab_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class SelectedTab_obj::__mClass;

void SelectedTab_obj::__register()
{
	SelectedTab_obj _hx_dummy;
	SelectedTab_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.SelectedTab",23,c8,05,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedTab_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedTab_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedTab_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedTab_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
