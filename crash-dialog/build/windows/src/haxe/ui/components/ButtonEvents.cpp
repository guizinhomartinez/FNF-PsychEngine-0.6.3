#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
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
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4199bc2c55ae9744_446_new,"haxe.ui.components.ButtonEvents","new",0x374de1c3,"haxe.ui.components.ButtonEvents.new","haxe/ui/components/Button.hx",446,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_460_register,"haxe.ui.components.ButtonEvents","register",0xb5dcae20,"haxe.ui.components.ButtonEvents.register","haxe/ui/components/Button.hx",460,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_488_unregister,"haxe.ui.components.ButtonEvents","unregister",0xcabfbeb9,"haxe.ui.components.ButtonEvents.unregister","haxe/ui/components/Button.hx",488,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_498_onMouseOver,"haxe.ui.components.ButtonEvents","onMouseOver",0x749ed95d,"haxe.ui.components.ButtonEvents.onMouseOver","haxe/ui/components/Button.hx",498,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_510_onMouseOut,"haxe.ui.components.ButtonEvents","onMouseOut",0xf630eca5,"haxe.ui.components.ButtonEvents.onMouseOut","haxe/ui/components/Button.hx",510,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_521_onMouseDown,"haxe.ui.components.ButtonEvents","onMouseDown",0x6d54406b,"haxe.ui.components.ButtonEvents.onMouseDown","haxe/ui/components/Button.hx",521,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_537_onMouseDown,"haxe.ui.components.ButtonEvents","onMouseDown",0x6d54406b,"haxe.ui.components.ButtonEvents.onMouseDown","haxe/ui/components/Button.hx",537,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_549_onMouseUp,"haxe.ui.components.ButtonEvents","onMouseUp",0x48476a24,"haxe.ui.components.ButtonEvents.onMouseUp","haxe/ui/components/Button.hx",549,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_573_onMove,"haxe.ui.components.ButtonEvents","onMove",0x4a419a4d,"haxe.ui.components.ButtonEvents.onMove","haxe/ui/components/Button.hx",573,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_583_onRepeatTimer,"haxe.ui.components.ButtonEvents","onRepeatTimer",0x52e3f6ae,"haxe.ui.components.ButtonEvents.onRepeatTimer","haxe/ui/components/Button.hx",583,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_589_onMouseClick,"haxe.ui.components.ButtonEvents","onMouseClick",0xa6f73c1f,"haxe.ui.components.ButtonEvents.onMouseClick","haxe/ui/components/Button.hx",589,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_600_dispatchChanged,"haxe.ui.components.ButtonEvents","dispatchChanged",0x0c56cf3d,"haxe.ui.components.ButtonEvents.dispatchChanged","haxe/ui/components/Button.hx",600,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_603_press,"haxe.ui.components.ButtonEvents","press",0x3f33c3a6,"haxe.ui.components.ButtonEvents.press","haxe/ui/components/Button.hx",603,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_613_release,"haxe.ui.components.ButtonEvents","release",0x656f84aa,"haxe.ui.components.ButtonEvents.release","haxe/ui/components/Button.hx",613,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_626_onActionStart,"haxe.ui.components.ButtonEvents","onActionStart",0xc7f75d10,"haxe.ui.components.ButtonEvents.onActionStart","haxe/ui/components/Button.hx",626,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4199bc2c55ae9744_634_onActionEnd,"haxe.ui.components.ButtonEvents","onActionEnd",0x9023c509,"haxe.ui.components.ButtonEvents.onActionEnd","haxe/ui/components/Button.hx",634,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonEvents_obj::__construct( ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_446_new)
HXLINE( 453)		this->recursiveStyling = true;
HXLINE( 451)		this->_repeatInterval = 0;
HXLINE( 450)		this->_repeater = false;
HXLINE( 448)		this->_down = false;
HXLINE( 456)		super::__construct(button);
HXLINE( 457)		this->_button = button;
            	}

Dynamic ButtonEvents_obj::__CreateEmpty() { return new ButtonEvents_obj; }

