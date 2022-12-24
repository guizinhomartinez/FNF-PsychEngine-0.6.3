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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_Property
#include <haxe/ui/containers/properties/Property.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyBuilder
#include <haxe/ui/containers/properties/PropertyBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__Property_LabelBehaviour
#include <haxe/ui/containers/properties/_Property/LabelBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_de5d2e087c099afc_34_new,"haxe.ui.containers.properties._Property.LabelBehaviour","new",0x6ded0a26,"haxe.ui.containers.properties._Property.LabelBehaviour.new","haxe/ui/containers/properties/Property.hx",34,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_de5d2e087c099afc_39_set,"haxe.ui.containers.properties._Property.LabelBehaviour","set",0x6df0d568,"haxe.ui.containers.properties._Property.LabelBehaviour.set","haxe/ui/containers/properties/Property.hx",39,0xa93e75b8)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _Property{

void LabelBehaviour_obj::__construct( ::haxe::ui::containers::properties::Property property){
            	HX_STACKFRAME(&_hx_pos_de5d2e087c099afc_34_new)
HXLINE(  35)		super::__construct(property);
HXLINE(  36)		this->_property = property;
            	}

Dynamic LabelBehaviour_obj::__CreateEmpty() { return new LabelBehaviour_obj; }

void *LabelBehaviour_obj::_hx_vtable = 0;

Dynamic LabelBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LabelBehaviour_obj > _hx_result = new LabelBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LabelBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x09ebf87e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x09ebf87e;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

void LabelBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_de5d2e087c099afc_39_set)
HXLINE(  40)		this->super::set(value);
HXLINE(  41)		 ::haxe::ui::containers::properties::PropertyBuilder builder = ::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(this->_property->_compositeBuilder);
HXLINE(  42)		if (::hx::IsNotNull( builder->label )) {
HXLINE(  43)			 ::haxe::ui::components::Label builder1 = builder->label;
HXDLIN(  43)			builder1->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
            		}
            	}



::hx::ObjectPtr< LabelBehaviour_obj > LabelBehaviour_obj::__new( ::haxe::ui::containers::properties::Property property) {
	::hx::ObjectPtr< LabelBehaviour_obj > __this = new LabelBehaviour_obj();
	__this->__construct(property);
	return __this;
}

::hx::ObjectPtr< LabelBehaviour_obj > LabelBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::properties::Property property) {
	LabelBehaviour_obj *__this = (LabelBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LabelBehaviour_obj), true, "haxe.ui.containers.properties._Property.LabelBehaviour"));
	*(void **)__this = LabelBehaviour_obj::_hx_vtable;
	__this->__construct(property);
	return __this;
}

LabelBehaviour_obj::LabelBehaviour_obj()
{
}

void LabelBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LabelBehaviour);
	HX_MARK_MEMBER_NAME(_property,"_property");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LabelBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_property,"_property");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LabelBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_property") ) { return ::hx::Val( _property ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LabelBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_property") ) { _property=inValue.Cast<  ::haxe::ui::containers::properties::Property >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LabelBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_property",b4,3f,ce,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LabelBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::properties::Property */ ,(int)offsetof(LabelBehaviour_obj,_property),HX_("_property",b4,3f,ce,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LabelBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String LabelBehaviour_obj_sMemberFields[] = {
	HX_("_property",b4,3f,ce,f3),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class LabelBehaviour_obj::__mClass;

void LabelBehaviour_obj::__register()
{
	LabelBehaviour_obj _hx_dummy;
	LabelBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties._Property.LabelBehaviour",34,bf,0f,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LabelBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LabelBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LabelBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LabelBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _Property
