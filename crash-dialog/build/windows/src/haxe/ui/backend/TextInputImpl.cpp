#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4ea6bad8e3979189_5_new,"haxe.ui.backend.TextInputImpl","new",0xf95d98c3,"haxe.ui.backend.TextInputImpl.new","haxe/ui/backend/TextInputImpl.hx",5,0x120cd8ae)
namespace haxe{
namespace ui{
namespace backend{

void TextInputImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic TextInputImpl_obj::__CreateEmpty() { return new TextInputImpl_obj; }

void *TextInputImpl_obj::_hx_vtable = 0;

Dynamic TextInputImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextInputImpl_obj > _hx_result = new TextInputImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextInputImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c38975b) {
		if (inClassId<=(int)0x0b41c5d8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b41c5d8;
		} else {
			return inClassId==(int)0x0c38975b;
		}
	} else {
		return inClassId==(int)0x256fefab;
	}
}


::hx::ObjectPtr< TextInputImpl_obj > TextInputImpl_obj::__new() {
	::hx::ObjectPtr< TextInputImpl_obj > __this = new TextInputImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextInputImpl_obj > TextInputImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextInputImpl_obj *__this = (TextInputImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextInputImpl_obj), true, "haxe.ui.backend.TextInputImpl"));
	*(void **)__this = TextInputImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextInputImpl_obj::TextInputImpl_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextInputImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextInputImpl_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TextInputImpl_obj::__mClass;

void TextInputImpl_obj::__register()
{
	TextInputImpl_obj _hx_dummy;
	TextInputImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.TextInputImpl",51,7b,53,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextInputImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextInputImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextInputImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
