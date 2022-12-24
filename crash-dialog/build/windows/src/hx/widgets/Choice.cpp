#include <hxcpp.h>

#ifndef INCLUDED_248a00c52206b09f
#define INCLUDED_248a00c52206b09f
#include "wx/choice.h"
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
#ifndef INCLUDED_hx_widgets_Choice
#include <hx/widgets/Choice.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_64365e94f9927510_8_new,"hx.widgets.Choice","new",0xee816570,"hx.widgets.Choice.new","hx/widgets/Choice.hx",8,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_20_append,"hx.widgets.Choice","append",0x8324d6ca,"hx.widgets.Choice.append","hx/widgets/Choice.hx",20,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_27_delete,"hx.widgets.Choice","delete",0x5e29b51b,"hx.widgets.Choice.delete","hx/widgets/Choice.hx",27,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_31_clear,"hx.widgets.Choice","clear",0x4ce46a9d,"hx.widgets.Choice.clear","hx/widgets/Choice.hx",31,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_37_setString,"hx.widgets.Choice","setString",0x563a5f23,"hx.widgets.Choice.setString","hx/widgets/Choice.hx",37,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_42_getString,"hx.widgets.Choice","getString",0x72e97317,"hx.widgets.Choice.getString","hx/widgets/Choice.hx",42,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_49_get_selection,"hx.widgets.Choice","get_selection",0x1a3f5533,"hx.widgets.Choice.get_selection","hx/widgets/Choice.hx",49,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_51_set_selection,"hx.widgets.Choice","set_selection",0x5f45373f,"hx.widgets.Choice.set_selection","hx/widgets/Choice.hx",51,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_57_get_selectedString,"hx.widgets.Choice","get_selectedString",0xb78cfb45,"hx.widgets.Choice.get_selectedString","hx/widgets/Choice.hx",57,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_61_set_selectedString,"hx.widgets.Choice","set_selectedString",0x943c2db9,"hx.widgets.Choice.set_selectedString","hx/widgets/Choice.hx",61,0xa9467ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_64365e94f9927510_72_get_choiceRef,"hx.widgets.Choice","get_choiceRef",0xa2f24159,"hx.widgets.Choice.get_choiceRef","hx/widgets/Choice.hx",72,0xa9467ebe)
namespace hx{
namespace widgets{

void Choice_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_8_new)
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxChoice()))->reinterpret();
HXLINE(  11)			 wxChoice * _hx_tmp = this->get_choiceRef()->ptr;
HXDLIN(  11)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  11)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  11)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  11)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,0,null(),style);
            		}
HXLINE(  14)		super::__construct(parent,id,null());
            	}

Dynamic Choice_obj::__CreateEmpty() { return new Choice_obj; }

void *Choice_obj::_hx_vtable = 0;

Dynamic Choice_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Choice_obj > _hx_result = new Choice_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Choice_obj::_hx_isInstanceOf(int inClassId) {
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
		return inClassId==(int)0x5d92cb6f || inClassId==(int)0x7a4b03fc;
	}
}

static ::hx::widgets::ItemContainer_obj _hx_hx_widgets_Choice__hx_hx_widgets_ItemContainer= {
	( void (::hx::Object::*)(int,::String))&::hx::widgets::Choice_obj::setString,
	( ::String (::hx::Object::*)(int))&::hx::widgets::Choice_obj::getString,
	( int (::hx::Object::*)(::String))&::hx::widgets::Choice_obj::append,
};

static ::hx::widgets::ItemContainerImmutable_obj _hx_hx_widgets_Choice__hx_hx_widgets_ItemContainerImmutable= {
	( void (::hx::Object::*)(int,::String))&::hx::widgets::Choice_obj::setString,
	( ::String (::hx::Object::*)(int))&::hx::widgets::Choice_obj::getString,
};

void *Choice_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x112d794f: return &_hx_hx_widgets_Choice__hx_hx_widgets_ItemContainer;
		case (int)0x73706cf3: return &_hx_hx_widgets_Choice__hx_hx_widgets_ItemContainerImmutable;
	}
	return super::_hx_getInterface(inHash);
}

int Choice_obj::append(::String string){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_20_append)
HXLINE(  21)		const char* this1 = string.utf8_str();
HXDLIN(  21)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  22)		int n = this->get_choiceRef()->ptr->Append(s);
HXLINE(  23)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Choice_obj,append,return )

void Choice_obj::_hx_delete(int n){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_27_delete)
HXDLIN(  27)		this->get_choiceRef()->ptr->Delete(n);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Choice_obj,_hx_delete,(void))

