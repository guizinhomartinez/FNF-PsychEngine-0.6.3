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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuOptionBox
#include <haxe/ui/containers/menus/MenuOptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuOptionBox_Builder
#include <haxe/ui/containers/menus/_MenuOptionBox/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuOptionBox_GroupBehaviour
#include <haxe/ui/containers/menus/_MenuOptionBox/GroupBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuOptionBox_SelectedBehaviour
#include <haxe/ui/containers/menus/_MenuOptionBox/SelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuOptionBox_ShortcutTextBehaviour
#include <haxe/ui/containers/menus/_MenuOptionBox/ShortcutTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuOptionBox_TextBehaviour
#include <haxe/ui/containers/menus/_MenuOptionBox/TextBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f4668ad064db0096_9_new,"haxe.ui.containers.menus.MenuOptionBox","new",0x9f22e285,"haxe.ui.containers.menus.MenuOptionBox.new","haxe/ui/containers/menus/MenuOptionBox.hx",9,0x896244ad)
HX_LOCAL_STACK_FRAME(_hx_pos_047663693d5aacfc_441_registerBehaviours,"haxe.ui.containers.menus.MenuOptionBox","registerBehaviours",0xc352c754,"haxe.ui.containers.menus.MenuOptionBox.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_047663693d5aacfc_475_get_componentGroup,"haxe.ui.containers.menus.MenuOptionBox","get_componentGroup",0x13806586,"haxe.ui.containers.menus.MenuOptionBox.get_componentGroup","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_047663693d5aacfc_506_set_componentGroup,"haxe.ui.containers.menus.MenuOptionBox","set_componentGroup",0xf02f97fa,"haxe.ui.containers.menus.MenuOptionBox.set_componentGroup","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_047663693d5aacfc_475_get_selected,"haxe.ui.containers.menus.MenuOptionBox","get_selected",0xfd08df9f,"haxe.ui.containers.menus.MenuOptionBox.get_selected","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_047663693d5aacfc_520_set_selected,"haxe.ui.containers.menus.MenuOptionBox","set_selected",0x12020313,"haxe.ui.containers.menus.MenuOptionBox.set_selected","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8772e191e8c448dd_565_cloneComponent,"haxe.ui.containers.menus.MenuOptionBox","cloneComponent",0xe247ef9b,"haxe.ui.containers.menus.MenuOptionBox.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_047663693d5aacfc_423_self,"haxe.ui.containers.menus.MenuOptionBox","self",0xa2b159c7,"haxe.ui.containers.menus.MenuOptionBox.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_047663693d5aacfc_138_registerComposite,"haxe.ui.containers.menus.MenuOptionBox","registerComposite",0x83288e09,"haxe.ui.containers.menus.MenuOptionBox.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{

void MenuOptionBox_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f4668ad064db0096_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic MenuOptionBox_obj::__CreateEmpty() { return new MenuOptionBox_obj; }

void *MenuOptionBox_obj::_hx_vtable = 0;

Dynamic MenuOptionBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuOptionBox_obj > _hx_result = new MenuOptionBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MenuOptionBox_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x5fbf562f) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x48332f1a) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x48332f1a;
				} else {
					return inClassId==(int)0x4ba87886;
				}
			} else {
				return inClassId==(int)0x5fbf562f;
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

void MenuOptionBox_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_047663693d5aacfc_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("componentGroup",42,65,fb,e8),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuOptionBox::GroupBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuOptionBox::TextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("shortcutText",53,aa,dc,fc),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuOptionBox::ShortcutTextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selected",5b,2a,6d,b1),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuOptionBox::SelectedBehaviour >(),null());
            	}


::String MenuOptionBox_obj::get_componentGroup(){
            	HX_STACKFRAME(&_hx_pos_047663693d5aacfc_475_get_componentGroup)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("componentGroup",42,65,fb,e8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuOptionBox_obj,get_componentGroup,return )

::String MenuOptionBox_obj::set_componentGroup(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_047663693d5aacfc_506_set_componentGroup)
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


HX_DEFINE_DYNAMIC_FUNC1(MenuOptionBox_obj,set_componentGroup,return )

bool MenuOptionBox_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_047663693d5aacfc_475_get_selected)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("selected",5b,2a,6d,b1)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuOptionBox_obj,get_selected,return )

bool MenuOptionBox_obj::set_selected(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_047663693d5aacfc_520_set_selected)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selected",5b,2a,6d,b1)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuOptionBox_obj,set_selected,return )

 ::haxe::ui::core::ComponentContainer MenuOptionBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8772e191e8c448dd_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::menus::MenuOptionBox c = ( ( ::haxe::ui::containers::menus::MenuOptionBox)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_componentGroup() )) {
HXLINE( 380)			c->set_componentGroup(this->get_componentGroup());
            		}
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


 ::haxe::ui::core::ComponentContainer MenuOptionBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_047663693d5aacfc_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::menus::MenuOptionBox_obj::__alloc( HX_CTX );
            	}


void MenuOptionBox_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_047663693d5aacfc_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::menus::_MenuOptionBox::Builder >();
            	}



::hx::ObjectPtr< MenuOptionBox_obj > MenuOptionBox_obj::__new() {
	::hx::ObjectPtr< MenuOptionBox_obj > __this = new MenuOptionBox_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MenuOptionBox_obj > MenuOptionBox_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MenuOptionBox_obj *__this = (MenuOptionBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuOptionBox_obj), true, "haxe.ui.containers.menus.MenuOptionBox"));
	*(void **)__this = MenuOptionBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MenuOptionBox_obj::MenuOptionBox_obj()
{
}

::hx::Val MenuOptionBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"componentGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentGroup() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_componentGroup") ) { return ::hx::Val( get_componentGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentGroup") ) { return ::hx::Val( set_componentGroup_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuOptionBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"componentGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentGroup(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuOptionBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("componentGroup",42,65,fb,e8));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuOptionBox_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuOptionBox_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuOptionBox_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_componentGroup",0b,46,95,84),
	HX_("set_componentGroup",7f,78,44,61),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class MenuOptionBox_obj::__mClass;

void MenuOptionBox_obj::__register()
{
	MenuOptionBox_obj _hx_dummy;
	MenuOptionBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus.MenuOptionBox",13,3c,fc,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuOptionBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuOptionBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuOptionBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuOptionBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
