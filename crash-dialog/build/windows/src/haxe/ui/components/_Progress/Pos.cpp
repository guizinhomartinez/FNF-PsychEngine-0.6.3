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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Progress_Pos
#include <haxe/ui/components/_Progress/Pos.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b87ab33fe2ec0372_61_new,"haxe.ui.components._Progress.Pos","new",0x4f92a1de,"haxe.ui.components._Progress.Pos.new","haxe/ui/components/Progress.hx",61,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_b87ab33fe2ec0372_62_get,"haxe.ui.components._Progress.Pos","get",0x4f8d5214,"haxe.ui.components._Progress.Pos.get","haxe/ui/components/Progress.hx",62,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_b87ab33fe2ec0372_67_set,"haxe.ui.components._Progress.Pos","set",0x4f966d20,"haxe.ui.components._Progress.Pos.set","haxe/ui/components/Progress.hx",67,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{
namespace _Progress{

void Pos_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_b87ab33fe2ec0372_61_new)
HXDLIN(  61)		super::__construct(component);
            	}

Dynamic Pos_obj::__CreateEmpty() { return new Pos_obj; }

void *Pos_obj::_hx_vtable = 0;

Dynamic Pos_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pos_obj > _hx_result = new Pos_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Pos_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x2589f498) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2589f498;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType Pos_obj::get(){
            	HX_STACKFRAME(&_hx_pos_b87ab33fe2ec0372_62_get)
HXLINE(  63)		 ::haxe::ui::components::Progress progress = ::hx::TCast<  ::haxe::ui::components::Progress >::cast(this->_component);
HXLINE(  64)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(progress->get_end());
            	}


void Pos_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_b87ab33fe2ec0372_67_set)
HXLINE(  68)		 ::haxe::ui::components::Progress progress = ::hx::TCast<  ::haxe::ui::components::Progress >::cast(this->_component);
HXLINE(  69)		progress->set_end(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(value)) ));
            	}



::hx::ObjectPtr< Pos_obj > Pos_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Pos_obj > __this = new Pos_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Pos_obj > Pos_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Pos_obj *__this = (Pos_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pos_obj), true, "haxe.ui.components._Progress.Pos"));
	*(void **)__this = Pos_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Pos_obj::Pos_obj()
{
}

::hx::Val Pos_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Pos_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Pos_obj_sStaticStorageInfo = 0;
#endif

static ::String Pos_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class Pos_obj::__mClass;

void Pos_obj::__register()
{
	Pos_obj _hx_dummy;
	Pos_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Progress.Pos",ec,1a,b1,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Pos_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Pos_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pos_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pos_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Progress
