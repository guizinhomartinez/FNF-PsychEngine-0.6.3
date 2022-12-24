#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_EventTypeParser
#include <haxe/ui/backend/hxwidgets/EventTypeParser.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler
#include <haxe/ui/backend/hxwidgets/handlers/NativeHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_ReflectionHandler
#include <haxe/ui/backend/hxwidgets/handlers/ReflectionHandler.h>
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
#ifndef INCLUDED_haxe_ui_util_GenericConfig
#include <haxe/ui/util/GenericConfig.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bdde83f4a9546f0c_6_new,"haxe.ui.backend.hxwidgets.handlers.ReflectionHandler","new",0xd3c7a807,"haxe.ui.backend.hxwidgets.handlers.ReflectionHandler.new","haxe/ui/backend/hxwidgets/handlers/ReflectionHandler.hx",6,0xb95f28a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bdde83f4a9546f0c_23_link,"haxe.ui.backend.hxwidgets.handlers.ReflectionHandler","link",0x799bf273,"haxe.ui.backend.hxwidgets.handlers.ReflectionHandler.link","haxe/ui/backend/hxwidgets/handlers/ReflectionHandler.hx",23,0xb95f28a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bdde83f4a9546f0c_29_unlink,"haxe.ui.backend.hxwidgets.handlers.ReflectionHandler","unlink",0x8737498c,"haxe.ui.backend.hxwidgets.handlers.ReflectionHandler.unlink","haxe/ui/backend/hxwidgets/handlers/ReflectionHandler.hx",29,0xb95f28a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bdde83f4a9546f0c_35_onEvent,"haxe.ui.backend.hxwidgets.handlers.ReflectionHandler","onEvent",0x63989da2,"haxe.ui.backend.hxwidgets.handlers.ReflectionHandler.onEvent","haxe/ui/backend/hxwidgets/handlers/ReflectionHandler.hx",35,0xb95f28a8)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{

void ReflectionHandler_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_bdde83f4a9546f0c_6_new)
HXLINE(  10)		this->_targetProp = null();
HXLINE(   9)		this->_sourceProp = null();
HXLINE(   8)		this->_eventId = 0;
HXLINE(   7)		this->_event = null();
HXLINE(  13)		super::__construct(component);
HXLINE(  15)		::String className = ::Type_obj::getClassName(::Type_obj::getClass(component));
HXLINE(  16)		this->_event = ::haxe::ui::Toolkit_obj::nativeConfig->query(((HX_("component[id=",c4,01,3e,ef) + className) + HX_("].handler.@event",ef,18,c9,93)),null(),component);
HXLINE(  17)		this->_sourceProp = ::haxe::ui::Toolkit_obj::nativeConfig->query(((HX_("component[id=",c4,01,3e,ef) + className) + HX_("].handler.@sourceProp",29,39,20,bd)),null(),component);
HXLINE(  18)		this->_targetProp = ::haxe::ui::Toolkit_obj::nativeConfig->query(((HX_("component[id=",c4,01,3e,ef) + className) + HX_("].handler.@targetProp",9f,ee,ec,ee)),null(),component);
HXLINE(  19)		this->_eventId = ::haxe::ui::backend::hxwidgets::EventTypeParser_obj::fromString(this->_event);
            	}

Dynamic ReflectionHandler_obj::__CreateEmpty() { return new ReflectionHandler_obj; }

void *ReflectionHandler_obj::_hx_vtable = 0;

Dynamic ReflectionHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ReflectionHandler_obj > _hx_result = new ReflectionHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ReflectionHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e57b16d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0e57b16d;
	} else {
		return inClassId==(int)0x70a0e439;
	}
}

void ReflectionHandler_obj::link(){
            	HX_STACKFRAME(&_hx_pos_bdde83f4a9546f0c_23_link)
HXDLIN(  23)		if ((this->_eventId != 0)) {
HXLINE(  24)			this->_component->get_window()->bind(this->_eventId,this->onEvent_dyn(),null());
            		}
            	}


void ReflectionHandler_obj::unlink(){
            	HX_STACKFRAME(&_hx_pos_bdde83f4a9546f0c_29_unlink)
HXDLIN(  29)		if ((this->_eventId != 0)) {
HXLINE(  30)			this->_component->get_window()->unbind(this->_eventId,this->onEvent_dyn(),null());
            		}
            	}


