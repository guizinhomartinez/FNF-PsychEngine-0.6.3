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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlMax
#include <haxe/ui/backend/hxwidgets/behaviours/ControlMax.h>
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
#ifndef INCLUDED_hx_widgets_Gauge
#include <hx/widgets/Gauge.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_27e62be991e2bd18_9_new,"haxe.ui.backend.hxwidgets.behaviours.ControlMax","new",0xadb1b276,"haxe.ui.backend.hxwidgets.behaviours.ControlMax.new","haxe/ui/backend/hxwidgets/behaviours/ControlMax.hx",9,0xe5e300fb)
HX_LOCAL_STACK_FRAME(_hx_pos_27e62be991e2bd18_10_validateData,"haxe.ui.backend.hxwidgets.behaviours.ControlMax","validateData",0x199f810a,"haxe.ui.backend.hxwidgets.behaviours.ControlMax.validateData","haxe/ui/backend/hxwidgets/behaviours/ControlMax.hx",10,0xe5e300fb)
HX_LOCAL_STACK_FRAME(_hx_pos_27e62be991e2bd18_22_get,"haxe.ui.backend.hxwidgets.behaviours.ControlMax","get",0xadac62ac,"haxe.ui.backend.hxwidgets.behaviours.ControlMax.get","haxe/ui/backend/hxwidgets/behaviours/ControlMax.hx",22,0xe5e300fb)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlMax_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_27e62be991e2bd18_9_new)
HXDLIN(   9)		super::__construct(component);
            	}

Dynamic ControlMax_obj::__CreateEmpty() { return new ControlMax_obj; }

void *ControlMax_obj::_hx_vtable = 0;

Dynamic ControlMax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlMax_obj > _hx_result = new ControlMax_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlMax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x1cb126ca) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1cb126ca;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void ControlMax_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_27e62be991e2bd18_10_validateData)
HXLINE(  11)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  12)			return;
            		}
HXLINE(  15)		if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::Slider >())) {
HXLINE(  16)			 ::hx::widgets::Slider _hx_tmp = ::hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->get_window());
HXDLIN(  16)			_hx_tmp->set_max(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
            		}
            		else {
HXLINE(  17)			if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::Gauge >())) {
HXLINE(  18)				 ::hx::widgets::Gauge _hx_tmp = ::hx::TCast<  ::hx::widgets::Gauge >::cast(this->_component->get_window());
HXDLIN(  18)				_hx_tmp->set_range(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
            			}
            		}
            	}


 ::haxe::ui::util::VariantType ControlMax_obj::get(){
            	HX_STACKFRAME(&_hx_pos_27e62be991e2bd18_22_get)
HXLINE(  23)		bool _hx_tmp;
HXDLIN(  23)		if (::hx::IsNotNull( this->_component )) {
HXLINE(  23)			_hx_tmp = ::hx::IsNull( this->_component->get_window() );
            		}
            		else {
HXLINE(  23)			_hx_tmp = true;
            		}
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  24)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0);
            		}
HXLINE(  27)		 ::haxe::ui::util::VariantType v = null();
HXLINE(  28)		if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::Gauge >())) {
HXLINE(  29)			v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(::hx::TCast<  ::hx::widgets::Gauge >::cast(this->_component->get_window())->get_range());
            		}
            		else {
HXLINE(  30)			if (::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::Slider >())) {
HXLINE(  31)				v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(::hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->get_window())->get_max());
            			}
            		}
HXLINE(  33)		return v;
            	}



::hx::ObjectPtr< ControlMax_obj > ControlMax_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ControlMax_obj > __this = new ControlMax_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ControlMax_obj > ControlMax_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlMax_obj *__this = (ControlMax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlMax_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlMax"));
	*(void **)__this = ControlMax_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlMax_obj::ControlMax_obj()
{
}

::hx::Val ControlMax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ControlMax_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ControlMax_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlMax_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class ControlMax_obj::__mClass;

void ControlMax_obj::__register()
{
	ControlMax_obj _hx_dummy;
	ControlMax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMax",84,ff,a5,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlMax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlMax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlMax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlMax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
