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
#ifndef INCLUDED_haxe_ui_components__Range_RangeMin
#include <haxe/ui/components/_Range/RangeMin.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d44cde322e58f82e_100_new,"haxe.ui.components._Range.RangeMin","new",0xa6a69c31,"haxe.ui.components._Range.RangeMin.new","haxe/ui/components/Range.hx",100,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_d44cde322e58f82e_101_validateData,"haxe.ui.components._Range.RangeMin","validateData",0x9fab07ef,"haxe.ui.components._Range.RangeMin.validateData","haxe/ui/components/Range.hx",101,0x313cba28)
namespace haxe{
namespace ui{
namespace components{
namespace _Range{

void RangeMin_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d44cde322e58f82e_100_new)
HXDLIN( 100)		super::__construct(component);
            	}

Dynamic RangeMin_obj::__CreateEmpty() { return new RangeMin_obj; }

void *RangeMin_obj::_hx_vtable = 0;

Dynamic RangeMin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RangeMin_obj > _hx_result = new RangeMin_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RangeMin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x32da6da3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32da6da3;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void RangeMin_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_d44cde322e58f82e_101_validateData)
HXLINE( 102)		 ::haxe::ui::components::Range range = ::hx::TCast<  ::haxe::ui::components::Range >::cast(this->_component);
HXLINE( 103)		range->set_min(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value));
HXLINE( 104)		 ::Dynamic _hx_tmp = range->get_start();
HXDLIN( 104)		if (::hx::IsLess( _hx_tmp,range->get_min() )) {
HXLINE( 105)			range->set_start(range->get_min());
            		}
HXLINE( 107)		{
HXLINE( 107)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 107)			bool _hx_tmp1;
HXDLIN( 107)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 107)				_hx_tmp1 = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 107)				_hx_tmp1 = true;
            			}
HXDLIN( 107)			if (!(_hx_tmp1)) {
HXLINE( 107)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}



::hx::ObjectPtr< RangeMin_obj > RangeMin_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RangeMin_obj > __this = new RangeMin_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RangeMin_obj > RangeMin_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RangeMin_obj *__this = (RangeMin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RangeMin_obj), true, "haxe.ui.components._Range.RangeMin"));
	*(void **)__this = RangeMin_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RangeMin_obj::RangeMin_obj()
{
}

::hx::Val RangeMin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RangeMin_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RangeMin_obj_sStaticStorageInfo = 0;
#endif

static ::String RangeMin_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class RangeMin_obj::__mClass;

void RangeMin_obj::__register()
{
	RangeMin_obj _hx_dummy;
	RangeMin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Range.RangeMin",bf,af,de,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RangeMin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RangeMin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RangeMin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RangeMin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Range
