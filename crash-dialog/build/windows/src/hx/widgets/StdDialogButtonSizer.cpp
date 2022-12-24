#include <hxcpp.h>

#ifndef INCLUDED_01922b43f2a15a43
#define INCLUDED_01922b43f2a15a43
#include "wx/button.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_3f256efeda3a1a55
#define INCLUDED_3f256efeda3a1a55
#include "wx/sizer.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
#endif
#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
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
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif
#ifndef INCLUDED_hx_widgets_StdDialogButtonSizer
#include <hx/widgets/StdDialogButtonSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c5f3ac489ce10fde_9_new,"hx.widgets.StdDialogButtonSizer","new",0xba453583,"hx.widgets.StdDialogButtonSizer.new","hx/widgets/StdDialogButtonSizer.hx",9,0xfddaa28b)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f3ac489ce10fde_15_addButton,"hx.widgets.StdDialogButtonSizer","addButton",0x7dfef856,"hx.widgets.StdDialogButtonSizer.addButton","hx/widgets/StdDialogButtonSizer.hx",15,0xfddaa28b)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f3ac489ce10fde_21_realize,"hx.widgets.StdDialogButtonSizer","realize",0xae39ed59,"hx.widgets.StdDialogButtonSizer.realize","hx/widgets/StdDialogButtonSizer.hx",21,0xfddaa28b)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f3ac489ce10fde_29_get_stdDialogButtonSizerRef,"hx.widgets.StdDialogButtonSizer","get_stdDialogButtonSizerRef",0xfd804cb9,"hx.widgets.StdDialogButtonSizer.get_stdDialogButtonSizerRef","hx/widgets/StdDialogButtonSizer.hx",29,0xfddaa28b)
namespace hx{
namespace widgets{

void StdDialogButtonSizer_obj::__construct(::cpp::Pointer<  wxStdDialogButtonSizer > ref){
            	HX_STACKFRAME(&_hx_pos_c5f3ac489ce10fde_9_new)
HXLINE(  10)		this->_ref = ref->reinterpret();
HXLINE(  11)		super::__construct(null());
            	}

Dynamic StdDialogButtonSizer_obj::__CreateEmpty() { return new StdDialogButtonSizer_obj; }

void *StdDialogButtonSizer_obj::_hx_vtable = 0;

Dynamic StdDialogButtonSizer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StdDialogButtonSizer_obj > _hx_result = new StdDialogButtonSizer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StdDialogButtonSizer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x26fdaf0f) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x26fdaf0f;
		}
	} else {
		return inClassId==(int)0x56489aba || inClassId==(int)0x7a9a47c5;
	}
}

void StdDialogButtonSizer_obj::addButton( ::hx::widgets::Button button){
            	HX_STACKFRAME(&_hx_pos_c5f3ac489ce10fde_15_addButton)
HXLINE(  16)		 wxButton* buttonPtr = button->get_buttonRef()->get_raw();
HXLINE(  17)		this->get_stdDialogButtonSizerRef()->ptr->AddButton(buttonPtr);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StdDialogButtonSizer_obj,addButton,(void))

void StdDialogButtonSizer_obj::realize(){
            	HX_STACKFRAME(&_hx_pos_c5f3ac489ce10fde_21_realize)
HXDLIN(  21)		this->get_stdDialogButtonSizerRef()->ptr->Realize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StdDialogButtonSizer_obj,realize,(void))

::cpp::Pointer<  wxStdDialogButtonSizer > StdDialogButtonSizer_obj::get_stdDialogButtonSizerRef(){
            	HX_STACKFRAME(&_hx_pos_c5f3ac489ce10fde_29_get_stdDialogButtonSizerRef)
HXDLIN(  29)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StdDialogButtonSizer_obj,get_stdDialogButtonSizerRef,return )


::hx::ObjectPtr< StdDialogButtonSizer_obj > StdDialogButtonSizer_obj::__new(::cpp::Pointer<  wxStdDialogButtonSizer > ref) {
	::hx::ObjectPtr< StdDialogButtonSizer_obj > __this = new StdDialogButtonSizer_obj();
	__this->__construct(ref);
	return __this;
}

::hx::ObjectPtr< StdDialogButtonSizer_obj > StdDialogButtonSizer_obj::__alloc(::hx::Ctx *_hx_ctx,::cpp::Pointer<  wxStdDialogButtonSizer > ref) {
	StdDialogButtonSizer_obj *__this = (StdDialogButtonSizer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StdDialogButtonSizer_obj), true, "hx.widgets.StdDialogButtonSizer"));
	*(void **)__this = StdDialogButtonSizer_obj::_hx_vtable;
	__this->__construct(ref);
	return __this;
}

StdDialogButtonSizer_obj::StdDialogButtonSizer_obj()
{
}

void StdDialogButtonSizer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StdDialogButtonSizer);
	HX_MARK_MEMBER_NAME(stdDialogButtonSizerRef,"stdDialogButtonSizerRef");
	 ::hx::widgets::Sizer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StdDialogButtonSizer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stdDialogButtonSizerRef,"stdDialogButtonSizerRef");
	 ::hx::widgets::Sizer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StdDialogButtonSizer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"realize") ) { return ::hx::Val( realize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addButton") ) { return ::hx::Val( addButton_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"stdDialogButtonSizerRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_stdDialogButtonSizerRef() : stdDialogButtonSizerRef ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_stdDialogButtonSizerRef") ) { return ::hx::Val( get_stdDialogButtonSizerRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StdDialogButtonSizer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"stdDialogButtonSizerRef") ) { stdDialogButtonSizerRef=inValue.Cast< ::cpp::Pointer<  wxStdDialogButtonSizer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StdDialogButtonSizer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("stdDialogButtonSizerRef",7f,98,a8,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StdDialogButtonSizer_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStdDialogButtonSizer > */ ,(int)offsetof(StdDialogButtonSizer_obj,stdDialogButtonSizerRef),HX_("stdDialogButtonSizerRef",7f,98,a8,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StdDialogButtonSizer_obj_sStaticStorageInfo = 0;
#endif

static ::String StdDialogButtonSizer_obj_sMemberFields[] = {
	HX_("addButton",f3,96,04,92),
	HX_("realize",b6,ba,2b,08),
	HX_("stdDialogButtonSizerRef",7f,98,a8,d5),
	HX_("get_stdDialogButtonSizerRef",96,d6,4a,a2),
	::String(null()) };

::hx::Class StdDialogButtonSizer_obj::__mClass;

void StdDialogButtonSizer_obj::__register()
{
	StdDialogButtonSizer_obj _hx_dummy;
	StdDialogButtonSizer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StdDialogButtonSizer",11,b8,7d,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StdDialogButtonSizer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StdDialogButtonSizer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StdDialogButtonSizer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StdDialogButtonSizer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
