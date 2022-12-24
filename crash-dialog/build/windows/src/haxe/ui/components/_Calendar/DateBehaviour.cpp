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
#ifndef INCLUDED_haxe_ui_components_Calendar
#include <haxe/ui/components/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CalendarEvent
#include <haxe/ui/components/CalendarEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_DateBehaviour
#include <haxe/ui/components/_Calendar/DateBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_DateUtils
#include <haxe/ui/components/_Calendar/DateUtils.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9363510bf9ba88ef_129_new,"haxe.ui.components._Calendar.DateBehaviour","new",0x7b1c114a,"haxe.ui.components._Calendar.DateBehaviour.new","haxe/ui/components/Calendar.hx",129,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_9363510bf9ba88ef_130_validateData,"haxe.ui.components._Calendar.DateBehaviour","validateData",0xe4a4a7b6,"haxe.ui.components._Calendar.DateBehaviour.validateData","haxe/ui/components/Calendar.hx",130,0xa4f8a419)
namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{

void DateBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_9363510bf9ba88ef_129_new)
HXDLIN( 129)		super::__construct(component);
            	}

Dynamic DateBehaviour_obj::__CreateEmpty() { return new DateBehaviour_obj; }

void *DateBehaviour_obj::_hx_vtable = 0;

Dynamic DateBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DateBehaviour_obj > _hx_result = new DateBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DateBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x14d37e42) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x14d37e42;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void DateBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_9363510bf9ba88ef_130_validateData)
HXLINE( 131)		 ::Date date = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDate(this->_value);
HXLINE( 133)		if (::hx::IsNull( date )) {
HXLINE( 134)			return;
            		}
HXLINE( 137)		int year = date->getFullYear();
HXLINE( 138)		int month = date->getMonth();
HXLINE( 140)		int startDay =  ::Date_obj::__alloc( HX_CTX ,year,month,1,0,0,0)->getDay();
HXLINE( 141)		int endDay = ::haxe::ui::components::_Calendar::DateUtils_obj::getEndDay(month,year);
HXLINE( 143)		{
HXLINE( 143)			int _g = 0;
HXDLIN( 143)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 143)			::Array< ::Dynamic> _g1;
HXDLIN( 143)			if (::hx::IsNull( _this->_children )) {
HXLINE( 143)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 143)				_g1 = _this->_children;
            			}
HXDLIN( 143)			while((_g < _g1->length)){
HXLINE( 143)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 143)				_g = (_g + 1);
HXLINE( 144)				child->set_opacity(((Float).3));
HXLINE( 145)				child->removeClass(HX_("calendar-off-day",6f,a3,e0,3a),null(),null());
HXLINE( 146)				child->removeClass(HX_("calendar-day",0d,66,5d,f6),null(),null());
HXLINE( 147)				child->removeClass(HX_("calendar-day-selected",db,8f,6a,0b),null(),null());
HXLINE( 148)				child->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            			}
            		}
HXLINE( 151)		 ::Date prevMonth = ::haxe::ui::components::_Calendar::DateUtils_obj::previousMonth(date);
HXLINE( 152)		int last = prevMonth->getMonth();
HXDLIN( 152)		int last1 = ::haxe::ui::components::_Calendar::DateUtils_obj::getEndDay(last,prevMonth->getFullYear());
HXLINE( 154)		int n = (startDay - 1);
HXLINE( 155)		{
HXLINE( 155)			int _g2 = 0;
HXDLIN( 155)			int _g3 = startDay;
HXDLIN( 155)			while((_g2 < _g3)){
HXLINE( 155)				_g2 = (_g2 + 1);
HXDLIN( 155)				int _ = (_g2 - 1);
HXLINE( 156)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 156)				::Array< ::Dynamic> item;
HXDLIN( 156)				if (::hx::IsNull( _this->_children )) {
HXLINE( 156)					item = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 156)					item = _this->_children;
            				}
HXDLIN( 156)				 ::haxe::ui::core::Component item1 = item->__get(n).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 157)				item1->addClass(HX_("calendar-off-day",6f,a3,e0,3a),null(),null());
HXLINE( 158)				n = (n - 1);
HXLINE( 159)				item1->set_text((HX_("",00,00,00,00) + last1));
HXLINE( 160)				last1 = (last1 - 1);
            			}
            		}
