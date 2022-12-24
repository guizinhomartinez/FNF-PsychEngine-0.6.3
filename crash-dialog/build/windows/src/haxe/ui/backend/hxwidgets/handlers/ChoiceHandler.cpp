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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_ChoiceHandler
#include <haxe/ui/backend/hxwidgets/handlers/ChoiceHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler
#include <haxe/ui/backend/hxwidgets/handlers/NativeHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Choice
#include <hx/widgets/Choice.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_166ed83c9d65a965_8_new,"haxe.ui.backend.hxwidgets.handlers.ChoiceHandler","new",0xcba5b311,"haxe.ui.backend.hxwidgets.handlers.ChoiceHandler.new","haxe/ui/backend/hxwidgets/handlers/ChoiceHandler.hx",8,0xafddf15e)
HX_LOCAL_STACK_FRAME(_hx_pos_166ed83c9d65a965_10_link,"haxe.ui.backend.hxwidgets.handlers.ChoiceHandler","link",0x64079029,"haxe.ui.backend.hxwidgets.handlers.ChoiceHandler.link","haxe/ui/backend/hxwidgets/handlers/ChoiceHandler.hx",10,0xafddf15e)
HX_LOCAL_STACK_FRAME(_hx_pos_166ed83c9d65a965_14_unlink,"haxe.ui.backend.hxwidgets.handlers.ChoiceHandler","unlink",0x9a0e40c2,"haxe.ui.backend.hxwidgets.handlers.ChoiceHandler.unlink","haxe/ui/backend/hxwidgets/handlers/ChoiceHandler.hx",14,0xafddf15e)
HX_LOCAL_STACK_FRAME(_hx_pos_166ed83c9d65a965_17___onChangeEvent,"haxe.ui.backend.hxwidgets.handlers.ChoiceHandler","__onChangeEvent",0xafda6ebc,"haxe.ui.backend.hxwidgets.handlers.ChoiceHandler.__onChangeEvent","haxe/ui/backend/hxwidgets/handlers/ChoiceHandler.hx",17,0xafddf15e)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{

void ChoiceHandler_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_166ed83c9d65a965_8_new)
HXDLIN(   8)		super::__construct(component);
            	}

Dynamic ChoiceHandler_obj::__CreateEmpty() { return new ChoiceHandler_obj; }

void *ChoiceHandler_obj::_hx_vtable = 0;

Dynamic ChoiceHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChoiceHandler_obj > _hx_result = new ChoiceHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChoiceHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x469c275b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x469c275b;
	} else {
		return inClassId==(int)0x70a0e439;
	}
}

void ChoiceHandler_obj::link(){
            	HX_STACKFRAME(&_hx_pos_166ed83c9d65a965_10_link)
HXDLIN(  10)		this->_component->get_window()->bind(::wx::widgets::EventType_obj::CHOICE,this->_hx___onChangeEvent_dyn(),null());
            	}


void ChoiceHandler_obj::unlink(){
            	HX_STACKFRAME(&_hx_pos_166ed83c9d65a965_14_unlink)
HXDLIN(  14)		this->_component->get_window()->unbind(::wx::widgets::EventType_obj::CHOICE,this->_hx___onChangeEvent_dyn(),null());
            	}


void ChoiceHandler_obj::_hx___onChangeEvent( ::hx::widgets::Event event){
            	HX_STACKFRAME(&_hx_pos_166ed83c9d65a965_17___onChangeEvent)
HXLINE(  18)		 ::hx::widgets::Choice choice = ::hx::TCast<  ::hx::widgets::Choice >::cast(this->_component->get_window());
HXLINE(  19)		 ::haxe::ui::components::DropDown dropdown = ::hx::TCast<  ::haxe::ui::components::DropDown >::cast(this->_component);
HXLINE(  20)		dropdown->set_selectedIndex(choice->get_selection());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChoiceHandler_obj,_hx___onChangeEvent,(void))


::hx::ObjectPtr< ChoiceHandler_obj > ChoiceHandler_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ChoiceHandler_obj > __this = new ChoiceHandler_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ChoiceHandler_obj > ChoiceHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ChoiceHandler_obj *__this = (ChoiceHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChoiceHandler_obj), true, "haxe.ui.backend.hxwidgets.handlers.ChoiceHandler"));
	*(void **)__this = ChoiceHandler_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ChoiceHandler_obj::ChoiceHandler_obj()
{
}

::hx::Val ChoiceHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { return ::hx::Val( link_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unlink") ) { return ::hx::Val( unlink_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__onChangeEvent") ) { return ::hx::Val( _hx___onChangeEvent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ChoiceHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ChoiceHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String ChoiceHandler_obj_sMemberFields[] = {
	HX_("link",fa,17,b3,47),
	HX_("unlink",d3,1e,88,65),
	HX_("__onChangeEvent",8b,c6,26,86),
	::String(null()) };

::hx::Class ChoiceHandler_obj::__mClass;

void ChoiceHandler_obj::__register()
{
	ChoiceHandler_obj _hx_dummy;
	ChoiceHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.handlers.ChoiceHandler",9f,d6,10,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChoiceHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChoiceHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChoiceHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChoiceHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers
