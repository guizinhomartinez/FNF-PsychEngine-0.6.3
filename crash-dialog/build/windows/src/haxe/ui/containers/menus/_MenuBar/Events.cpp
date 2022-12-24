#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_Menu
#include <haxe/ui/containers/menus/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuBar
#include <haxe/ui/containers/menus/MenuBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvent
#include <haxe/ui/containers/menus/MenuEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvents
#include <haxe/ui/containers/menus/MenuEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuBar_Builder
#include <haxe/ui/containers/menus/_MenuBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuBar_Events
#include <haxe/ui/containers/menus/_MenuBar/Events.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_57_new,"haxe.ui.containers.menus._MenuBar.Events","new",0xe342d6e0,"haxe.ui.containers.menus._MenuBar.Events.new","haxe/ui/containers/menus/MenuBar.hx",57,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_62_register,"haxe.ui.containers.menus._MenuBar.Events","register",0x3d290fe3,"haxe.ui.containers.menus._MenuBar.Events.register","haxe/ui/containers/menus/MenuBar.hx",62,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_74_unregister,"haxe.ui.containers.menus._MenuBar.Events","unregister",0x073a573c,"haxe.ui.containers.menus._MenuBar.Events.unregister","haxe/ui/containers/menus/MenuBar.hx",74,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_82_onCompleteButton,"haxe.ui.containers.menus._MenuBar.Events","onCompleteButton",0xc7e49e8a,"haxe.ui.containers.menus._MenuBar.Events.onCompleteButton","haxe/ui/containers/menus/MenuBar.hx",82,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_88_onButtonClick,"haxe.ui.containers.menus._MenuBar.Events","onButtonClick",0x225b8097,"haxe.ui.containers.menus._MenuBar.Events.onButtonClick","haxe/ui/containers/menus/MenuBar.hx",88,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_109_onButtonOver,"haxe.ui.containers.menus._MenuBar.Events","onButtonOver",0x372ecbe5,"haxe.ui.containers.menus._MenuBar.Events.onButtonOver","haxe/ui/containers/menus/MenuBar.hx",109,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_124_showMenu,"haxe.ui.containers.menus._MenuBar.Events","showMenu",0x1c6972bc,"haxe.ui.containers.menus._MenuBar.Events.showMenu","haxe/ui/containers/menus/MenuBar.hx",124,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_214_hideCurrentMenu,"haxe.ui.containers.menus._MenuBar.Events","hideCurrentMenu",0x64c3db56,"haxe.ui.containers.menus._MenuBar.Events.hideCurrentMenu","haxe/ui/containers/menus/MenuBar.hx",214,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_236_onMenuClose,"haxe.ui.containers.menus._MenuBar.Events","onMenuClose",0x1097eafa,"haxe.ui.containers.menus._MenuBar.Events.onMenuClose","haxe/ui/containers/menus/MenuBar.hx",236,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8e5f68d90f0657cf_243_onMenuSelected,"haxe.ui.containers.menus._MenuBar.Events","onMenuSelected",0xa55e4c59,"haxe.ui.containers.menus._MenuBar.Events.onMenuSelected","haxe/ui/containers/menus/MenuBar.hx",243,0x144ebed0)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuBar{

void Events_obj::__construct( ::haxe::ui::containers::menus::MenuBar menubar){
            	HX_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_57_new)
HXLINE(  58)		super::__construct(menubar);
HXLINE(  59)		this->_menubar = menubar;
            	}

Dynamic Events_obj::__CreateEmpty() { return new Events_obj; }

void *Events_obj::_hx_vtable = 0;

Dynamic Events_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Events_obj > _hx_result = new Events_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Events_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x13e9ff02;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_62_register)
HXLINE(  63)		 ::haxe::ui::containers::menus::_MenuBar::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_MenuBar::Builder >::cast(this->_menubar->_compositeBuilder);
HXLINE(  64)		{
HXLINE(  64)			int _g = 0;
HXDLIN(  64)			::Array< ::Dynamic> _g1 = builder->_buttons;
HXDLIN(  64)			while((_g < _g1->length)){
HXLINE(  64)				 ::haxe::ui::components::Button button = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN(  64)				_g = (_g + 1);
HXLINE(  65)				if (!(button->hasEvent(HX_("click",48,7c,5e,48),this->onButtonClick_dyn()))) {
HXLINE(  66)					button->registerEvent(HX_("click",48,7c,5e,48),this->onButtonClick_dyn(),null());
            				}
HXLINE(  68)				if (!(button->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onButtonOver_dyn()))) {
HXLINE(  69)					button->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onButtonOver_dyn(),null());
            				}
            			}
            		}
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_74_unregister)
HXLINE(  75)		 ::haxe::ui::containers::menus::_MenuBar::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_MenuBar::Builder >::cast(this->_menubar->_compositeBuilder);
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			::Array< ::Dynamic> _g1 = builder->_buttons;
HXDLIN(  76)			while((_g < _g1->length)){
HXLINE(  76)				 ::haxe::ui::components::Button button = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN(  76)				_g = (_g + 1);
HXLINE(  77)				button->unregisterEvent(HX_("click",48,7c,5e,48),this->onButtonClick_dyn());
HXLINE(  78)				button->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onButtonOver_dyn());
            			}
            		}
            	}


void Events_obj::onCompleteButton( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_82_onCompleteButton)
HXLINE(  83)		 ::haxe::ui::components::Button target = ::hx::TCast<  ::haxe::ui::components::Button >::cast(event->target);
HXLINE(  84)		target->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onCompleteButton_dyn());
HXLINE(  85)		this->hideCurrentMenu();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onCompleteButton,(void))

void Events_obj::onButtonClick( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_88_onButtonClick)
HXLINE(  89)		 ::haxe::ui::containers::menus::_MenuBar::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_MenuBar::Builder >::cast(this->_menubar->_compositeBuilder);
HXLINE(  90)		 ::haxe::ui::components::Button target = ::hx::TCast<  ::haxe::ui::components::Button >::cast(event->target);
HXLINE(  91)		int index = builder->_buttons->indexOf(target,null());
HXLINE(  92)		if ((target->get_toggle() == false)) {
HXLINE(  93)			 ::haxe::ui::containers::menus::Menu menu = builder->_menus->__get(index).StaticCast<  ::haxe::ui::containers::menus::Menu >();
HXLINE(  94)			 ::haxe::ui::containers::menus::MenuEvent newEvent =  ::haxe::ui::containers::menus::MenuEvent_obj::__alloc( HX_CTX ,HX_("menuselected",fa,a6,03,90),null(),null());
HXLINE(  95)			newEvent->menu = menu;
HXLINE(  96)			this->_menubar->dispatch(newEvent);
HXLINE(  97)			target->registerEvent(HX_("mouseout",89,2f,36,a4),this->onCompleteButton_dyn(),null());
HXLINE(  98)			menu->dispatch( ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("click",48,7c,5e,48)));
HXLINE(  99)			return;
            		}
HXLINE( 102)		if ((target->get_selected() == true)) {
HXLINE( 103)			this->showMenu(index);
            		}
            		else {
HXLINE( 104)			if (::hx::IsNotNull( this->_currentButton )) {
HXLINE( 105)				this->hideCurrentMenu();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onButtonClick,(void))

void Events_obj::onButtonOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_109_onButtonOver)
HXLINE( 110)		if (::hx::IsNull( this->_currentMenu )) {
HXLINE( 111)			return;
            		}
HXLINE( 114)		 ::haxe::ui::containers::menus::_MenuBar::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_MenuBar::Builder >::cast(this->_menubar->_compositeBuilder);
HXLINE( 115)		 ::haxe::ui::components::Button target = ::hx::TCast<  ::haxe::ui::components::Button >::cast(event->target);
HXLINE( 116)		int index = builder->_buttons->indexOf(target,null());
HXLINE( 117)		 ::haxe::ui::containers::menus::Menu menu = builder->_menus->__get(index).StaticCast<  ::haxe::ui::containers::menus::Menu >();
HXLINE( 119)		if (::hx::IsInstanceNotEq( menu,this->_currentMenu )) {
HXLINE( 120)			this->showMenu(index);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onButtonOver,(void))

void Events_obj::showMenu(int index){
            	HX_GC_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_124_showMenu)
HXLINE( 125)		 ::haxe::ui::containers::menus::_MenuBar::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_MenuBar::Builder >::cast(this->_menubar->_compositeBuilder);
HXLINE( 126)		 ::haxe::ui::containers::menus::Menu menu = builder->_menus->__get(index).StaticCast<  ::haxe::ui::containers::menus::Menu >();
HXLINE( 127)		::Array< ::Dynamic> hasChildren;
HXDLIN( 127)		if (::hx::IsNull( menu->_children )) {
HXLINE( 127)			hasChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 127)			hasChildren = menu->_children;
            		}
HXDLIN( 127)		bool hasChildren1 = (hasChildren->length > 0);
HXLINE( 129)		 ::haxe::ui::components::Button target = builder->_buttons->__get(index).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 130)		if (::hx::IsInstanceEq( this->_currentMenu,menu )) {
HXLINE( 131)			return;
            		}
HXLINE( 134)		{
HXLINE( 134)			int _g = 0;
HXDLIN( 134)			::Array< ::Dynamic> _g1 = builder->_buttons;
HXDLIN( 134)			while((_g < _g1->length)){
HXLINE( 134)				 ::haxe::ui::components::Button button = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN( 134)				_g = (_g + 1);
HXLINE( 135)				if (::hx::IsInstanceNotEq( button,target )) {
HXLINE( 136)					button->set_selected(false);
            				}
            			}
            		}
HXLINE( 140)		target->set_selected(true);
HXLINE( 142)		this->hideCurrentMenu();
HXLINE( 144)		::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(menu->_internalEvents)->button = target;
HXLINE( 145)		if ((menu->hasEvent(HX_("close",b8,17,63,48),this->onMenuClose_dyn()) == false)) {
HXLINE( 146)			menu->registerEvent(HX_("close",b8,17,63,48),this->onMenuClose_dyn(),null());
            		}
HXLINE( 149)		bool rtl = false;
HXLINE( 150)		if ((hasChildren1 == true)) {
HXLINE( 151)			 ::haxe::ui::geom::Point componentOffset = target->getComponentOffset();
HXLINE( 152)			Float left = target->get_screenLeft();
HXDLIN( 152)			Float left1 = (left + componentOffset->x);
HXLINE( 153)			Float marginTop = ( (Float)(0) );
HXLINE( 154)			bool _hx_tmp;
HXDLIN( 154)			if (::hx::IsNotNull( menu->get_style() )) {
HXLINE( 154)				_hx_tmp = ::hx::IsNotNull( menu->get_style()->marginTop );
            			}
            			else {
HXLINE( 154)				_hx_tmp = false;
            			}
HXDLIN( 154)			if (_hx_tmp) {
HXLINE( 155)				marginTop = ( (Float)(menu->get_style()->marginTop) );
            			}
HXLINE( 157)			Float top = target->get_screenTop();
HXDLIN( 157)			Float top1 = target->get_actualComponentHeight();
HXDLIN( 157)			Float top2 = (top + (top1 - ::haxe::ui::Toolkit_obj::get_scaleY()));
HXDLIN( 157)			Float top3 = ((top2 + componentOffset->y) + marginTop);
HXLINE( 158)			menu->set_menuStyleNames(this->_menubar->get_menuStyleNames());
HXLINE( 159)			menu->addClasses(::Array_obj< ::String >::__new(2)->init(0,this->_menubar->get_menuStyleNames())->init(1,HX_("expanded",39,11,cf,f9)),null(),null());
HXLINE( 160)			if (::hx::IsNull( menu->findComponent(HX_("menu-filler",de,29,53,58),null(),false,null()) )) {
HXLINE( 161)				 ::haxe::ui::core::Component filler =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 162)				filler->set_horizontalAlign(HX_("right",dc,0b,64,e9));
HXLINE( 163)				filler->set_includeInLayout(false);
HXLINE( 164)				filler->addClass(HX_("menu-filler",de,29,53,58),null(),null());
HXLINE( 165)				filler->set_id(HX_("menu-filler",de,29,53,58));
HXLINE( 166)				menu->addComponent(filler);
            			}
HXLINE( 168)			menu->show();
HXLINE( 169)			::haxe::ui::core::Screen_obj::get_instance()->addComponent(menu);
HXLINE( 170)			menu->syncComponentValidation(null());
HXLINE( 172)			Float _hx_tmp1 = (left1 + menu->get_actualComponentWidth());
HXDLIN( 172)			if ((_hx_tmp1 > ::haxe::ui::core::Screen_obj::get_instance()->get_actualWidth())) {
HXLINE( 173)				Float left = target->get_screenLeft();
HXDLIN( 173)				Float left2 = (left - menu->get_actualComponentWidth());
HXDLIN( 173)				left1 = (left2 + target->get_actualComponentWidth());
HXLINE( 174)				rtl = true;
            			}
HXLINE( 177)			menu->set_left(left1);
HXLINE( 178)			menu->set_top((top3 - ::haxe::ui::Toolkit_obj::get_scaleY()));
            		}
HXLINE( 181)		this->_currentButton = target;
HXLINE( 182)		this->_currentMenu = menu;
HXLINE( 185)		if ((hasChildren1 == true)) {
HXLINE( 186)			 ::Dynamic cx = menu->get_width();
HXDLIN( 186)			Float cx1 = (( (Float)(cx) ) - ( (Float)(this->_currentButton->get_width()) ));
HXLINE( 187)			 ::haxe::ui::core::Component filler = menu->findComponent(HX_("menu-filler",de,29,53,58),null(),false,null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 188)			bool _hx_tmp;
HXDLIN( 188)			if ((cx1 > 0)) {
HXLINE( 188)				_hx_tmp = ::hx::IsNotNull( filler );
            			}
            			else {
HXLINE( 188)				_hx_tmp = false;
            			}
HXDLIN( 188)			if (_hx_tmp) {
HXLINE( 189)				cx1 = (cx1 + 1);
HXLINE( 190)				filler->set_width(cx1);
HXLINE( 191)				if ((rtl == false)) {
HXLINE( 192)					filler->set_left((( (Float)(menu->get_width()) ) - cx1));
            				}
HXLINE( 194)				filler->set_hidden(false);
            			}
            			else {
HXLINE( 195)				if (::hx::IsNotNull( filler )) {
HXLINE( 196)					filler->set_hidden(true);
            				}
            			}
HXLINE( 199)			if (!(this->_currentMenu->hasEvent(HX_("menuselected",fa,a6,03,90),this->onMenuSelected_dyn()))) {
HXLINE( 200)				this->_currentMenu->registerEvent(HX_("menuselected",fa,a6,03,90),this->onMenuSelected_dyn(),null());
            			}
            		}
HXLINE( 204)		if ((hasChildren1 == true)) {
HXLINE( 205)			 ::haxe::ui::containers::menus::Menu _hx_tmp = this->_currentMenu;
HXDLIN( 205)			_hx_tmp->dispatch( ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("click",48,7c,5e,48)));
HXLINE( 206)			 ::haxe::ui::containers::menus::MenuEvent menuEvent =  ::haxe::ui::containers::menus::MenuEvent_obj::__alloc( HX_CTX ,HX_("menuopened",88,29,84,cf),null(),null());
HXLINE( 207)			menuEvent->menu = this->_currentMenu;
HXLINE( 208)			this->_currentMenu->dispatch(menuEvent);
HXLINE( 209)			this->dispatch(menuEvent);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,showMenu,(void))

void Events_obj::hideCurrentMenu(){
            	HX_GC_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_214_hideCurrentMenu)
HXDLIN( 214)		if (::hx::IsNotNull( this->_currentMenu )) {
HXLINE( 215)			 ::haxe::ui::containers::menus::_MenuBar::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_MenuBar::Builder >::cast(this->_menubar->_compositeBuilder);
HXLINE( 216)			{
HXLINE( 216)				int _g = 0;
HXDLIN( 216)				::Array< ::Dynamic> _g1 = builder->_buttons;
HXDLIN( 216)				while((_g < _g1->length)){
HXLINE( 216)					 ::haxe::ui::components::Button button = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN( 216)					_g = (_g + 1);
HXLINE( 217)					if ((button->classes->indexOf(HX_("menubar-button-no-children-active",8a,a2,63,97),null()) != -1)) {
HXLINE( 218)						button->swapClass(HX_("menubar-button-no-children",49,4a,88,b3),HX_("menubar-button-no-children-active",8a,a2,63,97),null(),null());
            					}
            				}
            			}
HXLINE( 222)			 ::haxe::ui::containers::menus::MenuEvent menuEvent =  ::haxe::ui::containers::menus::MenuEvent_obj::__alloc( HX_CTX ,HX_("menuclosed",8b,70,41,bc),null(),null());
HXLINE( 223)			menuEvent->menu = this->_currentMenu;
HXLINE( 224)			this->_currentMenu->dispatch(menuEvent);
HXLINE( 225)			this->dispatch(menuEvent);
HXLINE( 227)			this->_currentMenu->unregisterEvent(HX_("menuselected",fa,a6,03,90),this->onMenuSelected_dyn());
HXLINE( 228)			this->_currentMenu->hide();
HXLINE( 229)			this->_currentButton->set_selected(false);
HXLINE( 230)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->_currentMenu,false);
HXLINE( 231)			this->_currentButton = null();
HXLINE( 232)			this->_currentMenu = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,hideCurrentMenu,(void))

void Events_obj::onMenuClose( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_236_onMenuClose)
HXLINE( 237)		 ::haxe::ui::containers::menus::Menu menu = ::hx::TCast<  ::haxe::ui::containers::menus::Menu >::cast(event->target);
HXLINE( 238)		if (::hx::IsInstanceEq( this->_currentMenu,menu )) {
HXLINE( 239)			this->hideCurrentMenu();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMenuClose,(void))

void Events_obj::onMenuSelected( ::haxe::ui::containers::menus::MenuEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_8e5f68d90f0657cf_243_onMenuSelected)
HXLINE( 244)		 ::haxe::ui::containers::menus::MenuEvent newEvent =  ::haxe::ui::containers::menus::MenuEvent_obj::__alloc( HX_CTX ,HX_("menuselected",fa,a6,03,90),null(),null());
HXLINE( 245)		newEvent->menu = event->menu;
HXLINE( 246)		newEvent->menuItem = event->menuItem;
HXLINE( 247)		this->_menubar->dispatch(newEvent);
HXLINE( 248)		this->hideCurrentMenu();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMenuSelected,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::containers::menus::MenuBar menubar) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(menubar);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::menus::MenuBar menubar) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.containers.menus._MenuBar.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(menubar);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_menubar,"_menubar");
	HX_MARK_MEMBER_NAME(_currentMenu,"_currentMenu");
	HX_MARK_MEMBER_NAME(_currentButton,"_currentButton");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_menubar,"_menubar");
	HX_VISIT_MEMBER_NAME(_currentMenu,"_currentMenu");
	HX_VISIT_MEMBER_NAME(_currentButton,"_currentButton");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_menubar") ) { return ::hx::Val( _menubar ); }
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"showMenu") ) { return ::hx::Val( showMenu_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMenuClose") ) { return ::hx::Val( onMenuClose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentMenu") ) { return ::hx::Val( _currentMenu ); }
		if (HX_FIELD_EQ(inName,"onButtonOver") ) { return ::hx::Val( onButtonOver_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onButtonClick") ) { return ::hx::Val( onButtonClick_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentButton") ) { return ::hx::Val( _currentButton ); }
		if (HX_FIELD_EQ(inName,"onMenuSelected") ) { return ::hx::Val( onMenuSelected_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hideCurrentMenu") ) { return ::hx::Val( hideCurrentMenu_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onCompleteButton") ) { return ::hx::Val( onCompleteButton_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_menubar") ) { _menubar=inValue.Cast<  ::haxe::ui::containers::menus::MenuBar >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentMenu") ) { _currentMenu=inValue.Cast<  ::haxe::ui::containers::menus::Menu >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentButton") ) { _currentButton=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_menubar",15,d3,1b,f4));
	outFields->push(HX_("_currentMenu",79,cc,f4,e6));
	outFields->push(HX_("_currentButton",4c,d3,8e,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::menus::MenuBar */ ,(int)offsetof(Events_obj,_menubar),HX_("_menubar",15,d3,1b,f4)},
	{::hx::fsObject /*  ::haxe::ui::containers::menus::Menu */ ,(int)offsetof(Events_obj,_currentMenu),HX_("_currentMenu",79,cc,f4,e6)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(Events_obj,_currentButton),HX_("_currentButton",4c,d3,8e,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_menubar",15,d3,1b,f4),
	HX_("_currentMenu",79,cc,f4,e6),
	HX_("_currentButton",4c,d3,8e,fb),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onCompleteButton",0a,b5,95,ad),
	HX_("onButtonClick",17,5a,f3,f8),
	HX_("onButtonOver",65,a2,f2,8b),
	HX_("showMenu",3c,09,e0,af),
	HX_("hideCurrentMenu",d6,14,25,f4),
	HX_("onMenuClose",7a,64,7e,05),
	HX_("onMenuSelected",d9,c2,a4,93),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._MenuBar.Events",ee,26,1e,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Events_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Events_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Events_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Events_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
} // end namespace _MenuBar
