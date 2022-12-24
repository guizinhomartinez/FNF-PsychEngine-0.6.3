#include <hxcpp.h>

#ifndef INCLUDED_61b65e184b2fc75a
#define INCLUDED_61b65e184b2fc75a
#include "wx/dialog.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_3f256efeda3a1a55
#define INCLUDED_3f256efeda3a1a55
#include "wx/sizer.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
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
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif
#ifndef INCLUDED_hx_widgets_StdDialogButtonSizer
#include <hx/widgets/StdDialogButtonSizer.h>
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
#ifndef INCLUDED_wx_widgets_styles_DialogStyle
#include <wx/widgets/styles/DialogStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dcf451d3e674acef_17_new,"hx.widgets.Dialog","new",0xd0d0ea57,"hx.widgets.Dialog.new","hx/widgets/Dialog.hx",17,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_34_showModal,"hx.widgets.Dialog","showModal",0xbec7f327,"hx.widgets.Dialog.showModal","hx/widgets/Dialog.hx",34,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_38_endModal,"hx.widgets.Dialog","endModal",0x02e418fb,"hx.widgets.Dialog.endModal","hx/widgets/Dialog.hx",38,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_43_get_isModal,"hx.widgets.Dialog","get_isModal",0x5e828cf1,"hx.widgets.Dialog.get_isModal","hx/widgets/Dialog.hx",43,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_47_addMainButtonId,"hx.widgets.Dialog","addMainButtonId",0x4239f3fe,"hx.widgets.Dialog.addMainButtonId","hx/widgets/Dialog.hx",47,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_50_createSeparatedButtonSizer,"hx.widgets.Dialog","createSeparatedButtonSizer",0x87895923,"hx.widgets.Dialog.createSeparatedButtonSizer","hx/widgets/Dialog.hx",50,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_57_createStdDialogButtonSizer,"hx.widgets.Dialog","createStdDialogButtonSizer",0x89a6af39,"hx.widgets.Dialog.createStdDialogButtonSizer","hx/widgets/Dialog.hx",57,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_69_get_dialogRef,"hx.widgets.Dialog","get_dialogRef",0xf92c61f9,"hx.widgets.Dialog.get_dialogRef","hx/widgets/Dialog.hx",69,0x8c7153b7)
namespace hx{
namespace widgets{

void Dialog_obj::__construct( ::hx::widgets::Window parent,::String title,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_17_new)
HXLINE(  18)		if ((style == 0)) {
HXLINE(  19)			style = ::wx::widgets::styles::DialogStyle_obj::DEFAULT_DIALOG_STYLE;
            		}
HXLINE(  21)		if (::hx::IsNull( this->_ref )) {
HXLINE(  22)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxDialog()))->reinterpret();
HXLINE(  23)			const char* this1 = title.utf8_str();
HXDLIN(  23)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  24)			 wxDialog * _hx_tmp = this->get_dialogRef()->ptr;
HXDLIN(  24)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  24)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  24)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  24)			(*(_hx_tmp)).Create(_hx_tmp1,id,str,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  27)		super::__construct(parent,id);
            	}

Dynamic Dialog_obj::__CreateEmpty() { return new Dialog_obj; }

void *Dialog_obj::_hx_vtable = 0;

Dynamic Dialog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Dialog_obj > _hx_result = new Dialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Dialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x3ade267e) {
			if (inClassId<=(int)0x2045b63e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
			} else {
				return inClassId==(int)0x3ade267e;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		if (inClassId<=(int)0x5d92cb6f) {
			return inClassId==(int)0x4af00867 || inClassId==(int)0x5d92cb6f;
		} else {
			return inClassId==(int)0x6ace4963;
		}
	}
}

int Dialog_obj::showModal(){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_34_showModal)
HXDLIN(  34)		return this->get_dialogRef()->ptr->ShowModal();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dialog_obj,showModal,return )

void Dialog_obj::endModal(int retCode){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_38_endModal)
HXDLIN(  38)		this->get_dialogRef()->ptr->EndModal(retCode);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,endModal,(void))

bool Dialog_obj::get_isModal(){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_43_get_isModal)
HXDLIN(  43)		return this->get_dialogRef()->ptr->IsModal();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dialog_obj,get_isModal,return )

