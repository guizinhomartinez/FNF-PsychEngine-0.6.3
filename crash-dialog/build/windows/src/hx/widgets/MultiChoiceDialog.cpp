#include <hxcpp.h>

#ifndef INCLUDED_d17caf3128e9a450
#define INCLUDED_d17caf3128e9a450
#include "wx/arrstr.h"
#endif
#ifndef INCLUDED_35ec6388f6e8821f
#define INCLUDED_35ec6388f6e8821f
#include "wx/choicdlg.h"
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
#ifndef INCLUDED_hx_widgets_ArrayString
#include <hx/widgets/ArrayString.h>
#endif
#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_MultiChoiceDialog
#include <hx/widgets/MultiChoiceDialog.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0865d0a6201f439f_9_new,"hx.widgets.MultiChoiceDialog","new",0xc3757397,"hx.widgets.MultiChoiceDialog.new","hx/widgets/MultiChoiceDialog.hx",9,0xf98401bb)
namespace hx{
namespace widgets{

void MultiChoiceDialog_obj::__construct( ::hx::widgets::Window parent,::String message,::String caption,::Array< ::String > choices){
            	HX_STACKFRAME(&_hx_pos_0865d0a6201f439f_9_new)
HXLINE(  10)		if (::hx::IsNull( this->_ref )) {
HXLINE(  11)			if (::hx::IsNull( message )) {
HXLINE(  12)				message = HX_("",00,00,00,00);
            			}
HXLINE(  14)			if (::hx::IsNull( caption )) {
HXLINE(  15)				caption = HX_("",00,00,00,00);
            			}
HXLINE(  17)			if (::hx::IsNull( choices )) {
HXLINE(  18)				choices = ::Array_obj< ::String >::__new(0);
            			}
HXLINE(  20)			const char* this1 = message.utf8_str();
HXDLIN(  20)			 wxString messageStr = wxString::FromUTF8(this1);
HXLINE(  21)			const char* this2 = caption.utf8_str();
HXDLIN(  21)			 wxString captionStr = wxString::FromUTF8(this2);
HXLINE(  22)			 ::hx::widgets::ArrayString choicesArr = ::hx::widgets::ArrayString_obj::fromArray(choices);
HXLINE(  23)			 wxWindow* parent1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  23)			::cpp::Pointer<  wxMultiChoiceDialog > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxMultiChoiceDialog(parent1,messageStr,captionStr,choicesArr->get_arraystringRef()->get_ref())));
HXDLIN(  23)			this->_ref = _hx_tmp->reinterpret();
HXLINE(  24)			choicesArr->destroy();
            		}
HXLINE(  27)		super::__construct(parent,null(),null(),null());
            	}

Dynamic MultiChoiceDialog_obj::__CreateEmpty() { return new MultiChoiceDialog_obj; }

void *MultiChoiceDialog_obj::_hx_vtable = 0;

Dynamic MultiChoiceDialog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MultiChoiceDialog_obj > _hx_result = new MultiChoiceDialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool MultiChoiceDialog_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x6ace4963) {
			return inClassId==(int)0x5d92cb6f || inClassId==(int)0x6ace4963;
		} else {
			return inClassId==(int)0x7dbb2a03;
		}
	}
}


::hx::ObjectPtr< MultiChoiceDialog_obj > MultiChoiceDialog_obj::__new( ::hx::widgets::Window parent,::String message,::String caption,::Array< ::String > choices) {
	::hx::ObjectPtr< MultiChoiceDialog_obj > __this = new MultiChoiceDialog_obj();
	__this->__construct(parent,message,caption,choices);
	return __this;
}

::hx::ObjectPtr< MultiChoiceDialog_obj > MultiChoiceDialog_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String caption,::Array< ::String > choices) {
	MultiChoiceDialog_obj *__this = (MultiChoiceDialog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MultiChoiceDialog_obj), true, "hx.widgets.MultiChoiceDialog"));
	*(void **)__this = MultiChoiceDialog_obj::_hx_vtable;
	__this->__construct(parent,message,caption,choices);
	return __this;
}

MultiChoiceDialog_obj::MultiChoiceDialog_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MultiChoiceDialog_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MultiChoiceDialog_obj_sStaticStorageInfo = 0;
#endif

::hx::Class MultiChoiceDialog_obj::__mClass;

void MultiChoiceDialog_obj::__register()
{
	MultiChoiceDialog_obj _hx_dummy;
	MultiChoiceDialog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.MultiChoiceDialog",25,5c,88,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MultiChoiceDialog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MultiChoiceDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MultiChoiceDialog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
