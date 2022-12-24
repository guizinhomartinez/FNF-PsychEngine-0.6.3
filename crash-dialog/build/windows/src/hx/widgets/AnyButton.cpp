#include <hxcpp.h>

#ifndef INCLUDED_5ecb25d8c63467a7
#define INCLUDED_5ecb25d8c63467a7
#include "wx/anybutton.h"
#endif
#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_ba6509720fa912ce
#define INCLUDED_ba6509720fa912ce
#include "wx/defs.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Image
#include <hx/widgets/Image.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b03ab8900d019fad_7_new,"hx.widgets.AnyButton","new",0x13dd8173,"hx.widgets.AnyButton.new","hx/widgets/AnyButton.hx",7,0x026a915f)
HX_LOCAL_STACK_FRAME(_hx_pos_b03ab8900d019fad_16_get_bitmap,"hx.widgets.AnyButton","get_bitmap",0x60d06705,"hx.widgets.AnyButton.get_bitmap","hx/widgets/AnyButton.hx",16,0x026a915f)
HX_LOCAL_STACK_FRAME(_hx_pos_b03ab8900d019fad_23_set_bitmap,"hx.widgets.AnyButton","set_bitmap",0x644e0579,"hx.widgets.AnyButton.set_bitmap","hx/widgets/AnyButton.hx",23,0x026a915f)
HX_LOCAL_STACK_FRAME(_hx_pos_b03ab8900d019fad_33_set_bitmapPosition,"hx.widgets.AnyButton","set_bitmapPosition",0x72220342,"hx.widgets.AnyButton.set_bitmapPosition","hx/widgets/AnyButton.hx",33,0x026a915f)
HX_LOCAL_STACK_FRAME(_hx_pos_b03ab8900d019fad_49_get_anyButtonRef,"hx.widgets.AnyButton","get_anyButtonRef",0x171e658b,"hx.widgets.AnyButton.get_anyButtonRef","hx/widgets/AnyButton.hx",49,0x026a915f)
namespace hx{
namespace widgets{

void AnyButton_obj::__construct( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_b03ab8900d019fad_7_new)
HXDLIN(   7)		super::__construct(parent,style,id);
            	}

Dynamic AnyButton_obj::__CreateEmpty() { return new AnyButton_obj; }

void *AnyButton_obj::_hx_vtable = 0;

Dynamic AnyButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnyButton_obj > _hx_result = new AnyButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AnyButton_obj::_hx_isInstanceOf(int inClassId) {
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
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

 ::hx::widgets::Bitmap AnyButton_obj::get_bitmap(){
            	HX_GC_STACKFRAME(&_hx_pos_b03ab8900d019fad_16_get_bitmap)
HXLINE(  17)		 wxBitmap b = this->get_anyButtonRef()->ptr->GetBitmap();
HXLINE(  18)		 ::hx::widgets::Bitmap bmp =  ::hx::widgets::Bitmap_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  19)		bmp->_ref = ::cpp::Pointer_obj::fromRaw((new wxBitmap(b)))->reinterpret();
HXLINE(  20)		return bmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnyButton_obj,get_bitmap,return )

 ::hx::widgets::Bitmap AnyButton_obj::set_bitmap( ::hx::widgets::Bitmap value){
            	HX_STACKFRAME(&_hx_pos_b03ab8900d019fad_23_set_bitmap)
HXLINE(  24)		 wxAnyButton * _hx_tmp = this->get_anyButtonRef()->ptr;
HXDLIN(  24)		(*(_hx_tmp)).SetBitmap(value->get_bitmapRef()->get_ref());
HXLINE(  25)		if (!(this->_hasBitmap)) {
HXLINE(  26)			this->_hasBitmap = true;
HXLINE(  27)			this->set_bitmapPosition(this->bitmapPosition);
            		}
HXLINE(  29)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnyButton_obj,set_bitmap,return )

