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
#ifndef INCLUDED_hx_widgets_StringProperty
#include <hx/widgets/StringProperty.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_42eb0aeefafab369_8_new,"hx.widgets.StringProperty","new",0xa605c7d5,"hx.widgets.StringProperty.new","hx/widgets/StringProperty.hx",8,0xda9f1df9)
HX_LOCAL_STACK_FRAME(_hx_pos_42eb0aeefafab369_23_get_stringPropertyRef,"hx.widgets.StringProperty","get_stringPropertyRef",0x80225639,"hx.widgets.StringProperty.get_stringPropertyRef","hx/widgets/StringProperty.hx",23,0xda9f1df9)
namespace hx{
namespace widgets{

void StringProperty_obj::__construct(::String label,::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_42eb0aeefafab369_8_new)
HXLINE(   9)		const char* this1 = label.utf8_str();
HXDLIN(   9)		 wxString strLabel = wxString::FromUTF8(this1);
HXLINE(  10)		const char* this2 = name.utf8_str();
HXDLIN(  10)		 wxString strName = wxString::FromUTF8(this2);
HXLINE(  11)		const char* this3 = value.utf8_str();
HXDLIN(  11)		 wxString strValue = wxString::FromUTF8(this3);
HXLINE(  13)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxStringProperty(strLabel,strName,strValue)))->reinterpret();
HXLINE(  15)		super::__construct();
            	}

Dynamic StringProperty_obj::__CreateEmpty() { return new StringProperty_obj; }

void *StringProperty_obj::_hx_vtable = 0;

Dynamic StringProperty_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringProperty_obj > _hx_result = new StringProperty_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool StringProperty_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3af134c5) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x3af134c5;
		}
	} else {
		return inClassId==(int)0x5743f84b;
	}
}

::cpp::Pointer<  wxStringProperty > StringProperty_obj::get_stringPropertyRef(){
            	HX_STACKFRAME(&_hx_pos_42eb0aeefafab369_23_get_stringPropertyRef)
HXDLIN(  23)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringProperty_obj,get_stringPropertyRef,return )


::hx::ObjectPtr< StringProperty_obj > StringProperty_obj::__new(::String label,::String name,::String value) {
	::hx::ObjectPtr< StringProperty_obj > __this = new StringProperty_obj();
	__this->__construct(label,name,value);
	return __this;
}

::hx::ObjectPtr< StringProperty_obj > StringProperty_obj::__alloc(::hx::Ctx *_hx_ctx,::String label,::String name,::String value) {
	StringProperty_obj *__this = (StringProperty_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringProperty_obj), true, "hx.widgets.StringProperty"));
	*(void **)__this = StringProperty_obj::_hx_vtable;
	__this->__construct(label,name,value);
	return __this;
}

StringProperty_obj::StringProperty_obj()
{
}

void StringProperty_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringProperty);
	HX_MARK_MEMBER_NAME(stringPropertyRef,"stringPropertyRef");
	 ::hx::widgets::PGProperty_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StringProperty_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stringPropertyRef,"stringPropertyRef");
	 ::hx::widgets::PGProperty_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StringProperty_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"stringPropertyRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_stringPropertyRef() : stringPropertyRef ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_stringPropertyRef") ) { return ::hx::Val( get_stringPropertyRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringProperty_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"stringPropertyRef") ) { stringPropertyRef=inValue.Cast< ::cpp::Pointer<  wxStringProperty > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringProperty_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("stringPropertyRef",ad,5a,fe,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringProperty_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStringProperty > */ ,(int)offsetof(StringProperty_obj,stringPropertyRef),HX_("stringPropertyRef",ad,5a,fe,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringProperty_obj_sStaticStorageInfo = 0;
#endif

static ::String StringProperty_obj_sMemberFields[] = {
	HX_("stringPropertyRef",ad,5a,fe,2d),
	HX_("get_stringPropertyRef",84,5d,ac,ac),
	::String(null()) };

::hx::Class StringProperty_obj::__mClass;

void StringProperty_obj::__register()
{
	StringProperty_obj _hx_dummy;
	StringProperty_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StringProperty",63,39,8e,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringProperty_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringProperty_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringProperty_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringProperty_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