void *ButtonEvents_obj::_hx_vtable = 0;

Dynamic ButtonEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonEvents_obj > _hx_result = new ButtonEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0426c5bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0426c5bf;
	} else {
		return inClassId==(int)0x0548a7cc;
	}
}

void ButtonEvents_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_460_register)
HXLINE( 461)		if ((this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn()) == false)) {
HXLINE( 462)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn(),null());
            		}
HXLINE( 464)		if ((this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn()) == false)) {
HXLINE( 465)			this->registerEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn(),null());
            		}
HXLINE( 467)		if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn()) == false)) {
HXLINE( 468)			this->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
            		}
HXLINE( 470)		if ((this->hasEvent(HX_("move",11,e3,60,48),this->onMove_dyn()) == false)) {
HXLINE( 471)			this->registerEvent(HX_("move",11,e3,60,48),this->onMove_dyn(),null());
            		}
HXLINE( 473)		if ((this->hasEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn()) == false)) {
HXLINE( 474)			this->registerEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn(),null());
            		}
HXLINE( 476)		if ((this->hasEvent(HX_("actionend",e5,7d,aa,11),this->onActionEnd_dyn()) == false)) {
HXLINE( 477)			this->registerEvent(HX_("actionend",e5,7d,aa,11),this->onActionEnd_dyn(),null());
            		}
HXLINE( 480)		if ((this->_button->get_toggle() == true)) {
HXLINE( 484)			this->registerEvent(HX_("click",48,7c,5e,48),this->onMouseClick_dyn(),100);
            		}
            	}


void ButtonEvents_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_488_unregister)
HXLINE( 489)		this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn());
HXLINE( 490)		this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn());
HXLINE( 491)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
HXLINE( 492)		this->unregisterEvent(HX_("click",48,7c,5e,48),this->onMouseClick_dyn());
HXLINE( 493)		this->unregisterEvent(HX_("move",11,e3,60,48),this->onMove_dyn());
HXLINE( 494)		this->unregisterEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn());
HXLINE( 495)		this->unregisterEvent(HX_("actionend",e5,7d,aa,11),this->onActionEnd_dyn());
            	}


void ButtonEvents_obj::onMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_498_onMouseOver)
HXLINE( 499)		bool _hx_tmp;
HXDLIN( 499)		if ((this->_button->get_toggle() == true)) {
HXLINE( 499)			_hx_tmp = (this->_button->classes->indexOf(HX_(":down",9c,9d,ab,a7),null()) != -1);
            		}
            		else {
HXLINE( 499)			_hx_tmp = false;
            		}
HXDLIN( 499)		if (_hx_tmp) {
HXLINE( 500)			return;
            		}
HXLINE( 503)		bool _hx_tmp1;
HXDLIN( 503)		if ((event->buttonDown != false)) {
HXLINE( 503)			_hx_tmp1 = (this->_down == false);
            		}
            		else {
HXLINE( 503)			_hx_tmp1 = true;
            		}
HXDLIN( 503)		if (_hx_tmp1) {
HXLINE( 504)			this->_button->addClass(HX_(":hover",42,d3,17,5c),true,this->recursiveStyling);
            		}
            		else {
HXLINE( 506)			this->_button->addClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseOver,(void))

void ButtonEvents_obj::onMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_510_onMouseOut)
HXLINE( 511)		bool _hx_tmp;
HXDLIN( 511)		if ((this->_button->get_toggle() == true)) {
HXLINE( 511)			_hx_tmp = (this->_button->get_selected() == true);
            		}
            		else {
HXLINE( 511)			_hx_tmp = false;
            		}
HXDLIN( 511)		if (_hx_tmp) {
HXLINE( 512)			return;
            		}
HXLINE( 515)		if ((this->_button->get_remainPressed() == false)) {
HXLINE( 516)			this->_button->removeClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
            		}
HXLINE( 518)		this->_button->removeClass(HX_(":hover",42,d3,17,5c),true,this->recursiveStyling);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseOut,(void))

