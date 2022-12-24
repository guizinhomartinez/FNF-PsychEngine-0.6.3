#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d600fe9af254ec13_612_new,"haxe.ui.components.DropDownEvents","new",0xf4f3fa42,"haxe.ui.components.DropDownEvents.new","haxe/ui/components/DropDown.hx",612,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_620_register,"haxe.ui.components.DropDownEvents","register",0x16726941,"haxe.ui.components.DropDownEvents.register","haxe/ui/components/DropDown.hx",620,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_625_unregister,"haxe.ui.components.DropDownEvents","unregister",0xc893441a,"haxe.ui.components.DropDownEvents.unregister","haxe/ui/components/DropDown.hx",625,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_630_onClick,"haxe.ui.components.DropDownEvents","onClick",0x3193dd8b,"haxe.ui.components.DropDownEvents.onClick","haxe/ui/components/DropDown.hx",630,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_639_onMouseClick,"haxe.ui.components.DropDownEvents","onMouseClick",0x64bf9bc0,"haxe.ui.components.DropDownEvents.onMouseClick","haxe/ui/components/DropDown.hx",639,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_645_showDropDown,"haxe.ui.components.DropDownEvents","showDropDown",0x39e6802c,"haxe.ui.components.DropDownEvents.showDropDown","haxe/ui/components/DropDown.hx",645,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_771_onDropDownMoved,"haxe.ui.components.DropDownEvents","onDropDownMoved",0x9ff02685,"haxe.ui.components.DropDownEvents.onDropDownMoved","haxe/ui/components/DropDown.hx",771,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_777_createSearchField,"haxe.ui.components.DropDownEvents","createSearchField",0x56e057f8,"haxe.ui.components.DropDownEvents.createSearchField","haxe/ui/components/DropDown.hx",777,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_774_createSearchField,"haxe.ui.components.DropDownEvents","createSearchField",0x56e057f8,"haxe.ui.components.DropDownEvents.createSearchField","haxe/ui/components/DropDown.hx",774,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_794_get_searchField,"haxe.ui.components.DropDownEvents","get_searchField",0xf270b8ab,"haxe.ui.components.DropDownEvents.get_searchField","haxe/ui/components/DropDown.hx",794,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_800_set_searchField,"haxe.ui.components.DropDownEvents","set_searchField",0xee3c35b7,"haxe.ui.components.DropDownEvents.set_searchField","haxe/ui/components/DropDown.hx",800,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_806_onSearchChange,"haxe.ui.components.DropDownEvents","onSearchChange",0x0894c015,"haxe.ui.components.DropDownEvents.onSearchChange","haxe/ui/components/DropDown.hx",806,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_827_onSearchChange,"haxe.ui.components.DropDownEvents","onSearchChange",0x0894c015,"haxe.ui.components.DropDownEvents.onSearchChange","haxe/ui/components/DropDown.hx",827,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_846_hideDropDown,"haxe.ui.components.DropDownEvents","hideDropDown",0xcf5eacf1,"haxe.ui.components.DropDownEvents.hideDropDown","haxe/ui/components/DropDown.hx",846,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_874_onScreenMouseDown,"haxe.ui.components.DropDownEvents","onScreenMouseDown",0x9cf23b1e,"haxe.ui.components.DropDownEvents.onScreenMouseDown","haxe/ui/components/DropDown.hx",874,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_890_dispatchChanged,"haxe.ui.components.DropDownEvents","dispatchChanged",0x513f2a3c,"haxe.ui.components.DropDownEvents.dispatchChanged","haxe/ui/components/DropDown.hx",890,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d600fe9af254ec13_894_release,"haxe.ui.components.DropDownEvents","release",0xabe548a9,"haxe.ui.components.DropDownEvents.release","haxe/ui/components/DropDown.hx",894,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{

void DropDownEvents_obj::__construct( ::haxe::ui::components::DropDown dropdown){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_612_new)
HXLINE( 805)		this->_lastSearchTerm = HX_("",00,00,00,00);
HXLINE( 792)		this->_searchField = null();
HXLINE( 644)		this->_wrapper = null();
HXLINE( 643)		this->_overlay = null();
HXLINE( 616)		super::__construct(dropdown);
HXLINE( 617)		this->_dropdown = dropdown;
            	}

Dynamic DropDownEvents_obj::__CreateEmpty() { return new DropDownEvents_obj; }

void *DropDownEvents_obj::_hx_vtable = 0;

Dynamic DropDownEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropDownEvents_obj > _hx_result = new DropDownEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DropDownEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		if (inClassId<=(int)0x0426c5bf) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0426c5bf;
		} else {
			return inClassId==(int)0x0548a7cc;
		}
	} else {
		return inClassId==(int)0x533436da;
	}
}

void DropDownEvents_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_620_register)
HXLINE( 621)		this->super::_hx_register();
HXLINE( 622)		this->registerEvent(HX_("mousedown",07,85,e9,03),this->onClick_dyn(),null());
            	}


void DropDownEvents_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_625_unregister)
HXLINE( 626)		this->super::unregister();
HXLINE( 627)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onClick_dyn());
            	}


void DropDownEvents_obj::onClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_630_onClick)
HXLINE( 631)		 ::haxe::ui::components::DropDown _hx_tmp = this->_dropdown;
HXDLIN( 631)		_hx_tmp->set_selected(!(this->_dropdown->get_selected()));
HXLINE( 632)		if ((this->_dropdown->get_selected() == true)) {
HXLINE( 633)			this->showDropDown();
            		}
            		else {
HXLINE( 635)			this->hideDropDown();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownEvents_obj,onClick,(void))

void DropDownEvents_obj::onMouseClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_639_onMouseClick)
            	}


void DropDownEvents_obj::showDropDown(){
            	HX_GC_STACKFRAME(&_hx_pos_d600fe9af254ec13_645_showDropDown)
HXLINE( 646)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_dropdown->_compositeBuilder)->get_handler();
HXLINE( 647)		if (::hx::IsNull( handler )) {
HXLINE( 648)			return;
            		}
HXLINE( 651)		if (::hx::IsNull( this->_wrapper )) {
HXLINE( 652)			this->_wrapper =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE( 653)			this->_wrapper->addClass(HX_("popup",2c,0a,95,c6),null(),null());
HXLINE( 654)			this->_wrapper->addClass(HX_("dropdown-popup",b0,9d,cf,cb),null(),null());
HXLINE( 655)			if (::hx::IsNotNull( this->_button->get_id() )) {
HXLINE( 656)				 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 656)				_hx_tmp->addClass((this->_button->get_id() + HX_("-popup",df,46,a4,c4)),null(),null());
HXLINE( 657)				 ::haxe::ui::containers::Box _hx_tmp1 = this->_wrapper;
HXDLIN( 657)				_hx_tmp1->set_id((this->_button->get_id() + HX_("_popup",6d,51,7c,c2)));
            			}
            			else {
HXLINE( 659)				this->_wrapper->set_id(HX_("dropdown_popup",3e,a8,a7,c9));
            			}
HXLINE( 661)			 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 661)			_hx_tmp->set_styleNames(this->_dropdown->get_handlerStyleNames());
HXLINE( 663)			if ((this->_dropdown->get_searchable() == true)) {
HXLINE( 664)				 ::haxe::ui::containers::VBox searchContainer =  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX );
HXLINE( 665)				searchContainer->set_id(HX_("dropdown-search-container",d8,4b,e7,2c));
HXLINE( 666)				searchContainer->addClass(HX_("dropdown-search-container",d8,4b,e7,2c),null(),null());
HXLINE( 667)				searchContainer->set_scriptAccess(false);
HXLINE( 669)				 ::haxe::ui::containers::HBox searchFieldContainer =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE( 670)				searchFieldContainer->set_id(HX_("dropdown-search-field-container",85,6a,9a,58));
HXLINE( 671)				searchFieldContainer->addClass(HX_("dropdown-search-field-container",85,6a,9a,58),null(),null());
HXLINE( 672)				searchFieldContainer->set_scriptAccess(false);
HXLINE( 673)				searchFieldContainer->addComponent(this->get_searchField());
HXLINE( 675)				 ::haxe::ui::core::Component searchFieldSeparator =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 676)				searchFieldSeparator->set_id(HX_("dropdown-search-field-separator",a9,55,a6,ca));
HXLINE( 677)				searchFieldSeparator->addClass(HX_("dropdown-search-field-separator",a9,55,a6,ca),null(),null());
HXLINE( 678)				searchFieldSeparator->set_scriptAccess(false);
HXLINE( 680)				searchContainer->addComponent(searchFieldContainer);
HXLINE( 681)				searchContainer->addComponent(searchFieldSeparator);
HXLINE( 682)				searchContainer->addComponent(::haxe::ui::components::IDropDownHandler_obj::get_component(handler));
HXLINE( 683)				this->_wrapper->addComponent(searchContainer);
            			}
            			else {
HXLINE( 685)				 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 685)				_hx_tmp->addComponent(::haxe::ui::components::IDropDownHandler_obj::get_component(handler));
            			}
HXLINE( 688)			bool _hx_tmp1;
HXDLIN( 688)			if (::hx::IsNotNull( this->_dropdown->get_style()->fontSize )) {
HXLINE( 688)				 ::Dynamic _hx_tmp = ::haxe::ui::components::IDropDownHandler_obj::get_component(handler)->get_customStyle()->fontSize;
HXDLIN( 688)				_hx_tmp1 = ::hx::IsNotEq( _hx_tmp,this->_dropdown->get_style()->fontSize );
            			}
            			else {
HXLINE( 688)				_hx_tmp1 = false;
            			}
HXDLIN( 688)			if (_hx_tmp1) {
HXLINE( 689)				::haxe::ui::components::IDropDownHandler_obj::get_component(handler)->get_customStyle()->fontSize = this->_dropdown->get_style()->fontSize;
            			}
HXLINE( 692)			 ::haxe::ui::core::Component filler =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 693)			filler->set_includeInLayout(false);
HXLINE( 694)			filler->addClass(HX_("dropdown-filler",ac,8d,35,13),null(),null());
HXLINE( 695)			filler->set_id(HX_("dropdown-filler",ac,8d,35,13));
HXLINE( 696)			this->_wrapper->addComponent(filler);
            		}
HXLINE( 699)		 ::haxe::ui::geom::Point componentOffset = this->_dropdown->getComponentOffset();
HXLINE( 701)		bool _hx_tmp;
HXDLIN( 701)		if (::hx::IsNotNull( this->_dropdown->get_style()->mode )) {
HXLINE( 701)			_hx_tmp = (this->_dropdown->get_style()->mode == HX_("mobile",62,ac,77,bf));
            		}
            		else {
HXLINE( 701)			_hx_tmp = false;
            		}
HXDLIN( 701)		if (_hx_tmp) {
HXLINE( 702)			if (::hx::IsNull( this->_overlay )) {
HXLINE( 703)				this->_overlay =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 704)				this->_overlay->set_id(HX_("modal-background",4e,93,38,6c));
HXLINE( 705)				this->_overlay->addClass(HX_("modal-background",4e,93,38,6c),null(),null());
HXLINE( 706)				 ::haxe::ui::core::Component _hx_tmp = this->_overlay;
HXDLIN( 706)				_hx_tmp->set_percentWidth(this->_overlay->set_percentHeight(100));
            			}
HXLINE( 708)			::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_overlay);
HXLINE( 710)			::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_wrapper);
HXLINE( 711)			::haxe::ui::components::IDropDownHandler_obj::prepare(handler,this->_wrapper);
HXLINE( 712)			this->_wrapper->syncComponentValidation(null());
HXLINE( 713)			this->_wrapper->validateNow();
HXLINE( 714)			 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 714)			Float _hx_tmp1 = (::haxe::ui::core::Screen_obj::get_instance()->get_actualWidth() / ( (Float)(2) ));
HXDLIN( 714)			_hx_tmp->set_left((_hx_tmp1 - (this->_wrapper->get_actualComponentWidth() / ( (Float)(2) ))));
HXLINE( 715)			 ::haxe::ui::containers::Box _hx_tmp2 = this->_wrapper;
HXDLIN( 715)			Float _hx_tmp3 = (::haxe::ui::core::Screen_obj::get_instance()->get_actualHeight() / ( (Float)(2) ));
HXDLIN( 715)			_hx_tmp2->set_top((_hx_tmp3 - (this->_wrapper->get_actualComponentHeight() / ( (Float)(2) ))));
            		}
            		else {
HXLINE( 717)			 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 717)			Float _hx_tmp1 = this->_dropdown->get_screenLeft();
HXDLIN( 717)			_hx_tmp->set_left((_hx_tmp1 + componentOffset->x));
HXLINE( 718)			 ::haxe::ui::containers::Box _hx_tmp2 = this->_wrapper;
HXDLIN( 718)			Float _hx_tmp3 = this->_dropdown->get_screenTop();
HXDLIN( 718)			Float _hx_tmp4 = this->_dropdown->get_actualComponentHeight();
HXDLIN( 718)			Float _hx_tmp5 = (_hx_tmp3 + (_hx_tmp4 - ::haxe::ui::Toolkit_obj::get_scaleY()));
HXDLIN( 718)			_hx_tmp2->set_top((_hx_tmp5 + componentOffset->y));
HXLINE( 719)			::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_wrapper);
HXLINE( 720)			::haxe::ui::components::IDropDownHandler_obj::prepare(handler,this->_wrapper);
HXLINE( 721)			this->_wrapper->syncComponentValidation(null());
HXLINE( 722)			this->_wrapper->validateNow();
HXLINE( 724)			bool popupToRight = false;
HXLINE( 725)			bool popupFromBottom = false;
HXLINE( 726)			Float _hx_tmp6 = this->_wrapper->get_screenLeft();
HXDLIN( 726)			Float _hx_tmp7 = (_hx_tmp6 + this->_wrapper->get_actualComponentWidth());
HXDLIN( 726)			if ((_hx_tmp7 > ::haxe::ui::core::Screen_obj::get_instance()->get_actualWidth())) {
HXLINE( 727)				Float left = this->_wrapper->get_screenLeft();
HXDLIN( 727)				Float left1 = (left - this->_wrapper->get_actualComponentWidth());
HXDLIN( 727)				Float left2 = (left1 + this->_dropdown->get_actualComponentWidth());
HXLINE( 728)				 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 728)				 ::Dynamic _hx_tmp1;
HXDLIN( 728)				if ((left2 >= 0)) {
HXLINE( 728)					_hx_tmp1 = left2;
            				}
            				else {
HXLINE( 728)					Float _hx_tmp = (::haxe::ui::core::Screen_obj::get_instance()->get_actualWidth() / ( (Float)(2) ));
HXDLIN( 728)					_hx_tmp1 = (_hx_tmp - (this->_wrapper->get_actualComponentWidth() / ( (Float)(2) )));
            				}
HXDLIN( 728)				_hx_tmp->set_left(_hx_tmp1);
HXLINE( 729)				popupToRight = true;
            			}
HXLINE( 731)			this->_wrapper->removeClass(HX_("popup-from-bottom",cd,e3,65,62),null(),null());
HXLINE( 732)			Float _hx_tmp8 = this->_wrapper->get_screenTop();
HXDLIN( 732)			Float _hx_tmp9 = (_hx_tmp8 + this->_wrapper->get_actualComponentHeight());
HXDLIN( 732)			if ((_hx_tmp9 > ::haxe::ui::core::Screen_obj::get_instance()->get_actualHeight())) {
HXLINE( 733)				 ::haxe::ui::containers::Box _hx_tmp = this->_wrapper;
HXDLIN( 733)				Float _hx_tmp1 = this->_dropdown->get_screenTop();
HXDLIN( 733)				Float _hx_tmp2 = (_hx_tmp1 - this->_wrapper->get_actualComponentHeight());
HXDLIN( 733)				_hx_tmp->set_top((_hx_tmp2 + ::haxe::ui::Toolkit_obj::get_scaleY()));
HXLINE( 734)				popupFromBottom = true;
HXLINE( 735)				this->_wrapper->addClass(HX_("popup-from-bottom",cd,e3,65,62),null(),null());
            			}
HXLINE( 738)			 ::Dynamic cx = this->_wrapper->get_width();
HXDLIN( 738)			Float cx1 = (( (Float)(cx) ) - ( (Float)(this->_dropdown->get_width()) ));
HXLINE( 739)			 ::haxe::ui::core::Component filler = this->_wrapper->findComponent(HX_("dropdown-filler",ac,8d,35,13),null(),false,null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 740)			bool _hx_tmp10;
HXDLIN( 740)			if ((cx1 > 0)) {
HXLINE( 740)				_hx_tmp10 = ::hx::IsNotNull( filler );
            			}
            			else {
HXLINE( 740)				_hx_tmp10 = false;
            			}
HXDLIN( 740)			if (_hx_tmp10) {
HXLINE( 741)				this->_wrapper->addClass(HX_("dropdown-popup-expanded",b6,b2,45,af),null(),null());
HXLINE( 742)				filler->set_width(cx1);
HXLINE( 743)				if (popupToRight) {
HXLINE( 744)					cx1 = (cx1 - ::haxe::ui::Toolkit_obj::get_scaleX());
HXLINE( 745)					filler->set_left(::haxe::ui::Toolkit_obj::get_scaleX());
            				}
            				else {
HXLINE( 747)					cx1 = (cx1 + ::haxe::ui::Toolkit_obj::get_scaleX());
HXLINE( 748)					filler->set_left((( (Float)(this->_wrapper->get_width()) ) - cx1));
            				}
HXLINE( 751)				if (popupFromBottom) {
HXLINE( 752)					Float _hx_tmp = this->_wrapper->get_actualComponentHeight();
HXDLIN( 752)					filler->set_top((_hx_tmp - ::haxe::ui::Toolkit_obj::get_scaleY()));
            				}
            				else {
HXLINE( 754)					filler->set_top(0);
            				}
HXLINE( 757)				filler->set_hidden(false);
            			}
            			else {
HXLINE( 758)				if (::hx::IsNotNull( filler )) {
HXLINE( 759)					filler->set_hidden(true);
HXLINE( 760)					this->_wrapper->removeClass(HX_("dropdown-popup-expanded",b6,b2,45,af),null(),null());
            				}
            			}
            		}
HXLINE( 765)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn(),null());
HXLINE( 766)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("rightmousedown",ab,1d,2b,41),this->onScreenMouseDown_dyn(),null());
HXLINE( 767)		this->registerEvent(HX_("move",11,e3,60,48),this->onDropDownMoved_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownEvents_obj,showDropDown,(void))

void DropDownEvents_obj::onDropDownMoved( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_771_onDropDownMoved)
HXDLIN( 771)		this->hideDropDown();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownEvents_obj,onDropDownMoved,(void))

 ::haxe::ui::components::TextField DropDownEvents_obj::createSearchField(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::DropDownEvents,_gthis) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::ActionEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_d600fe9af254ec13_777_createSearchField)
HXLINE( 777)			bool _hx_tmp;
HXDLIN( 777)			bool _hx_tmp1;
HXDLIN( 777)			bool _hx_tmp2;
HXDLIN( 777)			bool _hx_tmp3;
HXDLIN( 777)			bool _hx_tmp4;
HXDLIN( 777)			if ((e->action != HX_("actionDown",38,73,b4,4d))) {
HXLINE( 777)				_hx_tmp4 = (e->action == HX_("actionUp",b1,5f,15,e1));
            			}
            			else {
HXLINE( 777)				_hx_tmp4 = true;
            			}
HXDLIN( 777)			if (!(_hx_tmp4)) {
HXLINE( 777)				_hx_tmp3 = (e->action == HX_("actionConfirm",ea,0b,2f,06));
            			}
            			else {
HXLINE( 777)				_hx_tmp3 = true;
            			}
HXDLIN( 777)			if (!(_hx_tmp3)) {
HXLINE( 777)				_hx_tmp2 = (e->action == HX_("actionPress",ed,53,ed,9a));
            			}
            			else {
HXLINE( 777)				_hx_tmp2 = true;
            			}
HXDLIN( 777)			if (!(_hx_tmp2)) {
HXLINE( 777)				_hx_tmp1 = (e->action == HX_("actionBack",fd,54,57,4c));
            			}
            			else {
HXLINE( 777)				_hx_tmp1 = true;
            			}
HXDLIN( 777)			if (!(_hx_tmp1)) {
HXLINE( 777)				_hx_tmp = (e->action == HX_("actionCancel",d0,49,2f,fe));
            			}
            			else {
HXLINE( 777)				_hx_tmp = true;
            			}
HXDLIN( 777)			if (_hx_tmp) {
HXLINE( 780)				 ::haxe::ui::components::DropDownBuilder builder = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(_gthis->_dropdown->_compositeBuilder);
HXLINE( 781)				::haxe::ui::components::IDropDownHandler_obj::get_component(builder->get_handler())->dispatch(e);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_d600fe9af254ec13_774_createSearchField)
HXDLIN( 774)		 ::haxe::ui::components::DropDownEvents _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 775)		 ::haxe::ui::components::TextField searchField =  ::haxe::ui::components::TextField_obj::__alloc( HX_CTX );
HXLINE( 776)		searchField->registerEvent(HX_("actionstart",ec,04,43,c3), ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 784)		searchField->set_id(HX_("dropdown-search-field",d1,93,e4,19));
HXLINE( 785)		searchField->addClass(HX_("dropdown-search-field",d1,93,e4,19),null(),null());
HXLINE( 786)		searchField->set_placeholder(this->_dropdown->get_searchPrompt());
HXLINE( 787)		searchField->set_scriptAccess(false);
HXLINE( 788)		searchField->registerEvent(HX_("change",70,91,72,b7),this->onSearchChange_dyn(),null());
HXLINE( 789)		return searchField;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownEvents_obj,createSearchField,return )

 ::haxe::ui::components::TextField DropDownEvents_obj::get_searchField(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_794_get_searchField)
HXLINE( 795)		if (::hx::IsNull( this->_searchField )) {
HXLINE( 796)			this->_searchField = this->createSearchField();
            		}
HXLINE( 798)		return this->_searchField;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownEvents_obj,get_searchField,return )

 ::haxe::ui::components::TextField DropDownEvents_obj::set_searchField( ::haxe::ui::components::TextField value){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_800_set_searchField)
HXLINE( 801)		this->_searchField = value;
HXLINE( 802)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownEvents_obj,set_searchField,return )

void DropDownEvents_obj::onSearchChange( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_806_onSearchChange)
HXLINE( 807)		if (::hx::IsNull( this->_wrapper )) {
HXLINE( 808)			return;
            		}
HXLINE( 810)		 ::haxe::ui::components::TextField searchField = this->_wrapper->findComponent(HX_("dropdown-search-field",d1,93,e4,19),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 811)		if (::hx::IsNull( searchField )) {
HXLINE( 812)			return;
            		}
HXLINE( 815)		 ::Dynamic selectedItem = this->_dropdown->get_selectedItem();
HXLINE( 816)		::Array< ::String > searchTerm = ::Array_obj< ::String >::__new(1)->init(0,searchField->get_text());
HXLINE( 817)		bool _hx_tmp;
HXDLIN( 817)		if (::hx::IsNotNull( searchTerm->__get(0) )) {
HXLINE( 817)			_hx_tmp = (::StringTools_obj::trim(searchTerm->__get(0)).length == 0);
            		}
            		else {
HXLINE( 817)			_hx_tmp = true;
            		}
HXDLIN( 817)		if (_hx_tmp) {
HXLINE( 818)			searchTerm[0] = HX_("",00,00,00,00);
            		}
HXLINE( 820)		if ((this->_lastSearchTerm == searchTerm->__get(0))) {
HXLINE( 821)			return;
            		}
HXLINE( 823)		this->_lastSearchTerm = searchTerm->__get(0);
HXLINE( 824)		if ((searchTerm->__get(0).length == 0)) {
HXLINE( 825)			this->_dropdown->get_dataSource()->clearFilter();
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,searchTerm) HXARGC(2)
            			bool _hx_run(int index, ::Dynamic data){
            				HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_827_onSearchChange)
HXLINE( 828)				 ::Dynamic v =  ::Dynamic(data->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
HXLINE( 829)				::String _hx_tmp = ::Std_obj::string(v).toLowerCase();
HXDLIN( 829)				return (_hx_tmp.indexOf(searchTerm->__get(0).toLowerCase(),null()) > -1);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 827)			this->_dropdown->get_dataSource()->filter( ::Dynamic(new _hx_Closure_0(searchTerm)));
            		}
HXLINE( 833)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_dropdown->_compositeBuilder)->get_handler();
HXLINE( 834)		if (::hx::IsNull( handler )) {
HXLINE( 835)			return;
            		}
HXLINE( 838)		::haxe::ui::components::IDropDownHandler_obj::prepare(handler,this->_wrapper);
HXLINE( 839)		if (::hx::IsNotNull( selectedItem )) {
HXLINE( 840)			::haxe::ui::components::IDropDownHandler_obj::pauseEvents(handler);
HXLINE( 841)			this->_dropdown->set_selectedItem(selectedItem);
HXLINE( 842)			::haxe::ui::components::IDropDownHandler_obj::resumeEvents(handler);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownEvents_obj,onSearchChange,(void))

void DropDownEvents_obj::hideDropDown(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_846_hideDropDown)
HXLINE( 847)		::Dynamic handler = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_dropdown->_compositeBuilder)->get_handler();
HXLINE( 848)		if (::hx::IsNull( handler )) {
HXLINE( 849)			return;
            		}
HXLINE( 852)		if (::hx::IsNotNull( this->_wrapper )) {
HXLINE( 853)			 ::haxe::ui::components::TextField searchField = this->_wrapper->findComponent(HX_("dropdown-search-field",d1,93,e4,19),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 854)			if (::hx::IsNotNull( searchField )) {
HXLINE( 855)				searchField->set_focus(false);
            			}
            		}
HXLINE( 859)		if (::hx::IsNotNull( this->_overlay )) {
HXLINE( 860)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->_overlay,null());
HXLINE( 861)			this->_overlay = null();
            		}
HXLINE( 864)		this->_dropdown->set_selected(false);
HXLINE( 866)		if (::hx::IsNotNull( this->_wrapper )) {
HXLINE( 867)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->_wrapper,false);
            		}
HXLINE( 869)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn());
HXLINE( 870)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("rightmousedown",ab,1d,2b,41),this->onScreenMouseDown_dyn());
HXLINE( 871)		this->unregisterEvent(HX_("move",11,e3,60,48),this->onDropDownMoved_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDownEvents_obj,hideDropDown,(void))

void DropDownEvents_obj::onScreenMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_874_onScreenMouseDown)
HXLINE( 875)		if (::hx::IsNull( this->_wrapper )) {
HXLINE( 876)			return;
            		}
HXLINE( 878)		if ((this->_wrapper->hitTest(event->screenX,event->screenY,null()) == true)) {
HXLINE( 879)			return;
            		}
HXLINE( 881)		 ::haxe::ui::geom::Point componentOffset = this->_dropdown->getComponentOffset();
HXLINE( 882)		if ((this->_dropdown->hitTest((event->screenX - componentOffset->x),(event->screenY - componentOffset->y),null()) == true)) {
HXLINE( 883)			return;
            		}
HXLINE( 886)		this->hideDropDown();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDownEvents_obj,onScreenMouseDown,(void))

void DropDownEvents_obj::dispatchChanged(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_890_dispatchChanged)
            	}


void DropDownEvents_obj::release(){
            	HX_STACKFRAME(&_hx_pos_d600fe9af254ec13_894_release)
HXDLIN( 894)		if ((this->_down == true)) {
HXLINE( 895)			this->super::release();
HXLINE( 896)			if ((this->_dropdown->get_selected() == true)) {
HXLINE( 897)				this->showDropDown();
            			}
            			else {
HXLINE( 899)				this->hideDropDown();
            			}
            		}
            	}



::hx::ObjectPtr< DropDownEvents_obj > DropDownEvents_obj::__new( ::haxe::ui::components::DropDown dropdown) {
	::hx::ObjectPtr< DropDownEvents_obj > __this = new DropDownEvents_obj();
	__this->__construct(dropdown);
	return __this;
}

::hx::ObjectPtr< DropDownEvents_obj > DropDownEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown) {
	DropDownEvents_obj *__this = (DropDownEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropDownEvents_obj), true, "haxe.ui.components.DropDownEvents"));
	*(void **)__this = DropDownEvents_obj::_hx_vtable;
	__this->__construct(dropdown);
	return __this;
}

DropDownEvents_obj::DropDownEvents_obj()
{
}

void DropDownEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropDownEvents);
	HX_MARK_MEMBER_NAME(_dropdown,"_dropdown");
	HX_MARK_MEMBER_NAME(_overlay,"_overlay");
	HX_MARK_MEMBER_NAME(_wrapper,"_wrapper");
	HX_MARK_MEMBER_NAME(_searchField,"_searchField");
	HX_MARK_MEMBER_NAME(_lastSearchTerm,"_lastSearchTerm");
	 ::haxe::ui::components::ButtonEvents_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DropDownEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dropdown,"_dropdown");
	HX_VISIT_MEMBER_NAME(_overlay,"_overlay");
	HX_VISIT_MEMBER_NAME(_wrapper,"_wrapper");
	HX_VISIT_MEMBER_NAME(_searchField,"_searchField");
	HX_VISIT_MEMBER_NAME(_lastSearchTerm,"_lastSearchTerm");
	 ::haxe::ui::components::ButtonEvents_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DropDownEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"_overlay") ) { return ::hx::Val( _overlay ); }
		if (HX_FIELD_EQ(inName,"_wrapper") ) { return ::hx::Val( _wrapper ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { return ::hx::Val( _dropdown ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"searchField") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_searchField() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseClick") ) { return ::hx::Val( onMouseClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"showDropDown") ) { return ::hx::Val( showDropDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"_searchField") ) { return ::hx::Val( _searchField ); }
		if (HX_FIELD_EQ(inName,"hideDropDown") ) { return ::hx::Val( hideDropDown_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onSearchChange") ) { return ::hx::Val( onSearchChange_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onDropDownMoved") ) { return ::hx::Val( onDropDownMoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_searchField") ) { return ::hx::Val( get_searchField_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_searchField") ) { return ::hx::Val( set_searchField_dyn() ); }
		if (HX_FIELD_EQ(inName,"_lastSearchTerm") ) { return ::hx::Val( _lastSearchTerm ); }
		if (HX_FIELD_EQ(inName,"dispatchChanged") ) { return ::hx::Val( dispatchChanged_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createSearchField") ) { return ::hx::Val( createSearchField_dyn() ); }
		if (HX_FIELD_EQ(inName,"onScreenMouseDown") ) { return ::hx::Val( onScreenMouseDown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DropDownEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_overlay") ) { _overlay=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wrapper") ) { _wrapper=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dropdown") ) { _dropdown=inValue.Cast<  ::haxe::ui::components::DropDown >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"searchField") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_searchField(inValue.Cast<  ::haxe::ui::components::TextField >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_searchField") ) { _searchField=inValue.Cast<  ::haxe::ui::components::TextField >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lastSearchTerm") ) { _lastSearchTerm=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropDownEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dropdown",70,6b,c5,44));
	outFields->push(HX_("_overlay",11,9d,c8,e2));
	outFields->push(HX_("_wrapper",d4,2e,1d,47));
	outFields->push(HX_("_searchField",33,3a,f0,ca));
	outFields->push(HX_("searchField",32,8c,e6,64));
	outFields->push(HX_("_lastSearchTerm",89,45,19,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropDownEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::DropDown */ ,(int)offsetof(DropDownEvents_obj,_dropdown),HX_("_dropdown",70,6b,c5,44)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(DropDownEvents_obj,_overlay),HX_("_overlay",11,9d,c8,e2)},
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(DropDownEvents_obj,_wrapper),HX_("_wrapper",d4,2e,1d,47)},
	{::hx::fsObject /*  ::haxe::ui::components::TextField */ ,(int)offsetof(DropDownEvents_obj,_searchField),HX_("_searchField",33,3a,f0,ca)},
	{::hx::fsString,(int)offsetof(DropDownEvents_obj,_lastSearchTerm),HX_("_lastSearchTerm",89,45,19,37)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DropDownEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String DropDownEvents_obj_sMemberFields[] = {
	HX_("_dropdown",70,6b,c5,44),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onClick",a9,1a,9c,de),
	HX_("onMouseClick",e2,11,6f,3e),
	HX_("_overlay",11,9d,c8,e2),
	HX_("_wrapper",d4,2e,1d,47),
	HX_("showDropDown",4e,f6,95,13),
	HX_("onDropDownMoved",a3,b1,47,d3),
	HX_("createSearchField",96,66,87,b7),
	HX_("_searchField",33,3a,f0,ca),
	HX_("get_searchField",c9,43,c8,25),
	HX_("set_searchField",d5,c0,93,21),
	HX_("_lastSearchTerm",89,45,19,37),
	HX_("onSearchChange",b7,82,a7,45),
	HX_("hideDropDown",13,23,0e,a9),
	HX_("onScreenMouseDown",bc,49,99,fd),
	HX_("dispatchChanged",5a,b5,96,84),
	HX_("release",c7,85,ed,58),
	::String(null()) };

::hx::Class DropDownEvents_obj::__mClass;

void DropDownEvents_obj::__register()
{
	DropDownEvents_obj _hx_dummy;
	DropDownEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.DropDownEvents",50,71,1d,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropDownEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropDownEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDownEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDownEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
