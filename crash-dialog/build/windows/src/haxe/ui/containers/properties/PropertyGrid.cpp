#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyGrid
#include <haxe/ui/containers/properties/PropertyGrid.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGrid_Builder
#include <haxe/ui/containers/properties/_PropertyGrid/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGrid_Events
#include <haxe/ui/containers/properties/_PropertyGrid/Events.h>
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
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
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
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_16350cdb84993548_10_new,"haxe.ui.containers.properties.PropertyGrid","new",0x85efb55e,"haxe.ui.containers.properties.PropertyGrid.new","haxe/ui/containers/properties/PropertyGrid.hx",10,0xa23bcb92)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_138_registerComposite,"haxe.ui.containers.properties.PropertyGrid","registerComposite",0xe94b4aa2,"haxe.ui.containers.properties.PropertyGrid.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_441_registerBehaviours,"haxe.ui.containers.properties.PropertyGrid","registerBehaviours",0xbb95109b,"haxe.ui.containers.properties.PropertyGrid.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_475_get_popupStyleNames,"haxe.ui.containers.properties.PropertyGrid","get_popupStyleNames",0xe204f638,"haxe.ui.containers.properties.PropertyGrid.get_popupStyleNames","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_506_set_popupStyleNames,"haxe.ui.containers.properties.PropertyGrid","set_popupStyleNames",0x1ea1e944,"haxe.ui.containers.properties.PropertyGrid.set_popupStyleNames","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8067355f8c7edd2a_565_cloneComponent,"haxe.ui.containers.properties.PropertyGrid","cloneComponent",0xda2c4962,"haxe.ui.containers.properties.PropertyGrid.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_423_self,"haxe.ui.containers.properties.PropertyGrid","self",0xaf1d04ce,"haxe.ui.containers.properties.PropertyGrid.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{

void PropertyGrid_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_16350cdb84993548_10_new)
HXDLIN(  10)		super::__construct();
            	}

Dynamic PropertyGrid_obj::__CreateEmpty() { return new PropertyGrid_obj; }

void *PropertyGrid_obj::_hx_vtable = 0;

Dynamic PropertyGrid_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyGrid_obj > _hx_result = new PropertyGrid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PropertyGrid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x01557b4b) {
				if (inClassId<=(int)0x013442be) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x013442be;
				} else {
					return inClassId==(int)0x01557b4b;
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
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x433ebabe) {
					return inClassId==(int)0x395782b4 || inClassId==(int)0x433ebabe;
				} else {
					return inClassId==(int)0x4ba87886;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void PropertyGrid_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_19d410d7a2baa776_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::properties::_PropertyGrid::Events >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::properties::_PropertyGrid::Builder >();
            	}


void PropertyGrid_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_19d410d7a2baa776_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("popupStyleNames",23,e6,6b,96),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


::String PropertyGrid_obj::get_popupStyleNames(){
            	HX_STACKFRAME(&_hx_pos_19d410d7a2baa776_475_get_popupStyleNames)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("popupStyleNames",23,e6,6b,96)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PropertyGrid_obj,get_popupStyleNames,return )

::String PropertyGrid_obj::set_popupStyleNames(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_19d410d7a2baa776_506_set_popupStyleNames)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("popupStyleNames",23,e6,6b,96),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("popupStyleNames",23,e6,6b,96),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("popupStyleNames",23,e6,6b,96)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PropertyGrid_obj,set_popupStyleNames,return )

 ::haxe::ui::core::ComponentContainer PropertyGrid_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8067355f8c7edd2a_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::properties::PropertyGrid c = ( ( ::haxe::ui::containers::properties::PropertyGrid)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer PropertyGrid_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_19d410d7a2baa776_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::properties::PropertyGrid_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< PropertyGrid_obj > PropertyGrid_obj::__new() {
	::hx::ObjectPtr< PropertyGrid_obj > __this = new PropertyGrid_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PropertyGrid_obj > PropertyGrid_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PropertyGrid_obj *__this = (PropertyGrid_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyGrid_obj), true, "haxe.ui.containers.properties.PropertyGrid"));
	*(void **)__this = PropertyGrid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PropertyGrid_obj::PropertyGrid_obj()
{
}

::hx::Val PropertyGrid_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"popupStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_popupStyleNames() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_popupStyleNames") ) { return ::hx::Val( get_popupStyleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_popupStyleNames") ) { return ::hx::Val( set_popupStyleNames_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PropertyGrid_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"popupStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_popupStyleNames(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("popupStyleNames",23,e6,6b,96));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PropertyGrid_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PropertyGrid_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyGrid_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_popupStyleNames",3a,b5,76,21),
	HX_("set_popupStyleNames",46,a8,13,5e),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class PropertyGrid_obj::__mClass;

void PropertyGrid_obj::__register()
{
	PropertyGrid_obj _hx_dummy;
	PropertyGrid_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties.PropertyGrid",6c,6e,1e,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyGrid_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyGrid_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyGrid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyGrid_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
