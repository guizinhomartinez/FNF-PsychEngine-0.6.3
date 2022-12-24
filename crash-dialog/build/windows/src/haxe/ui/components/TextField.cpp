#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
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
#ifndef INCLUDED_haxe_ui_components__TextField_Builder
#include <haxe/ui/components/_TextField/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_CaretIndexBehaviour
#include <haxe/ui/components/_TextField/CaretIndexBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_Events
#include <haxe/ui/components/_TextField/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_HtmlTextBehaviour
#include <haxe/ui/components/_TextField/HtmlTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_IconBehaviour
#include <haxe/ui/components/_TextField/IconBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_MaxCharsBehaviour
#include <haxe/ui/components/_TextField/MaxCharsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_PasswordBehaviour
#include <haxe/ui/components/_TextField/PasswordBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_PlaceholderBehaviour
#include <haxe/ui/components/_TextField/PlaceholderBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_RestrictCharsBehaviour
#include <haxe/ui/components/_TextField/RestrictCharsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_SelectionEndIndexBehaviour
#include <haxe/ui/components/_TextField/SelectionEndIndexBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_SelectionStartIndexBehaviour
#include <haxe/ui/components/_TextField/SelectionStartIndexBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_TextBehaviour
#include <haxe/ui/components/_TextField/TextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_TextFieldLayout
#include <haxe/ui/components/_TextField/TextFieldLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_22_new,"haxe.ui.components.TextField","new",0xbf7a83d9,"haxe.ui.components.TextField.new","haxe/ui/components/TextField.hx",22,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_441_registerBehaviours,"haxe.ui.components.TextField","registerBehaviours",0x4285c480,"haxe.ui.components.TextField.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_475_get_password,"haxe.ui.components.TextField","get_password",0x1f076c8b,"haxe.ui.components.TextField.get_password","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_520_set_password,"haxe.ui.components.TextField","set_password",0x34008fff,"haxe.ui.components.TextField.set_password","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_475_get_maxChars,"haxe.ui.components.TextField","get_maxChars",0xc6083909,"haxe.ui.components.TextField.get_maxChars","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_520_set_maxChars,"haxe.ui.components.TextField","set_maxChars",0xdb015c7d,"haxe.ui.components.TextField.set_maxChars","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_475_get_restrictChars,"haxe.ui.components.TextField","get_restrictChars",0xd1e48891,"haxe.ui.components.TextField.get_restrictChars","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_506_set_restrictChars,"haxe.ui.components.TextField","set_restrictChars",0xf552609d,"haxe.ui.components.TextField.set_restrictChars","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_475_get_placeholder,"haxe.ui.components.TextField","get_placeholder",0xebb7b003,"haxe.ui.components.TextField.get_placeholder","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_506_set_placeholder,"haxe.ui.components.TextField","set_placeholder",0xe7832d0f,"haxe.ui.components.TextField.set_placeholder","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_475_get_htmlText,"haxe.ui.components.TextField","get_htmlText",0xe66f6928,"haxe.ui.components.TextField.get_htmlText","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_506_set_htmlText,"haxe.ui.components.TextField","set_htmlText",0xfb688c9c,"haxe.ui.components.TextField.set_htmlText","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_475_get_icon,"haxe.ui.components.TextField","get_icon",0x9f4cb8e9,"haxe.ui.components.TextField.get_icon","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_506_set_icon,"haxe.ui.components.TextField","set_icon",0x4daa125d,"haxe.ui.components.TextField.set_icon","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_475_get_caretIndex,"haxe.ui.components.TextField","get_caretIndex",0x270c3bff,"haxe.ui.components.TextField.get_caretIndex","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_520_set_caretIndex,"haxe.ui.components.TextField","set_caretIndex",0x472c2473,"haxe.ui.components.TextField.set_caretIndex","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_475_get_selectionStartIndex,"haxe.ui.components.TextField","get_selectionStartIndex",0x4e90934c,"haxe.ui.components.TextField.get_selectionStartIndex","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_520_set_selectionStartIndex,"haxe.ui.components.TextField","set_selectionStartIndex",0x50f1fc58,"haxe.ui.components.TextField.set_selectionStartIndex","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_475_get_selectionEndIndex,"haxe.ui.components.TextField","get_selectionEndIndex",0xd2ee1633,"haxe.ui.components.TextField.get_selectionEndIndex","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_520_set_selectionEndIndex,"haxe.ui.components.TextField","set_selectionEndIndex",0x26f6e43f,"haxe.ui.components.TextField.set_selectionEndIndex","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_602_get_value,"haxe.ui.components.TextField","get_value",0x3eb5f001,"haxe.ui.components.TextField.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_605_set_value,"haxe.ui.components.TextField","set_value",0x2206dc0d,"haxe.ui.components.TextField.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_af65822e5c5293c9_565_cloneComponent,"haxe.ui.components.TextField","cloneComponent",0xfa11e6c7,"haxe.ui.components.TextField.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_423_self,"haxe.ui.components.TextField","self",0xcf06e1f3,"haxe.ui.components.TextField.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_138_registerComposite,"haxe.ui.components.TextField","registerComposite",0x0fc85a5d,"haxe.ui.components.TextField.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void TextField_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_22_new)
HXDLIN(  22)		super::__construct();
            	}

