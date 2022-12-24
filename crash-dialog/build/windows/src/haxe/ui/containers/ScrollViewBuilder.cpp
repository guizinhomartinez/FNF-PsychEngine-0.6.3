#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_23283b2891872f10_966_new,"haxe.ui.containers.ScrollViewBuilder","new",0xf0805b31,"haxe.ui.containers.ScrollViewBuilder.new","haxe/ui/containers/ScrollView.hx",966,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_972_create,"haxe.ui.containers.ScrollViewBuilder","create",0xb0fab4cb,"haxe.ui.containers.ScrollViewBuilder.create","haxe/ui/containers/ScrollView.hx",972,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_980_destroy,"haxe.ui.containers.ScrollViewBuilder","destroy",0x3d7ef44b,"haxe.ui.containers.ScrollViewBuilder.destroy","haxe/ui/containers/ScrollView.hx",980,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_984_get_numComponents,"haxe.ui.containers.ScrollViewBuilder","get_numComponents",0xe5ddece4,"haxe.ui.containers.ScrollViewBuilder.get_numComponents","haxe/ui/containers/ScrollView.hx",984,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_987_addComponent,"haxe.ui.containers.ScrollViewBuilder","addComponent",0xda66256b,"haxe.ui.containers.ScrollViewBuilder.addComponent","haxe/ui/containers/ScrollView.hx",987,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_994_addComponentAt,"haxe.ui.containers.ScrollViewBuilder","addComponentAt",0xdc4acf3e,"haxe.ui.containers.ScrollViewBuilder.addComponentAt","haxe/ui/containers/ScrollView.hx",994,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1001_removeComponent,"haxe.ui.containers.ScrollViewBuilder","removeComponent",0x886c8c2a,"haxe.ui.containers.ScrollViewBuilder.removeComponent","haxe/ui/containers/ScrollView.hx",1001,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1008_removeAllComponents,"haxe.ui.containers.ScrollViewBuilder","removeAllComponents",0x9d061b84,"haxe.ui.containers.ScrollViewBuilder.removeAllComponents","haxe/ui/containers/ScrollView.hx",1008,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1014_removeComponentAt,"haxe.ui.containers.ScrollViewBuilder","removeComponentAt",0xe5c7a3bd,"haxe.ui.containers.ScrollViewBuilder.removeComponentAt","haxe/ui/containers/ScrollView.hx",1014,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1018_getComponentIndex,"haxe.ui.containers.ScrollViewBuilder","getComponentIndex",0x2a4672dc,"haxe.ui.containers.ScrollViewBuilder.getComponentIndex","haxe/ui/containers/ScrollView.hx",1018,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1021_setComponentIndex,"haxe.ui.containers.ScrollViewBuilder","setComponentIndex",0x4db44ae8,"haxe.ui.containers.ScrollViewBuilder.setComponentIndex","haxe/ui/containers/ScrollView.hx",1021,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1029_getComponentAt,"haxe.ui.containers.ScrollViewBuilder","getComponentAt",0xce121ae9,"haxe.ui.containers.ScrollViewBuilder.getComponentAt","haxe/ui/containers/ScrollView.hx",1029,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1033_createContentContainer,"haxe.ui.containers.ScrollViewBuilder","createContentContainer",0xdb7eefb3,"haxe.ui.containers.ScrollViewBuilder.createContentContainer","haxe/ui/containers/ScrollView.hx",1033,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1044_horizontalConstraintModifier,"haxe.ui.containers.ScrollViewBuilder","horizontalConstraintModifier",0xdb3147e7,"haxe.ui.containers.ScrollViewBuilder.horizontalConstraintModifier","haxe/ui/containers/ScrollView.hx",1044,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1048_verticalConstraintModifier,"haxe.ui.containers.ScrollViewBuilder","verticalConstraintModifier",0xd28ea239,"haxe.ui.containers.ScrollViewBuilder.verticalConstraintModifier","haxe/ui/containers/ScrollView.hx",1048,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1052_checkScrolls,"haxe.ui.containers.ScrollViewBuilder","checkScrolls",0xea1cfeed,"haxe.ui.containers.ScrollViewBuilder.checkScrolls","haxe/ui/containers/ScrollView.hx",1052,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1101_createHScroll,"haxe.ui.containers.ScrollViewBuilder","createHScroll",0xc386fd0a,"haxe.ui.containers.ScrollViewBuilder.createHScroll","haxe/ui/containers/ScrollView.hx",1101,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1131_createVScroll,"haxe.ui.containers.ScrollViewBuilder","createVScroll",0x09b37b98,"haxe.ui.containers.ScrollViewBuilder.createVScroll","haxe/ui/containers/ScrollView.hx",1131,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1161_destroyHScroll,"haxe.ui.containers.ScrollViewBuilder","destroyHScroll",0x92d1ad8a,"haxe.ui.containers.ScrollViewBuilder.destroyHScroll","haxe/ui/containers/ScrollView.hx",1161,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1169_destroyVScroll,"haxe.ui.containers.ScrollViewBuilder","destroyVScroll",0xd8fe2c18,"haxe.ui.containers.ScrollViewBuilder.destroyVScroll","haxe/ui/containers/ScrollView.hx",1169,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1215_updateScrollRect,"haxe.ui.containers.ScrollViewBuilder","updateScrollRect",0x1618f1c9,"haxe.ui.containers.ScrollViewBuilder.updateScrollRect","haxe/ui/containers/ScrollView.hx",1215,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1176_updateScrollRect,"haxe.ui.containers.ScrollViewBuilder","updateScrollRect",0x1618f1c9,"haxe.ui.containers.ScrollViewBuilder.updateScrollRect","haxe/ui/containers/ScrollView.hx",1176,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1229_get_virtualHorizontal,"haxe.ui.containers.ScrollViewBuilder","get_virtualHorizontal",0xe8f950b7,"haxe.ui.containers.ScrollViewBuilder.get_virtualHorizontal","haxe/ui/containers/ScrollView.hx",1229,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1234_get_virtualVertical,"haxe.ui.containers.ScrollViewBuilder","get_virtualVertical",0x4e806589,"haxe.ui.containers.ScrollViewBuilder.get_virtualVertical","haxe/ui/containers/ScrollView.hx",1234,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1237_onVirtualChanged,"haxe.ui.containers.ScrollViewBuilder","onVirtualChanged",0x5de33637,"haxe.ui.containers.ScrollViewBuilder.onVirtualChanged","haxe/ui/containers/ScrollView.hx",1237,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1241_applyStyle,"haxe.ui.containers.ScrollViewBuilder","applyStyle",0xc0770232,"haxe.ui.containers.ScrollViewBuilder.applyStyle","haxe/ui/containers/ScrollView.hx",1241,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{

