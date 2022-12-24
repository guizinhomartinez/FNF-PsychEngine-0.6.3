#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_NumberStepper
#include <haxe/ui/components/NumberStepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_Property
#include <haxe/ui/containers/properties/Property.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyBuilder
#include <haxe/ui/containers/properties/PropertyBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyGrid
#include <haxe/ui/containers/properties/PropertyGrid.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyGroup
#include <haxe/ui/containers/properties/PropertyGroup.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGroup_Builder
#include <haxe/ui/containers/properties/_PropertyGroup/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGroup_Events
#include <haxe/ui/containers/properties/_PropertyGroup/Events.h>
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
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c4f7adb52e42c818_73_new,"haxe.ui.containers.properties._PropertyGroup.Builder","new",0xed7a3f9b,"haxe.ui.containers.properties._PropertyGroup.Builder.new","haxe/ui/containers/properties/PropertyGroup.hx",73,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7adb52e42c818_85_onReady,"haxe.ui.containers.properties._PropertyGroup.Builder","onReady",0x6826677f,"haxe.ui.containers.properties._PropertyGroup.Builder.onReady","haxe/ui/containers/properties/PropertyGroup.hx",85,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7adb52e42c818_92_create,"haxe.ui.containers.properties._PropertyGroup.Builder","create",0x5057eea1,"haxe.ui.containers.properties._PropertyGroup.Builder.create","haxe/ui/containers/properties/PropertyGroup.hx",92,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7adb52e42c818_119_addComponent,"haxe.ui.containers.properties._PropertyGroup.Builder","addComponent",0xe7e563c1,"haxe.ui.containers.properties._PropertyGroup.Builder.addComponent","haxe/ui/containers/properties/PropertyGroup.hx",119,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7adb52e42c818_169_onPropertyShown,"haxe.ui.containers.properties._PropertyGroup.Builder","onPropertyShown",0xe5df9f58,"haxe.ui.containers.properties._PropertyGroup.Builder.onPropertyShown","haxe/ui/containers/properties/PropertyGroup.hx",169,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7adb52e42c818_177_onPropertyHidden,"haxe.ui.containers.properties._PropertyGroup.Builder","onPropertyHidden",0x63f19f03,"haxe.ui.containers.properties._PropertyGroup.Builder.onPropertyHidden","haxe/ui/containers/properties/PropertyGroup.hx",177,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7adb52e42c818_185_onPropertyEnabled,"haxe.ui.containers.properties._PropertyGroup.Builder","onPropertyEnabled",0xd7010ac8,"haxe.ui.containers.properties._PropertyGroup.Builder.onPropertyEnabled","haxe/ui/containers/properties/PropertyGroup.hx",185,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7adb52e42c818_192_onPropertyDisabled,"haxe.ui.containers.properties._PropertyGroup.Builder","onPropertyDisabled",0xd939b955,"haxe.ui.containers.properties._PropertyGroup.Builder.onPropertyDisabled","haxe/ui/containers/properties/PropertyGroup.hx",192,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7adb52e42c818_199_onPropertyEditorChange,"haxe.ui.containers.properties._PropertyGroup.Builder","onPropertyEditorChange",0x357d1f56,"haxe.ui.containers.properties._PropertyGroup.Builder.onPropertyEditorChange","haxe/ui/containers/properties/PropertyGroup.hx",199,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c4f7adb52e42c818_211_buildEditor,"haxe.ui.containers.properties._PropertyGroup.Builder","buildEditor",0x599ec9b6,"haxe.ui.containers.properties._PropertyGroup.Builder.buildEditor","haxe/ui/containers/properties/PropertyGroup.hx",211,0xad7e5fc5)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _PropertyGroup{

void Builder_obj::__construct( ::haxe::ui::containers::properties::PropertyGroup propertyGroup){
            	HX_GC_STACKFRAME(&_hx_pos_c4f7adb52e42c818_73_new)
HXLINE(  78)		this->_editorMap =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  81)		super::__construct(propertyGroup);
HXLINE(  82)		this->_propertyGroup = propertyGroup;
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x1790b661;
	}
}

