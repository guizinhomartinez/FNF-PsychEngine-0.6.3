#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownBuilder
#include <haxe/ui/components/DropDownBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownEvents
#include <haxe/ui/components/DropDownEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_DataSourceBehaviour
#include <haxe/ui/components/_DropDown/DataSourceBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_HideDropDown
#include <haxe/ui/components/_DropDown/HideDropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_SearchFieldBehaviour
#include <haxe/ui/components/_DropDown/SearchFieldBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_SelectedIndexBehaviour
#include <haxe/ui/components/_DropDown/SelectedIndexBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_SelectedItemBehaviour
#include <haxe/ui/components/_DropDown/SelectedItemBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_ShowDropDown
#include <haxe/ui/components/_DropDown/ShowDropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_452ff4130146a79f_31_new,"haxe.ui.components.DropDown","new",0x0439cb49,"haxe.ui.components.DropDown.new","haxe/ui/components/DropDown.hx",31,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_568_hideDropDown,"haxe.ui.components.DropDown","hideDropDown",0x3d60030a,"haxe.ui.components.DropDown.hideDropDown","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_568_showDropDown,"haxe.ui.components.DropDown","showDropDown",0xa7e7d645,"haxe.ui.components.DropDown.showDropDown","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_54_get_itemRenderer,"haxe.ui.components.DropDown","get_itemRenderer",0xbfcaa576,"haxe.ui.components.DropDown.get_itemRenderer","haxe/ui/components/DropDown.hx",54,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_56_set_itemRenderer,"haxe.ui.components.DropDown","set_itemRenderer",0x160c92ea,"haxe.ui.components.DropDown.set_itemRenderer","haxe/ui/components/DropDown.hx",56,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_61_onThemeChanged,"haxe.ui.components.DropDown","onThemeChanged",0xdcbb8961,"haxe.ui.components.DropDown.onThemeChanged","haxe/ui/components/DropDown.hx",61,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_67_postCloneComponent,"haxe.ui.components.DropDown","postCloneComponent",0x197c9d57,"haxe.ui.components.DropDown.postCloneComponent","haxe/ui/components/DropDown.hx",67,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_138_registerComposite,"haxe.ui.components.DropDown","registerComposite",0x7c2bc5cd,"haxe.ui.components.DropDown.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_441_registerBehaviours,"haxe.ui.components.DropDown","registerBehaviours",0xad205b10,"haxe.ui.components.DropDown.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_handlerStyleNames,"haxe.ui.components.DropDown","get_handlerStyleNames",0x4894e941,"haxe.ui.components.DropDown.get_handlerStyleNames","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_506_set_handlerStyleNames,"haxe.ui.components.DropDown","set_handlerStyleNames",0x9c9db74d,"haxe.ui.components.DropDown.set_handlerStyleNames","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_dataSource,"haxe.ui.components.DropDown","get_dataSource",0x484c0aa5,"haxe.ui.components.DropDown.get_dataSource","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_520_set_dataSource,"haxe.ui.components.DropDown","set_dataSource",0x686bf319,"haxe.ui.components.DropDown.set_dataSource","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_type,"haxe.ui.components.DropDown","get_type",0xec1a86ba,"haxe.ui.components.DropDown.get_type","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_506_set_type,"haxe.ui.components.DropDown","set_type",0x9a77e02e,"haxe.ui.components.DropDown.set_type","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_virtual,"haxe.ui.components.DropDown","get_virtual",0x4c348a0b,"haxe.ui.components.DropDown.get_virtual","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_520_set_virtual,"haxe.ui.components.DropDown","set_virtual",0x56a19117,"haxe.ui.components.DropDown.set_virtual","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_dropdownWidth,"haxe.ui.components.DropDown","get_dropdownWidth",0xec094035,"haxe.ui.components.DropDown.get_dropdownWidth","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_520_set_dropdownWidth,"haxe.ui.components.DropDown","set_dropdownWidth",0x0f771841,"haxe.ui.components.DropDown.set_dropdownWidth","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_dropdownHeight,"haxe.ui.components.DropDown","get_dropdownHeight",0x525e66d8,"haxe.ui.components.DropDown.get_dropdownHeight","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_520_set_dropdownHeight,"haxe.ui.components.DropDown","set_dropdownHeight",0x2f0d994c,"haxe.ui.components.DropDown.set_dropdownHeight","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_dropdownSize,"haxe.ui.components.DropDown","get_dropdownSize",0x65bbb172,"haxe.ui.components.DropDown.get_dropdownSize","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_520_set_dropdownSize,"haxe.ui.components.DropDown","set_dropdownSize",0xbbfd9ee6,"haxe.ui.components.DropDown.set_dropdownSize","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_selectedIndex,"haxe.ui.components.DropDown","get_selectedIndex",0x387262b7,"haxe.ui.components.DropDown.get_selectedIndex","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_520_set_selectedIndex,"haxe.ui.components.DropDown","set_selectedIndex",0x5be03ac3,"haxe.ui.components.DropDown.set_selectedIndex","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_465_get_selectedItem,"haxe.ui.components.DropDown","get_selectedItem",0xff1f790e,"haxe.ui.components.DropDown.get_selectedItem","haxe/ui/macros/Macros.hx",465,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_485_set_selectedItem,"haxe.ui.components.DropDown","set_selectedItem",0x55616682,"haxe.ui.components.DropDown.set_selectedItem","haxe/ui/macros/Macros.hx",485,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_searchable,"haxe.ui.components.DropDown","get_searchable",0xad407502,"haxe.ui.components.DropDown.get_searchable","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_520_set_searchable,"haxe.ui.components.DropDown","set_searchable",0xcd605d76,"haxe.ui.components.DropDown.set_searchable","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_475_get_searchPrompt,"haxe.ui.components.DropDown","get_searchPrompt",0x4263772c,"haxe.ui.components.DropDown.get_searchPrompt","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_506_set_searchPrompt,"haxe.ui.components.DropDown","set_searchPrompt",0x98a564a0,"haxe.ui.components.DropDown.set_searchPrompt","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_468_get_searchField,"haxe.ui.components.DropDown","get_searchField",0x63ef7832,"haxe.ui.components.DropDown.get_searchField","haxe/ui/macros/Macros.hx",468,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_520_set_searchField,"haxe.ui.components.DropDown","set_searchField",0x5fbaf53e,"haxe.ui.components.DropDown.set_searchField","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_602_get_value,"haxe.ui.components.DropDown","get_value",0xc2086b71,"haxe.ui.components.DropDown.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_605_set_value,"haxe.ui.components.DropDown","set_value",0xa559577d,"haxe.ui.components.DropDown.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1ada4a6f9c033a55_565_cloneComponent,"haxe.ui.components.DropDown","cloneComponent",0xdad9f557,"haxe.ui.components.DropDown.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_423_self,"haxe.ui.components.DropDown","self",0xb1a61c83,"haxe.ui.components.DropDown.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void DropDown_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_31_new)
HXLINE(  51)		this->_itemRenderer = null();
HXLINE(  31)		super::__construct();
            	}

Dynamic DropDown_obj::__CreateEmpty() { return new DropDown_obj; }

void *DropDown_obj::_hx_vtable = 0;

Dynamic DropDown_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropDown_obj > _hx_result = new DropDown_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DropDown_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x1bd114e1) {
				return inClassId==(int)0x142c98ce || inClassId==(int)0x1bd114e1;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x395782b4) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x395782b4;
				} else {
					return inClassId==(int)0x4ba87886;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_components_DropDown__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (::hx::Object::*)())&::haxe::ui::components::DropDown_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (::hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::components::DropDown_obj::set_dataSource,
};

void *DropDown_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_components_DropDown__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

 ::haxe::ui::util::VariantType DropDown_obj::hideDropDown(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_568_hideDropDown)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("hideDropDown",13,23,0e,a9),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,hideDropDown,return )

 ::haxe::ui::util::VariantType DropDown_obj::showDropDown(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_568_showDropDown)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("showDropDown",4e,f6,95,13),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,showDropDown,return )

 ::haxe::ui::core::ItemRenderer DropDown_obj::get_itemRenderer(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_54_get_itemRenderer)
HXDLIN(  54)		return this->_itemRenderer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_itemRenderer,return )

 ::haxe::ui::core::ItemRenderer DropDown_obj::set_itemRenderer( ::haxe::ui::core::ItemRenderer value){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_56_set_itemRenderer)
HXLINE(  57)		this->_itemRenderer = value;
HXLINE(  58)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_itemRenderer,return )

void DropDown_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_61_onThemeChanged)
HXLINE(  62)		this->super::onThemeChanged();
HXLINE(  63)		 ::haxe::ui::components::DropDownBuilder builder = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_compositeBuilder);
HXLINE(  64)		builder->onThemeChanged();
            	}


void DropDown_obj::postCloneComponent( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_67_postCloneComponent)
HXLINE(  68)		this->super::postCloneComponent(c);
HXLINE(  69)		if (::hx::IsNotNull( this->_itemRenderer )) {
HXLINE(  70)			c->addComponent(Dynamic( this->_itemRenderer->cloneComponent()).StaticCast<  ::haxe::ui::core::ItemRenderer >());
            		}
            	}


void DropDown_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::DropDownEvents >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::DropDownBuilder >();
            	}


void DropDown_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("handlerStyleNames",41,fd,12,8a),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("dataSource",a5,76,d3,1d),::hx::ClassOf< ::haxe::ui::components::_DropDown::DataSourceBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("type",ba,f2,08,4d),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("list",5e,1c,b3,47)));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("virtual",0b,9e,11,17),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXLINE( 539)		this->behaviours->_hx_register(HX_("dropdownWidth",35,54,ed,67),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("dropdownHeight",d8,d2,0b,3e),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("dropdownSize",72,1d,f6,3c),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 543)		_hx_tmp2->_hx_register(HX_("selectedIndex",b7,76,56,b4),::hx::ClassOf< ::haxe::ui::components::_DropDown::SelectedIndexBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXLINE( 539)		this->behaviours->_hx_register(HX_("selectedItem",0e,e5,59,d6),::hx::ClassOf< ::haxe::ui::components::_DropDown::SelectedItemBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp3 = this->behaviours;
HXDLIN( 543)		_hx_tmp3->_hx_register(HX_("searchable",02,e1,c7,82),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp4 = this->behaviours;
HXDLIN( 543)		_hx_tmp4->_hx_register(HX_("searchPrompt",2c,e3,9d,19),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("{{search}}",68,c2,71,85)));
HXLINE( 539)		this->behaviours->_hx_register(HX_("searchField",32,8c,e6,64),::hx::ClassOf< ::haxe::ui::components::_DropDown::SearchFieldBehaviour >(),null());
HXLINE( 578)		this->behaviours->_hx_register(HX_("hideDropDown",13,23,0e,a9),::hx::ClassOf< ::haxe::ui::components::_DropDown::HideDropDown >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("showDropDown",4e,f6,95,13),::hx::ClassOf< ::haxe::ui::components::_DropDown::ShowDropDown >(),null());
            	}


::String DropDown_obj::get_handlerStyleNames(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_handlerStyleNames)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("handlerStyleNames",41,fd,12,8a)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_handlerStyleNames,return )

::String DropDown_obj::set_handlerStyleNames(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_506_set_handlerStyleNames)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("handlerStyleNames",41,fd,12,8a),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("handlerStyleNames",41,fd,12,8a),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("handlerStyleNames",41,fd,12,8a)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_handlerStyleNames,return )

 ::haxe::ui::data::DataSource DropDown_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_dataSource)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->behaviours->get(HX_("dataSource",a5,76,d3,1d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource DropDown_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_520_set_dataSource)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("dataSource",a5,76,d3,1d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("dataSource",a5,76,d3,1d)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_dataSource,return )

::String DropDown_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_type)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("type",ba,f2,08,4d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_type,return )

