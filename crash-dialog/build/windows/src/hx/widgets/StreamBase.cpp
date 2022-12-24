#include <hxcpp.h>

#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cf57112caf73da60_9_new,"hx.widgets.StreamBase","new",0xb6ed0940,"hx.widgets.StreamBase.new","hx/widgets/StreamBase.hx",9,0x92b57bee)
HX_LOCAL_STACK_FRAME(_hx_pos_cf57112caf73da60_14_get_isOk,"hx.widgets.StreamBase","get_isOk",0x1066464f,"hx.widgets.StreamBase.get_isOk","hx/widgets/StreamBase.hx",14,0x92b57bee)
HX_LOCAL_STACK_FRAME(_hx_pos_cf57112caf73da60_19_get_size,"hx.widgets.StreamBase","get_size",0x16faf76a,"hx.widgets.StreamBase.get_size","hx/widgets/StreamBase.hx",19,0x92b57bee)
HX_LOCAL_STACK_FRAME(_hx_pos_cf57112caf73da60_27_get_streamBaseRef,"hx.widgets.StreamBase","get_streamBaseRef",0xc1b9f959,"hx.widgets.StreamBase.get_streamBaseRef","hx/widgets/StreamBase.hx",27,0x92b57bee)
namespace hx{
namespace widgets{

void StreamBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cf57112caf73da60_9_new)
            	}

Dynamic StreamBase_obj::__CreateEmpty() { return new StreamBase_obj; }

void *StreamBase_obj::_hx_vtable = 0;

Dynamic StreamBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StreamBase_obj > _hx_result = new StreamBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StreamBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x302496cc;
}

bool StreamBase_obj::get_isOk(){
            	HX_STACKFRAME(&_hx_pos_cf57112caf73da60_14_get_isOk)
HXDLIN(  14)		return this->get_streamBaseRef()->ptr->IsOk();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StreamBase_obj,get_isOk,return )

int StreamBase_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_cf57112caf73da60_19_get_size)
HXDLIN(  19)		return this->get_streamBaseRef()->ptr->GetSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StreamBase_obj,get_size,return )

::cpp::Pointer<  wxStreamBase > StreamBase_obj::get_streamBaseRef(){
            	HX_STACKFRAME(&_hx_pos_cf57112caf73da60_27_get_streamBaseRef)
HXDLIN(  27)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StreamBase_obj,get_streamBaseRef,return )


::hx::ObjectPtr< StreamBase_obj > StreamBase_obj::__new() {
	::hx::ObjectPtr< StreamBase_obj > __this = new StreamBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StreamBase_obj > StreamBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StreamBase_obj *__this = (StreamBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StreamBase_obj), true, "hx.widgets.StreamBase"));
	*(void **)__this = StreamBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StreamBase_obj::StreamBase_obj()
{
}

void StreamBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StreamBase);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(isOk,"isOk");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(streamBaseRef,"streamBaseRef");
	HX_MARK_END_CLASS();
}

void StreamBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(isOk,"isOk");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(streamBaseRef,"streamBaseRef");
}

::hx::Val StreamBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		if (HX_FIELD_EQ(inName,"isOk") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isOk() : isOk ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_size() : size ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_isOk") ) { return ::hx::Val( get_isOk_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"streamBaseRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_streamBaseRef() : streamBaseRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_streamBaseRef") ) { return ::hx::Val( get_streamBaseRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StreamBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxStreamBase > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isOk") ) { isOk=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"streamBaseRef") ) { streamBaseRef=inValue.Cast< ::cpp::Pointer<  wxStreamBase > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StreamBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("isOk",a6,ef,be,45));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("streamBaseRef",22,ed,d2,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StreamBase_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStreamBase > */ ,(int)offsetof(StreamBase_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsBool,(int)offsetof(StreamBase_obj,isOk),HX_("isOk",a6,ef,be,45)},
	{::hx::fsInt,(int)offsetof(StreamBase_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStreamBase > */ ,(int)offsetof(StreamBase_obj,streamBaseRef),HX_("streamBaseRef",22,ed,d2,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StreamBase_obj_sStaticStorageInfo = 0;
#endif

static ::String StreamBase_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("isOk",a6,ef,be,45),
	HX_("get_isOk",2f,ab,79,c5),
	HX_("size",c1,a0,53,4c),
	HX_("get_size",4a,5c,0e,cc),
	HX_("streamBaseRef",22,ed,d2,a3),
	HX_("get_streamBaseRef",79,f8,42,aa),
	::String(null()) };

::hx::Class StreamBase_obj::__mClass;

void StreamBase_obj::__register()
{
	StreamBase_obj _hx_dummy;
	StreamBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StreamBase",4e,a9,67,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StreamBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StreamBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StreamBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StreamBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
