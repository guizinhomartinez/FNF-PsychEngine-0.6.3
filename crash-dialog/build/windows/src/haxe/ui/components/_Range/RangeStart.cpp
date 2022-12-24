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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
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
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_RangeStart
#include <haxe/ui/components/_Range/RangeStart.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_07fae1d7d21df2d6_124_new,"haxe.ui.components._Range.RangeStart","new",0x5d31ec41,"haxe.ui.components._Range.RangeStart.new","haxe/ui/components/Range.hx",124,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_07fae1d7d21df2d6_125_validateData,"haxe.ui.components._Range.RangeStart","validateData",0x89dd35df,"haxe.ui.components._Range.RangeStart.validateData","haxe/ui/components/Range.hx",125,0x313cba28)
namespace haxe{
namespace ui{
namespace components{
namespace _Range{

void RangeStart_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_07fae1d7d21df2d6_124_new)
HXDLIN( 124)		super::__construct(component);
            	}

Dynamic RangeStart_obj::__CreateEmpty() { return new RangeStart_obj; }

void *RangeStart_obj::_hx_vtable = 0;

Dynamic RangeStart_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RangeStart_obj > _hx_result = new RangeStart_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RangeStart_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x39d0ac17) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x39d0ac17;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void RangeStart_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_07fae1d7d21df2d6_125_validateData)
HXLINE( 126)		 ::haxe::ui::components::Range range = ::hx::TCast<  ::haxe::ui::components::Range >::cast(this->_component);
HXLINE( 127)		bool _hx_tmp;
HXDLIN( 127)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 127)			 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN( 127)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::lt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(range->get_min()) )));
            		}
            		else {
HXLINE( 127)			_hx_tmp = false;
            		}
HXDLIN( 127)		if (_hx_tmp) {
HXLINE( 128)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(range->get_min()) ));
            		}
            		else {
HXLINE( 129)			bool _hx_tmp;
HXDLIN( 129)			if (::hx::IsNotNull( this->_value )) {
HXLINE( 129)				 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN( 129)				_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::gt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(range->get_max()) )));
            			}
            			else {
HXLINE( 129)				_hx_tmp = false;
            			}
HXDLIN( 129)			if (_hx_tmp) {
HXLINE( 130)				this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(range->get_max()) ));
            			}
            		}
HXLINE( 132)		range->set_start(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value));
HXLINE( 133)		{
HXLINE( 133)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 133)			bool _hx_tmp1;
HXDLIN( 133)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 133)				_hx_tmp1 = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 133)				_hx_tmp1 = true;
            			}
HXDLIN( 133)			if (!(_hx_tmp1)) {
HXLINE( 133)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 135)		 ::haxe::ui::events::UIEvent changeEvent =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 136)		changeEvent->previousValue = this->_previousValue;
HXLINE( 137)		changeEvent->value = this->_value;
HXLINE( 138)		this->_component->dispatch(changeEvent);
            	}



::hx::ObjectPtr< RangeStart_obj > RangeStart_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RangeStart_obj > __this = new RangeStart_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RangeStart_obj > RangeStart_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RangeStart_obj *__this = (RangeStart_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RangeStart_obj), true, "haxe.ui.components._Range.RangeStart"));
	*(void **)__this = RangeStart_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RangeStart_obj::RangeStart_obj()
{
}

::hx::Val RangeStart_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RangeStart_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RangeStart_obj_sStaticStorageInfo = 0;
#endif

static ::String RangeStart_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class RangeStart_obj::__mClass;

void RangeStart_obj::__register()
{
	RangeStart_obj _hx_dummy;
	RangeStart_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Range.RangeStart",cf,b7,5c,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RangeStart_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RangeStart_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RangeStart_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RangeStart_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Range
