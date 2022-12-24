#include <hxcpp.h>

#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_61b425b3957b0470_6_new,"hx.widgets.DataViewRenderer","new",0xef9b72e1,"hx.widgets.DataViewRenderer.new","hx/widgets/DataViewRenderer.hx",6,0xac21c3ed)
HX_LOCAL_STACK_FRAME(_hx_pos_61b425b3957b0470_12_get_dataViewRendererRef,"hx.widgets.DataViewRenderer","get_dataViewRendererRef",0xae613df9,"hx.widgets.DataViewRenderer.get_dataViewRendererRef","hx/widgets/DataViewRenderer.hx",12,0xac21c3ed)
namespace hx{
namespace widgets{

void DataViewRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_61b425b3957b0470_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic DataViewRenderer_obj::__CreateEmpty() { return new DataViewRenderer_obj; }

void *DataViewRenderer_obj::_hx_vtable = 0;

Dynamic DataViewRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewRenderer_obj > _hx_result = new DataViewRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataViewRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x56388651;
	}
}

::cpp::Pointer<  wxDataViewRenderer > DataViewRenderer_obj::get_dataViewRendererRef(){
            	HX_STACKFRAME(&_hx_pos_61b425b3957b0470_12_get_dataViewRendererRef)
HXDLIN(  12)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewRenderer_obj,get_dataViewRendererRef,return )


::hx::ObjectPtr< DataViewRenderer_obj > DataViewRenderer_obj::__new() {
	::hx::ObjectPtr< DataViewRenderer_obj > __this = new DataViewRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DataViewRenderer_obj > DataViewRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DataViewRenderer_obj *__this = (DataViewRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewRenderer_obj), true, "hx.widgets.DataViewRenderer"));
	*(void **)__this = DataViewRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataViewRenderer_obj::DataViewRenderer_obj()
{
}

void DataViewRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewRenderer);
	HX_MARK_MEMBER_NAME(dataViewRendererRef,"dataViewRendererRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataViewRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataViewRendererRef,"dataViewRendererRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataViewRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"dataViewRendererRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataViewRendererRef() : dataViewRendererRef ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_dataViewRendererRef") ) { return ::hx::Val( get_dataViewRendererRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"dataViewRendererRef") ) { dataViewRendererRef=inValue.Cast< ::cpp::Pointer<  wxDataViewRenderer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataViewRendererRef",61,4e,08,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataViewRenderer > */ ,(int)offsetof(DataViewRenderer_obj,dataViewRendererRef),HX_("dataViewRendererRef",61,4e,08,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewRenderer_obj_sMemberFields[] = {
	HX_("dataViewRendererRef",61,4e,08,4b),
	HX_("get_dataViewRendererRef",f8,f4,5d,53),
	::String(null()) };

::hx::Class DataViewRenderer_obj::__mClass;

void DataViewRenderer_obj::__register()
{
	DataViewRenderer_obj _hx_dummy;
	DataViewRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewRenderer",6f,6e,96,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
