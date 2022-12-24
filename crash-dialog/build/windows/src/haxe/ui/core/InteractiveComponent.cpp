#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#include <haxe/ui/backend/FocusManagerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerImpl
#include <haxe/ui/backend/FocusManagerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_FocusEvent
#include <haxe/ui/events/FocusEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c73524b62b3bef21_13_new,"haxe.ui.core.InteractiveComponent","new",0xcd714daa,"haxe.ui.core.InteractiveComponent.new","haxe/ui/core/InteractiveComponent.hx",13,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_28_get_focus,"haxe.ui.core.InteractiveComponent","get_focus",0x49404cf9,"haxe.ui.core.InteractiveComponent.get_focus","haxe/ui/core/InteractiveComponent.hx",28,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_30_set_focus,"haxe.ui.core.InteractiveComponent","set_focus",0x2c913905,"haxe.ui.core.InteractiveComponent.set_focus","haxe/ui/core/InteractiveComponent.hx",30,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_61_get_allowFocus,"haxe.ui.core.InteractiveComponent","get_allowFocus",0xdd29f5ce,"haxe.ui.core.InteractiveComponent.get_allowFocus","haxe/ui/core/InteractiveComponent.hx",61,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_63_set_allowFocus,"haxe.ui.core.InteractiveComponent","set_allowFocus",0xfd49de42,"haxe.ui.core.InteractiveComponent.set_allowFocus","haxe/ui/core/InteractiveComponent.hx",63,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_77_findScroller,"haxe.ui.core.InteractiveComponent","findScroller",0x93248489,"haxe.ui.core.InteractiveComponent.findScroller","haxe/ui/core/InteractiveComponent.hx",77,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c0c1aa57b56fd7_441_registerBehaviours,"haxe.ui.core.InteractiveComponent","registerBehaviours",0xc7eaadcf,"haxe.ui.core.InteractiveComponent.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c0c1aa57b56fd7_475_get_allowInteraction,"haxe.ui.core.InteractiveComponent","get_allowInteraction",0x40b7aa48,"haxe.ui.core.InteractiveComponent.get_allowInteraction","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c0c1aa57b56fd7_520_set_allowInteraction,"haxe.ui.core.InteractiveComponent","set_allowInteraction",0x0d6f61bc,"haxe.ui.core.InteractiveComponent.set_allowInteraction","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a1a44ffe085454d1_565_cloneComponent,"haxe.ui.core.InteractiveComponent","cloneComponent",0x5e363c96,"haxe.ui.core.InteractiveComponent.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c0c1aa57b56fd7_423_self,"haxe.ui.core.InteractiveComponent","self",0xf900af02,"haxe.ui.core.InteractiveComponent.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace core{

void InteractiveComponent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_13_new)
HXLINE(  55)		this->_allowFocus = true;
HXLINE(  20)		this->_focus = false;
HXLINE(  14)		this->actionRepeatInterval = 100;
HXLINE(  13)		super::__construct();
            	}

Dynamic InteractiveComponent_obj::__CreateEmpty() { return new InteractiveComponent_obj; }

void *InteractiveComponent_obj::_hx_vtable = 0;

Dynamic InteractiveComponent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InteractiveComponent_obj > _hx_result = new InteractiveComponent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InteractiveComponent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				return inClassId==(int)0x395782b4 || inClassId==(int)0x4ba87886;
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

static ::haxe::ui::focus::IFocusable_obj _hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_focus_IFocusable= {
	( bool (::hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_focus,
	( bool (::hx::Object::*)(bool))&::haxe::ui::core::InteractiveComponent_obj::set_focus,
	( bool (::hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_allowFocus,
	( bool (::hx::Object::*)(bool))&::haxe::ui::core::InteractiveComponent_obj::set_allowFocus,
	( bool (::hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_disabled,
	( bool (::hx::Object::*)(bool))&::haxe::ui::core::InteractiveComponent_obj::set_disabled,
};

static ::haxe::ui::core::IValueComponent_obj _hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_core_IValueComponent= {
	(  ::Dynamic (::hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_value,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ui::core::InteractiveComponent_obj::set_value,
};

void *InteractiveComponent_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x04f087c7: return &_hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_focus_IFocusable;
		case (int)0x9229be7c: return &_hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_core_IValueComponent;
	}
	return super::_hx_getInterface(inHash);
}

bool InteractiveComponent_obj::get_focus(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_28_get_focus)
HXDLIN(  28)		return this->_focus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_focus,return )

bool InteractiveComponent_obj::set_focus(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_c73524b62b3bef21_30_set_focus)
HXLINE(  31)		bool _hx_tmp;
HXDLIN(  31)		if ((this->_focus != value)) {
HXLINE(  31)			_hx_tmp = (this->get_allowFocus() == false);
            		}
            		else {
HXLINE(  31)			_hx_tmp = true;
            		}
HXDLIN(  31)		if (_hx_tmp) {
HXLINE(  32)			return value;
            		}
HXLINE(  35)		this->_focus = value;
HXLINE(  36)		::String eventType = null();
HXLINE(  37)		if ((this->_focus == true)) {
HXLINE(  38)			eventType = HX_("focusin",bd,61,83,41);
HXLINE(  39)			::haxe::ui::focus::FocusManager_obj::get_instance()->set_focus( ::hx::interface_check(::hx::ObjectPtr<OBJ_>(this),0x04f087c7));
HXLINE(  42)			::Dynamic scrollview = this->findScroller();
HXLINE(  43)			if (::hx::IsNotNull( scrollview )) {
HXLINE(  44)				::haxe::ui::core::IScrollView_obj::ensureVisible(scrollview,::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            		else {
HXLINE(  47)			eventType = HX_("focusout",b6,b7,76,11);
HXLINE(  48)			::haxe::ui::focus::FocusManager_obj::get_instance()->set_focus(null());
            		}
HXLINE(  50)		this->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE(  51)		this->dispatch( ::haxe::ui::events::FocusEvent_obj::__alloc( HX_CTX ,eventType));
HXLINE(  52)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_focus,return )

bool InteractiveComponent_obj::get_allowFocus(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_61_get_allowFocus)
HXDLIN(  61)		return this->_allowFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_allowFocus,return )

bool InteractiveComponent_obj::set_allowFocus(bool value){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_63_set_allowFocus)
HXLINE(  64)		if ((this->_allowFocus == value)) {
HXLINE(  65)			return value;
            		}
HXLINE(  68)		this->_allowFocus = value;
HXLINE(  69)		{
HXLINE(  69)			int _g = 0;
HXDLIN(  69)			::Array< ::Dynamic> _g1;
HXDLIN(  69)			if (::hx::IsNull( this->_children )) {
HXLINE(  69)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  69)				_g1 = this->_children;
            			}
HXDLIN(  69)			while((_g < _g1->length)){
HXLINE(  69)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  69)				_g = (_g + 1);
HXLINE(  70)				if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::focus::IFocusable >())) {
HXLINE(  71)					::haxe::ui::focus::IFocusable_obj::set_allowFocus( ::hx::interface_check(child,0x04f087c7),value);
            				}
            			}
            		}
HXLINE(  74)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_allowFocus,return )

::Dynamic InteractiveComponent_obj::findScroller(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_77_findScroller)
HXLINE(  78)		::Dynamic view = null();
HXLINE(  79)		 ::haxe::ui::core::Component ref = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  80)		while(::hx::IsNotNull( ref )){
HXLINE(  81)			if (::Std_obj::isOfType(ref,::hx::ClassOf< ::haxe::ui::core::IScrollView >())) {
HXLINE(  82)				view =  ::hx::interface_check(ref,0x6fc0ac82);
HXLINE(  83)				goto _hx_goto_6;
            			}
HXLINE(  85)			ref = ref->parentComponent;
            		}
            		_hx_goto_6:;
HXLINE(  87)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,findScroller,return )

void InteractiveComponent_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_d4c0c1aa57b56fd7_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("allowInteraction",c9,55,84,63),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true));
            	}


bool InteractiveComponent_obj::get_allowInteraction(){
            	HX_STACKFRAME(&_hx_pos_d4c0c1aa57b56fd7_475_get_allowInteraction)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("allowInteraction",c9,55,84,63)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_allowInteraction,return )

bool InteractiveComponent_obj::set_allowInteraction(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d4c0c1aa57b56fd7_520_set_allowInteraction)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("allowInteraction",c9,55,84,63),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("allowInteraction",c9,55,84,63)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_allowInteraction,return )

 ::haxe::ui::core::ComponentContainer InteractiveComponent_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_a1a44ffe085454d1_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::core::InteractiveComponent c = ( ( ::haxe::ui::core::InteractiveComponent)(this->super::cloneComponent()) );
HXLINE( 382)		c->set_allowInteraction(this->get_allowInteraction());
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


 ::haxe::ui::core::ComponentContainer InteractiveComponent_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_d4c0c1aa57b56fd7_423_self)
HXDLIN( 423)		return  ::haxe::ui::core::InteractiveComponent_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< InteractiveComponent_obj > InteractiveComponent_obj::__new() {
	::hx::ObjectPtr< InteractiveComponent_obj > __this = new InteractiveComponent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InteractiveComponent_obj > InteractiveComponent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InteractiveComponent_obj *__this = (InteractiveComponent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InteractiveComponent_obj), true, "haxe.ui.core.InteractiveComponent"));
	*(void **)__this = InteractiveComponent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InteractiveComponent_obj::InteractiveComponent_obj()
{
}

::hx::Val InteractiveComponent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focus() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { return ::hx::Val( _focus ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_focus") ) { return ::hx::Val( get_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return ::hx::Val( set_focus_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowFocus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowFocus() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { return ::hx::Val( _allowFocus ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"findScroller") ) { return ::hx::Val( findScroller_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_allowFocus") ) { return ::hx::Val( get_allowFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowFocus") ) { return ::hx::Val( set_allowFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowInteraction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowInteraction() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actionRepeatInterval") ) { return ::hx::Val( actionRepeatInterval ); }
		if (HX_FIELD_EQ(inName,"get_allowInteraction") ) { return ::hx::Val( get_allowInteraction_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowInteraction") ) { return ::hx::Val( set_allowInteraction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InteractiveComponent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focus(inValue.Cast< bool >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { _focus=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowFocus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowFocus(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { _allowFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowInteraction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowInteraction(inValue.Cast< bool >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actionRepeatInterval") ) { actionRepeatInterval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractiveComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("actionRepeatInterval",16,c2,3a,1d));
	outFields->push(HX_("_focus",19,a7,70,00));
	outFields->push(HX_("focus",d8,5f,89,04));
	outFields->push(HX_("_allowFocus",ae,e7,de,01));
	outFields->push(HX_("allowFocus",8f,1a,55,2f));
	outFields->push(HX_("allowInteraction",c9,55,84,63));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InteractiveComponent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(InteractiveComponent_obj,actionRepeatInterval),HX_("actionRepeatInterval",16,c2,3a,1d)},
	{::hx::fsBool,(int)offsetof(InteractiveComponent_obj,_focus),HX_("_focus",19,a7,70,00)},
	{::hx::fsBool,(int)offsetof(InteractiveComponent_obj,_allowFocus),HX_("_allowFocus",ae,e7,de,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InteractiveComponent_obj_sStaticStorageInfo = 0;
#endif

static ::String InteractiveComponent_obj_sMemberFields[] = {
	HX_("actionRepeatInterval",16,c2,3a,1d),
	HX_("_focus",19,a7,70,00),
	HX_("get_focus",2f,bc,32,48),
	HX_("set_focus",3b,a8,83,2b),
	HX_("_allowFocus",ae,e7,de,01),
	HX_("get_allowFocus",d8,a2,4a,a5),
	HX_("set_allowFocus",4c,8b,6a,c5),
	HX_("findScroller",13,fb,d2,79),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_allowInteraction",d2,ba,ee,81),
	HX_("set_allowInteraction",46,72,a6,4e),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class InteractiveComponent_obj::__mClass;

void InteractiveComponent_obj::__register()
{
	InteractiveComponent_obj _hx_dummy;
	InteractiveComponent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.InteractiveComponent",b8,f0,c2,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InteractiveComponent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InteractiveComponent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InteractiveComponent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InteractiveComponent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
