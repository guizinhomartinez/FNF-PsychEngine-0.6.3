#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_2e64b5545582b528
#define INCLUDED_2e64b5545582b528
#include "wx/textdlg.h"
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
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_TextEntryDialog
#include <hx/widgets/TextEntryDialog.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7467d0101989961e_9_new,"hx.widgets.TextEntryDialog","new",0x4d28b262,"hx.widgets.TextEntryDialog.new","hx/widgets/TextEntryDialog.hx",9,0x75ff00d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7467d0101989961e_38_get_textEntryDialogRef,"hx.widgets.TextEntryDialog","get_textEntryDialogRef",0x85a4f8ad,"hx.widgets.TextEntryDialog.get_textEntryDialogRef","hx/widgets/TextEntryDialog.hx",38,0x75ff00d0)
namespace hx{
namespace widgets{

void TextEntryDialog_obj::__construct( ::hx::widgets::Window parent,::String message,::String caption,::String value,::hx::Null< int >  __o_style){
            		int style = __o_style.Default(0);
            	HX_STACKFRAME(&_hx_pos_7467d0101989961e_9_new)
HXLINE(  10)		if (::hx::IsNull( this->_ref )) {
HXLINE(  11)			if (::hx::IsNull( message )) {
HXLINE(  12)				message = HX_("",00,00,00,00);
            			}
HXLINE(  14)			if (::hx::IsNull( caption )) {
HXLINE(  15)				caption = HX_("",00,00,00,00);
            			}
HXLINE(  17)			if (::hx::IsNull( value )) {
HXLINE(  18)				value = HX_("",00,00,00,00);
            			}
HXLINE(  20)			if ((style == 0)) {
HXLINE(  21)				style = ((::wx::widgets::Defs_obj::OK | ::wx::widgets::Defs_obj::CANCEL) | ::wx::widgets::Defs_obj::CENTRE);
            			}
HXLINE(  24)			const char* this1 = message.utf8_str();
HXDLIN(  24)			 wxString messageStr = wxString::FromUTF8(this1);
HXLINE(  25)			const char* this2 = caption.utf8_str();
HXDLIN(  25)			 wxString captionStr = wxString::FromUTF8(this2);
HXLINE(  26)			const char* this3 = value.utf8_str();
HXDLIN(  26)			 wxString valueStr = wxString::FromUTF8(this3);
HXLINE(  27)			::cpp::Pointer<  wxTextEntryDialog > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxTextEntryDialog(::hx::widgets::Window_obj::toRaw(parent),messageStr,captionStr,valueStr,style)));
HXDLIN(  27)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  30)		super::__construct(parent,null(),null(),null());
            	}

Dynamic TextEntryDialog_obj::__CreateEmpty() { return new TextEntryDialog_obj; }

void *TextEntryDialog_obj::_hx_vtable = 0;

Dynamic TextEntryDialog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextEntryDialog_obj > _hx_result = new TextEntryDialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TextEntryDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0297e1fa) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0297e1fa;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x3ade267e || inClassId==(int)0x467ba226;
		}
	} else {
		if (inClassId<=(int)0x5d92cb6f) {
			return inClassId==(int)0x4af00867 || inClassId==(int)0x5d92cb6f;
		} else {
			return inClassId==(int)0x6ace4963;
		}
	}
}

::cpp::Pointer<  wxTextEntryDialog > TextEntryDialog_obj::get_textEntryDialogRef(){
            	HX_STACKFRAME(&_hx_pos_7467d0101989961e_38_get_textEntryDialogRef)
HXDLIN(  38)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEntryDialog_obj,get_textEntryDialogRef,return )


::hx::ObjectPtr< TextEntryDialog_obj > TextEntryDialog_obj::__new( ::hx::widgets::Window parent,::String message,::String caption,::String value,::hx::Null< int >  __o_style) {
	::hx::ObjectPtr< TextEntryDialog_obj > __this = new TextEntryDialog_obj();
	__this->__construct(parent,message,caption,value,__o_style);
	return __this;
}

::hx::ObjectPtr< TextEntryDialog_obj > TextEntryDialog_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String caption,::String value,::hx::Null< int >  __o_style) {
	TextEntryDialog_obj *__this = (TextEntryDialog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextEntryDialog_obj), true, "hx.widgets.TextEntryDialog"));
	*(void **)__this = TextEntryDialog_obj::_hx_vtable;
	__this->__construct(parent,message,caption,value,__o_style);
	return __this;
}

TextEntryDialog_obj::TextEntryDialog_obj()
{
}

void TextEntryDialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEntryDialog);
	HX_MARK_MEMBER_NAME(textEntryDialogRef,"textEntryDialogRef");
	 ::hx::widgets::Dialog_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextEntryDialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textEntryDialogRef,"textEntryDialogRef");
	 ::hx::widgets::Dialog_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextEntryDialog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"textEntryDialogRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textEntryDialogRef() : textEntryDialogRef ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_textEntryDialogRef") ) { return ::hx::Val( get_textEntryDialogRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextEntryDialog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"textEntryDialogRef") ) { textEntryDialogRef=inValue.Cast< ::cpp::Pointer<  wxTextEntryDialog > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEntryDialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textEntryDialogRef",26,d8,46,fe));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextEntryDialog_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxTextEntryDialog > */ ,(int)offsetof(TextEntryDialog_obj,textEntryDialogRef),HX_("textEntryDialogRef",26,d8,46,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextEntryDialog_obj_sStaticStorageInfo = 0;
#endif

static ::String TextEntryDialog_obj_sMemberFields[] = {
	HX_("textEntryDialogRef",26,d8,46,fe),
	HX_("get_textEntryDialogRef",6f,51,db,57),
	::String(null()) };

::hx::Class TextEntryDialog_obj::__mClass;

void TextEntryDialog_obj::__register()
{
	TextEntryDialog_obj _hx_dummy;
	TextEntryDialog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.TextEntryDialog",70,99,4b,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextEntryDialog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextEntryDialog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEntryDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEntryDialog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
