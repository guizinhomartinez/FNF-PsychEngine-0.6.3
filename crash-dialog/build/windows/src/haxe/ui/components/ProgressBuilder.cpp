#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressBuilder
#include <haxe/ui/components/ProgressBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_RangeBuilder
#include <haxe/ui/components/RangeBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_afebf8b8dcc93b56_117_new,"haxe.ui.components.ProgressBuilder","new",0x59bc3dfa,"haxe.ui.components.ProgressBuilder.new","haxe/ui/components/Progress.hx",117,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{

void ProgressBuilder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_afebf8b8dcc93b56_117_new)
HXDLIN( 117)		super::__construct(component);
            	}

Dynamic ProgressBuilder_obj::__CreateEmpty() { return new ProgressBuilder_obj; }

void *ProgressBuilder_obj::_hx_vtable = 0;

Dynamic ProgressBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProgressBuilder_obj > _hx_result = new ProgressBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ProgressBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06f18c3e) {
		if (inClassId<=(int)0x0472fd8d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
		} else {
			return inClassId==(int)0x06f18c3e;
		}
	} else {
		return inClassId==(int)0x2e97ddf2;
	}
}


::hx::ObjectPtr< ProgressBuilder_obj > ProgressBuilder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ProgressBuilder_obj > __this = new ProgressBuilder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ProgressBuilder_obj > ProgressBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ProgressBuilder_obj *__this = (ProgressBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProgressBuilder_obj), true, "haxe.ui.components.ProgressBuilder"));
	*(void **)__this = ProgressBuilder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ProgressBuilder_obj::ProgressBuilder_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ProgressBuilder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ProgressBuilder_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ProgressBuilder_obj::__mClass;

void ProgressBuilder_obj::__register()
{
	ProgressBuilder_obj _hx_dummy;
	ProgressBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.ProgressBuilder",08,79,1b,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ProgressBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
