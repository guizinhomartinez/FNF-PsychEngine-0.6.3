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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ChoiceSelectedLabel
#include <haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedLabel.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
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
#ifndef INCLUDED_hx_widgets_Choice
#include <hx/widgets/Choice.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d60ace7699016b55_7_new,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedLabel","new",0x5ae85c0d,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedLabel.new","haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedLabel.hx",7,0xc6f980a2)
HX_LOCAL_STACK_FRAME(_hx_pos_d60ace7699016b55_8_get,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedLabel","get",0x5ae30c43,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedLabel.get","haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedLabel.hx",8,0xc6f980a2)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ChoiceSelectedLabel_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d60ace7699016b55_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic ChoiceSelectedLabel_obj::__CreateEmpty() { return new ChoiceSelectedLabel_obj; }

void *ChoiceSelectedLabel_obj::_hx_vtable = 0;

Dynamic ChoiceSelectedLabel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChoiceSelectedLabel_obj > _hx_result = new ChoiceSelectedLabel_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChoiceSelectedLabel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x74cdea21 || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType ChoiceSelectedLabel_obj::get(){
            	HX_STACKFRAME(&_hx_pos_d60ace7699016b55_8_get)
HXLINE(   9)		 ::hx::widgets::Choice choice = ::hx::TCast<  ::hx::widgets::Choice >::cast(this->_component->get_window());
HXLINE(  10)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(choice->get_selectedString());
            	}



::hx::ObjectPtr< ChoiceSelectedLabel_obj > ChoiceSelectedLabel_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ChoiceSelectedLabel_obj > __this = new ChoiceSelectedLabel_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ChoiceSelectedLabel_obj > ChoiceSelectedLabel_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ChoiceSelectedLabel_obj *__this = (ChoiceSelectedLabel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChoiceSelectedLabel_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedLabel"));
	*(void **)__this = ChoiceSelectedLabel_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ChoiceSelectedLabel_obj::ChoiceSelectedLabel_obj()
{
}

::hx::Val ChoiceSelectedLabel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ChoiceSelectedLabel_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ChoiceSelectedLabel_obj_sStaticStorageInfo = 0;
#endif

static ::String ChoiceSelectedLabel_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class ChoiceSelectedLabel_obj::__mClass;

void ChoiceSelectedLabel_obj::__register()
{
	ChoiceSelectedLabel_obj _hx_dummy;
	ChoiceSelectedLabel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedLabel",9b,51,14,ee);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChoiceSelectedLabel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChoiceSelectedLabel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChoiceSelectedLabel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChoiceSelectedLabel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
