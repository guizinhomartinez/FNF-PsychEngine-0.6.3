#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
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
#ifndef INCLUDED_haxe_ui_events_ScrollEvent
#include <haxe/ui/events/ScrollEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_253fa99b051b5118_508_new,"haxe.ui.containers.ScrollViewEvents","new",0x8940bb67,"haxe.ui.containers.ScrollViewEvents.new","haxe/ui/containers/ScrollView.hx",508,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_516_register,"haxe.ui.containers.ScrollViewEvents","register",0x1a7e61fc,"haxe.ui.containers.ScrollViewEvents.register","haxe/ui/containers/ScrollView.hx",516,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_552_unregister,"haxe.ui.containers.ScrollViewEvents","unregister",0xe21b2195,"haxe.ui.containers.ScrollViewEvents.unregister","haxe/ui/containers/ScrollView.hx",552,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_576_onShown,"haxe.ui.containers.ScrollViewEvents","onShown",0xb371a1b9,"haxe.ui.containers.ScrollViewEvents.onShown","haxe/ui/containers/ScrollView.hx",576,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_589_onContentsResized,"haxe.ui.containers.ScrollViewEvents","onContentsResized",0x54e400de,"haxe.ui.containers.ScrollViewEvents.onContentsResized","haxe/ui/containers/ScrollView.hx",589,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_592_onHScroll,"haxe.ui.containers.ScrollViewEvents","onHScroll",0x9161ad7d,"haxe.ui.containers.ScrollViewEvents.onHScroll","haxe/ui/containers/ScrollView.hx",592,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_598_onHScrollScroll,"haxe.ui.containers.ScrollViewEvents","onHScrollScroll",0x1b55b56a,"haxe.ui.containers.ScrollViewEvents.onHScrollScroll","haxe/ui/containers/ScrollView.hx",598,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_601_onVScroll,"haxe.ui.containers.ScrollViewEvents","onVScroll",0xd78e2c0b,"haxe.ui.containers.ScrollViewEvents.onVScroll","haxe/ui/containers/ScrollView.hx",601,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_607_onVScrollScroll,"haxe.ui.containers.ScrollViewEvents","onVScrollScroll",0xebdc9278,"haxe.ui.containers.ScrollViewEvents.onVScrollScroll","haxe/ui/containers/ScrollView.hx",607,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_614_onMouseDown,"haxe.ui.containers.ScrollViewEvents","onMouseDown",0xc5ef5e0f,"haxe.ui.containers.ScrollViewEvents.onMouseDown","haxe/ui/containers/ScrollView.hx",614,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_674_onMouseMove,"haxe.ui.containers.ScrollViewEvents","onMouseMove",0xcbe248be,"haxe.ui.containers.ScrollViewEvents.onMouseMove","haxe/ui/containers/ScrollView.hx",674,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_708_pauseContainerEvents,"haxe.ui.containers.ScrollViewEvents","pauseContainerEvents",0xd33dd1fd,"haxe.ui.containers.ScrollViewEvents.pauseContainerEvents","haxe/ui/containers/ScrollView.hx",708,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_716_resumeContainerEvents,"haxe.ui.containers.ScrollViewEvents","resumeContainerEvents",0x42bbe0d4,"haxe.ui.containers.ScrollViewEvents.resumeContainerEvents","haxe/ui/containers/ScrollView.hx",716,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_726_onContainerEventsStatusChanged,"haxe.ui.containers.ScrollViewEvents","onContainerEventsStatusChanged",0xf0fdd460,"haxe.ui.containers.ScrollViewEvents.onContainerEventsStatusChanged","haxe/ui/containers/ScrollView.hx",726,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_760_onMouseUp,"haxe.ui.containers.ScrollViewEvents","onMouseUp",0xf12316c8,"haxe.ui.containers.ScrollViewEvents.onMouseUp","haxe/ui/containers/ScrollView.hx",760,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_830_inertialScroll,"haxe.ui.containers.ScrollViewEvents","inertialScroll",0x8bb71c38,"haxe.ui.containers.ScrollViewEvents.inertialScroll","haxe/ui/containers/ScrollView.hx",830,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_893_onMouseWheel,"haxe.ui.containers.ScrollViewEvents","onMouseWheel",0x5771c64e,"haxe.ui.containers.ScrollViewEvents.onMouseWheel","haxe/ui/containers/ScrollView.hx",893,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_927_onMouseWheel,"haxe.ui.containers.ScrollViewEvents","onMouseWheel",0x5771c64e,"haxe.ui.containers.ScrollViewEvents.onMouseWheel","haxe/ui/containers/ScrollView.hx",927,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_937_onActionStart,"haxe.ui.containers.ScrollViewEvents","onActionStart",0xd3d02bb4,"haxe.ui.containers.ScrollViewEvents.onActionStart","haxe/ui/containers/ScrollView.hx",937,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_611_boot,"haxe.ui.containers.ScrollViewEvents","boot",0x877c3f4b,"haxe.ui.containers.ScrollViewEvents.boot","haxe/ui/containers/ScrollView.hx",611,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{

