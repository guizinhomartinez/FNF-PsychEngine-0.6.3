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
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvent
#include <haxe/ui/containers/menus/MenuEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvents
#include <haxe/ui/containers/menus/MenuEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__Menu_Builder
#include <haxe/ui/containers/menus/_Menu/Builder.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_df76b766e179ab3e_70_new,"haxe.ui.containers.menus.MenuEvents","new",0x7dff5b6e,"haxe.ui.containers.menus.MenuEvents.new","haxe/ui/containers/menus/Menu.hx",70,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_83_register,"haxe.ui.containers.menus.MenuEvents","register",0x1b3b4895,"haxe.ui.containers.menus.MenuEvents.register","haxe/ui/containers/menus/Menu.hx",83,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_114_unregister,"haxe.ui.containers.menus.MenuEvents","unregister",0x38d1a06e,"haxe.ui.containers.menus.MenuEvents.unregister","haxe/ui/containers/menus/Menu.hx",114,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_129_onMouseOver,"haxe.ui.containers.menus.MenuEvents","onMouseOver",0x56327608,"haxe.ui.containers.menus.MenuEvents.onMouseOver","haxe/ui/containers/menus/Menu.hx",129,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_133_onMouseOut,"haxe.ui.containers.menus.MenuEvents","onMouseOut",0x6442ce5a,"haxe.ui.containers.menus.MenuEvents.onMouseOut","haxe/ui/containers/menus/Menu.hx",133,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_136_onItemClick,"haxe.ui.containers.menus.MenuEvents","onItemClick",0xa86f0e24,"haxe.ui.containers.menus.MenuEvents.onItemClick","haxe/ui/containers/menus/Menu.hx",136,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_150_onItemMouseOver,"haxe.ui.containers.menus.MenuEvents","onItemMouseOver",0x6461f9f5,"haxe.ui.containers.menus.MenuEvents.onItemMouseOver","haxe/ui/containers/menus/Menu.hx",150,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_170_onItemMouseOut,"haxe.ui.containers.menus.MenuEvents","onItemMouseOut",0x1768e70d,"haxe.ui.containers.menus.MenuEvents.onItemMouseOut","haxe/ui/containers/menus/Menu.hx",170,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_178_showSubMenu,"haxe.ui.containers.menus.MenuEvents","showSubMenu",0x30dac0d0,"haxe.ui.containers.menus.MenuEvents.showSubMenu","haxe/ui/containers/menus/Menu.hx",178,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_198_hideMenu,"haxe.ui.containers.menus.MenuEvents","hideMenu",0xebc2d1b3,"haxe.ui.containers.menus.MenuEvents.hideMenu","haxe/ui/containers/menus/Menu.hx",198,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_216_hideCurrentSubMenu,"haxe.ui.containers.menus.MenuEvents","hideCurrentSubMenu",0x38a23d1a,"haxe.ui.containers.menus.MenuEvents.hideCurrentSubMenu","haxe/ui/containers/menus/Menu.hx",216,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_231_onHidden,"haxe.ui.containers.menus.MenuEvents","onHidden",0x76de981b,"haxe.ui.containers.menus.MenuEvents.onHidden","haxe/ui/containers/menus/Menu.hx",231,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_239_onShown,"haxe.ui.containers.menus.MenuEvents","onShown",0x03ce5140,"haxe.ui.containers.menus.MenuEvents.onShown","haxe/ui/containers/menus/Menu.hx",239,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_242_findRootMenu,"haxe.ui.containers.menus.MenuEvents","findRootMenu",0xb52ba96c,"haxe.ui.containers.menus.MenuEvents.findRootMenu","haxe/ui/containers/menus/Menu.hx",242,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_259_addScreenMouseDown,"haxe.ui.containers.menus.MenuEvents","addScreenMouseDown",0x32c63fac,"haxe.ui.containers.menus.MenuEvents.addScreenMouseDown","haxe/ui/containers/menus/Menu.hx",259,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_269_removeScreenMouseDown,"haxe.ui.containers.menus.MenuEvents","removeScreenMouseDown",0xdaa2c6c5,"haxe.ui.containers.menus.MenuEvents.removeScreenMouseDown","haxe/ui/containers/menus/Menu.hx",269,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_277_onScreenMouseDown,"haxe.ui.containers.menus.MenuEvents","onScreenMouseDown",0xb604d14a,"haxe.ui.containers.menus.MenuEvents.onScreenMouseDown","haxe/ui/containers/menus/Menu.hx",277,0x5a36fdb9)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{

