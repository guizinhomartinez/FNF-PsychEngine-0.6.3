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
#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#include <haxe/ui/backend/FocusManagerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerImpl
#include <haxe/ui/backend/FocusManagerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusApplicator
#include <haxe/ui/focus/FocusApplicator.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusApplicator
#include <haxe/ui/focus/IFocusApplicator.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_StyleFocusApplicator
#include <haxe/ui/focus/StyleFocusApplicator.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e13a986d53384ba3_16_new,"haxe.ui.focus.FocusManager","new",0xef6cfaef,"haxe.ui.focus.FocusManager.new","haxe/ui/focus/FocusManager.hx",16,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_56_pushView,"haxe.ui.focus.FocusManager","pushView",0xfdb79470,"haxe.ui.focus.FocusManager.pushView","haxe/ui/focus/FocusManager.hx",56,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_69_onViewReady,"haxe.ui.focus.FocusManager","onViewReady",0xe9bec42e,"haxe.ui.focus.FocusManager.onViewReady","haxe/ui/focus/FocusManager.hx",69,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_80_hasFocusableItem,"haxe.ui.focus.FocusManager","hasFocusableItem",0x039d53fc,"haxe.ui.focus.FocusManager.hasFocusableItem","haxe/ui/focus/FocusManager.hx",80,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_86_focusOnFirstInteractive,"haxe.ui.focus.FocusManager","focusOnFirstInteractive",0xbd6a5cd8,"haxe.ui.focus.FocusManager.focusOnFirstInteractive","haxe/ui/focus/FocusManager.hx",86,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_96_removeView,"haxe.ui.focus.FocusManager","removeView",0x1b5c421a,"haxe.ui.focus.FocusManager.removeView","haxe/ui/focus/FocusManager.hx",96,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_108_get_focus,"haxe.ui.focus.FocusManager","get_focus",0xd004bbfe,"haxe.ui.focus.FocusManager.get_focus","haxe/ui/focus/FocusManager.hx",108,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_117_set_focus,"haxe.ui.focus.FocusManager","set_focus",0xb355a80a,"haxe.ui.focus.FocusManager.set_focus","haxe/ui/focus/FocusManager.hx",117,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_143_focusNext,"haxe.ui.focus.FocusManager","focusNext",0xa85fdcba,"haxe.ui.focus.FocusManager.focusNext","haxe/ui/focus/FocusManager.hx",143,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_163_focusPrev,"haxe.ui.focus.FocusManager","focusPrev",0xa9bc16ba,"haxe.ui.focus.FocusManager.focusPrev","haxe/ui/focus/FocusManager.hx",163,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_208_buildFocusableList,"haxe.ui.focus.FocusManager","buildFocusableList",0xcb002133,"haxe.ui.focus.FocusManager.buildFocusableList","haxe/ui/focus/FocusManager.hx",208,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_183_buildFocusableList,"haxe.ui.focus.FocusManager","buildFocusableList",0xcb002133,"haxe.ui.focus.FocusManager.buildFocusableList","haxe/ui/focus/FocusManager.hx",183,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_220_applyFocus,"haxe.ui.focus.FocusManager","applyFocus",0xffc8b0db,"haxe.ui.focus.FocusManager.applyFocus","haxe/ui/focus/FocusManager.hx",220,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_230_unapplyFocus,"haxe.ui.focus.FocusManager","unapplyFocus",0xa2f496b4,"haxe.ui.focus.FocusManager.unapplyFocus","haxe/ui/focus/FocusManager.hx",230,0xe315a5e0)
HX_LOCAL_STACK_FRAME(_hx_pos_e13a986d53384ba3_19_get_instance,"haxe.ui.focus.FocusManager","get_instance",0x96055f2f,"haxe.ui.focus.FocusManager.get_instance","haxe/ui/focus/FocusManager.hx",19,0xe315a5e0)
namespace haxe{
namespace ui{
namespace focus{

void FocusManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e13a986d53384ba3_16_new)
HXLINE( 116)		this->_lastFocuses =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  31)		this->_applicators = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  29)		this->autoFocus = true;
HXLINE(  34)		super::__construct();
HXLINE(  35)		::Array< ::Dynamic> _hx_tmp = this->_applicators;
HXDLIN(  35)		_hx_tmp->push( ::haxe::ui::focus::StyleFocusApplicator_obj::__alloc( HX_CTX ));
            	}

Dynamic FocusManager_obj::__CreateEmpty() { return new FocusManager_obj; }

void *FocusManager_obj::_hx_vtable = 0;

Dynamic FocusManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusManager_obj > _hx_result = new FocusManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FocusManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x52407a33) {
		if (inClassId<=(int)0x4fcb91bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4fcb91bc;
		} else {
			return inClassId==(int)0x52407a33;
		}
	} else {
		return inClassId==(int)0x5475288b;
	}
}

void FocusManager_obj::pushView( ::haxe::ui::core::Component view){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_56_pushView)
HXLINE(  57)		if (this->hasFocusableItem(view)) {
HXLINE(  58)			 ::Dynamic k = this->_lastFocuses->keys();
HXDLIN(  58)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  58)				 ::haxe::ui::core::Component k1 = ( ( ::haxe::ui::core::Component)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  59)				::haxe::ui::focus::IFocusable_obj::set_focus(this->_lastFocuses->get(k1),false);
HXLINE(  60)				this->unapplyFocus(( ( ::haxe::ui::core::Component)(this->_lastFocuses->get(k1)) ));
            			}
            		}
HXLINE(  63)		if ((this->autoFocus == true)) {
HXLINE(  64)			this->focusOnFirstInteractive(view);
HXLINE(  65)			view->registerEvent(HX_("ready",63,a0,ba,e6),this->onViewReady_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,pushView,(void))

void FocusManager_obj::onViewReady( ::haxe::ui::events::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_69_onViewReady)
HXLINE(  70)		e->target->unregisterEvent(HX_("ready",63,a0,ba,e6),this->onViewReady_dyn());
HXLINE(  71)		if (this->hasFocusableItem(e->target)) {
HXLINE(  72)			{
HXLINE(  72)				 ::Dynamic k = this->_lastFocuses->keys();
HXDLIN(  72)				while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)					 ::haxe::ui::core::Component k1 = ( ( ::haxe::ui::core::Component)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  73)					::haxe::ui::focus::IFocusable_obj::set_focus(this->_lastFocuses->get(k1),false);
HXLINE(  74)					this->unapplyFocus(( ( ::haxe::ui::core::Component)(this->_lastFocuses->get(k1)) ));
            				}
            			}
HXLINE(  76)			this->focusOnFirstInteractive(e->target);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,onViewReady,(void))

bool FocusManager_obj::hasFocusableItem( ::haxe::ui::core::Component view){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_80_hasFocusableItem)
HXLINE(  81)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  82)		this->buildFocusableList(view,list);
HXLINE(  83)		return (list->length != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,hasFocusableItem,return )

::Dynamic FocusManager_obj::focusOnFirstInteractive( ::haxe::ui::core::Component view){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_86_focusOnFirstInteractive)
HXLINE(  87)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  88)		this->buildFocusableList(view,list);
HXLINE(  89)		if ((list->length > 0)) {
HXLINE(  90)			::haxe::ui::focus::IFocusable_obj::set_focus(list->__get(0),true);
HXLINE(  91)			return list->__get(0);
            		}
HXLINE(  93)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,focusOnFirstInteractive,return )

void FocusManager_obj::removeView( ::haxe::ui::core::Component view){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_96_removeView)
HXLINE(  97)		this->_lastFocuses->remove(view);
HXLINE(  98)		 ::haxe::ui::core::Component top = ::haxe::ui::core::Screen_obj::get_instance()->get_topComponent();
HXLINE(  99)		if (::hx::IsNull( top )) {
HXLINE( 100)			return;
            		}
HXLINE( 102)		if (this->_lastFocuses->exists(top)) {
HXLINE( 103)			this->set_focus(this->_lastFocuses->get(top));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,removeView,(void))

::Dynamic FocusManager_obj::get_focus(){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_108_get_focus)
HXLINE( 109)		 ::haxe::ui::core::Component top = ::haxe::ui::core::Screen_obj::get_instance()->get_topComponent();
HXLINE( 110)		if (::hx::IsNull( top )) {
HXLINE( 111)			return null();
            		}
HXLINE( 113)		return this->buildFocusableList(top,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,get_focus,return )

::Dynamic FocusManager_obj::set_focus(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_117_set_focus)
HXLINE( 118)		if (::hx::IsNotNull( value )) {
HXLINE( 119)			 ::haxe::ui::core::Component c = ::hx::TCast<  ::haxe::ui::core::Component >::cast(value);
HXLINE( 120)			 ::haxe::ui::core::Component root = c->get_rootComponent();
HXLINE( 121)			::Dynamic currentFocus = this->buildFocusableList(root,null());
HXLINE( 122)			bool _hx_tmp;
HXDLIN( 122)			if (::hx::IsNotNull( currentFocus )) {
HXLINE( 122)				_hx_tmp = ::hx::IsInstanceNotEq( currentFocus,value );
            			}
            			else {
HXLINE( 122)				_hx_tmp = false;
            			}
HXDLIN( 122)			if (_hx_tmp) {
HXLINE( 123)				this->unapplyFocus(( ( ::haxe::ui::core::Component)(currentFocus) ));
HXLINE( 124)				::haxe::ui::focus::IFocusable_obj::set_focus(currentFocus,false);
            			}
HXLINE( 126)			bool _hx_tmp1;
HXDLIN( 126)			if (this->_lastFocuses->exists(root)) {
HXLINE( 126)				_hx_tmp1 = ::hx::IsInstanceNotEq( this->_lastFocuses->get(root),value );
            			}
            			else {
HXLINE( 126)				_hx_tmp1 = false;
            			}
HXDLIN( 126)			if (_hx_tmp1) {
HXLINE( 127)				::haxe::ui::focus::IFocusable_obj::set_focus(this->_lastFocuses->get(root),false);
HXLINE( 128)				this->unapplyFocus(( ( ::haxe::ui::core::Component)(this->_lastFocuses->get(root)) ));
            			}
HXLINE( 131)			this->_lastFocuses->set(root,value);
HXLINE( 132)			this->applyFocus(( ( ::haxe::ui::core::Component)(value) ));
            		}
            		else {
HXLINE( 134)			 ::haxe::ui::core::Component top = ::haxe::ui::core::Screen_obj::get_instance()->get_topComponent();
HXLINE( 135)			if (this->_lastFocuses->exists(top)) {
HXLINE( 136)				::haxe::ui::focus::IFocusable_obj::set_focus(this->_lastFocuses->get(top),false);
HXLINE( 137)				this->unapplyFocus(( ( ::haxe::ui::core::Component)(this->_lastFocuses->get(top)) ));
            			}
            		}
HXLINE( 140)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,set_focus,return )

 ::haxe::ui::core::Component FocusManager_obj::focusNext(){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_143_focusNext)
HXLINE( 144)		 ::haxe::ui::core::Component top = ::haxe::ui::core::Screen_obj::get_instance()->get_topComponent();
HXLINE( 145)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 146)		::Dynamic currentFocus = this->buildFocusableList(top,list);
HXLINE( 148)		int index = -1;
HXLINE( 149)		if (::hx::IsNotNull( currentFocus )) {
HXLINE( 150)			index = list->indexOf(currentFocus,null());
            		}
HXLINE( 153)		int nextIndex = (index + 1);
HXLINE( 154)		if ((nextIndex > (list->length - 1))) {
HXLINE( 155)			nextIndex = 0;
            		}
HXLINE( 158)		::Dynamic nextFocus = list->__get(nextIndex);
HXLINE( 159)		this->set_focus(nextFocus);
HXLINE( 160)		return ( ( ::haxe::ui::core::Component)(nextFocus) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,focusNext,return )

 ::haxe::ui::core::Component FocusManager_obj::focusPrev(){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_163_focusPrev)
HXLINE( 164)		 ::haxe::ui::core::Component top = ::haxe::ui::core::Screen_obj::get_instance()->get_topComponent();
HXLINE( 165)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 166)		::Dynamic currentFocus = this->buildFocusableList(top,list);
HXLINE( 168)		int index = -1;
HXLINE( 169)		if (::hx::IsNotNull( currentFocus )) {
HXLINE( 170)			index = list->indexOf(currentFocus,null());
            		}
HXLINE( 173)		int prevIndex = (index - 1);
HXLINE( 174)		if ((prevIndex < 0)) {
HXLINE( 175)			prevIndex = (list->length - 1);
            		}
HXLINE( 178)		::Dynamic prevFocus = list->__get(prevIndex);
HXLINE( 179)		this->set_focus(prevFocus);
HXLINE( 180)		return ( ( ::haxe::ui::core::Component)(prevFocus) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,focusPrev,return )

::Dynamic FocusManager_obj::buildFocusableList( ::haxe::ui::core::Component c,::Array< ::Dynamic> list){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::haxe::ui::core::Component c1, ::haxe::ui::core::Component c2){
            			HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_208_buildFocusableList)