void ScrollViewEvents_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_508_new)
HXLINE( 891)		this->_fadeTimer = null();
HXLINE( 707)		this->_containerEventsPaused = false;
HXLINE( 673)		this->_lastMousePos = null();
HXLINE( 672)		this->_movementThreshold = 3;
HXLINE( 612)		this->_inertia = null();
HXLINE( 512)		super::__construct(scrollview);
HXLINE( 513)		this->_scrollview = scrollview;
            	}

Dynamic ScrollViewEvents_obj::__CreateEmpty() { return new ScrollViewEvents_obj; }

void *ScrollViewEvents_obj::_hx_vtable = 0;

Dynamic ScrollViewEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollViewEvents_obj > _hx_result = new ScrollViewEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollViewEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x1bae5da3;
	}
}

void ScrollViewEvents_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_516_register)
HXLINE( 517)		 ::haxe::ui::core::Component contents = this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 518)		bool _hx_tmp;
HXDLIN( 518)		if (::hx::IsNotNull( contents )) {
HXLINE( 518)			_hx_tmp = (contents->hasEvent(HX_("resize",f4,59,7b,08),this->onContentsResized_dyn()) == false);
            		}
            		else {
HXLINE( 518)			_hx_tmp = false;
            		}
HXDLIN( 518)		if (_hx_tmp) {
HXLINE( 519)			contents->registerEvent(HX_("resize",f4,59,7b,08),this->onContentsResized_dyn(),null());
            		}
HXLINE( 522)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 523)		bool _hx_tmp1;
HXDLIN( 523)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 523)			_hx_tmp1 = (hscroll->hasEvent(HX_("change",70,91,72,b7),this->onHScroll_dyn()) == false);
            		}
            		else {
HXLINE( 523)			_hx_tmp1 = false;
            		}
HXDLIN( 523)		if (_hx_tmp1) {
HXLINE( 524)			hscroll->registerEvent(HX_("change",70,91,72,b7),this->onHScroll_dyn(),null());
            		}
HXLINE( 526)		bool _hx_tmp2;
HXDLIN( 526)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 526)			_hx_tmp2 = (hscroll->hasEvent(HX_("scrollscroll",da,b7,92,6a),this->onHScrollScroll_dyn()) == false);
            		}
            		else {
HXLINE( 526)			_hx_tmp2 = false;
            		}
HXDLIN( 526)		if (_hx_tmp2) {
HXLINE( 527)			hscroll->registerEvent(HX_("scrollscroll",da,b7,92,6a),this->onHScrollScroll_dyn(),null());
            		}
HXLINE( 530)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 531)		bool _hx_tmp3;
HXDLIN( 531)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 531)			_hx_tmp3 = (vscroll->hasEvent(HX_("change",70,91,72,b7),this->onVScroll_dyn()) == false);
            		}
            		else {
HXLINE( 531)			_hx_tmp3 = false;
            		}
HXDLIN( 531)		if (_hx_tmp3) {
HXLINE( 532)			vscroll->registerEvent(HX_("change",70,91,72,b7),this->onVScroll_dyn(),null());
            		}
HXLINE( 534)		bool _hx_tmp4;
HXDLIN( 534)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 534)			_hx_tmp4 = (vscroll->hasEvent(HX_("scrollscroll",da,b7,92,6a),this->onVScrollScroll_dyn()) == false);
            		}
            		else {
HXLINE( 534)			_hx_tmp4 = false;
            		}
HXDLIN( 534)		if (_hx_tmp4) {
HXLINE( 535)			vscroll->registerEvent(HX_("scrollscroll",da,b7,92,6a),this->onVScrollScroll_dyn(),null());
            		}
HXLINE( 538)		bool _hx_tmp5;
HXDLIN( 538)		if ((this->_scrollview->get_scrollMode() != HX_("drag",f4,2b,70,42))) {
HXLINE( 538)			_hx_tmp5 = (this->_scrollview->get_scrollMode() == HX_("inertial",32,2a,a0,a6));
            		}
            		else {
HXLINE( 538)			_hx_tmp5 = true;
            		}
HXDLIN( 538)		if (_hx_tmp5) {
HXLINE( 539)			this->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
            		}
            		else {
HXLINE( 540)			if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn()) == false)) {
HXLINE( 541)				this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
            			}
            		}
HXLINE( 544)		if ((this->_scrollview->hasEvent(HX_("shown",d1,88,27,7c),null()) == false)) {
HXLINE( 545)			this->registerEvent(HX_("shown",d1,88,27,7c),this->onShown_dyn(),null());
            		}
HXLINE( 548)		this->registerEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn(),null());
HXLINE( 549)		this->registerEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn(),-100);
            	}


void ScrollViewEvents_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_552_unregister)
HXLINE( 553)		 ::haxe::ui::core::Component contents = this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 554)		if (::hx::IsNotNull( contents )) {
HXLINE( 555)			contents->unregisterEvent(HX_("resize",f4,59,7b,08),this->onContentsResized_dyn());
            		}
HXLINE( 558)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 559)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 560)			hscroll->unregisterEvent(HX_("change",70,91,72,b7),this->onHScroll_dyn());
HXLINE( 561)			hscroll->unregisterEvent(HX_("scrollscroll",da,b7,92,6a),this->onHScrollScroll_dyn());
            		}
HXLINE( 564)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 565)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 566)			vscroll->unregisterEvent(HX_("change",70,91,72,b7),this->onVScroll_dyn());
HXLINE( 567)			vscroll->unregisterEvent(HX_("scrollscroll",da,b7,92,6a),this->onVScrollScroll_dyn());
            		}
