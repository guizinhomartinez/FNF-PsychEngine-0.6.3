#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_SizerItem
#include <hx/widgets/SizerItem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4ee0a42e936aefff_3_new,"hx.widgets.SizerItem","new",0xd67068b9,"hx.widgets.SizerItem.new","hx/widgets/SizerItem.hx",3,0x4a76b4d9)
namespace hx{
namespace widgets{

void SizerItem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4ee0a42e936aefff_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic SizerItem_obj::__CreateEmpty() { return new SizerItem_obj; }

void *SizerItem_obj::_hx_vtable = 0;

Dynamic SizerItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SizerItem_obj > _hx_result = new SizerItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SizerItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b185825) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b185825;
	} else {
		return inClassId==(int)0x2045b63e;
	}
}


::hx::ObjectPtr< SizerItem_obj > SizerItem_obj::__new() {
	::hx::ObjectPtr< SizerItem_obj > __this = new SizerItem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SizerItem_obj > SizerItem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SizerItem_obj *__this = (SizerItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SizerItem_obj), true, "hx.widgets.SizerItem"));
	*(void **)__this = SizerItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SizerItem_obj::SizerItem_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SizerItem_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SizerItem_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SizerItem_obj::__mClass;

void SizerItem_obj::__register()
{
	SizerItem_obj _hx_dummy;
	SizerItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.SizerItem",47,98,95,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SizerItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SizerItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SizerItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
