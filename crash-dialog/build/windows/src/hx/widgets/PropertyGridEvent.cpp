#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_PropertyGridEvent
#include <hx/widgets/PropertyGridEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2ddb5d11c6ac4a5d_7_new,"hx.widgets.PropertyGridEvent","new",0xa4de2f54,"hx.widgets.PropertyGridEvent.new","hx/widgets/PropertyGridEvent.hx",7,0x97cccc9e)
HX_LOCAL_STACK_FRAME(_hx_pos_2ddb5d11c6ac4a5d_10_get_property,"hx.widgets.PropertyGridEvent","get_property",0x7a861eea,"hx.widgets.PropertyGridEvent.get_property","hx/widgets/PropertyGridEvent.hx",10,0x97cccc9e)
HX_LOCAL_STACK_FRAME(_hx_pos_2ddb5d11c6ac4a5d_24_get_propertyGridEventRef,"hx.widgets.PropertyGridEvent","get_propertyGridEventRef",0xfab14049,"hx.widgets.PropertyGridEvent.get_propertyGridEventRef","hx/widgets/PropertyGridEvent.hx",24,0x97cccc9e)
HX_LOCAL_STACK_FRAME(_hx_pos_2ddb5d11c6ac4a5d_30_fromPointer,"hx.widgets.PropertyGridEvent","fromPointer",0xda929767,"hx.widgets.PropertyGridEvent.fromPointer","hx/widgets/PropertyGridEvent.hx",30,0x97cccc9e)
namespace hx{
namespace widgets{

void PropertyGridEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2ddb5d11c6ac4a5d_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic PropertyGridEvent_obj::__CreateEmpty() { return new PropertyGridEvent_obj; }

void *PropertyGridEvent_obj::_hx_vtable = 0;

Dynamic PropertyGridEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyGridEvent_obj > _hx_result = new PropertyGridEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PropertyGridEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08d20340) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08d20340;
	} else {
		return inClassId==(int)0x4f345a43;
	}
}

 ::hx::widgets::PGProperty PropertyGridEvent_obj::get_property(){
            	HX_GC_STACKFRAME(&_hx_pos_2ddb5d11c6ac4a5d_10_get_property)
HXLINE(  11)		 ::hx::widgets::PGProperty p =  ::hx::widgets::PGProperty_obj::__alloc( HX_CTX );
HXLINE(  13)		 wxPGProperty* pProp = this->get_propertyGridEventRef()->ptr->GetProperty();
HXLINE(  14)		p->_ref = ::cpp::Pointer_obj::fromRaw(pProp)->reinterpret();
HXLINE(  16)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PropertyGridEvent_obj,get_property,return )

::cpp::Pointer<  wxPropertyGridEvent > PropertyGridEvent_obj::get_propertyGridEventRef(){
            	HX_STACKFRAME(&_hx_pos_2ddb5d11c6ac4a5d_24_get_propertyGridEventRef)
HXDLIN(  24)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PropertyGridEvent_obj,get_propertyGridEventRef,return )

 ::hx::widgets::Event PropertyGridEvent_obj::fromPointer(::cpp::Pointer<  wxEvent > ptr){
            	HX_GC_STACKFRAME(&_hx_pos_2ddb5d11c6ac4a5d_30_fromPointer)
HXLINE(  31)		 ::hx::widgets::PropertyGridEvent event =  ::hx::widgets::PropertyGridEvent_obj::__alloc( HX_CTX );
HXLINE(  32)		event->_ref = ptr;
HXLINE(  33)		return event;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PropertyGridEvent_obj,fromPointer,return )


::hx::ObjectPtr< PropertyGridEvent_obj > PropertyGridEvent_obj::__new() {
	::hx::ObjectPtr< PropertyGridEvent_obj > __this = new PropertyGridEvent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PropertyGridEvent_obj > PropertyGridEvent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PropertyGridEvent_obj *__this = (PropertyGridEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyGridEvent_obj), true, "hx.widgets.PropertyGridEvent"));
	*(void **)__this = PropertyGridEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PropertyGridEvent_obj::PropertyGridEvent_obj()
{
}

void PropertyGridEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyGridEvent);
	HX_MARK_MEMBER_NAME(property,"property");
	HX_MARK_MEMBER_NAME(propertyGridEventRef,"propertyGridEventRef");
	 ::hx::widgets::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PropertyGridEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(property,"property");
	HX_VISIT_MEMBER_NAME(propertyGridEventRef,"propertyGridEventRef");
	 ::hx::widgets::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PropertyGridEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"property") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_property() : property ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_property") ) { return ::hx::Val( get_property_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"propertyGridEventRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_propertyGridEventRef() : propertyGridEventRef ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_propertyGridEventRef") ) { return ::hx::Val( get_propertyGridEventRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PropertyGridEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromPointer") ) { outValue = fromPointer_dyn(); return true; }
	}
	return false;
}

::hx::Val PropertyGridEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"property") ) { property=inValue.Cast<  ::hx::widgets::PGProperty >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"propertyGridEventRef") ) { propertyGridEventRef=inValue.Cast< ::cpp::Pointer<  wxPropertyGridEvent > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyGridEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("property",55,48,38,ac));
	outFields->push(HX_("propertyGridEventRef",34,5e,f1,ea));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PropertyGridEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::PGProperty */ ,(int)offsetof(PropertyGridEvent_obj,property),HX_("property",55,48,38,ac)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxPropertyGridEvent > */ ,(int)offsetof(PropertyGridEvent_obj,propertyGridEventRef),HX_("propertyGridEventRef",34,5e,f1,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PropertyGridEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyGridEvent_obj_sMemberFields[] = {
	HX_("property",55,48,38,ac),
	HX_("get_property",5e,fc,51,61),
	HX_("propertyGridEventRef",34,5e,f1,ea),
	HX_("get_propertyGridEventRef",bd,7b,8d,2d),
	::String(null()) };

::hx::Class PropertyGridEvent_obj::__mClass;

static ::String PropertyGridEvent_obj_sStaticFields[] = {
	HX_("fromPointer",73,24,62,e9),
	::String(null())
};

void PropertyGridEvent_obj::__register()
{
	PropertyGridEvent_obj _hx_dummy;
	PropertyGridEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.PropertyGridEvent",62,35,9f,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PropertyGridEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PropertyGridEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyGridEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyGridEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyGridEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyGridEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
