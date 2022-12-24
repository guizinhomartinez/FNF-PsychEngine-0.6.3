#include <hxcpp.h>

#ifndef INCLUDED_3d3e59ab7191c16f
#define INCLUDED_3d3e59ab7191c16f
#include "wx/msgdlg.h"
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
#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_MessageDialog
#include <hx/widgets/MessageDialog.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4249a7d73a4fa149_9_new,"hx.widgets.MessageDialog","new",0xce0c3f64,"hx.widgets.MessageDialog.new","hx/widgets/MessageDialog.hx",9,0xa874c58e)
HX_LOCAL_STACK_FRAME(_hx_pos_4249a7d73a4fa149_34_get_messageDialogRef,"hx.widgets.MessageDialog","get_messageDialogRef",0x9c23c429,"hx.widgets.MessageDialog.get_messageDialogRef","hx/widgets/MessageDialog.hx",34,0xa874c58e)
namespace hx{
namespace widgets{

void MessageDialog_obj::__construct( ::hx::widgets::Window parent,::String message,::String caption,::hx::Null< int >  __o_style){
            		int style = __o_style.Default(0);
            	HX_STACKFRAME(&_hx_pos_4249a7d73a4fa149_9_new)
HXLINE(  10)		if (::hx::IsNull( this->_ref )) {
HXLINE(  11)			if (::hx::IsNull( message )) {
HXLINE(  12)				message = HX_("",00,00,00,00);
            			}
HXLINE(  14)			if (::hx::IsNull( caption )) {
HXLINE(  15)				caption = HX_("",00,00,00,00);
            			}
HXLINE(  17)			if ((style == 0)) {
HXLINE(  18)				style = (::wx::widgets::Defs_obj::OK | ::wx::widgets::Defs_obj::CENTRE);
            			}
HXLINE(  21)			const char* this1 = message.utf8_str();
HXDLIN(  21)			 wxString messageStr = wxString::FromUTF8(this1);
HXLINE(  22)			const char* this2 = caption.utf8_str();
HXDLIN(  22)			 wxString captionStr = wxString::FromUTF8(this2);
HXLINE(  23)			::cpp::Pointer<  wxMessageDialog > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxMessageDialog(::hx::widgets::Window_obj::toRaw(parent),messageStr,captionStr,style)));
HXDLIN(  23)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  26)		super::__construct(parent,null(),null(),null());
            	}

Dynamic MessageDialog_obj::__CreateEmpty() { return new MessageDialog_obj; }

void *MessageDialog_obj::_hx_vtable = 0;

Dynamic MessageDialog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MessageDialog_obj > _hx_result = new MessageDialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool MessageDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4af00867) {
		if (inClassId<=(int)0x3ade267e) {
			if (inClassId<=(int)0x2045b63e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
			} else {
				return inClassId==(int)0x3ade267e;
			}
		} else {
			return inClassId==(int)0x467ba226 || inClassId==(int)0x4af00867;
		}
	} else {
		if (inClassId<=(int)0x5fa30450) {
			return inClassId==(int)0x5d92cb6f || inClassId==(int)0x5fa30450;
		} else {
			return inClassId==(int)0x6ace4963;
		}
	}
}

::cpp::Pointer<  wxMessageDialog > MessageDialog_obj::get_messageDialogRef(){
            	HX_STACKFRAME(&_hx_pos_4249a7d73a4fa149_34_get_messageDialogRef)
HXDLIN(  34)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MessageDialog_obj,get_messageDialogRef,return )


::hx::ObjectPtr< MessageDialog_obj > MessageDialog_obj::__new( ::hx::widgets::Window parent,::String message,::String caption,::hx::Null< int >  __o_style) {
	::hx::ObjectPtr< MessageDialog_obj > __this = new MessageDialog_obj();
	__this->__construct(parent,message,caption,__o_style);
	return __this;
}

::hx::ObjectPtr< MessageDialog_obj > MessageDialog_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String caption,::hx::Null< int >  __o_style) {
	MessageDialog_obj *__this = (MessageDialog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MessageDialog_obj), true, "hx.widgets.MessageDialog"));
	*(void **)__this = MessageDialog_obj::_hx_vtable;
	__this->__construct(parent,message,caption,__o_style);
	return __this;
}

MessageDialog_obj::MessageDialog_obj()
{
}

void MessageDialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MessageDialog);
	HX_MARK_MEMBER_NAME(messageDialogRef,"messageDialogRef");
	 ::hx::widgets::Dialog_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MessageDialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(messageDialogRef,"messageDialogRef");
	 ::hx::widgets::Dialog_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MessageDialog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"messageDialogRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_messageDialogRef() : messageDialogRef ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_messageDialogRef") ) { return ::hx::Val( get_messageDialogRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MessageDialog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"messageDialogRef") ) { messageDialogRef=inValue.Cast< ::cpp::Pointer<  wxMessageDialog > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MessageDialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("messageDialogRef",a4,f2,4e,9c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MessageDialog_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxMessageDialog > */ ,(int)offsetof(MessageDialog_obj,messageDialogRef),HX_("messageDialogRef",a4,f2,4e,9c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MessageDialog_obj_sStaticStorageInfo = 0;
#endif

static ::String MessageDialog_obj_sMemberFields[] = {
	HX_("messageDialogRef",a4,f2,4e,9c),
	HX_("get_messageDialogRef",ad,57,b9,ba),
	::String(null()) };

::hx::Class MessageDialog_obj::__mClass;

void MessageDialog_obj::__register()
{
	MessageDialog_obj _hx_dummy;
	MessageDialog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.MessageDialog",72,fd,5f,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MessageDialog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MessageDialog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MessageDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MessageDialog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
