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
#ifndef INCLUDED_haxe_ui_components__Range_RangeEnd
#include <haxe/ui/components/_Range/RangeEnd.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c686f1c6835e011d_143_new,"haxe.ui.components._Range.RangeEnd","new",0x97c1e6fa,"haxe.ui.components._Range.RangeEnd.new","haxe/ui/components/Range.hx",143,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_c686f1c6835e011d_144_validateData,"haxe.ui.components._Range.RangeEnd","validateData",0xb44e9c06,"haxe.ui.components._Range.RangeEnd.validateData","haxe/ui/components/Range.hx",144,0x313cba28)
namespace haxe{
namespace ui{
namespace components{
namespace _Range{

void RangeEnd_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c686f1c6835e011d_143_new)
HXDLIN( 143)		super::__construct(component);
            	}

Dynamic RangeEnd_obj::__CreateEmpty() { return new RangeEnd_obj; }

void *RangeEnd_obj::_hx_vtable = 0;

Dynamic RangeEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RangeEnd_obj > _hx_result = new RangeEnd_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RangeEnd_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x32d45fec) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32d45fec;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void RangeEnd_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_c686f1c6835e011d_144_validateData)
HXLINE( 145)		 ::haxe::ui::components::Range range = ::hx::TCast<  ::haxe::ui::components::Range >::cast(this->_component);
HXLINE( 146)		bool _hx_tmp;
HXDLIN( 146)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 146)			 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN( 146)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::lt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(range->get_min()) )));
            		}
            		else {
HXLINE( 146)			_hx_tmp = false;
            		}
HXDLIN( 146)		if (_hx_tmp) {
HXLINE( 147)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(range->get_min()) ));
            		}
            		else {
HXLINE( 148)			bool _hx_tmp;
HXDLIN( 148)			if (::hx::IsNotNull( this->_value )) {
HXLINE( 148)				 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN( 148)				_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::gt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(range->get_max()) )));
            			}
            			else {
HXLINE( 148)				_hx_tmp = false;
            			}
HXDLIN( 148)			if (_hx_tmp) {
HXLINE( 149)				this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(range->get_max()) ));
            			}
            		}
HXLINE( 152)		range->set_end(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) ));
HXLINE( 153)		{
HXLINE( 153)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 153)			bool _hx_tmp1;
HXDLIN( 153)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 153)				_hx_tmp1 = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 153)				_hx_tmp1 = true;
            			}
HXDLIN( 153)			if (!(_hx_tmp1)) {
HXLINE( 153)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 155)		 ::haxe::ui::events::UIEvent changeEvent =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 156)		changeEvent->previousValue = this->_previousValue;
HXLINE( 157)		changeEvent->value = this->_value;
HXLINE( 158)		this->_component->dispatch(changeEvent);
            	}



::hx::ObjectPtr< RangeEnd_obj > RangeEnd_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RangeEnd_obj > __this = new RangeEnd_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RangeEnd_obj > RangeEnd_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RangeEnd_obj *__this = (RangeEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RangeEnd_obj), true, "haxe.ui.components._Range.RangeEnd"));
	*(void **)__this = RangeEnd_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RangeEnd_obj::RangeEnd_obj()
{
}

::hx::Val RangeEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RangeEnd_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RangeEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String RangeEnd_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class RangeEnd_obj::__mClass;

void RangeEnd_obj::__register()
{
	RangeEnd_obj _hx_dummy;
	RangeEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Range.RangeEnd",08,a2,d8,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RangeEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RangeEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RangeEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RangeEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Range
