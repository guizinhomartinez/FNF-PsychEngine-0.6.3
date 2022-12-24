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
#ifndef INCLUDED_haxe_ui_containers_properties__Property_DataSourceBehaviour
#include <haxe/ui/containers/properties/_Property/DataSourceBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__Property_LabelBehaviour
#include <haxe/ui/containers/properties/_Property/LabelBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0a7b9618824305fe_15_new,"haxe.ui.containers.properties.Property","new",0x2c950c78,"haxe.ui.containers.properties.Property.new","haxe/ui/containers/properties/Property.hx",15,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_138_registerComposite,"haxe.ui.containers.properties.Property","registerComposite",0xab891b3c,"haxe.ui.containers.properties.Property.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_441_registerBehaviours,"haxe.ui.containers.properties.Property","registerBehaviours",0xef6dc6c1,"haxe.ui.containers.properties.Property.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_475_get_label,"haxe.ui.containers.properties.Property","get_label",0xf431c863,"haxe.ui.containers.properties.Property.get_label","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_506_set_label,"haxe.ui.containers.properties.Property","set_label",0xd782b46f,"haxe.ui.containers.properties.Property.set_label","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_475_get_type,"haxe.ui.containers.properties.Property","get_type",0x97199b2b,"haxe.ui.containers.properties.Property.get_type","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_506_set_type,"haxe.ui.containers.properties.Property","set_type",0x4576f49f,"haxe.ui.containers.properties.Property.set_type","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_475_get_dataSource,"haxe.ui.containers.properties.Property","get_dataSource",0xc4cb89d6,"haxe.ui.containers.properties.Property.get_dataSource","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_520_set_dataSource,"haxe.ui.containers.properties.Property","set_dataSource",0xe4eb724a,"haxe.ui.containers.properties.Property.set_dataSource","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_475_get_step,"haxe.ui.containers.properties.Property","get_step",0x966c8fbd,"haxe.ui.containers.properties.Property.get_step","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_520_set_step,"haxe.ui.containers.properties.Property","set_step",0x44c9e931,"haxe.ui.containers.properties.Property.set_step","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_475_get_min,"haxe.ui.containers.properties.Property","get_min",0xe3f50241,"haxe.ui.containers.properties.Property.get_min","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_520_set_min,"haxe.ui.containers.properties.Property","set_min",0xd6f6934d,"haxe.ui.containers.properties.Property.set_min","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_475_get_max,"haxe.ui.containers.properties.Property","get_max",0xe3f4fb53,"haxe.ui.containers.properties.Property.get_max","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_520_set_max,"haxe.ui.containers.properties.Property","set_max",0xd6f68c5f,"haxe.ui.containers.properties.Property.set_max","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_475_get_precision,"haxe.ui.containers.properties.Property","get_precision",0xdfa9f32d,"haxe.ui.containers.properties.Property.get_precision","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_520_set_precision,"haxe.ui.containers.properties.Property","set_precision",0x24afd539,"haxe.ui.containers.properties.Property.set_precision","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_966994d855d2f406_565_cloneComponent,"haxe.ui.containers.properties.Property","cloneComponent",0x57597488,"haxe.ui.containers.properties.Property.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_1684933054186aff_423_self,"haxe.ui.containers.properties.Property","self",0xd923e474,"haxe.ui.containers.properties.Property.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{

void Property_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0a7b9618824305fe_15_new)
HXDLIN(  15)		super::__construct();
            	}

Dynamic Property_obj::__CreateEmpty() { return new Property_obj; }

void *Property_obj::_hx_vtable = 0;

Dynamic Property_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Property_obj > _hx_result = new Property_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Property_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2570d72f) {
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
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2570d72f;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x26975d74 || inClassId==(int)0x2ccba775;
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

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_containers_properties_Property__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (::hx::Object::*)())&::haxe::ui::containers::properties::Property_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (::hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::containers::properties::Property_obj::set_dataSource,
};

void *Property_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_containers_properties_Property__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

void Property_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_1684933054186aff_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::properties::PropertyBuilder >();
            	}


void Property_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_1684933054186aff_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("label",f4,0d,af,6f),::hx::ClassOf< ::haxe::ui::containers::properties::_Property::LabelBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("type",ba,f2,08,4d),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("text",ad,cc,f9,4c)));
HXLINE( 539)		this->behaviours->_hx_register(HX_("dataSource",a5,76,d3,1d),::hx::ClassOf< ::haxe::ui::containers::properties::_Property::DataSourceBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::containers::properties::_Property::PropertyValueBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("step",4c,e7,5b,4c),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("min",92,11,53,00),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("max",a4,0a,53,00),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("precision",3e,d5,c7,80),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


::String Property_obj::get_label(){
            	HX_STACKFRAME(&_hx_pos_1684933054186aff_475_get_label)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("label",f4,0d,af,6f)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Property_obj,get_label,return )

::String Property_obj::set_label(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_1684933054186aff_506_set_label)
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
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("label",f4,0d,af,6f),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("label",f4,0d,af,6f),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("label",f4,0d,af,6f)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Property_obj,set_label,return )

