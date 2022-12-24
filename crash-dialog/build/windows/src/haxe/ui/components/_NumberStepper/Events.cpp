#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_NumberStepper
#include <haxe/ui/components/NumberStepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_Events
#include <haxe/ui/components/_NumberStepper/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_ValueHelper
#include <haxe/ui/components/_NumberStepper/ValueHelper.h>
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
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_FocusEvent
#include <haxe/ui/events/FocusEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c55100f525a41aa9_187_new,"haxe.ui.components._NumberStepper.Events","new",0xc468c24a,"haxe.ui.components._NumberStepper.Events.new","haxe/ui/components/NumberStepper.hx",187,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_195_register,"haxe.ui.components._NumberStepper.Events","register",0x55838439,"haxe.ui.components._NumberStepper.Events.register","haxe/ui/components/NumberStepper.hx",195,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_228_unregister,"haxe.ui.components._NumberStepper.Events","unregister",0xc25b0d12,"haxe.ui.components._NumberStepper.Events.unregister","haxe/ui/components/NumberStepper.hx",228,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_247_onValueFieldChange,"haxe.ui.components._NumberStepper.Events","onValueFieldChange",0x89b12e6e,"haxe.ui.components._NumberStepper.Events.onValueFieldChange","haxe/ui/components/NumberStepper.hx",247,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_262_onAutoCorrectTimer,"haxe.ui.components._NumberStepper.Events","onAutoCorrectTimer",0x092c8d9f,"haxe.ui.components._NumberStepper.Events.onAutoCorrectTimer","haxe/ui/components/NumberStepper.hx",262,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_275_onDeinc,"haxe.ui.components._NumberStepper.Events","onDeinc",0x19076948,"haxe.ui.components._NumberStepper.Events.onDeinc","haxe/ui/components/NumberStepper.hx",275,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_280_onInc,"haxe.ui.components._NumberStepper.Events","onInc",0xdb0c6169,"haxe.ui.components._NumberStepper.Events.onInc","haxe/ui/components/NumberStepper.hx",280,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_285_isInScroller,"haxe.ui.components._NumberStepper.Events","isInScroller",0xb2c2bc1f,"haxe.ui.components._NumberStepper.Events.isInScroller","haxe/ui/components/NumberStepper.hx",285,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_299_onMouseWheel,"haxe.ui.components._NumberStepper.Events","onMouseWheel",0xb8214b0b,"haxe.ui.components._NumberStepper.Events.onMouseWheel","haxe/ui/components/NumberStepper.hx",299,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_313_onClick,"haxe.ui.components._NumberStepper.Events","onClick",0x8a414993,"haxe.ui.components._NumberStepper.Events.onClick","haxe/ui/components/NumberStepper.hx",313,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_316_onFocusIn,"haxe.ui.components._NumberStepper.Events","onFocusIn",0xdbac3be8,"haxe.ui.components._NumberStepper.Events.onFocusIn","haxe/ui/components/NumberStepper.hx",316,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_321_onFocusOut,"haxe.ui.components._NumberStepper.Events","onFocusOut",0x5b0cc32b,"haxe.ui.components._NumberStepper.Events.onFocusOut","haxe/ui/components/NumberStepper.hx",321,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_c55100f525a41aa9_327_onActionStart,"haxe.ui.components._NumberStepper.Events","onActionStart",0x0cb4cc57,"haxe.ui.components._NumberStepper.Events.onActionStart","haxe/ui/components/NumberStepper.hx",327,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void Events_obj::__construct( ::haxe::ui::components::NumberStepper stepper){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_187_new)
HXLINE( 245)		this->_autoCorrectTimer = null();
HXLINE( 191)		super::__construct(stepper);
HXLINE( 192)		this->_stepper = stepper;
            	}

Dynamic Events_obj::__CreateEmpty() { return new Events_obj; }

void *Events_obj::_hx_vtable = 0;

Dynamic Events_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Events_obj > _hx_result = new Events_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Events_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x39fa6cf2;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_195_register)
HXLINE( 196)		if (!(this->_stepper->hasEvent(HX_("click",48,7c,5e,48),this->onClick_dyn()))) {
HXLINE( 197)			this->_stepper->registerEvent(HX_("click",48,7c,5e,48),this->onClick_dyn(),null());
            		}
HXLINE( 199)		if (!(this->_stepper->hasEvent(HX_("focusin",bd,61,83,41),this->onFocusIn_dyn()))) {
HXLINE( 200)			this->_stepper->registerEvent(HX_("focusin",bd,61,83,41),this->onFocusIn_dyn(),null());
            		}
HXLINE( 202)		if (!(this->_stepper->hasEvent(HX_("focusout",b6,b7,76,11),this->onFocusOut_dyn()))) {
HXLINE( 203)			this->_stepper->registerEvent(HX_("focusout",b6,b7,76,11),this->onFocusOut_dyn(),null());
            		}
HXLINE( 205)		if (!(this->_stepper->hasEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn()))) {
HXLINE( 206)			this->_stepper->registerEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn(),null());
            		}
HXLINE( 209)		 ::haxe::ui::components::TextField value = this->_stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 210)		if (!(value->hasEvent(HX_("change",70,91,72,b7),this->onValueFieldChange_dyn()))) {
HXLINE( 211)			value->registerEvent(HX_("change",70,91,72,b7),this->onValueFieldChange_dyn(),null());
            		}
HXLINE( 214)		 ::haxe::ui::components::Button deinc = this->_stepper->findComponent(HX_("deinc",fd,9b,24,d7),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 215)		if (!(deinc->hasEvent(HX_("click",48,7c,5e,48),this->onDeinc_dyn()))) {
HXLINE( 216)			deinc->registerEvent(HX_("click",48,7c,5e,48),this->onDeinc_dyn(),null());
            		}
HXLINE( 219)		 ::haxe::ui::components::Button inc = this->_stepper->findComponent(HX_("inc",de,0c,50,00),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 220)		if (!(inc->hasEvent(HX_("click",48,7c,5e,48),this->onInc_dyn()))) {
HXLINE( 221)			inc->registerEvent(HX_("click",48,7c,5e,48),this->onInc_dyn(),null());
            		}
HXLINE( 223)		if (!(this->hasEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn()))) {
HXLINE( 224)			this->registerEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn(),null());
            		}
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_228_unregister)
HXLINE( 229)		this->_stepper->unregisterEvent(HX_("click",48,7c,5e,48),this->onClick_dyn());
HXLINE( 230)		this->_stepper->unregisterEvent(HX_("focusin",bd,61,83,41),this->onFocusIn_dyn());
HXLINE( 231)		this->_stepper->unregisterEvent(HX_("focusout",b6,b7,76,11),this->onFocusOut_dyn());
HXLINE( 232)		this->_stepper->unregisterEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn());
HXLINE( 234)		 ::haxe::ui::components::TextField value = this->_stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 235)		value->unregisterEvent(HX_("change",70,91,72,b7),this->onValueFieldChange_dyn());
HXLINE( 237)		 ::haxe::ui::components::Button deinc = this->_stepper->findComponent(HX_("deinc",fd,9b,24,d7),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 238)		deinc->unregisterEvent(HX_("click",48,7c,5e,48),this->onDeinc_dyn());
HXLINE( 240)		 ::haxe::ui::components::Button inc = this->_stepper->findComponent(HX_("inc",de,0c,50,00),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 241)		inc->unregisterEvent(HX_("click",48,7c,5e,48),this->onInc_dyn());
HXLINE( 242)		this->unregisterEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn());
            	}


void Events_obj::onValueFieldChange( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_c55100f525a41aa9_247_onValueFieldChange)
HXDLIN( 247)		if ((this->_stepper->get_autoCorrect() == true)) {
HXLINE( 248)			if (::hx::IsNotNull( this->_autoCorrectTimer )) {
HXLINE( 249)				this->_autoCorrectTimer->stop();
HXLINE( 250)				this->_autoCorrectTimer = null();
            			}
HXLINE( 253)			this->_autoCorrectTimer =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,350,this->onAutoCorrectTimer_dyn());
            		}
            		else {
HXLINE( 255)			 ::Dynamic newValue = ::haxe::ui::components::_NumberStepper::ValueHelper_obj::validateValue(this->_stepper);
HXLINE( 256)			if (::hx::IsNotNull( newValue )) {
HXLINE( 257)				this->_stepper->set_pos(newValue);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onValueFieldChange,(void))

void Events_obj::onAutoCorrectTimer(){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_262_onAutoCorrectTimer)
HXLINE( 263)		this->_autoCorrectTimer->stop();
HXLINE( 264)		this->_autoCorrectTimer = null();
HXLINE( 266)		 ::haxe::ui::components::TextField value = this->_stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 267)		Float parsedValue = ::Std_obj::parseFloat(value->get_text());
HXLINE( 268)		 ::haxe::ui::components::NumberStepper _hx_tmp = this->_stepper;
HXDLIN( 268)		 ::Dynamic v = parsedValue;
HXDLIN( 268)		 ::Dynamic min = this->_stepper->get_min();
HXDLIN( 268)		 ::Dynamic max = this->_stepper->get_max();
HXDLIN( 268)		Float _hx_tmp1;
HXDLIN( 268)		bool _hx_tmp2;
HXDLIN( 268)		if (::hx::IsNotNull( v )) {
HXLINE( 268)			_hx_tmp2 = ::Math_obj::isNaN(( (Float)(v) ));
            		}
            		else {
HXLINE( 268)			_hx_tmp2 = true;
            		}
