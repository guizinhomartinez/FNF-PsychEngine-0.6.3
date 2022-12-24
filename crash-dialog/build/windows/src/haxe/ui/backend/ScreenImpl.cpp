#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_EventMapper
#include <haxe/ui/backend/hxwidgets/EventMapper.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_MenuItemHelper
#include <haxe/ui/backend/hxwidgets/MenuItemHelper.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuBar
#include <haxe/ui/containers/menus/MenuBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvent
#include <haxe/ui/containers/menus/MenuEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
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
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Frame
#include <hx/widgets/Frame.h>
#endif
#ifndef INCLUDED_hx_widgets_MenuBar
#include <hx/widgets/MenuBar.h>
#endif
#ifndef INCLUDED_hx_widgets_MouseEvent
#include <hx/widgets/MouseEvent.h>
#endif
#ifndef INCLUDED_hx_widgets_MouseState
#include <hx/widgets/MouseState.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7a615936dd15791e_15_new,"haxe.ui.backend.ScreenImpl","new",0x83c2272a,"haxe.ui.backend.ScreenImpl.new","haxe/ui/backend/ScreenImpl.hx",15,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_23_get_width,"haxe.ui.backend.ScreenImpl","get_width",0xddce9ca7,"haxe.ui.backend.ScreenImpl.get_width","haxe/ui/backend/ScreenImpl.hx",23,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_27_get_height,"haxe.ui.backend.ScreenImpl","get_height",0xed49ee26,"haxe.ui.backend.ScreenImpl.get_height","haxe/ui/backend/ScreenImpl.hx",27,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_30_addComponent,"haxe.ui.backend.ScreenImpl","addComponent",0x6c819252,"haxe.ui.backend.ScreenImpl.addComponent","haxe/ui/backend/ScreenImpl.hx",30,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_36_removeComponent,"haxe.ui.backend.ScreenImpl","removeComponent",0xf4ece9a3,"haxe.ui.backend.ScreenImpl.removeComponent","haxe/ui/backend/ScreenImpl.hx",36,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_44_get_frame,"haxe.ui.backend.ScreenImpl","get_frame",0x19ef5ece,"haxe.ui.backend.ScreenImpl.get_frame","haxe/ui/backend/ScreenImpl.hx",44,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_52_get_title,"haxe.ui.backend.ScreenImpl","get_title",0x23a6fc39,"haxe.ui.backend.ScreenImpl.get_title","haxe/ui/backend/ScreenImpl.hx",52,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_55_set_title,"haxe.ui.backend.ScreenImpl","set_title",0x06f7e845,"haxe.ui.backend.ScreenImpl.set_title","haxe/ui/backend/ScreenImpl.hx",55,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_65_addResizeListener,"haxe.ui.backend.ScreenImpl","addResizeListener",0x50efacd3,"haxe.ui.backend.ScreenImpl.addResizeListener","haxe/ui/backend/ScreenImpl.hx",65,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_59_addResizeListener,"haxe.ui.backend.ScreenImpl","addResizeListener",0x50efacd3,"haxe.ui.backend.ScreenImpl.addResizeListener","haxe/ui/backend/ScreenImpl.hx",59,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_73_handleSetComponentIndex,"haxe.ui.backend.ScreenImpl","handleSetComponentIndex",0xc8d2ab59,"haxe.ui.backend.ScreenImpl.handleSetComponentIndex","haxe/ui/backend/ScreenImpl.hx",73,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_79_linkMenuBar,"haxe.ui.backend.ScreenImpl","linkMenuBar",0x7cfec564,"haxe.ui.backend.ScreenImpl.linkMenuBar","haxe/ui/backend/ScreenImpl.hx",79,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_86_onMenu,"haxe.ui.backend.ScreenImpl","onMenu",0x1e13d1d4,"haxe.ui.backend.ScreenImpl.onMenu","haxe/ui/backend/ScreenImpl.hx",86,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_101_supportsEvent,"haxe.ui.backend.ScreenImpl","supportsEvent",0x6f292f40,"haxe.ui.backend.ScreenImpl.supportsEvent","haxe/ui/backend/ScreenImpl.hx",101,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_109_mapEvent,"haxe.ui.backend.ScreenImpl","mapEvent",0xaff804d4,"haxe.ui.backend.ScreenImpl.mapEvent","haxe/ui/backend/ScreenImpl.hx",109,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_119_unmapEvent,"haxe.ui.backend.ScreenImpl","unmapEvent",0x6d4195ad,"haxe.ui.backend.ScreenImpl.unmapEvent","haxe/ui/backend/ScreenImpl.hx",119,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_127___onMouseEvent,"haxe.ui.backend.ScreenImpl","__onMouseEvent",0x33c7ca4a,"haxe.ui.backend.ScreenImpl.__onMouseEvent","haxe/ui/backend/ScreenImpl.hx",127,0x18a34445)
namespace haxe{
namespace ui{
namespace backend{

void ScreenImpl_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_15_new)
HXLINE(  58)		this->_hasListener = false;
HXLINE(  19)		this->_hx___eventMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ScreenImpl_obj::__CreateEmpty() { return new ScreenImpl_obj; }

void *ScreenImpl_obj::_hx_vtable = 0;

Dynamic ScreenImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenImpl_obj > _hx_result = new ScreenImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScreenImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f344a3f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7f344a3f;
	} else {
		return inClassId==(int)0x7faef962;
	}
}

