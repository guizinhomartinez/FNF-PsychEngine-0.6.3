#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Calendar
#include <haxe/ui/components/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CalendarEvent
#include <haxe/ui/components/CalendarEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Stepper
#include <haxe/ui/components/Stepper.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_CalendarView
#include <haxe/ui/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__CalendarView_Events
#include <haxe/ui/containers/_CalendarView/Events.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_251a7e8f2a3703a7_40_new,"haxe.ui.containers._CalendarView.Events","new",0xd06da661,"haxe.ui.containers._CalendarView.Events.new","haxe/ui/containers/CalendarView.hx",40,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_251a7e8f2a3703a7_41_register,"haxe.ui.containers._CalendarView.Events","register",0xcb796cc2,"haxe.ui.containers._CalendarView.Events.register","haxe/ui/containers/CalendarView.hx",41,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_251a7e8f2a3703a7_69_onPrevMonth,"haxe.ui.containers._CalendarView.Events","onPrevMonth",0xcbca892f,"haxe.ui.containers._CalendarView.Events.onPrevMonth","haxe/ui/containers/CalendarView.hx",69,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_251a7e8f2a3703a7_73_onNextMonth,"haxe.ui.containers._CalendarView.Events","onNextMonth",0x87b9032f,"haxe.ui.containers._CalendarView.Events.onNextMonth","haxe/ui/containers/CalendarView.hx",73,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_251a7e8f2a3703a7_76_onYearChange,"haxe.ui.containers._CalendarView.Events","onYearChange",0xf6adbeeb,"haxe.ui.containers._CalendarView.Events.onYearChange","haxe/ui/containers/CalendarView.hx",76,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_251a7e8f2a3703a7_86_onDateChange,"haxe.ui.containers._CalendarView.Events","onDateChange",0x06f3b61c,"haxe.ui.containers._CalendarView.Events.onDateChange","haxe/ui/containers/CalendarView.hx",86,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_251a7e8f2a3703a7_92_onCalendarChange,"haxe.ui.containers._CalendarView.Events","onCalendarChange",0x7574d1ac,"haxe.ui.containers._CalendarView.Events.onCalendarChange","haxe/ui/containers/CalendarView.hx",92,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_251a7e8f2a3703a7_100_onMouseWheel,"haxe.ui.containers._CalendarView.Events","onMouseWheel",0xa510ac14,"haxe.ui.containers._CalendarView.Events.onMouseWheel","haxe/ui/containers/CalendarView.hx",100,0x20b6d730)
namespace haxe{
namespace ui{
namespace containers{
namespace _CalendarView{

void Events_obj::__construct( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_251a7e8f2a3703a7_40_new)
HXDLIN(  40)		super::__construct(target);
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
		return inClassId==(int)0x13e8892f;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_251a7e8f2a3703a7_41_register)
HXLINE(  42)		 ::haxe::ui::components::Button button = this->_target->findComponent(HX_("prev-month",26,fb,4f,d6),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		if (::hx::IsNotNull( button )) {
HXLINE(  43)			_hx_tmp = (button->hasEvent(HX_("click",48,7c,5e,48),null()) == false);
            		}
            		else {
HXLINE(  43)			_hx_tmp = false;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  44)			button->registerEvent(HX_("click",48,7c,5e,48),this->onPrevMonth_dyn(),null());
            		}
HXLINE(  47)		 ::haxe::ui::components::Button button1 = this->_target->findComponent(HX_("next-month",26,41,0c,8b),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  48)		bool _hx_tmp1;
HXDLIN(  48)		if (::hx::IsNotNull( button1 )) {
HXLINE(  48)			_hx_tmp1 = (button1->hasEvent(HX_("click",48,7c,5e,48),null()) == false);
            		}
            		else {
HXLINE(  48)			_hx_tmp1 = false;
            		}
HXDLIN(  48)		if (_hx_tmp1) {
HXLINE(  49)			button1->registerEvent(HX_("click",48,7c,5e,48),this->onNextMonth_dyn(),null());
            		}
HXLINE(  52)		 ::haxe::ui::components::Stepper stepper = this->_target->findComponent(HX_("current-year",91,59,2e,ed),null(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE(  53)		bool _hx_tmp2;
HXDLIN(  53)		if (::hx::IsNotNull( stepper )) {
HXLINE(  53)			_hx_tmp2 = (stepper->hasEvent(HX_("change",70,91,72,b7),null()) == false);
            		}
            		else {
HXLINE(  53)			_hx_tmp2 = false;
            		}
HXDLIN(  53)		if (_hx_tmp2) {
HXLINE(  54)			stepper->registerEvent(HX_("change",70,91,72,b7),this->onYearChange_dyn(),null());
            		}
HXLINE(  57)		if ((this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >()->hasEvent(HX_("datechange",1e,be,d5,14),this->onDateChange_dyn()) == false)) {
HXLINE(  58)			this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >()->registerEvent(HX_("datechange",1e,be,d5,14),this->onDateChange_dyn(),null());
            		}
HXLINE(  61)		if ((this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >()->hasEvent(HX_("change",70,91,72,b7),this->onCalendarChange_dyn()) == false)) {
HXLINE(  62)			this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >()->registerEvent(HX_("change",70,91,72,b7),this->onCalendarChange_dyn(),null());
            		}
HXLINE(  65)		this->registerEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn(),null());
            	}


void Events_obj::onPrevMonth( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_251a7e8f2a3703a7_69_onPrevMonth)
HXDLIN(  69)		this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >()->previousMonth();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onPrevMonth,(void))

void Events_obj::onNextMonth( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_251a7e8f2a3703a7_73_onNextMonth)
HXDLIN(  73)		this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >()->nextMonth();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onNextMonth,(void))

void Events_obj::onYearChange( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_251a7e8f2a3703a7_76_onYearChange)
HXLINE(  77)		 ::haxe::ui::components::Calendar calendar = this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >();
HXLINE(  78)		 ::haxe::ui::components::Stepper stepper = this->_target->findComponent(HX_("current-year",91,59,2e,ed),null(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE(  79)		Float _hx_tmp = stepper->get_pos();
HXDLIN(  79)		if ((_hx_tmp > calendar->get_date()->getFullYear())) {
HXLINE(  80)			calendar->nextYear();
            		}
            		else {
HXLINE(  81)			Float _hx_tmp = stepper->get_pos();
HXDLIN(  81)			if ((_hx_tmp < calendar->get_date()->getFullYear())) {
HXLINE(  82)				calendar->previousYear();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onYearChange,(void))

void Events_obj::onDateChange( ::haxe::ui::components::CalendarEvent event){
            	HX_STACKFRAME(&_hx_pos_251a7e8f2a3703a7_86_onDateChange)
HXLINE(  87)		 ::haxe::ui::components::Calendar calendar = this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >();
HXLINE(  88)		::String monthName = ::haxe::ui::containers::CalendarView_obj::MONTH_NAMES->__get(calendar->get_date()->getMonth());
HXLINE(  89)		 ::haxe::ui::components::Label _hx_tmp = this->_target->findComponent(HX_("current-month",ec,10,37,b9),::hx::ClassOf< ::haxe::ui::components::Label >(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXDLIN(  89)		_hx_tmp->set_text(((monthName + HX_("  ",00,1c,00,00)) + calendar->get_date()->getFullYear()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onDateChange,(void))

void Events_obj::onCalendarChange( ::haxe::ui::components::CalendarEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_251a7e8f2a3703a7_92_onCalendarChange)
HXLINE(  93)		 ::haxe::ui::components::Calendar calendar = this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >();
HXLINE(  94)		 ::haxe::ui::components::Stepper stepper = this->_target->findComponent(HX_("current-year",91,59,2e,ed),null(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE(  95)		stepper->set_pos(( (Float)(calendar->get_selectedDate()->getFullYear()) ));
HXLINE(  96)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN(  96)		_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onCalendarChange,(void))

void Events_obj::onMouseWheel( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_251a7e8f2a3703a7_100_onMouseWheel)
HXDLIN( 100)		if ((event->delta >= 1)) {
HXLINE( 101)			this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >()->nextMonth();
            		}
            		else {
HXLINE( 103)			this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >()->previousMonth();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseWheel,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::core::Component target) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component target) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.containers._CalendarView.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

Events_obj::Events_obj()
{
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onPrevMonth") ) { return ::hx::Val( onPrevMonth_dyn() ); }
		if (HX_FIELD_EQ(inName,"onNextMonth") ) { return ::hx::Val( onNextMonth_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onYearChange") ) { return ::hx::Val( onYearChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDateChange") ) { return ::hx::Val( onDateChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onCalendarChange") ) { return ::hx::Val( onCalendarChange_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Events_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("register",63,a6,9f,d0),
	HX_("onPrevMonth",2e,4a,f9,19),
	HX_("onNextMonth",2e,c4,e7,d5),
	HX_("onYearChange",0c,dd,67,11),
	HX_("onDateChange",3d,d4,ad,21),
	HX_("onCalendarChange",4d,14,cf,7a),
	HX_("onMouseWheel",35,ca,ca,bf),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._CalendarView.Events",ef,e1,68,98);
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
} // end namespace containers
} // end namespace _CalendarView