void Builder_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_c4f7adb52e42c818_85_onReady)
HXLINE(  86)		 ::haxe::ui::containers::properties::PropertyGrid propGrid = this->_component->findAncestor(null(),::hx::ClassOf< ::haxe::ui::containers::properties::PropertyGrid >(),null()).StaticCast<  ::haxe::ui::containers::properties::PropertyGrid >();
HXLINE(  87)		{
HXLINE(  87)			int _g = 0;
HXDLIN(  87)			::Array< ::Dynamic> _g1 = this->_propertyGroupContents->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::DropDown >(),null());
HXDLIN(  87)			while((_g < _g1->length)){
HXLINE(  87)				 ::haxe::ui::components::DropDown c = _g1->__get(_g).StaticCast<  ::haxe::ui::components::DropDown >();
HXDLIN(  87)				_g = (_g + 1);
HXLINE(  88)				c->set_handlerStyleNames(propGrid->get_popupStyleNames());
            			}
            		}
            	}


void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_c4f7adb52e42c818_92_create)
HXLINE(  93)		this->_propertyGroupHeader =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE(  94)		this->_propertyGroupHeader->set_scriptAccess(false);
HXLINE(  95)		this->_propertyGroupHeader->addClass(HX_("property-group-header",53,22,a5,a8),null(),null());
HXLINE(  96)		this->_propertyGroupHeader->addClass(HX_(":expanded",73,db,80,c4),null(),null());
HXLINE(  97)		this->_propertyGroupHeader->set_id(HX_("property-group-header",53,22,a5,a8));
HXLINE(  99)		 ::haxe::ui::components::Image image =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 100)		image->addClass(HX_("property-group-header-icon",f3,92,d9,61),null(),null());
HXLINE( 101)		image->set_scriptAccess(false);
HXLINE( 102)		this->_propertyGroupHeader->addComponent(image);
HXLINE( 104)		 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 105)		label->addClass(HX_("property-group-header-label",3a,6d,5e,f5),null(),null());
HXLINE( 106)		label->set_id(HX_("property-group-header-label",3a,6d,5e,f5));
HXLINE( 107)		label->set_scriptAccess(false);
HXLINE( 108)		this->_propertyGroupHeader->addComponent(label);
HXLINE( 110)		this->_propertyGroup->addComponent(this->_propertyGroupHeader);
HXLINE( 112)		this->_propertyGroupContents =  ::haxe::ui::containers::Grid_obj::__alloc( HX_CTX );
HXLINE( 113)		this->_propertyGroupContents->set_scriptAccess(false);
HXLINE( 114)		this->_propertyGroupContents->addClass(HX_("property-group-contents",60,5b,d5,e0),null(),null());
HXLINE( 115)		this->_propertyGroupContents->set_id(HX_("property-group-contents",60,5b,d5,e0));
HXLINE( 116)		this->_propertyGroup->addComponent(this->_propertyGroupContents);
            	}


 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_c4f7adb52e42c818_119_addComponent)
