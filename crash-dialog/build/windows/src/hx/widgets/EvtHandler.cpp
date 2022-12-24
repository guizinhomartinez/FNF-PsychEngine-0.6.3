#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5e27a5813018a057_16_new,"hx.widgets.EvtHandler","new",0x9f8752b6,"hx.widgets.EvtHandler.new","hx/widgets/EvtHandler.hx",16,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_25_pauseEvent,"hx.widgets.EvtHandler","pauseEvent",0x1d5079ae,"hx.widgets.EvtHandler.pauseEvent","hx/widgets/EvtHandler.hx",25,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_32_unpauseEvent,"hx.widgets.EvtHandler","unpauseEvent",0x839d17c7,"hx.widgets.EvtHandler.unpauseEvent","hx/widgets/EvtHandler.hx",32,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_39_bind,"hx.widgets.EvtHandler","bind",0xeef57ea7,"hx.widgets.EvtHandler.bind","hx/widgets/EvtHandler.hx",39,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_65_unbind,"hx.widgets.EvtHandler","unbind",0x282e1400,"hx.widgets.EvtHandler.unbind","hx/widgets/EvtHandler.hx",65,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_92_dispose,"hx.widgets.EvtHandler","dispose",0x0bdee5f5,"hx.widgets.EvtHandler.dispose","hx/widgets/EvtHandler.hx",92,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_108_handleEvent,"hx.widgets.EvtHandler","handleEvent",0x26ad3ba8,"hx.widgets.EvtHandler.handleEvent","hx/widgets/EvtHandler.hx",108,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_119_executeHandlers,"hx.widgets.EvtHandler","executeHandlers",0x38105014,"hx.widgets.EvtHandler.executeHandlers","hx/widgets/EvtHandler.hx",119,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_147_queueEvent,"hx.widgets.EvtHandler","queueEvent",0x187af133,"hx.widgets.EvtHandler.queueEvent","hx/widgets/EvtHandler.hx",147,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_155_get_evtHandlerRef,"hx.widgets.EvtHandler","get_evtHandlerRef",0x3a97bc99,"hx.widgets.EvtHandler.get_evtHandlerRef","hx/widgets/EvtHandler.hx",155,0x9cef9338)
namespace hx{
namespace widgets{

void EvtHandler_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5e27a5813018a057_16_new)
HXLINE(  19)		this->_pausedEvents = null();
HXLINE(  21)		super::__construct();
HXLINE(  22)		this->_eventMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic EvtHandler_obj::__CreateEmpty() { return new EvtHandler_obj; }

void *EvtHandler_obj::_hx_vtable = 0;

Dynamic EvtHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EvtHandler_obj > _hx_result = new EvtHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EvtHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x467ba226;
	}
}

static ::hx::widgets::Trackable_obj _hx_hx_widgets_EvtHandler__hx_hx_widgets_Trackable= {
};

void *EvtHandler_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfb359cc6: return &_hx_hx_widgets_EvtHandler__hx_hx_widgets_Trackable;
	}
	return super::_hx_getInterface(inHash);
}

void EvtHandler_obj::pauseEvent(int event){
            	HX_GC_STACKFRAME(&_hx_pos_5e27a5813018a057_25_pauseEvent)
HXLINE(  26)		if (::hx::IsNull( this->_pausedEvents )) {
HXLINE(  27)			this->_pausedEvents =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  29)		this->_pausedEvents->set(event,event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EvtHandler_obj,pauseEvent,(void))

void EvtHandler_obj::unpauseEvent(int event){
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_32_unpauseEvent)
HXLINE(  33)		if (::hx::IsNull( this->_pausedEvents )) {
HXLINE(  34)			return;
            		}
HXLINE(  36)		this->_pausedEvents->remove(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EvtHandler_obj,unpauseEvent,(void))

void EvtHandler_obj::bind(int event, ::Dynamic fn,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_5e27a5813018a057_39_bind)
HXLINE(  40)		if (::hx::IsNull( this->_eventMap )) {
HXLINE(  41)			this->_eventMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  43)		 ::haxe::ds::IntMap mapForId = ( ( ::haxe::ds::IntMap)(this->_eventMap->get(id)) );
HXLINE(  44)		if (::hx::IsNull( mapForId )) {
HXLINE(  45)			mapForId =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  46)			this->_eventMap->set(id,mapForId);
            		}
HXLINE(  49)		bool attach = false;
HXLINE(  50)		::Array< ::Dynamic> eventList = ( (::Array< ::Dynamic>)(mapForId->get(event)) );
HXLINE(  51)		if (::hx::IsNull( eventList )) {
HXLINE(  52)			eventList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  53)			mapForId->set(event,eventList);
HXLINE(  54)			attach = true;
            		}