HXDLIN( 268)		if (_hx_tmp2) {
HXLINE( 268)			_hx_tmp1 = ( (Float)(min) );
            		}
            		else {
HXLINE( 268)			bool _hx_tmp;
HXDLIN( 268)			if (::hx::IsNotNull( min )) {
HXLINE( 268)				_hx_tmp = ::hx::IsLess( v,min );
            			}
            			else {
HXLINE( 268)				_hx_tmp = false;
            			}
HXDLIN( 268)			if (_hx_tmp) {
HXLINE( 268)				v = min;
            			}
            			else {
HXLINE( 268)				bool _hx_tmp;
HXDLIN( 268)				if (::hx::IsNotNull( max )) {
HXLINE( 268)					_hx_tmp = ::hx::IsGreater( v,max );
            				}
            				else {
HXLINE( 268)					_hx_tmp = false;
            				}
HXDLIN( 268)				if (_hx_tmp) {
HXLINE( 268)					v = max;
            				}
            			}
HXDLIN( 268)			_hx_tmp1 = ( (Float)(v) );
            		}
HXDLIN( 268)		_hx_tmp->set_pos(_hx_tmp1);
HXLINE( 269)		 ::Dynamic stringValue = this->_stepper->get_pos();
HXDLIN( 269)		::String stringValue1 = ::haxe::ui::util::StringUtil_obj::padDecimal(( (Float)(stringValue) ),this->_stepper->get_precision());
HXLINE( 270)		stringValue1 = ::StringTools_obj::replace(stringValue1,HX_(",",2c,00,00,00),HX_(".",2e,00,00,00));
HXLINE( 271)		stringValue1 = ::StringTools_obj::replace(stringValue1,HX_(".",2e,00,00,00),this->_stepper->get_decimalSeparator());
HXLINE( 272)		value->set_text(stringValue1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,onAutoCorrectTimer,(void))

void Events_obj::onDeinc( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_275_onDeinc)
HXLINE( 276)		this->_stepper->set_focus(true);
HXLINE( 277)		::haxe::ui::components::_NumberStepper::ValueHelper_obj::deincrementValue(this->_stepper);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onDeinc,(void))

void Events_obj::onInc( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_280_onInc)
HXLINE( 281)		this->_stepper->set_focus(true);
HXLINE( 282)		::haxe::ui::components::_NumberStepper::ValueHelper_obj::incrementValue(this->_stepper);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onInc,(void))

bool Events_obj::isInScroller(){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_285_isInScroller)
HXLINE( 286)		 ::haxe::ui::core::Component p = this->_stepper->parentComponent;
HXLINE( 287)		while(::hx::IsNotNull( p )){
HXLINE( 288)			if (p->get_isScroller()) {
HXLINE( 289)				 ::haxe::ui::core::Component vscroll = p->findComponent(HX_("scrollview-vscroll",68,7b,46,57),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 290)				bool _hx_tmp;
HXDLIN( 290)				if (::hx::IsNotNull( vscroll )) {
HXLINE( 290)					_hx_tmp = (vscroll->get_hidden() == false);
            				}
            				else {
HXLINE( 290)					_hx_tmp = false;
            				}
HXDLIN( 290)				if (_hx_tmp) {
HXLINE( 291)					return true;
            				}
            			}
HXLINE( 294)			p = p->parentComponent;
            		}
HXLINE( 296)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,isInScroller,return )

void Events_obj::onMouseWheel( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_299_onMouseWheel)
HXLINE( 300)		bool _hx_tmp;
HXDLIN( 300)		if (this->isInScroller()) {
HXLINE( 300)			_hx_tmp = (this->_stepper->get_focus() == false);
            		}
            		else {
HXLINE( 300)			_hx_tmp = false;
            		}
