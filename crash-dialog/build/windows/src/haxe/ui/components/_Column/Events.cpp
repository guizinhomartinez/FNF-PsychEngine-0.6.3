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
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Column
#include <haxe/ui/components/Column.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Column_Events
#include <haxe/ui/components/_Column/Events.h>
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
#ifndef INCLUDED_haxe_ui_events_SortEvent
#include <haxe/ui/events/SortEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_674e8460a8c28bbd_77_new,"haxe.ui.components._Column.Events","new",0xb7226dea,"haxe.ui.components._Column.Events.new","haxe/ui/components/Column.hx",77,0xb3ad9ac1)
HX_DEFINE_STACK_FRAME(_hx_pos_674e8460a8c28bbd_72_new,"haxe.ui.components._Column.Events","new",0xb7226dea,"haxe.ui.components._Column.Events.new","haxe/ui/components/Column.hx",72,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_674e8460a8c28bbd_85_onMouseDown,"haxe.ui.components._Column.Events","onMouseDown",0x095bcb92,"haxe.ui.components._Column.Events.onMouseDown","haxe/ui/components/Column.hx",85,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_674e8460a8c28bbd_93_onColumnClick,"haxe.ui.components._Column.Events","onColumnClick",0xaa89e0bd,"haxe.ui.components._Column.Events.onColumnClick","haxe/ui/components/Column.hx",93,0xb3ad9ac1)
namespace haxe{
namespace ui{
namespace components{
namespace _Column{

void Events_obj::__construct( ::haxe::ui::components::Column column){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::_Column::Events,_gthis) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::UIEvent _){
            			HX_GC_STACKFRAME(&_hx_pos_674e8460a8c28bbd_77_new)
HXLINE(  77)			if (::hx::IsNotNull( _gthis->_column->get_sortDirection() )) {
HXLINE(  78)				 ::haxe::ui::events::SortEvent sortEvent =  ::haxe::ui::events::SortEvent_obj::__alloc( HX_CTX ,HX_("sortchanged",56,51,5d,eb),null(),null());
HXLINE(  79)				sortEvent->direction = _gthis->_column->get_sortDirection();
HXLINE(  80)				_gthis->_column->dispatch(sortEvent);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_674e8460a8c28bbd_72_new)
HXDLIN(  72)		 ::haxe::ui::components::_Column::Events _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  73)		super::__construct(column);
HXLINE(  74)		this->_column = column;
HXLINE(  75)		this->_column->registerEvent(HX_("click",48,7c,5e,48),this->onColumnClick_dyn(),null());
HXLINE(  76)		this->_column->registerEvent(HX_("ready",63,a0,ba,e6), ::Dynamic(new _hx_Closure_0(_gthis)),null());
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
		if (inClassId<=(int)0x0426c5bf) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0426c5bf;
		} else {
			return inClassId==(int)0x0548a7cc;
		}
	} else {
		return inClassId==(int)0x1fb1751a;
	}
}

void Events_obj::onMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_674e8460a8c28bbd_85_onMouseDown)
HXLINE(  86)		::Array< ::Dynamic> components = this->_column->findComponentsUnderPoint(event->screenX,event->screenY,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >());
HXLINE(  87)		components->remove(this->_column);
HXLINE(  88)		if ((components->length == 0)) {
HXLINE(  89)			this->super::onMouseDown(event);
            		}
            	}


void Events_obj::onColumnClick( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_674e8460a8c28bbd_93_onColumnClick)
HXLINE(  94)		if ((this->_column->get_sortable() == false)) {
HXLINE(  95)			return;
            		}
HXLINE(  97)		if (::hx::IsNull( this->_column->get_sortDirection() )) {
HXLINE(  98)			this->_column->set_sortDirection(HX_("asc",31,ff,49,00));
            		}
            		else {
HXLINE(  99)			if ((this->_column->get_sortDirection() == HX_("asc",31,ff,49,00))) {
HXLINE( 100)				this->_column->set_sortDirection(HX_("desc",51,5e,66,42));
            			}
            			else {
HXLINE( 101)				if ((this->_column->get_sortDirection() == HX_("desc",51,5e,66,42))) {
HXLINE( 102)					this->_column->set_sortDirection(HX_("asc",31,ff,49,00));
            				}
            			}
            		}
HXLINE( 105)		 ::haxe::ui::events::SortEvent sortEvent =  ::haxe::ui::events::SortEvent_obj::__alloc( HX_CTX ,HX_("sortchanged",56,51,5d,eb),null(),null());
HXLINE( 106)		sortEvent->direction = this->_column->get_sortDirection();
HXLINE( 107)		this->_column->dispatch(sortEvent);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onColumnClick,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::components::Column column) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(column);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Column column) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._Column.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(column);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_column,"_column");
	 ::haxe::ui::components::ButtonEvents_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_column,"_column");
	 ::haxe::ui::components::ButtonEvents_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_column") ) { return ::hx::Val( _column ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onColumnClick") ) { return ::hx::Val( onColumnClick_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_column") ) { _column=inValue.Cast<  ::haxe::ui::components::Column >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_column",75,60,02,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Column */ ,(int)offsetof(Events_obj,_column),HX_("_column",75,60,02,35)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_column",75,60,02,35),
	HX_("onMouseDown",08,94,05,11),
	HX_("onColumnClick",b3,32,8f,46),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Column.Events",f8,f0,ce,22);
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
} // end namespace _Column
