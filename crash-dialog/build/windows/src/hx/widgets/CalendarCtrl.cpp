#include <hxcpp.h>

#ifndef INCLUDED_07569a2300d4747d
#define INCLUDED_07569a2300d4747d
#include "wx/calctrl.h"
#endif
#ifndef INCLUDED_726167ffe15171fc
#define INCLUDED_726167ffe15171fc
#include "wx/datetime.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_294d21b4f4570a69
#define INCLUDED_294d21b4f4570a69
#include "wx/longlong.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_hx_widgets_CalendarCtrl
#include <hx/widgets/CalendarCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_56320fd73192267f_9_new,"hx.widgets.CalendarCtrl","new",0xb6c87858,"hx.widgets.CalendarCtrl.new","hx/widgets/CalendarCtrl.hx",9,0xe027e356)
HX_LOCAL_STACK_FRAME(_hx_pos_56320fd73192267f_23_get_date,"hx.widgets.CalendarCtrl","get_date",0xe8ed86bf,"hx.widgets.CalendarCtrl.get_date","hx/widgets/CalendarCtrl.hx",23,0xe027e356)
HX_LOCAL_STACK_FRAME(_hx_pos_56320fd73192267f_29_set_date,"hx.widgets.CalendarCtrl","set_date",0x974ae033,"hx.widgets.CalendarCtrl.set_date","hx/widgets/CalendarCtrl.hx",29,0xe027e356)
HX_LOCAL_STACK_FRAME(_hx_pos_56320fd73192267f_41_get_calendarCtrlRef,"hx.widgets.CalendarCtrl","get_calendarCtrlRef",0x23d3a959,"hx.widgets.CalendarCtrl.get_calendarCtrlRef","hx/widgets/CalendarCtrl.hx",41,0xe027e356)
namespace hx{
namespace widgets{

void CalendarCtrl_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_56320fd73192267f_9_new)
HXLINE(  10)		if (::hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxCalendarCtrl()))->reinterpret();
HXLINE(  12)			 wxDateTime dt = wxDateTime::Now();
HXLINE(  13)			 wxCalendarCtrl * _hx_tmp = this->get_calendarCtrlRef()->ptr;
HXDLIN(  13)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  13)			 wxDateTime dt1 = dt;
HXDLIN(  13)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  13)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  13)			(*(_hx_tmp)).Create(_hx_tmp1,id,dt1,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  16)		super::__construct(parent,id,null());
            	}

Dynamic CalendarCtrl_obj::__CreateEmpty() { return new CalendarCtrl_obj; }

void *CalendarCtrl_obj::_hx_vtable = 0;

Dynamic CalendarCtrl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CalendarCtrl_obj > _hx_result = new CalendarCtrl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CalendarCtrl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x45d97564) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x45d97564;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

 ::Date CalendarCtrl_obj::get_date(){
            	HX_STACKFRAME(&_hx_pos_56320fd73192267f_23_get_date)
HXLINE(  24)		 wxDateTime dt = this->get_calendarCtrlRef()->ptr->GetDate();
HXLINE(  25)		 wxLongLong v = dt.GetValue();
HXLINE(  26)		 ::Date r = ::Date_obj::fromTime(v.ToDouble());
HXLINE(  27)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CalendarCtrl_obj,get_date,return )

 ::Date CalendarCtrl_obj::set_date( ::Date value){
            	HX_STACKFRAME(&_hx_pos_56320fd73192267f_29_set_date)
HXLINE(  30)		 wxDateTime dt = wxDateTime::Now();
HXLINE(  31)		dt.Set((time_t) (value->getTime() / ( (Float)(1000) )));
HXLINE(  32)		this->get_calendarCtrlRef()->ptr->SetDate(dt);
HXLINE(  33)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CalendarCtrl_obj,set_date,return )

::cpp::Pointer<  wxCalendarCtrl > CalendarCtrl_obj::get_calendarCtrlRef(){
            	HX_STACKFRAME(&_hx_pos_56320fd73192267f_41_get_calendarCtrlRef)
HXDLIN(  41)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CalendarCtrl_obj,get_calendarCtrlRef,return )


::hx::ObjectPtr< CalendarCtrl_obj > CalendarCtrl_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< CalendarCtrl_obj > __this = new CalendarCtrl_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< CalendarCtrl_obj > CalendarCtrl_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	CalendarCtrl_obj *__this = (CalendarCtrl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CalendarCtrl_obj), true, "hx.widgets.CalendarCtrl"));
	*(void **)__this = CalendarCtrl_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

CalendarCtrl_obj::CalendarCtrl_obj()
{
}

void CalendarCtrl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CalendarCtrl);
	HX_MARK_MEMBER_NAME(calendarCtrlRef,"calendarCtrlRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CalendarCtrl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(calendarCtrlRef,"calendarCtrlRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CalendarCtrl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_date() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_date") ) { return ::hx::Val( get_date_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_date") ) { return ::hx::Val( set_date_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"calendarCtrlRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_calendarCtrlRef() : calendarCtrlRef ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_calendarCtrlRef") ) { return ::hx::Val( get_calendarCtrlRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CalendarCtrl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_date(inValue.Cast<  ::Date >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"calendarCtrlRef") ) { calendarCtrlRef=inValue.Cast< ::cpp::Pointer<  wxCalendarCtrl > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CalendarCtrl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("date",2e,56,63,42));
	outFields->push(HX_("calendarCtrlRef",4a,c2,22,d0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CalendarCtrl_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxCalendarCtrl > */ ,(int)offsetof(CalendarCtrl_obj,calendarCtrlRef),HX_("calendarCtrlRef",4a,c2,22,d0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CalendarCtrl_obj_sStaticStorageInfo = 0;
#endif

static ::String CalendarCtrl_obj_sMemberFields[] = {
	HX_("get_date",b7,11,1e,c2),
	HX_("set_date",2b,6b,7b,70),
	HX_("calendarCtrlRef",4a,c2,22,d0),
	HX_("get_calendarCtrlRef",61,91,2d,5b),
	::String(null()) };

::hx::Class CalendarCtrl_obj::__mClass;

void CalendarCtrl_obj::__register()
{
	CalendarCtrl_obj _hx_dummy;
	CalendarCtrl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.CalendarCtrl",66,ac,e7,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CalendarCtrl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CalendarCtrl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CalendarCtrl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CalendarCtrl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
