#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_e183691a5ed876d4
#define INCLUDED_e183691a5ed876d4
#include "wx/radiobut.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
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
#ifndef INCLUDED_hx_widgets_RadioButton
#include <hx/widgets/RadioButton.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ec436e6509d8043e_9_new,"hx.widgets.RadioButton","new",0x641c8702,"hx.widgets.RadioButton.new","hx/widgets/RadioButton.hx",9,0x2a4b3730)
HX_LOCAL_STACK_FRAME(_hx_pos_ec436e6509d8043e_24_get_value,"hx.widgets.RadioButton","get_value",0x722c37ea,"hx.widgets.RadioButton.get_value","hx/widgets/RadioButton.hx",24,0x2a4b3730)
HX_LOCAL_STACK_FRAME(_hx_pos_ec436e6509d8043e_26_set_value,"hx.widgets.RadioButton","set_value",0x557d23f6,"hx.widgets.RadioButton.set_value","hx/widgets/RadioButton.hx",26,0x2a4b3730)
HX_LOCAL_STACK_FRAME(_hx_pos_ec436e6509d8043e_36_get_radioButtonRef,"hx.widgets.RadioButton","get_radioButtonRef",0xfdcaba6d,"hx.widgets.RadioButton.get_radioButtonRef","hx/widgets/RadioButton.hx",36,0x2a4b3730)
namespace hx{
namespace widgets{

void RadioButton_obj::__construct( ::hx::widgets::Window parent,::String label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_ec436e6509d8043e_9_new)
HXLINE(  10)		if (::hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxRadioButton()))->reinterpret();
HXLINE(  12)			const char* this1 = label.utf8_str();
HXDLIN(  12)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  13)			 wxRadioButton * _hx_tmp = this->get_radioButtonRef()->ptr;
HXDLIN(  13)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  13)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  13)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  13)			(*(_hx_tmp)).Create(_hx_tmp1,id,str,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  16)		super::__construct(parent,id,null());
            	}

Dynamic RadioButton_obj::__CreateEmpty() { return new RadioButton_obj; }

void *RadioButton_obj::_hx_vtable = 0;

Dynamic RadioButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RadioButton_obj > _hx_result = new RadioButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool RadioButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x03e37ed2) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x03e37ed2;
			}
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

bool RadioButton_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_ec436e6509d8043e_24_get_value)
HXDLIN(  24)		return this->get_radioButtonRef()->ptr->GetValue();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RadioButton_obj,get_value,return )

bool RadioButton_obj::set_value(bool value){
            	HX_STACKFRAME(&_hx_pos_ec436e6509d8043e_26_set_value)
HXLINE(  27)		this->get_radioButtonRef()->ptr->SetValue(value);
HXLINE(  28)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RadioButton_obj,set_value,return )

::cpp::Pointer<  wxRadioButton > RadioButton_obj::get_radioButtonRef(){
            	HX_STACKFRAME(&_hx_pos_ec436e6509d8043e_36_get_radioButtonRef)
HXDLIN(  36)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RadioButton_obj,get_radioButtonRef,return )


::hx::ObjectPtr< RadioButton_obj > RadioButton_obj::__new( ::hx::widgets::Window parent,::String label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< RadioButton_obj > __this = new RadioButton_obj();
	__this->__construct(parent,label,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< RadioButton_obj > RadioButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	RadioButton_obj *__this = (RadioButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RadioButton_obj), true, "hx.widgets.RadioButton"));
	*(void **)__this = RadioButton_obj::_hx_vtable;
	__this->__construct(parent,label,__o_style,__o_id);
	return __this;
}

RadioButton_obj::RadioButton_obj()
{
}

void RadioButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RadioButton);
	HX_MARK_MEMBER_NAME(radioButtonRef,"radioButtonRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RadioButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(radioButtonRef,"radioButtonRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RadioButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_value() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"radioButtonRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_radioButtonRef() : radioButtonRef ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_radioButtonRef") ) { return ::hx::Val( get_radioButtonRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RadioButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"radioButtonRef") ) { radioButtonRef=inValue.Cast< ::cpp::Pointer<  wxRadioButton > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RadioButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("radioButtonRef",06,ca,42,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RadioButton_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxRadioButton > */ ,(int)offsetof(RadioButton_obj,radioButtonRef),HX_("radioButtonRef",06,ca,42,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RadioButton_obj_sStaticStorageInfo = 0;
#endif

static ::String RadioButton_obj_sMemberFields[] = {
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("radioButtonRef",06,ca,42,fb),
	HX_("get_radioButtonRef",cf,aa,dc,96),
	::String(null()) };

::hx::Class RadioButton_obj::__mClass;

void RadioButton_obj::__register()
{
	RadioButton_obj _hx_dummy;
	RadioButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.RadioButton",10,9e,50,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RadioButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RadioButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RadioButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RadioButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
