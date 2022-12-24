#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
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
#ifndef INCLUDED_haxe_ui_components__TextField_PasswordBehaviour
#include <haxe/ui/components/_TextField/PasswordBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_RestrictCharsBehaviour
#include <haxe/ui/components/_TextField/RestrictCharsBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_2c750dafee1aa8d4_305_validateText,"haxe.ui.components._TextField.TextFieldHelper","validateText",0x5bfa66f0,"haxe.ui.components._TextField.TextFieldHelper.validateText","haxe/ui/components/TextField.hx",305,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_2c750dafee1aa8d4_348_validateHtmlText,"haxe.ui.components._TextField.TextFieldHelper","validateHtmlText",0xe866977b,"haxe.ui.components._TextField.TextFieldHelper.validateHtmlText","haxe/ui/components/TextField.hx",348,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void TextFieldHelper_obj::__construct() { }

Dynamic TextFieldHelper_obj::__CreateEmpty() { return new TextFieldHelper_obj; }

void *TextFieldHelper_obj::_hx_vtable = 0;

Dynamic TextFieldHelper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextFieldHelper_obj > _hx_result = new TextFieldHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextFieldHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ca7dad1;
}

void TextFieldHelper_obj::validateText( ::haxe::ui::components::TextField textfield,::String text){
            	HX_STACKFRAME(&_hx_pos_2c750dafee1aa8d4_305_validateText)
HXLINE( 306)		if (::hx::IsNull( text )) {
HXLINE( 307)			text = HX_("",00,00,00,00);
            		}
HXLINE( 310)		bool placeholderVisible = (text.length == 0);
HXLINE( 311)		 ::haxe::ui::util::VariantType password = ::hx::TCast<  ::haxe::ui::components::_TextField::PasswordBehaviour >::cast(textfield->behaviours->find(HX_("password",1b,23,d0,48),null()))->originalValue;
HXLINE( 312)		 ::EReg regexp = ::hx::TCast<  ::haxe::ui::components::_TextField::RestrictCharsBehaviour >::cast(textfield->behaviours->find(HX_("restrictChars",01,08,2c,ba),null()))->regexp;
HXLINE( 314)		bool _hx_tmp;
HXDLIN( 314)		bool _hx_tmp1;
HXDLIN( 314)		if ((textfield->get_maxChars() > 0)) {
HXLINE( 314)			int text1 = text.length;
HXDLIN( 314)			_hx_tmp1 = (text1 > textfield->get_maxChars());
            		}
            		else {
HXLINE( 314)			_hx_tmp1 = false;
            		}
HXDLIN( 314)		if (_hx_tmp1) {
HXLINE( 314)			_hx_tmp = (placeholderVisible == false);
            		}
            		else {
HXLINE( 314)			_hx_tmp = false;
            		}
HXDLIN( 314)		if (_hx_tmp) {
HXLINE( 315)			text = text.substr(0,textfield->get_maxChars());
            		}
HXLINE( 318)		if (::hx::IsNotNull( regexp )) {
HXLINE( 319)			text = regexp->replace(text,HX_("",00,00,00,00));
            		}
HXLINE( 322)		if (::hx::IsNotNull( textfield->get_placeholder() )) {
HXLINE( 323)			if ((textfield->get_focus() == false)) {
HXLINE( 324)				if ((text.length == 0)) {
HXLINE( 325)					text = textfield->get_placeholder();
HXLINE( 326)					textfield->set_password(false);
HXLINE( 327)					textfield->addClass(HX_(":empty",13,28,8d,a0),null(),null());
            				}
            				else {
HXLINE( 328)					if ((text != textfield->get_placeholder())) {
HXLINE( 329)						textfield->set_password(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(password));
HXLINE( 330)						textfield->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
            					}
            				}
            			}
            			else {
HXLINE( 333)				textfield->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
HXLINE( 334)				textfield->set_password(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(password));
            			}
            		}
            		else {
HXLINE( 337)			textfield->set_password(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(password));
HXLINE( 339)			if ((placeholderVisible == true)) {
HXLINE( 340)				textfield->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            		}
HXLINE( 344)		textfield->getTextInput()->set_text((HX_("",00,00,00,00) + text));
HXLINE( 345)		{
HXLINE( 345)			bool _hx_tmp2;
HXDLIN( 345)			if (::hx::IsNotNull( textfield->_layout )) {
HXLINE( 345)				_hx_tmp2 = (textfield->_layoutLocked == true);
            			}
            			else {
HXLINE( 345)				_hx_tmp2 = true;
            			}
HXDLIN( 345)			if (!(_hx_tmp2)) {
HXLINE( 345)				textfield->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextFieldHelper_obj,validateText,(void))

void TextFieldHelper_obj::validateHtmlText( ::haxe::ui::components::TextField textfield,::String htmlText){
            	HX_STACKFRAME(&_hx_pos_2c750dafee1aa8d4_348_validateHtmlText)
HXLINE( 349)		if (::hx::IsNull( htmlText )) {
HXLINE( 350)			htmlText = HX_("",00,00,00,00);
            		}
HXLINE( 353)		bool placeholderVisible = (htmlText.length == 0);
HXLINE( 354)		 ::haxe::ui::util::VariantType password = ::hx::TCast<  ::haxe::ui::components::_TextField::PasswordBehaviour >::cast(textfield->behaviours->find(HX_("password",1b,23,d0,48),null()))->originalValue;
HXLINE( 355)		 ::EReg regexp = ::hx::TCast<  ::haxe::ui::components::_TextField::RestrictCharsBehaviour >::cast(textfield->behaviours->find(HX_("restrictChars",01,08,2c,ba),null()))->regexp;
HXLINE( 357)		bool _hx_tmp;
HXDLIN( 357)		bool _hx_tmp1;
HXDLIN( 357)		if ((textfield->get_maxChars() > 0)) {
HXLINE( 357)			int htmlText1 = htmlText.length;
HXDLIN( 357)			_hx_tmp1 = (htmlText1 > textfield->get_maxChars());
            		}
            		else {
HXLINE( 357)			_hx_tmp1 = false;
            		}
HXDLIN( 357)		if (_hx_tmp1) {
HXLINE( 357)			_hx_tmp = (placeholderVisible == false);
            		}
            		else {
HXLINE( 357)			_hx_tmp = false;
            		}
HXDLIN( 357)		if (_hx_tmp) {
HXLINE( 358)			htmlText = htmlText.substr(0,textfield->get_maxChars());
            		}
HXLINE( 361)		if (::hx::IsNotNull( regexp )) {
HXLINE( 362)			htmlText = regexp->replace(htmlText,HX_("",00,00,00,00));
            		}
HXLINE( 365)		if (::hx::IsNotNull( textfield->get_placeholder() )) {
HXLINE( 366)			if ((textfield->get_focus() == false)) {
HXLINE( 367)				if ((htmlText.length == 0)) {
HXLINE( 368)					htmlText = textfield->get_placeholder();
HXLINE( 369)					textfield->set_password(false);
HXLINE( 370)					textfield->addClass(HX_(":empty",13,28,8d,a0),null(),null());
            				}
            				else {
HXLINE( 371)					if ((htmlText != textfield->get_placeholder())) {
HXLINE( 372)						textfield->set_password(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(password));
HXLINE( 373)						textfield->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
            					}
            				}
            			}
            			else {
HXLINE( 376)				textfield->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
HXLINE( 377)				textfield->set_password(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(password));
            			}
            		}
            		else {
HXLINE( 380)			textfield->set_password(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(password));
HXLINE( 382)			if ((placeholderVisible == true)) {
HXLINE( 383)				textfield->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            		}
HXLINE( 387)		textfield->getTextInput()->set_htmlText((HX_("",00,00,00,00) + htmlText));
HXLINE( 388)		{
HXLINE( 388)			bool _hx_tmp2;
HXDLIN( 388)			if (::hx::IsNotNull( textfield->_layout )) {
HXLINE( 388)				_hx_tmp2 = (textfield->_layoutLocked == true);
            			}
            			else {
HXLINE( 388)				_hx_tmp2 = true;
            			}
HXDLIN( 388)			if (!(_hx_tmp2)) {
HXLINE( 388)				textfield->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextFieldHelper_obj,validateHtmlText,(void))


TextFieldHelper_obj::TextFieldHelper_obj()
{
}

bool TextFieldHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateText") ) { outValue = validateText_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"validateHtmlText") ) { outValue = validateHtmlText_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextFieldHelper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextFieldHelper_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TextFieldHelper_obj::__mClass;

static ::String TextFieldHelper_obj_sStaticFields[] = {
	HX_("validateText",63,cc,f9,a0),
	HX_("validateHtmlText",6e,32,91,c8),
	::String(null())
};

void TextFieldHelper_obj::__register()
{
	TextFieldHelper_obj _hx_dummy;
	TextFieldHelper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.TextFieldHelper",01,86,87,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFieldHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextFieldHelper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextFieldHelper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFieldHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFieldHelper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField
