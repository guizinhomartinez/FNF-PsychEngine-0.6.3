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
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownBuilder
#include <haxe/ui/components/DropDownBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_SelectedIndexBehaviour
#include <haxe/ui/components/_DropDown/SelectedIndexBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8cb14cd8617c91e4_125_new,"haxe.ui.components._DropDown.SelectedIndexBehaviour","new",0xe7862c1c,"haxe.ui.components._DropDown.SelectedIndexBehaviour.new","haxe/ui/components/DropDown.hx",125,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_8cb14cd8617c91e4_126_validateData,"haxe.ui.components._DropDown.SelectedIndexBehaviour","validateData",0xe83da2a4,"haxe.ui.components._DropDown.SelectedIndexBehaviour.validateData","haxe/ui/components/DropDown.hx",126,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_8cb14cd8617c91e4_131_get,"haxe.ui.components._DropDown.SelectedIndexBehaviour","get",0xe780dc52,"haxe.ui.components._DropDown.SelectedIndexBehaviour.get","haxe/ui/components/DropDown.hx",131,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_8cb14cd8617c91e4_139_set,"haxe.ui.components._DropDown.SelectedIndexBehaviour","set",0xe789f75e,"haxe.ui.components._DropDown.SelectedIndexBehaviour.set","haxe/ui/components/DropDown.hx",139,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{
namespace _DropDown{

void SelectedIndexBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_8cb14cd8617c91e4_125_new)
HXDLIN( 125)		super::__construct(component);
            	}

Dynamic SelectedIndexBehaviour_obj::__CreateEmpty() { return new SelectedIndexBehaviour_obj; }

void *SelectedIndexBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedIndexBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedIndexBehaviour_obj > _hx_result = new SelectedIndexBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedIndexBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x0b2aedda) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b2aedda;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void SelectedIndexBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_8cb14cd8617c91e4_126_validateData)
HXLINE( 127)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_component->_compositeBuilder)->get_handler();
HXLINE( 128)		::haxe::ui::components::IDropDownHandler_obj::set_selectedIndex(handler,::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value));
            	}


 ::haxe::ui::util::VariantType SelectedIndexBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_8cb14cd8617c91e4_131_get)
HXLINE( 132)		if ((this->_component->get_isReady() == false)) {
HXLINE( 133)			return this->super::get();
            		}
HXLINE( 135)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_component->_compositeBuilder)->get_handler();
HXLINE( 136)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(::haxe::ui::components::IDropDownHandler_obj::get_selectedIndex(handler));
            	}


void SelectedIndexBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_8cb14cd8617c91e4_139_set)
HXLINE( 140)		if ((this->_component->get_isReady() == false)) {
HXLINE( 141)			this->super::set(value);
HXLINE( 142)			return;
            		}
HXLINE( 144)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->get())) {
HXLINE( 145)			return;
            		}
HXLINE( 147)		this->_value = value;
HXLINE( 148)		this->invalidateData();
HXLINE( 149)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_component->_compositeBuilder)->get_handler();
HXLINE( 150)		::haxe::ui::components::IDropDownHandler_obj::set_selectedIndex(handler,::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value));
            	}



::hx::ObjectPtr< SelectedIndexBehaviour_obj > SelectedIndexBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedIndexBehaviour_obj > __this = new SelectedIndexBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedIndexBehaviour_obj > SelectedIndexBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedIndexBehaviour_obj *__this = (SelectedIndexBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedIndexBehaviour_obj), true, "haxe.ui.components._DropDown.SelectedIndexBehaviour"));
	*(void **)__this = SelectedIndexBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedIndexBehaviour_obj::SelectedIndexBehaviour_obj()
{
}

::hx::Val SelectedIndexBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedIndexBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedIndexBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedIndexBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class SelectedIndexBehaviour_obj::__mClass;

void SelectedIndexBehaviour_obj::__register()
{
	SelectedIndexBehaviour_obj _hx_dummy;
	SelectedIndexBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._DropDown.SelectedIndexBehaviour",2a,2e,c7,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedIndexBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedIndexBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedIndexBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedIndexBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _DropDown
