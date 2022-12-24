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
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_SelectionStartIndexBehaviour
#include <haxe/ui/components/_TextField/SelectionStartIndexBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7e34453dc2a6150d_278_new,"haxe.ui.components._TextField.SelectionStartIndexBehaviour","new",0xbe30dead,"haxe.ui.components._TextField.SelectionStartIndexBehaviour.new","haxe/ui/components/TextField.hx",278,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_7e34453dc2a6150d_280_get,"haxe.ui.components._TextField.SelectionStartIndexBehaviour","get",0xbe2b8ee3,"haxe.ui.components._TextField.SelectionStartIndexBehaviour.get","haxe/ui/components/TextField.hx",280,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_7e34453dc2a6150d_282_set,"haxe.ui.components._TextField.SelectionStartIndexBehaviour","set",0xbe34a9ef,"haxe.ui.components._TextField.SelectionStartIndexBehaviour.set","haxe/ui/components/TextField.hx",282,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void SelectionStartIndexBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7e34453dc2a6150d_278_new)
HXDLIN( 278)		super::__construct(component);
            	}

Dynamic SelectionStartIndexBehaviour_obj::__CreateEmpty() { return new SelectionStartIndexBehaviour_obj; }

void *SelectionStartIndexBehaviour_obj::_hx_vtable = 0;

Dynamic SelectionStartIndexBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectionStartIndexBehaviour_obj > _hx_result = new SelectionStartIndexBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectionStartIndexBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x7f013793;
	}
}

 ::haxe::ui::util::VariantType SelectionStartIndexBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_7e34453dc2a6150d_280_get)
HXDLIN( 280)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(this->_component->getTextInput()->get_selectionStartIndex());
            	}


void SelectionStartIndexBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_7e34453dc2a6150d_282_set)
HXLINE( 283)		this->super::set(value);
HXLINE( 284)		this->_component->syncComponentValidation(null());
HXLINE( 285)		 ::haxe::ui::core::TextInput _hx_tmp = this->_component->getTextInput();
HXDLIN( 285)		_hx_tmp->set_selectionStartIndex(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value)) ));
            	}



::hx::ObjectPtr< SelectionStartIndexBehaviour_obj > SelectionStartIndexBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectionStartIndexBehaviour_obj > __this = new SelectionStartIndexBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectionStartIndexBehaviour_obj > SelectionStartIndexBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectionStartIndexBehaviour_obj *__this = (SelectionStartIndexBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectionStartIndexBehaviour_obj), true, "haxe.ui.components._TextField.SelectionStartIndexBehaviour"));
	*(void **)__this = SelectionStartIndexBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectionStartIndexBehaviour_obj::SelectionStartIndexBehaviour_obj()
{
}

::hx::Val SelectionStartIndexBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectionStartIndexBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectionStartIndexBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectionStartIndexBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class SelectionStartIndexBehaviour_obj::__mClass;

void SelectionStartIndexBehaviour_obj::__register()
{
	SelectionStartIndexBehaviour_obj _hx_dummy;
	SelectionStartIndexBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.SelectionStartIndexBehaviour",3b,04,ff,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectionStartIndexBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectionStartIndexBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectionStartIndexBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectionStartIndexBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField
