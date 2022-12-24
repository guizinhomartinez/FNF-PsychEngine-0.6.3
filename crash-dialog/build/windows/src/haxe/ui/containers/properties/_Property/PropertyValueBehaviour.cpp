#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_haxe_ui_containers_properties__Property_PropertyValueBehaviour
#include <haxe/ui/containers/properties/_Property/PropertyValueBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_da727ecdf671aa9d_79_new,"haxe.ui.containers.properties._Property.PropertyValueBehaviour","new",0xd349573e,"haxe.ui.containers.properties._Property.PropertyValueBehaviour.new","haxe/ui/containers/properties/Property.hx",79,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_da727ecdf671aa9d_84_set,"haxe.ui.containers.properties._Property.PropertyValueBehaviour","set",0xd34d2280,"haxe.ui.containers.properties._Property.PropertyValueBehaviour.set","haxe/ui/containers/properties/Property.hx",84,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_da727ecdf671aa9d_94_get,"haxe.ui.containers.properties._Property.PropertyValueBehaviour","get",0xd3440774,"haxe.ui.containers.properties._Property.PropertyValueBehaviour.get","haxe/ui/containers/properties/Property.hx",94,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_da727ecdf671aa9d_102_getDynamic,"haxe.ui.containers.properties._Property.PropertyValueBehaviour","getDynamic",0x2c9d566b,"haxe.ui.containers.properties._Property.PropertyValueBehaviour.getDynamic","haxe/ui/containers/properties/Property.hx",102,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_da727ecdf671aa9d_110_validateData,"haxe.ui.containers.properties._Property.PropertyValueBehaviour","validateData",0xf8210342,"haxe.ui.containers.properties._Property.PropertyValueBehaviour.validateData","haxe/ui/containers/properties/Property.hx",110,0xa93e75b8)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _Property{

void PropertyValueBehaviour_obj::__construct( ::haxe::ui::containers::properties::Property property){
            	HX_STACKFRAME(&_hx_pos_da727ecdf671aa9d_79_new)
HXLINE(  80)		super::__construct(property);
HXLINE(  81)		this->_property = property;
            	}

Dynamic PropertyValueBehaviour_obj::__CreateEmpty() { return new PropertyValueBehaviour_obj; }

void *PropertyValueBehaviour_obj::_hx_vtable = 0;

Dynamic PropertyValueBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyValueBehaviour_obj > _hx_result = new PropertyValueBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PropertyValueBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x1acf3396) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1acf3396;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void PropertyValueBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_da727ecdf671aa9d_84_set)
HXLINE(  85)		 ::haxe::ui::containers::properties::PropertyBuilder builder = ::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(this->_property->_compositeBuilder);
HXLINE(  86)		this->_value = value;
HXLINE(  87)		if (::hx::IsNotNull( builder->get_actualEditor() )) {
HXLINE(  88)			 ::haxe::ui::core::Component _hx_tmp = builder->get_actualEditor();
HXDLIN(  88)			_hx_tmp->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(this->_value));
            		}
HXLINE(  91)		this->invalidateData();
            	}


 ::haxe::ui::util::VariantType PropertyValueBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_da727ecdf671aa9d_94_get)
HXLINE(  95)		 ::haxe::ui::containers::properties::PropertyBuilder builder = ::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(this->_property->_compositeBuilder);
HXLINE(  96)		if (::hx::IsNotNull( builder->get_actualEditor() )) {
HXLINE(  97)			return builder->get_actualEditor()->get_value();
            		}
HXLINE(  99)		return this->_value;
            	}


 ::Dynamic PropertyValueBehaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_da727ecdf671aa9d_102_getDynamic)
HXLINE( 103)		 ::haxe::ui::containers::properties::PropertyBuilder builder = ::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(this->_property->_compositeBuilder);
HXLINE( 104)		if (::hx::IsNotNull( builder->get_actualEditor() )) {
HXLINE( 105)			return builder->get_actualEditor()->get_value();
            		}
HXLINE( 107)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(this->_value);
            	}


void PropertyValueBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_da727ecdf671aa9d_110_validateData)
HXLINE( 111)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 111)		::String _hx_tmp1;
HXDLIN( 111)		if (::hx::IsNull( this->_value )) {
HXLINE( 111)			_hx_tmp1 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE( 111)			_hx_tmp1 = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value);
            		}
HXDLIN( 111)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("haxe/ui/containers/properties/Property.hx",b8,75,3e,a9),111,HX_("haxe.ui.containers.properties._Property.PropertyValueBehaviour",4c,a0,c9,3c),HX_("validateData",e0,55,63,96)));
HXLINE( 112)		 ::haxe::ui::containers::properties::PropertyBuilder builder = ::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(this->_property->_compositeBuilder);
HXLINE( 113)		if (::hx::IsNotNull( builder->get_actualEditor() )) {
HXLINE( 114)			 ::haxe::ui::core::Component _hx_tmp = builder->get_actualEditor();
HXDLIN( 114)			_hx_tmp->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(this->_value));
            		}
            	}



::hx::ObjectPtr< PropertyValueBehaviour_obj > PropertyValueBehaviour_obj::__new( ::haxe::ui::containers::properties::Property property) {
	::hx::ObjectPtr< PropertyValueBehaviour_obj > __this = new PropertyValueBehaviour_obj();
	__this->__construct(property);
	return __this;
}

::hx::ObjectPtr< PropertyValueBehaviour_obj > PropertyValueBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::properties::Property property) {
	PropertyValueBehaviour_obj *__this = (PropertyValueBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyValueBehaviour_obj), true, "haxe.ui.containers.properties._Property.PropertyValueBehaviour"));
	*(void **)__this = PropertyValueBehaviour_obj::_hx_vtable;
	__this->__construct(property);
	return __this;
}

PropertyValueBehaviour_obj::PropertyValueBehaviour_obj()
{
}

void PropertyValueBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyValueBehaviour);
	HX_MARK_MEMBER_NAME(_property,"_property");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PropertyValueBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_property,"_property");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PropertyValueBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_property") ) { return ::hx::Val( _property ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PropertyValueBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_property") ) { _property=inValue.Cast<  ::haxe::ui::containers::properties::Property >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyValueBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_property",b4,3f,ce,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PropertyValueBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::properties::Property */ ,(int)offsetof(PropertyValueBehaviour_obj,_property),HX_("_property",b4,3f,ce,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PropertyValueBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyValueBehaviour_obj_sMemberFields[] = {
	HX_("_property",b4,3f,ce,f3),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("getDynamic",89,25,77,85),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class PropertyValueBehaviour_obj::__mClass;

void PropertyValueBehaviour_obj::__register()
{
	PropertyValueBehaviour_obj _hx_dummy;
	PropertyValueBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties._Property.PropertyValueBehaviour",4c,a0,c9,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyValueBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyValueBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyValueBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyValueBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _Property
