#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_34cc2c107d04ae14
#define INCLUDED_34cc2c107d04ae14
#include "wx/slider.h"
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
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Slider
#include <hx/widgets/Slider.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_SliderStyle
#include <wx/widgets/styles/SliderStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b47d2e6d15df6426_9_new,"hx.widgets.Slider","new",0x60c0cc30,"hx.widgets.Slider.new","hx/widgets/Slider.hx",9,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_27_get_value,"hx.widgets.Slider","get_value",0x43ad9398,"hx.widgets.Slider.get_value","hx/widgets/Slider.hx",27,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_29_set_value,"hx.widgets.Slider","set_value",0x26fe7fa4,"hx.widgets.Slider.set_value","hx/widgets/Slider.hx",29,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_36_get_min,"hx.widgets.Slider","get_min",0x8426fdf9,"hx.widgets.Slider.get_min","hx/widgets/Slider.hx",36,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_38_set_min,"hx.widgets.Slider","set_min",0x77288f05,"hx.widgets.Slider.set_min","hx/widgets/Slider.hx",38,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_45_get_max,"hx.widgets.Slider","get_max",0x8426f70b,"hx.widgets.Slider.get_max","hx/widgets/Slider.hx",45,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_47_set_max,"hx.widgets.Slider","set_max",0x77288817,"hx.widgets.Slider.set_max","hx/widgets/Slider.hx",47,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_53_setSelection,"hx.widgets.Slider","setSelection",0x2487c27a,"hx.widgets.Slider.setSelection","hx/widgets/Slider.hx",53,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_58_get_selectionStart,"hx.widgets.Slider","get_selectionStart",0xb39b076f,"hx.widgets.Slider.get_selectionStart","hx/widgets/Slider.hx",58,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_60_set_selectionStart,"hx.widgets.Slider","set_selectionStart",0x904a39e3,"hx.widgets.Slider.set_selectionStart","hx/widgets/Slider.hx",60,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_67_get_selectionEnd,"hx.widgets.Slider","get_selectionEnd",0xcbc5c9a8,"hx.widgets.Slider.get_selectionEnd","hx/widgets/Slider.hx",67,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_69_set_selectionEnd,"hx.widgets.Slider","set_selectionEnd",0x2207b71c,"hx.widgets.Slider.set_selectionEnd","hx/widgets/Slider.hx",69,0xf3422ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_b47d2e6d15df6426_79_get_sliderRef,"hx.widgets.Slider","get_sliderRef",0x89794959,"hx.widgets.Slider.get_sliderRef","hx/widgets/Slider.hx",79,0xf3422ffe)
namespace hx{
namespace widgets{

void Slider_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_value,::hx::Null< int >  __o_min,::hx::Null< int >  __o_max,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int value = __o_value.Default(0);
            		int min = __o_min.Default(0);
            		int max = __o_max.Default(100);
            		int style = __o_style.Default(-1);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_9_new)
HXLINE(  10)		if ((style == -1)) {
HXLINE(  11)			style = ::wx::widgets::styles::SliderStyle_obj::DEFAULT;
            		}
HXLINE(  14)		if (::hx::IsNull( this->_ref )) {
HXLINE(  15)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxSlider()))->reinterpret();
HXLINE(  16)			 wxSlider * _hx_tmp = this->get_sliderRef()->ptr;
HXDLIN(  16)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  16)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  16)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  16)			(*(_hx_tmp)).Create(_hx_tmp1,id,value,min,max,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  19)		super::__construct(parent,id,null());
            	}

Dynamic Slider_obj::__CreateEmpty() { return new Slider_obj; }

void *Slider_obj::_hx_vtable = 0;

Dynamic Slider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Slider_obj > _hx_result = new Slider_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Slider_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		return inClassId==(int)0x5d92cb6f || inClassId==(int)0x7b0afda0;
	}
}

int Slider_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_27_get_value)
HXDLIN(  27)		return this->get_sliderRef()->ptr->GetValue();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_value,return )

int Slider_obj::set_value(int value){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_29_set_value)
HXLINE(  30)		this->get_sliderRef()->ptr->SetValue(value);
HXLINE(  31)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_value,return )

int Slider_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_36_get_min)
HXDLIN(  36)		return this->get_sliderRef()->ptr->GetMin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_min,return )

int Slider_obj::set_min(int value){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_38_set_min)
HXLINE(  39)		this->get_sliderRef()->ptr->SetMin(value);
HXLINE(  40)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_min,return )

int Slider_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_45_get_max)
HXDLIN(  45)		return this->get_sliderRef()->ptr->GetMax();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_max,return )

