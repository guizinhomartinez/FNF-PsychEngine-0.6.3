#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_Events
#include <haxe/ui/components/_Range/Events.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
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
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_190_new,"haxe.ui.components._Range.Events","new",0x44a456f5,"haxe.ui.components._Range.Events.new","haxe/ui/components/Range.hx",190,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_197_register,"haxe.ui.components._Range.Events","register",0x4fd623ae,"haxe.ui.components._Range.Events.register","haxe/ui/components/Range.hx",197,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_201_unregister,"haxe.ui.components._Range.Events","unregister",0xee2c33c7,"haxe.ui.components._Range.Events.unregister","haxe/ui/components/Range.hx",201,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_204_onMouseDown,"haxe.ui.components._Range.Events","onMouseDown",0x48ce379d,"haxe.ui.components._Range.Events.onMouseDown","haxe/ui/components/Range.hx",204,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_213_onScreenMouseUp,"haxe.ui.components._Range.Events","onScreenMouseUp",0xbc2b5f4a,"haxe.ui.components._Range.Events.onScreenMouseUp","haxe/ui/components/Range.hx",213,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_218_onScreenMouseMove,"haxe.ui.components._Range.Events","onScreenMouseMove",0x9fef35c0,"haxe.ui.components._Range.Events.onScreenMouseMove","haxe/ui/components/Range.hx",218,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_5c81c8ff0e2d9b0c_224_applyPos,"haxe.ui.components._Range.Events","applyPos",0xa42ea611,"haxe.ui.components._Range.Events.applyPos","haxe/ui/components/Range.hx",224,0x313cba28)
namespace haxe{
namespace ui{
namespace components{
namespace _Range{

void Events_obj::__construct( ::haxe::ui::components::Range range){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_190_new)
HXLINE( 191)		super::__construct(range);
HXLINE( 192)		this->_range = range;
HXLINE( 193)		this->_hx_register();
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
		return inClassId==(int)0x3270e8cb;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_197_register)
HXDLIN( 197)		this->_range->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_201_unregister)
HXDLIN( 201)		this->_range->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
            	}


void Events_obj::onMouseDown( ::haxe::ui::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_204_onMouseDown)
HXLINE( 205)		 ::Dynamic pt = e->get_localX();
HXDLIN( 205)		 ::haxe::ui::geom::Point pt1 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,pt,e->get_localY());
HXLINE( 206)		Float pos = this->_range->posFromCoord(pt1);
HXLINE( 207)		this->applyPos(pos);
HXLINE( 209)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onScreenMouseUp_dyn(),null());
HXLINE( 210)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenMouseMove_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseDown,(void))

void Events_obj::onScreenMouseUp( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_213_onScreenMouseUp)
HXLINE( 214)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onScreenMouseUp_dyn());
HXLINE( 215)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onScreenMouseUp,(void))

void Events_obj::onScreenMouseMove( ::haxe::ui::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_218_onScreenMouseMove)
HXLINE( 219)		Float e1 = e->screenX;
HXDLIN( 219)		Float pt = (e1 - this->_range->get_screenLeft());
HXDLIN( 219)		Float e2 = e->screenY;
HXDLIN( 219)		 ::haxe::ui::geom::Point pt1 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,pt,(e2 - this->_range->get_screenTop()));
HXLINE( 220)		Float pos = this->_range->posFromCoord(pt1);
HXLINE( 221)		this->applyPos(pos);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onScreenMouseMove,(void))

void Events_obj::applyPos(Float pos){
            	HX_STACKFRAME(&_hx_pos_5c81c8ff0e2d9b0c_224_applyPos)
HXLINE( 225)		int precision = this->_range->get_precision();
HXDLIN( 225)		pos = (( (Float)(::Math_obj::round((pos * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ))))) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
HXLINE( 226)		if ((this->_range->get_step() > 0)) {
HXLINE( 227)			Float pos1 = ::Math_obj::fceil((pos / this->_range->get_step()));
HXDLIN( 227)			pos = (pos1 * this->_range->get_step());
            		}
HXLINE( 230)		if (::Std_obj::isOfType(this->_range,::hx::ClassOf< ::haxe::ui::components::Progress >())) {
HXLINE( 231)			::hx::TCast<  ::haxe::ui::components::Progress >::cast(this->_range)->set_pos(pos);
HXLINE( 232)			return;
            		}
HXLINE( 235)		Float d1 = this->_range->get_end();
HXDLIN( 235)		Float d11 = (d1 - ( (Float)(this->_range->get_start()) ));
HXLINE( 236)		Float d2 = (pos - ( (Float)(this->_range->get_start()) ));
HXLINE( 238)		if ((d2 < (d11 / ( (Float)(2) )))) {
HXLINE( 239)			this->_range->set_start(pos);
            		}
            		else {
HXLINE( 240)			if ((d2 >= (d11 / ( (Float)(2) )))) {
HXLINE( 241)				this->_range->set_end(pos);
            			}
            			else {
HXLINE( 242)				if (::hx::IsGreater( pos,this->_range->get_start() )) {
HXLINE( 243)					this->_range->set_end(pos);
            				}
            				else {
HXLINE( 244)					if ((pos < this->_range->get_end())) {
HXLINE( 245)						this->_range->set_start(pos);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,applyPos,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::components::Range range) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(range);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Range range) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._Range.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(range);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_range,"_range");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_range,"_range");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { return ::hx::Val( _range ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPos") ) { return ::hx::Val( applyPos_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onScreenMouseUp") ) { return ::hx::Val( onScreenMouseUp_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onScreenMouseMove") ) { return ::hx::Val( onScreenMouseMove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast<  ::haxe::ui::components::Range >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_range",fe,ec,06,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Range */ ,(int)offsetof(Events_obj,_range),HX_("_range",fe,ec,06,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_range",fe,ec,06,e0),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onMouseDown",08,94,05,11),
	HX_("onScreenMouseUp",35,cd,20,e5),
	HX_("onScreenMouseMove",6b,34,8c,03),
	HX_("applyPos",c6,28,f8,24),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Range.Events",83,b8,ae,0e);
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
} // end namespace _Range
