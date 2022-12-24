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
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_Events
#include <haxe/ui/components/_TextField/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_TextFieldHelper
#include <haxe/ui/components/_TextField/TextFieldHelper.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInputData
#include <haxe/ui/core/TextInputData.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_FocusEvent
#include <haxe/ui/events/FocusEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_05813c5e51712331_399_new,"haxe.ui.components._TextField.Events","new",0xcc68a265,"haxe.ui.components._TextField.Events.new","haxe/ui/components/TextField.hx",399,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_05813c5e51712331_404_register,"haxe.ui.components._TextField.Events","register",0xad9a623e,"haxe.ui.components._TextField.Events.register","haxe/ui/components/TextField.hx",404,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_05813c5e51712331_408_register,"haxe.ui.components._TextField.Events","register",0xad9a623e,"haxe.ui.components._TextField.Events.register","haxe/ui/components/TextField.hx",408,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_05813c5e51712331_420_unregister,"haxe.ui.components._TextField.Events","unregister",0x74693657,"haxe.ui.components._TextField.Events.unregister","haxe/ui/components/TextField.hx",420,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_05813c5e51712331_429_onMouseDown,"haxe.ui.components._TextField.Events","onMouseDown",0x37f3730d,"haxe.ui.components._TextField.Events.onMouseDown","haxe/ui/components/TextField.hx",429,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_05813c5e51712331_432_onFocusChange,"haxe.ui.components._TextField.Events","onFocusChange",0x92cf5ece,"haxe.ui.components._TextField.Events.onFocusChange","haxe/ui/components/TextField.hx",432,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void Events_obj::__construct( ::haxe::ui::components::TextField textfield){
            	HX_STACKFRAME(&_hx_pos_05813c5e51712331_399_new)
HXLINE( 400)		super::__construct(textfield);
HXLINE( 401)		this->_textfield = textfield;
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
		return inClassId==(int)0x6d4430f7;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_05813c5e51712331_404_register)
HXDLIN( 404)		 ::haxe::ui::components::_TextField::Events _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 405)		if (::hx::IsNull( this->_textfield->getTextInput()->get_data()->onChangedCallback )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::_TextField::Events,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_05813c5e51712331_408_register)
HXLINE( 408)				if (((_gthis->_textfield->classes->indexOf(HX_(":empty",13,28,8d,a0),null()) != -1) == false)) {
HXLINE( 409)					 ::haxe::ui::components::TextField _gthis1 = _gthis->_textfield;
HXDLIN( 409)					_gthis1->set_text(_gthis->_textfield->getTextInput()->get_text());
HXLINE( 410)					 ::haxe::ui::components::TextField _gthis2 = _gthis->_textfield;
HXDLIN( 410)					_gthis2->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 406)			this->_textfield->getTextInput()->set_multiline(false);
HXLINE( 407)			this->_textfield->getTextInput()->get_data()->onChangedCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
            		}
HXLINE( 415)		this->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
HXLINE( 416)		this->registerEvent(HX_("focusin",bd,61,83,41),this->onFocusChange_dyn(),null());
HXLINE( 417)		this->registerEvent(HX_("focusout",b6,b7,76,11),this->onFocusChange_dyn(),null());
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_05813c5e51712331_420_unregister)
HXLINE( 421)		this->_textfield->getTextInput()->get_data()->onChangedCallback = null();
HXLINE( 422)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
HXLINE( 423)		this->unregisterEvent(HX_("focusin",bd,61,83,41),this->onFocusChange_dyn());
HXLINE( 424)		this->unregisterEvent(HX_("focusout",b6,b7,76,11),this->onFocusChange_dyn());
            	}


void Events_obj::onMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_05813c5e51712331_429_onMouseDown)
HXDLIN( 429)		this->_textfield->set_focus(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseDown,(void))

void Events_obj::onFocusChange( ::haxe::ui::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_05813c5e51712331_432_onFocusChange)
HXLINE( 433)		if ((this->_textfield->get_focus() == true)) {
HXLINE( 434)			this->_textfield->getTextInput()->focus();
            		}
            		else {
HXLINE( 436)			this->_textfield->getTextInput()->blur();
            		}
HXLINE( 438)		 ::haxe::ui::components::TextField _hx_tmp = this->_textfield;
HXDLIN( 438)		::haxe::ui::components::_TextField::TextFieldHelper_obj::validateText(_hx_tmp,this->_textfield->get_text());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onFocusChange,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::components::TextField textfield) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(textfield);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::TextField textfield) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._TextField.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(textfield);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_textfield,"_textfield");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textfield,"_textfield");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textfield") ) { return ::hx::Val( _textfield ); }
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onFocusChange") ) { return ::hx::Val( onFocusChange_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_textfield") ) { _textfield=inValue.Cast<  ::haxe::ui::components::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_textfield",ae,30,f6,61));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::TextField */ ,(int)offsetof(Events_obj,_textfield),HX_("_textfield",ae,30,f6,61)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_textfield",ae,30,f6,61),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onMouseDown",08,94,05,11),
	HX_("onFocusChange",89,f4,67,6d),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.Events",f3,8b,ac,4a);
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
} // end namespace _TextField
