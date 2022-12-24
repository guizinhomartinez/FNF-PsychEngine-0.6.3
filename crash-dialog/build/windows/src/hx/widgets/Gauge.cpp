#include <hxcpp.h>

#ifndef INCLUDED_1363196d39aeb248
#define INCLUDED_1363196d39aeb248
#include "wx/gauge.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Gauge
#include <hx/widgets/Gauge.h>
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
#ifndef INCLUDED_wx_widgets_styles_GaugeStyle
#include <wx/widgets/styles/GaugeStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b21a09fe6fde352f_9_new,"hx.widgets.Gauge","new",0xc169a76e,"hx.widgets.Gauge.new","hx/widgets/Gauge.hx",9,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_26_get_value,"hx.widgets.Gauge","get_value",0x811f7156,"hx.widgets.Gauge.get_value","hx/widgets/Gauge.hx",26,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_28_set_value,"hx.widgets.Gauge","set_value",0x64705d62,"hx.widgets.Gauge.set_value","hx/widgets/Gauge.hx",28,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_35_get_range,"hx.widgets.Gauge","get_range",0x338697a2,"hx.widgets.Gauge.get_range","hx/widgets/Gauge.hx",35,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_37_set_range,"hx.widgets.Gauge","set_range",0x16d783ae,"hx.widgets.Gauge.set_range","hx/widgets/Gauge.hx",37,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_43_pulse,"hx.widgets.Gauge","pulse",0x5e0d7da7,"hx.widgets.Gauge.pulse","hx/widgets/Gauge.hx",43,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_51_get_gaugeRef,"hx.widgets.Gauge","get_gaugeRef",0xd6198a15,"hx.widgets.Gauge.get_gaugeRef","hx/widgets/Gauge.hx",51,0xee4bdac4)
namespace hx{
namespace widgets{

void Gauge_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_range,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int range = __o_range.Default(100);
            		int style = __o_style.Default(-1);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_9_new)
HXLINE(  10)		if ((style == -1)) {
HXLINE(  11)			style = ::wx::widgets::styles::GaugeStyle_obj::HORIZONTAL;
            		}
HXLINE(  13)		if (::hx::IsNull( this->_ref )) {
HXLINE(  14)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxGauge()))->reinterpret();
HXLINE(  15)			 wxGauge * _hx_tmp = this->get_gaugeRef()->ptr;
HXDLIN(  15)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  15)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  15)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  15)			(*(_hx_tmp)).Create(_hx_tmp1,id,range,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  18)		super::__construct(parent,id,null());
            	}

Dynamic Gauge_obj::__CreateEmpty() { return new Gauge_obj; }

void *Gauge_obj::_hx_vtable = 0;

Dynamic Gauge_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Gauge_obj > _hx_result = new Gauge_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Gauge_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0345708e) {
			if (inClassId<=(int)0x01381bbe) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01381bbe;
			} else {
				return inClassId==(int)0x0345708e;
			}
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

int Gauge_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_26_get_value)
HXDLIN(  26)		return this->get_gaugeRef()->ptr->GetValue();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gauge_obj,get_value,return )

int Gauge_obj::set_value(int value){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_28_set_value)
HXLINE(  29)		this->get_gaugeRef()->ptr->SetValue(value);
HXLINE(  30)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Gauge_obj,set_value,return )

int Gauge_obj::get_range(){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_35_get_range)
HXDLIN(  35)		return this->get_gaugeRef()->ptr->GetRange();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gauge_obj,get_range,return )

int Gauge_obj::set_range(int value){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_37_set_range)
HXLINE(  38)		this->get_gaugeRef()->ptr->SetRange(value);
HXLINE(  39)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Gauge_obj,set_range,return )

void Gauge_obj::pulse(){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_43_pulse)
HXDLIN(  43)		this->get_gaugeRef()->ptr->Pulse();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gauge_obj,pulse,(void))

::cpp::Pointer<  wxGauge > Gauge_obj::get_gaugeRef(){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_51_get_gaugeRef)
HXDLIN(  51)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gauge_obj,get_gaugeRef,return )


::hx::ObjectPtr< Gauge_obj > Gauge_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_range,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< Gauge_obj > __this = new Gauge_obj();
	__this->__construct(parent,__o_range,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< Gauge_obj > Gauge_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_range,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	Gauge_obj *__this = (Gauge_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Gauge_obj), true, "hx.widgets.Gauge"));
	*(void **)__this = Gauge_obj::_hx_vtable;
	__this->__construct(parent,__o_range,__o_style,__o_id);
	return __this;
}

Gauge_obj::Gauge_obj()
{
}

void Gauge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gauge);
	HX_MARK_MEMBER_NAME(gaugeRef,"gaugeRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Gauge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gaugeRef,"gaugeRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Gauge_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_value() ); }
		if (HX_FIELD_EQ(inName,"range") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_range() ); }
		if (HX_FIELD_EQ(inName,"pulse") ) { return ::hx::Val( pulse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gaugeRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_gaugeRef() : gaugeRef ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_range") ) { return ::hx::Val( get_range_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_range") ) { return ::hx::Val( set_range_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_gaugeRef") ) { return ::hx::Val( get_gaugeRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Gauge_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"range") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_range(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gaugeRef") ) { gaugeRef=inValue.Cast< ::cpp::Pointer<  wxGauge > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gauge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("range",bd,a5,1f,e4));
	outFields->push(HX_("gaugeRef",da,fe,f5,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Gauge_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxGauge > */ ,(int)offsetof(Gauge_obj,gaugeRef),HX_("gaugeRef",da,fe,f5,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Gauge_obj_sStaticStorageInfo = 0;
#endif

static ::String Gauge_obj_sMemberFields[] = {
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_range",14,02,c9,27),
	HX_("set_range",20,ee,19,0b),
	HX_("pulse",19,47,89,ca),
	HX_("gaugeRef",da,fe,f5,1d),
	HX_("get_gaugeRef",e3,b2,0f,d3),
	::String(null()) };

::hx::Class Gauge_obj::__mClass;

void Gauge_obj::__register()
{
	Gauge_obj _hx_dummy;
	Gauge_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Gauge",7c,18,12,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Gauge_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Gauge_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Gauge_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Gauge_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
