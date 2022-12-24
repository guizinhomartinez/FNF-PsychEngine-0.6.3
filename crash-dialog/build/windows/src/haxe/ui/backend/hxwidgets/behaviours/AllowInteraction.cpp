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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_AllowInteraction
#include <haxe/ui/backend/hxwidgets/behaviours/AllowInteraction.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45870761d4549deb_6_new,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction","new",0x27238db8,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction.new","haxe/ui/backend/hxwidgets/behaviours/AllowInteraction.hx",6,0x10b72ab9)
HX_LOCAL_STACK_FRAME(_hx_pos_45870761d4549deb_7_validateData,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction","validateData",0xb1cd2d88,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction.validateData","haxe/ui/backend/hxwidgets/behaviours/AllowInteraction.hx",7,0x10b72ab9)
HX_LOCAL_STACK_FRAME(_hx_pos_45870761d4549deb_21_registerEvents,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction","registerEvents",0x87f8e784,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction.registerEvents","haxe/ui/backend/hxwidgets/behaviours/AllowInteraction.hx",21,0x10b72ab9)
HX_LOCAL_STACK_FRAME(_hx_pos_45870761d4549deb_31_unregisterEvents,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction","unregisterEvents",0xcfc0119d,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction.unregisterEvents","haxe/ui/backend/hxwidgets/behaviours/AllowInteraction.hx",31,0x10b72ab9)
HX_LOCAL_STACK_FRAME(_hx_pos_45870761d4549deb_41_onLeftDown,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction","onLeftDown",0xefc92df0,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction.onLeftDown","haxe/ui/backend/hxwidgets/behaviours/AllowInteraction.hx",41,0x10b72ab9)
HX_LOCAL_STACK_FRAME(_hx_pos_45870761d4549deb_45_onLeftUp,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction","onLeftUp",0xe6df7c69,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction.onLeftUp","haxe/ui/backend/hxwidgets/behaviours/AllowInteraction.hx",45,0x10b72ab9)
HX_LOCAL_STACK_FRAME(_hx_pos_45870761d4549deb_49_onEnterWindow,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction","onEnterWindow",0xedd74fa1,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction.onEnterWindow","haxe/ui/backend/hxwidgets/behaviours/AllowInteraction.hx",49,0x10b72ab9)
HX_LOCAL_STACK_FRAME(_hx_pos_45870761d4549deb_53_onLeaveWindow,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction","onLeaveWindow",0xb925c8c0,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction.onLeaveWindow","haxe/ui/backend/hxwidgets/behaviours/AllowInteraction.hx",53,0x10b72ab9)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void AllowInteraction_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_45870761d4549deb_6_new)
HXLINE(  19)		this->_hasEvents = false;
HXLINE(   6)		super::__construct(component);
            	}

Dynamic AllowInteraction_obj::__CreateEmpty() { return new AllowInteraction_obj; }

void *AllowInteraction_obj::_hx_vtable = 0;

Dynamic AllowInteraction_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AllowInteraction_obj > _hx_result = new AllowInteraction_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AllowInteraction_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x457734c4 || inClassId==(int)0x7e17fa9f;
	}
}

void AllowInteraction_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_45870761d4549deb_7_validateData)
HXLINE(   8)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(   9)			return;
            		}
HXLINE(  12)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN(  12)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true))) {
HXLINE(  13)			this->registerEvents();
            		}
            		else {
HXLINE(  15)			this->unregisterEvents();
            		}
            	}


