#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_components_Calendar
#include <haxe/ui/components/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_Events
#include <haxe/ui/components/_Calendar/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a810e7e76db8b416_274_new,"haxe.ui.components._Calendar.Events","new",0x702e4ec2,"haxe.ui.components._Calendar.Events.new","haxe/ui/components/Calendar.hx",274,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_a810e7e76db8b416_275_register,"haxe.ui.components._Calendar.Events","register",0xd0f5c4c1,"haxe.ui.components._Calendar.Events.register","haxe/ui/components/Calendar.hx",275,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_a810e7e76db8b416_285_unregister,"haxe.ui.components._Calendar.Events","unregister",0xaf447f9a,"haxe.ui.components._Calendar.Events.unregister","haxe/ui/components/Calendar.hx",285,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_a810e7e76db8b416_290_onDayClicked,"haxe.ui.components._Calendar.Events","onDayClicked",0xbb907308,"haxe.ui.components._Calendar.Events.onDayClicked","haxe/ui/components/Calendar.hx",290,0xa4f8a419)
namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{

void Events_obj::__construct( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_a810e7e76db8b416_274_new)
HXDLIN( 274)		super::__construct(target);
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
		return inClassId==(int)0x3fe115c2;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_a810e7e76db8b416_275_register)
HXLINE( 276)		this->unregister();
HXLINE( 277)		{
HXLINE( 277)			int _g = 0;
HXDLIN( 277)			 ::haxe::ui::core::Component _this = this->_target;
HXDLIN( 277)			::Array< ::Dynamic> _g1;
HXDLIN( 277)			if (::hx::IsNull( _this->_children )) {
HXLINE( 277)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 277)				_g1 = _this->_children;
            			}
HXDLIN( 277)			while((_g < _g1->length)){
HXLINE( 277)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 277)				_g = (_g + 1);
HXLINE( 278)				bool _hx_tmp;
HXDLIN( 278)				if ((child->hasEvent(HX_("click",48,7c,5e,48),this->onDayClicked_dyn()) == false)) {
HXLINE( 278)					_hx_tmp = (child->classes->indexOf(HX_("calendar-day",0d,66,5d,f6),null()) != -1);
            				}
            				else {
HXLINE( 278)					_hx_tmp = false;
            				}
HXDLIN( 278)				if (_hx_tmp) {
HXLINE( 279)					child->registerEvent(HX_("click",48,7c,5e,48),this->onDayClicked_dyn(),null());
            				}
            			}
            		}
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_a810e7e76db8b416_285_unregister)
HXDLIN( 285)		int _g = 0;
HXDLIN( 285)		 ::haxe::ui::core::Component _this = this->_target;
HXDLIN( 285)		::Array< ::Dynamic> _g1;
HXDLIN( 285)		if (::hx::IsNull( _this->_children )) {
HXDLIN( 285)			_g1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXDLIN( 285)			_g1 = _this->_children;
            		}
HXDLIN( 285)		while((_g < _g1->length)){
HXDLIN( 285)			 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 285)			_g = (_g + 1);
HXLINE( 286)			child->unregisterEvent(HX_("click",48,7c,5e,48),this->onDayClicked_dyn());
            		}
            	}


void Events_obj::onDayClicked( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_a810e7e76db8b416_290_onDayClicked)
HXLINE( 291)		 ::haxe::ui::components::Calendar calendar = ::hx::TCast<  ::haxe::ui::components::Calendar >::cast(this->_target);
HXLINE( 292)		int day = ( (int)(::Std_obj::parseInt(event->target->get_text())) );
HXLINE( 293)		int month = calendar->get_date()->getMonth();
HXLINE( 294)		int year = calendar->get_date()->getFullYear();
HXLINE( 295)		calendar->set_selectedDate( ::Date_obj::__alloc( HX_CTX ,year,month,day,0,0,0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onDayClicked,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::core::Component target) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component target) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._Calendar.Events"));
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
	case 12:
		if (HX_FIELD_EQ(inName,"onDayClicked") ) { return ::hx::Val( onDayClicked_dyn() ); }
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
	HX_("onDayClicked",aa,cd,28,b3),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Calendar.Events",d0,85,73,0d);
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
} // end namespace _Calendar
