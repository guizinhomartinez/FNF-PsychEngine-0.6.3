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
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Closable
#include <haxe/ui/containers/_TabView/Closable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0de278a857cb90a9_102_new,"haxe.ui.containers._TabView.Closable","new",0xda4a3e02,"haxe.ui.containers._TabView.Closable.new","haxe/ui/containers/TabView.hx",102,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_0de278a857cb90a9_103_validateData,"haxe.ui.containers._TabView.Closable","validateData",0x31d723fe,"haxe.ui.containers._TabView.Closable.validateData","haxe/ui/containers/TabView.hx",103,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void Closable_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0de278a857cb90a9_102_new)
HXDLIN( 102)		super::__construct(component);
            	}

Dynamic Closable_obj::__CreateEmpty() { return new Closable_obj; }

void *Closable_obj::_hx_vtable = 0;

Dynamic Closable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Closable_obj > _hx_result = new Closable_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Closable_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x32af5d0e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32af5d0e;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void Closable_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_0de278a857cb90a9_103_validateData)
HXLINE( 104)		if (::hx::IsEq( this->_component->get_native(),true )) {
HXLINE( 105)			return;
            		}
HXLINE( 108)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 109)		 ::haxe::ui::components::TabBar builder1 = builder->_tabs;
HXDLIN( 109)		builder1->set_closable(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->_value));
            	}



::hx::ObjectPtr< Closable_obj > Closable_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Closable_obj > __this = new Closable_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Closable_obj > Closable_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Closable_obj *__this = (Closable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Closable_obj), true, "haxe.ui.containers._TabView.Closable"));
	*(void **)__this = Closable_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Closable_obj::Closable_obj()
{
}

::hx::Val Closable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Closable_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Closable_obj_sStaticStorageInfo = 0;
#endif

static ::String Closable_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class Closable_obj::__mClass;

void Closable_obj::__register()
{
	Closable_obj _hx_dummy;
	Closable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.Closable",10,d5,96,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Closable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Closable_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Closable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Closable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
