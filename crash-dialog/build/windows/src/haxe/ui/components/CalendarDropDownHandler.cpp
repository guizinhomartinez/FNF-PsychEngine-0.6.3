#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CalendarDropDownHandler
#include <haxe/ui/components/CalendarDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownEvents
#include <haxe/ui/components/DropDownEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownHandler
#include <haxe/ui/components/DropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_CalendarView
#include <haxe/ui/containers/CalendarView.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
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
#ifndef INCLUDED_haxe_ui_locale_Formats
#include <haxe/ui/locale/Formats.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a41105f6d2db613f_523_new,"haxe.ui.components.CalendarDropDownHandler","new",0xe8112607,"haxe.ui.components.CalendarDropDownHandler.new","haxe/ui/components/DropDown.hx",523,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_a41105f6d2db613f_526_get_component,"haxe.ui.components.CalendarDropDownHandler","get_component",0x916950fb,"haxe.ui.components.CalendarDropDownHandler.get_component","haxe/ui/components/DropDown.hx",526,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_a41105f6d2db613f_538_prepare,"haxe.ui.components.CalendarDropDownHandler","prepare",0x795446ae,"haxe.ui.components.CalendarDropDownHandler.prepare","haxe/ui/components/DropDown.hx",538,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_a41105f6d2db613f_557_get_selectedItem,"haxe.ui.components.CalendarDropDownHandler","get_selectedItem",0xacdbbf90,"haxe.ui.components.CalendarDropDownHandler.get_selectedItem","haxe/ui/components/DropDown.hx",557,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_a41105f6d2db613f_564_set_selectedItem,"haxe.ui.components.CalendarDropDownHandler","set_selectedItem",0x031dad04,"haxe.ui.components.CalendarDropDownHandler.set_selectedItem","haxe/ui/components/DropDown.hx",564,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_a41105f6d2db613f_591_onCalendarChange,"haxe.ui.components.CalendarDropDownHandler","onCalendarChange",0x4cb20246,"haxe.ui.components.CalendarDropDownHandler.onCalendarChange","haxe/ui/components/DropDown.hx",591,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_a41105f6d2db613f_601_applyDefault,"haxe.ui.components.CalendarDropDownHandler","applyDefault",0xbe35626c,"haxe.ui.components.CalendarDropDownHandler.applyDefault","haxe/ui/components/DropDown.hx",601,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{

void CalendarDropDownHandler_obj::__construct( ::haxe::ui::components::DropDown dropdown){
            	HX_STACKFRAME(&_hx_pos_a41105f6d2db613f_523_new)
HXLINE( 556)		this->_cachedSelectedDate = null();
HXLINE( 523)		super::__construct(dropdown);
            	}

Dynamic CalendarDropDownHandler_obj::__CreateEmpty() { return new CalendarDropDownHandler_obj; }

void *CalendarDropDownHandler_obj::_hx_vtable = 0;

Dynamic CalendarDropDownHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CalendarDropDownHandler_obj > _hx_result = new CalendarDropDownHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CalendarDropDownHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x184b9921) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x184b9921;
	} else {
		return inClassId==(int)0x236b4fcb;
	}
}

 ::haxe::ui::core::Component CalendarDropDownHandler_obj::get_component(){
            	HX_GC_STACKFRAME(&_hx_pos_a41105f6d2db613f_526_get_component)
HXLINE( 527)		if (::hx::IsNull( this->_calendar )) {
HXLINE( 528)			this->_calendar =  ::haxe::ui::containers::CalendarView_obj::__alloc( HX_CTX );
HXLINE( 529)			if (::hx::IsNotNull( this->_dropdown->get_id() )) {
HXLINE( 530)				 ::haxe::ui::containers::CalendarView _hx_tmp = this->_calendar;
HXDLIN( 530)				_hx_tmp->addClass((this->_dropdown->get_id() + HX_("-calendar",eb,d3,98,93)),null(),null());
HXLINE( 531)				 ::haxe::ui::containers::CalendarView _hx_tmp1 = this->_calendar;
HXDLIN( 531)				_hx_tmp1->set_id((this->_dropdown->get_id() + HX_("_calendar",1d,56,bf,c6)));
            			}
HXLINE( 533)			this->_calendar->registerEvent(HX_("change",70,91,72,b7),this->onCalendarChange_dyn(),null());
            		}
HXLINE( 535)		return this->_calendar;
            	}


void CalendarDropDownHandler_obj::prepare( ::haxe::ui::containers::Box wrapper){
            	HX_STACKFRAME(&_hx_pos_a41105f6d2db613f_538_prepare)
HXLINE( 539)		if (::hx::IsNotNull( this->_dropdown->get_dropdownWidth() )) {
HXLINE( 540)			 ::haxe::ui::containers::CalendarView _hx_tmp = this->_calendar;
HXDLIN( 540)			_hx_tmp->set_width(this->_dropdown->get_dropdownWidth());
            		}
HXLINE( 542)		if (::hx::IsNotNull( this->_dropdown->get_dropdownHeight() )) {
HXLINE( 543)			 ::haxe::ui::containers::CalendarView _hx_tmp = this->_calendar;
HXDLIN( 543)			_hx_tmp->set_height(this->_dropdown->get_dropdownHeight());
            		}
HXLINE( 546)		if (::hx::IsNotNull( this->_cachedSelectedDate )) {
HXLINE( 547)			this->_calendar->unregisterEvent(HX_("change",70,91,72,b7),this->onCalendarChange_dyn());
HXLINE( 548)			this->_calendar->set_selectedDate(this->_cachedSelectedDate);
HXLINE( 549)			this->_calendar->registerEvent(HX_("change",70,91,72,b7),this->onCalendarChange_dyn(),null());
            		}
HXLINE( 553)		this->_calendar->syncComponentValidation(null());
            	}


 ::Dynamic CalendarDropDownHandler_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_a41105f6d2db613f_557_get_selectedItem)
HXLINE( 558)		if (::hx::IsNull( this->_calendar )) {
HXLINE( 559)			return this->_cachedSelectedDate;
            		}
HXLINE( 561)		return this->_calendar->get_selectedDate();
            	}


 ::Dynamic CalendarDropDownHandler_obj::set_selectedItem( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_a41105f6d2db613f_564_set_selectedItem)
HXLINE( 565)		if (::hx::IsNull( value )) {
HXLINE( 566)			return value;
            		}
HXLINE( 569)		 ::Date date = null();
HXLINE( 570)		if (::Std_obj::isOfType(value,::hx::ClassOf< ::Date >())) {
HXLINE( 571)			date = ::hx::TCast<  ::Date >::cast(value);
            		}
            		else {
HXLINE( 573)			date = ::Date_obj::fromString(::Std_obj::string(value));
            		}
HXLINE( 576)		bool _hx_tmp;
HXDLIN( 576)		if (::hx::IsNotNull( this->_calendar )) {
HXLINE( 576)			_hx_tmp = ::hx::IsNotNull( date );
            		}
            		else {
HXLINE( 576)			_hx_tmp = false;
            		}
HXDLIN( 576)		if (_hx_tmp) {
HXLINE( 577)			::String _hx_tmp = date->toString();
HXDLIN( 577)			if ((_hx_tmp == this->_calendar->get_selectedDate()->toString())) {
HXLINE( 578)				 ::haxe::ui::components::DropDown _hx_tmp = this->_dropdown;
HXDLIN( 578)				_hx_tmp->set_text(::DateTools_obj::format(date,::haxe::ui::locale::Formats_obj::get_dateFormatShort()));
HXLINE( 579)				return value;
            			}
HXLINE( 581)			this->_cachedSelectedDate = date;
HXLINE( 582)			this->_calendar->set_selectedDate(date);
            		}
            		else {
HXLINE( 584)			if (::hx::IsNotNull( date )) {
HXLINE( 585)				this->_cachedSelectedDate = date;
HXLINE( 586)				 ::haxe::ui::components::DropDown _hx_tmp = this->_dropdown;
HXDLIN( 586)				 ::Date _hx_tmp1 = this->_cachedSelectedDate;
HXDLIN( 586)				_hx_tmp->set_text(::DateTools_obj::format(_hx_tmp1,::haxe::ui::locale::Formats_obj::get_dateFormatShort()));
            			}
            		}
HXLINE( 588)		return value;
            	}


void CalendarDropDownHandler_obj::onCalendarChange( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_a41105f6d2db613f_591_onCalendarChange)
HXLINE( 592)		if (::hx::IsNull( this->_calendar->get_selectedDate() )) {
HXLINE( 593)			return;
            		}
HXLINE( 595)		this->_cachedSelectedDate = this->_calendar->get_selectedDate();
HXLINE( 596)		 ::haxe::ui::components::DropDown _hx_tmp = this->_dropdown;
HXDLIN( 596)		 ::Date _hx_tmp1 = this->_calendar->get_selectedDate();
HXDLIN( 596)		_hx_tmp->set_text(::DateTools_obj::format(_hx_tmp1,::haxe::ui::locale::Formats_obj::get_dateFormatShort()));
HXLINE( 597)		::hx::TCast<  ::haxe::ui::components::DropDownEvents >::cast(this->_dropdown->_internalEvents)->hideDropDown();
HXLINE( 598)		 ::haxe::ui::components::DropDown _hx_tmp2 = this->_dropdown;
HXDLIN( 598)		_hx_tmp2->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),false,this->_calendar->get_selectedDate()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CalendarDropDownHandler_obj,onCalendarChange,(void))

void CalendarDropDownHandler_obj::applyDefault(){
            	HX_STACKFRAME(&_hx_pos_a41105f6d2db613f_601_applyDefault)
HXLINE( 602)		 ::Date now = ::Date_obj::now();
HXLINE( 603)		this->_dropdown->set_selectedItem(now);
            	}



::hx::ObjectPtr< CalendarDropDownHandler_obj > CalendarDropDownHandler_obj::__new( ::haxe::ui::components::DropDown dropdown) {
	::hx::ObjectPtr< CalendarDropDownHandler_obj > __this = new CalendarDropDownHandler_obj();
	__this->__construct(dropdown);
	return __this;
}

::hx::ObjectPtr< CalendarDropDownHandler_obj > CalendarDropDownHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown) {
	CalendarDropDownHandler_obj *__this = (CalendarDropDownHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CalendarDropDownHandler_obj), true, "haxe.ui.components.CalendarDropDownHandler"));
	*(void **)__this = CalendarDropDownHandler_obj::_hx_vtable;
	__this->__construct(dropdown);
	return __this;
}

CalendarDropDownHandler_obj::CalendarDropDownHandler_obj()
{
}

void CalendarDropDownHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CalendarDropDownHandler);
	HX_MARK_MEMBER_NAME(_calendar,"_calendar");
	HX_MARK_MEMBER_NAME(_cachedSelectedDate,"_cachedSelectedDate");
	 ::haxe::ui::components::DropDownHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CalendarDropDownHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_calendar,"_calendar");
	HX_VISIT_MEMBER_NAME(_cachedSelectedDate,"_cachedSelectedDate");
	 ::haxe::ui::components::DropDownHandler_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CalendarDropDownHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"prepare") ) { return ::hx::Val( prepare_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_calendar") ) { return ::hx::Val( _calendar ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyDefault") ) { return ::hx::Val( applyDefault_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_component") ) { return ::hx::Val( get_component_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return ::hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return ::hx::Val( set_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"onCalendarChange") ) { return ::hx::Val( onCalendarChange_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_cachedSelectedDate") ) { return ::hx::Val( _cachedSelectedDate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CalendarDropDownHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_calendar") ) { _calendar=inValue.Cast<  ::haxe::ui::containers::CalendarView >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_cachedSelectedDate") ) { _cachedSelectedDate=inValue.Cast<  ::Date >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CalendarDropDownHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_calendar",1d,56,bf,c6));
	outFields->push(HX_("_cachedSelectedDate",4a,f1,5d,d1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CalendarDropDownHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::CalendarView */ ,(int)offsetof(CalendarDropDownHandler_obj,_calendar),HX_("_calendar",1d,56,bf,c6)},
	{::hx::fsObject /*  ::Date */ ,(int)offsetof(CalendarDropDownHandler_obj,_cachedSelectedDate),HX_("_cachedSelectedDate",4a,f1,5d,d1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CalendarDropDownHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String CalendarDropDownHandler_obj_sMemberFields[] = {
	HX_("_calendar",1d,56,bf,c6),
	HX_("get_component",94,c4,b7,d0),
	HX_("prepare",87,91,dd,37),
	HX_("_cachedSelectedDate",4a,f1,5d,d1),
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("set_selectedItem",0b,bf,3a,31),
	HX_("onCalendarChange",4d,14,cf,7a),
	HX_("applyDefault",f3,24,31,db),
	::String(null()) };

::hx::Class CalendarDropDownHandler_obj::__mClass;

void CalendarDropDownHandler_obj::__register()
{
	CalendarDropDownHandler_obj _hx_dummy;
	CalendarDropDownHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.CalendarDropDownHandler",95,16,de,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CalendarDropDownHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CalendarDropDownHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CalendarDropDownHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CalendarDropDownHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