HXLINE( 570)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
HXLINE( 571)		this->unregisterEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn());
HXLINE( 572)		this->unregisterEvent(HX_("shown",d1,88,27,7c),this->onShown_dyn());
HXLINE( 573)		this->unregisterEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn());
            	}


void ScrollViewEvents_obj::onShown( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_576_onShown)
HXLINE( 577)		{
HXLINE( 577)			 ::haxe::ui::containers::ScrollView _this = this->_scrollview;
HXDLIN( 577)			bool _hx_tmp;
HXDLIN( 577)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 577)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 577)				_hx_tmp = true;
            			}
HXDLIN( 577)			if (!(_hx_tmp)) {
HXLINE( 577)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 578)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 579)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 580)			bool _hx_tmp;
HXDLIN( 580)			if (::hx::IsNotNull( hscroll->_layout )) {
HXLINE( 580)				_hx_tmp = (hscroll->_layoutLocked == true);
            			}
            			else {
HXLINE( 580)				_hx_tmp = true;
            			}
HXDLIN( 580)			if (!(_hx_tmp)) {
HXLINE( 580)				hscroll->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 582)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 583)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 584)			bool _hx_tmp;
HXDLIN( 584)			if (::hx::IsNotNull( vscroll->_layout )) {
HXLINE( 584)				_hx_tmp = (vscroll->_layoutLocked == true);
            			}
            			else {
HXLINE( 584)				_hx_tmp = true;
            			}
HXDLIN( 584)			if (!(_hx_tmp)) {
HXLINE( 584)				vscroll->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onShown,(void))

void ScrollViewEvents_obj::onContentsResized( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_589_onContentsResized)
HXDLIN( 589)		this->_scrollview->invalidateComponent(HX_("scroll",0d,d8,64,47),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onContentsResized,(void))

void ScrollViewEvents_obj::onHScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_592_onHScroll)
HXLINE( 593)		this->_scrollview->invalidateComponent(HX_("scroll",0d,d8,64,47),null());
HXLINE( 594)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 594)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollchange",3d,71,a0,da)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onHScroll,(void))

void ScrollViewEvents_obj::onHScrollScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_598_onHScrollScroll)
HXDLIN( 598)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 598)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollscroll",da,b7,92,6a)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onHScrollScroll,(void))

void ScrollViewEvents_obj::onVScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_601_onVScroll)
HXLINE( 602)		this->_scrollview->invalidateComponent(HX_("scroll",0d,d8,64,47),null());
HXLINE( 603)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 603)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollchange",3d,71,a0,da)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onVScroll,(void))

void ScrollViewEvents_obj::onVScrollScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_607_onVScrollScroll)
HXDLIN( 607)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 607)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollscroll",da,b7,92,6a)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onVScrollScroll,(void))

void ScrollViewEvents_obj::onMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_614_onMouseDown)
HXLINE( 615)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 616)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 618)		bool _hx_tmp;
HXDLIN( 618)		if (::hx::IsNull( hscroll )) {
HXLINE( 618)			_hx_tmp = ::hx::IsNull( vscroll );
            		}
            		else {
HXLINE( 618)			_hx_tmp = false;
            		}
HXDLIN( 618)		if (_hx_tmp) {
HXLINE( 619)			return;
            		}
HXLINE( 622)		this->_scrollview->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
HXLINE( 624)		this->_lastMousePos =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,event->screenX,event->screenY);
HXLINE( 626)		 ::haxe::ui::geom::Point componentOffset = this->_scrollview->getComponentOffset();
HXLINE( 629)		::Array< ::Dynamic> under = this->_scrollview->findComponentsUnderPoint((event->screenX - componentOffset->x),(event->screenY - componentOffset->y),null());
HXLINE( 630)		{
HXLINE( 630)			int _g = 0;
HXDLIN( 630)			while((_g < under->length)){
HXLINE( 630)				 ::haxe::ui::core::Component c = under->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 630)				_g = (_g + 1);
HXLINE( 631)				bool _hx_tmp;
HXDLIN( 631)				if (!(c->hasTextInput())) {
HXLINE( 631)					_hx_tmp = ::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::components::Scroll >());
            				}
            				else {
HXLINE( 631)					_hx_tmp = true;
            				}
HXDLIN( 631)				if (_hx_tmp) {
HXLINE( 632)					return;
            				}
            			}
            		}
HXLINE( 638)		this->_offset =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 639)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 640)			Float _hx_tmp = hscroll->get_pos();
HXDLIN( 640)			this->_offset->x = (_hx_tmp + event->screenX);
            		}
HXLINE( 642)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 643)			Float _hx_tmp = vscroll->get_pos();
HXDLIN( 643)			this->_offset->y = (_hx_tmp + event->screenY);
            		}