 cpp::Struct<wxDirection, cpp::EnumHandler> AnyButton_obj::set_bitmapPosition( cpp::Struct<wxDirection, cpp::EnumHandler> value){
            	HX_STACKFRAME(&_hx_pos_b03ab8900d019fad_33_set_bitmapPosition)
HXLINE(  34)		this->bitmapPosition = value;
HXLINE(  35)		if (!(this->_hasBitmap)) {
HXLINE(  36)			return value;
            		}
HXLINE(  39)		this->get_anyButtonRef()->ptr->SetBitmapPosition(value);
HXLINE(  40)		return value;
            	}


::cpp::Pointer<  wxAnyButton > AnyButton_obj::get_anyButtonRef(){
            	HX_STACKFRAME(&_hx_pos_b03ab8900d019fad_49_get_anyButtonRef)
HXDLIN(  49)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnyButton_obj,get_anyButtonRef,return )


::hx::ObjectPtr< AnyButton_obj > AnyButton_obj::__new( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id) {
	::hx::ObjectPtr< AnyButton_obj > __this = new AnyButton_obj();
	__this->__construct(parent,style,id);
	return __this;
}

::hx::ObjectPtr< AnyButton_obj > AnyButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id) {
	AnyButton_obj *__this = (AnyButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnyButton_obj), true, "hx.widgets.AnyButton"));
	*(void **)__this = AnyButton_obj::_hx_vtable;
	__this->__construct(parent,style,id);
	return __this;
}

AnyButton_obj::AnyButton_obj()
{
}

void AnyButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnyButton);
	HX_MARK_MEMBER_NAME(_hasBitmap,"_hasBitmap");
	HX_MARK_MEMBER_NAME(bitmapPosition,"bitmapPosition");
	HX_MARK_MEMBER_NAME(anyButtonRef,"anyButtonRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnyButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hasBitmap,"_hasBitmap");
	HX_VISIT_MEMBER_NAME(bitmapPosition,"bitmapPosition");
	HX_VISIT_MEMBER_NAME(anyButtonRef,"anyButtonRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnyButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bitmap() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hasBitmap") ) { return ::hx::Val( _hasBitmap ); }
		if (HX_FIELD_EQ(inName,"get_bitmap") ) { return ::hx::Val( get_bitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return ::hx::Val( set_bitmap_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"anyButtonRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_anyButtonRef() : anyButtonRef ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_anyButtonRef") ) { return ::hx::Val( get_anyButtonRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnyButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bitmap(inValue.Cast<  ::hx::widgets::Bitmap >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hasBitmap") ) { _hasBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"anyButtonRef") ) { anyButtonRef=inValue.Cast< ::cpp::Pointer<  wxAnyButton > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnyButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_hasBitmap",aa,3e,97,8d));
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	outFields->push(HX_("bitmapPosition",b8,73,40,96));
	outFields->push(HX_("anyButtonRef",f5,99,26,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnyButton_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(AnyButton_obj,_hasBitmap),HX_("_hasBitmap",aa,3e,97,8d)},
	{::hx::fsUnknown /*  cpp::Struct<wxDirection, cpp::EnumHandler> */ ,(int)offsetof(AnyButton_obj,bitmapPosition),HX_("bitmapPosition",b8,73,40,96)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxAnyButton > */ ,(int)offsetof(AnyButton_obj,anyButtonRef),HX_("anyButtonRef",f5,99,26,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnyButton_obj_sStaticStorageInfo = 0;
#endif

static ::String AnyButton_obj_sMemberFields[] = {
	HX_("_hasBitmap",aa,3e,97,8d),
	HX_("get_bitmap",b8,7f,93,e1),
	HX_("set_bitmap",2c,1e,11,e5),
	HX_("anyButtonRef",f5,99,26,1e),
	HX_("get_anyButtonRef",7e,86,c5,22),
	::String(null()) };

::hx::Class AnyButton_obj::__mClass;

void AnyButton_obj::__register()
{
	AnyButton_obj _hx_dummy;
	AnyButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.AnyButton",01,4c,25,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnyButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnyButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnyButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnyButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
