#include <hxcpp.h>

#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_DataViewCustomRenderer
#include <hx/widgets/DataViewCustomRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewSpinRenderer
#include <hx/widgets/DataViewSpinRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4cdaf895f761842e_7_new,"hx.widgets.DataViewSpinRenderer","new",0xa95841c3,"hx.widgets.DataViewSpinRenderer.new","hx/widgets/DataViewSpinRenderer.hx",7,0xcfdbde4b)
HX_LOCAL_STACK_FRAME(_hx_pos_4cdaf895f761842e_18_get_dataViewSpinRendererRef,"hx.widgets.DataViewSpinRenderer","get_dataViewSpinRendererRef",0xb82754b9,"hx.widgets.DataViewSpinRenderer.get_dataViewSpinRendererRef","hx/widgets/DataViewSpinRenderer.hx",18,0xcfdbde4b)
namespace hx{
namespace widgets{

void DataViewSpinRenderer_obj::__construct(::hx::Null< int >  __o_min,::hx::Null< int >  __o_max){
            		int min = __o_min.Default(0);
            		int max = __o_max.Default(100);
            	HX_STACKFRAME(&_hx_pos_4cdaf895f761842e_7_new)
HXDLIN(   7)		super::__construct();
HXLINE(   8)		if (::hx::IsNull( this->_ref )) {
HXLINE(   9)			::cpp::Pointer<  wxDataViewSpinRenderer > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxDataViewSpinRenderer(min,max,wxDATAVIEW_CELL_EDITABLE ,::wx::widgets::Defs_obj::ALIGN_CENTER_VERTICAL)));
HXDLIN(   9)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic DataViewSpinRenderer_obj::__CreateEmpty() { return new DataViewSpinRenderer_obj; }

void *DataViewSpinRenderer_obj::_hx_vtable = 0;

Dynamic DataViewSpinRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewSpinRenderer_obj > _hx_result = new DataViewSpinRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DataViewSpinRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x1c059b4f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1c059b4f;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x56388651 || inClassId==(int)0x5a78a1a2;
	}
}

::cpp::Pointer<  wxDataViewSpinRenderer > DataViewSpinRenderer_obj::get_dataViewSpinRendererRef(){
            	HX_STACKFRAME(&_hx_pos_4cdaf895f761842e_18_get_dataViewSpinRendererRef)
HXDLIN(  18)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewSpinRenderer_obj,get_dataViewSpinRendererRef,return )


::hx::ObjectPtr< DataViewSpinRenderer_obj > DataViewSpinRenderer_obj::__new(::hx::Null< int >  __o_min,::hx::Null< int >  __o_max) {
	::hx::ObjectPtr< DataViewSpinRenderer_obj > __this = new DataViewSpinRenderer_obj();
	__this->__construct(__o_min,__o_max);
	return __this;
}

::hx::ObjectPtr< DataViewSpinRenderer_obj > DataViewSpinRenderer_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_min,::hx::Null< int >  __o_max) {
	DataViewSpinRenderer_obj *__this = (DataViewSpinRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewSpinRenderer_obj), true, "hx.widgets.DataViewSpinRenderer"));
	*(void **)__this = DataViewSpinRenderer_obj::_hx_vtable;
	__this->__construct(__o_min,__o_max);
	return __this;
}

DataViewSpinRenderer_obj::DataViewSpinRenderer_obj()
{
}

void DataViewSpinRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewSpinRenderer);
	HX_MARK_MEMBER_NAME(dataViewSpinRendererRef,"dataViewSpinRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataViewSpinRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataViewSpinRendererRef,"dataViewSpinRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataViewSpinRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"dataViewSpinRendererRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataViewSpinRendererRef() : dataViewSpinRendererRef ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_dataViewSpinRendererRef") ) { return ::hx::Val( get_dataViewSpinRendererRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewSpinRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"dataViewSpinRendererRef") ) { dataViewSpinRendererRef=inValue.Cast< ::cpp::Pointer<  wxDataViewSpinRenderer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewSpinRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataViewSpinRendererRef",3f,d4,a9,a7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewSpinRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataViewSpinRenderer > */ ,(int)offsetof(DataViewSpinRenderer_obj,dataViewSpinRendererRef),HX_("dataViewSpinRendererRef",3f,d4,a9,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewSpinRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewSpinRenderer_obj_sMemberFields[] = {
	HX_("dataViewSpinRendererRef",3f,d4,a9,a7),
	HX_("get_dataViewSpinRendererRef",56,12,4c,74),
	::String(null()) };

::hx::Class DataViewSpinRenderer_obj::__mClass;

void DataViewSpinRenderer_obj::__register()
{
	DataViewSpinRenderer_obj _hx_dummy;
	DataViewSpinRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewSpinRenderer",51,a4,85,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewSpinRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewSpinRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewSpinRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewSpinRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
