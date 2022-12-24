#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_CalendarCtrlDateBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/CalendarCtrlDateBehaviour.h>
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
#ifndef INCLUDED_hx_widgets_CalendarCtrl
#include <hx/widgets/CalendarCtrl.h>
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
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_404b9857639364e8_6_new,"haxe.ui.backend.hxwidgets.behaviours.CalendarCtrlDateBehaviour","new",0x4d397fbb,"haxe.ui.backend.hxwidgets.behaviours.CalendarCtrlDateBehaviour.new","haxe/ui/backend/hxwidgets/behaviours/CalendarCtrlDateBehaviour.hx",6,0x5a08adf4)
HX_LOCAL_STACK_FRAME(_hx_pos_404b9857639364e8_7_set,"haxe.ui.backend.hxwidgets.behaviours.CalendarCtrlDateBehaviour","set",0x4d3d4afd,"haxe.ui.backend.hxwidgets.behaviours.CalendarCtrlDateBehaviour.set","haxe/ui/backend/hxwidgets/behaviours/CalendarCtrlDateBehaviour.hx",7,0x5a08adf4)
HX_LOCAL_STACK_FRAME(_hx_pos_404b9857639364e8_21_get,"haxe.ui.backend.hxwidgets.behaviours.CalendarCtrlDateBehaviour","get",0x4d342ff1,"haxe.ui.backend.hxwidgets.behaviours.CalendarCtrlDateBehaviour.get","haxe/ui/backend/hxwidgets/behaviours/CalendarCtrlDateBehaviour.hx",21,0x5a08adf4)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void CalendarCtrlDateBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_404b9857639364e8_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic CalendarCtrlDateBehaviour_obj::__CreateEmpty() { return new CalendarCtrlDateBehaviour_obj; }

void *CalendarCtrlDateBehaviour_obj::_hx_vtable = 0;

Dynamic CalendarCtrlDateBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CalendarCtrlDateBehaviour_obj > _hx_result = new CalendarCtrlDateBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CalendarCtrlDateBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x327e938b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x327e938b;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x71b1e25d;
	}
}

void CalendarCtrlDateBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_404b9857639364e8_7_set)
HXLINE(   8)		this->super::set(value);
HXLINE(   9)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  10)			return;
            		}
HXLINE(  13)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		 ::hx::widgets::CalendarCtrl cal = ::hx::TCast<  ::hx::widgets::CalendarCtrl >::cast(this->_component->get_window());
HXLINE(  18)		cal->set_date(::haxe::ui::util::_Variant::Variant_Impl__obj::toDate(value));
            	}


 ::haxe::ui::util::VariantType CalendarCtrlDateBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_404b9857639364e8_21_get)
HXLINE(  22)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  23)			return null();
            		}
HXLINE(  26)		 ::hx::widgets::CalendarCtrl cal = ::hx::TCast<  ::hx::widgets::CalendarCtrl >::cast(this->_component->get_window());
HXLINE(  27)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDate(cal->get_date());
            	}



::hx::ObjectPtr< CalendarCtrlDateBehaviour_obj > CalendarCtrlDateBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< CalendarCtrlDateBehaviour_obj > __this = new CalendarCtrlDateBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< CalendarCtrlDateBehaviour_obj > CalendarCtrlDateBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	CalendarCtrlDateBehaviour_obj *__this = (CalendarCtrlDateBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CalendarCtrlDateBehaviour_obj), true, "haxe.ui.backend.hxwidgets.behaviours.CalendarCtrlDateBehaviour"));
	*(void **)__this = CalendarCtrlDateBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

CalendarCtrlDateBehaviour_obj::CalendarCtrlDateBehaviour_obj()
{
}

::hx::Val CalendarCtrlDateBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CalendarCtrlDateBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CalendarCtrlDateBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String CalendarCtrlDateBehaviour_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class CalendarCtrlDateBehaviour_obj::__mClass;

void CalendarCtrlDateBehaviour_obj::__register()
{
	CalendarCtrlDateBehaviour_obj _hx_dummy;
	CalendarCtrlDateBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.CalendarCtrlDateBehaviour",49,86,82,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CalendarCtrlDateBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CalendarCtrlDateBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CalendarCtrlDateBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CalendarCtrlDateBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