HXDLIN( 300)		if (_hx_tmp) {
HXLINE( 301)			return;
            		}
HXLINE( 303)		event->cancel();
HXLINE( 304)		this->_stepper->set_focus(true);
HXLINE( 305)		if ((event->delta > 0)) {
HXLINE( 306)			::haxe::ui::components::_NumberStepper::ValueHelper_obj::incrementValue(this->_stepper);
            		}
            		else {
HXLINE( 308)			::haxe::ui::components::_NumberStepper::ValueHelper_obj::deincrementValue(this->_stepper);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseWheel,(void))

void Events_obj::onClick( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_313_onClick)
HXDLIN( 313)		this->_stepper->set_focus(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onClick,(void))

void Events_obj::onFocusIn( ::haxe::ui::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_316_onFocusIn)
HXLINE( 317)		 ::haxe::ui::components::TextField value = this->_stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 318)		value->getTextInput()->focus();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onFocusIn,(void))

void Events_obj::onFocusOut( ::haxe::ui::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_321_onFocusOut)
HXLINE( 322)		 ::haxe::ui::components::TextField value = this->_stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 323)		value->getTextInput()->blur();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onFocusOut,(void))

void Events_obj::onActionStart( ::haxe::ui::events::ActionEvent event){
            	HX_STACKFRAME(&_hx_pos_c55100f525a41aa9_327_onActionStart)
HXDLIN( 327)		::String _hx_switch_0 = event->action;
            		if (  (_hx_switch_0==HX_("actionDown",38,73,b4,4d)) ){
HXLINE( 329)			::haxe::ui::components::_NumberStepper::ValueHelper_obj::deincrementValue(this->_stepper);
HXLINE( 330)			event->repeater = true;
HXLINE( 328)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("actionUp",b1,5f,15,e1)) ){
HXLINE( 332)			::haxe::ui::components::_NumberStepper::ValueHelper_obj::incrementValue(this->_stepper);
HXLINE( 333)			event->repeater = true;
HXLINE( 331)			goto _hx_goto_13;
            		}
            		/* default */{
            		}
            		_hx_goto_13:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onActionStart,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::components::NumberStepper stepper) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(stepper);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::NumberStepper stepper) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._NumberStepper.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(stepper);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_stepper,"_stepper");
	HX_MARK_MEMBER_NAME(_autoCorrectTimer,"_autoCorrectTimer");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stepper,"_stepper");
	HX_VISIT_MEMBER_NAME(_autoCorrectTimer,"_autoCorrectTimer");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onInc") ) { return ::hx::Val( onInc_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onDeinc") ) { return ::hx::Val( onDeinc_dyn() ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stepper") ) { return ::hx::Val( _stepper ); }
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onFocusIn") ) { return ::hx::Val( onFocusIn_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusOut") ) { return ::hx::Val( onFocusOut_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isInScroller") ) { return ::hx::Val( isInScroller_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onActionStart") ) { return ::hx::Val( onActionStart_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_autoCorrectTimer") ) { return ::hx::Val( _autoCorrectTimer ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onValueFieldChange") ) { return ::hx::Val( onValueFieldChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAutoCorrectTimer") ) { return ::hx::Val( onAutoCorrectTimer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_stepper") ) { _stepper=inValue.Cast<  ::haxe::ui::components::NumberStepper >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_autoCorrectTimer") ) { _autoCorrectTimer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_stepper",92,5e,18,bb));
	outFields->push(HX_("_autoCorrectTimer",69,0b,6c,ee));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::NumberStepper */ ,(int)offsetof(Events_obj,_stepper),HX_("_stepper",92,5e,18,bb)},
	{::hx::fsObject /*  ::haxe::ui::util::Timer */ ,(int)offsetof(Events_obj,_autoCorrectTimer),HX_("_autoCorrectTimer",69,0b,6c,ee)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_stepper",92,5e,18,bb),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("_autoCorrectTimer",69,0b,6c,ee),
	HX_("onValueFieldChange",18,69,89,2e),
	HX_("onAutoCorrectTimer",49,c8,04,ae),
	HX_("onDeinc",5e,3a,62,6d),
	HX_("onInc",ff,a0,67,32),
	HX_("isInScroller",49,3b,6c,ba),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("onClick",a9,1a,9c,de),
	HX_("onFocusIn",7e,fe,2d,19),
	HX_("onFocusOut",d5,43,15,ef),
	HX_("onActionStart",ed,91,5a,b9),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.Events",58,95,7b,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Events_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Events_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Events_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Events_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper
