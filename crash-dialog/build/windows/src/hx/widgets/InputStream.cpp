#include <hxcpp.h>

#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1652fd51217511e5_8_new,"hx.widgets.InputStream","new",0xcbdc545f,"hx.widgets.InputStream.new","hx/widgets/InputStream.hx",8,0x23df0473)
HX_LOCAL_STACK_FRAME(_hx_pos_1652fd51217511e5_13_get_canRead,"hx.widgets.InputStream","get_canRead",0x2ab4ae9c,"hx.widgets.InputStream.get_canRead","hx/widgets/InputStream.hx",13,0x23df0473)
HX_LOCAL_STACK_FRAME(_hx_pos_1652fd51217511e5_18_get_eof,"hx.widgets.InputStream","get_eof",0xa775bcd2,"hx.widgets.InputStream.get_eof","hx/widgets/InputStream.hx",18,0x23df0473)
HX_LOCAL_STACK_FRAME(_hx_pos_1652fd51217511e5_22_getC,"hx.widgets.InputStream","getC",0x904cfe0e,"hx.widgets.InputStream.getC","hx/widgets/InputStream.hx",22,0x23df0473)
HX_LOCAL_STACK_FRAME(_hx_pos_1652fd51217511e5_30_get_inputStreamRef,"hx.widgets.InputStream","get_inputStreamRef",0x0bec4af3,"hx.widgets.InputStream.get_inputStreamRef","hx/widgets/InputStream.hx",30,0x23df0473)
namespace hx{
namespace widgets{

void InputStream_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1652fd51217511e5_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic InputStream_obj::__CreateEmpty() { return new InputStream_obj; }

void *InputStream_obj::_hx_vtable = 0;

Dynamic InputStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InputStream_obj > _hx_result = new InputStream_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InputStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03ba0713) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x03ba0713;
	} else {
		return inClassId==(int)0x302496cc;
	}
}

bool InputStream_obj::get_canRead(){
            	HX_STACKFRAME(&_hx_pos_1652fd51217511e5_13_get_canRead)
HXDLIN(  13)		return this->get_inputStreamRef()->ptr->CanRead();
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputStream_obj,get_canRead,return )

bool InputStream_obj::get_eof(){
            	HX_STACKFRAME(&_hx_pos_1652fd51217511e5_18_get_eof)
HXDLIN(  18)		return this->get_inputStreamRef()->ptr->Eof();
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputStream_obj,get_eof,return )

int InputStream_obj::getC(){
            	HX_STACKFRAME(&_hx_pos_1652fd51217511e5_22_getC)
HXDLIN(  22)		return this->get_inputStreamRef()->ptr->GetC();
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputStream_obj,getC,return )

::cpp::Pointer<  wxInputStream > InputStream_obj::get_inputStreamRef(){
            	HX_STACKFRAME(&_hx_pos_1652fd51217511e5_30_get_inputStreamRef)
HXDLIN(  30)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputStream_obj,get_inputStreamRef,return )


::hx::ObjectPtr< InputStream_obj > InputStream_obj::__new() {
	::hx::ObjectPtr< InputStream_obj > __this = new InputStream_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InputStream_obj > InputStream_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InputStream_obj *__this = (InputStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InputStream_obj), true, "hx.widgets.InputStream"));
	*(void **)__this = InputStream_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InputStream_obj::InputStream_obj()
{
}

void InputStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputStream);
	HX_MARK_MEMBER_NAME(canRead,"canRead");
	HX_MARK_MEMBER_NAME(eof,"eof");
	HX_MARK_MEMBER_NAME(inputStreamRef,"inputStreamRef");
	 ::hx::widgets::StreamBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InputStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canRead,"canRead");
	HX_VISIT_MEMBER_NAME(eof,"eof");
	HX_VISIT_MEMBER_NAME(inputStreamRef,"inputStreamRef");
	 ::hx::widgets::StreamBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val InputStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_eof() : eof ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"getC") ) { return ::hx::Val( getC_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canRead") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_canRead() : canRead ); }
		if (HX_FIELD_EQ(inName,"get_eof") ) { return ::hx::Val( get_eof_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_canRead") ) { return ::hx::Val( get_canRead_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inputStreamRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_inputStreamRef() : inputStreamRef ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_inputStreamRef") ) { return ::hx::Val( get_inputStreamRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InputStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { eof=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canRead") ) { canRead=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inputStreamRef") ) { inputStreamRef=inValue.Cast< ::cpp::Pointer<  wxInputStream > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("canRead",86,33,ff,69));
	outFields->push(HX_("eof",bc,04,4d,00));
	outFields->push(HX_("inputStreamRef",49,97,d6,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InputStream_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(InputStream_obj,canRead),HX_("canRead",86,33,ff,69)},
	{::hx::fsBool,(int)offsetof(InputStream_obj,eof),HX_("eof",bc,04,4d,00)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxInputStream > */ ,(int)offsetof(InputStream_obj,inputStreamRef),HX_("inputStreamRef",49,97,d6,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InputStream_obj_sStaticStorageInfo = 0;
#endif

static ::String InputStream_obj_sMemberFields[] = {
	HX_("canRead",86,33,ff,69),
	HX_("get_canRead",9d,93,f9,ef),
	HX_("eof",bc,04,4d,00),
	HX_("get_eof",53,cd,c1,26),
	HX_("getC",ed,02,62,44),
	HX_("inputStreamRef",49,97,d6,f4),
	HX_("get_inputStreamRef",12,78,70,90),
	::String(null()) };

::hx::Class InputStream_obj::__mClass;

void InputStream_obj::__register()
{
	InputStream_obj _hx_dummy;
	InputStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.InputStream",ed,38,2d,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InputStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InputStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