void ReflectionHandler_obj::onEvent( ::hx::widgets::Event event){
            	HX_STACKFRAME(&_hx_pos_bdde83f4a9546f0c_35_onEvent)
HXDLIN(  35)		 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(  35)		::String _hx_tmp1 = this->_targetProp;
HXDLIN(  35)		 ::hx::widgets::Window _hx_tmp2 = this->_component->get_window();
HXDLIN(  35)		::Reflect_obj::setProperty(_hx_tmp,_hx_tmp1,::Reflect_obj::getProperty(_hx_tmp2,this->_sourceProp));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ReflectionHandler_obj,onEvent,(void))


::hx::ObjectPtr< ReflectionHandler_obj > ReflectionHandler_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ReflectionHandler_obj > __this = new ReflectionHandler_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ReflectionHandler_obj > ReflectionHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ReflectionHandler_obj *__this = (ReflectionHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ReflectionHandler_obj), true, "haxe.ui.backend.hxwidgets.handlers.ReflectionHandler"));
	*(void **)__this = ReflectionHandler_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ReflectionHandler_obj::ReflectionHandler_obj()
{
}

void ReflectionHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ReflectionHandler);
	HX_MARK_MEMBER_NAME(_event,"_event");
	HX_MARK_MEMBER_NAME(_eventId,"_eventId");
	HX_MARK_MEMBER_NAME(_sourceProp,"_sourceProp");
	HX_MARK_MEMBER_NAME(_targetProp,"_targetProp");
	 ::haxe::ui::backend::hxwidgets::handlers::NativeHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ReflectionHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_event,"_event");
	HX_VISIT_MEMBER_NAME(_eventId,"_eventId");
	HX_VISIT_MEMBER_NAME(_sourceProp,"_sourceProp");
	HX_VISIT_MEMBER_NAME(_targetProp,"_targetProp");
	 ::haxe::ui::backend::hxwidgets::handlers::NativeHandler_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ReflectionHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { return ::hx::Val( link_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_event") ) { return ::hx::Val( _event ); }
		if (HX_FIELD_EQ(inName,"unlink") ) { return ::hx::Val( unlink_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onEvent") ) { return ::hx::Val( onEvent_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_eventId") ) { return ::hx::Val( _eventId ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_sourceProp") ) { return ::hx::Val( _sourceProp ); }
		if (HX_FIELD_EQ(inName,"_targetProp") ) { return ::hx::Val( _targetProp ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ReflectionHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_event") ) { _event=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_eventId") ) { _eventId=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_sourceProp") ) { _sourceProp=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_targetProp") ) { _targetProp=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ReflectionHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_event",5b,0f,ac,71));
	outFields->push(HX_("_eventId",16,1c,53,40));
	outFields->push(HX_("_sourceProp",3d,7b,4c,45));
	outFields->push(HX_("_targetProp",b3,30,19,77));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ReflectionHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ReflectionHandler_obj,_event),HX_("_event",5b,0f,ac,71)},
	{::hx::fsInt,(int)offsetof(ReflectionHandler_obj,_eventId),HX_("_eventId",16,1c,53,40)},
	{::hx::fsString,(int)offsetof(ReflectionHandler_obj,_sourceProp),HX_("_sourceProp",3d,7b,4c,45)},
	{::hx::fsString,(int)offsetof(ReflectionHandler_obj,_targetProp),HX_("_targetProp",b3,30,19,77)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ReflectionHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String ReflectionHandler_obj_sMemberFields[] = {
	HX_("_event",5b,0f,ac,71),
	HX_("_eventId",16,1c,53,40),
	HX_("_sourceProp",3d,7b,4c,45),
	HX_("_targetProp",b3,30,19,77),
	HX_("link",fa,17,b3,47),
	HX_("unlink",d3,1e,88,65),
	HX_("onEvent",7b,66,02,0c),
	::String(null()) };

::hx::Class ReflectionHandler_obj::__mClass;

void ReflectionHandler_obj::__register()
{
	ReflectionHandler_obj _hx_dummy;
	ReflectionHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.handlers.ReflectionHandler",95,98,ab,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ReflectionHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ReflectionHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ReflectionHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ReflectionHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers
