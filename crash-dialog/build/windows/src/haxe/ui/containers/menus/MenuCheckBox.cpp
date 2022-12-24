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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuCheckBox
#include <haxe/ui/containers/menus/MenuCheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuCheckBox_Builder
#include <haxe/ui/containers/menus/_MenuCheckBox/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuCheckBox_SelectedBehaviour
#include <haxe/ui/containers/menus/_MenuCheckBox/SelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuCheckBox_ShortcutTextBehaviour
#include <haxe/ui/containers/menus/_MenuCheckBox/ShortcutTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuCheckBox_TextBehaviour
#include <haxe/ui/containers/menus/_MenuCheckBox/TextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ad375ff26d5ac590_9_new,"haxe.ui.containers.menus.MenuCheckBox","new",0x8388a238,"haxe.ui.containers.menus.MenuCheckBox.new","haxe/ui/containers/menus/MenuCheckBox.hx",9,0x8c3cb656)
HX_LOCAL_STACK_FRAME(_hx_pos_a6e932314636ed38_441_registerBehaviours,"haxe.ui.containers.menus.MenuCheckBox","registerBehaviours",0xcde8a901,"haxe.ui.containers.menus.MenuCheckBox.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a6e932314636ed38_475_get_selected,"haxe.ui.containers.menus.MenuCheckBox","get_selected",0xe785118c,"haxe.ui.containers.menus.MenuCheckBox.get_selected","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a6e932314636ed38_520_set_selected,"haxe.ui.containers.menus.MenuCheckBox","set_selected",0xfc7e3500,"haxe.ui.containers.menus.MenuCheckBox.set_selected","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1d8ec6e8aaee03f7_565_cloneComponent,"haxe.ui.containers.menus.MenuCheckBox","cloneComponent",0x89a636c8,"haxe.ui.containers.menus.MenuCheckBox.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_a6e932314636ed38_423_self,"haxe.ui.containers.menus.MenuCheckBox","self",0x975356b4,"haxe.ui.containers.menus.MenuCheckBox.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a6e932314636ed38_138_registerComposite,"haxe.ui.containers.menus.MenuCheckBox","registerComposite",0x566f40fc,"haxe.ui.containers.menus.MenuCheckBox.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{

void MenuCheckBox_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ad375ff26d5ac590_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic MenuCheckBox_obj::__CreateEmpty() { return new MenuCheckBox_obj; }

void *MenuCheckBox_obj::_hx_vtable = 0;

Dynamic MenuCheckBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuCheckBox_obj > _hx_result = new MenuCheckBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MenuCheckBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2570d72f) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2570d72f;
			}
		}
	} else {
		if (inClassId<=(int)0x4ba87886) {
			if (inClassId<=(int)0x48332f1a) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x264587e2 || inClassId==(int)0x2ccba775;
				} else {
					return inClassId==(int)0x48332f1a;
				}
			} else {
				return inClassId==(int)0x4ba87886;
			}
		} else {
			if (inClassId<=(int)0x72c347e4) {
				return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
			} else {
				return inClassId==(int)0x7ec24579;
			}
		}
	}
}

void MenuCheckBox_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_a6e932314636ed38_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuCheckBox::TextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("shortcutText",53,aa,dc,fc),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuCheckBox::ShortcutTextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selected",5b,2a,6d,b1),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuCheckBox::SelectedBehaviour >(),null());
            	}


bool MenuCheckBox_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_a6e932314636ed38_475_get_selected)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("selected",5b,2a,6d,b1)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCheckBox_obj,get_selected,return )

bool MenuCheckBox_obj::set_selected(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_a6e932314636ed38_520_set_selected)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selected",5b,2a,6d,b1)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCheckBox_obj,set_selected,return )

 ::haxe::ui::core::ComponentContainer MenuCheckBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_1d8ec6e8aaee03f7_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::menus::MenuCheckBox c = ( ( ::haxe::ui::containers::menus::MenuCheckBox)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer MenuCheckBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_a6e932314636ed38_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::menus::MenuCheckBox_obj::__alloc( HX_CTX );
            	}


void MenuCheckBox_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_a6e932314636ed38_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::menus::_MenuCheckBox::Builder >();
            	}



::hx::ObjectPtr< MenuCheckBox_obj > MenuCheckBox_obj::__new() {
	::hx::ObjectPtr< MenuCheckBox_obj > __this = new MenuCheckBox_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MenuCheckBox_obj > MenuCheckBox_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MenuCheckBox_obj *__this = (MenuCheckBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuCheckBox_obj), true, "haxe.ui.containers.menus.MenuCheckBox"));
	*(void **)__this = MenuCheckBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MenuCheckBox_obj::MenuCheckBox_obj()
{
}

::hx::Val MenuCheckBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selected() ); }
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

::hx::Val MenuCheckBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuCheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selected",5b,2a,6d,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuCheckBox_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuCheckBox_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuCheckBox_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class MenuCheckBox_obj::__mClass;

void MenuCheckBox_obj::__register()
{
	MenuCheckBox_obj _hx_dummy;
	MenuCheckBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus.MenuCheckBox",46,66,15,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuCheckBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuCheckBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuCheckBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuCheckBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
