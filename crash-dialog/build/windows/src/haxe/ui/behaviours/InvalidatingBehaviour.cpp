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
#ifndef INCLUDED_haxe_ui_behaviours_InvalidatingBehaviour
#include <haxe/ui/behaviours/InvalidatingBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5b627579ed3f6735_6_new,"haxe.ui.behaviours.InvalidatingBehaviour","new",0xeb682431,"haxe.ui.behaviours.InvalidatingBehaviour.new","haxe/ui/behaviours/InvalidatingBehaviour.hx",6,0xc4da94c0)
HX_LOCAL_STACK_FRAME(_hx_pos_5b627579ed3f6735_8_get,"haxe.ui.behaviours.InvalidatingBehaviour","get",0xeb62d467,"haxe.ui.behaviours.InvalidatingBehaviour.get","haxe/ui/behaviours/InvalidatingBehaviour.hx",8,0xc4da94c0)
HX_LOCAL_STACK_FRAME(_hx_pos_5b627579ed3f6735_11_set,"haxe.ui.behaviours.InvalidatingBehaviour","set",0xeb6bef73,"haxe.ui.behaviours.InvalidatingBehaviour.set","haxe/ui/behaviours/InvalidatingBehaviour.hx",11,0xc4da94c0)
namespace haxe{
namespace ui{
namespace behaviours{

void InvalidatingBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_5b627579ed3f6735_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic InvalidatingBehaviour_obj::__CreateEmpty() { return new InvalidatingBehaviour_obj; }

void *InvalidatingBehaviour_obj::_hx_vtable = 0;

Dynamic InvalidatingBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InvalidatingBehaviour_obj > _hx_result = new InvalidatingBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool InvalidatingBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x2321ea75) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2321ea75;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType InvalidatingBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_5b627579ed3f6735_8_get)
HXDLIN(   8)		return this->_value;
            	}


void InvalidatingBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_5b627579ed3f6735_11_set)
HXLINE(  12)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->_value)) {
HXLINE(  13)			return;
            		}
HXLINE(  16)		this->super::set(value);
HXLINE(  17)		{
HXLINE(  17)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  17)			bool _hx_tmp;
HXDLIN(  17)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  17)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  17)				_hx_tmp = true;
            			}
HXDLIN(  17)			if (!(_hx_tmp)) {
HXLINE(  17)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}



::hx::ObjectPtr< InvalidatingBehaviour_obj > InvalidatingBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< InvalidatingBehaviour_obj > __this = new InvalidatingBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< InvalidatingBehaviour_obj > InvalidatingBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	InvalidatingBehaviour_obj *__this = (InvalidatingBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InvalidatingBehaviour_obj), true, "haxe.ui.behaviours.InvalidatingBehaviour"));
	*(void **)__this = InvalidatingBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

InvalidatingBehaviour_obj::InvalidatingBehaviour_obj()
{
}

::hx::Val InvalidatingBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InvalidatingBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *InvalidatingBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String InvalidatingBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class InvalidatingBehaviour_obj::__mClass;

void InvalidatingBehaviour_obj::__register()
{
	InvalidatingBehaviour_obj _hx_dummy;
	InvalidatingBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.InvalidatingBehaviour",bf,37,3c,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InvalidatingBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InvalidatingBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InvalidatingBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InvalidatingBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
