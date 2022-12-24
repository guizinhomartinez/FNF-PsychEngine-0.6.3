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
#ifndef INCLUDED_haxe_ui_components__TextField_TextBehaviour
#include <haxe/ui/components/_TextField/TextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fbe547e797c77141_221_new,"haxe.ui.components._TextField.TextBehaviour","new",0x4854ee28,"haxe.ui.components._TextField.TextBehaviour.new","haxe/ui/components/TextField.hx",221,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_fbe547e797c77141_222_validateData,"haxe.ui.components._TextField.TextBehaviour","validateData",0x70043f18,"haxe.ui.components._TextField.TextBehaviour.validateData","haxe/ui/components/TextField.hx",222,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void TextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_fbe547e797c77141_221_new)
HXDLIN( 221)		super::__construct(component);
            	}

Dynamic TextBehaviour_obj::__CreateEmpty() { return new TextBehaviour_obj; }

void *TextBehaviour_obj::_hx_vtable = 0;

Dynamic TextBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextBehaviour_obj > _hx_result = new TextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3afcfcce) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3afcfcce;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void TextBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_fbe547e797c77141_222_validateData)
HXLINE( 223)		 ::haxe::ui::components::TextField textfield = ::hx::TCast<  ::haxe::ui::components::TextField >::cast(this->_component);
HXLINE( 224)		::haxe::ui::components::_TextField::TextFieldHelper_obj::validateText(textfield,::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
HXLINE( 226)		bool _hx_tmp;
HXDLIN( 226)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 226)			 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN( 226)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::neq(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("",00,00,00,00)));
            		}
            		else {
HXLINE( 226)			_hx_tmp = false;
            		}
HXDLIN( 226)		if (_hx_tmp) {
HXLINE( 227)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(textfield->getTextInput()->get_text());
            		}
            	}



::hx::ObjectPtr< TextBehaviour_obj > TextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TextBehaviour_obj > __this = new TextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TextBehaviour_obj > TextBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextBehaviour_obj *__this = (TextBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextBehaviour_obj), true, "haxe.ui.components._TextField.TextBehaviour"));
	*(void **)__this = TextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextBehaviour_obj::TextBehaviour_obj()
{
}

::hx::Val TextBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class TextBehaviour_obj::__mClass;

void TextBehaviour_obj::__register()
{
	TextBehaviour_obj _hx_dummy;
	TextBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.TextBehaviour",36,fa,f0,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField
