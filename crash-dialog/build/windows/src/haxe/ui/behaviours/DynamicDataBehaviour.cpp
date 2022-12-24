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
#ifndef INCLUDED_haxe_ui_behaviours_DynamicBehaviour
#include <haxe/ui/behaviours/DynamicBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DynamicDataBehaviour
#include <haxe/ui/behaviours/DynamicDataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a1eacaddf6bf0766_3_new,"haxe.ui.behaviours.DynamicDataBehaviour","new",0x4f997ecc,"haxe.ui.behaviours.DynamicDataBehaviour.new","haxe/ui/behaviours/DynamicDataBehaviour.hx",3,0x8534dce3)
HX_LOCAL_STACK_FRAME(_hx_pos_a1eacaddf6bf0766_6_setDynamic,"haxe.ui.behaviours.DynamicDataBehaviour","setDynamic",0x4728fb11,"haxe.ui.behaviours.DynamicDataBehaviour.setDynamic","haxe/ui/behaviours/DynamicDataBehaviour.hx",6,0x8534dce3)
HX_LOCAL_STACK_FRAME(_hx_pos_a1eacaddf6bf0766_16_validate,"haxe.ui.behaviours.DynamicDataBehaviour","validate",0x82d25aaa,"haxe.ui.behaviours.DynamicDataBehaviour.validate","haxe/ui/behaviours/DynamicDataBehaviour.hx",16,0x8534dce3)
HX_LOCAL_STACK_FRAME(_hx_pos_a1eacaddf6bf0766_22_invalidateData,"haxe.ui.behaviours.DynamicDataBehaviour","invalidateData",0xde4fc659,"haxe.ui.behaviours.DynamicDataBehaviour.invalidateData","haxe/ui/behaviours/DynamicDataBehaviour.hx",22,0x8534dce3)
HX_LOCAL_STACK_FRAME(_hx_pos_a1eacaddf6bf0766_27_validateData,"haxe.ui.behaviours.DynamicDataBehaviour","validateData",0x736279f4,"haxe.ui.behaviours.DynamicDataBehaviour.validateData","haxe/ui/behaviours/DynamicDataBehaviour.hx",27,0x8534dce3)
namespace haxe{
namespace ui{
namespace behaviours{

void DynamicDataBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_a1eacaddf6bf0766_3_new)
HXDLIN(   3)		super::__construct(component);
            	}

Dynamic DynamicDataBehaviour_obj::__CreateEmpty() { return new DynamicDataBehaviour_obj; }

void *DynamicDataBehaviour_obj::_hx_vtable = 0;

Dynamic DynamicDataBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DynamicDataBehaviour_obj > _hx_result = new DynamicDataBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DynamicDataBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2cf486b6) {
		if (inClassId<=(int)0x03c21548) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03c21548;
		} else {
			return inClassId==(int)0x2cf486b6;
		}
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

static ::haxe::ui::behaviours::IValidatingBehaviour_obj _hx_haxe_ui_behaviours_DynamicDataBehaviour__hx_haxe_ui_behaviours_IValidatingBehaviour= {
	( void (::hx::Object::*)())&::haxe::ui::behaviours::DynamicDataBehaviour_obj::validate,
};

void *DynamicDataBehaviour_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x359109f1: return &_hx_haxe_ui_behaviours_DynamicDataBehaviour__hx_haxe_ui_behaviours_IValidatingBehaviour;
	}
	return super::_hx_getInterface(inHash);
}

void DynamicDataBehaviour_obj::setDynamic( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_a1eacaddf6bf0766_6_setDynamic)
HXLINE(   7)		if (::hx::IsEq( value,this->getDynamic() )) {
HXLINE(   8)			return;
            		}
HXLINE(  11)		this->_value = value;
HXLINE(  12)		this->invalidateData();
            	}


void DynamicDataBehaviour_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_a1eacaddf6bf0766_16_validate)
HXDLIN(  16)		if (this->_dataInvalid) {
HXLINE(  17)			this->_dataInvalid = false;
HXLINE(  18)			this->validateData();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DynamicDataBehaviour_obj,validate,(void))

void DynamicDataBehaviour_obj::invalidateData(){
            	HX_STACKFRAME(&_hx_pos_a1eacaddf6bf0766_22_invalidateData)
HXLINE(  23)		this->_dataInvalid = true;
HXLINE(  24)		this->_component->invalidateComponent(HX_("data",2a,56,63,42),false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DynamicDataBehaviour_obj,invalidateData,(void))

void DynamicDataBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_a1eacaddf6bf0766_27_validateData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DynamicDataBehaviour_obj,validateData,(void))


::hx::ObjectPtr< DynamicDataBehaviour_obj > DynamicDataBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DynamicDataBehaviour_obj > __this = new DynamicDataBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DynamicDataBehaviour_obj > DynamicDataBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DynamicDataBehaviour_obj *__this = (DynamicDataBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DynamicDataBehaviour_obj), true, "haxe.ui.behaviours.DynamicDataBehaviour"));
	*(void **)__this = DynamicDataBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DynamicDataBehaviour_obj::DynamicDataBehaviour_obj()
{
}

::hx::Val DynamicDataBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return ::hx::Val( validate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setDynamic") ) { return ::hx::Val( setDynamic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_dataInvalid") ) { return ::hx::Val( _dataInvalid ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidateData") ) { return ::hx::Val( invalidateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DynamicDataBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_dataInvalid") ) { _dataInvalid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DynamicDataBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dataInvalid",ee,d3,3c,e3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DynamicDataBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DynamicDataBehaviour_obj,_dataInvalid),HX_("_dataInvalid",ee,d3,3c,e3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DynamicDataBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DynamicDataBehaviour_obj_sMemberFields[] = {
	HX_("_dataInvalid",ee,d3,3c,e3),
	HX_("setDynamic",fd,c3,f4,88),
	HX_("validate",96,d0,e3,04),
	HX_("invalidateData",45,75,30,68),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class DynamicDataBehaviour_obj::__mClass;

void DynamicDataBehaviour_obj::__register()
{
	DynamicDataBehaviour_obj _hx_dummy;
	DynamicDataBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.DynamicDataBehaviour",da,68,af,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DynamicDataBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DynamicDataBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DynamicDataBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DynamicDataBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