HXLINE( 208)			return (c1->componentTabIndex - c2->componentTabIndex);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_183_buildFocusableList)
HXLINE( 184)		::Dynamic currentFocus = null();
HXLINE( 186)		if ((c->_isDisposed == true)) {
HXLINE( 187)			return null();
            		}
HXLINE( 190)		if ((c->get_hidden() == true)) {
HXLINE( 191)			return null();
            		}
HXLINE( 194)		if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::focus::IFocusable >())) {
HXLINE( 195)			::Dynamic f = c;
HXLINE( 196)			bool _hx_tmp;
HXDLIN( 196)			if ((::haxe::ui::focus::IFocusable_obj::get_allowFocus(f) == true)) {
HXLINE( 196)				_hx_tmp = (::haxe::ui::focus::IFocusable_obj::get_disabled(f) == false);
            			}
            			else {
HXLINE( 196)				_hx_tmp = false;
            			}
HXDLIN( 196)			if (_hx_tmp) {
HXLINE( 197)				if ((::haxe::ui::focus::IFocusable_obj::get_focus(f) == true)) {
HXLINE( 198)					currentFocus = f;
            				}
HXLINE( 200)				if (::hx::IsNotNull( list )) {
HXLINE( 201)					list->push(f);
            				}
            			}
            		}
HXLINE( 206)		::Array< ::Dynamic> childList;
HXDLIN( 206)		if (::hx::IsNull( c->_children )) {
HXLINE( 206)			childList = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 206)			childList = c->_children;
            		}
HXDLIN( 206)		::Array< ::Dynamic> childList1 = childList->copy();
HXLINE( 207)		childList1->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 211)		{
HXLINE( 211)			int _g = 0;
HXDLIN( 211)			while((_g < childList1->length)){
HXLINE( 211)				 ::haxe::ui::core::Component child = childList1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 211)				_g = (_g + 1);
HXLINE( 212)				::Dynamic f = this->buildFocusableList(child,list);
HXLINE( 213)				if (::hx::IsNotNull( f )) {
HXLINE( 214)					currentFocus = f;
            				}
            			}
            		}
HXLINE( 217)		return currentFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FocusManager_obj,buildFocusableList,return )

void FocusManager_obj::applyFocus( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_220_applyFocus)
HXLINE( 221)		this->super::applyFocus(c);
HXLINE( 222)		::haxe::ui::focus::IFocusable_obj::set_focus( ::hx::interface_check(c,0x04f087c7),true);
HXLINE( 223)		{
HXLINE( 223)			int _g = 0;
HXDLIN( 223)			::Array< ::Dynamic> _g1 = this->_applicators;
HXDLIN( 223)			while((_g < _g1->length)){
HXLINE( 223)				::Dynamic a = _g1->__get(_g);
HXDLIN( 223)				_g = (_g + 1);
HXLINE( 224)				if ((::haxe::ui::focus::IFocusApplicator_obj::get_enabled(a) == true)) {
HXLINE( 225)					::haxe::ui::focus::IFocusApplicator_obj::apply(a,c);
            				}
            			}
            		}
            	}


void FocusManager_obj::unapplyFocus( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_e13a986d53384ba3_230_unapplyFocus)
HXLINE( 231)		this->super::unapplyFocus(c);
HXLINE( 232)		::haxe::ui::focus::IFocusable_obj::set_focus( ::hx::interface_check(c,0x04f087c7),false);
HXLINE( 233)		{
HXLINE( 233)			int _g = 0;
HXDLIN( 233)			::Array< ::Dynamic> _g1 = this->_applicators;
HXDLIN( 233)			while((_g < _g1->length)){
HXLINE( 233)				::Dynamic a = _g1->__get(_g);
HXDLIN( 233)				_g = (_g + 1);
HXLINE( 234)				if ((::haxe::ui::focus::IFocusApplicator_obj::get_enabled(a) == true)) {
HXLINE( 235)					::haxe::ui::focus::IFocusApplicator_obj::unapply(a,c);
            				}
            			}
            		}
            	}


 ::haxe::ui::focus::FocusManager FocusManager_obj::_instance;

 ::haxe::ui::focus::FocusManager FocusManager_obj::instance;

 ::haxe::ui::focus::FocusManager FocusManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_e13a986d53384ba3_19_get_instance)
HXLINE(  20)		if (::hx::IsNull( ::haxe::ui::focus::FocusManager_obj::_instance )) {
HXLINE(  21)			::haxe::ui::focus::FocusManager_obj::_instance =  ::haxe::ui::focus::FocusManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  23)		return ::haxe::ui::focus::FocusManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,get_instance,return )


::hx::ObjectPtr< FocusManager_obj > FocusManager_obj::__new() {
	::hx::ObjectPtr< FocusManager_obj > __this = new FocusManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FocusManager_obj > FocusManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FocusManager_obj *__this = (FocusManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusManager_obj), true, "haxe.ui.focus.FocusManager"));
	*(void **)__this = FocusManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FocusManager_obj::FocusManager_obj()
{
}

void FocusManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusManager);
	HX_MARK_MEMBER_NAME(autoFocus,"autoFocus");
	HX_MARK_MEMBER_NAME(_applicators,"_applicators");
	HX_MARK_MEMBER_NAME(_lastFocuses,"_lastFocuses");
	HX_MARK_END_CLASS();
}

void FocusManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(autoFocus,"autoFocus");
	HX_VISIT_MEMBER_NAME(_applicators,"_applicators");
	HX_VISIT_MEMBER_NAME(_lastFocuses,"_lastFocuses");
}

::hx::Val FocusManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focus() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushView") ) { return ::hx::Val( pushView_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoFocus") ) { return ::hx::Val( autoFocus ); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return ::hx::Val( get_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return ::hx::Val( set_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"focusNext") ) { return ::hx::Val( focusNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"focusPrev") ) { return ::hx::Val( focusPrev_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeView") ) { return ::hx::Val( removeView_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyFocus") ) { return ::hx::Val( applyFocus_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onViewReady") ) { return ::hx::Val( onViewReady_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_applicators") ) { return ::hx::Val( _applicators ); }
		if (HX_FIELD_EQ(inName,"_lastFocuses") ) { return ::hx::Val( _lastFocuses ); }
		if (HX_FIELD_EQ(inName,"unapplyFocus") ) { return ::hx::Val( unapplyFocus_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasFocusableItem") ) { return ::hx::Val( hasFocusableItem_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"buildFocusableList") ) { return ::hx::Val( buildFocusableList_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"focusOnFirstInteractive") ) { return ::hx::Val( focusOnFirstInteractive_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FocusManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val FocusManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focus(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoFocus") ) { autoFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_applicators") ) { _applicators=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastFocuses") ) { _lastFocuses=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FocusManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::focus::FocusManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::focus::FocusManager >(); return true; }
	}
	return false;
}

void FocusManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoFocus",e9,9d,94,e2));
	outFields->push(HX_("_applicators",79,e9,4c,90));
	outFields->push(HX_("focus",d8,5f,89,04));
	outFields->push(HX_("_lastFocuses",91,c0,38,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FocusManager_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FocusManager_obj,autoFocus),HX_("autoFocus",e9,9d,94,e2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FocusManager_obj,_applicators),HX_("_applicators",79,e9,4c,90)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(FocusManager_obj,_lastFocuses),HX_("_lastFocuses",91,c0,38,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FocusManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::focus::FocusManager */ ,(void *) &FocusManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::focus::FocusManager */ ,(void *) &FocusManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FocusManager_obj_sMemberFields[] = {
	HX_("autoFocus",e9,9d,94,e2),
	HX_("_applicators",79,e9,4c,90),
	HX_("pushView",5f,65,40,1d),
	HX_("onViewReady",9f,f2,91,49),
	HX_("hasFocusableItem",eb,2b,d7,ff),
	HX_("focusOnFirstInteractive",c9,f0,41,6e),
	HX_("removeView",c9,6c,6e,cb),
	HX_("get_focus",2f,bc,32,48),
	HX_("_lastFocuses",91,c0,38,5c),
	HX_("set_focus",3b,a8,83,2b),
	HX_("focusNext",eb,dc,8d,20),
	HX_("focusPrev",eb,16,ea,21),
	HX_("buildFocusableList",e2,12,53,ab),
	HX_("applyFocus",8a,db,da,af),
	HX_("unapplyFocus",23,0b,ea,1b),
	::String(null()) };

static void FocusManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(FocusManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FocusManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(FocusManager_obj::instance,"instance");
};

#endif

::hx::Class FocusManager_obj::__mClass;

static ::String FocusManager_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void FocusManager_obj::__register()
{
	FocusManager_obj _hx_dummy;
	FocusManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.focus.FocusManager",7d,57,a3,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FocusManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FocusManager_obj::__SetStatic;
	__mClass->mMarkFunc = FocusManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FocusManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FocusManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FocusManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FocusManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace focus
