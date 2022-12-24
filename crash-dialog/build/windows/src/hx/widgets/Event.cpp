#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bae193ebf6197c85_10_new,"hx.widgets.Event","new",0xa2d5000f,"hx.widgets.Event.new","hx/widgets/Event.hx",10,0x912c3143)
HX_LOCAL_STACK_FRAME(_hx_pos_bae193ebf6197c85_16_get_eventType,"hx.widgets.Event","get_eventType",0xd8f7103a,"hx.widgets.Event.get_eventType","hx/widgets/Event.hx",16,0x912c3143)
HX_LOCAL_STACK_FRAME(_hx_pos_bae193ebf6197c85_21_get_id,"hx.widgets.Event","get_id",0x4c027ad5,"hx.widgets.Event.get_id","hx/widgets/Event.hx",21,0x912c3143)
HX_LOCAL_STACK_FRAME(_hx_pos_bae193ebf6197c85_25_skip,"hx.widgets.Event","skip",0xdadd9ff0,"hx.widgets.Event.skip","hx/widgets/Event.hx",25,0x912c3143)
HX_LOCAL_STACK_FRAME(_hx_pos_bae193ebf6197c85_29_stopPropagation,"hx.widgets.Event","stopPropagation",0x8612fc19,"hx.widgets.Event.stopPropagation","hx/widgets/Event.hx",29,0x912c3143)
HX_LOCAL_STACK_FRAME(_hx_pos_bae193ebf6197c85_32_convertTo,"hx.widgets.Event","convertTo",0xb6f6873d,"hx.widgets.Event.convertTo","hx/widgets/Event.hx",32,0x912c3143)
HX_LOCAL_STACK_FRAME(_hx_pos_bae193ebf6197c85_49_get_eventRef,"hx.widgets.Event","get_eventRef",0x1a38ebd3,"hx.widgets.Event.get_eventRef","hx/widgets/Event.hx",49,0x912c3143)
HX_LOCAL_STACK_FRAME(_hx_pos_bae193ebf6197c85_38_fromPointer,"hx.widgets.Event","fromPointer",0xfa311b22,"hx.widgets.Event.fromPointer","hx/widgets/Event.hx",38,0x912c3143)
namespace hx{
namespace widgets{

void Event_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bae193ebf6197c85_10_new)
            	}

Dynamic Event_obj::__CreateEmpty() { return new Event_obj; }

void *Event_obj::_hx_vtable = 0;

Dynamic Event_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Event_obj > _hx_result = new Event_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Event_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f345a43;
}

int Event_obj::get_eventType(){
            	HX_STACKFRAME(&_hx_pos_bae193ebf6197c85_16_get_eventType)
HXDLIN(  16)		return this->_ref->ptr->GetEventType();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_eventType,return )

int Event_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_bae193ebf6197c85_21_get_id)
HXDLIN(  21)		return this->_ref->ptr->GetId();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_id,return )

void Event_obj::skip(::hx::Null< bool >  __o_skip){
            		bool skip = __o_skip.Default(true);
            	HX_STACKFRAME(&_hx_pos_bae193ebf6197c85_25_skip)
HXDLIN(  25)		this->_ref->ptr->Skip(skip);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,skip,(void))

void Event_obj::stopPropagation(){
            	HX_STACKFRAME(&_hx_pos_bae193ebf6197c85_29_stopPropagation)
HXDLIN(  29)		this->_ref->ptr->StopPropagation();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopPropagation,(void))

 ::Dynamic Event_obj::convertTo(::hx::Class clz){
            	HX_STACKFRAME(&_hx_pos_bae193ebf6197c85_32_convertTo)
HXLINE(  33)		 ::Dynamic event = ::Type_obj::createInstance(clz,::cpp::VirtualArray_obj::__new(0));
HXLINE(  34)		::hx::TCast<  ::hx::widgets::Event >::cast(event)->_ref = this->_ref;
HXLINE(  35)		return event;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,convertTo,return )

::cpp::Pointer<  wxEvent > Event_obj::get_eventRef(){
            	HX_STACKFRAME(&_hx_pos_bae193ebf6197c85_49_get_eventRef)
HXDLIN(  49)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_eventRef,return )

 ::hx::widgets::Event Event_obj::fromPointer(::cpp::Pointer<  wxEvent > ptr){
            	HX_GC_STACKFRAME(&_hx_pos_bae193ebf6197c85_38_fromPointer)
HXLINE(  39)		 ::hx::widgets::Event event =  ::hx::widgets::Event_obj::__alloc( HX_CTX );
HXLINE(  40)		event->_ref = ptr;
HXLINE(  41)		return event;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Event_obj,fromPointer,return )


::hx::ObjectPtr< Event_obj > Event_obj::__new() {
	::hx::ObjectPtr< Event_obj > __this = new Event_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Event_obj > Event_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Event_obj *__this = (Event_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Event_obj), true, "hx.widgets.Event"));
	*(void **)__this = Event_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(eventType,"eventType");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(eventRef,"eventRef");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(eventType,"eventType");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(eventRef,"eventRef");
}

::hx::Val Event_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_id() : id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		if (HX_FIELD_EQ(inName,"skip") ) { return ::hx::Val( skip_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"eventRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_eventRef() : eventRef ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventType") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_eventType() : eventType ); }
		if (HX_FIELD_EQ(inName,"convertTo") ) { return ::hx::Val( convertTo_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_eventRef") ) { return ::hx::Val( get_eventRef_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_eventType") ) { return ::hx::Val( get_eventType_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return ::hx::Val( stopPropagation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Event_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromPointer") ) { outValue = fromPointer_dyn(); return true; }
	}
	return false;
}

::hx::Val Event_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxEvent > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"eventRef") ) { eventRef=inValue.Cast< ::cpp::Pointer<  wxEvent > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventType") ) { eventType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("eventType",f4,fb,15,fc));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("eventRef",59,55,d6,c0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Event_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxEvent > */ ,(int)offsetof(Event_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsInt,(int)offsetof(Event_obj,eventType),HX_("eventType",f4,fb,15,fc)},
	{::hx::fsInt,(int)offsetof(Event_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxEvent > */ ,(int)offsetof(Event_obj,eventRef),HX_("eventRef",59,55,d6,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Event_obj_sStaticStorageInfo = 0;
#endif

static ::String Event_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("eventType",f4,fb,15,fc),
	HX_("get_eventType",cb,cf,79,bd),
	HX_("id",db,5b,00,00),
	HX_("get_id",24,f3,2f,a3),
	HX_("skip",7f,16,55,4c),
	HX_("stopPropagation",ea,81,71,a0),
	HX_("convertTo",4e,ea,bb,df),
	HX_("eventRef",59,55,d6,c0),
	HX_("get_eventRef",62,09,f0,75),
	::String(null()) };

::hx::Class Event_obj::__mClass;

static ::String Event_obj_sStaticFields[] = {
	HX_("fromPointer",73,24,62,e9),
	::String(null())
};

void Event_obj::__register()
{
	Event_obj _hx_dummy;
	Event_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Event",9d,4c,1a,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Event_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Event_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Event_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Event_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Event_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Event_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
