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
#ifndef INCLUDED_haxe_ui_components__Range_RangeMax
#include <haxe/ui/components/_Range/RangeMax.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3bc9dc675deae08b_112_new,"haxe.ui.components._Range.RangeMax","new",0x35cd8643,"haxe.ui.components._Range.RangeMax.new","haxe/ui/components/Range.hx",112,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_3bc9dc675deae08b_113_validateData,"haxe.ui.components._Range.RangeMax","validateData",0x92934b9d,"haxe.ui.components._Range.RangeMax.validateData","haxe/ui/components/Range.hx",113,0x313cba28)
namespace haxe{
namespace ui{
namespace components{
namespace _Range{

void RangeMax_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3bc9dc675deae08b_112_new)
HXDLIN( 112)		super::__construct(component);
            	}

Dynamic RangeMax_obj::__CreateEmpty() { return new RangeMax_obj; }

void *RangeMax_obj::_hx_vtable = 0;

Dynamic RangeMax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RangeMax_obj > _hx_result = new RangeMax_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RangeMax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x32da66b5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32da66b5;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void RangeMax_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_3bc9dc675deae08b_113_validateData)
HXLINE( 114)		 ::haxe::ui::components::Range range = ::hx::TCast<  ::haxe::ui::components::Range >::cast(this->_component);
HXLINE( 115)		range->set_max(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value));
HXLINE( 116)		Float _hx_tmp = range->get_end();
HXDLIN( 116)		if (::hx::IsGreater( _hx_tmp,range->get_max() )) {
HXLINE( 117)			range->set_end(( (Float)(range->get_max()) ));
            		}
HXLINE( 119)		{
HXLINE( 119)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 119)			bool _hx_tmp1;
HXDLIN( 119)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 119)				_hx_tmp1 = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 119)				_hx_tmp1 = true;
            			}
HXDLIN( 119)			if (!(_hx_tmp1)) {
HXLINE( 119)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}



::hx::ObjectPtr< RangeMax_obj > RangeMax_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RangeMax_obj > __this = new RangeMax_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RangeMax_obj > RangeMax_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RangeMax_obj *__this = (RangeMax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RangeMax_obj), true, "haxe.ui.components._Range.RangeMax"));
	*(void **)__this = RangeMax_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RangeMax_obj::RangeMax_obj()
{
}

::hx::Val RangeMax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RangeMax_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RangeMax_obj_sStaticStorageInfo = 0;
#endif

static ::String RangeMax_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class RangeMax_obj::__mClass;

void RangeMax_obj::__register()
{
	RangeMax_obj _hx_dummy;
	RangeMax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Range.RangeMax",d1,a8,de,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RangeMax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RangeMax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RangeMax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RangeMax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Range
