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

HX_DEFINE_STACK_FRAME(_hx_pos_b865bde385b1760d_5_new,"haxe.ui.behaviours.DynamicBehaviour","new",0xd830f7d6,"haxe.ui.behaviours.DynamicBehaviour.new","haxe/ui/behaviours/DynamicBehaviour.hx",5,0x0820c799)
HX_LOCAL_STACK_FRAME(_hx_pos_b865bde385b1760d_9_getDynamic,"haxe.ui.behaviours.DynamicBehaviour","getDynamic",0x1fdd78d3,"haxe.ui.behaviours.DynamicBehaviour.getDynamic","haxe/ui/behaviours/DynamicBehaviour.hx",9,0x0820c799)
HX_LOCAL_STACK_FRAME(_hx_pos_b865bde385b1760d_12_setDynamic,"haxe.ui.behaviours.DynamicBehaviour","setDynamic",0x235b1747,"haxe.ui.behaviours.DynamicBehaviour.setDynamic","haxe/ui/behaviours/DynamicBehaviour.hx",12,0x0820c799)
HX_LOCAL_STACK_FRAME(_hx_pos_b865bde385b1760d_21_set,"haxe.ui.behaviours.DynamicBehaviour","set",0xd834c318,"haxe.ui.behaviours.DynamicBehaviour.set","haxe/ui/behaviours/DynamicBehaviour.hx",21,0x0820c799)
namespace haxe{
namespace ui{
namespace behaviours{

void DynamicBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_b865bde385b1760d_5_new)
HXDLIN(   5)		super::__construct(component);
            	}

Dynamic DynamicBehaviour_obj::__CreateEmpty() { return new DynamicBehaviour_obj; }

void *DynamicBehaviour_obj::_hx_vtable = 0;

Dynamic DynamicBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DynamicBehaviour_obj > _hx_result = new DynamicBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DynamicBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2cf486b6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2cf486b6;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::Dynamic DynamicBehaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_b865bde385b1760d_9_getDynamic)
HXDLIN(   9)		return this->_value;
            	}


void DynamicBehaviour_obj::setDynamic( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b865bde385b1760d_12_setDynamic)
HXLINE(  13)		if (::hx::IsEq( value,this->_value )) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		this->_value = value;
            	}


void DynamicBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_b865bde385b1760d_21_set)
HXDLIN(  21)		this->setDynamic(::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(value));
            	}



::hx::ObjectPtr< DynamicBehaviour_obj > DynamicBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DynamicBehaviour_obj > __this = new DynamicBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DynamicBehaviour_obj > DynamicBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DynamicBehaviour_obj *__this = (DynamicBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DynamicBehaviour_obj), true, "haxe.ui.behaviours.DynamicBehaviour"));
	*(void **)__this = DynamicBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DynamicBehaviour_obj::DynamicBehaviour_obj()
{
}

void DynamicBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DynamicBehaviour);
	HX_MARK_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::behaviours::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DynamicBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::behaviours::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DynamicBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return ::hx::Val( _value ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDynamic") ) { return ::hx::Val( setDynamic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DynamicBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DynamicBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_value",b2,c6,9f,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DynamicBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DynamicBehaviour_obj,_value),HX_("_value",b2,c6,9f,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DynamicBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DynamicBehaviour_obj_sMemberFields[] = {
	HX_("_value",b2,c6,9f,2d),
	HX_("getDynamic",89,25,77,85),
	HX_("setDynamic",fd,c3,f4,88),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class DynamicBehaviour_obj::__mClass;

void DynamicBehaviour_obj::__register()
{
	DynamicBehaviour_obj _hx_dummy;
	DynamicBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.DynamicBehaviour",e4,14,ff,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DynamicBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DynamicBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DynamicBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DynamicBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
