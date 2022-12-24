#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_Platform
#include <haxe/ui/backend/hxwidgets/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Frame
#include <hx/widgets/Frame.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Timer
#include <hx/widgets/Timer.h>
#endif
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_886b5ec6758f91cf_20_new,"haxe.ui.backend.TimerImpl","new",0x5c2f026b,"haxe.ui.backend.TimerImpl.new","haxe/ui/backend/TimerImpl.hx",20,0xe2a33786)
HX_LOCAL_STACK_FRAME(_hx_pos_886b5ec6758f91cf_57_onTimer,"haxe.ui.backend.TimerImpl","onTimer",0xea37f1b1,"haxe.ui.backend.TimerImpl.onTimer","haxe/ui/backend/TimerImpl.hx",57,0xe2a33786)
HX_LOCAL_STACK_FRAME(_hx_pos_886b5ec6758f91cf_62_stop,"haxe.ui.backend.TimerImpl","stop",0x504c8797,"haxe.ui.backend.TimerImpl.stop","haxe/ui/backend/TimerImpl.hx",62,0xe2a33786)
HX_LOCAL_STACK_FRAME(_hx_pos_886b5ec6758f91cf_43_processDeferredTimers,"haxe.ui.backend.TimerImpl","processDeferredTimers",0xdf77ad27,"haxe.ui.backend.TimerImpl.processDeferredTimers","haxe/ui/backend/TimerImpl.hx",43,0xe2a33786)
namespace haxe{
namespace ui{
namespace backend{

void TimerImpl_obj::__construct(int delay, ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_886b5ec6758f91cf_20_new)
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		if (::hx::IsNotNull( ::haxe::ui::core::Screen_obj::get_instance()->get_options() )) {
HXLINE(  21)			_hx_tmp = ::hx::IsNull( ::haxe::ui::core::Screen_obj::get_instance()->get_options()->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  21)			_hx_tmp = true;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  24)			if (::hx::IsNull( ::haxe::ui::backend::TimerImpl_obj::_deferredTimers )) {
HXLINE(  25)				::haxe::ui::backend::TimerImpl_obj::_deferredTimers = ::Array_obj< ::Dynamic>::__new(0);
            			}
HXLINE(  27)			::haxe::ui::backend::TimerImpl_obj::_deferredTimers->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("delay",83,d7,26,d7),delay)
            				->setFixed(1,HX_("callback",c5,99,06,7f),callback)));
HXLINE(  31)			return;
            		}
HXLINE(  34)		bool _hx_tmp1;
HXDLIN(  34)		if (::haxe::ui::backend::hxwidgets::Platform_obj::get_isMac()) {
HXLINE(  34)			_hx_tmp1 = (delay == 0);
            		}
            		else {
HXLINE(  34)			_hx_tmp1 = false;
            		}
HXDLIN(  34)		if (_hx_tmp1) {
HXLINE(  35)			delay = 1;
            		}
HXLINE(  37)		 ::hx::widgets::Frame frame = ( ( ::hx::widgets::Frame)(::haxe::ui::core::Screen_obj::get_instance()->get_options()->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic)) );
HXLINE(  38)		this->_callback = callback;
HXLINE(  39)		frame->bind(::wx::widgets::EventType_obj::TIMER,this->onTimer_dyn(),null());
HXLINE(  40)		this->_timer =  ::hx::widgets::Timer_obj::__alloc( HX_CTX ,frame,delay,null(),null());
            	}

Dynamic TimerImpl_obj::__CreateEmpty() { return new TimerImpl_obj; }

void *TimerImpl_obj::_hx_vtable = 0;

Dynamic TimerImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TimerImpl_obj > _hx_result = new TimerImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TimerImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7da8d18b;
}

void TimerImpl_obj::onTimer( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_886b5ec6758f91cf_57_onTimer)
HXDLIN(  57)		if (::hx::IsNotNull( this->_callback )) {
HXLINE(  58)			this->_callback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TimerImpl_obj,onTimer,(void))

void TimerImpl_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_886b5ec6758f91cf_62_stop)
HXLINE(  63)		this->_callback = null();
HXLINE(  64)		 ::hx::widgets::Frame frame = ( ( ::hx::widgets::Frame)(::haxe::ui::core::Screen_obj::get_instance()->get_options()->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic)) );
HXLINE(  65)		frame->unbind(::wx::widgets::EventType_obj::TIMER,this->onTimer_dyn(),null());
HXLINE(  66)		if (::hx::IsNotNull( this->_timer )) {
HXLINE(  67)			this->_timer->stop();
HXLINE(  68)			this->_timer->destroy();
HXLINE(  69)			this->_timer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TimerImpl_obj,stop,(void))

