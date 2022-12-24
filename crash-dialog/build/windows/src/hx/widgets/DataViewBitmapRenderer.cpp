#include <hxcpp.h>

#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_DataViewBitmapRenderer
#include <hx/widgets/DataViewBitmapRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_16d718da269ca97b_8_new,"hx.widgets.DataViewBitmapRenderer","new",0x25a72270,"hx.widgets.DataViewBitmapRenderer.new","hx/widgets/DataViewBitmapRenderer.hx",8,0x71893dbe)
HX_LOCAL_STACK_FRAME(_hx_pos_16d718da269ca97b_19_get_dataViewBitmapRendererRef,"hx.widgets.DataViewBitmapRenderer","get_dataViewBitmapRendererRef",0xafac2959,"hx.widgets.DataViewBitmapRenderer.get_dataViewBitmapRendererRef","hx/widgets/DataViewBitmapRenderer.hx",19,0x71893dbe)
namespace hx{
namespace widgets{

void DataViewBitmapRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_16d718da269ca97b_8_new)
HXDLIN(   8)		super::__construct();
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			const char* this1 = HX_("wxBitmap",f0,3a,23,3a).utf8_str();
HXDLIN(  10)			 wxString variantType = wxString::FromUTF8(this1);
HXDLIN(  10)			::cpp::Pointer<  wxDataViewBitmapRenderer > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxDataViewBitmapRenderer(variantType,wxDATAVIEW_CELL_INERT,(::wx::widgets::Defs_obj::ALIGN_CENTER_VERTICAL | ::wx::widgets::Defs_obj::ALIGN_CENTER))));
HXDLIN(  10)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic DataViewBitmapRenderer_obj::__CreateEmpty() { return new DataViewBitmapRenderer_obj; }

void *DataViewBitmapRenderer_obj::_hx_vtable = 0;

Dynamic DataViewBitmapRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewBitmapRenderer_obj > _hx_result = new DataViewBitmapRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataViewBitmapRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x033197e0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x033197e0;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x56388651;
	}
}

::cpp::Pointer<  wxDataViewBitmapRenderer > DataViewBitmapRenderer_obj::get_dataViewBitmapRendererRef(){
            	HX_STACKFRAME(&_hx_pos_16d718da269ca97b_19_get_dataViewBitmapRendererRef)
HXDLIN(  19)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewBitmapRenderer_obj,get_dataViewBitmapRendererRef,return )


::hx::ObjectPtr< DataViewBitmapRenderer_obj > DataViewBitmapRenderer_obj::__new() {
	::hx::ObjectPtr< DataViewBitmapRenderer_obj > __this = new DataViewBitmapRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DataViewBitmapRenderer_obj > DataViewBitmapRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DataViewBitmapRenderer_obj *__this = (DataViewBitmapRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewBitmapRenderer_obj), true, "hx.widgets.DataViewBitmapRenderer"));
	*(void **)__this = DataViewBitmapRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataViewBitmapRenderer_obj::DataViewBitmapRenderer_obj()
{
}

void DataViewBitmapRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewBitmapRenderer);
	HX_MARK_MEMBER_NAME(dataViewBitmapRendererRef,"dataViewBitmapRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataViewBitmapRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataViewBitmapRendererRef,"dataViewBitmapRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataViewBitmapRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"dataViewBitmapRendererRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataViewBitmapRendererRef() : dataViewBitmapRendererRef ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_dataViewBitmapRendererRef") ) { return ::hx::Val( get_dataViewBitmapRendererRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewBitmapRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"dataViewBitmapRendererRef") ) { dataViewBitmapRendererRef=inValue.Cast< ::cpp::Pointer<  wxDataViewBitmapRenderer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewBitmapRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataViewBitmapRendererRef",72,51,ef,98));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewBitmapRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataViewBitmapRenderer > */ ,(int)offsetof(DataViewBitmapRenderer_obj,dataViewBitmapRendererRef),HX_("dataViewBitmapRendererRef",72,51,ef,98)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewBitmapRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewBitmapRenderer_obj_sMemberFields[] = {
	HX_("dataViewBitmapRendererRef",72,51,ef,98),
	HX_("get_dataViewBitmapRendererRef",49,83,2e,81),
	::String(null()) };

::hx::Class DataViewBitmapRenderer_obj::__mClass;

void DataViewBitmapRenderer_obj::__register()
{
	DataViewBitmapRenderer_obj _hx_dummy;
	DataViewBitmapRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewBitmapRenderer",7e,6a,71,74);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewBitmapRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewBitmapRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewBitmapRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewBitmapRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
