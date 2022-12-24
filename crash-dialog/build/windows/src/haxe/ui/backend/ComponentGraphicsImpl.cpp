#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#include <haxe/ui/backend/ComponentGraphicsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsImpl
#include <haxe/ui/backend/ComponentGraphicsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_401f586f6ef1a56f_3_new,"haxe.ui.backend.ComponentGraphicsImpl","new",0x0f4d464e,"haxe.ui.backend.ComponentGraphicsImpl.new","haxe/ui/backend/ComponentGraphicsImpl.hx",3,0xde336e83)
namespace haxe{
namespace ui{
namespace backend{

void ComponentGraphicsImpl_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_3_new)
HXDLIN(   3)		super::__construct(component);
            	}

Dynamic ComponentGraphicsImpl_obj::__CreateEmpty() { return new ComponentGraphicsImpl_obj; }

void *ComponentGraphicsImpl_obj::_hx_vtable = 0;

Dynamic ComponentGraphicsImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentGraphicsImpl_obj > _hx_result = new ComponentGraphicsImpl_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentGraphicsImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x292a8ee7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x292a8ee7;
	} else {
		return inClassId==(int)0x2dd425b6;
	}
}


::hx::ObjectPtr< ComponentGraphicsImpl_obj > ComponentGraphicsImpl_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentGraphicsImpl_obj > __this = new ComponentGraphicsImpl_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentGraphicsImpl_obj > ComponentGraphicsImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentGraphicsImpl_obj *__this = (ComponentGraphicsImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentGraphicsImpl_obj), true, "haxe.ui.backend.ComponentGraphicsImpl"));
	*(void **)__this = ComponentGraphicsImpl_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentGraphicsImpl_obj::ComponentGraphicsImpl_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentGraphicsImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentGraphicsImpl_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ComponentGraphicsImpl_obj::__mClass;

void ComponentGraphicsImpl_obj::__register()
{
	ComponentGraphicsImpl_obj _hx_dummy;
	ComponentGraphicsImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ComponentGraphicsImpl",5c,c7,44,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ComponentGraphicsImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentGraphicsImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentGraphicsImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
