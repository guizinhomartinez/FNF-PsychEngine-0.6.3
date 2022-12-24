#include <hxcpp.h>

#ifndef INCLUDED_fe3f80168f23605f
#define INCLUDED_fe3f80168f23605f
#include "wx/dcmemory.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_hx_widgets_MemoryDC
#include <hx/widgets/MemoryDC.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_307f22774bebd2c5_6_new,"hx.widgets.MemoryDC","new",0x9c8beb8f,"hx.widgets.MemoryDC.new","hx/widgets/MemoryDC.hx",6,0xe1180cff)
HX_LOCAL_STACK_FRAME(_hx_pos_307f22774bebd2c5_13_get_memoryDCRef,"hx.widgets.MemoryDC","get_memoryDCRef",0x7ff05db9,"hx.widgets.MemoryDC.get_memoryDCRef","hx/widgets/MemoryDC.hx",13,0xe1180cff)
namespace hx{
namespace widgets{

void MemoryDC_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_307f22774bebd2c5_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic MemoryDC_obj::__CreateEmpty() { return new MemoryDC_obj; }

void *MemoryDC_obj::_hx_vtable = 0;

Dynamic MemoryDC_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MemoryDC_obj > _hx_result = new MemoryDC_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MemoryDC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0f2bddff) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f2bddff;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x2a3310b2;
	}
}

::cpp::Pointer<  wxMemoryDC > MemoryDC_obj::get_memoryDCRef(){
            	HX_STACKFRAME(&_hx_pos_307f22774bebd2c5_13_get_memoryDCRef)
HXDLIN(  13)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryDC_obj,get_memoryDCRef,return )


::hx::ObjectPtr< MemoryDC_obj > MemoryDC_obj::__new() {
	::hx::ObjectPtr< MemoryDC_obj > __this = new MemoryDC_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MemoryDC_obj > MemoryDC_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MemoryDC_obj *__this = (MemoryDC_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MemoryDC_obj), true, "hx.widgets.MemoryDC"));
	*(void **)__this = MemoryDC_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MemoryDC_obj::MemoryDC_obj()
{
}

void MemoryDC_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MemoryDC);
	HX_MARK_MEMBER_NAME(memoryDCRef,"memoryDCRef");
	 ::hx::widgets::DC_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MemoryDC_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(memoryDCRef,"memoryDCRef");
	 ::hx::widgets::DC_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MemoryDC_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"memoryDCRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_memoryDCRef() : memoryDCRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_memoryDCRef") ) { return ::hx::Val( get_memoryDCRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MemoryDC_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"memoryDCRef") ) { memoryDCRef=inValue.Cast< ::cpp::Pointer<  wxMemoryDC > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MemoryDC_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("memoryDCRef",73,00,43,93));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MemoryDC_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxMemoryDC > */ ,(int)offsetof(MemoryDC_obj,memoryDCRef),HX_("memoryDCRef",73,00,43,93)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MemoryDC_obj_sStaticStorageInfo = 0;
#endif

static ::String MemoryDC_obj_sMemberFields[] = {
	HX_("memoryDCRef",73,00,43,93),
	HX_("get_memoryDCRef",0a,b8,24,54),
	::String(null()) };

::hx::Class MemoryDC_obj::__mClass;

void MemoryDC_obj::__register()
{
	MemoryDC_obj _hx_dummy;
	MemoryDC_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.MemoryDC",1d,78,15,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MemoryDC_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MemoryDC_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MemoryDC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MemoryDC_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