::String DropDown_obj::set_type(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_506_set_type)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("type",ba,f2,08,4d),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("type",ba,f2,08,4d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("type",ba,f2,08,4d)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_type,return )

bool DropDown_obj::get_virtual(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_virtual)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("virtual",0b,9e,11,17)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_virtual,return )

bool DropDown_obj::set_virtual(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_520_set_virtual)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("virtual",0b,9e,11,17),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("virtual",0b,9e,11,17)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_virtual,return )

 ::Dynamic DropDown_obj::get_dropdownWidth(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_dropdownWidth)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("dropdownWidth",35,54,ed,67)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_dropdownWidth,return )

 ::Dynamic DropDown_obj::set_dropdownWidth( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_520_set_dropdownWidth)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("dropdownWidth",35,54,ed,67),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("dropdownWidth",35,54,ed,67)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_dropdownWidth,return )

 ::Dynamic DropDown_obj::get_dropdownHeight(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_dropdownHeight)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("dropdownHeight",d8,d2,0b,3e)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_dropdownHeight,return )

 ::Dynamic DropDown_obj::set_dropdownHeight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_520_set_dropdownHeight)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("dropdownHeight",d8,d2,0b,3e),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("dropdownHeight",d8,d2,0b,3e)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_dropdownHeight,return )

 ::Dynamic DropDown_obj::get_dropdownSize(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_dropdownSize)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("dropdownSize",72,1d,f6,3c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_dropdownSize,return )

 ::Dynamic DropDown_obj::set_dropdownSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_520_set_dropdownSize)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("dropdownSize",72,1d,f6,3c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(( (int)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("dropdownSize",72,1d,f6,3c)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_dropdownSize,return )

int DropDown_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_selectedIndex)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("selectedIndex",b7,76,56,b4)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_selectedIndex,return )

int DropDown_obj::set_selectedIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_520_set_selectedIndex)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedIndex",b7,76,56,b4),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedIndex",b7,76,56,b4)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_selectedIndex,return )

 ::Dynamic DropDown_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_465_get_selectedItem)
HXDLIN( 465)		return this->behaviours->getDynamic(HX_("selectedItem",0e,e5,59,d6));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_selectedItem,return )

 ::Dynamic DropDown_obj::set_selectedItem( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_485_set_selectedItem)
HXLINE( 486)		this->behaviours->setDynamic(HX_("selectedItem",0e,e5,59,d6),value);
HXLINE( 487)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedItem",0e,e5,59,d6)));
HXLINE( 488)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_selectedItem,return )

bool DropDown_obj::get_searchable(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_searchable)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("searchable",02,e1,c7,82)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_searchable,return )

bool DropDown_obj::set_searchable(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_520_set_searchable)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("searchable",02,e1,c7,82),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("searchable",02,e1,c7,82)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_searchable,return )

::String DropDown_obj::get_searchPrompt(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_475_get_searchPrompt)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("searchPrompt",2c,e3,9d,19)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_searchPrompt,return )

::String DropDown_obj::set_searchPrompt(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_506_set_searchPrompt)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("searchPrompt",2c,e3,9d,19),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("searchPrompt",2c,e3,9d,19),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("searchPrompt",2c,e3,9d,19)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_searchPrompt,return )

 ::haxe::ui::core::Component DropDown_obj::get_searchField(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_468_get_searchField)
HXLINE( 469)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 470)			return null();
            		}
HXLINE( 472)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("searchField",32,8c,e6,64)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_searchField,return )

 ::haxe::ui::core::Component DropDown_obj::set_searchField( ::haxe::ui::core::Component value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_520_set_searchField)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("searchField",32,8c,e6,64),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("searchField",32,8c,e6,64)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_searchField,return )

 ::Dynamic DropDown_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_602_get_value)
HXDLIN( 602)		return this->get_selectedItem();
            	}


 ::Dynamic DropDown_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_605_set_value)
