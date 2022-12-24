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
#ifndef INCLUDED_hx_widgets_IntProperty
#include <hx/widgets/IntProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0305c856957da718_8_new,"hx.widgets.IntProperty","new",0xd3742199,"hx.widgets.IntProperty.new","hx/widgets/IntProperty.hx",8,0x46583c79)
HX_LOCAL_STACK_FRAME(_hx_pos_0305c856957da718_22_get_intPropertyRef,"hx.widgets.IntProperty","get_intPropertyRef",0xfa85a6ff,"hx.widgets.IntProperty.get_intPropertyRef","hx/widgets/IntProperty.hx",22,0x46583c79)
namespace hx{
namespace widgets{

void IntProperty_obj::__construct(::String label,::String name,int value){
            	HX_STACKFRAME(&_hx_pos_0305c856957da718_8_new)
HXLINE(   9)		const char* this1 = label.utf8_str();
HXDLIN(   9)		 wxString strLabel = wxString::FromUTF8(this1);
HXLINE(  10)		const char* this2 = name.utf8_str();
HXDLIN(  10)		 wxString strName = wxString::FromUTF8(this2);
HXLINE(  12)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxIntProperty(strLabel,strName,value)))->reinterpret();
HXLINE(  14)		super::__construct();
            	}

Dynamic IntProperty_obj::__CreateEmpty() { return new IntProperty_obj; }

void *IntProperty_obj::_hx_vtable = 0;

Dynamic IntProperty_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IntProperty_obj > _hx_result = new IntProperty_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool IntProperty_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3dec5485) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x3dec5485;
		}
	} else {
		return inClassId==(int)0x5743f84b;
	}
}

::cpp::Pointer<  wxIntProperty > IntProperty_obj::get_intPropertyRef(){
            	HX_STACKFRAME(&_hx_pos_0305c856957da718_22_get_intPropertyRef)
HXDLIN(  22)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntProperty_obj,get_intPropertyRef,return )


::hx::ObjectPtr< IntProperty_obj > IntProperty_obj::__new(::String label,::String name,int value) {
	::hx::ObjectPtr< IntProperty_obj > __this = new IntProperty_obj();
	__this->__construct(label,name,value);
	return __this;
}

::hx::ObjectPtr< IntProperty_obj > IntProperty_obj::__alloc(::hx::Ctx *_hx_ctx,::String label,::String name,int value) {
	IntProperty_obj *__this = (IntProperty_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IntProperty_obj), true, "hx.widgets.IntProperty"));
	*(void **)__this = IntProperty_obj::_hx_vtable;
	__this->__construct(label,name,value);
	return __this;
}

IntProperty_obj::IntProperty_obj()
{
}

void IntProperty_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntProperty);
	HX_MARK_MEMBER_NAME(intPropertyRef,"intPropertyRef");
	 ::hx::widgets::PGProperty_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IntProperty_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(intPropertyRef,"intPropertyRef");
	 ::hx::widgets::PGProperty_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val IntProperty_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"intPropertyRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_intPropertyRef() : intPropertyRef ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_intPropertyRef") ) { return ::hx::Val( get_intPropertyRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IntProperty_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"intPropertyRef") ) { intPropertyRef=inValue.Cast< ::cpp::Pointer<  wxIntProperty > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntProperty_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("intPropertyRef",4f,cf,4f,17));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IntProperty_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxIntProperty > */ ,(int)offsetof(IntProperty_obj,intPropertyRef),HX_("intPropertyRef",4f,cf,4f,17)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IntProperty_obj_sStaticStorageInfo = 0;
#endif

static ::String IntProperty_obj_sMemberFields[] = {
	HX_("intPropertyRef",4f,cf,4f,17),
	HX_("get_intPropertyRef",18,b0,e9,b2),
	::String(null()) };

::hx::Class IntProperty_obj::__mClass;

void IntProperty_obj::__register()
{
	IntProperty_obj _hx_dummy;
	IntProperty_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.IntProperty",27,61,53,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IntProperty_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IntProperty_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntProperty_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntProperty_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
