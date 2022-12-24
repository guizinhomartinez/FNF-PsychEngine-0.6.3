#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_containers_properties__Property_DataSourceBehaviour
#include <haxe/ui/containers/properties/_Property/DataSourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_04f7a8382616eafe_53_new,"haxe.ui.containers.properties._Property.DataSourceBehaviour","new",0xd74868df,"haxe.ui.containers.properties._Property.DataSourceBehaviour.new","haxe/ui/containers/properties/Property.hx",53,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_04f7a8382616eafe_58_get,"haxe.ui.containers.properties._Property.DataSourceBehaviour","get",0xd7431915,"haxe.ui.containers.properties._Property.DataSourceBehaviour.get","haxe/ui/containers/properties/Property.hx",58,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_04f7a8382616eafe_65_set,"haxe.ui.containers.properties._Property.DataSourceBehaviour","set",0xd74c3421,"haxe.ui.containers.properties._Property.DataSourceBehaviour.set","haxe/ui/containers/properties/Property.hx",65,0xa93e75b8)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _Property{

void DataSourceBehaviour_obj::__construct( ::haxe::ui::containers::properties::Property property){
            	HX_STACKFRAME(&_hx_pos_04f7a8382616eafe_53_new)
HXLINE(  54)		super::__construct(property);
HXLINE(  55)		this->_property = property;
            	}

Dynamic DataSourceBehaviour_obj::__CreateEmpty() { return new DataSourceBehaviour_obj; }

void *DataSourceBehaviour_obj::_hx_vtable = 0;

Dynamic DataSourceBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataSourceBehaviour_obj > _hx_result = new DataSourceBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataSourceBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6597ec6c) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x6597ec6c;
		}
	} else {
		return inClassId==(int)0x704aeaab;
	}
}

 ::haxe::ui::util::VariantType DataSourceBehaviour_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_04f7a8382616eafe_58_get)
HXLINE(  59)		if (::hx::IsNull( this->_value )) {
HXLINE(  60)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource( ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null()));
            		}
HXLINE(  62)		return this->_value;
            	}


void DataSourceBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_04f7a8382616eafe_65_set)
HXLINE(  66)		this->super::set(value);
HXLINE(  67)		 ::haxe::ui::containers::properties::PropertyBuilder builder = ::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(this->_property->_compositeBuilder);
HXLINE(  68)		bool _hx_tmp;
HXDLIN(  68)		if (::hx::IsNotNull( builder->editor )) {
HXLINE(  68)			_hx_tmp = ::Std_obj::isOfType(builder->editor,::hx::ClassOf< ::haxe::ui::core::IDataComponent >());
            		}
            		else {
HXLINE(  68)			_hx_tmp = false;
            		}
HXDLIN(  68)		if (_hx_tmp) {
HXLINE(  69)			::Dynamic _hx_tmp =  ::hx::interface_check(builder->editor,0xfafb3fc3);
HXDLIN(  69)			::haxe::ui::core::IDataComponent_obj::set_dataSource(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(value));
            		}
            	}



::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__new( ::haxe::ui::containers::properties::Property property) {
	::hx::ObjectPtr< DataSourceBehaviour_obj > __this = new DataSourceBehaviour_obj();
	__this->__construct(property);
	return __this;
}

::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::properties::Property property) {
	DataSourceBehaviour_obj *__this = (DataSourceBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataSourceBehaviour_obj), true, "haxe.ui.containers.properties._Property.DataSourceBehaviour"));
	*(void **)__this = DataSourceBehaviour_obj::_hx_vtable;
	__this->__construct(property);
	return __this;
}

DataSourceBehaviour_obj::DataSourceBehaviour_obj()
{
}

void DataSourceBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataSourceBehaviour);
	HX_MARK_MEMBER_NAME(_property,"_property");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataSourceBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_property,"_property");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataSourceBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_property") ) { return ::hx::Val( _property ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataSourceBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_property") ) { _property=inValue.Cast<  ::haxe::ui::containers::properties::Property >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSourceBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_property",b4,3f,ce,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataSourceBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::properties::Property */ ,(int)offsetof(DataSourceBehaviour_obj,_property),HX_("_property",b4,3f,ce,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataSourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSourceBehaviour_obj_sMemberFields[] = {
	HX_("_property",b4,3f,ce,f3),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class DataSourceBehaviour_obj::__mClass;

void DataSourceBehaviour_obj::__register()
{
	DataSourceBehaviour_obj _hx_dummy;
	DataSourceBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties._Property.DataSourceBehaviour",6d,0d,d5,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataSourceBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataSourceBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataSourceBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataSourceBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _Property