HXLINE( 606)		this->set_selectedItem(value);
HXLINE( 607)		return value;
            	}


 ::haxe::ui::core::ComponentContainer DropDown_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_1ada4a6f9c033a55_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::DropDown c = ( ( ::haxe::ui::components::DropDown)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_itemRenderer() )) {
HXLINE( 380)			c->set_itemRenderer(this->get_itemRenderer());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_handlerStyleNames() )) {
HXLINE( 380)			c->set_handlerStyleNames(this->get_handlerStyleNames());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_dataSource() )) {
HXLINE( 380)			c->set_dataSource(this->get_dataSource());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_type() )) {
HXLINE( 380)			c->set_type(this->get_type());
            		}
HXLINE( 382)		c->set_virtual(this->get_virtual());
HXLINE( 380)		if (::hx::IsNotNull( this->get_dropdownWidth() )) {
HXLINE( 380)			c->set_dropdownWidth(this->get_dropdownWidth());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_dropdownHeight() )) {
HXLINE( 380)			c->set_dropdownHeight(this->get_dropdownHeight());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_dropdownSize() )) {
HXLINE( 380)			c->set_dropdownSize(this->get_dropdownSize());
            		}
HXLINE( 382)		c->set_selectedIndex(this->get_selectedIndex());
HXLINE( 380)		if (::hx::IsNotNull( this->get_selectedItem() )) {
HXLINE( 380)			c->set_selectedItem(this->get_selectedItem());
            		}
HXLINE( 382)		c->set_searchable(this->get_searchable());
HXLINE( 380)		if (::hx::IsNotNull( this->get_searchPrompt() )) {
HXLINE( 380)			c->set_searchPrompt(this->get_searchPrompt());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_searchField() )) {
HXLINE( 380)			c->set_searchField(this->get_searchField());
            		}
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				::Array< ::Dynamic> _g1;
HXDLIN( 388)				if (::hx::IsNull( this->_children )) {
HXLINE( 388)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 388)					_g1 = this->_children;
            				}
HXDLIN( 388)				while((_g < _g1->length)){
HXLINE( 388)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 393)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 395)		return c;
            	}


 ::haxe::ui::core::ComponentContainer DropDown_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::DropDown_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< DropDown_obj > DropDown_obj::__new() {
	::hx::ObjectPtr< DropDown_obj > __this = new DropDown_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DropDown_obj > DropDown_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DropDown_obj *__this = (DropDown_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropDown_obj), true, "haxe.ui.components.DropDown"));
	*(void **)__this = DropDown_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DropDown_obj::DropDown_obj()
{
}

