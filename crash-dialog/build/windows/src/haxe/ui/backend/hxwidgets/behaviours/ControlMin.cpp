#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlMin
#include <haxe/ui/backend/hxwidgets/behaviours/ControlMin.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Slider
#include <hx/widgets/Slider.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2002ff8f6351fa3b_8_new,"haxe.ui.backend.hxwidgets.behaviours.ControlMin","new",0x1e8ac864,"haxe.ui.backend.hxwidgets.behaviours.ControlMin.new","haxe/ui/backend/hxwidgets/behaviours/ControlMin.hx",8,0x7a7b82cd)
HX_LOCAL_STACK_FRAME(_hx_pos_2002ff8f6351fa3b_9_validateData,"haxe.ui.backend.hxwidgets.behaviours.ControlMin","validateData",0x26b73d5c,"haxe.ui.backend.hxwidgets.behaviours.ControlMin.validateData","haxe/ui/backend/hxwidgets/behaviours/ControlMin.hx",9,0x7a7b82cd)
HX_LOCAL_STACK_FRAME(_hx_pos_2002ff8f6351fa3b_19_get,"haxe.ui.backend.hxwidgets.behaviours.ControlMin","get",0x1e85789a,"haxe.ui.backend.hxwidgets.behaviours.ControlMin.get","haxe/ui/backend/hxwidgets/behaviours/ControlMin.hx",19,0x7a7b82cd)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlMin_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2002ff8f6351fa3b_8_new)
HXDLIN(   8)		super::__construct(component);
            	}

Dynamic ControlMin_obj::__CreateEmpty() { return new ControlMin_obj; }

void *ControlMin_obj::_hx_vtable = 0;

Dynamic ControlMin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlMin_obj > _hx_result = new ControlMin_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlMin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x1cb12db8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1cb12db8;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void ControlMin_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_2002ff8f6351fa3b_9_validateData)
HXLINE(  10)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  11)			return;
            		}
HXLINE(  14)		if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::Slider >())) {
HXLINE(  15)			 ::hx::widgets::Slider _hx_tmp = ::hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->get_window());
HXDLIN(  15)			_hx_tmp->set_min(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
            		}
            	}


 ::haxe::ui::util::VariantType ControlMin_obj::get(){
            	HX_STACKFRAME(&_hx_pos_2002ff8f6351fa3b_19_get)
HXLINE(  20)		bool _hx_tmp;
HXDLIN(  20)		if (::hx::IsNotNull( this->_component )) {
HXLINE(  20)			_hx_tmp = ::hx::IsNull( this->_component->get_window() );
            		}
            		else {
HXLINE(  20)			_hx_tmp = true;
            		}
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  21)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0);
            		}
HXLINE(  23)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(::hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->get_window())->get_min());
            	}



::hx::ObjectPtr< ControlMin_obj > ControlMin_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ControlMin_obj > __this = new ControlMin_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ControlMin_obj > ControlMin_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlMin_obj *__this = (ControlMin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlMin_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlMin"));
	*(void **)__this = ControlMin_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlMin_obj::ControlMin_obj()
{
}

::hx::Val ControlMin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ControlMin_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ControlMin_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlMin_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class ControlMin_obj::__mClass;

void ControlMin_obj::__register()
{
	ControlMin_obj _hx_dummy;
	ControlMin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMin",72,06,a6,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlMin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlMin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlMin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlMin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