HXLINE( 646)		if ((this->_scrollview->get_scrollMode() == HX_("inertial",32,2a,a0,a6))) {
HXLINE( 647)			if (::hx::IsNull( this->_inertia )) {
HXLINE( 649)				 ::haxe::ui::geom::Point _hx_tmp =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 650)				 ::haxe::ui::geom::Point _hx_tmp1 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 651)				 ::haxe::ui::geom::Point _hx_tmp2 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 648)				this->_inertia =  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("target",51,f3,ec,86),_hx_tmp1)
            					->setFixed(1,HX_("timestamp",d6,d4,ce,a5),( (Float)(0) ))
            					->setFixed(2,HX_("direction",3f,62,40,10), ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null()))
            					->setFixed(3,HX_("screen",6c,3b,5d,47),_hx_tmp)
            					->setFixed(4,HX_("amplitude",43,15,fb,69),_hx_tmp2));
            			}
HXLINE( 657)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x = this->_scrollview->get_hscrollPos();
HXLINE( 658)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y = this->_scrollview->get_vscrollPos();
HXLINE( 659)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x = ( (Float)(0) );
HXLINE( 660)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y = ( (Float)(0) );
HXLINE( 662)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->x = event->screenX;
HXLINE( 663)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->y = event->screenY;
HXLINE( 665)			this->_inertia->__SetField(HX_("timestamp",d6,d4,ce,a5), ::__time_stamp(),::hx::paccDynamic);
            		}
HXLINE( 668)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->onMouseMove_dyn(),null());
HXLINE( 669)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onMouseUp_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseDown,(void))

void ScrollViewEvents_obj::onMouseMove( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_674_onMouseMove)
HXLINE( 675)		event->cancel();
HXLINE( 676)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 677)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 678)			hscroll->set_pos((this->_offset->x - event->screenX));
HXLINE( 679)			Float distX = ::Math_obj::abs((event->screenX - this->_lastMousePos->x));
HXLINE( 685)			if ((distX > ::haxe::ui::Toolkit_obj::get_scaleX())) {
HXLINE( 686)				this->pauseContainerEvents();
            			}
            		}
HXLINE( 690)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 691)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 692)			vscroll->set_pos((this->_offset->y - event->screenY));
HXLINE( 693)			Float distY = ::Math_obj::abs((event->screenY - this->_lastMousePos->y));
HXLINE( 699)			if ((distY > ::haxe::ui::Toolkit_obj::get_scaleY())) {
HXLINE( 700)				this->pauseContainerEvents();
            			}
            		}
HXLINE( 704)		this->_lastMousePos =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,event->screenX,event->screenY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseMove,(void))

void ScrollViewEvents_obj::pauseContainerEvents(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_708_pauseContainerEvents)
HXLINE( 709)		if ((this->_containerEventsPaused == true)) {
HXLINE( 710)			return;
            		}
HXLINE( 712)		this->_containerEventsPaused = true;
HXLINE( 713)		this->onContainerEventsStatusChanged();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,pauseContainerEvents,(void))

void ScrollViewEvents_obj::resumeContainerEvents(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_716_resumeContainerEvents)
HXLINE( 717)		if ((this->_containerEventsPaused == false)) {
HXLINE( 718)			return;
            		}
HXLINE( 721)		this->_containerEventsPaused = false;
HXLINE( 722)		this->onContainerEventsStatusChanged();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,resumeContainerEvents,(void))

void ScrollViewEvents_obj::onContainerEventsStatusChanged(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_726_onContainerEventsStatusChanged)
HXLINE( 727)		this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),::hx::ClassOf< ::haxe::ui::core::Component >(),true,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >()->disableInteractivity(this->_containerEventsPaused,null(),null(),null());
HXLINE( 729)		if ((this->_containerEventsPaused == true)) {
HXLINE( 730)			this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),::hx::ClassOf< ::haxe::ui::core::Component >(),true,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >()->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            		}
HXLINE( 733)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 734)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 735)		bool _hx_tmp;
HXDLIN( 735)		if (::hx::IsNull( hscroll )) {
HXLINE( 735)			_hx_tmp = ::hx::IsNotNull( vscroll );
            		}
            		else {
HXLINE( 735)			_hx_tmp = true;
            		}