HXLINE(  57)		eventList->push(fn);
HXLINE(  59)		if ((attach == true)) {
HXLINE(  60)			::cpp::Pointer<  wxEvtHandler > ref = this->get_evtHandlerRef();
HXLINE(  61)			ref->ptr->Bind(event, &hx::widgets::EvtHandler_obj::onEvent, this, id);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EvtHandler_obj,bind,(void))

void EvtHandler_obj::unbind(int event, ::Dynamic fn,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_65_unbind)
HXLINE(  66)		if (::hx::IsNull( this->_eventMap )) {
HXLINE(  67)			return;
            		}
HXLINE(  69)		 ::haxe::ds::IntMap mapForId = ( ( ::haxe::ds::IntMap)(this->_eventMap->get(id)) );
HXLINE(  70)		if (::hx::IsNull( mapForId )) {
HXLINE(  71)			return;
            		}
HXLINE(  74)		::Array< ::Dynamic> eventList = ( (::Array< ::Dynamic>)(mapForId->get(event)) );
HXLINE(  75)		if (::hx::IsNull( eventList )) {
HXLINE(  76)			return;
            		}
HXLINE(  79)		bool detach = false;
HXLINE(  80)		eventList->remove(fn);
HXLINE(  81)		if ((eventList->length == 0)) {
HXLINE(  82)			mapForId->remove(event);
HXLINE(  83)			detach = true;
            		}
HXLINE(  86)		if ((detach == true)) {
HXLINE(  87)			::cpp::Pointer<  wxEvtHandler > ref = this->get_evtHandlerRef();
HXLINE(  88)			ref->ptr->Unbind(event, &hx::widgets::EvtHandler_obj::onEvent, this, id);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EvtHandler_obj,unbind,(void))

void EvtHandler_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_92_dispose)
HXLINE(  93)		bool _hx_tmp;
HXDLIN(  93)		if ((this->_disposed != true)) {
HXLINE(  93)			_hx_tmp = ::hx::IsNull( this->_eventMap );
            		}
            		else {
HXLINE(  93)			_hx_tmp = true;
            		}
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  94)			return;
            		}
HXLINE(  96)		this->_disposed = true;
HXLINE(  97)		{
HXLINE(  97)			 ::Dynamic id = this->_eventMap->keys();
HXDLIN(  97)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  97)				int id1 = ( (int)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  98)				 ::haxe::ds::IntMap map = ( ( ::haxe::ds::IntMap)(this->_eventMap->get(id1)) );
HXLINE(  99)				{
HXLINE(  99)					 ::Dynamic eventId = map->keys();
HXDLIN(  99)					while(( (bool)(eventId->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  99)						int eventId1 = ( (int)(eventId->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 100)						::Array< ::Dynamic> list = ( (::Array< ::Dynamic>)(map->get(eventId1)) );
HXLINE( 101)						{
HXLINE( 101)							int _g = 0;
HXDLIN( 101)							while((_g < list->length)){
HXLINE( 101)								 ::Dynamic l = list->__get(_g);
HXDLIN( 101)								_g = (_g + 1);
HXLINE( 102)								this->unbind(eventId1,l,id1);
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EvtHandler_obj,dispose,(void))

void EvtHandler_obj::handleEvent(::cpp::Pointer<  wxEvent > e){
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_108_handleEvent)
HXLINE( 109)		if ((this->_disposed == true)) {
HXLINE( 110)			return;
            		}
HXLINE( 112)		if ((e->ptr->GetId() != -1)) {
HXLINE( 113)			this->executeHandlers(e,e->ptr->GetId());
            		}
HXLINE( 115)		this->executeHandlers(e,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EvtHandler_obj,handleEvent,(void))

void EvtHandler_obj::executeHandlers(::cpp::Pointer<  wxEvent > e,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_119_executeHandlers)
HXLINE( 120)		bool _hx_tmp;
HXDLIN( 120)		if (::hx::IsNotNull( this->_pausedEvents )) {
HXLINE( 120)			_hx_tmp = this->_pausedEvents->exists(id);
            		}
            		else {
HXLINE( 120)			_hx_tmp = false;
            		}
HXDLIN( 120)		if (_hx_tmp) {
HXLINE( 121)			return;
            		}
HXLINE( 124)		if (::hx::IsNull( this->_eventMap )) {
HXLINE( 125)			return;
            		}
HXLINE( 127)		 ::haxe::ds::IntMap mapForId = ( ( ::haxe::ds::IntMap)(this->_eventMap->get(id)) );
HXLINE( 128)		if (::hx::IsNull( mapForId )) {
HXLINE( 129)			return;
            		}
HXLINE( 132)		::Array< ::Dynamic> eventList = ( (::Array< ::Dynamic>)(mapForId->get(e->ptr->GetEventType())) );
HXLINE( 133)		if (::hx::IsNull( eventList )) {
HXLINE( 134)			return;
            		}
HXLINE( 137)		{
HXLINE( 137)			int _g = 0;
HXDLIN( 137)			while((_g < eventList->length)){
HXLINE( 137)				 ::Dynamic fn = eventList->__get(_g);
HXDLIN( 137)				_g = (_g + 1);
HXLINE( 138)				fn(::hx::widgets::Event_obj::fromPointer(e));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(EvtHandler_obj,executeHandlers,(void))

void EvtHandler_obj::queueEvent( ::hx::widgets::Event event){
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_147_queueEvent)
HXDLIN( 147)		 wxEvtHandler * _hx_tmp = this->get_evtHandlerRef()->ptr;
HXDLIN( 147)		(*(_hx_tmp)).QueueEvent(event->get_eventRef()->get_raw());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EvtHandler_obj,queueEvent,(void))

::cpp::Pointer<  wxEvtHandler > EvtHandler_obj::get_evtHandlerRef(){
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_155_get_evtHandlerRef)
HXDLIN( 155)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EvtHandler_obj,get_evtHandlerRef,return )


::hx::ObjectPtr< EvtHandler_obj > EvtHandler_obj::__new() {
	::hx::ObjectPtr< EvtHandler_obj > __this = new EvtHandler_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EvtHandler_obj > EvtHandler_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EvtHandler_obj *__this = (EvtHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EvtHandler_obj), true, "hx.widgets.EvtHandler"));
	*(void **)__this = EvtHandler_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EvtHandler_obj::EvtHandler_obj()
{
}

void EvtHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EvtHandler);
	HX_MARK_MEMBER_NAME(_eventMap,"_eventMap");
	HX_MARK_MEMBER_NAME(_pausedEvents,"_pausedEvents");
	HX_MARK_MEMBER_NAME(evtHandlerRef,"evtHandlerRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EvtHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_eventMap,"_eventMap");
	HX_VISIT_MEMBER_NAME(_pausedEvents,"_pausedEvents");
	HX_VISIT_MEMBER_NAME(evtHandlerRef,"evtHandlerRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val EvtHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unbind") ) { return ::hx::Val( unbind_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { return ::hx::Val( _eventMap ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseEvent") ) { return ::hx::Val( pauseEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"queueEvent") ) { return ::hx::Val( queueEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return ::hx::Val( handleEvent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"unpauseEvent") ) { return ::hx::Val( unpauseEvent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pausedEvents") ) { return ::hx::Val( _pausedEvents ); }
		if (HX_FIELD_EQ(inName,"evtHandlerRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_evtHandlerRef() : evtHandlerRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"executeHandlers") ) { return ::hx::Val( executeHandlers_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_evtHandlerRef") ) { return ::hx::Val( get_evtHandlerRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EvtHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { _eventMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pausedEvents") ) { _pausedEvents=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"evtHandlerRef") ) { evtHandlerRef=inValue.Cast< ::cpp::Pointer<  wxEvtHandler > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EvtHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_eventMap",01,7e,68,08));
	outFields->push(HX_("_pausedEvents",46,4d,38,b9));
	outFields->push(HX_("evtHandlerRef",6c,04,0d,ae));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EvtHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(EvtHandler_obj,_eventMap),HX_("_eventMap",01,7e,68,08)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(EvtHandler_obj,_pausedEvents),HX_("_pausedEvents",46,4d,38,b9)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxEvtHandler > */ ,(int)offsetof(EvtHandler_obj,evtHandlerRef),HX_("evtHandlerRef",6c,04,0d,ae)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EvtHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String EvtHandler_obj_sMemberFields[] = {
	HX_("_eventMap",01,7e,68,08),
	HX_("_pausedEvents",46,4d,38,b9),
	HX_("pauseEvent",44,65,3d,4b),
	HX_("unpauseEvent",dd,94,4c,b7),
	HX_("bind",bd,f5,16,41),
	HX_("unbind",96,fc,eb,5e),
	HX_("dispose",9f,80,4c,bb),
	HX_("handleEvent",52,73,0e,28),
	HX_("executeHandlers",be,a4,f7,e9),
	HX_("queueEvent",c9,dc,67,46),
	HX_("evtHandlerRef",6c,04,0d,ae),
	HX_("get_evtHandlerRef",c3,0f,7d,b4),
	::String(null()) };

::hx::Class EvtHandler_obj::__mClass;

void EvtHandler_obj::__register()
{
	EvtHandler_obj _hx_dummy;
	EvtHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.EvtHandler",c4,7f,96,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EvtHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EvtHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EvtHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EvtHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
