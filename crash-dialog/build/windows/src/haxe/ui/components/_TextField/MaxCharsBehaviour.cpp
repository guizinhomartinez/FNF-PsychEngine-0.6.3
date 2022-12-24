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
#ifndef INCLUDED_haxe_ui_components__TextField_MaxCharsBehaviour
#include <haxe/ui/components/_TextField/MaxCharsBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_934ba5857642ff2e_175_new,"haxe.ui.components._TextField.MaxCharsBehaviour","new",0x4ceb12bc,"haxe.ui.components._TextField.MaxCharsBehaviour.new","haxe/ui/components/TextField.hx",175,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_934ba5857642ff2e_176_validateData,"haxe.ui.components._TextField.MaxCharsBehaviour","validateData",0xcc96e804,"haxe.ui.components._TextField.MaxCharsBehaviour.validateData","haxe/ui/components/TextField.hx",176,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void MaxCharsBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_934ba5857642ff2e_175_new)
HXDLIN( 175)		super::__construct(component);
            	}

Dynamic MaxCharsBehaviour_obj::__CreateEmpty() { return new MaxCharsBehaviour_obj; }

void *MaxCharsBehaviour_obj::_hx_vtable = 0;

Dynamic MaxCharsBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MaxCharsBehaviour_obj > _hx_result = new MaxCharsBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MaxCharsBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x4698707e || inClassId==(int)0x7e17fa9f;
	}
}

void MaxCharsBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_934ba5857642ff2e_176_validateData)
HXLINE( 177)		 ::haxe::ui::components::TextField textfield = ::hx::TCast<  ::haxe::ui::components::TextField >::cast(this->_component);
HXLINE( 178)		::haxe::ui::components::_TextField::TextFieldHelper_obj::validateText(textfield,textfield->get_text());
            	}



::hx::ObjectPtr< MaxCharsBehaviour_obj > MaxCharsBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MaxCharsBehaviour_obj > __this = new MaxCharsBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MaxCharsBehaviour_obj > MaxCharsBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MaxCharsBehaviour_obj *__this = (MaxCharsBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MaxCharsBehaviour_obj), true, "haxe.ui.components._TextField.MaxCharsBehaviour"));
	*(void **)__this = MaxCharsBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MaxCharsBehaviour_obj::MaxCharsBehaviour_obj()
{
}

::hx::Val MaxCharsBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MaxCharsBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MaxCharsBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String MaxCharsBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class MaxCharsBehaviour_obj::__mClass;

void MaxCharsBehaviour_obj::__register()
{
	MaxCharsBehaviour_obj _hx_dummy;
	MaxCharsBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.MaxCharsBehaviour",ca,44,cc,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MaxCharsBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MaxCharsBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MaxCharsBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MaxCharsBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField
