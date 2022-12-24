#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8bb1718fb44eece3_3_new,"haxe.ui.backend.ImageDisplayImpl","new",0x737223e5,"haxe.ui.backend.ImageDisplayImpl.new","haxe/ui/backend/ImageDisplayImpl.hx",3,0xdab6112a)
namespace haxe{
namespace ui{
namespace backend{

void ImageDisplayImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8bb1718fb44eece3_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic ImageDisplayImpl_obj::__CreateEmpty() { return new ImageDisplayImpl_obj; }

void *ImageDisplayImpl_obj::_hx_vtable = 0;

Dynamic ImageDisplayImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageDisplayImpl_obj > _hx_result = new ImageDisplayImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageDisplayImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20bbbdc4) {
		if (inClassId<=(int)0x1ffc6b7e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1ffc6b7e;
		} else {
			return inClassId==(int)0x20bbbdc4;
		}
	} else {
		return inClassId==(int)0x26448321;
	}
}


::hx::ObjectPtr< ImageDisplayImpl_obj > ImageDisplayImpl_obj::__new() {
	::hx::ObjectPtr< ImageDisplayImpl_obj > __this = new ImageDisplayImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ImageDisplayImpl_obj > ImageDisplayImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ImageDisplayImpl_obj *__this = (ImageDisplayImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageDisplayImpl_obj), true, "haxe.ui.backend.ImageDisplayImpl"));
	*(void **)__this = ImageDisplayImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageDisplayImpl_obj::ImageDisplayImpl_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageDisplayImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ImageDisplayImpl_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ImageDisplayImpl_obj::__mClass;

void ImageDisplayImpl_obj::__register()
{
	ImageDisplayImpl_obj _hx_dummy;
	ImageDisplayImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ImageDisplayImpl",73,4d,77,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ImageDisplayImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageDisplayImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageDisplayImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
