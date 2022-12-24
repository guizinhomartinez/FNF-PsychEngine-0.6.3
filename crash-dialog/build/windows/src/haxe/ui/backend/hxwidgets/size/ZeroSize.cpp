#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_ZeroSize
#include <haxe/ui/backend/hxwidgets/size/ZeroSize.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_00572c1452c77a5a_5_new,"haxe.ui.backend.hxwidgets.size.ZeroSize","new",0x0240452d,"haxe.ui.backend.hxwidgets.size.ZeroSize.new","haxe/ui/backend/hxwidgets/size/ZeroSize.hx",5,0xbeb5da64)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{

void ZeroSize_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_00572c1452c77a5a_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic ZeroSize_obj::__CreateEmpty() { return new ZeroSize_obj; }

void *ZeroSize_obj::_hx_vtable = 0;

Dynamic ZeroSize_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ZeroSize_obj > _hx_result = new ZeroSize_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZeroSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x07635b2f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x07635b2f;
	} else {
		return inClassId==(int)0x099a2e57;
	}
}


::hx::ObjectPtr< ZeroSize_obj > ZeroSize_obj::__new() {
	::hx::ObjectPtr< ZeroSize_obj > __this = new ZeroSize_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ZeroSize_obj > ZeroSize_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ZeroSize_obj *__this = (ZeroSize_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ZeroSize_obj), true, "haxe.ui.backend.hxwidgets.size.ZeroSize"));
	*(void **)__this = ZeroSize_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZeroSize_obj::ZeroSize_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ZeroSize_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ZeroSize_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ZeroSize_obj::__mClass;

void ZeroSize_obj::__register()
{
	ZeroSize_obj _hx_dummy;
	ZeroSize_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.size.ZeroSize",bb,2a,b9,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ZeroSize_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZeroSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZeroSize_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size
