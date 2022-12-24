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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Stepper
#include <haxe/ui/components/Stepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Stepper_Events
#include <haxe/ui/components/_Stepper/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d12d6b047164c6d5_132_new,"haxe.ui.components._Stepper.Events","new",0xc6205061,"haxe.ui.components._Stepper.Events.new","haxe/ui/components/Stepper.hx",132,0x78893714)
HX_LOCAL_STACK_FRAME(_hx_pos_d12d6b047164c6d5_137_register,"haxe.ui.components._Stepper.Events","register",0x9bde82c2,"haxe.ui.components._Stepper.Events.register","haxe/ui/components/Stepper.hx",137,0x78893714)
HX_LOCAL_STACK_FRAME(_hx_pos_d12d6b047164c6d5_149_unregister,"haxe.ui.components._Stepper.Events","unregister",0x94597fdb,"haxe.ui.components._Stepper.Events.unregister","haxe/ui/components/Stepper.hx",149,0x78893714)
HX_LOCAL_STACK_FRAME(_hx_pos_d12d6b047164c6d5_158_onInc,"haxe.ui.components._Stepper.Events","onInc",0x6454e340,"haxe.ui.components._Stepper.Events.onInc","haxe/ui/components/Stepper.hx",158,0x78893714)
HX_LOCAL_STACK_FRAME(_hx_pos_d12d6b047164c6d5_162_onDeinc,"haxe.ui.components._Stepper.Events","onDeinc",0xe6d54edf,"haxe.ui.components._Stepper.Events.onDeinc","haxe/ui/components/Stepper.hx",162,0x78893714)
namespace haxe{
namespace ui{
namespace components{
namespace _Stepper{

void Events_obj::__construct( ::haxe::ui::components::Stepper stepper){
            	HX_STACKFRAME(&_hx_pos_d12d6b047164c6d5_132_new)
HXLINE( 133)		super::__construct(stepper);
HXLINE( 134)		this->_stepper = stepper;
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
	if (inClassId<=(int)0x0155bfc3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0155bfc3;
	} else {
		return inClassId==(int)0x0548a7cc;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_d12d6b047164c6d5_137_register)
HXLINE( 138)		 ::haxe::ui::components::Button button = this->_stepper->findComponent(HX_("stepper-inc",62,08,25,9a),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 139)		if (!(button->hasEvent(HX_("click",48,7c,5e,48),this->onInc_dyn()))) {
HXLINE( 140)			button->registerEvent(HX_("click",48,7c,5e,48),this->onInc_dyn(),null());
            		}
HXLINE( 143)		 ::haxe::ui::components::Button button1 = this->_stepper->findComponent(HX_("stepper-deinc",81,80,d2,4c),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 144)		if (!(button1->hasEvent(HX_("click",48,7c,5e,48),this->onDeinc_dyn()))) {
HXLINE( 145)			button1->registerEvent(HX_("click",48,7c,5e,48),this->onDeinc_dyn(),null());
            		}
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_d12d6b047164c6d5_149_unregister)
HXLINE( 150)		 ::haxe::ui::components::Button button = this->_stepper->findComponent(HX_("stepper-inc",62,08,25,9a),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 151)		button->unregisterEvent(HX_("click",48,7c,5e,48),this->onInc_dyn());
HXLINE( 153)		 ::haxe::ui::components::Button button1 = this->_stepper->findComponent(HX_("stepper-deinc",81,80,d2,4c),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 154)		button1->unregisterEvent(HX_("click",48,7c,5e,48),this->onDeinc_dyn());
            	}


void Events_obj::onInc( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d12d6b047164c6d5_158_onInc)
HXDLIN( 158)		this->_stepper->increment();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onInc,(void))

void Events_obj::onDeinc( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d12d6b047164c6d5_162_onDeinc)
HXDLIN( 162)		this->_stepper->deincrement();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onDeinc,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::components::Stepper stepper) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(stepper);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Stepper stepper) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._Stepper.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(stepper);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_stepper,"_stepper");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stepper,"_stepper");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onInc") ) { return ::hx::Val( onInc_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onDeinc") ) { return ::hx::Val( onDeinc_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stepper") ) { return ::hx::Val( _stepper ); }
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_stepper") ) { _stepper=inValue.Cast<  ::haxe::ui::components::Stepper >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_stepper",92,5e,18,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Stepper */ ,(int)offsetof(Events_obj,_stepper),HX_("_stepper",92,5e,18,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_stepper",92,5e,18,bb),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onInc",ff,a0,67,32),
	HX_("onDeinc",5e,3a,62,6d),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Stepper.Events",ef,8b,fe,00);
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
} // end namespace components
} // end namespace _Stepper