HXDLIN( 735)		if (_hx_tmp) {
HXLINE( 736)			if ((this->_scrollview->get_autoHideScrolls() == true)) {
HXLINE( 737)				if ((this->_containerEventsPaused == true)) {
HXLINE( 738)					if (::hx::IsNotNull( hscroll )) {
HXLINE( 740)						hscroll->fadeIn(null(),null());
            					}
HXLINE( 742)					if (::hx::IsNotNull( vscroll )) {
HXLINE( 744)						vscroll->fadeIn(null(),null());
            					}
            				}
            				else {
HXLINE( 747)					if (::hx::IsNotNull( hscroll )) {
HXLINE( 749)						hscroll->fadeOut(null(),null());
            					}
HXLINE( 751)					if (::hx::IsNotNull( vscroll )) {
HXLINE( 753)						vscroll->fadeOut(null(),null());
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,onContainerEventsStatusChanged,(void))

void ScrollViewEvents_obj::onMouseUp( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_760_onMouseUp)
HXLINE( 761)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onMouseMove_dyn());
HXLINE( 762)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onMouseUp_dyn());
HXLINE( 764)		if ((this->_scrollview->get_scrollMode() == HX_("inertial",32,2a,a0,a6))) {
HXLINE( 765)			Float now =  ::__time_stamp();
HXLINE( 766)			Float elapsed = ((now - ( (Float)(this->_inertia->__Field(HX_("timestamp",d6,d4,ce,a5),::hx::paccDynamic)) )) * ( (Float)(1000) ));
HXLINE( 768)			Float deltaX = ::Math_obj::abs((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->x - event->screenX));
HXLINE( 769)			Float deltaY = ::Math_obj::abs((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->y - event->screenY));
HXLINE( 771)			Float _hx_tmp;
HXDLIN( 771)			if (((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->x - event->screenX) < 0)) {
HXLINE( 771)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 771)				_hx_tmp = ( (Float)(1) );
            			}
HXDLIN( 771)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->x = _hx_tmp;
HXLINE( 772)			Float velocityX = (deltaX / elapsed);
HXLINE( 773)			Float v = ((( (Float)(1000) ) * deltaX) / (1 + elapsed));
HXLINE( 774)			velocityX = ((((Float)0.8) * v) + (((Float)0.2) * velocityX));
HXLINE( 776)			Float _hx_tmp1;
HXDLIN( 776)			if (((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->y - event->screenY) < 0)) {
HXLINE( 776)				_hx_tmp1 = ( (Float)(0) );
            			}
            			else {
HXLINE( 776)				_hx_tmp1 = ( (Float)(1) );
            			}
HXDLIN( 776)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->y = _hx_tmp1;
HXLINE( 777)			Float velocityY = (deltaY / elapsed);
HXLINE( 778)			Float v1 = ((( (Float)(1000) ) * deltaY) / (1 + elapsed));
HXLINE( 779)			velocityY = ((((Float)0.8) * v1) + (((Float)0.2) * velocityY));
HXLINE( 781)			bool _hx_tmp2;
HXDLIN( 781)			if ((velocityX <= 75)) {
HXLINE( 781)				_hx_tmp2 = (velocityY <= 75);
            			}
            			else {
HXLINE( 781)				_hx_tmp2 = false;
            			}
HXDLIN( 781)			if (_hx_tmp2) {
HXLINE( 782)				this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
HXLINE( 783)				::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
HXLINE( 784)				return;
            			}
HXLINE( 787)			this->_inertia->__SetField(HX_("timestamp",d6,d4,ce,a5), ::__time_stamp(),::hx::paccDynamic);
HXLINE( 789)			 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 790)			if (::hx::IsNotNull( hscroll )) {
HXLINE( 791)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x = (((Float)0.8) * velocityX);
            			}
HXLINE( 793)			if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->x == 0)) {
HXLINE( 794)				Float _hx_tmp = this->_scrollview->get_hscrollPos();
HXDLIN( 794)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x = ( (Float)(::Math_obj::round((_hx_tmp - ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x))) );
            			}
            			else {
HXLINE( 796)				Float _hx_tmp = this->_scrollview->get_hscrollPos();
HXDLIN( 796)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x = ( (Float)(::Math_obj::round((_hx_tmp + ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x))) );
            			}
HXLINE( 799)			 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 800)			if (::hx::IsNotNull( vscroll )) {
HXLINE( 801)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y = (((Float)0.8) * velocityY);
            			}
HXLINE( 803)			if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->y == 0)) {
HXLINE( 804)				Float _hx_tmp = this->_scrollview->get_vscrollPos();
HXDLIN( 804)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y = ( (Float)(::Math_obj::round((_hx_tmp - ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y))) );
            			}
            			else {
HXLINE( 806)				Float _hx_tmp = this->_scrollview->get_vscrollPos();
HXDLIN( 806)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y = ( (Float)(::Math_obj::round((_hx_tmp + ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y))) );
            			}
HXLINE( 809)			bool _hx_tmp3;
HXDLIN( 809)			Float _hx_tmp4 = this->_scrollview->get_hscrollPos();
HXDLIN( 809)			if ((_hx_tmp4 == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x)) {
HXLINE( 809)				Float _hx_tmp = this->_scrollview->get_vscrollPos();
HXDLIN( 809)				_hx_tmp3 = (_hx_tmp == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y);
            			}
            			else {
HXLINE( 809)				_hx_tmp3 = false;
            			}
HXDLIN( 809)			if (_hx_tmp3) {
HXLINE( 810)				this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
HXLINE( 811)				::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
HXLINE( 812)				return;
            			}
HXLINE( 815)			Float _hx_tmp5 = this->_scrollview->get_hscrollPos();
HXDLIN( 815)			if ((_hx_tmp5 == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x)) {
HXLINE( 816)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x = ( (Float)(0) );
            			}
HXLINE( 818)			Float _hx_tmp6 = this->_scrollview->get_vscrollPos();
HXDLIN( 818)			if ((_hx_tmp6 == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y)) {
HXLINE( 819)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y = ( (Float)(0) );
            			}
HXLINE( 822)			::haxe::ui::Toolkit_obj::callLater(this->inertialScroll_dyn());
            		}
            		else {
HXLINE( 824)			this->_scrollview->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
HXLINE( 825)			this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
HXLINE( 826)			::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseUp,(void))