void Choice_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_31_clear)
HXDLIN(  31)		this->get_choiceRef()->ptr->Clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Choice_obj,clear,(void))

void Choice_obj::setString(int n,::String string){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_37_setString)
HXLINE(  38)		const char* this1 = string.utf8_str();
HXDLIN(  38)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  39)		this->get_choiceRef()->ptr->SetString(n,s);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Choice_obj,setString,(void))

::String Choice_obj::getString(int n){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_42_getString)
HXLINE(  43)		 wxString r = this->get_choiceRef()->ptr->GetString(n);
HXLINE(  44)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Choice_obj,getString,return )

int Choice_obj::get_selection(){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_49_get_selection)
HXDLIN(  49)		return this->get_choiceRef()->ptr->GetSelection();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Choice_obj,get_selection,return )

int Choice_obj::set_selection(int value){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_51_set_selection)
HXLINE(  52)		this->get_choiceRef()->ptr->SetSelection(value);
HXLINE(  53)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Choice_obj,set_selection,return )

::String Choice_obj::get_selectedString(){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_57_get_selectedString)
HXLINE(  58)		 wxString r = this->get_choiceRef()->ptr->GetStringSelection();
HXLINE(  59)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Choice_obj,get_selectedString,return )

::String Choice_obj::set_selectedString(::String value){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_61_set_selectedString)
HXLINE(  62)		const char* this1 = value.utf8_str();
HXDLIN(  62)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  63)		this->get_choiceRef()->ptr->SetStringSelection(s);
HXLINE(  64)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Choice_obj,set_selectedString,return )

::cpp::Pointer<  wxChoice > Choice_obj::get_choiceRef(){
            	HX_STACKFRAME(&_hx_pos_64365e94f9927510_72_get_choiceRef)
HXDLIN(  72)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Choice_obj,get_choiceRef,return )


::hx::ObjectPtr< Choice_obj > Choice_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< Choice_obj > __this = new Choice_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< Choice_obj > Choice_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	Choice_obj *__this = (Choice_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Choice_obj), true, "hx.widgets.Choice"));
	*(void **)__this = Choice_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

Choice_obj::Choice_obj()
{
}

void Choice_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Choice);
	HX_MARK_MEMBER_NAME(choiceRef,"choiceRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Choice_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(choiceRef,"choiceRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Choice_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		if (HX_FIELD_EQ(inName,"delete") ) { return ::hx::Val( _hx_delete_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setString") ) { return ::hx::Val( setString_dyn() ); }
		if (HX_FIELD_EQ(inName,"getString") ) { return ::hx::Val( getString_dyn() ); }
		if (HX_FIELD_EQ(inName,"selection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selection() ); }
		if (HX_FIELD_EQ(inName,"choiceRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_choiceRef() : choiceRef ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_selection") ) { return ::hx::Val( get_selection_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selection") ) { return ::hx::Val( set_selection_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_choiceRef") ) { return ::hx::Val( get_choiceRef_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectedString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedString() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_selectedString") ) { return ::hx::Val( get_selectedString_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedString") ) { return ::hx::Val( set_selectedString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Choice_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"selection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selection(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"choiceRef") ) { choiceRef=inValue.Cast< ::cpp::Pointer<  wxChoice > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectedString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedString(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Choice_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selection",4c,f8,1a,8e));
	outFields->push(HX_("selectedString",8c,7d,8e,94));
	outFields->push(HX_("choiceRef",72,e4,cd,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Choice_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxChoice > */ ,(int)offsetof(Choice_obj,choiceRef),HX_("choiceRef",72,e4,cd,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Choice_obj_sStaticStorageInfo = 0;
#endif

static ::String Choice_obj_sMemberFields[] = {
	HX_("append",da,e1,d3,8f),
	HX_("delete",2b,c0,d8,6a),
	HX_("clear",8d,71,5b,48),
	HX_("setString",13,9e,d7,70),
	HX_("getString",07,b2,86,8d),
	HX_("get_selection",23,cc,7e,4f),
	HX_("set_selection",2f,ae,84,94),
	HX_("get_selectedString",55,5e,28,30),
	HX_("set_selectedString",c9,90,d7,0c),
	HX_("choiceRef",72,e4,cd,16),
	HX_("get_choiceRef",49,b8,31,d8),
	::String(null()) };

::hx::Class Choice_obj::__mClass;

void Choice_obj::__register()
{
	Choice_obj _hx_dummy;
	Choice_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Choice",7e,2d,2e,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Choice_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Choice_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Choice_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Choice_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