Dynamic TextField_obj::__CreateEmpty() { return new TextField_obj; }

void *TextField_obj::_hx_vtable = 0;

Dynamic TextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextField_obj > _hx_result = new TextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x19a59f71) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x19a59f71;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x395782b4) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x395782b4;
				} else {
					return inClassId==(int)0x4ba87886;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void TextField_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("password",1b,23,d0,48),::hx::ClassOf< ::haxe::ui::components::_TextField::PasswordBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("maxChars",99,ef,d0,ef),::hx::ClassOf< ::haxe::ui::components::_TextField::MaxCharsBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXLINE( 539)		this->behaviours->_hx_register(HX_("restrictChars",01,08,2c,ba),::hx::ClassOf< ::haxe::ui::components::_TextField::RestrictCharsBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("placeholder",73,73,f3,ba),::hx::ClassOf< ::haxe::ui::components::_TextField::PlaceholderBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::components::_TextField::TextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("htmlText",b8,1f,38,10),::hx::ClassOf< ::haxe::ui::components::_TextField::HtmlTextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("icon",79,e7,b2,45),::hx::ClassOf< ::haxe::ui::components::_TextField::IconBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("caretIndex",8f,b6,5b,dd),::hx::ClassOf< ::haxe::ui::components::_TextField::CaretIndexBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selectionStartIndex",bc,46,65,7d),::hx::ClassOf< ::haxe::ui::components::_TextField::SelectionStartIndexBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selectionEndIndex",a3,0d,42,4b),::hx::ClassOf< ::haxe::ui::components::_TextField::SelectionEndIndexBehaviour >(),null());
            	}


bool TextField_obj::get_password(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_475_get_password)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("password",1b,23,d0,48)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_password,return )

bool TextField_obj::set_password(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_520_set_password)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("password",1b,23,d0,48),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("password",1b,23,d0,48)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_password,return )

int TextField_obj::get_maxChars(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_475_get_maxChars)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("maxChars",99,ef,d0,ef)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars(int value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_520_set_maxChars)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("maxChars",99,ef,d0,ef),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("maxChars",99,ef,d0,ef)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

::String TextField_obj::get_restrictChars(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_475_get_restrictChars)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("restrictChars",01,08,2c,ba)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_restrictChars,return )

::String TextField_obj::set_restrictChars(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_506_set_restrictChars)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("restrictChars",01,08,2c,ba),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("restrictChars",01,08,2c,ba),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("restrictChars",01,08,2c,ba)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_restrictChars,return )

::String TextField_obj::get_placeholder(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_475_get_placeholder)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("placeholder",73,73,f3,ba)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_placeholder,return )

::String TextField_obj::set_placeholder(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_506_set_placeholder)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("placeholder",73,73,f3,ba),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("placeholder",73,73,f3,ba),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("placeholder",73,73,f3,ba)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_placeholder,return )

::String TextField_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_475_get_htmlText)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("htmlText",b8,1f,38,10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_506_set_htmlText)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("htmlText",b8,1f,38,10),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("htmlText",b8,1f,38,10),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("htmlText",b8,1f,38,10)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

::String TextField_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_475_get_icon)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("icon",79,e7,b2,45)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_icon,return )

::String TextField_obj::set_icon(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_506_set_icon)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("icon",79,e7,b2,45),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("icon",79,e7,b2,45),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("icon",79,e7,b2,45)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_icon,return )

int TextField_obj::get_caretIndex(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_475_get_caretIndex)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("caretIndex",8f,b6,5b,dd)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretIndex,return )

int TextField_obj::set_caretIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_520_set_caretIndex)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("caretIndex",8f,b6,5b,dd),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("caretIndex",8f,b6,5b,dd)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_caretIndex,return )

int TextField_obj::get_selectionStartIndex(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_475_get_selectionStartIndex)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("selectionStartIndex",bc,46,65,7d)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionStartIndex,return )

int TextField_obj::set_selectionStartIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_520_set_selectionStartIndex)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectionStartIndex",bc,46,65,7d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectionStartIndex",bc,46,65,7d)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectionStartIndex,return )

int TextField_obj::get_selectionEndIndex(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_475_get_selectionEndIndex)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("selectionEndIndex",a3,0d,42,4b)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionEndIndex,return )

int TextField_obj::set_selectionEndIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_520_set_selectionEndIndex)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectionEndIndex",a3,0d,42,4b),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectionEndIndex",a3,0d,42,4b)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectionEndIndex,return )

 ::Dynamic TextField_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_602_get_value)
HXDLIN( 602)		return this->get_text();
            	}


 ::Dynamic TextField_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_605_set_value)