void Dialog_obj::addMainButtonId(int id){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_47_addMainButtonId)
HXDLIN(  47)		this->get_dialogRef()->ptr->AddMainButtonId(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,addMainButtonId,(void))

 ::hx::widgets::Sizer Dialog_obj::createSeparatedButtonSizer(int flags){
            	HX_GC_STACKFRAME(&_hx_pos_dcf451d3e674acef_50_createSeparatedButtonSizer)
HXLINE(  51)		 wxSizer* p = this->get_dialogRef()->ptr->CreateSeparatedButtonSizer(flags);
HXLINE(  52)		 ::hx::widgets::Sizer sizer =  ::hx::widgets::Sizer_obj::__alloc( HX_CTX );
HXLINE(  53)		sizer->_ref = ::cpp::Pointer_obj::fromRaw(p)->reinterpret();
HXLINE(  54)		return sizer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,createSeparatedButtonSizer,return )

 ::hx::widgets::StdDialogButtonSizer Dialog_obj::createStdDialogButtonSizer(int flags){
            	HX_GC_STACKFRAME(&_hx_pos_dcf451d3e674acef_57_createStdDialogButtonSizer)
HXLINE(  58)		 wxStdDialogButtonSizer* p = this->get_dialogRef()->ptr->CreateStdDialogButtonSizer(flags);
HXLINE(  59)		::cpp::Pointer<  wxStdDialogButtonSizer > sizer = ::cpp::Pointer_obj::fromRaw(p);
HXDLIN(  59)		 ::hx::widgets::StdDialogButtonSizer sizer1 =  ::hx::widgets::StdDialogButtonSizer_obj::__alloc( HX_CTX ,sizer);
HXLINE(  60)		return sizer1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,createStdDialogButtonSizer,return )

::cpp::Pointer<  wxDialog > Dialog_obj::get_dialogRef(){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_69_get_dialogRef)
HXDLIN(  69)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dialog_obj,get_dialogRef,return )


::hx::ObjectPtr< Dialog_obj > Dialog_obj::__new( ::hx::widgets::Window parent,::String title,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< Dialog_obj > __this = new Dialog_obj();
	__this->__construct(parent,title,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< Dialog_obj > Dialog_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String title,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	Dialog_obj *__this = (Dialog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Dialog_obj), true, "hx.widgets.Dialog"));
	*(void **)__this = Dialog_obj::_hx_vtable;
	__this->__construct(parent,title,__o_style,__o_id);
	return __this;
}

Dialog_obj::Dialog_obj()
{
}

void Dialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dialog);
	HX_MARK_MEMBER_NAME(isModal,"isModal");
	HX_MARK_MEMBER_NAME(dialogRef,"dialogRef");
	 ::hx::widgets::TopLevelWindow_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Dialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isModal,"isModal");
	HX_VISIT_MEMBER_NAME(dialogRef,"dialogRef");
	 ::hx::widgets::TopLevelWindow_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Dialog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isModal") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isModal() : isModal ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endModal") ) { return ::hx::Val( endModal_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showModal") ) { return ::hx::Val( showModal_dyn() ); }
		if (HX_FIELD_EQ(inName,"dialogRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dialogRef() : dialogRef ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isModal") ) { return ::hx::Val( get_isModal_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_dialogRef") ) { return ::hx::Val( get_dialogRef_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addMainButtonId") ) { return ::hx::Val( addMainButtonId_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"createSeparatedButtonSizer") ) { return ::hx::Val( createSeparatedButtonSizer_dyn() ); }
		if (HX_FIELD_EQ(inName,"createStdDialogButtonSizer") ) { return ::hx::Val( createStdDialogButtonSizer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Dialog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isModal") ) { isModal=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dialogRef") ) { dialogRef=inValue.Cast< ::cpp::Pointer<  wxDialog > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isModal",e3,c3,dd,a8));
	outFields->push(HX_("dialogRef",6b,b9,f8,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Dialog_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Dialog_obj,isModal),HX_("isModal",e3,c3,dd,a8)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDialog > */ ,(int)offsetof(Dialog_obj,dialogRef),HX_("dialogRef",6b,b9,f8,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Dialog_obj_sStaticStorageInfo = 0;
#endif

static ::String Dialog_obj_sMemberFields[] = {
	HX_("showModal",f0,85,bc,3a),
	HX_("endModal",52,b2,55,0a),
	HX_("isModal",e3,c3,dd,a8),
	HX_("get_isModal",fa,23,d8,2e),
	HX_("addMainButtonId",87,43,42,11),
	HX_("createSeparatedButtonSizer",3a,14,c7,c7),
	HX_("createStdDialogButtonSizer",50,6a,e4,c9),
	HX_("dialogRef",6b,b9,f8,f9),
	HX_("get_dialogRef",42,8d,5c,bb),
	::String(null()) };

::hx::Class Dialog_obj::__mClass;

void Dialog_obj::__register()
{
	Dialog_obj _hx_dummy;
	Dialog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Dialog",e5,72,b1,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Dialog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Dialog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dialog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
