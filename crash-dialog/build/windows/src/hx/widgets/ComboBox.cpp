#include <hxcpp.h>

#ifndef INCLUDED_58abf8f4b320bdc6
#define INCLUDED_58abf8f4b320bdc6
#include "wx/combobox.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_ComboBox
#include <hx/widgets/ComboBox.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5353e289374eacfc_8_new,"hx.widgets.ComboBox","new",0x7860e7ac,"hx.widgets.ComboBox.new","hx/widgets/ComboBox.hx",8,0xdea2c382)
HX_LOCAL_STACK_FRAME(_hx_pos_5353e289374eacfc_28_append,"hx.widgets.ComboBox","append",0x440b620e,"hx.widgets.ComboBox.append","hx/widgets/ComboBox.hx",28,0xdea2c382)
HX_LOCAL_STACK_FRAME(_hx_pos_5353e289374eacfc_38_setString,"hx.widgets.ComboBox","setString",0xb6af365f,"hx.widgets.ComboBox.setString","hx/widgets/ComboBox.hx",38,0xdea2c382)
HX_LOCAL_STACK_FRAME(_hx_pos_5353e289374eacfc_44_getString,"hx.widgets.ComboBox","getString",0xd35e4a53,"hx.widgets.ComboBox.getString","hx/widgets/ComboBox.hx",44,0xdea2c382)
HX_LOCAL_STACK_FRAME(_hx_pos_5353e289374eacfc_54_get_comboBoxRef,"hx.widgets.ComboBox","get_comboBoxRef",0x29a847d9,"hx.widgets.ComboBox.get_comboBoxRef","hx/widgets/ComboBox.hx",54,0xdea2c382)
namespace hx{
namespace widgets{

void ComboBox_obj::__construct( ::hx::widgets::Window parent,::String value,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5353e289374eacfc_8_new)
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxComboBox()))->reinterpret();
HXLINE(  11)			if (::hx::IsNotNull( value )) {
HXLINE(  12)				const char* this1 = value.utf8_str();
HXDLIN(  12)				::cpp::Pointer<  wxString > str = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  13)				 wxComboBox * _hx_tmp = this->get_comboBoxRef()->ptr;
HXDLIN(  13)				 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  13)				 wxString & _hx_tmp2 = str->get_ref();
HXDLIN(  13)				 wxPoint & _hx_tmp3 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  13)				 wxSize & _hx_tmp4 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  13)				(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,_hx_tmp4,0,null(),style);
HXLINE(  14)				str->destroy();
            			}
            			else {
HXLINE(  16)				const char* this1 = HX_("",00,00,00,00).utf8_str();
HXDLIN(  16)				::cpp::Pointer<  wxString > str = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  17)				 wxComboBox * _hx_tmp = this->get_comboBoxRef()->ptr;
HXDLIN(  17)				 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  17)				 wxString & _hx_tmp2 = str->get_ref();
HXDLIN(  17)				 wxPoint & _hx_tmp3 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  17)				 wxSize & _hx_tmp4 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  17)				(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,_hx_tmp4,0,null(),style);
HXLINE(  18)				str->destroy();
            			}
            		}
HXLINE(  22)		super::__construct(parent,id,null());
            	}

Dynamic ComboBox_obj::__CreateEmpty() { return new ComboBox_obj; }

void *ComboBox_obj::_hx_vtable = 0;

Dynamic ComboBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComboBox_obj > _hx_result = new ComboBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ComboBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c76d3b8) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x3c76d3b8;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

static ::hx::widgets::ItemContainer_obj _hx_hx_widgets_ComboBox__hx_hx_widgets_ItemContainer= {
	( void (::hx::Object::*)(int,::String))&::hx::widgets::ComboBox_obj::setString,
	( ::String (::hx::Object::*)(int))&::hx::widgets::ComboBox_obj::getString,
	( int (::hx::Object::*)(::String))&::hx::widgets::ComboBox_obj::append,
};

static ::hx::widgets::ItemContainerImmutable_obj _hx_hx_widgets_ComboBox__hx_hx_widgets_ItemContainerImmutable= {
	( void (::hx::Object::*)(int,::String))&::hx::widgets::ComboBox_obj::setString,
	( ::String (::hx::Object::*)(int))&::hx::widgets::ComboBox_obj::getString,
};