void ButtonEvents_obj::onMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_4199bc2c55ae9744_521_onMouseDown)
HXDLIN( 521)		 ::haxe::ui::components::ButtonEvents _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 522)		this->_button->set_focus(true);
HXLINE( 523)		bool _hx_tmp;
HXDLIN( 523)		if ((this->_button->get_repeater() == true)) {
HXLINE( 523)			_hx_tmp = (this->_repeatInterval == 0);
            		}
            		else {
HXLINE( 523)			_hx_tmp = false;
            		}
HXDLIN( 523)		if (_hx_tmp) {
HXLINE( 524)			int _hx_tmp;
HXDLIN( 524)			if (this->_button->get_easeInRepeater()) {
HXLINE( 524)				_hx_tmp = (this->_button->get_repeatInterval() * 2);
            			}
            			else {
HXLINE( 524)				_hx_tmp = this->_button->get_repeatInterval();
            			}
HXDLIN( 524)			this->_repeatInterval = _hx_tmp;
            		}
HXLINE( 526)		this->_down = true;
HXLINE( 527)		this->_button->addClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
HXLINE( 528)		this->_button->get_screen()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onMouseUp_dyn(),null());
HXLINE( 529)		bool _hx_tmp1;
HXDLIN( 529)		if ((this->_repeater == true)) {
HXLINE( 529)			int _hx_tmp = this->_repeatInterval;
HXDLIN( 529)			_hx_tmp1 = (_hx_tmp == this->_button->get_repeatInterval());
            		}
            		else {
HXLINE( 529)			_hx_tmp1 = false;
            		}
HXDLIN( 529)		if (_hx_tmp1) {
HXLINE( 530)			this->_repeatTimer =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,this->_repeatInterval,this->onRepeatTimer_dyn());
            		}
            		else {
HXLINE( 531)			if ((this->_button->get_repeater() == true)) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::ButtonEvents,_gthis, ::haxe::ui::events::MouseEvent,event) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_4199bc2c55ae9744_537_onMouseDown)
HXLINE( 537)					bool _hx_tmp;
HXDLIN( 537)					if ((_gthis->_repeater == true)) {
HXLINE( 537)						_hx_tmp = ::hx::IsNull( _gthis->_repeatTimer );
            					}
            					else {
HXLINE( 537)						_hx_tmp = false;
            					}
HXDLIN( 537)					if (_hx_tmp) {
HXLINE( 538)						bool _hx_tmp;
HXDLIN( 538)						if ((_gthis->_button->get_easeInRepeater() == true)) {
HXLINE( 538)							int _gthis1 = _gthis->_repeatInterval;
HXDLIN( 538)							_hx_tmp = (_gthis1 > _gthis->_button->get_repeatInterval());
            						}
            						else {
HXLINE( 538)							_hx_tmp = false;
            						}
HXDLIN( 538)						if (_hx_tmp) {
HXLINE( 539)							int _gthis1 = _gthis->_repeatInterval;
HXDLIN( 539)							int _gthis2 = _gthis->_repeatInterval;
HXDLIN( 539)							Float _hx_tmp = (( (Float)(_gthis1) ) - (( (Float)((_gthis2 - _gthis->_button->get_repeatInterval())) ) / ( (Float)(2) )));
HXDLIN( 539)							_gthis->_repeatInterval = ::Std_obj::_hx_int(_hx_tmp);
HXLINE( 540)							_gthis->onRepeatTimer();
            						}
HXLINE( 542)						_gthis->onMouseDown(event);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 532)				if (::hx::IsNotNull( this->_repeatTimer )) {
HXLINE( 533)					this->_repeatTimer->stop();
HXLINE( 534)					this->_repeatTimer = null();
            				}
HXLINE( 536)				::haxe::ui::util::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis,event)),this->_repeatInterval);
            			}
            		}
HXLINE( 546)		this->_repeater = this->_button->get_repeater();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseDown,(void))

