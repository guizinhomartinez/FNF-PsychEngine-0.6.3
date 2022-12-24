#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_3f256efeda3a1a55
#define INCLUDED_3f256efeda3a1a55
#include "wx/sizer.h"
#endif
#ifndef INCLUDED_77d84a928fbcf10b
#define INCLUDED_77d84a928fbcf10b
#include "wx/statbox.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
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
#ifndef INCLUDED_hx_widgets_StaticBox
#include <hx/widgets/StaticBox.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBoxSizer
#include <hx/widgets/StaticBoxSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fa194870d3605e59_11_new,"hx.widgets.StaticBoxSizer","new",0xdabd69e3,"hx.widgets.StaticBoxSizer.new","hx/widgets/StaticBoxSizer.hx",11,0xc3e5f7ab)
HX_LOCAL_STACK_FRAME(_hx_pos_fa194870d3605e59_26_get_staticBox,"hx.widgets.StaticBoxSizer","get_staticBox",0x8002c917,"hx.widgets.StaticBoxSizer.get_staticBox","hx/widgets/StaticBoxSizer.hx",26,0xc3e5f7ab)
HX_LOCAL_STACK_FRAME(_hx_pos_fa194870d3605e59_38_get_staticBoxSizerRef,"hx.widgets.StaticBoxSizer","get_staticBoxSizerRef",0xa5686d79,"hx.widgets.StaticBoxSizer.get_staticBoxSizerRef","hx/widgets/StaticBoxSizer.hx",38,0xc3e5f7ab)
namespace hx{
namespace widgets{

void StaticBoxSizer_obj::__construct( cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String __o_title){
            		::String title = __o_title;
            		if (::hx::IsNull(__o_title)) title = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_fa194870d3605e59_11_new)
HXLINE(  12)		if (::hx::IsNull( this->_ref )) {
HXLINE(  13)			if (::hx::IsNotNull( title )) {
HXLINE(  14)				const char* this1 = title.utf8_str();
HXDLIN(  14)				 wxString str = wxString::FromUTF8(this1);
HXLINE(  15)				::cpp::Pointer<  wxStaticBoxSizer > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxStaticBoxSizer(orient,::hx::widgets::Window_obj::toRaw(window),str)));
HXDLIN(  15)				this->_ref = _hx_tmp->reinterpret();
            			}
            		}
HXLINE(  21)		super::__construct(null());
            	}

Dynamic StaticBoxSizer_obj::__CreateEmpty() { return new StaticBoxSizer_obj; }

void *StaticBoxSizer_obj::_hx_vtable = 0;

Dynamic StaticBoxSizer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticBoxSizer_obj > _hx_result = new StaticBoxSizer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool StaticBoxSizer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0643d327) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0643d327;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x56489aba || inClassId==(int)0x7a9a47c5;
	}
}

 ::hx::widgets::StaticBox StaticBoxSizer_obj::get_staticBox(){
            	HX_STACKFRAME(&_hx_pos_fa194870d3605e59_26_get_staticBox)
HXLINE(  27)		 wxStaticBox* p = this->get_staticBoxSizerRef()->ptr->GetStaticBox();
HXLINE(  28)		 ::hx::widgets::StaticBox t = ( ( ::hx::widgets::StaticBox)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::hx::widgets::StaticBox >())) );
HXLINE(  29)		t->_ref = ::cpp::Pointer_obj::fromRaw(p)->reinterpret();
HXLINE(  30)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StaticBoxSizer_obj,get_staticBox,return )

::cpp::Pointer<  wxStaticBoxSizer > StaticBoxSizer_obj::get_staticBoxSizerRef(){
            	HX_STACKFRAME(&_hx_pos_fa194870d3605e59_38_get_staticBoxSizerRef)
HXDLIN(  38)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StaticBoxSizer_obj,get_staticBoxSizerRef,return )


::hx::ObjectPtr< StaticBoxSizer_obj > StaticBoxSizer_obj::__new( cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String __o_title) {
	::hx::ObjectPtr< StaticBoxSizer_obj > __this = new StaticBoxSizer_obj();
	__this->__construct(orient,window,__o_title);
	return __this;
}

::hx::ObjectPtr< StaticBoxSizer_obj > StaticBoxSizer_obj::__alloc(::hx::Ctx *_hx_ctx, cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String __o_title) {
	StaticBoxSizer_obj *__this = (StaticBoxSizer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticBoxSizer_obj), true, "hx.widgets.StaticBoxSizer"));
	*(void **)__this = StaticBoxSizer_obj::_hx_vtable;
	__this->__construct(orient,window,__o_title);
	return __this;
}

StaticBoxSizer_obj::StaticBoxSizer_obj()
{
}

void StaticBoxSizer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticBoxSizer);
	HX_MARK_MEMBER_NAME(staticBox,"staticBox");
	HX_MARK_MEMBER_NAME(staticBoxSizerRef,"staticBoxSizerRef");
	 ::hx::widgets::Sizer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticBoxSizer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(staticBox,"staticBox");
	HX_VISIT_MEMBER_NAME(staticBoxSizerRef,"staticBoxSizerRef");
	 ::hx::widgets::Sizer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StaticBoxSizer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"staticBox") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_staticBox() : staticBox ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_staticBox") ) { return ::hx::Val( get_staticBox_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"staticBoxSizerRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_staticBoxSizerRef() : staticBoxSizerRef ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_staticBoxSizerRef") ) { return ::hx::Val( get_staticBoxSizerRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StaticBoxSizer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"staticBox") ) { staticBox=inValue.Cast<  ::hx::widgets::StaticBox >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"staticBoxSizerRef") ) { staticBoxSizerRef=inValue.Cast< ::cpp::Pointer<  wxStaticBoxSizer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticBoxSizer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("staticBox",fd,39,0b,87));
	outFields->push(HX_("staticBoxSizerRef",5f,34,45,17));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StaticBoxSizer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::StaticBox */ ,(int)offsetof(StaticBoxSizer_obj,staticBox),HX_("staticBox",fd,39,0b,87)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStaticBoxSizer > */ ,(int)offsetof(StaticBoxSizer_obj,staticBoxSizerRef),HX_("staticBoxSizerRef",5f,34,45,17)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StaticBoxSizer_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticBoxSizer_obj_sMemberFields[] = {
	HX_("staticBox",fd,39,0b,87),
	HX_("get_staticBox",d4,0d,6f,48),
	HX_("staticBoxSizerRef",5f,34,45,17),
	HX_("get_staticBoxSizerRef",36,37,f3,95),
	::String(null()) };

::hx::Class StaticBoxSizer_obj::__mClass;

void StaticBoxSizer_obj::__register()
{
	StaticBoxSizer_obj _hx_dummy;
	StaticBoxSizer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StaticBoxSizer",71,3c,ec,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticBoxSizer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticBoxSizer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticBoxSizer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticBoxSizer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
