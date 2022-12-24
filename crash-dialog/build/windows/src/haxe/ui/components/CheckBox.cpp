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
#ifndef INCLUDED_haxe_ui_components__CheckBox_CheckBoxLayout
#include <haxe/ui/components/_CheckBox/CheckBoxLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__CheckBox_Events
#include <haxe/ui/components/_CheckBox/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__CheckBox_SelectedBehaviour
#include <haxe/ui/components/_CheckBox/SelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__CheckBox_TextBehaviour
#include <haxe/ui/components/_CheckBox/TextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_20_new,"haxe.ui.components.CheckBox","new",0x772f963b,"haxe.ui.components.CheckBox.new","haxe/ui/components/CheckBox.hx",20,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_39f2bf3d24dfb79e_441_registerBehaviours,"haxe.ui.components.CheckBox","registerBehaviours",0x21c4b05e,"haxe.ui.components.CheckBox.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_39f2bf3d24dfb79e_475_get_selected,"haxe.ui.components.CheckBox","get_selected",0x8a3f0529,"haxe.ui.components.CheckBox.get_selected","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_39f2bf3d24dfb79e_491_set_selected,"haxe.ui.components.CheckBox","set_selected",0x9f38289d,"haxe.ui.components.CheckBox.set_selected","haxe/ui/macros/Macros.hx",491,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_39f2bf3d24dfb79e_602_get_value,"haxe.ui.components.CheckBox","get_value",0x99bbf7e3,"haxe.ui.components.CheckBox.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_39f2bf3d24dfb79e_605_set_value,"haxe.ui.components.CheckBox","set_value",0x7d0ce3ef,"haxe.ui.components.CheckBox.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d710c416e4696eb2_565_cloneComponent,"haxe.ui.components.CheckBox","cloneComponent",0xc57a0ba5,"haxe.ui.components.CheckBox.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_39f2bf3d24dfb79e_423_self,"haxe.ui.components.CheckBox","self",0xd5c1e551,"haxe.ui.components.CheckBox.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_39f2bf3d24dfb79e_138_registerComposite,"haxe.ui.components.CheckBox","registerComposite",0xb3cc143f,"haxe.ui.components.CheckBox.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void CheckBox_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_20_new)
HXDLIN(  20)		super::__construct();
            	}

Dynamic CheckBox_obj::__CreateEmpty() { return new CheckBox_obj; }

void *CheckBox_obj::_hx_vtable = 0;

Dynamic CheckBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CheckBox_obj > _hx_result = new CheckBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CheckBox_obj::_hx_isInstanceOf(int inClassId) {
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

void CheckBox_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_39f2bf3d24dfb79e_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::components::_CheckBox::TextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selected",5b,2a,6d,b1),::hx::ClassOf< ::haxe::ui::components::_CheckBox::SelectedBehaviour >(),null());
            	}


bool CheckBox_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_39f2bf3d24dfb79e_475_get_selected)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("selected",5b,2a,6d,b1)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_selected,return )

bool CheckBox_obj::set_selected(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_39f2bf3d24dfb79e_491_set_selected)
HXLINE( 492)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 492)		_hx_tmp->set(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 493)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selected",5b,2a,6d,b1)));
HXLINE( 494)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_selected,return )

 ::Dynamic CheckBox_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_39f2bf3d24dfb79e_602_get_value)
HXDLIN( 602)		return this->get_selected();
            	}


 ::Dynamic CheckBox_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_39f2bf3d24dfb79e_605_set_value)
HXLINE( 606)		this->set_selected(( (bool)(value) ));
HXLINE( 607)		return value;
            	}


 ::haxe::ui::core::ComponentContainer CheckBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_d710c416e4696eb2_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::CheckBox c = ( ( ::haxe::ui::components::CheckBox)(this->super::cloneComponent()) );
HXLINE( 382)		c->set_selected(this->get_selected());
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


 ::haxe::ui::core::ComponentContainer CheckBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_39f2bf3d24dfb79e_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::CheckBox_obj::__alloc( HX_CTX );
            	}


void CheckBox_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_39f2bf3d24dfb79e_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::_CheckBox::Events >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::CheckBoxBuilder >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_CheckBox::CheckBoxLayout >();
            	}



::hx::ObjectPtr< CheckBox_obj > CheckBox_obj::__new() {
	::hx::ObjectPtr< CheckBox_obj > __this = new CheckBox_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CheckBox_obj > CheckBox_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CheckBox_obj *__this = (CheckBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CheckBox_obj), true, "haxe.ui.components.CheckBox"));
	*(void **)__this = CheckBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CheckBox_obj::CheckBox_obj()
{
}

::hx::Val CheckBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selected() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return ::hx::Val( set_selected_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CheckBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selected",5b,2a,6d,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CheckBox_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CheckBox_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBox_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class CheckBox_obj::__mClass;

void CheckBox_obj::__register()
{
	CheckBox_obj _hx_dummy;
	CheckBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.CheckBox",c9,5c,0b,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CheckBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CheckBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