void ButtonEvents_obj::onMouseUp( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_549_onMouseUp)
HXLINE( 551)		this->_down = (this->_repeater = false);
HXLINE( 552)		int _hx_tmp;
HXDLIN( 552)		if (this->_button->get_easeInRepeater()) {
HXLINE( 552)			_hx_tmp = (this->_button->get_repeatInterval() * 2);
            		}
            		else {
HXLINE( 552)			_hx_tmp = this->_button->get_repeatInterval();
            		}
HXDLIN( 552)		this->_repeatInterval = _hx_tmp;
HXLINE( 553)		this->_button->get_screen()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onMouseUp_dyn());
HXLINE( 555)		if ((this->_button->get_toggle() == true)) {
HXLINE( 556)			return;
            		}
HXLINE( 559)		this->_button->removeClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
HXLINE( 560)		bool over = this->_button->hitTest(event->screenX,event->screenY,null());
HXLINE( 561)		bool _hx_tmp1;
HXDLIN( 561)		if ((event->touchEvent == false)) {
HXLINE( 561)			_hx_tmp1 = (over == true);
            		}
            		else {
HXLINE( 561)			_hx_tmp1 = false;
            		}
HXDLIN( 561)		if (_hx_tmp1) {
HXLINE( 562)			this->_button->addClass(HX_(":hover",42,d3,17,5c),true,this->recursiveStyling);
            		}
            		else {
HXLINE( 563)			if ((over == false)) {
HXLINE( 564)				this->_button->removeClass(HX_(":hover",42,d3,17,5c),true,this->recursiveStyling);
            			}
            		}
HXLINE( 567)		if (::hx::IsNotNull( this->_repeatTimer )) {
HXLINE( 568)			this->_repeatTimer->stop();
HXLINE( 569)			this->_repeatTimer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseUp,(void))

