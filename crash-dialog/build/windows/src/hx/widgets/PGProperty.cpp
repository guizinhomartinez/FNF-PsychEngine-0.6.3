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
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6e5a64d5d2279091_8_new,"hx.widgets.PGProperty","new",0x78061f5b,"hx.widgets.PGProperty.new","hx/widgets/PGProperty.hx",8,0x29f5e233)
HX_LOCAL_STACK_FRAME(_hx_pos_6e5a64d5d2279091_12_get_valueAsString,"hx.widgets.PGProperty","get_valueAsString",0x921b4386,"hx.widgets.PGProperty.get_valueAsString","hx/widgets/PGProperty.hx",12,0x29f5e233)
HX_LOCAL_STACK_FRAME(_hx_pos_6e5a64d5d2279091_18_get_name,"hx.widgets.PGProperty","get_name",0x5d80b0f9,"hx.widgets.PGProperty.get_name","hx/widgets/PGProperty.hx",18,0x29f5e233)
HX_LOCAL_STACK_FRAME(_hx_pos_6e5a64d5d2279091_28_get_propertyRef,"hx.widgets.PGProperty","get_propertyRef",0x9c1e7f10,"hx.widgets.PGProperty.get_propertyRef","hx/widgets/PGProperty.hx",28,0x29f5e233)
namespace hx{
namespace widgets{

void PGProperty_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6e5a64d5d2279091_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic PGProperty_obj::__CreateEmpty() { return new PGProperty_obj; }

void *PGProperty_obj::_hx_vtable = 0;

Dynamic PGProperty_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PGProperty_obj > _hx_result = new PGProperty_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PGProperty_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x5743f84b;
	}
}

::String PGProperty_obj::get_valueAsString(){
            	HX_STACKFRAME(&_hx_pos_6e5a64d5d2279091_12_get_valueAsString)
HXLINE(  13)		 wxString r = this->get_propertyRef()->ptr->GetValueAsString();
HXLINE(  14)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PGProperty_obj,get_valueAsString,return )

::String PGProperty_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_6e5a64d5d2279091_18_get_name)
HXLINE(  19)		 wxString r = this->get_propertyRef()->ptr->GetName();
HXLINE(  20)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PGProperty_obj,get_name,return )

::cpp::Pointer<  wxPGProperty > PGProperty_obj::get_propertyRef(){
            	HX_STACKFRAME(&_hx_pos_6e5a64d5d2279091_28_get_propertyRef)
HXDLIN(  28)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PGProperty_obj,get_propertyRef,return )


::hx::ObjectPtr< PGProperty_obj > PGProperty_obj::__new() {
	::hx::ObjectPtr< PGProperty_obj > __this = new PGProperty_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PGProperty_obj > PGProperty_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PGProperty_obj *__this = (PGProperty_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PGProperty_obj), true, "hx.widgets.PGProperty"));
	*(void **)__this = PGProperty_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PGProperty_obj::PGProperty_obj()
{
}

void PGProperty_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PGProperty);
	HX_MARK_MEMBER_NAME(valueAsString,"valueAsString");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(propertyRef,"propertyRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PGProperty_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(valueAsString,"valueAsString");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(propertyRef,"propertyRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PGProperty_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_name() : name ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"propertyRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_propertyRef() : propertyRef ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"valueAsString") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_valueAsString() : valueAsString ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_propertyRef") ) { return ::hx::Val( get_propertyRef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_valueAsString") ) { return ::hx::Val( get_valueAsString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PGProperty_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"propertyRef") ) { propertyRef=inValue.Cast< ::cpp::Pointer<  wxPGProperty > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"valueAsString") ) { valueAsString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PGProperty_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("valueAsString",f4,c7,16,03));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("propertyRef",fe,6b,92,96));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PGProperty_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(PGProperty_obj,valueAsString),HX_("valueAsString",f4,c7,16,03)},
	{::hx::fsString,(int)offsetof(PGProperty_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxPGProperty > */ ,(int)offsetof(PGProperty_obj,propertyRef),HX_("propertyRef",fe,6b,92,96)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PGProperty_obj_sStaticStorageInfo = 0;
#endif

static ::String PGProperty_obj_sMemberFields[] = {
	HX_("valueAsString",f4,c7,16,03),
	HX_("get_valueAsString",4b,d3,86,09),
	HX_("name",4b,72,ff,48),
	HX_("get_name",d4,2d,ba,c8),
	HX_("propertyRef",fe,6b,92,96),
	HX_("get_propertyRef",95,23,74,57),
	::String(null()) };

::hx::Class PGProperty_obj::__mClass;

void PGProperty_obj::__register()
{
	PGProperty_obj _hx_dummy;
	PGProperty_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.PGProperty",e9,d5,5e,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PGProperty_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PGProperty_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PGProperty_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PGProperty_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
