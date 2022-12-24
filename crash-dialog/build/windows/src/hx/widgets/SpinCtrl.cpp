#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_71344177f4fd9309
#define INCLUDED_71344177f4fd9309
#include "wx/spinctrl.h"
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
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_SpinCtrl
#include <hx/widgets/SpinCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d600236ec1c343fd_8_new,"hx.widgets.SpinCtrl","new",0x8c25ecdc,"hx.widgets.SpinCtrl.new","hx/widgets/SpinCtrl.hx",8,0x99d87452)
HX_LOCAL_STACK_FRAME(_hx_pos_d600236ec1c343fd_20_get_value,"hx.widgets.SpinCtrl","get_value",0x28167d44,"hx.widgets.SpinCtrl.get_value","hx/widgets/SpinCtrl.hx",20,0x99d87452)
HX_LOCAL_STACK_FRAME(_hx_pos_d600236ec1c343fd_22_set_value,"hx.widgets.SpinCtrl","set_value",0x0b676950,"hx.widgets.SpinCtrl.set_value","hx/widgets/SpinCtrl.hx",22,0x99d87452)
HX_LOCAL_STACK_FRAME(_hx_pos_d600236ec1c343fd_33_get_spinCtrlRef,"hx.widgets.SpinCtrl","get_spinCtrlRef",0xe2ae05d9,"hx.widgets.SpinCtrl.get_spinCtrlRef","hx/widgets/SpinCtrl.hx",33,0x99d87452)
namespace hx{
namespace widgets{

void SpinCtrl_obj::__construct( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d600236ec1c343fd_8_new)
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxSpinCtrl()))->reinterpret();
HXLINE(  11)			const char* this1 = text.utf8_str();
HXDLIN(  11)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  12)			 wxSpinCtrl * _hx_tmp = this->get_spinCtrlRef()->ptr;
HXDLIN(  12)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  12)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  12)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  12)			(*(_hx_tmp)).Create(_hx_tmp1,id,str,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  15)		super::__construct(parent,id,null());
            	}

Dynamic SpinCtrl_obj::__CreateEmpty() { return new SpinCtrl_obj; }

void *SpinCtrl_obj::_hx_vtable = 0;

Dynamic SpinCtrl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SpinCtrl_obj > _hx_result = new SpinCtrl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool SpinCtrl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ba580e8) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x2ba580e8;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

int SpinCtrl_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_d600236ec1c343fd_20_get_value)
HXDLIN(  20)		return this->get_spinCtrlRef()->get_ref().GetValue();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpinCtrl_obj,get_value,return )

int SpinCtrl_obj::set_value(int value){
            	HX_STACKFRAME(&_hx_pos_d600236ec1c343fd_22_set_value)
HXLINE(  23)		this->get_spinCtrlRef()->get_ref().SetValue(value);
HXLINE(  24)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpinCtrl_obj,set_value,return )

::cpp::Pointer<  wxSpinCtrl > SpinCtrl_obj::get_spinCtrlRef(){
            	HX_STACKFRAME(&_hx_pos_d600236ec1c343fd_33_get_spinCtrlRef)
HXDLIN(  33)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpinCtrl_obj,get_spinCtrlRef,return )


::hx::ObjectPtr< SpinCtrl_obj > SpinCtrl_obj::__new( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< SpinCtrl_obj > __this = new SpinCtrl_obj();
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< SpinCtrl_obj > SpinCtrl_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	SpinCtrl_obj *__this = (SpinCtrl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SpinCtrl_obj), true, "hx.widgets.SpinCtrl"));
	*(void **)__this = SpinCtrl_obj::_hx_vtable;
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

SpinCtrl_obj::SpinCtrl_obj()
{
}

void SpinCtrl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpinCtrl);
	HX_MARK_MEMBER_NAME(spinCtrlRef,"spinCtrlRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpinCtrl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(spinCtrlRef,"spinCtrlRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SpinCtrl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_value() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spinCtrlRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_spinCtrlRef() : spinCtrlRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_spinCtrlRef") ) { return ::hx::Val( get_spinCtrlRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SpinCtrl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< int >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spinCtrlRef") ) { spinCtrlRef=inValue.Cast< ::cpp::Pointer<  wxSpinCtrl > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpinCtrl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("spinCtrlRef",c6,67,03,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SpinCtrl_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxSpinCtrl > */ ,(int)offsetof(SpinCtrl_obj,spinCtrlRef),HX_("spinCtrlRef",c6,67,03,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SpinCtrl_obj_sStaticStorageInfo = 0;
#endif

static ::String SpinCtrl_obj_sMemberFields[] = {
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("spinCtrlRef",c6,67,03,4c),
	HX_("get_spinCtrlRef",5d,1f,e5,0c),
	::String(null()) };

::hx::Class SpinCtrl_obj::__mClass;

void SpinCtrl_obj::__register()
{
	SpinCtrl_obj _hx_dummy;
	SpinCtrl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.SpinCtrl",ea,8e,c7,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SpinCtrl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SpinCtrl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpinCtrl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpinCtrl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