HXLINE( 120)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::properties::Property >())) {
HXLINE( 121)			 ::haxe::ui::containers::properties::Property prop = ::hx::TCast<  ::haxe::ui::containers::properties::Property >::cast(child);
HXLINE( 123)			 ::haxe::ui::containers::Box labelContainer =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE( 124)			labelContainer->set_scriptAccess(false);
HXLINE( 125)			labelContainer->addClass(HX_("property-group-item-label-container",34,4b,50,30),null(),null());
HXLINE( 126)			this->_propertyGroupContents->addComponent(labelContainer);
HXLINE( 128)			 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 129)			label->set_scriptAccess(false);
HXLINE( 130)			label->set_text(prop->get_label());
HXLINE( 131)			label->set_disabled(prop->get_disabled());
HXLINE( 132)			label->addClass(HX_("property-group-item-label",c0,93,9f,a8),null(),null());
HXLINE( 133)			labelContainer->addComponent(label);
HXLINE( 134)			labelContainer->set_hidden(prop->get_hidden());
HXLINE( 135)			labelContainer->set_disabled(prop->get_disabled());
HXLINE( 136)			::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(prop->_compositeBuilder)->label = label;
HXLINE( 138)			 ::haxe::ui::containers::Box editorContainer =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE( 139)			editorContainer->set_scriptAccess(false);
HXLINE( 140)			editorContainer->addClass(HX_("property-group-item-editor-container",15,79,c0,13),null(),null());
HXLINE( 141)			this->_propertyGroupContents->addComponent(editorContainer);
HXLINE( 143)			 ::haxe::ui::core::Component editor = this->buildEditor(prop);
HXLINE( 144)			editor->set_disabled(prop->get_disabled());
HXLINE( 145)			editor->registerEvent(HX_("shown",d1,88,27,7c),this->onPropertyShown_dyn(),null());
HXLINE( 146)			editor->registerEvent(HX_("hidden",6a,ff,95,4c),this->onPropertyHidden_dyn(),null());
HXLINE( 147)			editor->registerEvent(HX_("enabled",81,04,31,7e),this->onPropertyEnabled_dyn(),null());
HXLINE( 148)			editor->registerEvent(HX_("disabled",7c,41,04,7c),this->onPropertyDisabled_dyn(),null());
HXLINE( 149)			editor->set_scriptAccess(false);
HXLINE( 150)			editor->set_id(child->get_id());
HXLINE( 151)			editor->addClass(HX_("property-group-item-editor",61,ce,61,d5),null(),null());
HXLINE( 152)			editorContainer->addComponent(editor);
HXLINE( 153)			editorContainer->set_hidden(prop->get_hidden());
HXLINE( 154)			editor->registerEvent(HX_("change",70,91,72,b7),this->onPropertyEditorChange_dyn(),null());
HXLINE( 155)			::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(prop->_compositeBuilder)->editor = editor;
HXLINE( 157)			this->_propertyGroup->registerInternalEvents(::hx::ClassOf< ::haxe::ui::containers::properties::_PropertyGroup::Events >(),true);
HXLINE( 158)			this->_editorMap->set(editor,prop);
HXLINE( 160)			return editor;
            		}
            		else {
HXLINE( 161)			bool _hx_tmp;
HXDLIN( 161)			if (::hx::IsInstanceNotEq( child,this->_propertyGroupHeader )) {
HXLINE( 161)				_hx_tmp = ::hx::IsInstanceNotEq( child,this->_propertyGroupContents );
            			}
            			else {
HXLINE( 161)				_hx_tmp = false;
            			}
HXDLIN( 161)			if (_hx_tmp) {
HXLINE( 162)				this->_propertyGroupHeader->addComponent(child);
HXLINE( 163)				return child;
            			}
            		}
HXLINE( 166)		return null();
            	}


void Builder_obj::onPropertyShown( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_c4f7adb52e42c818_169_onPropertyShown)
HXLINE( 170)		 ::haxe::ui::containers::Box container = event->target->findAncestor(HX_("property-group-item-editor-container",15,79,c0,13),::hx::ClassOf< ::haxe::ui::containers::Box >(),HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE( 171)		int index = this->_propertyGroupContents->getComponentIndex(container);
HXLINE( 172)		 ::haxe::ui::core::Component label = this->_propertyGroupContents->getComponentAt((index - 1));
HXLINE( 173)		label->show();
HXLINE( 174)		container->show();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onPropertyShown,(void))

void Builder_obj::onPropertyHidden( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_c4f7adb52e42c818_177_onPropertyHidden)
HXLINE( 178)		 ::haxe::ui::containers::Box container = event->target->findAncestor(HX_("property-group-item-editor-container",15,79,c0,13),::hx::ClassOf< ::haxe::ui::containers::Box >(),HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE( 179)		int index = this->_propertyGroupContents->getComponentIndex(container);
HXLINE( 180)		 ::haxe::ui::core::Component label = this->_propertyGroupContents->getComponentAt((index - 1));
HXLINE( 181)		label->hide();
HXLINE( 182)		container->hide();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onPropertyHidden,(void))

void Builder_obj::onPropertyEnabled( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_c4f7adb52e42c818_185_onPropertyEnabled)
HXLINE( 186)		 ::haxe::ui::containers::Box container = event->target->findAncestor(HX_("property-group-item-editor-container",15,79,c0,13),::hx::ClassOf< ::haxe::ui::containers::Box >(),HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE( 187)		int index = this->_propertyGroupContents->getComponentIndex(container);
HXLINE( 188)		 ::haxe::ui::core::Component label = this->_propertyGroupContents->getComponentAt((index - 1));
HXLINE( 189)		label->set_disabled(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onPropertyEnabled,(void))

void Builder_obj::onPropertyDisabled( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_c4f7adb52e42c818_192_onPropertyDisabled)
HXLINE( 193)		 ::haxe::ui::containers::Box container = event->target->findAncestor(HX_("property-group-item-editor-container",15,79,c0,13),::hx::ClassOf< ::haxe::ui::containers::Box >(),HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE( 194)		int index = this->_propertyGroupContents->getComponentIndex(container);
HXLINE( 195)		 ::haxe::ui::core::Component label = this->_propertyGroupContents->getComponentAt((index - 1));
HXLINE( 196)		label->set_disabled(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onPropertyDisabled,(void))

void Builder_obj::onPropertyEditorChange( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_c4f7adb52e42c818_199_onPropertyEditorChange)
HXLINE( 200)		 ::haxe::ui::events::UIEvent newEvent =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 201)		newEvent->target = event->target;
HXLINE( 202)		newEvent->data = event->data;
HXLINE( 203)		 ::haxe::ui::containers::properties::Property prop = ( ( ::haxe::ui::containers::properties::Property)(this->_editorMap->get(event->target)) );
HXLINE( 204)		if (::hx::IsNotNull( prop )) {
HXLINE( 205)			prop->dispatch(newEvent);
            		}
HXLINE( 207)		this->_component->dispatch(newEvent);
HXLINE( 208)		this->_component->findAncestor(null(),::hx::ClassOf< ::haxe::ui::containers::properties::PropertyGrid >(),null()).StaticCast<  ::haxe::ui::containers::properties::PropertyGrid >()->dispatch(newEvent);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onPropertyEditorChange,(void))

 ::haxe::ui::core::Component Builder_obj::buildEditor( ::haxe::ui::containers::properties::Property property){
            	HX_GC_STACKFRAME(&_hx_pos_c4f7adb52e42c818_211_buildEditor)
HXLINE( 212)		if (::hx::IsNotNull( ::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(property->_compositeBuilder)->editor )) {
HXLINE( 213)			 ::haxe::ui::core::Component editor = ::hx::TCast<  ::haxe::ui::containers::properties::PropertyBuilder >::cast(property->_compositeBuilder)->editor;
HXLINE( 214)			editor->set_value(property->get_value());
HXLINE( 215)			return editor;
            		}
HXLINE( 218)		 ::haxe::ui::core::Component c = null();
HXLINE( 219)		if (::hx::IsNull( c )) {
HXLINE( 220)			::String type = property->get_type();
HXLINE( 221)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("boolean",a8,ea,fe,7d)) ){
HXLINE( 227)				c =  ::haxe::ui::components::CheckBox_obj::__alloc( HX_CTX );
HXLINE( 228)				c->set_value(property->get_value());
HXLINE( 226)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("date",2e,56,63,42)) ){
HXLINE( 258)				c =  ::haxe::ui::components::DropDown_obj::__alloc( HX_CTX );
HXLINE( 259)				::hx::TCast<  ::haxe::ui::components::DropDown >::cast(c)->set_type(HX_("date",2e,56,63,42));
HXLINE( 257)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("number",c9,86,7a,a1)) ){
HXLINE( 231)				 ::haxe::ui::components::NumberStepper stepper =  ::haxe::ui::components::NumberStepper_obj::__alloc( HX_CTX );
HXLINE( 232)				c = stepper;
HXLINE( 233)				c->set_value(property->get_value());
HXLINE( 234)				if (::hx::IsNotNull( property->get_min() )) {
HXLINE( 235)					stepper->set_min(property->get_min());
            				}
HXLINE( 237)				if (::hx::IsNotNull( property->get_max() )) {
HXLINE( 238)					stepper->set_max(property->get_max());
            				}
HXLINE( 240)				if (::hx::IsNotNull( property->get_step() )) {
HXLINE( 241)					stepper->set_step(( (Float)(property->get_step()) ));
            				}
HXLINE( 243)				if (::hx::IsNotNull( property->get_precision() )) {
HXLINE( 244)					stepper->set_precision(property->get_precision());
            				}
HXLINE( 230)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("list",5e,1c,b3,47)) ){
HXLINE( 248)				c =  ::haxe::ui::components::DropDown_obj::__alloc( HX_CTX );
HXLINE( 249)				::hx::TCast<  ::haxe::ui::components::DropDown >::cast(c)->set_dataSource(property->get_dataSource());
HXLINE( 250)				if ((::Type_obj::_hx_typeof(property->get_value())->_hx_getIndex() == 1)) {
HXLINE( 252)					::hx::TCast<  ::haxe::ui::components::DropDown >::cast(c)->set_selectedIndex(( (int)(property->get_value()) ));
            				}
            				else {
HXLINE( 254)					c->set_value(property->get_value());
            				}
HXLINE( 247)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("text",ad,cc,f9,4c)) ){
HXLINE( 223)				c =  ::haxe::ui::components::TextField_obj::__alloc( HX_CTX );
HXLINE( 224)				c->set_value(property->get_value());
HXLINE( 222)				goto _hx_goto_10;
            			}
            			/* default */{
HXLINE( 262)				c =  ::haxe::ui::components::TextField_obj::__alloc( HX_CTX );
HXLINE( 263)				c->set_value(property->get_value());
            			}
            			_hx_goto_10:;
            		}
HXLINE( 267)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,buildEditor,return )


::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::properties::PropertyGroup propertyGroup) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(propertyGroup);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::properties::PropertyGroup propertyGroup) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers.properties._PropertyGroup.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(propertyGroup);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_propertyGroup,"_propertyGroup");
	HX_MARK_MEMBER_NAME(_propertyGroupHeader,"_propertyGroupHeader");
	HX_MARK_MEMBER_NAME(_propertyGroupContents,"_propertyGroupContents");
	HX_MARK_MEMBER_NAME(_editorMap,"_editorMap");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_propertyGroup,"_propertyGroup");
	HX_VISIT_MEMBER_NAME(_propertyGroupHeader,"_propertyGroupHeader");
	HX_VISIT_MEMBER_NAME(_propertyGroupContents,"_propertyGroupContents");
	HX_VISIT_MEMBER_NAME(_editorMap,"_editorMap");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_editorMap") ) { return ::hx::Val( _editorMap ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildEditor") ) { return ::hx::Val( buildEditor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_propertyGroup") ) { return ::hx::Val( _propertyGroup ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPropertyShown") ) { return ::hx::Val( onPropertyShown_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onPropertyHidden") ) { return ::hx::Val( onPropertyHidden_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onPropertyEnabled") ) { return ::hx::Val( onPropertyEnabled_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onPropertyDisabled") ) { return ::hx::Val( onPropertyDisabled_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_propertyGroupHeader") ) { return ::hx::Val( _propertyGroupHeader ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_propertyGroupContents") ) { return ::hx::Val( _propertyGroupContents ); }
		if (HX_FIELD_EQ(inName,"onPropertyEditorChange") ) { return ::hx::Val( onPropertyEditorChange_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_editorMap") ) { _editorMap=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_propertyGroup") ) { _propertyGroup=inValue.Cast<  ::haxe::ui::containers::properties::PropertyGroup >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_propertyGroupHeader") ) { _propertyGroupHeader=inValue.Cast<  ::haxe::ui::containers::HBox >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_propertyGroupContents") ) { _propertyGroupContents=inValue.Cast<  ::haxe::ui::containers::Grid >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_propertyGroup",eb,76,8c,22));
	outFields->push(HX_("_propertyGroupHeader",d8,76,11,d6));
	outFields->push(HX_("_propertyGroupContents",25,9b,63,81));
	outFields->push(HX_("_editorMap",b0,86,58,91));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::properties::PropertyGroup */ ,(int)offsetof(Builder_obj,_propertyGroup),HX_("_propertyGroup",eb,76,8c,22)},
	{::hx::fsObject /*  ::haxe::ui::containers::HBox */ ,(int)offsetof(Builder_obj,_propertyGroupHeader),HX_("_propertyGroupHeader",d8,76,11,d6)},
	{::hx::fsObject /*  ::haxe::ui::containers::Grid */ ,(int)offsetof(Builder_obj,_propertyGroupContents),HX_("_propertyGroupContents",25,9b,63,81)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Builder_obj,_editorMap),HX_("_editorMap",b0,86,58,91)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_propertyGroup",eb,76,8c,22),
	HX_("_propertyGroupHeader",d8,76,11,d6),
	HX_("_propertyGroupContents",25,9b,63,81),
	HX_("_editorMap",b0,86,58,91),
	HX_("onReady",c4,3e,f8,7c),
	HX_("create",fc,66,0f,7c),
	HX_("addComponent",5c,12,a8,0e),
	HX_("onPropertyShown",9d,c3,f1,4d),
	HX_("onPropertyHidden",1e,37,bf,0b),
	HX_("onPropertyEnabled",4d,8a,18,03),
	HX_("onPropertyDisabled",30,ce,b1,41),
	HX_("onPropertyEditorChange",b1,3d,50,56),
	HX_("buildEditor",7b,27,4e,8c),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties._PropertyGroup.Builder",29,d6,ad,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _PropertyGroup
