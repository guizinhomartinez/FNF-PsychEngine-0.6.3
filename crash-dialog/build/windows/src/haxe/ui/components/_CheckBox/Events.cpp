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
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxValue
#include <haxe/ui/components/CheckBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_components__CheckBox_Events
#include <haxe/ui/components/_CheckBox/Events.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0e28c58d756155fc_178_new,"haxe.ui.components._CheckBox.Events","new",0x8eea437d,"haxe.ui.components._CheckBox.Events.new","haxe/ui/components/CheckBox.hx",178,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_0e28c58d756155fc_183_register,"haxe.ui.components._CheckBox.Events","register",0x4521ca26,"haxe.ui.components._CheckBox.Events.register","haxe/ui/components/CheckBox.hx",183,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_0e28c58d756155fc_198_unregister,"haxe.ui.components._CheckBox.Events","unregister",0x8a88683f,"haxe.ui.components._CheckBox.Events.unregister","haxe/ui/components/CheckBox.hx",198,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_0e28c58d756155fc_205_onMouseOver,"haxe.ui.components._CheckBox.Events","onMouseOver",0x846a8517,"haxe.ui.components._CheckBox.Events.onMouseOver","haxe/ui/components/CheckBox.hx",205,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_0e28c58d756155fc_210_onMouseOut,"haxe.ui.components._CheckBox.Events","onMouseOut",0xb5f9962b,"haxe.ui.components._CheckBox.Events.onMouseOut","haxe/ui/components/CheckBox.hx",210,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_0e28c58d756155fc_216_onClick,"haxe.ui.components._CheckBox.Events","onClick",0x3786e046,"haxe.ui.components._CheckBox.Events.onClick","haxe/ui/components/CheckBox.hx",216,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_0e28c58d756155fc_220_onMouseDown,"haxe.ui.components._CheckBox.Events","onMouseDown",0x7d1fec25,"haxe.ui.components._CheckBox.Events.onMouseDown","haxe/ui/components/CheckBox.hx",220,0xaeb3e5d4)
namespace haxe{
namespace ui{
namespace components{
namespace _CheckBox{

void Events_obj::__construct( ::haxe::ui::components::CheckBox checkbox){
            	HX_STACKFRAME(&_hx_pos_0e28c58d756155fc_178_new)
HXLINE( 179)		super::__construct(checkbox);
HXLINE( 180)		this->_checkbox = checkbox;
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
		return inClassId==(int)0x0776ae27;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_0e28c58d756155fc_183_register)
HXLINE( 184)		if ((this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn()) == false)) {
HXLINE( 185)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn(),null());
            		}
HXLINE( 187)		if ((this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn()) == false)) {
HXLINE( 188)			this->registerEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn(),null());
            		}
HXLINE( 190)		if ((this->hasEvent(HX_("click",48,7c,5e,48),this->onClick_dyn()) == false)) {
HXLINE( 191)			this->registerEvent(HX_("click",48,7c,5e,48),this->onClick_dyn(),null());
            		}
HXLINE( 193)		if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn()) == false)) {
HXLINE( 194)			this->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
            		}
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_0e28c58d756155fc_198_unregister)
HXLINE( 199)		this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn());
HXLINE( 200)		this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn());
HXLINE( 201)		this->unregisterEvent(HX_("click",48,7c,5e,48),this->onClick_dyn());
HXLINE( 202)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
            	}


void Events_obj::onMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0e28c58d756155fc_205_onMouseOver)
HXLINE( 206)		this->_target->addClass(HX_(":hover",42,d3,17,5c),null(),null());
HXLINE( 207)		this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null()).StaticCast<  ::haxe::ui::components::CheckBoxValue >()->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseOver,(void))

void Events_obj::onMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0e28c58d756155fc_210_onMouseOut)
HXLINE( 211)		this->_target->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
HXLINE( 212)		this->_target->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null()).StaticCast<  ::haxe::ui::components::CheckBoxValue >()->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseOut,(void))

void Events_obj::onClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0e28c58d756155fc_216_onClick)
HXDLIN( 216)		 ::haxe::ui::components::CheckBox _hx_tmp = this->_checkbox;
HXDLIN( 216)		_hx_tmp->set_selected(!(this->_checkbox->get_selected()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onClick,(void))

void Events_obj::onMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0e28c58d756155fc_220_onMouseDown)
HXDLIN( 220)		this->_checkbox->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null()).StaticCast<  ::haxe::ui::components::CheckBoxValue >()->set_focus(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseDown,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::components::CheckBox checkbox) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(checkbox);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::CheckBox checkbox) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._CheckBox.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(checkbox);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_checkbox,"_checkbox");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_checkbox,"_checkbox");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_checkbox") ) { return ::hx::Val( _checkbox ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_checkbox") ) { _checkbox=inValue.Cast<  ::haxe::ui::components::CheckBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_checkbox",a2,c9,8b,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::CheckBox */ ,(int)offsetof(Events_obj,_checkbox),HX_("_checkbox",a2,c9,8b,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_checkbox",a2,c9,8b,f4),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("onClick",a9,1a,9c,de),
	HX_("onMouseDown",08,94,05,11),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._CheckBox.Events",0b,c1,51,c8);
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
} // end namespace _CheckBox
