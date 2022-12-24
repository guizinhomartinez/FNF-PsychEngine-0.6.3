#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9743495ba91a64d9_3_new,"hx.widgets.GDIObject","new",0xdb866180,"hx.widgets.GDIObject.new","hx/widgets/GDIObject.hx",3,0x4dee31f2)
namespace hx{
namespace widgets{

void GDIObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9743495ba91a64d9_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic GDIObject_obj::__CreateEmpty() { return new GDIObject_obj; }

void *GDIObject_obj::_hx_vtable = 0;

Dynamic GDIObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GDIObject_obj > _hx_result = new GDIObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GDIObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0162a16c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0162a16c;
	} else {
		return inClassId==(int)0x2045b63e;
	}
}


::hx::ObjectPtr< GDIObject_obj > GDIObject_obj::__new() {
	::hx::ObjectPtr< GDIObject_obj > __this = new GDIObject_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GDIObject_obj > GDIObject_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GDIObject_obj *__this = (GDIObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GDIObject_obj), true, "hx.widgets.GDIObject"));
	*(void **)__this = GDIObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GDIObject_obj::GDIObject_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GDIObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GDIObject_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GDIObject_obj::__mClass;

void GDIObject_obj::__register()
{
	GDIObject_obj _hx_dummy;
	GDIObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.GDIObject",8e,e1,df,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GDIObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GDIObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GDIObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