void ScrollViewBuilder_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_966_new)
HXLINE( 967)		super::__construct(scrollview);
HXLINE( 968)		this->_scrollview = scrollview;
HXLINE( 969)		this->_scrollview->cascadeActive = true;
            	}

Dynamic ScrollViewBuilder_obj::__CreateEmpty() { return new ScrollViewBuilder_obj; }

void *ScrollViewBuilder_obj::_hx_vtable = 0;

Dynamic ScrollViewBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollViewBuilder_obj > _hx_result = new ScrollViewBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollViewBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x17e93bfd;
	}
}

void ScrollViewBuilder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_972_create)
HXLINE( 973)		::String contentLayoutName = this->_scrollview->get_contentLayoutName();
HXLINE( 974)		if (::hx::IsNull( contentLayoutName )) {
HXLINE( 975)			contentLayoutName = HX_("vertical",76,bc,15,6a);
            		}
HXLINE( 977)		this->createContentContainer(contentLayoutName);
            	}


void ScrollViewBuilder_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_980_destroy)
            	}


 ::Dynamic ScrollViewBuilder_obj::get_numComponents(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_984_get_numComponents)
HXDLIN( 984)		return this->_contents->get_numComponents();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_987_addComponent)
HXLINE( 988)		bool _hx_tmp;
HXDLIN( 988)		bool _hx_tmp1;
HXDLIN( 988)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >()) == false)) {
HXLINE( 988)			_hx_tmp1 = (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::VerticalScroll >()) == false);
            		}
            		else {
HXLINE( 988)			_hx_tmp1 = false;
            		}
HXDLIN( 988)		if (_hx_tmp1) {
HXLINE( 988)			_hx_tmp = ((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false);
            		}
            		else {
HXLINE( 988)			_hx_tmp = false;
            		}
HXDLIN( 988)		if (_hx_tmp) {
HXLINE( 989)			return this->_contents->addComponent(child);
            		}
HXLINE( 991)		return null();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_994_addComponentAt)
HXLINE( 995)		bool _hx_tmp;
HXDLIN( 995)		bool _hx_tmp1;
HXDLIN( 995)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >()) == false)) {
HXLINE( 995)			_hx_tmp1 = (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::VerticalScroll >()) == false);
            		}
            		else {
HXLINE( 995)			_hx_tmp1 = false;
            		}
HXDLIN( 995)		if (_hx_tmp1) {
HXLINE( 995)			_hx_tmp = ((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false);
            		}
            		else {
HXLINE( 995)			_hx_tmp = false;
            		}
HXDLIN( 995)		if (_hx_tmp) {
HXLINE( 996)			return this->_contents->addComponentAt(child,index);
            		}
HXLINE( 998)		return null();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1001_removeComponent)
HXLINE(1002)		bool _hx_tmp;
HXDLIN(1002)		bool _hx_tmp1;
HXDLIN(1002)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >()) == false)) {
HXLINE(1002)			_hx_tmp1 = (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::VerticalScroll >()) == false);
            		}
            		else {
HXLINE(1002)			_hx_tmp1 = false;
            		}
HXDLIN(1002)		if (_hx_tmp1) {
HXLINE(1002)			_hx_tmp = ((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false);
            		}
            		else {
HXLINE(1002)			_hx_tmp = false;
            		}
HXDLIN(1002)		if (_hx_tmp) {
HXLINE(1003)			return this->_contents->removeComponent(child,dispose,invalidate);
            		}
HXLINE(1005)		return null();
            	}


bool ScrollViewBuilder_obj::removeAllComponents(::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1008_removeAllComponents)
HXLINE(1009)		this->_contents->removeAllComponents(dispose);
HXLINE(1010)		return true;
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1014_removeComponentAt)
HXDLIN(1014)		return this->_contents->removeComponentAt(index,dispose,invalidate);
            	}


int ScrollViewBuilder_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1018_getComponentIndex)
HXDLIN(1018)		return this->_contents->getComponentIndex(child);
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1021_setComponentIndex)
HXLINE(1022)		bool _hx_tmp;
HXDLIN(1022)		bool _hx_tmp1;
HXDLIN(1022)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >()) == false)) {
HXLINE(1022)			_hx_tmp1 = (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::VerticalScroll >()) == false);
            		}
            		else {
HXLINE(1022)			_hx_tmp1 = false;
            		}
HXDLIN(1022)		if (_hx_tmp1) {
HXLINE(1022)			_hx_tmp = ((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false);
            		}
            		else {
HXLINE(1022)			_hx_tmp = false;
            		}
HXDLIN(1022)		if (_hx_tmp) {
HXLINE(1023)			return this->_contents->setComponentIndex(child,index);
            		}
HXLINE(1025)		return null();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1029_getComponentAt)
HXDLIN(1029)		return this->_contents->getComponentAt(index);
            	}


void ScrollViewBuilder_obj::createContentContainer(::String layoutName){
            	HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1033_createContentContainer)
HXDLIN(1033)		if (::hx::IsNull( this->_contents )) {
HXLINE(1034)			this->_contents =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE(1035)			this->_contents->addClass(HX_("scrollview-contents",15,b7,70,a7),null(),null());
HXLINE(1036)			this->_contents->set_id(HX_("scrollview-contents",15,b7,70,a7));
HXLINE(1037)			 ::haxe::ui::containers::Box _hx_tmp = this->_contents;
HXDLIN(1037)			_hx_tmp->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(layoutName));
HXLINE(1038)			this->_component->addComponent(this->_contents);
HXLINE(1039)			this->_contentsLayoutName = layoutName;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewBuilder_obj,createContentContainer,(void))

Float ScrollViewBuilder_obj::horizontalConstraintModifier(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1044_horizontalConstraintModifier)
HXDLIN(1044)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,horizontalConstraintModifier,return )

Float ScrollViewBuilder_obj::verticalConstraintModifier(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1048_verticalConstraintModifier)
HXDLIN(1048)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,verticalConstraintModifier,return )

void ScrollViewBuilder_obj::checkScrolls(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1052_checkScrolls)
HXLINE(1053)		if ((this->_component->get_isNativeScroller() == true)) {
HXLINE(1054)			return;
            		}
HXLINE(1057)		 ::haxe::ui::geom::Size usableSize = this->_component->get_layout()->get_usableSize();
HXLINE(1059)		bool _hx_tmp;
HXDLIN(1059)		if ((this->get_virtualHorizontal() == false)) {
HXLINE(1059)			_hx_tmp = (usableSize->width > 0);
            		}
            		else {
HXLINE(1059)			_hx_tmp = false;
            		}
HXDLIN(1059)		if (_hx_tmp) {
HXLINE(1060)			 ::haxe::ui::containers::Box horizontalConstraint = this->_contents;
HXLINE(1061)			 ::haxe::ui::components::HorizontalScroll hscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(1062)			 ::Dynamic vcw = horizontalConstraint->get_width();
HXDLIN(1062)			Float vcw1 = (vcw + this->horizontalConstraintModifier());
HXLINE(1063)			if ((vcw1 > usableSize->width)) {
HXLINE(1064)				if (::hx::IsNull( hscroll )) {
HXLINE(1065)					hscroll = this->createHScroll();
            				}
HXLINE(1068)				hscroll->set_max((vcw1 - usableSize->width));
HXLINE(1069)				Float _hx_tmp = (usableSize->width / vcw1);
HXDLIN(1069)				hscroll->set_pageSize((_hx_tmp * hscroll->get_max()));
HXLINE(1071)				hscroll->syncComponentValidation(null());
            			}
            			else {
HXLINE(1073)				if (::hx::IsNotNull( hscroll )) {
HXLINE(1074)					this->destroyHScroll();
            				}
            			}
            		}
HXLINE(1079)		bool _hx_tmp1;
HXDLIN(1079)		if ((this->get_virtualVertical() == false)) {
HXLINE(1079)			_hx_tmp1 = (usableSize->height > 0);
            		}
            		else {
HXLINE(1079)			_hx_tmp1 = false;
            		}
HXDLIN(1079)		if (_hx_tmp1) {
HXLINE(1080)			 ::haxe::ui::containers::Box verticalConstraint = this->_contents;
HXLINE(1081)			 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(1082)			 ::Dynamic vch = verticalConstraint->get_height();
HXDLIN(1082)			Float vch1 = (vch + this->verticalConstraintModifier());
HXLINE(1083)			if ((vch1 > usableSize->height)) {
HXLINE(1084)				if (::hx::IsNull( vscroll )) {
HXLINE(1085)					vscroll = this->createVScroll();
            				}
HXLINE(1088)				vscroll->set_max((vch1 - usableSize->height));
HXLINE(1089)				Float _hx_tmp = (usableSize->height / vch1);
HXDLIN(1089)				vscroll->set_pageSize((_hx_tmp * vscroll->get_max()));
HXLINE(1091)				vscroll->syncComponentValidation(null());
            			}
            			else {
HXLINE(1093)				if (::hx::IsNotNull( vscroll )) {
HXLINE(1094)					this->destroyVScroll();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,checkScrolls,(void))

 ::haxe::ui::components::HorizontalScroll ScrollViewBuilder_obj::createHScroll(){
            	HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1101_createHScroll)
HXLINE(1102)		if ((this->_component->get_isNativeScroller() == true)) {
HXLINE(1103)			return null();
            		}
HXLINE(1106)		 ::haxe::ui::geom::Size usableSize = this->_component->get_layout()->get_usableSize();
HXLINE(1107)		 ::haxe::ui::containers::Box horizontalConstraint = this->_contents;
HXLINE(1108)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(1109)		 ::Dynamic vcw = horizontalConstraint->get_width();
HXDLIN(1109)		Float vcw1 = (vcw + this->horizontalConstraintModifier());
HXLINE(1111)		if ((usableSize->width <= 0)) {
HXLINE(1112)			return hscroll;
            		}
HXLINE(1115)		bool _hx_tmp;
HXDLIN(1115)		if ((vcw1 > usableSize->width)) {
HXLINE(1115)			_hx_tmp = ::hx::IsNull( hscroll );
            		}
            		else {
HXLINE(1115)			_hx_tmp = false;
            		}
HXDLIN(1115)		if (_hx_tmp) {
HXLINE(1116)			hscroll =  ::haxe::ui::components::HorizontalScroll_obj::__alloc( HX_CTX );
HXLINE(1117)			hscroll->set_scriptAccess(false);
HXLINE(1118)			hscroll->set_includeInLayout(!(this->_scrollview->get_autoHideScrolls()));
HXLINE(1119)			hscroll->set_hidden(this->_scrollview->get_autoHideScrolls());
HXLINE(1120)			hscroll->set_percentWidth(100);
HXLINE(1121)			hscroll->set_allowFocus(false);
HXLINE(1122)			hscroll->set_id(HX_("scrollview-hscroll",da,fc,19,11));
HXLINE(1123)			this->_component->addComponent(hscroll);
HXLINE(1124)			this->_component->registerInternalEvents(null(),true);
            		}
HXLINE(1127)		return hscroll;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,createHScroll,return )

 ::haxe::ui::components::VerticalScroll ScrollViewBuilder_obj::createVScroll(){
            	HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1131_createVScroll)
HXLINE(1132)		if ((this->_component->get_isNativeScroller() == true)) {
HXLINE(1133)			return null();
            		}
HXLINE(1136)		 ::haxe::ui::geom::Size usableSize = this->_component->get_layout()->get_usableSize();
HXLINE(1137)		 ::haxe::ui::containers::Box verticalConstraint = this->_contents;
HXLINE(1138)		 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(1139)		 ::Dynamic vch = verticalConstraint->get_height();
HXDLIN(1139)		Float vch1 = (vch + this->verticalConstraintModifier());
HXLINE(1141)		if ((usableSize->height <= 0)) {
HXLINE(1142)			return vscroll;
            		}
HXLINE(1145)		bool _hx_tmp;
HXDLIN(1145)		if ((vch1 > usableSize->height)) {
HXLINE(1145)			_hx_tmp = ::hx::IsNull( vscroll );
            		}
            		else {
HXLINE(1145)			_hx_tmp = false;
            		}
HXDLIN(1145)		if (_hx_tmp) {
HXLINE(1146)			vscroll =  ::haxe::ui::components::VerticalScroll_obj::__alloc( HX_CTX );
HXLINE(1147)			vscroll->set_scriptAccess(false);
HXLINE(1148)			vscroll->set_includeInLayout(!(this->_scrollview->get_autoHideScrolls()));
HXLINE(1149)			vscroll->set_hidden(this->_scrollview->get_autoHideScrolls());
HXLINE(1150)			vscroll->set_percentHeight(100);
HXLINE(1151)			vscroll->set_allowFocus(false);
HXLINE(1152)			vscroll->set_id(HX_("scrollview-vscroll",68,7b,46,57));
HXLINE(1153)			this->_component->addComponent(vscroll);
HXLINE(1154)			this->_component->registerInternalEvents(null(),true);
            		}
HXLINE(1157)		return vscroll;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,createVScroll,return )

void ScrollViewBuilder_obj::destroyHScroll(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1161_destroyHScroll)
HXLINE(1162)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(1163)		if (::hx::IsNotNull( hscroll )) {
HXLINE(1164)			this->_component->removeComponent(hscroll,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,destroyHScroll,(void))

void ScrollViewBuilder_obj::destroyVScroll(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1169_destroyVScroll)
HXLINE(1170)		 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(1171)		if (::hx::IsNotNull( vscroll )) {
HXLINE(1172)			this->_component->removeComponent(vscroll,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,destroyVScroll,(void))

void ScrollViewBuilder_obj::updateScrollRect(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		bool _hx_run( ::haxe::ui::core::Component c){
            			HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1215_updateScrollRect)
HXLINE(1220)			if (c->hasEvent(HX_("move",11,e3,60,48),null())) {
HXLINE(1221)				c->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("move",11,e3,60,48),null(),null()));
            			}
HXLINE(1223)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1176_updateScrollRect)
HXLINE(1177)		if (::hx::IsNull( this->_contents )) {
HXLINE(1178)			return;
            		}
HXLINE(1181)		 ::haxe::ui::geom::Size usableSize = this->_component->get_layout()->get_usableSize();
HXLINE(1183)		Float usableSize1 = usableSize->width;
HXDLIN(1183)		Float clipCX = (usableSize1 - this->horizontalConstraintModifier());
HXLINE(1184)		if (::hx::IsGreater( clipCX,this->_contents->get_width() )) {
HXLINE(1185)			 ::Dynamic clipCX1 = this->_contents->get_width();
HXDLIN(1185)			clipCX = (clipCX1 + this->horizontalConstraintModifier());
            		}
HXLINE(1187)		Float usableSize2 = usableSize->height;
HXDLIN(1187)		Float clipCY = (usableSize2 - this->verticalConstraintModifier());
HXLINE(1188)		if (::hx::IsGreater( clipCY,this->_contents->get_height() )) {
HXLINE(1189)			 ::Dynamic clipCY1 = this->_contents->get_height();
HXDLIN(1189)			clipCY = (clipCY1 + this->verticalConstraintModifier());
            		}
HXLINE(1192)		Float xpos = ( (Float)(0) );
HXLINE(1193)		Float ypos = ( (Float)(0) );
HXLINE(1195)		if ((this->get_virtualHorizontal() == false)) {
HXLINE(1196)			 ::haxe::ui::components::HorizontalScroll hscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(1197)			if (::hx::IsNotNull( hscroll )) {
HXLINE(1198)				xpos = hscroll->get_pos();
            			}
            		}
            		else {
HXLINE(1200)			if (::hx::IsNotNull( this->_contents->get_componentClipRect() )) {
HXLINE(1201)				clipCX = this->_contents->get_componentClipRect()->width;
            			}
            		}
HXLINE(1204)		if ((this->get_virtualVertical() == false)) {
HXLINE(1205)			 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(1206)			if (::hx::IsNotNull( vscroll )) {
HXLINE(1207)				ypos = vscroll->get_pos();
            			}
            		}
            		else {
HXLINE(1209)			if (::hx::IsNotNull( this->_contents->get_componentClipRect() )) {
HXLINE(1210)				clipCY = this->_contents->get_componentClipRect()->height;
            			}
            		}
HXLINE(1213)		 ::haxe::ui::geom::Rectangle newClipRect =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,::Math_obj::fround(xpos),::Math_obj::fround(ypos),::Math_obj::fround(clipCX),::Math_obj::fround(clipCY));
HXLINE(1214)		this->_contents->set_componentClipRect(newClipRect);
HXLINE(1215)		this->_contents->walkComponents( ::Dynamic(new _hx_Closure_0()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,updateScrollRect,(void))

bool ScrollViewBuilder_obj::get_virtualHorizontal(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1229_get_virtualHorizontal)
HXDLIN(1229)		return this->_scrollview->get_virtual();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,get_virtualHorizontal,return )

bool ScrollViewBuilder_obj::get_virtualVertical(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1234_get_virtualVertical)
HXDLIN(1234)		return this->_scrollview->get_virtual();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,get_virtualVertical,return )

void ScrollViewBuilder_obj::onVirtualChanged(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1237_onVirtualChanged)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,onVirtualChanged,(void))

void ScrollViewBuilder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1241_applyStyle)
HXLINE(1242)		this->super::applyStyle(style);
HXLINE(1243)		if ((style->mode == HX_("mobile",62,ac,77,bf))) {
HXLINE(1244)			this->_scrollview->set_autoHideScrolls(true);
            		}
HXLINE(1247)		bool _hx_tmp;
HXDLIN(1247)		if (::hx::IsNotNull( style->contentWidth )) {
HXLINE(1247)			 ::Dynamic style1 = style->contentWidth;
HXDLIN(1247)			_hx_tmp = ::hx::IsNotEq( style1,this->_scrollview->get_contentWidth() );
            		}
            		else {
HXLINE(1247)			_hx_tmp = false;
            		}
HXDLIN(1247)		if (_hx_tmp) {
HXLINE(1248)			this->_scrollview->set_contentWidth(style->contentWidth);
            		}
            		else {
HXLINE(1249)			bool _hx_tmp;
HXDLIN(1249)			if (::hx::IsNotNull( style->contentWidthPercent )) {
HXLINE(1249)				 ::Dynamic style1 = style->contentWidthPercent;
HXDLIN(1249)				_hx_tmp = ::hx::IsNotEq( style1,this->_scrollview->get_percentContentWidth() );
            			}
            			else {
HXLINE(1249)				_hx_tmp = false;
            			}
HXDLIN(1249)			if (_hx_tmp) {
HXLINE(1250)				this->_scrollview->set_percentContentWidth(style->contentWidthPercent);
            			}
            		}
HXLINE(1253)		bool _hx_tmp1;
HXDLIN(1253)		if (::hx::IsNotNull( style->contentHeight )) {
HXLINE(1253)			 ::Dynamic style1 = style->contentHeight;
HXDLIN(1253)			_hx_tmp1 = ::hx::IsNotEq( style1,this->_scrollview->get_contentHeight() );
            		}
            		else {
HXLINE(1253)			_hx_tmp1 = false;
            		}
HXDLIN(1253)		if (_hx_tmp1) {
HXLINE(1254)			this->_scrollview->set_contentHeight(style->contentHeight);
            		}
            		else {
HXLINE(1255)			bool _hx_tmp;
HXDLIN(1255)			if (::hx::IsNotNull( style->contentHeightPercent )) {
HXLINE(1255)				 ::Dynamic style1 = style->contentHeightPercent;
HXDLIN(1255)				_hx_tmp = ::hx::IsNotEq( style1,this->_scrollview->get_percentContentHeight() );
            			}
            			else {
HXLINE(1255)				_hx_tmp = false;
            			}
HXDLIN(1255)			if (_hx_tmp) {
HXLINE(1256)				this->_scrollview->set_percentContentHeight(style->contentHeightPercent);
            			}
            		}
            	}



::hx::ObjectPtr< ScrollViewBuilder_obj > ScrollViewBuilder_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< ScrollViewBuilder_obj > __this = new ScrollViewBuilder_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< ScrollViewBuilder_obj > ScrollViewBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	ScrollViewBuilder_obj *__this = (ScrollViewBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewBuilder_obj), true, "haxe.ui.containers.ScrollViewBuilder"));
	*(void **)__this = ScrollViewBuilder_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

ScrollViewBuilder_obj::ScrollViewBuilder_obj()
{
}

void ScrollViewBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollViewBuilder);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	HX_MARK_MEMBER_NAME(_contents,"_contents");
	HX_MARK_MEMBER_NAME(_contentsLayoutName,"_contentsLayoutName");
	HX_MARK_MEMBER_NAME(virtualHorizontal,"virtualHorizontal");
	HX_MARK_MEMBER_NAME(virtualVertical,"virtualVertical");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollViewBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	HX_VISIT_MEMBER_NAME(_contents,"_contents");
	HX_VISIT_MEMBER_NAME(_contentsLayoutName,"_contentsLayoutName");
	HX_VISIT_MEMBER_NAME(virtualHorizontal,"virtualHorizontal");
	HX_VISIT_MEMBER_NAME(virtualVertical,"virtualVertical");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollViewBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { return ::hx::Val( _contents ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { return ::hx::Val( _scrollview ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkScrolls") ) { return ::hx::Val( checkScrolls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createHScroll") ) { return ::hx::Val( createHScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"createVScroll") ) { return ::hx::Val( createVScroll_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyHScroll") ) { return ::hx::Val( destroyHScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyVScroll") ) { return ::hx::Val( destroyVScroll_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"virtualVertical") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_virtualVertical() : virtualVertical ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return ::hx::Val( updateScrollRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"onVirtualChanged") ) { return ::hx::Val( onVirtualChanged_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numComponents") ) { return ::hx::Val( get_numComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"virtualHorizontal") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_virtualHorizontal() : virtualHorizontal ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_contentsLayoutName") ) { return ::hx::Val( _contentsLayoutName ); }
		if (HX_FIELD_EQ(inName,"removeAllComponents") ) { return ::hx::Val( removeAllComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_virtualVertical") ) { return ::hx::Val( get_virtualVertical_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_virtualHorizontal") ) { return ::hx::Val( get_virtualHorizontal_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createContentContainer") ) { return ::hx::Val( createContentContainer_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"verticalConstraintModifier") ) { return ::hx::Val( verticalConstraintModifier_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"horizontalConstraintModifier") ) { return ::hx::Val( horizontalConstraintModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollViewBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { _contents=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"virtualVertical") ) { virtualVertical=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"virtualHorizontal") ) { virtualHorizontal=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_contentsLayoutName") ) { _contentsLayoutName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollViewBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	outFields->push(HX_("_contents",79,fc,b9,76));
	outFields->push(HX_("_contentsLayoutName",ee,9b,fd,2c));
	outFields->push(HX_("virtualHorizontal",cf,ba,86,d2));
	outFields->push(HX_("virtualVertical",a1,99,06,63));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollViewBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(ScrollViewBuilder_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(ScrollViewBuilder_obj,_contents),HX_("_contents",79,fc,b9,76)},
	{::hx::fsString,(int)offsetof(ScrollViewBuilder_obj,_contentsLayoutName),HX_("_contentsLayoutName",ee,9b,fd,2c)},
	{::hx::fsBool,(int)offsetof(ScrollViewBuilder_obj,virtualHorizontal),HX_("virtualHorizontal",cf,ba,86,d2)},
	{::hx::fsBool,(int)offsetof(ScrollViewBuilder_obj,virtualVertical),HX_("virtualVertical",a1,99,06,63)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollViewBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollViewBuilder_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("_contents",79,fc,b9,76),
	HX_("_contentsLayoutName",ee,9b,fd,2c),
	HX_("create",fc,66,0f,7c),
	HX_("destroy",fa,2c,86,24),
	HX_("get_numComponents",53,76,26,3b),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("removeComponent",d9,8b,72,50),
	HX_("removeAllComponents",b3,1e,97,3c),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("createContentContainer",e4,d3,42,a7),
	HX_("horizontalConstraintModifier",d8,e6,93,6e),
	HX_("verticalConstraintModifier",ea,f2,b6,ce),
	HX_("checkScrolls",de,eb,5e,1e),
	HX_("createHScroll",f9,62,f4,48),
	HX_("createVScroll",87,e1,20,8f),
	HX_("destroyHScroll",bb,78,1d,cd),
	HX_("destroyVScroll",49,f7,49,13),
	HX_("updateScrollRect",3a,ab,52,53),
	HX_("virtualHorizontal",cf,ba,86,d2),
	HX_("get_virtualHorizontal",a6,bd,34,51),
	HX_("virtualVertical",a1,99,06,63),
	HX_("get_virtualVertical",b8,68,11,ee),
	HX_("onVirtualChanged",a8,ef,1c,9b),
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class ScrollViewBuilder_obj::__mClass;

void ScrollViewBuilder_obj::__register()
{
	ScrollViewBuilder_obj _hx_dummy;
	ScrollViewBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.ScrollViewBuilder",bf,ee,2c,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollViewBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollViewBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
