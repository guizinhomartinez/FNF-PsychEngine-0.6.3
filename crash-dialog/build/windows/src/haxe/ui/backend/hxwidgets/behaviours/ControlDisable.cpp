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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlDisable
#include <haxe/ui/backend/hxwidgets/behaviours/ControlDisable.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a0fdac9012d93c48_6_new,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable","new",0x7a95f3ba,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable.new","haxe/ui/backend/hxwidgets/behaviours/ControlDisable.hx",6,0x8ca0c8b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a0fdac9012d93c48_7_set,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable","set",0x7a99befc,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable.set","haxe/ui/backend/hxwidgets/behaviours/ControlDisable.hx",7,0x8ca0c8b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a0fdac9012d93c48_22_get,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable","get",0x7a90a3f0,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable.get","haxe/ui/backend/hxwidgets/behaviours/ControlDisable.hx",22,0x8ca0c8b7)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlDisable_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_a0fdac9012d93c48_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic ControlDisable_obj::__CreateEmpty() { return new ControlDisable_obj; }

void *ControlDisable_obj::_hx_vtable = 0;

Dynamic ControlDisable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlDisable_obj > _hx_result = new ControlDisable_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlDisable_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6e2e910e) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x6e2e910e;
		}
	} else {
		return inClassId==(int)0x71b1e25d;
	}
}

void ControlDisable_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_a0fdac9012d93c48_7_set)
HXLINE(   8)		this->super::set(value);
HXLINE(   9)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  10)			return;
            		}
HXLINE(  13)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		 ::hx::widgets::Window _hx_tmp = this->_component->get_window();
HXDLIN(  17)		_hx_tmp->set_enabled(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(::haxe::ui::util::_Variant::Variant_Impl__obj::invert(value)));
HXLINE(  18)		 ::haxe::ui::core::Component _hx_tmp1 = this->_component;
HXDLIN(  18)		_hx_tmp1->disableInteractiveEvents(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value));
            	}


 ::haxe::ui::util::VariantType ControlDisable_obj::get(){
            	HX_STACKFRAME(&_hx_pos_a0fdac9012d93c48_22_get)
HXDLIN(  22)		return this->_value;
            	}



::hx::ObjectPtr< ControlDisable_obj > ControlDisable_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ControlDisable_obj > __this = new ControlDisable_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ControlDisable_obj > ControlDisable_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlDisable_obj *__this = (ControlDisable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlDisable_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlDisable"));
	*(void **)__this = ControlDisable_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlDisable_obj::ControlDisable_obj()
{
}

::hx::Val ControlDisable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ControlDisable_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ControlDisable_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlDisable_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class ControlDisable_obj::__mClass;

void ControlDisable_obj::__register()
{
	ControlDisable_obj _hx_dummy;
	ControlDisable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlDisable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlDisable_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlDisable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlDisable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
