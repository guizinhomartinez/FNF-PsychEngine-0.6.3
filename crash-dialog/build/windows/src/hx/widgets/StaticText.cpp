#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_c782e651b082fbad
#define INCLUDED_c782e651b082fbad
#include "wx/stattext.h"
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
#ifndef INCLUDED_hx_widgets_StaticText
#include <hx/widgets/StaticText.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fc13d3555025e88b_9_new,"hx.widgets.StaticText","new",0xf9d2120a,"hx.widgets.StaticText.new","hx/widgets/StaticText.hx",9,0x14bb1a64)
HX_LOCAL_STACK_FRAME(_hx_pos_fc13d3555025e88b_23_wrap,"hx.widgets.StaticText","wrap",0xa3fa6ce0,"hx.widgets.StaticText.wrap","hx/widgets/StaticText.hx",23,0x14bb1a64)
HX_LOCAL_STACK_FRAME(_hx_pos_fc13d3555025e88b_31_get_staticTextRef,"hx.widgets.StaticText","get_staticTextRef",0x58eeae19,"hx.widgets.StaticText.get_staticTextRef","hx/widgets/StaticText.hx",31,0x14bb1a64)
namespace hx{
namespace widgets{

void StaticText_obj::__construct( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_fc13d3555025e88b_9_new)
HXLINE(  10)		if (::hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxStaticText()))->reinterpret();
HXLINE(  12)			const char* this1 = text.utf8_str();
HXDLIN(  12)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  13)			 wxStaticText * _hx_tmp = this->get_staticTextRef()->ptr;
HXDLIN(  13)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  13)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  13)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  13)			(*(_hx_tmp)).Create(_hx_tmp1,id,str,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  16)		super::__construct(parent,id,null());
            	}

Dynamic StaticText_obj::__CreateEmpty() { return new StaticText_obj; }

void *StaticText_obj::_hx_vtable = 0;

Dynamic StaticText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticText_obj > _hx_result = new StaticText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool StaticText_obj::_hx_isInstanceOf(int inClassId) {
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
		return inClassId==(int)0x504ef296 || inClassId==(int)0x5d92cb6f;
	}
}

void StaticText_obj::wrap(int width){
            	HX_STACKFRAME(&_hx_pos_fc13d3555025e88b_23_wrap)
HXDLIN(  23)		this->get_staticTextRef()->ptr->Wrap(width);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StaticText_obj,wrap,(void))

::cpp::Pointer<  wxStaticText > StaticText_obj::get_staticTextRef(){
            	HX_STACKFRAME(&_hx_pos_fc13d3555025e88b_31_get_staticTextRef)
HXDLIN(  31)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StaticText_obj,get_staticTextRef,return )


::hx::ObjectPtr< StaticText_obj > StaticText_obj::__new( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< StaticText_obj > __this = new StaticText_obj();
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< StaticText_obj > StaticText_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	StaticText_obj *__this = (StaticText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticText_obj), true, "hx.widgets.StaticText"));
	*(void **)__this = StaticText_obj::_hx_vtable;
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

StaticText_obj::StaticText_obj()
{
}

void StaticText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticText);
	HX_MARK_MEMBER_NAME(staticTextRef,"staticTextRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(staticTextRef,"staticTextRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StaticText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return ::hx::Val( wrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"staticTextRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_staticTextRef() : staticTextRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_staticTextRef") ) { return ::hx::Val( get_staticTextRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StaticText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"staticTextRef") ) { staticTextRef=inValue.Cast< ::cpp::Pointer<  wxStaticText > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("staticTextRef",98,8b,d8,25));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StaticText_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStaticText > */ ,(int)offsetof(StaticText_obj,staticTextRef),HX_("staticTextRef",98,8b,d8,25)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StaticText_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticText_obj_sMemberFields[] = {
	HX_("wrap",ca,39,ff,4e),
	HX_("staticTextRef",98,8b,d8,25),
	HX_("get_staticTextRef",ef,96,48,2c),
	::String(null()) };

::hx::Class StaticText_obj::__mClass;

void StaticText_obj::__register()
{
	StaticText_obj _hx_dummy;
	StaticText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StaticText",18,05,92,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticText_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
