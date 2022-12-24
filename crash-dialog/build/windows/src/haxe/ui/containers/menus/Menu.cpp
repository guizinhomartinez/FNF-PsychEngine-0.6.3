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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e05cebb125e56e52_45_new,"haxe.ui.containers.menus.Menu","new",0x808ac375,"haxe.ui.containers.menus.Menu.new","haxe/ui/containers/menus/Menu.hx",45,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_e05cebb125e56e52_53_onThemeChanged,"haxe.ui.containers.menus.Menu","onThemeChanged",0xe18468b5,"haxe.ui.containers.menus.Menu.onThemeChanged","haxe/ui/containers/menus/Menu.hx",53,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_f1f87fbf830f0573_138_registerComposite,"haxe.ui.containers.menus.Menu","registerComposite",0x427e32f9,"haxe.ui.containers.menus.Menu.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1f87fbf830f0573_167_set_onMenuSelected,"haxe.ui.containers.menus.Menu","set_onMenuSelected",0x4673a2a1,"haxe.ui.containers.menus.Menu.set_onMenuSelected","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1f87fbf830f0573_441_registerBehaviours,"haxe.ui.containers.menus.Menu","registerBehaviours",0x6eed7464,"haxe.ui.containers.menus.Menu.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1f87fbf830f0573_475_get_menuStyleNames,"haxe.ui.containers.menus.Menu","get_menuStyleNames",0x71f1bcaa,"haxe.ui.containers.menus.Menu.get_menuStyleNames","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1f87fbf830f0573_506_set_menuStyleNames,"haxe.ui.containers.menus.Menu","set_menuStyleNames",0x4ea0ef1e,"haxe.ui.containers.menus.Menu.set_menuStyleNames","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_0dabe13781341015_565_cloneComponent,"haxe.ui.containers.menus.Menu","cloneComponent",0xdfa2d4ab,"haxe.ui.containers.menus.Menu.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_f1f87fbf830f0573_423_self,"haxe.ui.containers.menus.Menu","self",0xfc2e4ad7,"haxe.ui.containers.menus.Menu.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{

void Menu_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e05cebb125e56e52_45_new)
HXDLIN(  45)		super::__construct();
            	}

Dynamic Menu_obj::__CreateEmpty() { return new Menu_obj; }

void *Menu_obj::_hx_vtable = 0;

Dynamic Menu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Menu_obj > _hx_result = new Menu_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Menu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x29bd7e67) {
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
				return inClassId==(int)0x29bd7e67;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x2eb1d3e1) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x2eb1d3e1;
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

void Menu_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_e05cebb125e56e52_53_onThemeChanged)
HXLINE(  54)		this->super::onThemeChanged();
HXLINE(  55)		 ::haxe::ui::containers::menus::_Menu::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_Menu::Builder >::cast(this->_compositeBuilder);
HXLINE(  56)		builder->onThemeChanged();
            	}


void Menu_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_f1f87fbf830f0573_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::menus::MenuEvents >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::menus::_Menu::Builder >();
            	}


 ::Dynamic Menu_obj::set_onMenuSelected( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f1f87fbf830f0573_167_set_onMenuSelected)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onMenuSelected )) {
HXLINE( 169)			this->unregisterEvent(HX_("menuselected",fa,a6,03,90),this->_internal__onMenuSelected);
HXLINE( 170)			this->_internal__onMenuSelected = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onMenuSelected = value;
HXLINE( 174)			this->registerEvent(HX_("menuselected",fa,a6,03,90),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,set_onMenuSelected,return )

void Menu_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_f1f87fbf830f0573_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("menuStyleNames",56,0f,d2,9b),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


::String Menu_obj::get_menuStyleNames(){
            	HX_STACKFRAME(&_hx_pos_f1f87fbf830f0573_475_get_menuStyleNames)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("menuStyleNames",56,0f,d2,9b)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,get_menuStyleNames,return )

::String Menu_obj::set_menuStyleNames(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_f1f87fbf830f0573_506_set_menuStyleNames)
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
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("menuStyleNames",56,0f,d2,9b),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("menuStyleNames",56,0f,d2,9b),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("menuStyleNames",56,0f,d2,9b)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,set_menuStyleNames,return )

 ::haxe::ui::core::ComponentContainer Menu_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_0dabe13781341015_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::menus::Menu c = ( ( ::haxe::ui::containers::menus::Menu)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer Menu_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_f1f87fbf830f0573_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::menus::Menu_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Menu_obj > Menu_obj::__new() {
	::hx::ObjectPtr< Menu_obj > __this = new Menu_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Menu_obj > Menu_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Menu_obj *__this = (Menu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Menu_obj), true, "haxe.ui.containers.menus.Menu"));
	*(void **)__this = Menu_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Menu_obj::Menu_obj()
{
}

void Menu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Menu);
	HX_MARK_MEMBER_NAME(_internal__onMenuSelected,"_internal__onMenuSelected");
	HX_MARK_MEMBER_NAME(onMenuSelected,"onMenuSelected");
	 ::haxe::ui::containers::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Menu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_internal__onMenuSelected,"_internal__onMenuSelected");
	HX_VISIT_MEMBER_NAME(onMenuSelected,"onMenuSelected");
	 ::haxe::ui::containers::Box_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Menu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMenuSelected") ) { return ::hx::Val( onMenuSelected ); }
		if (HX_FIELD_EQ(inName,"menuStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_menuStyleNames() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_onMenuSelected") ) { return ::hx::Val( set_onMenuSelected_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_menuStyleNames") ) { return ::hx::Val( get_menuStyleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_menuStyleNames") ) { return ::hx::Val( set_menuStyleNames_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_internal__onMenuSelected") ) { return ::hx::Val( _internal__onMenuSelected ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Menu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"onMenuSelected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMenuSelected(inValue.Cast<  ::Dynamic >()) );onMenuSelected=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_menuStyleNames(inValue.Cast< ::String >()) ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_internal__onMenuSelected") ) { _internal__onMenuSelected=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Menu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menuStyleNames",56,0f,d2,9b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Menu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Menu_obj,_internal__onMenuSelected),HX_("_internal__onMenuSelected",95,a4,a0,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Menu_obj,onMenuSelected),HX_("onMenuSelected",d9,c2,a4,93)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Menu_obj_sStaticStorageInfo = 0;
#endif

static ::String Menu_obj_sMemberFields[] = {
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("_internal__onMenuSelected",95,a4,a0,63),
	HX_("onMenuSelected",d9,c2,a4,93),
	HX_("set_onMenuSelected",16,d6,ed,0b),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_menuStyleNames",1f,f0,6b,37),
	HX_("set_menuStyleNames",93,22,1b,14),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Menu_obj::__mClass;

void Menu_obj::__register()
{
	Menu_obj _hx_dummy;
	Menu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus.Menu",03,e5,c4,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Menu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Menu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Menu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Menu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
