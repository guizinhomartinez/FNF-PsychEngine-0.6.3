#include <hxcpp.h>

#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_22d568b119f3373b_7_new,"haxe.ui.backend.AssetsImpl","new",0xd46da341,"haxe.ui.backend.AssetsImpl.new","haxe/ui/backend/AssetsImpl.hx",7,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_9_getImageInternal,"haxe.ui.backend.AssetsImpl","getImageInternal",0x8b3a73c1,"haxe.ui.backend.AssetsImpl.getImageInternal","haxe/ui/backend/AssetsImpl.hx",9,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_14_getImageFromHaxeResource,"haxe.ui.backend.AssetsImpl","getImageFromHaxeResource",0x481a7c22,"haxe.ui.backend.AssetsImpl.getImageFromHaxeResource","haxe/ui/backend/AssetsImpl.hx",14,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_13_getImageFromHaxeResource,"haxe.ui.backend.AssetsImpl","getImageFromHaxeResource",0x481a7c22,"haxe.ui.backend.AssetsImpl.getImageFromHaxeResource","haxe/ui/backend/AssetsImpl.hx",13,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_18_imageFromBytes,"haxe.ui.backend.AssetsImpl","imageFromBytes",0x721a3685,"haxe.ui.backend.AssetsImpl.imageFromBytes","haxe/ui/backend/AssetsImpl.hx",18,0x4811180e)
namespace haxe{
namespace ui{
namespace backend{

void AssetsImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic AssetsImpl_obj::__CreateEmpty() { return new AssetsImpl_obj; }

void *AssetsImpl_obj::_hx_vtable = 0;

Dynamic AssetsImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetsImpl_obj > _hx_result = new AssetsImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetsImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f0c8145) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7f0c8145;
	} else {
		return inClassId==(int)0x7ff6ca06;
	}
}

void AssetsImpl_obj::getImageInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_9_getImageInternal)
HXDLIN(   9)		this->imageFromBytes(::haxe::Resource_obj::getBytes(resourceId),callback);
            	}


void AssetsImpl_obj::getImageFromHaxeResource(::String resourceId, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,resourceId, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::Dynamic imageInfo){
            			HX_STACKFRAME(&_hx_pos_22d568b119f3373b_14_getImageFromHaxeResource)
HXLINE(  14)			callback(resourceId,imageInfo);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_13_getImageFromHaxeResource)
HXDLIN(  13)		this->imageFromBytes(::haxe::Resource_obj::getBytes(resourceId), ::Dynamic(new _hx_Closure_0(resourceId,callback)));
            	}


void AssetsImpl_obj::imageFromBytes( ::haxe::io::Bytes bytes, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_18_imageFromBytes)
HXLINE(  19)		if (::hx::IsNull( bytes )) {
HXLINE(  20)			callback(null());
HXLINE(  21)			return;
            		}
HXLINE(  24)		 ::hx::widgets::Bitmap bmp = ::hx::widgets::Bitmap_obj::fromHaxeBytes(bytes);
HXLINE(  25)		if ((bmp->get_isOk() == false)) {
HXLINE(  26)			callback(null());
            		}
HXLINE(  31)		int _hx_tmp = bmp->get_width();
HXLINE(  29)		callback( ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("width",06,b6,62,ca),_hx_tmp)
            			->setFixed(1,HX_("height",e7,07,4c,02),bmp->get_height())
            			->setFixed(2,HX_("data",2a,56,63,42),bmp)));
            	}



::hx::ObjectPtr< AssetsImpl_obj > AssetsImpl_obj::__new() {
	::hx::ObjectPtr< AssetsImpl_obj > __this = new AssetsImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetsImpl_obj > AssetsImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetsImpl_obj *__this = (AssetsImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetsImpl_obj), false, "haxe.ui.backend.AssetsImpl"));
	*(void **)__this = AssetsImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetsImpl_obj::AssetsImpl_obj()
{
}

::hx::Val AssetsImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"imageFromBytes") ) { return ::hx::Val( imageFromBytes_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getImageInternal") ) { return ::hx::Val( getImageInternal_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getImageFromHaxeResource") ) { return ::hx::Val( getImageFromHaxeResource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetsImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AssetsImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetsImpl_obj_sMemberFields[] = {
	HX_("getImageInternal",42,3f,39,72),
	HX_("getImageFromHaxeResource",a3,30,02,17),
	HX_("imageFromBytes",c6,6f,67,40),
	::String(null()) };

::hx::Class AssetsImpl_obj::__mClass;

void AssetsImpl_obj::__register()
{
	AssetsImpl_obj _hx_dummy;
	AssetsImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.AssetsImpl",cf,ee,b0,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetsImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetsImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetsImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetsImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