void DropDown_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropDown);
	HX_MARK_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DropDown_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DropDown_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_type() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"virtual") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_virtual() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		if (HX_FIELD_EQ(inName,"searchable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_searchable() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_virtual") ) { return ::hx::Val( get_virtual_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_virtual") ) { return ::hx::Val( set_virtual_dyn() ); }
		if (HX_FIELD_EQ(inName,"searchField") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_searchField() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideDropDown") ) { return ::hx::Val( hideDropDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"showDropDown") ) { return ::hx::Val( showDropDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_itemRenderer() ); }
		if (HX_FIELD_EQ(inName,"dropdownSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dropdownSize() ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedItem() ); }
		if (HX_FIELD_EQ(inName,"searchPrompt") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_searchPrompt() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { return ::hx::Val( _itemRenderer ); }
		if (HX_FIELD_EQ(inName,"dropdownWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dropdownWidth() ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"dropdownHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dropdownHeight() ); }
		if (HX_FIELD_EQ(inName,"get_searchable") ) { return ::hx::Val( get_searchable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_searchable") ) { return ::hx::Val( set_searchable_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_searchField") ) { return ::hx::Val( get_searchField_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_searchField") ) { return ::hx::Val( set_searchField_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_itemRenderer") ) { return ::hx::Val( get_itemRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemRenderer") ) { return ::hx::Val( set_itemRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dropdownSize") ) { return ::hx::Val( get_dropdownSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dropdownSize") ) { return ::hx::Val( set_dropdownSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return ::hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return ::hx::Val( set_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_searchPrompt") ) { return ::hx::Val( get_searchPrompt_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_searchPrompt") ) { return ::hx::Val( set_searchPrompt_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"handlerStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_handlerStyleNames() ); }
		if (HX_FIELD_EQ(inName,"get_dropdownWidth") ) { return ::hx::Val( get_dropdownWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dropdownWidth") ) { return ::hx::Val( set_dropdownWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"postCloneComponent") ) { return ::hx::Val( postCloneComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dropdownHeight") ) { return ::hx::Val( get_dropdownHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dropdownHeight") ) { return ::hx::Val( set_dropdownHeight_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_handlerStyleNames") ) { return ::hx::Val( get_handlerStyleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_handlerStyleNames") ) { return ::hx::Val( set_handlerStyleNames_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DropDown_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast< ::String >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"virtual") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_virtual(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		if (HX_FIELD_EQ(inName,"searchable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_searchable(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"searchField") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_searchField(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_itemRenderer(inValue.Cast<  ::haxe::ui::core::ItemRenderer >()) ); }
		if (HX_FIELD_EQ(inName,"dropdownSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dropdownSize(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedItem(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"searchPrompt") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_searchPrompt(inValue.Cast< ::String >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { _itemRenderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropdownWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dropdownWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dropdownHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dropdownHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handlerStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_handlerStyleNames(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropDown_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_itemRenderer",55,a4,73,79));
	outFields->push(HX_("itemRenderer",76,11,05,97));
	outFields->push(HX_("handlerStyleNames",41,fd,12,8a));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("virtual",0b,9e,11,17));
	outFields->push(HX_("dropdownWidth",35,54,ed,67));
	outFields->push(HX_("dropdownHeight",d8,d2,0b,3e));
	outFields->push(HX_("dropdownSize",72,1d,f6,3c));
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("selectedItem",0e,e5,59,d6));
	outFields->push(HX_("searchable",02,e1,c7,82));
	outFields->push(HX_("searchPrompt",2c,e3,9d,19));
	outFields->push(HX_("searchField",32,8c,e6,64));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropDown_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(DropDown_obj,_itemRenderer),HX_("_itemRenderer",55,a4,73,79)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DropDown_obj_sStaticStorageInfo = 0;
#endif

static ::String DropDown_obj_sMemberFields[] = {
	HX_("hideDropDown",13,23,0e,a9),
	HX_("showDropDown",4e,f6,95,13),
	HX_("_itemRenderer",55,a4,73,79),
	HX_("get_itemRenderer",ff,fd,a3,9b),
	HX_("set_itemRenderer",73,eb,e5,f1),
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("postCloneComponent",20,ea,c3,a0),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_handlerStyleNames",18,00,c1,08),
	HX_("set_handlerStyleNames",24,ce,c9,5c),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("get_type",43,ae,c3,cc),
	HX_("set_type",b7,07,21,7b),
	HX_("get_virtual",22,fe,0b,9d),
	HX_("set_virtual",2e,05,79,a7),
	HX_("get_dropdownWidth",8c,5f,5d,6e),
	HX_("set_dropdownWidth",98,37,cb,91),
	HX_("get_dropdownHeight",a1,b3,a5,d9),
	HX_("set_dropdownHeight",15,e6,54,b6),
	HX_("get_dropdownSize",fb,09,95,41),
	HX_("set_dropdownSize",6f,f7,d6,97),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("set_selectedItem",0b,bf,3a,31),
	HX_("get_searchable",4b,69,bd,f8),
	HX_("set_searchable",bf,51,dd,18),
	HX_("get_searchPrompt",b5,cf,3c,1e),
	HX_("set_searchPrompt",29,bd,7e,74),
	HX_("get_searchField",c9,43,c8,25),
	HX_("set_searchField",d5,c0,93,21),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class DropDown_obj::__mClass;

void DropDown_obj::__register()
{
	DropDown_obj _hx_dummy;
	DropDown_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.DropDown",d7,72,36,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropDown_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropDown_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDown_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDown_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