::String Property_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_1684933054186aff_475_get_type)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("type",ba,f2,08,4d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Property_obj,get_type,return )

::String Property_obj::set_type(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_1684933054186aff_506_set_type)
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


HX_DEFINE_DYNAMIC_FUNC1(Property_obj,set_type,return )

 ::haxe::ui::data::DataSource Property_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_1684933054186aff_475_get_dataSource)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->behaviours->get(HX_("dataSource",a5,76,d3,1d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Property_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource Property_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_GC_STACKFRAME(&_hx_pos_1684933054186aff_520_set_dataSource)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("dataSource",a5,76,d3,1d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("dataSource",a5,76,d3,1d)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Property_obj,set_dataSource,return )

 ::Dynamic Property_obj::get_step(){
            	HX_STACKFRAME(&_hx_pos_1684933054186aff_475_get_step)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("step",4c,e7,5b,4c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Property_obj,get_step,return )

 ::Dynamic Property_obj::set_step( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_1684933054186aff_520_set_step)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("step",4c,e7,5b,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("step",4c,e7,5b,4c)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Property_obj,set_step,return )

 ::Dynamic Property_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_1684933054186aff_475_get_min)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("min",92,11,53,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Property_obj,get_min,return )

 ::Dynamic Property_obj::set_min( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_1684933054186aff_520_set_min)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("min",92,11,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("min",92,11,53,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Property_obj,set_min,return )

 ::Dynamic Property_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_1684933054186aff_475_get_max)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("max",a4,0a,53,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Property_obj,get_max,return )

 ::Dynamic Property_obj::set_max( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_1684933054186aff_520_set_max)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("max",a4,0a,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("max",a4,0a,53,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Property_obj,set_max,return )

 ::Dynamic Property_obj::get_precision(){
            	HX_STACKFRAME(&_hx_pos_1684933054186aff_475_get_precision)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("precision",3e,d5,c7,80)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Property_obj,get_precision,return )

 ::Dynamic Property_obj::set_precision( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_1684933054186aff_520_set_precision)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("precision",3e,d5,c7,80),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(( (int)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("precision",3e,d5,c7,80)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Property_obj,set_precision,return )

 ::haxe::ui::core::ComponentContainer Property_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_966994d855d2f406_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::properties::Property c = ( ( ::haxe::ui::containers::properties::Property)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_label() )) {
HXLINE( 380)			c->set_label(this->get_label());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_type() )) {
HXLINE( 380)			c->set_type(this->get_type());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_step() )) {
HXLINE( 380)			c->set_step(this->get_step());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_min() )) {
HXLINE( 380)			c->set_min(this->get_min());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_max() )) {
HXLINE( 380)			c->set_max(this->get_max());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_precision() )) {
HXLINE( 380)			c->set_precision(this->get_precision());
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


 ::haxe::ui::core::ComponentContainer Property_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_1684933054186aff_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::properties::Property_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Property_obj > Property_obj::__new() {
	::hx::ObjectPtr< Property_obj > __this = new Property_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Property_obj > Property_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Property_obj *__this = (Property_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Property_obj), true, "haxe.ui.containers.properties.Property"));
	*(void **)__this = Property_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Property_obj::Property_obj()
{
}

::hx::Val Property_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_min() ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_max() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_type() ); }
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_step() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_label() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return ::hx::Val( get_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return ::hx::Val( set_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return ::hx::Val( get_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return ::hx::Val( set_max_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_step") ) { return ::hx::Val( get_step_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_step") ) { return ::hx::Val( set_step_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_label") ) { return ::hx::Val( get_label_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_label") ) { return ::hx::Val( set_label_dyn() ); }
		if (HX_FIELD_EQ(inName,"precision") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_precision() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_precision") ) { return ::hx::Val( get_precision_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_precision") ) { return ::hx::Val( set_precision_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Property_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_min(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_max(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_step(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_label(inValue.Cast< ::String >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_precision(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Property_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("label",f4,0d,af,6f));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	outFields->push(HX_("step",4c,e7,5b,4c));
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("precision",3e,d5,c7,80));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Property_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Property_obj_sStaticStorageInfo = 0;
#endif

static ::String Property_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_label",4b,6a,58,b3),
	HX_("set_label",57,56,a9,96),
	HX_("get_type",43,ae,c3,cc),
	HX_("set_type",b7,07,21,7b),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("get_step",d5,a2,16,cc),
	HX_("set_step",49,fc,73,7a),
	HX_("get_min",29,da,c7,26),
	HX_("set_min",35,6b,c9,19),
	HX_("get_max",3b,d3,c7,26),
	HX_("set_max",47,64,c9,19),
	HX_("get_precision",15,a9,2b,42),
	HX_("set_precision",21,8b,31,87),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Property_obj::__mClass;

void Property_obj::__register()
{
	Property_obj _hx_dummy;
	Property_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties.Property",86,b0,8f,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Property_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Property_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Property_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Property_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
