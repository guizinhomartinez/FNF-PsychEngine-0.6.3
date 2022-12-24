#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_04e4e804b5ca744c
#define INCLUDED_04e4e804b5ca744c
#include "wx/icon.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Icon
#include <hx/widgets/Icon.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7965e0fa34ea2bb4_8_new,"hx.widgets.Icon","new",0xdb762848,"hx.widgets.Icon.new","hx/widgets/Icon.hx",8,0x197a1366)
HX_LOCAL_STACK_FRAME(_hx_pos_7965e0fa34ea2bb4_15_copyFromBitmap,"hx.widgets.Icon","copyFromBitmap",0x9739ca26,"hx.widgets.Icon.copyFromBitmap","hx/widgets/Icon.hx",15,0x197a1366)
HX_LOCAL_STACK_FRAME(_hx_pos_7965e0fa34ea2bb4_23_get_iconRef,"hx.widgets.Icon","get_iconRef",0x5ea3bb59,"hx.widgets.Icon.get_iconRef","hx/widgets/Icon.hx",23,0x197a1366)
namespace hx{
namespace widgets{

void Icon_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7965e0fa34ea2bb4_8_new)
HXDLIN(   8)		super::__construct();
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxIcon()))->reinterpret();
            		}
            	}

Dynamic Icon_obj::__CreateEmpty() { return new Icon_obj; }

void *Icon_obj::_hx_vtable = 0;

Dynamic Icon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Icon_obj > _hx_result = new Icon_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Icon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0162a16c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0162a16c;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x6f13f138;
	}
}

void Icon_obj::copyFromBitmap( ::hx::widgets::Bitmap bmp){
            	HX_STACKFRAME(&_hx_pos_7965e0fa34ea2bb4_15_copyFromBitmap)
HXDLIN(  15)		 wxIcon * _hx_tmp = this->get_iconRef()->ptr;
HXDLIN(  15)		(*(_hx_tmp)).CopyFromBitmap(bmp->get_bitmapRef()->get_ref());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Icon_obj,copyFromBitmap,(void))

::cpp::Pointer<  wxIcon > Icon_obj::get_iconRef(){
            	HX_STACKFRAME(&_hx_pos_7965e0fa34ea2bb4_23_get_iconRef)
HXDLIN(  23)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Icon_obj,get_iconRef,return )


::hx::ObjectPtr< Icon_obj > Icon_obj::__new() {
	::hx::ObjectPtr< Icon_obj > __this = new Icon_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Icon_obj > Icon_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Icon_obj *__this = (Icon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Icon_obj), true, "hx.widgets.Icon"));
	*(void **)__this = Icon_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Icon_obj::Icon_obj()
{
}

void Icon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Icon);
	HX_MARK_MEMBER_NAME(iconRef,"iconRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Icon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iconRef,"iconRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Icon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"iconRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_iconRef() : iconRef ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_iconRef") ) { return ::hx::Val( get_iconRef_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyFromBitmap") ) { return ::hx::Val( copyFromBitmap_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Icon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"iconRef") ) { iconRef=inValue.Cast< ::cpp::Pointer<  wxIcon > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Icon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iconRef",5a,db,10,d6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Icon_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxIcon > */ ,(int)offsetof(Icon_obj,iconRef),HX_("iconRef",5a,db,10,d6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Icon_obj_sStaticStorageInfo = 0;
#endif

static ::String Icon_obj_sMemberFields[] = {
	HX_("copyFromBitmap",0e,69,5f,5f),
	HX_("iconRef",5a,db,10,d6),
	HX_("get_iconRef",71,3b,0b,5c),
	::String(null()) };

::hx::Class Icon_obj::__mClass;

void Icon_obj::__register()
{
	Icon_obj _hx_dummy;
	Icon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Icon",56,a4,22,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Icon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Icon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Icon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Icon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
