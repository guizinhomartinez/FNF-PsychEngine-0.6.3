#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_BoolProperty
#include <hx/widgets/BoolProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_842c7a655ccba81c_8_new,"hx.widgets.BoolProperty","new",0x0a05b36e,"hx.widgets.BoolProperty.new","hx/widgets/BoolProperty.hx",8,0xf77d1d00)
HX_LOCAL_STACK_FRAME(_hx_pos_842c7a655ccba81c_22_get_boolPropertyRef,"hx.widgets.BoolProperty","get_boolPropertyRef",0x0ac02a19,"hx.widgets.BoolProperty.get_boolPropertyRef","hx/widgets/BoolProperty.hx",22,0xf77d1d00)
namespace hx{
namespace widgets{

void BoolProperty_obj::__construct(::String label,::String name,bool value){
            	HX_STACKFRAME(&_hx_pos_842c7a655ccba81c_8_new)
HXLINE(   9)		const char* this1 = label.utf8_str();
HXDLIN(   9)		 wxString strLabel = wxString::FromUTF8(this1);
HXLINE(  10)		const char* this2 = name.utf8_str();
HXDLIN(  10)		 wxString strName = wxString::FromUTF8(this2);
HXLINE(  12)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxBoolProperty(strLabel,strName,value)))->reinterpret();
HXLINE(  14)		super::__construct();
            	}

Dynamic BoolProperty_obj::__CreateEmpty() { return new BoolProperty_obj; }

void *BoolProperty_obj::_hx_vtable = 0;

Dynamic BoolProperty_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BoolProperty_obj > _hx_result = new BoolProperty_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BoolProperty_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x30a9ed7a) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x30a9ed7a;
		}
	} else {
		return inClassId==(int)0x5743f84b;
	}
}

::cpp::Pointer<  wxBoolProperty > BoolProperty_obj::get_boolPropertyRef(){
            	HX_STACKFRAME(&_hx_pos_842c7a655ccba81c_22_get_boolPropertyRef)
HXDLIN(  22)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoolProperty_obj,get_boolPropertyRef,return )


::hx::ObjectPtr< BoolProperty_obj > BoolProperty_obj::__new(::String label,::String name,bool value) {
	::hx::ObjectPtr< BoolProperty_obj > __this = new BoolProperty_obj();
	__this->__construct(label,name,value);
	return __this;
}

::hx::ObjectPtr< BoolProperty_obj > BoolProperty_obj::__alloc(::hx::Ctx *_hx_ctx,::String label,::String name,bool value) {
	BoolProperty_obj *__this = (BoolProperty_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BoolProperty_obj), true, "hx.widgets.BoolProperty"));
	*(void **)__this = BoolProperty_obj::_hx_vtable;
	__this->__construct(label,name,value);
	return __this;
}

BoolProperty_obj::BoolProperty_obj()
{
}

void BoolProperty_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoolProperty);
	HX_MARK_MEMBER_NAME(boolPropertyRef,"boolPropertyRef");
	 ::hx::widgets::PGProperty_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BoolProperty_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(boolPropertyRef,"boolPropertyRef");
	 ::hx::widgets::PGProperty_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BoolProperty_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"boolPropertyRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_boolPropertyRef() : boolPropertyRef ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_boolPropertyRef") ) { return ::hx::Val( get_boolPropertyRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BoolProperty_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"boolPropertyRef") ) { boolPropertyRef=inValue.Cast< ::cpp::Pointer<  wxBoolProperty > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoolProperty_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("boolPropertyRef",f4,fb,77,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BoolProperty_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxBoolProperty > */ ,(int)offsetof(BoolProperty_obj,boolPropertyRef),HX_("boolPropertyRef",f4,fb,77,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BoolProperty_obj_sStaticStorageInfo = 0;
#endif

static ::String BoolProperty_obj_sMemberFields[] = {
	HX_("boolPropertyRef",f4,fb,77,e7),
	HX_("get_boolPropertyRef",0b,cb,82,72),
	::String(null()) };

::hx::Class BoolProperty_obj::__mClass;

void BoolProperty_obj::__register()
{
	BoolProperty_obj _hx_dummy;
	BoolProperty_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.BoolProperty",7c,24,b8,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BoolProperty_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BoolProperty_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BoolProperty_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BoolProperty_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