void ScrollViewEvents_obj::inertialScroll(){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_830_inertialScroll)
HXLINE( 831)		Float elapsed =  ::__time_stamp();
HXDLIN( 831)		Float elapsed1 = ((elapsed - ( (Float)(this->_inertia->__Field(HX_("timestamp",d6,d4,ce,a5),::hx::paccDynamic)) )) * ( (Float)(1000) ));
HXLINE( 833)		bool finishedX = false;
HXLINE( 834)		if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x != 0)) {
HXLINE( 835)			Float deltaX = (-(( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x) * ::Math_obj::exp((-(elapsed1) / ( (Float)(325) ))));
HXLINE( 836)			bool _hx_tmp;
HXDLIN( 836)			if (!((deltaX > ((Float)0.5)))) {
HXLINE( 836)				_hx_tmp = (deltaX < ((Float)-0.5));
            			}
            			else {
HXLINE( 836)				_hx_tmp = true;
            			}
HXDLIN( 836)			if (_hx_tmp) {
HXLINE( 837)				Float oldPos = this->_scrollview->get_hscrollPos();
HXLINE( 838)				Float newPos = ( (Float)(0) );
HXLINE( 839)				if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->x == 0)) {
HXLINE( 840)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x - deltaX);
            				}
            				else {
HXLINE( 842)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x + deltaX);
            				}
HXLINE( 844)				if ((newPos < 0)) {
HXLINE( 845)					newPos = ( (Float)(0) );
            				}
            				else {
HXLINE( 846)					if ((newPos > this->_scrollview->get_hscrollMax())) {
HXLINE( 847)						newPos = this->_scrollview->get_hscrollMax();
            					}
            				}
HXLINE( 849)				this->_scrollview->set_hscrollPos(newPos);
HXLINE( 850)				bool finishedX1;
HXDLIN( 850)				if ((newPos != oldPos)) {
HXLINE( 850)					finishedX1 = (newPos == 0);
            				}
            				else {
HXLINE( 850)					finishedX1 = true;
            				}
HXDLIN( 850)				if (!(finishedX1)) {
HXLINE( 850)					finishedX = (newPos == this->_scrollview->get_hscrollMax());
            				}
            				else {
HXLINE( 850)					finishedX = true;
            				}
            			}
            			else {
HXLINE( 852)				finishedX = true;
            			}
            		}
            		else {
HXLINE( 855)			finishedX = true;
            		}
HXLINE( 858)		bool finishedY = false;
HXLINE( 859)		if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y != 0)) {
HXLINE( 860)			Float deltaY = (-(( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y) * ::Math_obj::exp((-(elapsed1) / ( (Float)(325) ))));
HXLINE( 861)			bool _hx_tmp;
HXDLIN( 861)			if (!((deltaY > ((Float)0.5)))) {
HXLINE( 861)				_hx_tmp = (deltaY < ((Float)-0.5));
            			}
            			else {
HXLINE( 861)				_hx_tmp = true;
            			}
HXDLIN( 861)			if (_hx_tmp) {
HXLINE( 862)				Float oldPos = this->_scrollview->get_vscrollPos();
HXLINE( 863)				Float newPos = ( (Float)(0) );
HXLINE( 864)				if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->y == 0)) {
HXLINE( 865)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y - deltaY);
            				}
            				else {
HXLINE( 867)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y + deltaY);
            				}
HXLINE( 869)				if ((newPos < 0)) {
HXLINE( 870)					newPos = ( (Float)(0) );
            				}
            				else {
HXLINE( 871)					if ((newPos > this->_scrollview->get_vscrollMax())) {
HXLINE( 872)						newPos = this->_scrollview->get_vscrollMax();
            					}
            				}
HXLINE( 874)				this->_scrollview->set_vscrollPos(newPos);
HXLINE( 875)				bool finishedY1;
HXDLIN( 875)				if ((newPos != oldPos)) {
HXLINE( 875)					finishedY1 = (newPos == 0);
            				}
            				else {
HXLINE( 875)					finishedY1 = true;
            				}
HXDLIN( 875)				if (!(finishedY1)) {
HXLINE( 875)					finishedY = (newPos == this->_scrollview->get_vscrollMax());
            				}
            				else {
HXLINE( 875)					finishedY = true;
            				}
            			}
            			else {
HXLINE( 877)				finishedY = true;
            			}
            		}
            		else {
HXLINE( 880)			finishedY = true;
            		}
HXLINE( 883)		bool _hx_tmp;
HXDLIN( 883)		if ((finishedX == true)) {
HXLINE( 883)			_hx_tmp = (finishedY == true);
            		}
            		else {
HXLINE( 883)			_hx_tmp = false;
            		}
HXDLIN( 883)		if (_hx_tmp) {
HXLINE( 884)			this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
HXLINE( 885)			::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
            		}
            		else {
HXLINE( 887)			::haxe::ui::Toolkit_obj::callLater(this->inertialScroll_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,inertialScroll,(void))

void ScrollViewEvents_obj::onMouseWheel( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_893_onMouseWheel)
HXDLIN( 893)		 ::haxe::ui::containers::ScrollViewEvents _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 898)		::hx::Class primaryType = ::hx::ClassOf< ::haxe::ui::components::VerticalScroll >();
HXLINE( 899)		::hx::Class secondaryType = ::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >();
HXLINE( 900)		if (event->shiftKey) {
HXLINE( 901)			primaryType = ::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >();
HXLINE( 902)			secondaryType = ::hx::ClassOf< ::haxe::ui::components::VerticalScroll >();
            		}