int Slider_obj::set_max(int value){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_47_set_max)
HXLINE(  48)		this->get_sliderRef()->ptr->SetMax(value);
HXLINE(  49)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_max,return )

void Slider_obj::setSelection(int startPos,int endPos){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_53_setSelection)
HXDLIN(  53)		this->get_sliderRef()->ptr->SetSelection(startPos,endPos);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Slider_obj,setSelection,(void))

int Slider_obj::get_selectionStart(){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_58_get_selectionStart)
HXDLIN(  58)		return this->get_sliderRef()->ptr->GetSelStart();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_selectionStart,return )

int Slider_obj::set_selectionStart(int value){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_60_set_selectionStart)
HXLINE(  61)		this->setSelection(value,this->get_selectionEnd());
HXLINE(  62)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_selectionStart,return )

int Slider_obj::get_selectionEnd(){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_67_get_selectionEnd)
HXDLIN(  67)		return this->get_sliderRef()->ptr->GetSelEnd();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_selectionEnd,return )

int Slider_obj::set_selectionEnd(int value){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_69_set_selectionEnd)
HXLINE(  70)		this->setSelection(this->get_selectionStart(),value);
HXLINE(  71)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_selectionEnd,return )

::cpp::Pointer<  wxSlider > Slider_obj::get_sliderRef(){
            	HX_STACKFRAME(&_hx_pos_b47d2e6d15df6426_79_get_sliderRef)
HXDLIN(  79)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_sliderRef,return )


::hx::ObjectPtr< Slider_obj > Slider_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_value,::hx::Null< int >  __o_min,::hx::Null< int >  __o_max,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< Slider_obj > __this = new Slider_obj();
	__this->__construct(parent,__o_value,__o_min,__o_max,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< Slider_obj > Slider_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_value,::hx::Null< int >  __o_min,::hx::Null< int >  __o_max,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	Slider_obj *__this = (Slider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Slider_obj), true, "hx.widgets.Slider"));
	*(void **)__this = Slider_obj::_hx_vtable;
	__this->__construct(parent,__o_value,__o_min,__o_max,__o_style,__o_id);
	return __this;
}

Slider_obj::Slider_obj()
{
}

void Slider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Slider);
	HX_MARK_MEMBER_NAME(sliderRef,"sliderRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Slider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sliderRef,"sliderRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Slider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_min() ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_max() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_value() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return ::hx::Val( get_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return ::hx::Val( set_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return ::hx::Val( get_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return ::hx::Val( set_max_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"sliderRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_sliderRef() : sliderRef ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setSelection") ) { return ::hx::Val( setSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectionEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionEnd() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_sliderRef") ) { return ::hx::Val( get_sliderRef_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectionStart") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionStart() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectionEnd") ) { return ::hx::Val( get_selectionEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectionEnd") ) { return ::hx::Val( set_selectionEnd_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_selectionStart") ) { return ::hx::Val( get_selectionStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectionStart") ) { return ::hx::Val( set_selectionStart_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Slider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_min(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_max(inValue.Cast< int >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sliderRef") ) { sliderRef=inValue.Cast< ::cpp::Pointer<  wxSlider > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectionEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectionEnd(inValue.Cast< int >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectionStart") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectionStart(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Slider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("selectionStart",76,58,7a,0f));
	outFields->push(HX_("selectionEnd",ef,fa,80,dd));
	outFields->push(HX_("sliderRef",b2,95,c9,60));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Slider_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxSlider > */ ,(int)offsetof(Slider_obj,sliderRef),HX_("sliderRef",b2,95,c9,60)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Slider_obj_sStaticStorageInfo = 0;
#endif

static ::String Slider_obj_sMemberFields[] = {
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_min",29,da,c7,26),
	HX_("set_min",35,6b,c9,19),
	HX_("get_max",3b,d3,c7,26),
	HX_("set_max",47,64,c9,19),
	HX_("setSelection",4a,b8,6a,b2),
	HX_("get_selectionStart",3f,39,14,ab),
	HX_("set_selectionStart",b3,6b,c3,87),
	HX_("get_selectionEnd",78,e7,1f,e2),
	HX_("set_selectionEnd",ec,d4,61,38),
	HX_("sliderRef",b2,95,c9,60),
	HX_("get_sliderRef",89,69,2d,22),
	::String(null()) };

::hx::Class Slider_obj::__mClass;

void Slider_obj::__register()
{
	Slider_obj _hx_dummy;
	Slider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Slider",3e,34,83,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Slider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Slider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Slider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Slider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
