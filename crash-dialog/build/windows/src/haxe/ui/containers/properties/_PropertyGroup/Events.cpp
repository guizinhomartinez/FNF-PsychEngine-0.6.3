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
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGroup_Events
#include <haxe/ui/containers/properties/_PropertyGroup/Events.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0cc2f519e5f006c2_38_new,"haxe.ui.containers.properties._PropertyGroup.Events","new",0x2b1ad23d,"haxe.ui.containers.properties._PropertyGroup.Events.new","haxe/ui/containers/properties/PropertyGroup.hx",38,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_0cc2f519e5f006c2_39_register,"haxe.ui.containers.properties._PropertyGroup.Events","register",0xecb3c366,"haxe.ui.containers.properties._PropertyGroup.Events.register","haxe/ui/containers/properties/PropertyGroup.hx",39,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_0cc2f519e5f006c2_46_unregister,"haxe.ui.containers.properties._PropertyGroup.Events","unregister",0xb57b317f,"haxe.ui.containers.properties._PropertyGroup.Events.unregister","haxe/ui/containers/properties/PropertyGroup.hx",46,0xad7e5fc5)
HX_LOCAL_STACK_FRAME(_hx_pos_0cc2f519e5f006c2_51_onHeaderClicked,"haxe.ui.containers.properties._PropertyGroup.Events","onHeaderClicked",0xe9bed158,"haxe.ui.containers.properties._PropertyGroup.Events.onHeaderClicked","haxe/ui/containers/properties/PropertyGroup.hx",51,0xad7e5fc5)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _PropertyGroup{

void Events_obj::__construct( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_0cc2f519e5f006c2_38_new)
HXDLIN(  38)		super::__construct(target);
            	}

Dynamic Events_obj::__CreateEmpty() { return new Events_obj; }

void *Events_obj::_hx_vtable = 0;

Dynamic Events_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Events_obj > _hx_result = new Events_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Events_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x65cdfe93;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_0cc2f519e5f006c2_39_register)
HXLINE(  40)		 ::haxe::ui::core::Component header = this->_target->findComponent(HX_("property-group-header",53,22,a5,a8),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  41)		if ((header->hasEvent(HX_("click",48,7c,5e,48),null()) == false)) {
HXLINE(  42)			header->registerEvent(HX_("click",48,7c,5e,48),this->onHeaderClicked_dyn(),null());
            		}
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_0cc2f519e5f006c2_46_unregister)
HXLINE(  47)		 ::haxe::ui::core::Component header = this->_target->findComponent(HX_("property-group-header",53,22,a5,a8),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  48)		header->unregisterEvent(HX_("click",48,7c,5e,48),this->onHeaderClicked_dyn());
            	}


void Events_obj::onHeaderClicked( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0cc2f519e5f006c2_51_onHeaderClicked)
HXLINE(  52)		::Array< ::Dynamic> interactives = this->_target->findComponentsUnderPoint(event->screenX,event->screenY,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >());
HXLINE(  53)		if ((interactives->length > 0)) {
HXLINE(  54)			return;
            		}
HXLINE(  56)		 ::haxe::ui::core::Component header = this->_target->findComponent(HX_("property-group-header",53,22,a5,a8),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  57)		 ::haxe::ui::core::Component contents = this->_target->findComponent(HX_("property-group-contents",60,5b,d5,e0),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  58)		if ((header->classes->indexOf(HX_(":expanded",73,db,80,c4),null()) != -1)) {
HXLINE(  59)			header->swapClass(HX_(":collapsed",dd,16,f1,ce),HX_(":expanded",73,db,80,c4),true,true);
HXLINE(  60)			contents->hideInternal(null());
            		}
            		else {
HXLINE(  62)			header->swapClass(HX_(":expanded",73,db,80,c4),HX_(":collapsed",dd,16,f1,ce),true,true);
HXLINE(  63)			contents->showInternal(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onHeaderClicked,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::core::Component target) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component target) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.containers.properties._PropertyGroup.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

Events_obj::Events_obj()
{
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onHeaderClicked") ) { return ::hx::Val( onHeaderClicked_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Events_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onHeaderClicked",fb,f7,cd,38),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties._PropertyGroup.Events",cb,ef,e3,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Events_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Events_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Events_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Events_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _PropertyGroup
