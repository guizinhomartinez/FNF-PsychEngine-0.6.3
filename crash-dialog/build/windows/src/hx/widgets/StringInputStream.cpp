#include <hxcpp.h>

#ifndef INCLUDED_3c13c1aba6e19fc4
#define INCLUDED_3c13c1aba6e19fc4
#include "wx/sstream.h"
#endif
#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif
#ifndef INCLUDED_hx_widgets_StringInputStream
#include <hx/widgets/StringInputStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ee628be21d88c238_10_new,"hx.widgets.StringInputStream","new",0x8da55ace,"hx.widgets.StringInputStream.new","hx/widgets/StringInputStream.hx",10,0x039b2e64)
HX_LOCAL_STACK_FRAME(_hx_pos_ee628be21d88c238_17_destroy,"hx.widgets.StringInputStream","destroy",0xd0788668,"hx.widgets.StringInputStream.destroy","hx/widgets/StringInputStream.hx",17,0x039b2e64)
HX_LOCAL_STACK_FRAME(_hx_pos_ee628be21d88c238_27_get_stringinputstreamRef,"hx.widgets.StringInputStream","get_stringinputstreamRef",0xb5fd9455,"hx.widgets.StringInputStream.get_stringinputstreamRef","hx/widgets/StringInputStream.hx",27,0x039b2e64)
namespace hx{
namespace widgets{

void StringInputStream_obj::__construct(::String s){
            	HX_STACKFRAME(&_hx_pos_ee628be21d88c238_10_new)
HXLINE(  11)		this->_s = s;
HXLINE(  12)		const char* this1 = s.utf8_str();
HXDLIN(  12)		 wxString utf8 = wxString::FromUTF8(this1);
HXLINE(  13)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxStringInputStream(utf8)))->reinterpret();
HXLINE(  14)		super::__construct();
            	}

Dynamic StringInputStream_obj::__CreateEmpty() { return new StringInputStream_obj; }

void *StringInputStream_obj::_hx_vtable = 0;

Dynamic StringInputStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringInputStream_obj > _hx_result = new StringInputStream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StringInputStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x302496cc) {
		if (inClassId<=(int)0x03ba0713) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03ba0713;
		} else {
			return inClassId==(int)0x302496cc;
		}
	} else {
		return inClassId==(int)0x55238a82;
	}
}

void StringInputStream_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ee628be21d88c238_17_destroy)
HXLINE(  18)		this->_ref->destroy();
HXLINE(  19)		this->_ref = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringInputStream_obj,destroy,(void))

::cpp::Pointer<  wxStringInputStream > StringInputStream_obj::get_stringinputstreamRef(){
            	HX_STACKFRAME(&_hx_pos_ee628be21d88c238_27_get_stringinputstreamRef)
HXDLIN(  27)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringInputStream_obj,get_stringinputstreamRef,return )


::hx::ObjectPtr< StringInputStream_obj > StringInputStream_obj::__new(::String s) {
	::hx::ObjectPtr< StringInputStream_obj > __this = new StringInputStream_obj();
	__this->__construct(s);
	return __this;
}

::hx::ObjectPtr< StringInputStream_obj > StringInputStream_obj::__alloc(::hx::Ctx *_hx_ctx,::String s) {
	StringInputStream_obj *__this = (StringInputStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringInputStream_obj), true, "hx.widgets.StringInputStream"));
	*(void **)__this = StringInputStream_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

StringInputStream_obj::StringInputStream_obj()
{
}

void StringInputStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringInputStream);
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(stringinputstreamRef,"stringinputstreamRef");
	 ::hx::widgets::InputStream_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StringInputStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(stringinputstreamRef,"stringinputstreamRef");
	 ::hx::widgets::InputStream_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StringInputStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { return ::hx::Val( _s ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"stringinputstreamRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_stringinputstreamRef() : stringinputstreamRef ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_stringinputstreamRef") ) { return ::hx::Val( get_stringinputstreamRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringInputStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { _s=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"stringinputstreamRef") ) { stringinputstreamRef=inValue.Cast< ::cpp::Pointer<  wxStringInputStream > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringInputStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_s",34,53,00,00));
	outFields->push(HX_("stringinputstreamRef",fa,4b,97,0a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringInputStream_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(StringInputStream_obj,_s),HX_("_s",34,53,00,00)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStringInputStream > */ ,(int)offsetof(StringInputStream_obj,stringinputstreamRef),HX_("stringinputstreamRef",fa,4b,97,0a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringInputStream_obj_sStaticStorageInfo = 0;
#endif

static ::String StringInputStream_obj_sMemberFields[] = {
	HX_("_s",34,53,00,00),
	HX_("destroy",fa,2c,86,24),
	HX_("stringinputstreamRef",fa,4b,97,0a),
	HX_("get_stringinputstreamRef",83,69,33,4d),
	::String(null()) };

::hx::Class StringInputStream_obj::__mClass;

void StringInputStream_obj::__register()
{
	StringInputStream_obj _hx_dummy;
	StringInputStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StringInputStream",dc,9b,d8,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringInputStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringInputStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringInputStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringInputStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