void ButtonEvents_obj::onMove( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_573_onMove)
HXLINE( 574)		 ::haxe::ui::components::Button over = this->_button;
HXDLIN( 574)		Float over1 = ::haxe::ui::core::Screen_obj::get_instance()->currentMouseX;
HXDLIN( 574)		bool over2 = over->hitTest(over1,::haxe::ui::core::Screen_obj::get_instance()->currentMouseY,null());
HXLINE( 575)		if ((over2 == true)) {
HXLINE( 576)			this->_button->addClass(HX_(":hover",42,d3,17,5c),true,this->recursiveStyling);
            		}
            		else {
HXLINE( 577)			if ((over2 == false)) {
HXLINE( 578)				this->_button->removeClass(HX_(":hover",42,d3,17,5c),true,this->recursiveStyling);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMove,(void))

void ButtonEvents_obj::onRepeatTimer(){
            	HX_GC_STACKFRAME(&_hx_pos_4199bc2c55ae9744_583_onRepeatTimer)
HXDLIN( 583)		bool _hx_tmp;
HXDLIN( 583)		if ((this->_button->classes->indexOf(HX_(":hover",42,d3,17,5c),null()) != -1)) {
HXDLIN( 583)			_hx_tmp = (this->_down == true);
            		}
            		else {
HXDLIN( 583)			_hx_tmp = false;
            		}
HXDLIN( 583)		if (_hx_tmp) {
HXLINE( 584)			 ::haxe::ui::events::MouseEvent event =  ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("click",48,7c,5e,48));
HXLINE( 585)			this->_button->dispatch(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonEvents_obj,onRepeatTimer,(void))

void ButtonEvents_obj::onMouseClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_589_onMouseClick)
HXLINE( 590)		 ::haxe::ui::components::Button _hx_tmp = this->_button;
HXDLIN( 590)		_hx_tmp->set_selected(!(this->_button->get_selected()));
HXLINE( 591)		if ((this->_button->get_selected() == false)) {
HXLINE( 592)			this->_button->removeClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
            		}
HXLINE( 594)		if (this->_button->hitTest(event->screenX,event->screenY,null())) {
HXLINE( 595)			this->_button->addClass(HX_(":hover",42,d3,17,5c),true,this->recursiveStyling);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onMouseClick,(void))

void ButtonEvents_obj::dispatchChanged(){
            	HX_GC_STACKFRAME(&_hx_pos_4199bc2c55ae9744_600_dispatchChanged)
HXDLIN( 600)		 ::haxe::ui::components::Button _hx_tmp = this->_button;
HXDLIN( 600)		_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonEvents_obj,dispatchChanged,(void))

void ButtonEvents_obj::press(){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_603_press)
HXLINE( 604)		this->_down = true;
HXLINE( 605)		if ((this->_button->get_toggle() == true)) {
HXLINE( 606)			this->_button->addClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
            		}
            		else {
HXLINE( 608)			this->_button->addClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonEvents_obj,press,(void))

void ButtonEvents_obj::release(){
            	HX_GC_STACKFRAME(&_hx_pos_4199bc2c55ae9744_613_release)
HXDLIN( 613)		if ((this->_down == true)) {
HXLINE( 614)			this->_down = false;
HXLINE( 615)			if ((this->_button->get_toggle() == true)) {
HXLINE( 616)				 ::haxe::ui::components::Button _hx_tmp = this->_button;
HXDLIN( 616)				_hx_tmp->set_selected(!(this->_button->get_selected()));
HXLINE( 617)				 ::haxe::ui::components::Button _hx_tmp1 = this->_button;
HXDLIN( 617)				_hx_tmp1->dispatch( ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("click",48,7c,5e,48)));
            			}
            			else {
HXLINE( 619)				this->_button->removeClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
HXLINE( 620)				 ::haxe::ui::components::Button _hx_tmp = this->_button;
HXDLIN( 620)				_hx_tmp->dispatch( ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("click",48,7c,5e,48)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonEvents_obj,release,(void))

void ButtonEvents_obj::onActionStart( ::haxe::ui::events::ActionEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_626_onActionStart)
HXDLIN( 626)		::String _hx_switch_0 = event->action;
            		if (  (_hx_switch_0==HX_("actionConfirm",ea,0b,2f,06)) ||  (_hx_switch_0==HX_("actionPress",ed,53,ed,9a)) ){
HXLINE( 628)			this->press();
HXDLIN( 628)			goto _hx_goto_14;
            		}
            		/* default */{
            		}
            		_hx_goto_14:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onActionStart,(void))

void ButtonEvents_obj::onActionEnd( ::haxe::ui::events::ActionEvent event){
            	HX_STACKFRAME(&_hx_pos_4199bc2c55ae9744_634_onActionEnd)
HXDLIN( 634)		::String _hx_switch_0 = event->action;
            		if (  (_hx_switch_0==HX_("actionConfirm",ea,0b,2f,06)) ||  (_hx_switch_0==HX_("actionPress",ed,53,ed,9a)) ){
HXLINE( 636)			this->release();
HXDLIN( 636)			goto _hx_goto_16;
            		}
            		/* default */{
            		}
            		_hx_goto_16:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonEvents_obj,onActionEnd,(void))


::hx::ObjectPtr< ButtonEvents_obj > ButtonEvents_obj::__new( ::haxe::ui::components::Button button) {
	::hx::ObjectPtr< ButtonEvents_obj > __this = new ButtonEvents_obj();
	__this->__construct(button);
	return __this;
}

::hx::ObjectPtr< ButtonEvents_obj > ButtonEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Button button) {
	ButtonEvents_obj *__this = (ButtonEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonEvents_obj), true, "haxe.ui.components.ButtonEvents"));
	*(void **)__this = ButtonEvents_obj::_hx_vtable;
	__this->__construct(button);
	return __this;
}

ButtonEvents_obj::ButtonEvents_obj()
{
}

void ButtonEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonEvents);
	HX_MARK_MEMBER_NAME(_button,"_button");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_repeatTimer,"_repeatTimer");
	HX_MARK_MEMBER_NAME(_repeater,"_repeater");
	HX_MARK_MEMBER_NAME(_repeatInterval,"_repeatInterval");
	HX_MARK_MEMBER_NAME(recursiveStyling,"recursiveStyling");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_button,"_button");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_repeatTimer,"_repeatTimer");
	HX_VISIT_MEMBER_NAME(_repeater,"_repeater");
	HX_VISIT_MEMBER_NAME(_repeatInterval,"_repeatInterval");
	HX_VISIT_MEMBER_NAME(recursiveStyling,"recursiveStyling");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return ::hx::Val( _down ); }
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onMove") ) { return ::hx::Val( onMove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return ::hx::Val( _button ); }
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_repeater") ) { return ::hx::Val( _repeater ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onActionEnd") ) { return ::hx::Val( onActionEnd_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_repeatTimer") ) { return ::hx::Val( _repeatTimer ); }
		if (HX_FIELD_EQ(inName,"onMouseClick") ) { return ::hx::Val( onMouseClick_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onRepeatTimer") ) { return ::hx::Val( onRepeatTimer_dyn() ); }
		if (HX_FIELD_EQ(inName,"onActionStart") ) { return ::hx::Val( onActionStart_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_repeatInterval") ) { return ::hx::Val( _repeatInterval ); }
		if (HX_FIELD_EQ(inName,"dispatchChanged") ) { return ::hx::Val( dispatchChanged_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"recursiveStyling") ) { return ::hx::Val( recursiveStyling ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_repeater") ) { _repeater=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_repeatTimer") ) { _repeatTimer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_repeatInterval") ) { _repeatInterval=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"recursiveStyling") ) { recursiveStyling=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_button",91,73,57,48));
	outFields->push(HX_("_down",41,14,7f,f5));
	outFields->push(HX_("_repeatTimer",6b,bc,66,47));
	outFields->push(HX_("_repeater",e7,b3,eb,57));
	outFields->push(HX_("_repeatInterval",5f,68,ca,8e));
	outFields->push(HX_("recursiveStyling",5c,2b,a5,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(ButtonEvents_obj,_button),HX_("_button",91,73,57,48)},
	{::hx::fsBool,(int)offsetof(ButtonEvents_obj,_down),HX_("_down",41,14,7f,f5)},
	{::hx::fsObject /*  ::haxe::ui::util::Timer */ ,(int)offsetof(ButtonEvents_obj,_repeatTimer),HX_("_repeatTimer",6b,bc,66,47)},
	{::hx::fsBool,(int)offsetof(ButtonEvents_obj,_repeater),HX_("_repeater",e7,b3,eb,57)},
	{::hx::fsInt,(int)offsetof(ButtonEvents_obj,_repeatInterval),HX_("_repeatInterval",5f,68,ca,8e)},
	{::hx::fsBool,(int)offsetof(ButtonEvents_obj,recursiveStyling),HX_("recursiveStyling",5c,2b,a5,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonEvents_obj_sMemberFields[] = {
	HX_("_button",91,73,57,48),
	HX_("_down",41,14,7f,f5),
	HX_("_repeatTimer",6b,bc,66,47),
	HX_("_repeater",e7,b3,eb,57),
	HX_("_repeatInterval",5f,68,ca,8e),
	HX_("recursiveStyling",5c,2b,a5,4a),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("onMouseDown",08,94,05,11),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("onMove",d0,eb,ea,ea),
	HX_("onRepeatTimer",8b,2b,47,44),
	HX_("onMouseClick",e2,11,6f,3e),
	HX_("dispatchChanged",5a,b5,96,84),
	HX_("press",83,53,88,c8),
	HX_("release",c7,85,ed,58),
	HX_("onActionStart",ed,91,5a,b9),
	HX_("onActionEnd",a6,18,d5,33),
	::String(null()) };

::hx::Class ButtonEvents_obj::__mClass;

void ButtonEvents_obj::__register()
{
	ButtonEvents_obj _hx_dummy;
	ButtonEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.ButtonEvents",51,44,2b,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