void *ComboBox_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x112d794f: return &_hx_hx_widgets_ComboBox__hx_hx_widgets_ItemContainer;
		case (int)0x73706cf3: return &_hx_hx_widgets_ComboBox__hx_hx_widgets_ItemContainerImmutable;
	}
	return super::_hx_getInterface(inHash);
}

int ComboBox_obj::append(::String string){
            	HX_STACKFRAME(&_hx_pos_5353e289374eacfc_28_append)
HXLINE(  29)		const char* this1 = string.utf8_str();
HXDLIN(  29)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  30)		 wxComboBox * n = this->get_comboBoxRef()->ptr;
HXDLIN(  30)		int n1 = (*(n)).Append(s->get_ref());
HXLINE(  31)		s->destroy();
HXLINE(  32)		return n1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComboBox_obj,append,return )

void ComboBox_obj::setString(int n,::String string){
            	HX_STACKFRAME(&_hx_pos_5353e289374eacfc_38_setString)
HXLINE(  39)		const char* this1 = string.utf8_str();
HXDLIN(  39)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  40)		 wxComboBox * _hx_tmp = this->get_comboBoxRef()->ptr;
HXDLIN(  40)		(*(_hx_tmp)).SetString(n,s->get_ref());
HXLINE(  41)		s->destroy();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComboBox_obj,setString,(void))

::String ComboBox_obj::getString(int n){
            	HX_STACKFRAME(&_hx_pos_5353e289374eacfc_44_getString)
HXLINE(  45)		 wxString r = this->get_comboBoxRef()->ptr->GetString(n);
HXLINE(  46)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComboBox_obj,getString,return )

::cpp::Pointer<  wxComboBox > ComboBox_obj::get_comboBoxRef(){
            	HX_STACKFRAME(&_hx_pos_5353e289374eacfc_54_get_comboBoxRef)
HXDLIN(  54)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComboBox_obj,get_comboBoxRef,return )


::hx::ObjectPtr< ComboBox_obj > ComboBox_obj::__new( ::hx::widgets::Window parent,::String value,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< ComboBox_obj > __this = new ComboBox_obj();
	__this->__construct(parent,value,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< ComboBox_obj > ComboBox_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String value,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	ComboBox_obj *__this = (ComboBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComboBox_obj), true, "hx.widgets.ComboBox"));
	*(void **)__this = ComboBox_obj::_hx_vtable;
	__this->__construct(parent,value,__o_style,__o_id);
	return __this;
}

ComboBox_obj::ComboBox_obj()
{
}

void ComboBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComboBox);
	HX_MARK_MEMBER_NAME(comboBoxRef,"comboBoxRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComboBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(comboBoxRef,"comboBoxRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComboBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setString") ) { return ::hx::Val( setString_dyn() ); }
		if (HX_FIELD_EQ(inName,"getString") ) { return ::hx::Val( getString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"comboBoxRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_comboBoxRef() : comboBoxRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_comboBoxRef") ) { return ::hx::Val( get_comboBoxRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComboBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"comboBoxRef") ) { comboBoxRef=inValue.Cast< ::cpp::Pointer<  wxComboBox > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComboBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("comboBoxRef",f6,b6,cd,90));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComboBox_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxComboBox > */ ,(int)offsetof(ComboBox_obj,comboBoxRef),HX_("comboBoxRef",f6,b6,cd,90)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComboBox_obj_sStaticStorageInfo = 0;
#endif

static ::String ComboBox_obj_sMemberFields[] = {
	HX_("append",da,e1,d3,8f),
	HX_("setString",13,9e,d7,70),
	HX_("getString",07,b2,86,8d),
	HX_("comboBoxRef",f6,b6,cd,90),
	HX_("get_comboBoxRef",8d,6e,af,51),
	::String(null()) };

::hx::Class ComboBox_obj::__mClass;

void ComboBox_obj::__register()
{
	ComboBox_obj _hx_dummy;
	ComboBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ComboBox",ba,e1,98,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComboBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComboBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComboBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComboBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
