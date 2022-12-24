#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_PropertyGridBuilder
#include <haxe/ui/backend/hxwidgets/builders/PropertyGridBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_Property
#include <haxe/ui/containers/properties/Property.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyGroup
#include <haxe/ui/containers/properties/PropertyGroup.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_PropertyGrid
#include <hx/widgets/PropertyGrid.h>
#endif
#ifndef INCLUDED_hx_widgets_PropertyGridEvent
#include <hx/widgets/PropertyGridEvent.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_385a3bd09b78a28d_14_new,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder","new",0x393a47d7,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder.new","haxe/ui/backend/hxwidgets/builders/PropertyGridBuilder.hx",14,0x05484898)
HX_LOCAL_STACK_FRAME(_hx_pos_385a3bd09b78a28d_18_addComponent,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder","addComponent",0x89587405,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder.addComponent","haxe/ui/backend/hxwidgets/builders/PropertyGridBuilder.hx",18,0x05484898)
HX_LOCAL_STACK_FRAME(_hx_pos_385a3bd09b78a28d_27_onReady,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder","onReady",0x54953dbb,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder.onReady","haxe/ui/backend/hxwidgets/builders/PropertyGridBuilder.hx",27,0x05484898)
HX_LOCAL_STACK_FRAME(_hx_pos_385a3bd09b78a28d_70_onPropertyChanged,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder","onPropertyChanged",0x49543077,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder.onPropertyChanged","haxe/ui/backend/hxwidgets/builders/PropertyGridBuilder.hx",70,0x05484898)
HX_LOCAL_STACK_FRAME(_hx_pos_385a3bd09b78a28d_89_findComponent,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder","findComponent",0xcfaac37b,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder.findComponent","haxe/ui/backend/hxwidgets/builders/PropertyGridBuilder.hx",89,0x05484898)
HX_LOCAL_STACK_FRAME(_hx_pos_385a3bd09b78a28d_104_convertValue,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder","convertValue",0xdf2fe227,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder.convertValue","haxe/ui/backend/hxwidgets/builders/PropertyGridBuilder.hx",104,0x05484898)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{

void PropertyGridBuilder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_GC_STACKFRAME(&_hx_pos_385a3bd09b78a28d_14_new)
HXLINE(  16)		this->_propertyMap =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  15)		this->_groups = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  14)		super::__construct(component);
            	}

Dynamic PropertyGridBuilder_obj::__CreateEmpty() { return new PropertyGridBuilder_obj; }

void *PropertyGridBuilder_obj::_hx_vtable = 0;

Dynamic PropertyGridBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyGridBuilder_obj > _hx_result = new PropertyGridBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PropertyGridBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x7a74823f;
	}
}

 ::haxe::ui::core::Component PropertyGridBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_385a3bd09b78a28d_18_addComponent)
HXLINE(  19)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::properties::PropertyGroup >())) {
HXLINE(  20)			this->_groups->push(child);
HXLINE(  21)			return child;
            		}
HXLINE(  24)		return null();
            	}


void PropertyGridBuilder_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_385a3bd09b78a28d_27_onReady)
HXLINE(  28)		 ::hx::widgets::PropertyGrid propGrid = ::hx::TCast<  ::hx::widgets::PropertyGrid >::cast(this->_component->get_window());
HXLINE(  29)		{
HXLINE(  29)			int _g = 0;
HXDLIN(  29)			::Array< ::Dynamic> _g1 = this->_groups;
HXDLIN(  29)			while((_g < _g1->length)){
HXLINE(  29)				 ::haxe::ui::containers::properties::PropertyGroup group = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::properties::PropertyGroup >();
HXDLIN(  29)				_g = (_g + 1);
HXLINE(  30)				::String groupId = group->get_text();
HXLINE(  31)				propGrid->appendCategory(groupId,null());
HXLINE(  32)				{
HXLINE(  32)					int _g2 = 0;
HXDLIN(  32)					::Array< ::Dynamic> _g3;
HXDLIN(  32)					if (::hx::IsNull( group->_children )) {
HXLINE(  32)						_g3 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE(  32)						_g3 = group->_children;
            					}
HXDLIN(  32)					while((_g2 < _g3->length)){
HXLINE(  32)						 ::haxe::ui::core::Component i = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  32)						_g2 = (_g2 + 1);
HXLINE(  33)						 ::haxe::ui::containers::properties::Property item = ::hx::TCast<  ::haxe::ui::containers::properties::Property >::cast(i);
HXLINE(  35)						::String itemId = ((groupId + HX_("_",5f,00,00,00)) + item->get_label());
HXLINE(  38)						::String _hx_switch_0 = item->get_type();
            						if (  (_hx_switch_0==HX_("boolean",a8,ea,fe,7d)) ){
HXLINE(  40)							::String prop = item->get_label();
HXDLIN(  40)							 ::hx::widgets::PGProperty prop1 = propGrid->appendBoolProperty(prop,::hx::IsEq( item->get_value(),HX_("true",4e,a7,03,4d) ),itemId);
HXLINE(  41)							this->_propertyMap->set(item,prop1);
HXLINE(  39)							goto _hx_goto_4;
            						}
            						if (  (_hx_switch_0==HX_("int",ef,0c,50,00)) ){
HXLINE(  43)							::String prop = item->get_label();
HXDLIN(  43)							 ::hx::widgets::PGProperty prop1 = propGrid->appendIntProperty(prop,::Std_obj::_hx_int(( (Float)(item->get_value()) )),itemId);
HXLINE(  44)							this->_propertyMap->set(item,prop1);
HXLINE(  42)							goto _hx_goto_4;
            						}
            						if (  (_hx_switch_0==HX_("list",5e,1c,b3,47)) ){
HXLINE(  46)							 ::haxe::ui::data::DataSource ds = item->get_dataSource();
HXLINE(  47)							::Array< ::Dynamic> listItems = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  48)							int indexToSelect = 0;
HXLINE(  49)							{
HXLINE(  49)								int _g = 0;
HXDLIN(  49)								int _g1 = ds->get_size();
HXDLIN(  49)								while((_g < _g1)){
HXLINE(  49)									_g = (_g + 1);
HXDLIN(  49)									int dsi = (_g - 1);
HXLINE(  50)									 ::Dynamic data = ds->get(dsi);
HXLINE(  51)									listItems->push( ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("label",f4,0d,af,6f), ::Dynamic(data->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)))));
HXLINE(  54)									::String data1 = ( (::String)(data->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
HXDLIN(  54)									if (::hx::IsEq( data1,item->get_value() )) {
HXLINE(  55)										indexToSelect = dsi;
            									}
            								}
            							}
HXLINE(  58)							 ::hx::widgets::PGProperty prop = propGrid->appendEnumProperty(item->get_label(),listItems,indexToSelect,itemId);
HXLINE(  59)							this->_propertyMap->set(item,prop);
HXLINE(  45)							goto _hx_goto_4;
            						}
            						/* default */{
HXLINE(  61)							::String prop = item->get_label();
HXDLIN(  61)							 ::hx::widgets::PGProperty prop1 = propGrid->appendStringProperty(prop,( (::String)(item->get_value()) ),itemId);
HXLINE(  62)							this->_propertyMap->set(item,prop1);
            						}
            						_hx_goto_4:;
            					}
            				}
            			}
            		}
HXLINE(  67)		propGrid->bind(::wx::widgets::EventType_obj::PG_CHANGED,this->onPropertyChanged_dyn(),null());
            	}


void PropertyGridBuilder_obj::onPropertyChanged( ::hx::widgets::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_385a3bd09b78a28d_70_onPropertyChanged)
HXLINE(  71)		 ::hx::widgets::PropertyGridEvent propertyGridEvent = event->convertTo(::hx::ClassOf< ::hx::widgets::PropertyGridEvent >()).StaticCast<  ::hx::widgets::PropertyGridEvent >();
HXLINE(  72)		 ::hx::widgets::PGProperty property = propertyGridEvent->get_property();
HXLINE(  73)		::String n = property->get_name();
HXLINE(  74)		 ::haxe::ui::core::Component target = null();
HXLINE(  75)		{
HXLINE(  75)			 ::Dynamic item = this->_propertyMap->keys();
HXDLIN(  75)			while(( (bool)(item->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  75)				 ::haxe::ui::containers::properties::Property item1 = ( ( ::haxe::ui::containers::properties::Property)(item->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  76)				 ::hx::widgets::PGProperty prop = ( ( ::hx::widgets::PGProperty)(this->_propertyMap->get(item1)) );
HXLINE(  77)				if ((prop->get_name() == n)) {
HXLINE(  78)					this->convertValue(item1,property->get_valueAsString());
HXLINE(  79)					target = item1;
HXLINE(  80)					goto _hx_goto_7;
            				}
            			}
            			_hx_goto_7:;
            		}
HXLINE(  84)		 ::haxe::ui::events::UIEvent event1 =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE(  85)		event1->target = target;
HXLINE(  86)		this->_component->dispatch(event1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PropertyGridBuilder_obj,onPropertyChanged,(void))

 ::Dynamic PropertyGridBuilder_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType){
            	HX_STACKFRAME(&_hx_pos_385a3bd09b78a28d_89_findComponent)
HXLINE(  90)		bool _hx_tmp;
HXDLIN(  90)		if ((searchType == HX_("id",db,5b,00,00))) {
HXLINE(  90)			_hx_tmp = ::hx::IsNotNull( criteria );
            		}
            		else {
HXLINE(  90)			_hx_tmp = false;
            		}
HXDLIN(  90)		if (_hx_tmp) {
HXLINE(  91)			 ::Dynamic item = this->_propertyMap->keys();
HXDLIN(  91)			while(( (bool)(item->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  91)				 ::haxe::ui::containers::properties::Property item1 = ( ( ::haxe::ui::containers::properties::Property)(item->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  92)				if ((item1->get_id() == criteria)) {
HXLINE(  93)					 ::hx::widgets::PGProperty prop = ( ( ::hx::widgets::PGProperty)(this->_propertyMap->get(item1)) );
HXLINE(  94)					this->convertValue(item1,prop->get_valueAsString());
HXLINE(  95)					return item1;
            				}
            			}
            		}
HXLINE( 100)		return this->super::findComponent(criteria,type,recursive,searchType);
            	}


void PropertyGridBuilder_obj::convertValue( ::haxe::ui::containers::properties::Property item,::String v){
            	HX_STACKFRAME(&_hx_pos_385a3bd09b78a28d_104_convertValue)
HXDLIN( 104)		::String _hx_switch_0 = item->get_type();
            		if (  (_hx_switch_0==HX_("boolean",a8,ea,fe,7d)) ){
HXLINE( 106)			item->set_value((v.toLowerCase() == HX_("true",4e,a7,03,4d)));
HXDLIN( 106)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("int",ef,0c,50,00)) ){
HXLINE( 108)			item->set_value(::Std_obj::parseInt(v));
HXDLIN( 108)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("list",5e,1c,b3,47)) ){
HXLINE( 110)			item->set_value(v);
HXDLIN( 110)			goto _hx_goto_11;
            		}
            		/* default */{
HXLINE( 112)			item->set_value(v);
            		}
            		_hx_goto_11:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PropertyGridBuilder_obj,convertValue,(void))


::hx::ObjectPtr< PropertyGridBuilder_obj > PropertyGridBuilder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PropertyGridBuilder_obj > __this = new PropertyGridBuilder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PropertyGridBuilder_obj > PropertyGridBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PropertyGridBuilder_obj *__this = (PropertyGridBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyGridBuilder_obj), true, "haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder"));
	*(void **)__this = PropertyGridBuilder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PropertyGridBuilder_obj::PropertyGridBuilder_obj()
{
}

void PropertyGridBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyGridBuilder);
	HX_MARK_MEMBER_NAME(_groups,"_groups");
	HX_MARK_MEMBER_NAME(_propertyMap,"_propertyMap");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PropertyGridBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_groups,"_groups");
	HX_VISIT_MEMBER_NAME(_propertyMap,"_propertyMap");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PropertyGridBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { return ::hx::Val( _groups ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_propertyMap") ) { return ::hx::Val( _propertyMap ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"convertValue") ) { return ::hx::Val( convertValue_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onPropertyChanged") ) { return ::hx::Val( onPropertyChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PropertyGridBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_propertyMap") ) { _propertyMap=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyGridBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_groups",f3,35,9f,8a));
	outFields->push(HX_("_propertyMap",48,4b,98,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PropertyGridBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PropertyGridBuilder_obj,_groups),HX_("_groups",f3,35,9f,8a)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(PropertyGridBuilder_obj,_propertyMap),HX_("_propertyMap",48,4b,98,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PropertyGridBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyGridBuilder_obj_sMemberFields[] = {
	HX_("_groups",f3,35,9f,8a),
	HX_("_propertyMap",48,4b,98,fc),
	HX_("addComponent",5c,12,a8,0e),
	HX_("onReady",c4,3e,f8,7c),
	HX_("onPropertyChanged",c0,36,b4,51),
	HX_("findComponent",44,b1,05,f0),
	HX_("convertValue",7e,80,7f,64),
	::String(null()) };

::hx::Class PropertyGridBuilder_obj::__mClass;

void PropertyGridBuilder_obj::__register()
{
	PropertyGridBuilder_obj _hx_dummy;
	PropertyGridBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder",65,10,be,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyGridBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyGridBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyGridBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyGridBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders
