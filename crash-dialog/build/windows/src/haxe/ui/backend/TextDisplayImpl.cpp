#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8071faafd25b045f_8_new,"haxe.ui.backend.TextDisplayImpl","new",0x7f5d76bb,"haxe.ui.backend.TextDisplayImpl.new","haxe/ui/backend/TextDisplayImpl.hx",8,0xee590bf6)
namespace haxe{
namespace ui{
namespace backend{

void TextDisplayImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8071faafd25b045f_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic TextDisplayImpl_obj::__CreateEmpty() { return new TextDisplayImpl_obj; }

void *TextDisplayImpl_obj::_hx_vtable = 0;

Dynamic TextDisplayImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextDisplayImpl_obj > _hx_result = new TextDisplayImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextDisplayImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b41c5d8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b41c5d8;
	} else {
		return inClassId==(int)0x0c38975b;
	}
}


::hx::ObjectPtr< TextDisplayImpl_obj > TextDisplayImpl_obj::__new() {
	::hx::ObjectPtr< TextDisplayImpl_obj > __this = new TextDisplayImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextDisplayImpl_obj > TextDisplayImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextDisplayImpl_obj *__this = (TextDisplayImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextDisplayImpl_obj), true, "haxe.ui.backend.TextDisplayImpl"));
	*(void **)__this = TextDisplayImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextDisplayImpl_obj::TextDisplayImpl_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextDisplayImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextDisplayImpl_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TextDisplayImpl_obj::__mClass;

void TextDisplayImpl_obj::__register()
{
	TextDisplayImpl_obj _hx_dummy;
	TextDisplayImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.TextDisplayImpl",49,fd,9e,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextDisplayImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextDisplayImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextDisplayImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
