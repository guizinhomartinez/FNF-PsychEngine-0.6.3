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
#ifndef INCLUDED_haxe_ui_containers_menus__MenuItem_Events
#include <haxe/ui/containers/menus/_MenuItem/Events.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e160df735e3da763_82_new,"haxe.ui.containers.menus._MenuItem.Events","new",0xba8c6f6c,"haxe.ui.containers.menus._MenuItem.Events.new","haxe/ui/containers/menus/MenuItem.hx",82,0x19b927e6)
HX_LOCAL_STACK_FRAME(_hx_pos_e160df735e3da763_83_register,"haxe.ui.containers.menus._MenuItem.Events","register",0x960efbd7,"haxe.ui.containers.menus._MenuItem.Events.register","haxe/ui/containers/menus/MenuItem.hx",83,0x19b927e6)
HX_LOCAL_STACK_FRAME(_hx_pos_e160df735e3da763_92_unregister,"haxe.ui.containers.menus._MenuItem.Events","unregister",0xd66a2830,"haxe.ui.containers.menus._MenuItem.Events.unregister","haxe/ui/containers/menus/MenuItem.hx",92,0x19b927e6)
HX_LOCAL_STACK_FRAME(_hx_pos_e160df735e3da763_98_onMouseOver,"haxe.ui.containers.menus._MenuItem.Events","onMouseOver",0x9e10b806,"haxe.ui.containers.menus._MenuItem.Events.onMouseOver","haxe/ui/containers/menus/MenuItem.hx",98,0x19b927e6)
HX_LOCAL_STACK_FRAME(_hx_pos_e160df735e3da763_102_onMouseOut,"haxe.ui.containers.menus._MenuItem.Events","onMouseOut",0x01db561c,"haxe.ui.containers.menus._MenuItem.Events.onMouseOut","haxe/ui/containers/menus/MenuItem.hx",102,0x19b927e6)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuItem{

void Events_obj::__construct( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_e160df735e3da763_82_new)
HXDLIN(  82)		super::__construct(target);
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
		return inClassId==(int)0x3fc00f22;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_e160df735e3da763_83_register)
HXLINE(  84)		if (!(this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn()))) {
HXLINE(  85)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn(),null());
            		}
HXLINE(  87)		if (!(this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn()))) {
HXLINE(  88)			this->registerEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn(),null());
            		}
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_e160df735e3da763_92_unregister)
HXLINE(  93)		this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn());
HXLINE(  94)		this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn());
            	}


void Events_obj::onMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_e160df735e3da763_98_onMouseOver)
HXDLIN(  98)		this->_target->addClass(HX_(":hover",42,d3,17,5c),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseOver,(void))

void Events_obj::onMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_e160df735e3da763_102_onMouseOut)
HXDLIN( 102)		this->_target->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseOut,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::core::Component target) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component target) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.containers.menus._MenuItem.Events"));
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
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver_dyn() ); }
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
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onMouseOut",a8,bb,d4,81),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._MenuItem.Events",7a,89,f5,58);
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
} // end namespace menus
} // end namespace _MenuItem
