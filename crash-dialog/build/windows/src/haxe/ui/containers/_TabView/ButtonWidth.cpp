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
#ifndef INCLUDED_haxe_ui_containers__TabView_ButtonWidth
#include <haxe/ui/containers/_TabView/ButtonWidth.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a76a396232949be_274_new,"haxe.ui.containers._TabView.ButtonWidth","new",0x6ab6f7dd,"haxe.ui.containers._TabView.ButtonWidth.new","haxe/ui/containers/TabView.hx",274,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_0a76a396232949be_275_validateData,"haxe.ui.containers._TabView.ButtonWidth","validateData",0x843fd6c3,"haxe.ui.containers._TabView.ButtonWidth.validateData","haxe/ui/containers/TabView.hx",275,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void ButtonWidth_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0a76a396232949be_274_new)
HXDLIN( 274)		super::__construct(component);
            	}

Dynamic ButtonWidth_obj::__CreateEmpty() { return new ButtonWidth_obj; }

void *ButtonWidth_obj::_hx_vtable = 0;

Dynamic ButtonWidth_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonWidth_obj > _hx_result = new ButtonWidth_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonWidth_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x7e17fa9f || inClassId==(int)0x7e6ed02d;
	}
}

void ButtonWidth_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_0a76a396232949be_275_validateData)
HXLINE( 276)		 ::haxe::ui::components::TabBar tabbar = this->_component->findComponent(HX_("tabview-tabs",b1,fd,eb,1e),::hx::ClassOf< ::haxe::ui::components::TabBar >(),null(),null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE( 277)		if (::hx::IsNotNull( tabbar )) {
HXLINE( 278)			tabbar->set_buttonWidth(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value));
            		}
            	}



::hx::ObjectPtr< ButtonWidth_obj > ButtonWidth_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ButtonWidth_obj > __this = new ButtonWidth_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ButtonWidth_obj > ButtonWidth_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ButtonWidth_obj *__this = (ButtonWidth_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonWidth_obj), true, "haxe.ui.containers._TabView.ButtonWidth"));
	*(void **)__this = ButtonWidth_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ButtonWidth_obj::ButtonWidth_obj()
{
}

::hx::Val ButtonWidth_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ButtonWidth_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ButtonWidth_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonWidth_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ButtonWidth_obj::__mClass;

void ButtonWidth_obj::__register()
{
	ButtonWidth_obj _hx_dummy;
	ButtonWidth_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.ButtonWidth",6b,c5,d4,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonWidth_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonWidth_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonWidth_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonWidth_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