Float ScreenImpl_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_23_get_width)
HXDLIN(  23)		return ( (Float)(this->get_frame()->get_clientSize()->width) );
            	}


Float ScreenImpl_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_27_get_height)
HXDLIN(  27)		return ( (Float)(this->get_frame()->get_clientSize()->height) );
            	}


 ::haxe::ui::core::Component ScreenImpl_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_30_addComponent)
HXLINE(  31)		this->addResizeListener();
HXLINE(  32)		this->resizeComponent(component);
HXLINE(  33)		return component;
            	}


 ::haxe::ui::core::Component ScreenImpl_obj::removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_36_removeComponent)
HXLINE(  37)		if ((dispose == true)) {
HXLINE(  38)			component->get_window()->destroy();
            		}
HXLINE(  40)		return component;
            	}


 ::hx::widgets::Frame ScreenImpl_obj::get_frame(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_44_get_frame)
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		if (::hx::IsNotNull( this->get_options() )) {
HXLINE(  45)			_hx_tmp = ::hx::IsNull( this->get_options()->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  45)			_hx_tmp = true;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  46)			return null();
            		}
HXLINE(  48)		return ( ( ::hx::widgets::Frame)(this->get_options()->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenImpl_obj,get_frame,return )

::String ScreenImpl_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_52_get_title)
HXDLIN(  52)		return this->get_frame()->get_title();
            	}


::String ScreenImpl_obj::set_title(::String t){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_55_set_title)
HXDLIN(  55)		return this->get_frame()->set_title(t);
            	}


void ScreenImpl_obj::addResizeListener(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::ScreenImpl,_gthis) HXARGC(1)
            		void _hx_run( ::hx::widgets::Event e){
            			HX_STACKFRAME(&_hx_pos_7a615936dd15791e_65_addResizeListener)
HXLINE(  65)			int _g = 0;
HXDLIN(  65)			::Array< ::Dynamic> _g1 = _gthis->rootComponents;
HXDLIN(  65)			while((_g < _g1->length)){
HXLINE(  65)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  65)				_g = (_g + 1);
HXLINE(  66)				_gthis->resizeComponent(c);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_59_addResizeListener)
HXDLIN(  59)		 ::haxe::ui::backend::ScreenImpl _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  60)		bool _hx_tmp;
HXDLIN(  60)		if ((this->_hasListener != true)) {
HXLINE(  60)			_hx_tmp = ::hx::IsNull( this->get_frame() );
            		}
            		else {
HXLINE(  60)			_hx_tmp = true;
            		}
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  61)			return;
            		}
HXLINE(  64)		this->get_frame()->bind(::wx::widgets::EventType_obj::SIZE, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  70)		this->_hasListener = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenImpl_obj,addResizeListener,(void))

void ScreenImpl_obj::handleSetComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_73_handleSetComponentIndex)
            	}


void ScreenImpl_obj::linkMenuBar( ::haxe::ui::containers::menus::MenuBar menuBar, ::hx::widgets::MenuBar nativeMenuBar){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_79_linkMenuBar)
HXLINE(  80)		this->_menuBar = menuBar;
HXLINE(  81)		this->_nativeMenuBar = nativeMenuBar;
HXLINE(  82)		this->get_frame()->set_menuBar(nativeMenuBar);
HXLINE(  83)		this->get_frame()->bind(::wx::widgets::EventType_obj::MENU,this->onMenu_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenImpl_obj,linkMenuBar,(void))

void ScreenImpl_obj::onMenu( ::hx::widgets::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_86_onMenu)
HXLINE(  87)		if (::hx::IsNull( this->_menuBar )) {
HXLINE(  88)			return;
            		}
HXLINE(  90)		 ::haxe::ui::containers::menus::MenuItem menuItem = ::haxe::ui::backend::hxwidgets::MenuItemHelper_obj::get(e->get_id());
HXLINE(  91)		if (::hx::IsNotNull( menuItem )) {
HXLINE(  92)			 ::haxe::ui::containers::menus::MenuEvent event =  ::haxe::ui::containers::menus::MenuEvent_obj::__alloc( HX_CTX ,HX_("menuselected",fa,a6,03,90),null(),null());
HXLINE(  93)			event->menuItem = menuItem;
HXLINE(  94)			this->_menuBar->dispatch(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenImpl_obj,onMenu,(void))

bool ScreenImpl_obj::supportsEvent(::String type){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_101_supportsEvent)
HXLINE( 102)		if ((type == HX_("rightclick",ec,f2,f5,b7))) {
HXLINE( 103)			return true;
            		}
HXLINE( 105)		return false;
            	}


void ScreenImpl_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_109_mapEvent)
HXDLIN( 109)		if ((type == HX_("rightclick",ec,f2,f5,b7))) {
HXLINE( 111)			if ((this->_hx___eventMap->exists(HX_("rightclick",ec,f2,f5,b7)) == false)) {
HXLINE( 112)				this->_hx___eventMap->set(HX_("rightclick",ec,f2,f5,b7),listener);
HXLINE( 113)				 ::hx::widgets::Window _hx_tmp = this->get_frame()->get_children()->__get(0).StaticCast<  ::hx::widgets::Window >();
HXDLIN( 113)				_hx_tmp->bind(::haxe::ui::backend::hxwidgets::EventMapper_obj::HAXEUI_TO_WX->get_int(HX_("rightclick",ec,f2,f5,b7)),this->_hx___onMouseEvent_dyn(),null());
            			}
            		}
            	}


void ScreenImpl_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_119_unmapEvent)
HXDLIN( 119)		if ((type == HX_("rightclick",ec,f2,f5,b7))) {
HXLINE( 121)			this->_hx___eventMap->remove(type);
HXLINE( 122)			 ::hx::widgets::Window _hx_tmp = this->get_frame()->get_children()->__get(0).StaticCast<  ::hx::widgets::Window >();
HXDLIN( 122)			_hx_tmp->unbind(::haxe::ui::backend::hxwidgets::EventMapper_obj::HAXEUI_TO_WX->get_int(HX_("rightclick",ec,f2,f5,b7)),this->_hx___onMouseEvent_dyn(),null());
            		}
            	}


void ScreenImpl_obj::_hx___onMouseEvent( ::hx::widgets::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_127___onMouseEvent)
HXLINE( 128)		::Dynamic this1 = ::haxe::ui::backend::hxwidgets::EventMapper_obj::WX_TO_HAXEUI;
HXDLIN( 128)		::String type = ( ( ::haxe::ds::IntMap)(this1) )->get_string(event->get_eventType());
HXLINE( 129)		if (::hx::IsNotNull( type )) {
HXLINE( 130)			 ::Dynamic fn = this->_hx___eventMap->get(type);
HXLINE( 131)			if (::hx::IsNotNull( fn )) {
HXLINE( 132)				 ::hx::widgets::MouseEvent mouseEvent = event->convertTo(::hx::ClassOf< ::hx::widgets::MouseEvent >()).StaticCast<  ::hx::widgets::MouseEvent >();
HXLINE( 133)				 ::haxe::ui::events::MouseEvent newMouseEvent =  ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,type);
HXLINE( 134)				newMouseEvent->_originalEvent = event;
HXLINE( 135)				newMouseEvent->screenX = ( (Float)(mouseEvent->get_x()) );
HXLINE( 136)				newMouseEvent->screenY = ( (Float)(mouseEvent->get_y()) );
HXLINE( 137)				fn(newMouseEvent);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenImpl_obj,_hx___onMouseEvent,(void))


::hx::ObjectPtr< ScreenImpl_obj > ScreenImpl_obj::__new() {
	::hx::ObjectPtr< ScreenImpl_obj > __this = new ScreenImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScreenImpl_obj > ScreenImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScreenImpl_obj *__this = (ScreenImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenImpl_obj), true, "haxe.ui.backend.ScreenImpl"));
	*(void **)__this = ScreenImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScreenImpl_obj::ScreenImpl_obj()
{
}

void ScreenImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenImpl);
	HX_MARK_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(_hasListener,"_hasListener");
	HX_MARK_MEMBER_NAME(_menuBar,"_menuBar");
	HX_MARK_MEMBER_NAME(_nativeMenuBar,"_nativeMenuBar");
	 ::haxe::ui::backend::ScreenBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScreenImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(_hasListener,"_hasListener");
	HX_VISIT_MEMBER_NAME(_menuBar,"_menuBar");
	HX_VISIT_MEMBER_NAME(_nativeMenuBar,"_nativeMenuBar");
	 ::haxe::ui::backend::ScreenBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScreenImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_frame() : frame ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onMenu") ) { return ::hx::Val( onMenu_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_menuBar") ) { return ::hx::Val( _menuBar ); }
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return ::hx::Val( mapEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return ::hx::Val( get_frame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return ::hx::Val( _hx___eventMap ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return ::hx::Val( unmapEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"linkMenuBar") ) { return ::hx::Val( linkMenuBar_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hasListener") ) { return ::hx::Val( _hasListener ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"supportsEvent") ) { return ::hx::Val( supportsEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_nativeMenuBar") ) { return ::hx::Val( _nativeMenuBar ); }
		if (HX_FIELD_EQ(inName,"__onMouseEvent") ) { return ::hx::Val( _hx___onMouseEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addResizeListener") ) { return ::hx::Val( addResizeListener_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"handleSetComponentIndex") ) { return ::hx::Val( handleSetComponentIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast<  ::hx::widgets::Frame >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_menuBar") ) { _menuBar=inValue.Cast<  ::haxe::ui::containers::menus::MenuBar >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { _hx___eventMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_hasListener") ) { _hasListener=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_nativeMenuBar") ) { _nativeMenuBar=inValue.Cast<  ::hx::widgets::MenuBar >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__eventMap",c2,f9,0a,64));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("_hasListener",ef,93,f2,70));
	outFields->push(HX_("_menuBar",f5,8a,03,f4));
	outFields->push(HX_("_nativeMenuBar",de,f0,ad,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ScreenImpl_obj,_hx___eventMap),HX_("__eventMap",c2,f9,0a,64)},
	{::hx::fsObject /*  ::hx::widgets::Frame */ ,(int)offsetof(ScreenImpl_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsBool,(int)offsetof(ScreenImpl_obj,_hasListener),HX_("_hasListener",ef,93,f2,70)},
	{::hx::fsObject /*  ::haxe::ui::containers::menus::MenuBar */ ,(int)offsetof(ScreenImpl_obj,_menuBar),HX_("_menuBar",f5,8a,03,f4)},
	{::hx::fsObject /*  ::hx::widgets::MenuBar */ ,(int)offsetof(ScreenImpl_obj,_nativeMenuBar),HX_("_nativeMenuBar",de,f0,ad,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenImpl_obj_sMemberFields[] = {
	HX_("__eventMap",c2,f9,0a,64),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	HX_("frame",2d,78,83,06),
	HX_("get_frame",84,d4,2c,4a),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("_hasListener",ef,93,f2,70),
	HX_("addResizeListener",89,c8,ca,d2),
	HX_("handleSetComponentIndex",8f,73,b6,f4),
	HX_("_menuBar",f5,8a,03,f4),
	HX_("_nativeMenuBar",de,f0,ad,b7),
	HX_("linkMenuBar",9a,94,cd,4f),
	HX_("onMenu",5e,4e,e3,ea),
	HX_("supportsEvent",f6,b7,b2,ae),
	HX_("mapEvent",de,37,07,ed),
	HX_("unmapEvent",37,1f,cb,72),
	HX_("__onMouseEvent",d4,e0,95,8c),
	::String(null()) };

::hx::Class ScreenImpl_obj::__mClass;

void ScreenImpl_obj::__register()
{
	ScreenImpl_obj _hx_dummy;
	ScreenImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ScreenImpl",38,0a,49,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