void AllowInteraction_obj::registerEvents(){
            	HX_STACKFRAME(&_hx_pos_45870761d4549deb_21_registerEvents)
HXDLIN(  21)		if ((this->_hasEvents == false)) {
HXLINE(  22)			this->_hasEvents = true;
HXLINE(  23)			this->_component->get_window()->bind(::wx::widgets::EventType_obj::ENTER_WINDOW,this->onEnterWindow_dyn(),null());
HXLINE(  24)			this->_component->get_window()->bind(::wx::widgets::EventType_obj::LEAVE_WINDOW,this->onLeaveWindow_dyn(),null());
HXLINE(  25)			this->_component->get_window()->bind(::wx::widgets::EventType_obj::LEFT_DOWN,this->onLeftDown_dyn(),null());
HXLINE(  26)			this->_component->get_window()->bind(::wx::widgets::EventType_obj::LEFT_UP,this->onLeftUp_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AllowInteraction_obj,registerEvents,(void))

void AllowInteraction_obj::unregisterEvents(){
            	HX_STACKFRAME(&_hx_pos_45870761d4549deb_31_unregisterEvents)
HXDLIN(  31)		if ((this->_hasEvents == true)) {
HXLINE(  32)			this->_hasEvents = false;
HXLINE(  33)			this->_component->get_window()->unbind(::wx::widgets::EventType_obj::ENTER_WINDOW,this->onEnterWindow_dyn(),null());
HXLINE(  34)			this->_component->get_window()->unbind(::wx::widgets::EventType_obj::LEAVE_WINDOW,this->onLeaveWindow_dyn(),null());
HXLINE(  35)			this->_component->get_window()->unbind(::wx::widgets::EventType_obj::LEFT_DOWN,this->onLeftDown_dyn(),null());
HXLINE(  36)			this->_component->get_window()->unbind(::wx::widgets::EventType_obj::LEFT_UP,this->onLeftUp_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AllowInteraction_obj,unregisterEvents,(void))

void AllowInteraction_obj::onLeftDown( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_45870761d4549deb_41_onLeftDown)
HXDLIN(  41)		this->_component->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AllowInteraction_obj,onLeftDown,(void))

void AllowInteraction_obj::onLeftUp( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_45870761d4549deb_45_onLeftUp)
HXDLIN(  45)		this->_component->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AllowInteraction_obj,onLeftUp,(void))

void AllowInteraction_obj::onEnterWindow( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_45870761d4549deb_49_onEnterWindow)
HXDLIN(  49)		this->_component->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AllowInteraction_obj,onEnterWindow,(void))

void AllowInteraction_obj::onLeaveWindow( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_45870761d4549deb_53_onLeaveWindow)
HXDLIN(  53)		this->_component->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AllowInteraction_obj,onLeaveWindow,(void))


::hx::ObjectPtr< AllowInteraction_obj > AllowInteraction_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< AllowInteraction_obj > __this = new AllowInteraction_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< AllowInteraction_obj > AllowInteraction_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	AllowInteraction_obj *__this = (AllowInteraction_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AllowInteraction_obj), true, "haxe.ui.backend.hxwidgets.behaviours.AllowInteraction"));
	*(void **)__this = AllowInteraction_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

AllowInteraction_obj::AllowInteraction_obj()
{
}

::hx::Val AllowInteraction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onLeftUp") ) { return ::hx::Val( onLeftUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hasEvents") ) { return ::hx::Val( _hasEvents ); }
		if (HX_FIELD_EQ(inName,"onLeftDown") ) { return ::hx::Val( onLeftDown_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onEnterWindow") ) { return ::hx::Val( onEnterWindow_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLeaveWindow") ) { return ::hx::Val( onLeaveWindow_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerEvents") ) { return ::hx::Val( registerEvents_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"unregisterEvents") ) { return ::hx::Val( unregisterEvents_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AllowInteraction_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_hasEvents") ) { _hasEvents=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AllowInteraction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_hasEvents",d4,7d,f5,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AllowInteraction_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(AllowInteraction_obj,_hasEvents),HX_("_hasEvents",d4,7d,f5,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AllowInteraction_obj_sStaticStorageInfo = 0;
#endif

static ::String AllowInteraction_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("_hasEvents",d4,7d,f5,32),
	HX_("registerEvents",dc,d5,ab,5c),
	HX_("unregisterEvents",f5,45,cd,69),
	HX_("onLeftDown",48,10,20,27),
	HX_("onLeftUp",c1,98,74,79),
	HX_("onEnterWindow",49,74,a4,0c),
	HX_("onLeaveWindow",68,ed,f2,d7),
	::String(null()) };

::hx::Class AllowInteraction_obj::__mClass;

void AllowInteraction_obj::__register()
{
	AllowInteraction_obj _hx_dummy;
	AllowInteraction_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.AllowInteraction",c6,91,f4,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AllowInteraction_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AllowInteraction_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AllowInteraction_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AllowInteraction_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
