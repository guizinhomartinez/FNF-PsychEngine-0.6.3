#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3698c0f6a76dbf22_9_new,"hx.widgets.Object","new",0xdf072bce,"hx.widgets.Object.new","hx/widgets/Object.hx",9,0xd5fa2e20)
HX_LOCAL_STACK_FRAME(_hx_pos_3698c0f6a76dbf22_11_destroy,"hx.widgets.Object","destroy",0xa596d768,"hx.widgets.Object.destroy","hx/widgets/Object.hx",11,0xd5fa2e20)
HX_LOCAL_STACK_FRAME(_hx_pos_3698c0f6a76dbf22_24_get_objectRef,"hx.widgets.Object","get_objectRef",0xd10a9899,"hx.widgets.Object.get_objectRef","hx/widgets/Object.hx",24,0xd5fa2e20)
namespace hx{
namespace widgets{

void Object_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3698c0f6a76dbf22_9_new)
HXDLIN(   9)		this->_disposed = false;
            	}

Dynamic Object_obj::__CreateEmpty() { return new Object_obj; }

void *Object_obj::_hx_vtable = 0;

Dynamic Object_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Object_obj > _hx_result = new Object_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Object_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
}

bool Object_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_3698c0f6a76dbf22_11_destroy)
HXLINE(  12)		if (::hx::IsNotNull( this->_ref )) {
HXLINE(  13)			this->_ref->destroy();
HXLINE(  14)			this->_ref = null();
            		}
HXLINE(  16)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,destroy,return )

::cpp::Pointer<  wxObject > Object_obj::get_objectRef(){
            	HX_STACKFRAME(&_hx_pos_3698c0f6a76dbf22_24_get_objectRef)
HXDLIN(  24)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_objectRef,return )


::hx::ObjectPtr< Object_obj > Object_obj::__new() {
	::hx::ObjectPtr< Object_obj > __this = new Object_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Object_obj > Object_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Object_obj *__this = (Object_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Object_obj), true, "hx.widgets.Object"));
	*(void **)__this = Object_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Object_obj::Object_obj()
{
}

void Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(_disposed,"_disposed");
	HX_MARK_MEMBER_NAME(objectRef,"objectRef");
	HX_MARK_END_CLASS();
}

void Object_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(_disposed,"_disposed");
	HX_VISIT_MEMBER_NAME(objectRef,"objectRef");
}

::hx::Val Object_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_disposed") ) { return ::hx::Val( _disposed ); }
		if (HX_FIELD_EQ(inName,"objectRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_objectRef() : objectRef ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_objectRef") ) { return ::hx::Val( get_objectRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Object_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxObject > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_disposed") ) { _disposed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectRef") ) { objectRef=inValue.Cast< ::cpp::Pointer<  wxObject > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("_disposed",44,02,3a,6f));
	outFields->push(HX_("objectRef",d4,93,81,43));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Object_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxObject > */ ,(int)offsetof(Object_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsBool,(int)offsetof(Object_obj,_disposed),HX_("_disposed",44,02,3a,6f)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxObject > */ ,(int)offsetof(Object_obj,objectRef),HX_("objectRef",d4,93,81,43)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Object_obj_sStaticStorageInfo = 0;
#endif

static ::String Object_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("_disposed",44,02,3a,6f),
	HX_("destroy",fa,2c,86,24),
	HX_("objectRef",d4,93,81,43),
	HX_("get_objectRef",ab,67,e5,04),
	::String(null()) };

::hx::Class Object_obj::__mClass;

void Object_obj::__register()
{
	Object_obj _hx_dummy;
	Object_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Object",dc,ec,bd,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Object_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Object_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Object_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Object_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