HXLINE( 606)		this->set_text(( (::String)(value) ));
HXLINE( 607)		return value;
            	}


 ::haxe::ui::core::ComponentContainer TextField_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_af65822e5c5293c9_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::TextField c = ( ( ::haxe::ui::components::TextField)(this->super::cloneComponent()) );
HXLINE( 382)		c->set_password(this->get_password());
HXDLIN( 382)		c->set_maxChars(this->get_maxChars());
HXLINE( 380)		if (::hx::IsNotNull( this->get_restrictChars() )) {
HXLINE( 380)			c->set_restrictChars(this->get_restrictChars());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_placeholder() )) {
HXLINE( 380)			c->set_placeholder(this->get_placeholder());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_htmlText() )) {
HXLINE( 380)			c->set_htmlText(this->get_htmlText());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_icon() )) {
HXLINE( 380)			c->set_icon(this->get_icon());
            		}
HXLINE( 382)		c->set_caretIndex(this->get_caretIndex());
HXDLIN( 382)		c->set_selectionStartIndex(this->get_selectionStartIndex());
HXDLIN( 382)		c->set_selectionEndIndex(this->get_selectionEndIndex());
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				::Array< ::Dynamic> _g1;
HXDLIN( 388)				if (::hx::IsNull( this->_children )) {
HXLINE( 388)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 388)					_g1 = this->_children;
            				}
HXDLIN( 388)				while((_g < _g1->length)){
HXLINE( 388)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 393)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 395)		return c;
            	}


 ::haxe::ui::core::ComponentContainer TextField_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::TextField_obj::__alloc( HX_CTX );
            	}


void TextField_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::_TextField::Events >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_TextField::Builder >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_TextField::TextFieldLayout >();
            	}



::hx::ObjectPtr< TextField_obj > TextField_obj::__new() {
	::hx::ObjectPtr< TextField_obj > __this = new TextField_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextField_obj > TextField_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextField_obj *__this = (TextField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextField_obj), true, "haxe.ui.components.TextField"));
	*(void **)__this = TextField_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextField_obj::TextField_obj()
{
}

::hx::Val TextField_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_icon() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_password() ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxChars() ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return ::hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return ::hx::Val( set_icon_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_caretIndex() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"placeholder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_placeholder() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_password") ) { return ::hx::Val( get_password_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_password") ) { return ::hx::Val( set_password_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return ::hx::Val( get_maxChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return ::hx::Val( set_maxChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_restrictChars() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_caretIndex") ) { return ::hx::Val( get_caretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_caretIndex") ) { return ::hx::Val( set_caretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_placeholder") ) { return ::hx::Val( get_placeholder_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_placeholder") ) { return ::hx::Val( set_placeholder_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_restrictChars") ) { return ::hx::Val( get_restrictChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrictChars") ) { return ::hx::Val( set_restrictChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionEndIndex() ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionStartIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionStartIndex() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return ::hx::Val( get_selectionEndIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectionEndIndex") ) { return ::hx::Val( set_selectionEndIndex_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_selectionStartIndex") ) { return ::hx::Val( get_selectionStartIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectionStartIndex") ) { return ::hx::Val( set_selectionStartIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextField_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_icon(inValue.Cast< ::String >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_password(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxChars(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretIndex(inValue.Cast< int >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"placeholder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_placeholder(inValue.Cast< ::String >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrictChars(inValue.Cast< ::String >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectionEndIndex(inValue.Cast< int >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionStartIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectionStartIndex(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("password",1b,23,d0,48));
	outFields->push(HX_("maxChars",99,ef,d0,ef));
	outFields->push(HX_("restrictChars",01,08,2c,ba));
	outFields->push(HX_("placeholder",73,73,f3,ba));
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("icon",79,e7,b2,45));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("selectionStartIndex",bc,46,65,7d));
	outFields->push(HX_("selectionEndIndex",a3,0d,42,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextField_obj_sStaticStorageInfo = 0;
#endif

static ::String TextField_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_password",24,d7,e9,fd),
	HX_("set_password",98,fa,e2,12),
	HX_("get_maxChars",a2,a3,ea,a4),
	HX_("set_maxChars",16,c7,e3,b9),
	HX_("get_restrictChars",58,13,9c,c0),
	HX_("set_restrictChars",64,eb,09,e4),
	HX_("get_placeholder",0a,2b,d5,7b),
	HX_("set_placeholder",16,a8,a0,77),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("get_icon",02,a3,6d,c5),
	HX_("set_icon",76,fc,ca,73),
	HX_("get_caretIndex",d8,3e,51,53),
	HX_("set_caretIndex",4c,27,71,73),
	HX_("get_selectionStartIndex",53,ed,ba,85),
	HX_("set_selectionStartIndex",5f,56,1c,88),
	HX_("get_selectionEndIndex",7a,10,f0,c9),
	HX_("set_selectionEndIndex",86,de,f8,1d),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class TextField_obj::__mClass;

void TextField_obj::__register()
{
	TextField_obj _hx_dummy;
	TextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.TextField",67,a3,6b,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextField_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