void MenuEvents_obj::__construct( ::haxe::ui::containers::menus::Menu menu){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_70_new)
HXLINE( 258)		this->hasScreenMouseDown = false;
HXLINE( 127)		this->_over = false;
HXLINE(  76)		this->button = null();
HXLINE(  74)		this->parentMenu = null();
HXLINE(  73)		this->currentSubMenu = null();
HXLINE(  72)		this->_currentItem = null();
HXLINE(  79)		super::__construct(menu);
HXLINE(  80)		this->_menu = menu;
            	}

Dynamic MenuEvents_obj::__CreateEmpty() { return new MenuEvents_obj; }

void *MenuEvents_obj::_hx_vtable = 0;

Dynamic MenuEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuEvents_obj > _hx_result = new MenuEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x261a4bfc;
	}
}

void MenuEvents_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_83_register)
HXLINE(  84)		if (!(this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn()))) {
HXLINE(  85)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn(),null());
            		}
HXLINE(  87)		if (!(this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn()))) {
HXLINE(  88)			this->registerEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn(),null());
            		}
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			 ::haxe::ui::containers::menus::Menu _this = this->_menu;
HXDLIN(  91)			::Array< ::Dynamic> _g1;
HXDLIN(  91)			if (::hx::IsNull( _this->_children )) {
HXLINE(  91)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  91)				_g1 = _this->_children;
            			}
HXDLIN(  91)			while((_g < _g1->length)){
HXLINE(  91)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  91)				_g = (_g + 1);
HXLINE(  92)				if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::menus::MenuItem >())) {
HXLINE(  93)					 ::haxe::ui::containers::menus::MenuItem item = ::hx::TCast<  ::haxe::ui::containers::menus::MenuItem >::cast(child);
HXLINE(  94)					if (!(item->hasEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn()))) {
HXLINE(  95)						item->registerEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn(),null());
            					}
HXLINE(  97)					if (!(item->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onItemMouseOver_dyn()))) {
HXLINE(  98)						item->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onItemMouseOver_dyn(),null());
            					}
HXLINE( 100)					if (!(item->hasEvent(HX_("mouseout",89,2f,36,a4),this->onItemMouseOut_dyn()))) {
HXLINE( 101)						item->registerEvent(HX_("mouseout",89,2f,36,a4),this->onItemMouseOut_dyn(),null());
            					}
            				}
            			}
            		}
HXLINE( 106)		if (!(this->hasEvent(HX_("hidden",6a,ff,95,4c),this->onHidden_dyn()))) {
HXLINE( 107)			this->registerEvent(HX_("hidden",6a,ff,95,4c),this->onHidden_dyn(),null());
            		}
HXLINE( 109)		if (!(this->hasEvent(HX_("shown",d1,88,27,7c),this->onShown_dyn()))) {
HXLINE( 110)			this->registerEvent(HX_("shown",d1,88,27,7c),this->onShown_dyn(),null());
            		}
            	}


void MenuEvents_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_114_unregister)
HXLINE( 115)		this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn());
HXLINE( 116)		this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn());
HXLINE( 117)		{
HXLINE( 117)			int _g = 0;
HXDLIN( 117)			 ::haxe::ui::containers::menus::Menu _this = this->_menu;
HXDLIN( 117)			::Array< ::Dynamic> _g1;
HXDLIN( 117)			if (::hx::IsNull( _this->_children )) {
HXLINE( 117)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 117)				_g1 = _this->_children;
            			}
HXDLIN( 117)			while((_g < _g1->length)){
HXLINE( 117)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 117)				_g = (_g + 1);
HXLINE( 118)				child->unregisterEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn());
HXLINE( 119)				child->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onItemMouseOver_dyn());
HXLINE( 120)				child->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onItemMouseOut_dyn());
            			}
            		}
HXLINE( 123)		this->unregisterEvent(HX_("hidden",6a,ff,95,4c),this->onHidden_dyn());
HXLINE( 124)		this->unregisterEvent(HX_("shown",d1,88,27,7c),this->onShown_dyn());
            	}


void MenuEvents_obj::onMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_129_onMouseOver)
HXDLIN( 129)		this->_over = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onMouseOver,(void))

void MenuEvents_obj::onMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_133_onMouseOut)
HXDLIN( 133)		this->_over = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onMouseOut,(void))

void MenuEvents_obj::onItemClick( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_df76b766e179ab3e_136_onItemClick)
HXLINE( 137)		 ::haxe::ui::containers::menus::MenuItem item = ::hx::TCast<  ::haxe::ui::containers::menus::MenuItem >::cast(event->target);
HXLINE( 138)		if (!(item->get_expandable())) {
HXLINE( 139)			 ::haxe::ui::containers::menus::MenuEvent event =  ::haxe::ui::containers::menus::MenuEvent_obj::__alloc( HX_CTX ,HX_("menuselected",fa,a6,03,90),null(),null());
HXLINE( 140)			event->menu = this->_menu;
HXLINE( 141)			event->menuItem = item;
HXLINE( 142)			this->findRootMenu()->dispatch(event);
HXLINE( 144)			this->hideMenu();
HXLINE( 145)			this->removeScreenMouseDown();
HXLINE( 146)			 ::haxe::ui::containers::menus::Menu _hx_tmp = this->_menu;
HXDLIN( 146)			_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("close",b8,17,63,48),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onItemClick,(void))

void MenuEvents_obj::onItemMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_150_onItemMouseOver)
HXLINE( 151)		 ::haxe::ui::containers::menus::_Menu::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_Menu::Builder >::cast(this->_menu->_compositeBuilder);
HXLINE( 152)		 ::haxe::ds::ObjectMap subMenus = builder->_subMenus;
HXLINE( 153)		 ::haxe::ui::containers::menus::MenuItem item = ::hx::TCast<  ::haxe::ui::containers::menus::MenuItem >::cast(event->target);
HXLINE( 155)		{
HXLINE( 155)			int _g = 0;
HXDLIN( 155)			 ::haxe::ui::containers::menus::Menu _this = this->_menu;
HXDLIN( 155)			::Array< ::Dynamic> _g1;
HXDLIN( 155)			if (::hx::IsNull( _this->_children )) {
HXLINE( 155)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 155)				_g1 = _this->_children;
            			}
HXDLIN( 155)			while((_g < _g1->length)){
HXLINE( 155)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 155)				_g = (_g + 1);
HXLINE( 156)				if (::hx::IsInstanceNotEq( child,item )) {
HXLINE( 157)					child->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            				}
            			}
            		}
HXLINE( 161)		if (::hx::IsNotNull( ( ( ::haxe::ui::containers::menus::Menu)(subMenus->get(item)) ) )) {
HXLINE( 162)			this->_currentItem = item;
HXLINE( 163)			this->showSubMenu(( ( ::haxe::ui::containers::menus::Menu)(subMenus->get(item)) ),item);
            		}
            		else {
HXLINE( 165)			this->hideCurrentSubMenu();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onItemMouseOver,(void))

void MenuEvents_obj::onItemMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_170_onItemMouseOut)
HXDLIN( 170)		if (::hx::IsNotNull( this->currentSubMenu )) {
HXLINE( 171)			this->_currentItem->addClass(HX_(":hover",42,d3,17,5c),true,true);
HXLINE( 172)			return;
            		}
            		else {
HXLINE( 174)			this->_currentItem = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onItemMouseOut,(void))

void MenuEvents_obj::showSubMenu( ::haxe::ui::containers::menus::Menu subMenu, ::haxe::ui::containers::menus::MenuItem source){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_178_showSubMenu)
HXLINE( 179)		this->hideCurrentSubMenu();
HXLINE( 180)		subMenu->set_menuStyleNames(this->_menu->get_menuStyleNames());
HXLINE( 181)		subMenu->addClass(this->_menu->get_menuStyleNames(),null(),null());
HXLINE( 182)		 ::haxe::ui::geom::Point componentOffset = source->getComponentOffset();
HXLINE( 183)		Float left = source->get_screenLeft();
HXDLIN( 183)		Float left1 = (left + source->get_actualComponentWidth());
HXDLIN( 183)		Float left2 = (left1 + componentOffset->x);
HXLINE( 184)		Float top = source->get_screenTop();
HXLINE( 185)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(subMenu);
HXLINE( 186)		subMenu->syncComponentValidation(null());
HXLINE( 188)		Float _hx_tmp = (left2 + subMenu->get_actualComponentWidth());
HXDLIN( 188)		if ((_hx_tmp > ::haxe::ui::core::Screen_obj::get_instance()->get_width())) {
HXLINE( 189)			Float left = source->get_screenLeft();
HXDLIN( 189)			left2 = (left - subMenu->get_actualComponentWidth());
            		}
HXLINE( 192)		subMenu->set_left(left2);
HXLINE( 193)		subMenu->set_top(top);
HXLINE( 195)		this->currentSubMenu = subMenu;
            	}


HX_DEFINE_DYNAMIC_FUNC2(MenuEvents_obj,showSubMenu,(void))

void MenuEvents_obj::hideMenu(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_198_hideMenu)
HXLINE( 199)		 ::haxe::ui::containers::menus::Menu root = this->findRootMenu();
HXLINE( 200)		if (::hx::IsNull( root )) {
HXLINE( 201)			return;
            		}
HXLINE( 204)		 ::haxe::ui::containers::menus::MenuEvents events = ::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(root->_internalEvents);
HXLINE( 206)		if (::hx::IsNull( events->button )) {
HXLINE( 207)			{
HXLINE( 207)				int _g = 0;
HXDLIN( 207)				::Array< ::Dynamic> _g1;
HXDLIN( 207)				if (::hx::IsNull( root->_children )) {
HXLINE( 207)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 207)					_g1 = root->_children;
            				}
HXDLIN( 207)				while((_g < _g1->length)){
HXLINE( 207)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 207)					_g = (_g + 1);
HXLINE( 208)					child->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            				}
            			}
HXLINE( 211)			events->hideCurrentSubMenu();
HXLINE( 212)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(root,false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuEvents_obj,hideMenu,(void))

void MenuEvents_obj::hideCurrentSubMenu(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_216_hideCurrentSubMenu)
HXLINE( 217)		if (::hx::IsNull( this->currentSubMenu )) {
HXLINE( 218)			return;
            		}
HXLINE( 221)		{
HXLINE( 221)			int _g = 0;
HXDLIN( 221)			 ::haxe::ui::containers::menus::Menu _this = this->currentSubMenu;
HXDLIN( 221)			::Array< ::Dynamic> _g1;
HXDLIN( 221)			if (::hx::IsNull( _this->_children )) {
HXLINE( 221)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 221)				_g1 = _this->_children;
            			}
HXDLIN( 221)			while((_g < _g1->length)){
HXLINE( 221)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 221)				_g = (_g + 1);
HXLINE( 222)				child->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            			}
            		}
HXLINE( 225)		 ::haxe::ui::containers::menus::MenuEvents subMenuEvents = ::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(this->currentSubMenu->_internalEvents);
HXLINE( 226)		subMenuEvents->hideCurrentSubMenu();
HXLINE( 227)		::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->currentSubMenu,false);
HXLINE( 228)		this->currentSubMenu = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuEvents_obj,hideCurrentSubMenu,(void))

void MenuEvents_obj::onHidden( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_231_onHidden)
HXLINE( 232)		{
HXLINE( 232)			int _g = 0;
HXDLIN( 232)			 ::haxe::ui::containers::menus::Menu _this = this->_menu;
HXDLIN( 232)			::Array< ::Dynamic> _g1;
HXDLIN( 232)			if (::hx::IsNull( _this->_children )) {
HXLINE( 232)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 232)				_g1 = _this->_children;
            			}
HXDLIN( 232)			while((_g < _g1->length)){
HXLINE( 232)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 232)				_g = (_g + 1);
HXLINE( 233)				child->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            			}
            		}
HXLINE( 235)		this->hideCurrentSubMenu();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onHidden,(void))

void MenuEvents_obj::onShown( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_239_onShown)
HXDLIN( 239)		this->addScreenMouseDown();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onShown,(void))

 ::haxe::ui::containers::menus::Menu MenuEvents_obj::findRootMenu(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_242_findRootMenu)
HXLINE( 243)		 ::haxe::ui::containers::menus::Menu root = null();
HXLINE( 244)		 ::haxe::ui::containers::menus::Menu ref = this->_menu;
HXLINE( 245)		while(::hx::IsNotNull( ref )){
HXLINE( 246)			 ::haxe::ui::containers::menus::MenuEvents events = ::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(ref->_internalEvents);
HXLINE( 247)			if (::hx::IsNull( events->parentMenu )) {
HXLINE( 248)				root = events->_menu;
HXLINE( 249)				goto _hx_goto_19;
            			}
HXLINE( 252)			ref = events->parentMenu;
            		}
            		_hx_goto_19:;
HXLINE( 255)		return root;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuEvents_obj,findRootMenu,return )

void MenuEvents_obj::addScreenMouseDown(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_259_addScreenMouseDown)
HXLINE( 260)		 ::haxe::ui::containers::menus::Menu root = this->findRootMenu();
HXLINE( 261)		 ::haxe::ui::containers::menus::MenuEvents events = ::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(root->_internalEvents);
HXLINE( 262)		if ((events->hasScreenMouseDown == false)) {
HXLINE( 263)			events->hasScreenMouseDown = true;
HXLINE( 264)			::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn(),null());
HXLINE( 265)			::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("rightmousedown",ab,1d,2b,41),this->onScreenMouseDown_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuEvents_obj,addScreenMouseDown,(void))

void MenuEvents_obj::removeScreenMouseDown(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_269_removeScreenMouseDown)
HXLINE( 270)		 ::haxe::ui::containers::menus::Menu root = this->findRootMenu();
HXLINE( 271)		 ::haxe::ui::containers::menus::MenuEvents events = ::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(root->_internalEvents);
HXLINE( 272)		events->hasScreenMouseDown = false;
HXLINE( 273)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn());
HXLINE( 274)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("rightmousedown",ab,1d,2b,41),this->onScreenMouseDown_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuEvents_obj,removeScreenMouseDown,(void))

void MenuEvents_obj::onScreenMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_df76b766e179ab3e_277_onScreenMouseDown)
HXLINE( 278)		bool close = true;
HXLINE( 279)		if (this->_menu->hitTest(event->screenX,event->screenY,null())) {
HXLINE( 280)			close = false;
            		}
            		else {
HXLINE( 281)			bool _hx_tmp;
HXDLIN( 281)			if (::hx::IsNotNull( this->button )) {
HXLINE( 281)				_hx_tmp = this->button->hitTest(event->screenX,event->screenY,null());
            			}
            			else {
HXLINE( 281)				_hx_tmp = false;
            			}
HXDLIN( 281)			if (_hx_tmp) {
HXLINE( 282)				close = false;
            			}
            			else {
HXLINE( 284)				 ::haxe::ui::containers::menus::Menu ref = this->_menu;
HXLINE( 285)				 ::haxe::ui::containers::menus::MenuEvents refEvents = ::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(ref->_internalEvents);
HXLINE( 286)				 ::haxe::ui::containers::menus::Menu refSubMenu = refEvents->currentSubMenu;
HXLINE( 287)				while(::hx::IsNotNull( refSubMenu )){
HXLINE( 288)					if (refSubMenu->hitTest(event->screenX,event->screenY,null())) {
HXLINE( 289)						close = false;
HXLINE( 290)						goto _hx_goto_23;
            					}
HXLINE( 293)					ref = refSubMenu;
HXLINE( 294)					refEvents = ::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(ref->_internalEvents);
HXLINE( 295)					refSubMenu = refEvents->currentSubMenu;
            				}
            				_hx_goto_23:;
            			}
            		}
HXLINE( 299)		if (close) {
HXLINE( 300)			this->hideMenu();
HXLINE( 301)			this->removeScreenMouseDown();
HXLINE( 302)			 ::haxe::ui::containers::menus::Menu _hx_tmp = this->_menu;
HXDLIN( 302)			_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("close",b8,17,63,48),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onScreenMouseDown,(void))


::hx::ObjectPtr< MenuEvents_obj > MenuEvents_obj::__new( ::haxe::ui::containers::menus::Menu menu) {
	::hx::ObjectPtr< MenuEvents_obj > __this = new MenuEvents_obj();
	__this->__construct(menu);
	return __this;
}

::hx::ObjectPtr< MenuEvents_obj > MenuEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::menus::Menu menu) {
	MenuEvents_obj *__this = (MenuEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuEvents_obj), true, "haxe.ui.containers.menus.MenuEvents"));
	*(void **)__this = MenuEvents_obj::_hx_vtable;
	__this->__construct(menu);
	return __this;
}

MenuEvents_obj::MenuEvents_obj()
{
}

void MenuEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuEvents);
	HX_MARK_MEMBER_NAME(_menu,"_menu");
	HX_MARK_MEMBER_NAME(_currentItem,"_currentItem");
	HX_MARK_MEMBER_NAME(currentSubMenu,"currentSubMenu");
	HX_MARK_MEMBER_NAME(parentMenu,"parentMenu");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(_over,"_over");
	HX_MARK_MEMBER_NAME(hasScreenMouseDown,"hasScreenMouseDown");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_menu,"_menu");
	HX_VISIT_MEMBER_NAME(_currentItem,"_currentItem");
	HX_VISIT_MEMBER_NAME(currentSubMenu,"currentSubMenu");
	HX_VISIT_MEMBER_NAME(parentMenu,"parentMenu");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(_over,"_over");
	HX_VISIT_MEMBER_NAME(hasScreenMouseDown,"hasScreenMouseDown");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { return ::hx::Val( _menu ); }
		if (HX_FIELD_EQ(inName,"_over") ) { return ::hx::Val( _over ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onShown") ) { return ::hx::Val( onShown_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideMenu") ) { return ::hx::Val( hideMenu_dyn() ); }
		if (HX_FIELD_EQ(inName,"onHidden") ) { return ::hx::Val( onHidden_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMenu") ) { return ::hx::Val( parentMenu ); }
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onItemClick") ) { return ::hx::Val( onItemClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"showSubMenu") ) { return ::hx::Val( showSubMenu_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentItem") ) { return ::hx::Val( _currentItem ); }
		if (HX_FIELD_EQ(inName,"findRootMenu") ) { return ::hx::Val( findRootMenu_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentSubMenu") ) { return ::hx::Val( currentSubMenu ); }
		if (HX_FIELD_EQ(inName,"onItemMouseOut") ) { return ::hx::Val( onItemMouseOut_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onItemMouseOver") ) { return ::hx::Val( onItemMouseOver_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onScreenMouseDown") ) { return ::hx::Val( onScreenMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hideCurrentSubMenu") ) { return ::hx::Val( hideCurrentSubMenu_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasScreenMouseDown") ) { return ::hx::Val( hasScreenMouseDown ); }
		if (HX_FIELD_EQ(inName,"addScreenMouseDown") ) { return ::hx::Val( addScreenMouseDown_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeScreenMouseDown") ) { return ::hx::Val( removeScreenMouseDown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { _menu=inValue.Cast<  ::haxe::ui::containers::menus::Menu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_over") ) { _over=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMenu") ) { parentMenu=inValue.Cast<  ::haxe::ui::containers::menus::Menu >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentItem") ) { _currentItem=inValue.Cast<  ::haxe::ui::containers::menus::MenuItem >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentSubMenu") ) { currentSubMenu=inValue.Cast<  ::haxe::ui::containers::menus::Menu >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasScreenMouseDown") ) { hasScreenMouseDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_menu",7e,61,6a,fb));
	outFields->push(HX_("_currentItem",ed,4b,5b,e4));
	outFields->push(HX_("currentSubMenu",06,50,f1,23));
	outFields->push(HX_("parentMenu",e9,53,6b,e7));
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("_over",33,ad,c9,fc));
	outFields->push(HX_("hasScreenMouseDown",e1,a5,cd,30));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::menus::Menu */ ,(int)offsetof(MenuEvents_obj,_menu),HX_("_menu",7e,61,6a,fb)},
	{::hx::fsObject /*  ::haxe::ui::containers::menus::MenuItem */ ,(int)offsetof(MenuEvents_obj,_currentItem),HX_("_currentItem",ed,4b,5b,e4)},
	{::hx::fsObject /*  ::haxe::ui::containers::menus::Menu */ ,(int)offsetof(MenuEvents_obj,currentSubMenu),HX_("currentSubMenu",06,50,f1,23)},
	{::hx::fsObject /*  ::haxe::ui::containers::menus::Menu */ ,(int)offsetof(MenuEvents_obj,parentMenu),HX_("parentMenu",e9,53,6b,e7)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(MenuEvents_obj,button),HX_("button",f2,61,e0,d9)},
	{::hx::fsBool,(int)offsetof(MenuEvents_obj,_over),HX_("_over",33,ad,c9,fc)},
	{::hx::fsBool,(int)offsetof(MenuEvents_obj,hasScreenMouseDown),HX_("hasScreenMouseDown",e1,a5,cd,30)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuEvents_obj_sMemberFields[] = {
	HX_("_menu",7e,61,6a,fb),
	HX_("_currentItem",ed,4b,5b,e4),
	HX_("currentSubMenu",06,50,f1,23),
	HX_("parentMenu",e9,53,6b,e7),
	HX_("button",f2,61,e0,d9),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("_over",33,ad,c9,fc),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("onItemClick",16,c5,8c,6a),
	HX_("onItemMouseOver",e7,11,8b,3d),
	HX_("onItemMouseOut",5b,93,36,b2),
	HX_("showSubMenu",c2,77,f8,f2),
	HX_("hideMenu",81,2f,27,a1),
	HX_("hideCurrentSubMenu",68,28,f7,92),
	HX_("onHidden",e9,f5,42,2c),
	HX_("onShown",32,27,65,12),
	HX_("findRootMenu",3a,06,0e,cd),
	HX_("hasScreenMouseDown",e1,a5,cd,30),
	HX_("addScreenMouseDown",fa,2a,1b,8d),
	HX_("removeScreenMouseDown",37,60,81,35),
	HX_("onScreenMouseDown",bc,49,99,fd),
	::String(null()) };

::hx::Class MenuEvents_obj::__mClass;

void MenuEvents_obj::__register()
{
	MenuEvents_obj _hx_dummy;
	MenuEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus.MenuEvents",7c,cc,bd,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
