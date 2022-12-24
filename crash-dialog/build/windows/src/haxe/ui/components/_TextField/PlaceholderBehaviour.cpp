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
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_PlaceholderBehaviour
#include <haxe/ui/components/_TextField/PlaceholderBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_TextFieldHelper
#include <haxe/ui/components/_TextField/TextFieldHelper.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6c1f573ff0bf6cb8_213_new,"haxe.ui.components._TextField.PlaceholderBehaviour","new",0x29cbe196,"haxe.ui.components._TextField.PlaceholderBehaviour.new","haxe/ui/components/TextField.hx",213,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_6c1f573ff0bf6cb8_214_validateData,"haxe.ui.components._TextField.PlaceholderBehaviour","validateData",0xff966dea,"haxe.ui.components._TextField.PlaceholderBehaviour.validateData","haxe/ui/components/TextField.hx",214,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void PlaceholderBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6c1f573ff0bf6cb8_213_new)
HXDLIN( 213)		super::__construct(component);
            	}

Dynamic PlaceholderBehaviour_obj::__CreateEmpty() { return new PlaceholderBehaviour_obj; }

void *PlaceholderBehaviour_obj::_hx_vtable = 0;

Dynamic PlaceholderBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlaceholderBehaviour_obj > _hx_result = new PlaceholderBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlaceholderBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x1d3e1f0c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1d3e1f0c;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void PlaceholderBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_6c1f573ff0bf6cb8_214_validateData)
HXLINE( 215)		 ::haxe::ui::components::TextField textfield = ::hx::TCast<  ::haxe::ui::components::TextField >::cast(this->_component);
HXLINE( 216)		::haxe::ui::components::_TextField::TextFieldHelper_obj::validateText(textfield,textfield->get_text());
            	}



::hx::ObjectPtr< PlaceholderBehaviour_obj > PlaceholderBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PlaceholderBehaviour_obj > __this = new PlaceholderBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PlaceholderBehaviour_obj > PlaceholderBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PlaceholderBehaviour_obj *__this = (PlaceholderBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlaceholderBehaviour_obj), true, "haxe.ui.components._TextField.PlaceholderBehaviour"));
	*(void **)__this = PlaceholderBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PlaceholderBehaviour_obj::PlaceholderBehaviour_obj()
{
}

::hx::Val PlaceholderBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlaceholderBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlaceholderBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String PlaceholderBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class PlaceholderBehaviour_obj::__mClass;

void PlaceholderBehaviour_obj::__register()
{
	PlaceholderBehaviour_obj _hx_dummy;
	PlaceholderBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.PlaceholderBehaviour",a4,1e,f2,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlaceholderBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlaceholderBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlaceholderBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlaceholderBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField
