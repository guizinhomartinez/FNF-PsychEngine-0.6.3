#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressBuilder
#include <haxe/ui/components/ProgressBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components_RangeBuilder
#include <haxe/ui/components/RangeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Progress_Indeterminate
#include <haxe/ui/components/_Progress/Indeterminate.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Progress_Min
#include <haxe/ui/components/_Progress/Min.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Progress_Pos
#include <haxe/ui/components/_Progress/Pos.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1fc04db343474ce8_20_new,"haxe.ui.components.Progress","new",0x9d8390c5,"haxe.ui.components.Progress.new","haxe/ui/components/Progress.hx",20,0x4b000a8a)
static const ::String _hx_array_data_3758ca53_1[] = {
	HX_("min",92,11,53,00),HX_("max",a4,0a,53,00),HX_("pos",94,5d,55,00),HX_("indeterminate",fb,f6,49,0e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_53_get_cssName,"haxe.ui.components.Progress","get_cssName",0x2ced4d2a,"haxe.ui.components.Progress.get_cssName","haxe/ui/components/Progress.hx",53,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_e44bd98550140bda_138_registerComposite,"haxe.ui.components.Progress","registerComposite",0x2f05ac49,"haxe.ui.components.Progress.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e44bd98550140bda_441_registerBehaviours,"haxe.ui.components.Progress","registerBehaviours",0x78f02114,"haxe.ui.components.Progress.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e44bd98550140bda_475_get_indeterminate,"haxe.ui.components.Progress","get_indeterminate",0x453fc977,"haxe.ui.components.Progress.get_indeterminate","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e44bd98550140bda_520_set_indeterminate,"haxe.ui.components.Progress","set_indeterminate",0x68ada183,"haxe.ui.components.Progress.set_indeterminate","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e44bd98550140bda_475_get_pos,"haxe.ui.components.Progress","get_pos",0x9e527d10,"haxe.ui.components.Progress.get_pos","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e44bd98550140bda_491_set_pos,"haxe.ui.components.Progress","set_pos",0x91540e1c,"haxe.ui.components.Progress.set_pos","haxe/ui/macros/Macros.hx",491,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e44bd98550140bda_602_get_value,"haxe.ui.components.Progress","get_value",0x20d975ed,"haxe.ui.components.Progress.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e44bd98550140bda_605_set_value,"haxe.ui.components.Progress","set_value",0x042a61f9,"haxe.ui.components.Progress.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a1772851c9fd4503_565_cloneComponent,"haxe.ui.components.Progress","cloneComponent",0x4c45695b,"haxe.ui.components.Progress.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_e44bd98550140bda_423_self,"haxe.ui.components.Progress","self",0x38e92387,"haxe.ui.components.Progress.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Progress_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_20_new)
HXLINE(  21)		super::__construct();
HXLINE(  22)		this->behaviours->set_updateOrder(::Array_obj< ::String >::fromData( _hx_array_data_3758ca53_1,4));
            	}

Dynamic Progress_obj::__CreateEmpty() { return new Progress_obj; }

void *Progress_obj::_hx_vtable = 0;

Dynamic Progress_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Progress_obj > _hx_result = new Progress_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Progress_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0eaf7545) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0eaf7545;
				}
			} else {
				return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
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
			if (inClassId<=(int)0x4c0b8d25) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x395782b4 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x4c0b8d25;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

static ::haxe::ui::core::IDirectionalComponent_obj _hx_haxe_ui_components_Progress__hx_haxe_ui_core_IDirectionalComponent= {
};

static ::haxe::ui::core::IValueComponent_obj _hx_haxe_ui_components_Progress__hx_haxe_ui_core_IValueComponent= {
	(  ::Dynamic (::hx::Object::*)())&::haxe::ui::components::Progress_obj::get_value,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ui::components::Progress_obj::set_value,
};

void *Progress_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4b5f75e3: return &_hx_haxe_ui_components_Progress__hx_haxe_ui_core_IDirectionalComponent;
		case (int)0x9229be7c: return &_hx_haxe_ui_components_Progress__hx_haxe_ui_core_IValueComponent;
	}
	return super::_hx_getInterface(inHash);
}

::String Progress_obj::get_cssName(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_53_get_cssName)
HXDLIN(  53)		return HX_("progress",ad,f7,2a,86);
            	}


void Progress_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_e44bd98550140bda_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::ProgressBuilder >();
            	}


void Progress_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_e44bd98550140bda_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("indeterminate",fb,f6,49,0e),::hx::ClassOf< ::haxe::ui::components::_Progress::Indeterminate >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("pos",94,5d,55,00),::hx::ClassOf< ::haxe::ui::components::_Progress::Pos >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("min",92,11,53,00),::hx::ClassOf< ::haxe::ui::components::_Progress::Min >(),null());
            	}


bool Progress_obj::get_indeterminate(){
            	HX_STACKFRAME(&_hx_pos_e44bd98550140bda_475_get_indeterminate)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("indeterminate",fb,f6,49,0e)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_indeterminate,return )

bool Progress_obj::set_indeterminate(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e44bd98550140bda_520_set_indeterminate)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("indeterminate",fb,f6,49,0e),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("indeterminate",fb,f6,49,0e)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_indeterminate,return )

Float Progress_obj::get_pos(){
            	HX_STACKFRAME(&_hx_pos_e44bd98550140bda_475_get_pos)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("pos",94,5d,55,00)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_pos,return )

Float Progress_obj::set_pos(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e44bd98550140bda_491_set_pos)
HXLINE( 492)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 492)		_hx_tmp->set(HX_("pos",94,5d,55,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 493)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("pos",94,5d,55,00)));
HXLINE( 494)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_pos,return )

 ::Dynamic Progress_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_e44bd98550140bda_602_get_value)
HXDLIN( 602)		return this->get_pos();
            	}


 ::Dynamic Progress_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e44bd98550140bda_605_set_value)
HXLINE( 606)		this->set_pos(( (Float)(value) ));
HXLINE( 607)		return value;
            	}


 ::haxe::ui::core::ComponentContainer Progress_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_a1772851c9fd4503_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Progress c = ( ( ::haxe::ui::components::Progress)(this->super::cloneComponent()) );
HXLINE( 382)		c->set_indeterminate(this->get_indeterminate());
HXDLIN( 382)		c->set_pos(this->get_pos());
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


 ::haxe::ui::core::ComponentContainer Progress_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_e44bd98550140bda_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Progress_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Progress_obj > Progress_obj::__new() {
	::hx::ObjectPtr< Progress_obj > __this = new Progress_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Progress_obj > Progress_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Progress_obj *__this = (Progress_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Progress_obj), true, "haxe.ui.components.Progress"));
	*(void **)__this = Progress_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Progress_obj::Progress_obj()
{
}

::hx::Val Progress_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pos() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pos") ) { return ::hx::Val( get_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return ::hx::Val( set_pos_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_cssName") ) { return ::hx::Val( get_cssName_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indeterminate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_indeterminate() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_indeterminate") ) { return ::hx::Val( get_indeterminate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_indeterminate") ) { return ::hx::Val( set_indeterminate_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Progress_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pos(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indeterminate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_indeterminate(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Progress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("indeterminate",fb,f6,49,0e));
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Progress_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Progress_obj_sStaticStorageInfo = 0;
#endif

static ::String Progress_obj_sMemberFields[] = {
	HX_("get_cssName",c5,1f,bf,00),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_indeterminate",52,02,ba,14),
	HX_("set_indeterminate",5e,da,27,38),
	HX_("get_pos",2b,26,ca,26),
	HX_("set_pos",37,b7,cb,19),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Progress_obj::__mClass;

void Progress_obj::__register()
{
	Progress_obj _hx_dummy;
	Progress_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Progress",53,ca,58,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Progress_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Progress_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Progress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Progress_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