HXLINE( 163)		 ::Date selectedDate = ::hx::TCast<  ::haxe::ui::components::Calendar >::cast(this->_component)->get_selectedDate();
HXLINE( 164)		if (::hx::IsNull( selectedDate )) {
HXLINE( 165)			selectedDate = ::Date_obj::now();
            		}
HXLINE( 168)		{
HXLINE( 168)			int _g4 = 0;
HXDLIN( 168)			int _g5 = endDay;
HXDLIN( 168)			while((_g4 < _g5)){
HXLINE( 168)				_g4 = (_g4 + 1);
HXDLIN( 168)				int i = (_g4 - 1);
HXLINE( 169)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 169)				::Array< ::Dynamic> item;
HXDLIN( 169)				if (::hx::IsNull( _this->_children )) {
HXLINE( 169)					item = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 169)					item = _this->_children;
            				}
HXDLIN( 169)				 ::haxe::ui::core::Component item1 = item->__get((i + startDay)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 170)				item1->addClass(HX_("calendar-day",0d,66,5d,f6),null(),null());
HXLINE( 171)				item1->set_opacity(1);
HXLINE( 172)				item1->set_hidden(false);
HXLINE( 173)				item1->set_text((HX_("",00,00,00,00) + (i + 1)));
HXLINE( 174)				bool _hx_tmp;
HXDLIN( 174)				bool _hx_tmp1;
HXDLIN( 174)				if (((i + 1) == selectedDate->getDate())) {
HXLINE( 174)					_hx_tmp1 = (month == selectedDate->getMonth());
            				}
            				else {
HXLINE( 174)					_hx_tmp1 = false;
            				}
HXDLIN( 174)				if (_hx_tmp1) {
HXLINE( 174)					_hx_tmp = (year == selectedDate->getFullYear());
            				}
            				else {
HXLINE( 174)					_hx_tmp = false;
            				}
HXDLIN( 174)				if (_hx_tmp) {
HXLINE( 175)					item1->addClass(HX_("calendar-day-selected",db,8f,6a,0b),null(),null());
            				}
HXLINE( 178)				last1 = (i + startDay);
            			}
            		}
HXLINE( 181)		last1 = (last1 + 1);
HXLINE( 182)		int n1 = 0;
HXLINE( 183)		{
HXLINE( 183)			int _g6 = last1;
HXDLIN( 183)			 ::haxe::ui::core::Component _this1 = this->_component;
HXDLIN( 183)			::Array< ::Dynamic> _g7;
HXDLIN( 183)			if (::hx::IsNull( _this1->_children )) {
HXLINE( 183)				_g7 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 183)				_g7 = _this1->_children;
            			}
HXDLIN( 183)			int _g8 = _g7->length;
HXDLIN( 183)			while((_g6 < _g8)){
HXLINE( 183)				_g6 = (_g6 + 1);
HXDLIN( 183)				int i = (_g6 - 1);
HXLINE( 184)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 184)				::Array< ::Dynamic> item;
HXDLIN( 184)				if (::hx::IsNull( _this->_children )) {
HXLINE( 184)					item = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 184)					item = _this->_children;
            				}
HXDLIN( 184)				 ::haxe::ui::core::Component item1 = item->__get(i).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 185)				item1->addClass(HX_("calendar-off-day",6f,a3,e0,3a),null(),null());
HXLINE( 186)				item1->set_text((HX_("",00,00,00,00) + (n1 + 1)));
HXLINE( 187)				n1 = (n1 + 1);
            			}
            		}
HXLINE( 190)		this->_component->registerInternalEvents(null(),true);
HXLINE( 192)		 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN( 192)		_hx_tmp->dispatch( ::haxe::ui::components::CalendarEvent_obj::__alloc( HX_CTX ,HX_("datechange",1e,be,d5,14),null(),null()));
            	}



::hx::ObjectPtr< DateBehaviour_obj > DateBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DateBehaviour_obj > __this = new DateBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DateBehaviour_obj > DateBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DateBehaviour_obj *__this = (DateBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DateBehaviour_obj), true, "haxe.ui.components._Calendar.DateBehaviour"));
	*(void **)__this = DateBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DateBehaviour_obj::DateBehaviour_obj()
{
}

::hx::Val DateBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DateBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DateBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DateBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class DateBehaviour_obj::__mClass;

void DateBehaviour_obj::__register()
{
	DateBehaviour_obj _hx_dummy;
	DateBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Calendar.DateBehaviour",58,64,9b,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DateBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DateBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DateBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DateBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Calendar
