#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_d35b1bea04ac25e6
#define INCLUDED_d35b1bea04ac25e6
#include "wx/tglbtn.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
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
#ifndef INCLUDED_hx_widgets_ToggleButton
#include <hx/widgets/ToggleButton.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f05c4ff105336d6_9_new,"hx.widgets.ToggleButton","new",0xe86e7cf5,"hx.widgets.ToggleButton.new","hx/widgets/ToggleButton.hx",9,0xacb82159)
HX_LOCAL_STACK_FRAME(_hx_pos_6f05c4ff105336d6_28_get_value,"hx.widgets.ToggleButton","get_value",0x0cc3a61d,"hx.widgets.ToggleButton.get_value","hx/widgets/ToggleButton.hx",28,0xacb82159)
HX_LOCAL_STACK_FRAME(_hx_pos_6f05c4ff105336d6_30_set_value,"hx.widgets.ToggleButton","set_value",0xf0149229,"hx.widgets.ToggleButton.set_value","hx/widgets/ToggleButton.hx",30,0xacb82159)
HX_LOCAL_STACK_FRAME(_hx_pos_6f05c4ff105336d6_40_get_toggleButtonRef,"hx.widgets.ToggleButton","get_toggleButtonRef",0x6cd9b5f9,"hx.widgets.ToggleButton.get_toggleButtonRef","hx/widgets/ToggleButton.hx",40,0xacb82159)
namespace hx{
namespace widgets{

void ToggleButton_obj::__construct( ::hx::widgets::Window parent,::String __o_label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		::String label = __o_label;
            		if (::hx::IsNull(__o_label)) label = HX_("",00,00,00,00);
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_6f05c4ff105336d6_9_new)
HXLINE(  10)		if (::hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxToggleButton()))->reinterpret();
HXLINE(  12)			if (::hx::IsNotNull( label )) {
HXLINE(  13)				const char* this1 = label.utf8_str();
HXDLIN(  13)				 wxString str = wxString::FromUTF8(this1);
HXLINE(  14)				 wxToggleButton * _hx_tmp = this->get_toggleButtonRef()->ptr;
HXDLIN(  14)				(*(_hx_tmp)).Create(::hx::widgets::Window_obj::toRaw(parent),id,str);
            			}
            		}
HXLINE(  20)		super::__construct(parent,id,null());
            	}

Dynamic ToggleButton_obj::__CreateEmpty() { return new ToggleButton_obj; }

void *ToggleButton_obj::_hx_vtable = 0;

Dynamic ToggleButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ToggleButton_obj > _hx_result = new ToggleButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ToggleButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0345708e) {
			if (inClassId<=(int)0x02a80bdf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x02a80bdf;
			} else {
				return inClassId==(int)0x0345708e;
			}
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		if (inClassId<=(int)0x5129dd65) {
			return inClassId==(int)0x467ba226 || inClassId==(int)0x5129dd65;
		} else {
			return inClassId==(int)0x5d92cb6f;
		}
	}
}

bool ToggleButton_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_6f05c4ff105336d6_28_get_value)
HXDLIN(  28)		return this->get_toggleButtonRef()->ptr->GetValue();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToggleButton_obj,get_value,return )

bool ToggleButton_obj::set_value(bool value){
            	HX_STACKFRAME(&_hx_pos_6f05c4ff105336d6_30_set_value)
HXLINE(  31)		this->get_toggleButtonRef()->ptr->SetValue(value);
HXLINE(  32)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleButton_obj,set_value,return )

::cpp::Pointer<  wxToggleButton > ToggleButton_obj::get_toggleButtonRef(){
            	HX_STACKFRAME(&_hx_pos_6f05c4ff105336d6_40_get_toggleButtonRef)
HXDLIN(  40)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToggleButton_obj,get_toggleButtonRef,return )


::hx::ObjectPtr< ToggleButton_obj > ToggleButton_obj::__new( ::hx::widgets::Window parent,::String __o_label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< ToggleButton_obj > __this = new ToggleButton_obj();
	__this->__construct(parent,__o_label,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< ToggleButton_obj > ToggleButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String __o_label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	ToggleButton_obj *__this = (ToggleButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ToggleButton_obj), true, "hx.widgets.ToggleButton"));
	*(void **)__this = ToggleButton_obj::_hx_vtable;
	__this->__construct(parent,__o_label,__o_style,__o_id);
	return __this;
}

ToggleButton_obj::ToggleButton_obj()
{
}

void ToggleButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToggleButton);
	HX_MARK_MEMBER_NAME(toggleButtonRef,"toggleButtonRef");
	 ::hx::widgets::AnyButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ToggleButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(toggleButtonRef,"toggleButtonRef");
	 ::hx::widgets::AnyButton_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ToggleButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_value() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toggleButtonRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_toggleButtonRef() : toggleButtonRef ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_toggleButtonRef") ) { return ::hx::Val( get_toggleButtonRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ToggleButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toggleButtonRef") ) { toggleButtonRef=inValue.Cast< ::cpp::Pointer<  wxToggleButton > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ToggleButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("toggleButtonRef",4d,00,b3,9c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ToggleButton_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxToggleButton > */ ,(int)offsetof(ToggleButton_obj,toggleButtonRef),HX_("toggleButtonRef",4d,00,b3,9c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ToggleButton_obj_sStaticStorageInfo = 0;
#endif

static ::String ToggleButton_obj_sMemberFields[] = {
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("toggleButtonRef",4d,00,b3,9c),
	HX_("get_toggleButtonRef",64,cf,bd,27),
	::String(null()) };

::hx::Class ToggleButton_obj::__mClass;

void ToggleButton_obj::__register()
{
	ToggleButton_obj _hx_dummy;
	ToggleButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ToggleButton",83,de,ed,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ToggleButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ToggleButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToggleButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToggleButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
