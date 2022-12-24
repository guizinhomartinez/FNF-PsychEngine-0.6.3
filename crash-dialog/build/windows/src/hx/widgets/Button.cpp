#include <hxcpp.h>

#ifndef INCLUDED_01922b43f2a15a43
#define INCLUDED_01922b43f2a15a43
#include "wx/button.h"
#endif
#ifndef INCLUDED_ba6509720fa912ce
#define INCLUDED_ba6509720fa912ce
#include "wx/defs.h"
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
#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
#endif
#ifndef INCLUDED_hx_widgets_Button
#include <hx/widgets/Button.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d44ec35dcf37af81_9_new,"hx.widgets.Button","new",0xc6c52481,"hx.widgets.Button.new","hx/widgets/Button.hx",9,0xe27f0ccd)
HX_LOCAL_STACK_FRAME(_hx_pos_d44ec35dcf37af81_31_get_buttonRef,"hx.widgets.Button","get_buttonRef",0x46f86db9,"hx.widgets.Button.get_buttonRef","hx/widgets/Button.hx",31,0xe27f0ccd)
namespace hx{
namespace widgets{

void Button_obj::__construct( ::hx::widgets::Window parent,::String label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d44ec35dcf37af81_9_new)
HXLINE(  10)		this->_hasBitmap = false;
HXLINE(  11)		this->set_bitmapPosition(wxLEFT);
HXLINE(  13)		if (::hx::IsNull( this->_ref )) {
HXLINE(  14)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxButton()))->reinterpret();
HXLINE(  15)			if (::hx::IsNotNull( label )) {
HXLINE(  16)				const char* this1 = label.utf8_str();
HXDLIN(  16)				 wxString str = wxString::FromUTF8(this1);
HXLINE(  17)				 wxButton * _hx_tmp = this->get_buttonRef()->ptr;
HXDLIN(  17)				 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  17)				 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  17)				 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  17)				(*(_hx_tmp)).Create(_hx_tmp1,id,str,_hx_tmp2,_hx_tmp3,style);
            			}
            			else {
HXLINE(  19)				 wxButton * _hx_tmp = this->get_buttonRef()->ptr;
HXDLIN(  19)				(*(_hx_tmp)).Create(::hx::widgets::Window_obj::toRaw(parent),id);
            			}
            		}
HXLINE(  23)		super::__construct(parent,id,null());
            	}

Dynamic Button_obj::__CreateEmpty() { return new Button_obj; }

void *Button_obj::_hx_vtable = 0;

Dynamic Button_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Button_obj > _hx_result = new Button_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Button_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x467ba226) {
			return inClassId==(int)0x4210b3a9 || inClassId==(int)0x467ba226;
		} else {
			return inClassId==(int)0x5d92cb6f;
		}
	}
}

::cpp::Pointer<  wxButton > Button_obj::get_buttonRef(){
            	HX_STACKFRAME(&_hx_pos_d44ec35dcf37af81_31_get_buttonRef)
HXDLIN(  31)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_buttonRef,return )


::hx::ObjectPtr< Button_obj > Button_obj::__new( ::hx::widgets::Window parent,::String label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< Button_obj > __this = new Button_obj();
	__this->__construct(parent,label,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< Button_obj > Button_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	Button_obj *__this = (Button_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Button_obj), true, "hx.widgets.Button"));
	*(void **)__this = Button_obj::_hx_vtable;
	__this->__construct(parent,label,__o_style,__o_id);
	return __this;
}

Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(buttonRef,"buttonRef");
	 ::hx::widgets::AnyButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonRef,"buttonRef");
	 ::hx::widgets::AnyButton_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Button_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"buttonRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_buttonRef() : buttonRef ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_buttonRef") ) { return ::hx::Val( get_buttonRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Button_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"buttonRef") ) { buttonRef=inValue.Cast< ::cpp::Pointer<  wxButton > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buttonRef",81,72,06,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Button_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxButton > */ ,(int)offsetof(Button_obj,buttonRef),HX_("buttonRef",81,72,06,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Button_obj_sStaticStorageInfo = 0;
#endif

static ::String Button_obj_sMemberFields[] = {
	HX_("buttonRef",81,72,06,50),
	HX_("get_buttonRef",58,46,6a,11),
	::String(null()) };

::hx::Class Button_obj::__mClass;

void Button_obj::__register()
{
	Button_obj _hx_dummy;
	Button_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Button",0f,d0,5e,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Button_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Button_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Button_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Button_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
