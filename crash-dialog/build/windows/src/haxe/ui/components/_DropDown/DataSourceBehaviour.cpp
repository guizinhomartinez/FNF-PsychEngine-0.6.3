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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownBuilder
#include <haxe/ui/components/DropDownBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_DataSourceBehaviour
#include <haxe/ui/components/_DropDown/DataSourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_66d2f04623f2b71b_100_new,"haxe.ui.components._DropDown.DataSourceBehaviour","new",0x38df59a6,"haxe.ui.components._DropDown.DataSourceBehaviour.new","haxe/ui/components/DropDown.hx",100,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_66d2f04623f2b71b_101_get,"haxe.ui.components._DropDown.DataSourceBehaviour","get",0x38da09dc,"haxe.ui.components._DropDown.DataSourceBehaviour.get","haxe/ui/components/DropDown.hx",101,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_66d2f04623f2b71b_109_set,"haxe.ui.components._DropDown.DataSourceBehaviour","set",0x38e324e8,"haxe.ui.components._DropDown.DataSourceBehaviour.set","haxe/ui/components/DropDown.hx",109,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{
namespace _DropDown{

void DataSourceBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_66d2f04623f2b71b_100_new)
HXDLIN( 100)		super::__construct(component);
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
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x057a65a0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x057a65a0;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType DataSourceBehaviour_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_66d2f04623f2b71b_101_get)
HXLINE( 102)		bool _hx_tmp;
HXDLIN( 102)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 102)			_hx_tmp = (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value) == true);
            		}
            		else {
HXLINE( 102)			_hx_tmp = true;
            		}
HXDLIN( 102)		if (_hx_tmp) {
HXLINE( 103)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource( ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null()));
            		}
HXLINE( 106)		return this->_value;
            	}


void DataSourceBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_66d2f04623f2b71b_109_set)
HXLINE( 110)		this->super::set(value);
HXLINE( 111)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->_value)) {
HXLINE( 112)			return;
            		}
HXLINE( 115)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_component->_compositeBuilder)->get_handler();
HXLINE( 116)		::haxe::ui::components::IDropDownHandler_obj::reset(handler);
HXLINE( 117)		bool _hx_tmp;
HXDLIN( 117)		if (::hx::IsNull( this->_component->get_text() )) {
HXLINE( 117)			_hx_tmp = this->_component->get_isReady();
            		}
            		else {
HXLINE( 117)			_hx_tmp = false;
            		}
HXDLIN( 117)		if (_hx_tmp) {
HXLINE( 118)			::hx::TCast<  ::haxe::ui::components::DropDown >::cast(this->_component)->set_selectedIndex(0);
            		}
            	}



::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DataSourceBehaviour_obj > __this = new DataSourceBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DataSourceBehaviour_obj *__this = (DataSourceBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataSourceBehaviour_obj), true, "haxe.ui.components._DropDown.DataSourceBehaviour"));
	*(void **)__this = DataSourceBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DataSourceBehaviour_obj::DataSourceBehaviour_obj()
{
}

::hx::Val DataSourceBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DataSourceBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DataSourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSourceBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class DataSourceBehaviour_obj::__mClass;

void DataSourceBehaviour_obj::__register()
{
	DataSourceBehaviour_obj _hx_dummy;
	DataSourceBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._DropDown.DataSourceBehaviour",b4,4e,c4,82);
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
} // end namespace components
} // end namespace _DropDown