HXLINE( 904)		::Array< ::Dynamic> scroll = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->_scrollview->findComponent(null(),primaryType,false,null()).StaticCast<  ::haxe::ui::components::Scroll >());
HXLINE( 905)		if (::hx::IsNull( scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >() )) {
HXLINE( 906)			scroll[0] = this->_scrollview->findComponent(null(),secondaryType,false,null()).StaticCast<  ::haxe::ui::components::Scroll >();
            		}
HXLINE( 908)		if (::hx::IsNotNull( scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >() )) {
HXLINE( 909)			bool _hx_tmp;
HXDLIN( 909)			if ((this->_scrollview->get_autoHideScrolls() == true)) {
HXLINE( 909)				_hx_tmp = ::hx::IsNull( this->_fadeTimer );
            			}
            			else {
HXLINE( 909)				_hx_tmp = false;
            			}
HXDLIN( 909)			if (_hx_tmp) {
HXLINE( 910)				scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->fadeIn(null(),null());
            			}
HXLINE( 912)			event->cancel();
HXLINE( 913)			int amount = 50;
HXLINE( 917)			if ((event->delta > 0)) {
HXLINE( 918)				 ::haxe::ui::components::Scroll scroll1 = scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >();
HXDLIN( 918)				scroll1->set_pos((scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->get_pos() - ( (Float)(amount) )));
            			}
            			else {
HXLINE( 919)				if ((event->delta < 0)) {
HXLINE( 920)					 ::haxe::ui::components::Scroll scroll1 = scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >();
HXDLIN( 920)					scroll1->set_pos((scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->get_pos() + amount));
            				}
            			}
HXLINE( 922)			if ((this->_scrollview->get_autoHideScrolls() == true)) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::ScrollViewEvents,_gthis,::Array< ::Dynamic>,scroll) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_253fa99b051b5118_927_onMouseWheel)
HXLINE( 928)					scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->fadeOut(null(),null());
HXLINE( 929)					_gthis->_fadeTimer->stop();
HXLINE( 930)					_gthis->_fadeTimer = null();
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 923)				if (::hx::IsNotNull( this->_fadeTimer )) {
HXLINE( 924)					this->_fadeTimer->stop();
HXLINE( 925)					this->_fadeTimer = null();
            				}
HXLINE( 927)				this->_fadeTimer =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,300, ::Dynamic(new _hx_Closure_0(_gthis,scroll)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseWheel,(void))

void ScrollViewEvents_obj::onActionStart( ::haxe::ui::events::ActionEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_937_onActionStart)
HXDLIN( 937)		::String _hx_switch_0 = event->action;
            		if (  (_hx_switch_0==HX_("actionDown",38,73,b4,4d)) ){
HXLINE( 939)			 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN( 939)			fh->set_vscrollPos((fh->get_vscrollPos() + 1));
HXLINE( 940)			event->repeater = true;
HXLINE( 938)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("actionLeft",dd,82,f6,52)) ){
HXLINE( 945)			 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN( 945)			fh->set_hscrollPos((fh->get_hscrollPos() - ( (Float)(1) )));
HXLINE( 946)			event->repeater = true;
HXLINE( 944)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("actionRight",46,0c,c9,bb)) ){
HXLINE( 948)			 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN( 948)			fh->set_hscrollPos((fh->get_hscrollPos() + 1));
HXLINE( 949)			event->repeater = true;
HXLINE( 947)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("actionUp",b1,5f,15,e1)) ){
HXLINE( 942)			 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN( 942)			fh->set_vscrollPos((fh->get_vscrollPos() - ( (Float)(1) )));
HXLINE( 943)			event->repeater = true;
HXLINE( 941)			goto _hx_goto_19;
            		}
            		/* default */{
            		}
            		_hx_goto_19:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onActionStart,(void))

int ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT;


::hx::ObjectPtr< ScrollViewEvents_obj > ScrollViewEvents_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< ScrollViewEvents_obj > __this = new ScrollViewEvents_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< ScrollViewEvents_obj > ScrollViewEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	ScrollViewEvents_obj *__this = (ScrollViewEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewEvents_obj), true, "haxe.ui.containers.ScrollViewEvents"));
	*(void **)__this = ScrollViewEvents_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

ScrollViewEvents_obj::ScrollViewEvents_obj()
{
}

void ScrollViewEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollViewEvents);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	HX_MARK_MEMBER_NAME(_offset,"_offset");
	HX_MARK_MEMBER_NAME(_inertia,"_inertia");
	HX_MARK_MEMBER_NAME(_movementThreshold,"_movementThreshold");
	HX_MARK_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_MARK_MEMBER_NAME(_containerEventsPaused,"_containerEventsPaused");
	HX_MARK_MEMBER_NAME(_fadeTimer,"_fadeTimer");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollViewEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	HX_VISIT_MEMBER_NAME(_offset,"_offset");
	HX_VISIT_MEMBER_NAME(_inertia,"_inertia");
	HX_VISIT_MEMBER_NAME(_movementThreshold,"_movementThreshold");
	HX_VISIT_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_VISIT_MEMBER_NAME(_containerEventsPaused,"_containerEventsPaused");
	HX_VISIT_MEMBER_NAME(_fadeTimer,"_fadeTimer");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollViewEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onShown") ) { return ::hx::Val( onShown_dyn() ); }
		if (HX_FIELD_EQ(inName,"_offset") ) { return ::hx::Val( _offset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"_inertia") ) { return ::hx::Val( _inertia ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onHScroll") ) { return ::hx::Val( onHScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onVScroll") ) { return ::hx::Val( onVScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		if (HX_FIELD_EQ(inName,"_fadeTimer") ) { return ::hx::Val( _fadeTimer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { return ::hx::Val( _scrollview ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return ::hx::Val( onMouseMove_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { return ::hx::Val( _lastMousePos ); }
		if (HX_FIELD_EQ(inName,"onActionStart") ) { return ::hx::Val( onActionStart_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inertialScroll") ) { return ::hx::Val( inertialScroll_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onHScrollScroll") ) { return ::hx::Val( onHScrollScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onVScrollScroll") ) { return ::hx::Val( onVScrollScroll_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContentsResized") ) { return ::hx::Val( onContentsResized_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_movementThreshold") ) { return ::hx::Val( _movementThreshold ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pauseContainerEvents") ) { return ::hx::Val( pauseContainerEvents_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resumeContainerEvents") ) { return ::hx::Val( resumeContainerEvents_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_containerEventsPaused") ) { return ::hx::Val( _containerEventsPaused ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"onContainerEventsStatusChanged") ) { return ::hx::Val( onContainerEventsStatusChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollViewEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_offset") ) { _offset=inValue.Cast<  ::haxe::ui::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_inertia") ) { _inertia=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fadeTimer") ) { _fadeTimer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { _lastMousePos=inValue.Cast<  ::haxe::ui::geom::Point >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_movementThreshold") ) { _movementThreshold=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_containerEventsPaused") ) { _containerEventsPaused=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollViewEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	outFields->push(HX_("_offset",32,a9,b6,ce));
	outFields->push(HX_("_inertia",7b,0a,73,b6));
	outFields->push(HX_("_movementThreshold",3d,25,68,68));
	outFields->push(HX_("_lastMousePos",c4,43,1f,e8));
	outFields->push(HX_("_containerEventsPaused",c9,94,8f,05));
	outFields->push(HX_("_fadeTimer",6a,94,c0,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollViewEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(ScrollViewEvents_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{::hx::fsObject /*  ::haxe::ui::geom::Point */ ,(int)offsetof(ScrollViewEvents_obj,_offset),HX_("_offset",32,a9,b6,ce)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScrollViewEvents_obj,_inertia),HX_("_inertia",7b,0a,73,b6)},
	{::hx::fsInt,(int)offsetof(ScrollViewEvents_obj,_movementThreshold),HX_("_movementThreshold",3d,25,68,68)},
	{::hx::fsObject /*  ::haxe::ui::geom::Point */ ,(int)offsetof(ScrollViewEvents_obj,_lastMousePos),HX_("_lastMousePos",c4,43,1f,e8)},
	{::hx::fsBool,(int)offsetof(ScrollViewEvents_obj,_containerEventsPaused),HX_("_containerEventsPaused",c9,94,8f,05)},
	{::hx::fsObject /*  ::haxe::ui::util::Timer */ ,(int)offsetof(ScrollViewEvents_obj,_fadeTimer),HX_("_fadeTimer",6a,94,c0,57)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ScrollViewEvents_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT,HX_("INERTIAL_TIME_CONSTANT",09,a9,df,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ScrollViewEvents_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onShown",32,27,65,12),
	HX_("onContentsResized",97,77,70,78),
	HX_("onHScroll",36,43,5c,38),
	HX_("onHScrollScroll",e3,db,f0,44),
	HX_("onVScroll",c4,c1,88,7e),
	HX_("onVScrollScroll",f1,b8,77,15),
	HX_("_offset",32,a9,b6,ce),
	HX_("_inertia",7b,0a,73,b6),
	HX_("onMouseDown",08,94,05,11),
	HX_("_movementThreshold",3d,25,68,68),
	HX_("_lastMousePos",c4,43,1f,e8),
	HX_("onMouseMove",b7,7e,f8,16),
	HX_("_containerEventsPaused",c9,94,8f,05),
	HX_("pauseContainerEvents",e4,94,a7,e8),
	HX_("resumeContainerEvents",0d,a8,dc,e9),
	HX_("onContainerEventsStatusChanged",07,de,a0,19),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("inertialScroll",df,27,46,7f),
	HX_("_fadeTimer",6a,94,c0,57),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("onActionStart",ed,91,5a,b9),
	::String(null()) };

static void ScrollViewEvents_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT,"INERTIAL_TIME_CONSTANT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollViewEvents_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT,"INERTIAL_TIME_CONSTANT");
};

#endif

::hx::Class ScrollViewEvents_obj::__mClass;

static ::String ScrollViewEvents_obj_sStaticFields[] = {
	HX_("INERTIAL_TIME_CONSTANT",09,a9,df,c0),
	::String(null())
};

void ScrollViewEvents_obj::__register()
{
	ScrollViewEvents_obj _hx_dummy;
	ScrollViewEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.ScrollViewEvents",f5,7b,7f,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScrollViewEvents_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ScrollViewEvents_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollViewEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollViewEvents_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollViewEvents_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScrollViewEvents_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_611_boot)
HXDLIN( 611)		INERTIAL_TIME_CONSTANT = 325;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
