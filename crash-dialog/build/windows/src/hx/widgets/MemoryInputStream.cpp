#include <hxcpp.h>

#ifndef INCLUDED_721c74fa2e6d5326
#define INCLUDED_721c74fa2e6d5326
#include "wx/mstream.h"
#endif
#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_MemoryInputStream
#include <hx/widgets/MemoryInputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01fd7e24cd835d95_12_new,"hx.widgets.MemoryInputStream","new",0xc603ae9e,"hx.widgets.MemoryInputStream.new","hx/widgets/MemoryInputStream.hx",12,0x9db04494)
HX_LOCAL_STACK_FRAME(_hx_pos_01fd7e24cd835d95_19_destroy,"hx.widgets.MemoryInputStream","destroy",0x95550238,"hx.widgets.MemoryInputStream.destroy","hx/widgets/MemoryInputStream.hx",19,0x9db04494)
HX_LOCAL_STACK_FRAME(_hx_pos_01fd7e24cd835d95_29_get_memoryinputstreamRef,"hx.widgets.MemoryInputStream","get_memoryinputstreamRef",0x48ade4b5,"hx.widgets.MemoryInputStream.get_memoryinputstreamRef","hx/widgets/MemoryInputStream.hx",29,0x9db04494)
namespace hx{
namespace widgets{

void MemoryInputStream_obj::__construct( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_01fd7e24cd835d95_12_new)
HXLINE(  13)		this->_bytes = bytes;
HXLINE(  14)		::cpp::Pointer< unsigned char > p = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(this->_bytes->b,0)) );
HXLINE(  15)		::cpp::Pointer<  wxMemoryInputStream > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxMemoryInputStream(p,this->_bytes->length)));
HXDLIN(  15)		this->_ref = _hx_tmp->reinterpret();
HXLINE(  16)		super::__construct();
            	}

Dynamic MemoryInputStream_obj::__CreateEmpty() { return new MemoryInputStream_obj; }

void *MemoryInputStream_obj::_hx_vtable = 0;

Dynamic MemoryInputStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MemoryInputStream_obj > _hx_result = new MemoryInputStream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MemoryInputStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x302496cc) {
		if (inClassId<=(int)0x03ba0713) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03ba0713;
		} else {
			return inClassId==(int)0x302496cc;
		}
	} else {
		return inClassId==(int)0x631f958a;
	}
}

void MemoryInputStream_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_01fd7e24cd835d95_19_destroy)
HXLINE(  20)		this->_ref->destroy();
HXLINE(  21)		this->_ref = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryInputStream_obj,destroy,(void))

::cpp::Pointer<  wxMemoryInputStream > MemoryInputStream_obj::get_memoryinputstreamRef(){
            	HX_STACKFRAME(&_hx_pos_01fd7e24cd835d95_29_get_memoryinputstreamRef)
HXDLIN(  29)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryInputStream_obj,get_memoryinputstreamRef,return )


::hx::ObjectPtr< MemoryInputStream_obj > MemoryInputStream_obj::__new( ::haxe::io::Bytes bytes) {
	::hx::ObjectPtr< MemoryInputStream_obj > __this = new MemoryInputStream_obj();
	__this->__construct(bytes);
	return __this;
}

::hx::ObjectPtr< MemoryInputStream_obj > MemoryInputStream_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes) {
	MemoryInputStream_obj *__this = (MemoryInputStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MemoryInputStream_obj), true, "hx.widgets.MemoryInputStream"));
	*(void **)__this = MemoryInputStream_obj::_hx_vtable;
	__this->__construct(bytes);
	return __this;
}

MemoryInputStream_obj::MemoryInputStream_obj()
{
}

void MemoryInputStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MemoryInputStream);
	HX_MARK_MEMBER_NAME(_bytes,"_bytes");
	HX_MARK_MEMBER_NAME(memoryinputstreamRef,"memoryinputstreamRef");
	 ::hx::widgets::InputStream_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MemoryInputStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bytes,"_bytes");
	HX_VISIT_MEMBER_NAME(memoryinputstreamRef,"memoryinputstreamRef");
	 ::hx::widgets::InputStream_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MemoryInputStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_bytes") ) { return ::hx::Val( _bytes ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"memoryinputstreamRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_memoryinputstreamRef() : memoryinputstreamRef ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_memoryinputstreamRef") ) { return ::hx::Val( get_memoryinputstreamRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MemoryInputStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_bytes") ) { _bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"memoryinputstreamRef") ) { memoryinputstreamRef=inValue.Cast< ::cpp::Pointer<  wxMemoryInputStream > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MemoryInputStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_bytes",ac,4f,7f,b9));
	outFields->push(HX_("memoryinputstreamRef",2a,62,ac,a4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MemoryInputStream_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(MemoryInputStream_obj,_bytes),HX_("_bytes",ac,4f,7f,b9)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxMemoryInputStream > */ ,(int)offsetof(MemoryInputStream_obj,memoryinputstreamRef),HX_("memoryinputstreamRef",2a,62,ac,a4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MemoryInputStream_obj_sStaticStorageInfo = 0;
#endif

static ::String MemoryInputStream_obj_sMemberFields[] = {
	HX_("_bytes",ac,4f,7f,b9),
	HX_("destroy",fa,2c,86,24),
	HX_("memoryinputstreamRef",2a,62,ac,a4),
	HX_("get_memoryinputstreamRef",b3,7f,48,e7),
	::String(null()) };

::hx::Class MemoryInputStream_obj::__mClass;

void MemoryInputStream_obj::__register()
{
	MemoryInputStream_obj _hx_dummy;
	MemoryInputStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.MemoryInputStream",ac,c7,ec,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MemoryInputStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MemoryInputStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MemoryInputStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MemoryInputStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