::Array< ::Dynamic> TimerImpl_obj::_deferredTimers;

void TimerImpl_obj::processDeferredTimers(){
            	HX_STACKFRAME(&_hx_pos_886b5ec6758f91cf_43_processDeferredTimers)
HXLINE(  44)		if (::hx::IsNull( ::haxe::ui::backend::TimerImpl_obj::_deferredTimers )) {
HXLINE(  45)			return;
            		}
HXLINE(  48)		{
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			::Array< ::Dynamic> _g1 = ::haxe::ui::backend::TimerImpl_obj::_deferredTimers;
HXDLIN(  48)			while((_g < _g1->length)){
HXLINE(  48)				 ::Dynamic d = _g1->__get(_g);
HXDLIN(  48)				_g = (_g + 1);
HXLINE(  49)				::haxe::ui::util::Timer_obj::delay(d->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic),( (int)(d->__Field(HX_("delay",83,d7,26,d7),::hx::paccDynamic)) ));
            			}
            		}
HXLINE(  52)		::haxe::ui::backend::TimerImpl_obj::_deferredTimers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  53)		::haxe::ui::backend::TimerImpl_obj::_deferredTimers = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TimerImpl_obj,processDeferredTimers,(void))


::hx::ObjectPtr< TimerImpl_obj > TimerImpl_obj::__new(int delay, ::Dynamic callback) {
	::hx::ObjectPtr< TimerImpl_obj > __this = new TimerImpl_obj();
	__this->__construct(delay,callback);
	return __this;
}

::hx::ObjectPtr< TimerImpl_obj > TimerImpl_obj::__alloc(::hx::Ctx *_hx_ctx,int delay, ::Dynamic callback) {
	TimerImpl_obj *__this = (TimerImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TimerImpl_obj), true, "haxe.ui.backend.TimerImpl"));
	*(void **)__this = TimerImpl_obj::_hx_vtable;
	__this->__construct(delay,callback);
	return __this;
}

TimerImpl_obj::TimerImpl_obj()
{
}

void TimerImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerImpl);
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_END_CLASS();
}

void TimerImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
}

::hx::Val TimerImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return ::hx::Val( _timer ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onTimer") ) { return ::hx::Val( onTimer_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { return ::hx::Val( _callback ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TimerImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_deferredTimers") ) { outValue = ( _deferredTimers ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"processDeferredTimers") ) { outValue = processDeferredTimers_dyn(); return true; }
	}
	return false;
}

::hx::Val TimerImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast<  ::hx::widgets::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TimerImpl_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_deferredTimers") ) { _deferredTimers=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void TimerImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_timer",06,07,1d,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TimerImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::Timer */ ,(int)offsetof(TimerImpl_obj,_timer),HX_("_timer",06,07,1d,0c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TimerImpl_obj,_callback),HX_("_callback",24,91,9c,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TimerImpl_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &TimerImpl_obj::_deferredTimers,HX_("_deferredTimers",2c,6a,66,97)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TimerImpl_obj_sMemberFields[] = {
	HX_("_timer",06,07,1d,0c),
	HX_("_callback",24,91,9c,c6),
	HX_("onTimer",26,5e,73,a6),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

static void TimerImpl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerImpl_obj::_deferredTimers,"_deferredTimers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TimerImpl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerImpl_obj::_deferredTimers,"_deferredTimers");
};

#endif

::hx::Class TimerImpl_obj::__mClass;

static ::String TimerImpl_obj_sStaticFields[] = {
	HX_("_deferredTimers",2c,6a,66,97),
	HX_("processDeferredTimers",5c,1c,58,ab),
	::String(null())
};

void TimerImpl_obj::__register()
{
	TimerImpl_obj _hx_dummy;
	TimerImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.TimerImpl",f9,f0,74,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TimerImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &TimerImpl_obj::__SetStatic;
	__mClass->mMarkFunc = TimerImpl_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TimerImpl_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TimerImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TimerImpl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TimerImpl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TimerImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TimerImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
