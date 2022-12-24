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
#ifndef INCLUDED_haxe_ui_containers_menus__MenuItem_Builder
#include <haxe/ui/containers/menus/_MenuItem/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuItem_Events
#include <haxe/ui/containers/menus/_MenuItem/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuItem_ExpandableBehaviour
#include <haxe/ui/containers/menus/_MenuItem/ExpandableBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuItem_IconBehaviour
#include <haxe/ui/containers/menus/_MenuItem/IconBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuItem_ShortcutTextBehaviour
#include <haxe/ui/containers/menus/_MenuItem/ShortcutTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuItem_TextBehaviour
#include <haxe/ui/containers/menus/_MenuItem/TextBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_30e4245e1a617a10_13_new,"haxe.ui.containers.menus.MenuItem","new",0x6d16c7a8,"haxe.ui.containers.menus.MenuItem.new","haxe/ui/containers/menus/MenuItem.hx",13,0x19b927e6)
HX_LOCAL_STACK_FRAME(_hx_pos_6e1731f701efb8a9_138_registerComposite,"haxe.ui.containers.menus.MenuItem","registerComposite",0x28aa0a6c,"haxe.ui.containers.menus.MenuItem.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6e1731f701efb8a9_441_registerBehaviours,"haxe.ui.containers.menus.MenuItem","registerBehaviours",0xef1e2191,"haxe.ui.containers.menus.MenuItem.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6e1731f701efb8a9_475_get_shortcutText,"haxe.ui.containers.menus.MenuItem","get_shortcutText",0x3fa9b294,"haxe.ui.containers.menus.MenuItem.get_shortcutText","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6e1731f701efb8a9_506_set_shortcutText,"haxe.ui.containers.menus.MenuItem","set_shortcutText",0x95eba008,"haxe.ui.containers.menus.MenuItem.set_shortcutText","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6e1731f701efb8a9_475_get_expandable,"haxe.ui.containers.menus.MenuItem","get_expandable",0x230956f5,"haxe.ui.containers.menus.MenuItem.get_expandable","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_6e1731f701efb8a9_520_set_expandable,"haxe.ui.containers.menus.MenuItem","set_expandable",0x43293f69,"haxe.ui.containers.menus.MenuItem.set_expandable","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_4b6fadb56a55645e_565_cloneComponent,"haxe.ui.containers.menus.MenuItem","cloneComponent",0x7d702758,"haxe.ui.containers.menus.MenuItem.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_6e1731f701efb8a9_423_self,"haxe.ui.containers.menus.MenuItem","self",0x0a25f344,"haxe.ui.containers.menus.MenuItem.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{

void MenuItem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_30e4245e1a617a10_13_new)
HXDLIN(  13)		super::__construct();
            	}

Dynamic MenuItem_obj::__CreateEmpty() { return new MenuItem_obj; }

void *MenuItem_obj::_hx_vtable = 0;

Dynamic MenuItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItem_obj > _hx_result = new MenuItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MenuItem_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x48332f1a) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x48332f1a;
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

void MenuItem_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_6e1731f701efb8a9_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::menus::_MenuItem::Events >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::menus::_MenuItem::Builder >();
            	}


void MenuItem_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_6e1731f701efb8a9_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuItem::TextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("shortcutText",53,aa,dc,fc),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuItem::ShortcutTextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("icon",79,e7,b2,45),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuItem::IconBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("expandable",f4,90,fa,55),::hx::ClassOf< ::haxe::ui::containers::menus::_MenuItem::ExpandableBehaviour >(),null());
            	}


::String MenuItem_obj::get_shortcutText(){
            	HX_STACKFRAME(&_hx_pos_6e1731f701efb8a9_475_get_shortcutText)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("shortcutText",53,aa,dc,fc)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,get_shortcutText,return )

::String MenuItem_obj::set_shortcutText(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_6e1731f701efb8a9_506_set_shortcutText)
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
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("shortcutText",53,aa,dc,fc),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("shortcutText",53,aa,dc,fc),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("shortcutText",53,aa,dc,fc)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuItem_obj,set_shortcutText,return )

bool MenuItem_obj::get_expandable(){
            	HX_STACKFRAME(&_hx_pos_6e1731f701efb8a9_475_get_expandable)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("expandable",f4,90,fa,55)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,get_expandable,return )

bool MenuItem_obj::set_expandable(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_6e1731f701efb8a9_520_set_expandable)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("expandable",f4,90,fa,55),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("expandable",f4,90,fa,55)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuItem_obj,set_expandable,return )

 ::haxe::ui::core::ComponentContainer MenuItem_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_4b6fadb56a55645e_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::menus::MenuItem c = ( ( ::haxe::ui::containers::menus::MenuItem)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_shortcutText() )) {
HXLINE( 380)			c->set_shortcutText(this->get_shortcutText());
            		}
HXLINE( 382)		c->set_expandable(this->get_expandable());
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


 ::haxe::ui::core::ComponentContainer MenuItem_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_6e1731f701efb8a9_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::menus::MenuItem_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new() {
	::hx::ObjectPtr< MenuItem_obj > __this = new MenuItem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MenuItem_obj *__this = (MenuItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItem_obj), true, "haxe.ui.containers.menus.MenuItem"));
	*(void **)__this = MenuItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MenuItem_obj::MenuItem_obj()
{
}

::hx::Val MenuItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"expandable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_expandable() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shortcutText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shortcutText() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_expandable") ) { return ::hx::Val( get_expandable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_expandable") ) { return ::hx::Val( set_expandable_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_shortcutText") ) { return ::hx::Val( get_shortcutText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shortcutText") ) { return ::hx::Val( set_shortcutText_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"expandable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_expandable(inValue.Cast< bool >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shortcutText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shortcutText(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shortcutText",53,aa,dc,fc));
	outFields->push(HX_("expandable",f4,90,fa,55));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuItem_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuItem_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItem_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_shortcutText",dc,96,7b,01),
	HX_("set_shortcutText",50,84,bd,57),
	HX_("get_expandable",3d,19,f0,cb),
	HX_("set_expandable",b1,01,10,ec),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	MenuItem_obj _hx_dummy;
	MenuItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus.MenuItem",b6,13,68,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
