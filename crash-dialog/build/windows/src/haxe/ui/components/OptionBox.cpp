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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxBuilder
#include <haxe/ui/components/CheckBoxBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxBuilder
#include <haxe/ui/components/OptionBoxBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__OptionBox_GroupBehaviour
#include <haxe/ui/components/_OptionBox/GroupBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__OptionBox_ResetGroup
#include <haxe/ui/components/_OptionBox/ResetGroup.h>
#endif
#ifndef INCLUDED_haxe_ui_components__OptionBox_SelectedBehaviour
#include <haxe/ui/components/_OptionBox/SelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__OptionBox_SelectedOptionBehaviour
#include <haxe/ui/components/_OptionBox/SelectedOptionBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_37f62898eeef3e5f_13_new,"haxe.ui.components.OptionBox","new",0xdd917122,"haxe.ui.components.OptionBox.new","haxe/ui/components/OptionBox.hx",13,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_557_resetGroup,"haxe.ui.components.OptionBox","resetGroup",0x5681c66e,"haxe.ui.components.OptionBox.resetGroup","haxe/ui/macros/Macros.hx",557,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_138_registerComposite,"haxe.ui.components.OptionBox","registerComposite",0xd7049566,"haxe.ui.components.OptionBox.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_441_registerBehaviours,"haxe.ui.components.OptionBox","registerBehaviours",0xcffd3157,"haxe.ui.components.OptionBox.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_475_get_componentGroup,"haxe.ui.components.OptionBox","get_componentGroup",0x202acf89,"haxe.ui.components.OptionBox.get_componentGroup","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_506_set_componentGroup,"haxe.ui.components.OptionBox","set_componentGroup",0xfcda01fd,"haxe.ui.components.OptionBox.set_componentGroup","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_468_get_selectedOption,"haxe.ui.components.OptionBox","get_selectedOption",0xe6089277,"haxe.ui.components.OptionBox.get_selectedOption","haxe/ui/macros/Macros.hx",468,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_520_set_selectedOption,"haxe.ui.components.OptionBox","set_selectedOption",0xc2b7c4eb,"haxe.ui.components.OptionBox.set_selectedOption","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_602_get_value,"haxe.ui.components.OptionBox","get_value",0x4bdb7a0a,"haxe.ui.components.OptionBox.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_605_set_value,"haxe.ui.components.OptionBox","set_value",0x2f2c6616,"haxe.ui.components.OptionBox.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b797316470783867_565_cloneComponent,"haxe.ui.components.OptionBox","cloneComponent",0xffce5c1e,"haxe.ui.components.OptionBox.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_511dd42a43f8daa6_423_self,"haxe.ui.components.OptionBox","self",0x04ff948a,"haxe.ui.components.OptionBox.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void OptionBox_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_13_new)
HXDLIN(  13)		super::__construct();
            	}

Dynamic OptionBox_obj::__CreateEmpty() { return new OptionBox_obj; }

void *OptionBox_obj::_hx_vtable = 0;

Dynamic OptionBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionBox_obj > _hx_result = new OptionBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OptionBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0277f43a) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0277f43a;
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
		if (inClassId<=(int)0x72be1f9b) {
			if (inClassId<=(int)0x715d6dae) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x395782b4 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x715d6dae;
				}
			} else {
				return inClassId==(int)0x72be1f9b;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void OptionBox_obj::resetGroup(){
            	HX_STACKFRAME(&_hx_pos_511dd42a43f8daa6_557_resetGroup)
HXLINE( 558)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 559)			return;
            		}
HXLINE( 561)		this->behaviours->call(HX_("resetGroup",f0,ea,90,82),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,resetGroup,(void))

void OptionBox_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_511dd42a43f8daa6_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::OptionBoxBuilder >();
            	}


void OptionBox_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_511dd42a43f8daa6_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("componentGroup",42,65,fb,e8),::hx::ClassOf< ::haxe::ui::components::_OptionBox::GroupBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("defaultGroup",be,ee,4f,4f)));
HXLINE( 539)		this->behaviours->_hx_register(HX_("selected",5b,2a,6d,b1),::hx::ClassOf< ::haxe::ui::components::_OptionBox::SelectedBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selectedOption",30,28,d9,ae),::hx::ClassOf< ::haxe::ui::components::_OptionBox::SelectedOptionBehaviour >(),null());
HXLINE( 578)		this->behaviours->_hx_register(HX_("resetGroup",f0,ea,90,82),::hx::ClassOf< ::haxe::ui::components::_OptionBox::ResetGroup >(),null());
            	}


::String OptionBox_obj::get_componentGroup(){
            	HX_STACKFRAME(&_hx_pos_511dd42a43f8daa6_475_get_componentGroup)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("componentGroup",42,65,fb,e8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,get_componentGroup,return )

::String OptionBox_obj::set_componentGroup(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_511dd42a43f8daa6_506_set_componentGroup)
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
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("componentGroup",42,65,fb,e8),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("componentGroup",42,65,fb,e8),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("componentGroup",42,65,fb,e8)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,set_componentGroup,return )

 ::haxe::ui::core::Component OptionBox_obj::get_selectedOption(){
            	HX_STACKFRAME(&_hx_pos_511dd42a43f8daa6_468_get_selectedOption)
HXLINE( 469)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 470)			return null();
            		}
HXLINE( 472)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("selectedOption",30,28,d9,ae)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,get_selectedOption,return )

 ::haxe::ui::core::Component OptionBox_obj::set_selectedOption( ::haxe::ui::core::Component value){
            	HX_GC_STACKFRAME(&_hx_pos_511dd42a43f8daa6_520_set_selectedOption)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedOption",30,28,d9,ae),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedOption",30,28,d9,ae)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,set_selectedOption,return )

 ::Dynamic OptionBox_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_511dd42a43f8daa6_602_get_value)
HXDLIN( 602)		return this->get_selected();
            	}


 ::Dynamic OptionBox_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_511dd42a43f8daa6_605_set_value)
HXLINE( 606)		this->set_selected(( (bool)(value) ));
HXLINE( 607)		return value;
            	}


 ::haxe::ui::core::ComponentContainer OptionBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_b797316470783867_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::OptionBox c = ( ( ::haxe::ui::components::OptionBox)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_componentGroup() )) {
HXLINE( 380)			c->set_componentGroup(this->get_componentGroup());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_selectedOption() )) {
HXLINE( 380)			c->set_selectedOption(this->get_selectedOption());
            		}
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


 ::haxe::ui::core::ComponentContainer OptionBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_511dd42a43f8daa6_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::OptionBox_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< OptionBox_obj > OptionBox_obj::__new() {
	::hx::ObjectPtr< OptionBox_obj > __this = new OptionBox_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OptionBox_obj > OptionBox_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OptionBox_obj *__this = (OptionBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionBox_obj), true, "haxe.ui.components.OptionBox"));
	*(void **)__this = OptionBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OptionBox_obj::OptionBox_obj()
{
}

::hx::Val OptionBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetGroup") ) { return ::hx::Val( resetGroup_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"componentGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentGroup() ); }
		if (HX_FIELD_EQ(inName,"selectedOption") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedOption() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_componentGroup") ) { return ::hx::Val( get_componentGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentGroup") ) { return ::hx::Val( set_componentGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedOption") ) { return ::hx::Val( get_selectedOption_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedOption") ) { return ::hx::Val( set_selectedOption_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptionBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"componentGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentGroup(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"selectedOption") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedOption(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("componentGroup",42,65,fb,e8));
	outFields->push(HX_("selectedOption",30,28,d9,ae));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OptionBox_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OptionBox_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionBox_obj_sMemberFields[] = {
	HX_("resetGroup",f0,ea,90,82),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_componentGroup",0b,46,95,84),
	HX_("set_componentGroup",7f,78,44,61),
	HX_("get_selectedOption",f9,08,73,4a),
	HX_("set_selectedOption",6d,3b,22,27),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class OptionBox_obj::__mClass;

void OptionBox_obj::__register()
{
	OptionBox_obj _hx_dummy;
	OptionBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.OptionBox",30,f8,3d,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
