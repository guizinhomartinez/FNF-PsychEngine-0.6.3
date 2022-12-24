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
#ifndef INCLUDED_hx_widgets_DataViewProgressRenderer
#include <hx/widgets/DataViewProgressRenderer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a45cb942629495d6_8_new,"hx.widgets.DataViewProgressRenderer","new",0xfd49122e,"hx.widgets.DataViewProgressRenderer.new","hx/widgets/DataViewProgressRenderer.hx",8,0x47a3bb40)
HX_LOCAL_STACK_FRAME(_hx_pos_a45cb942629495d6_19_get_dataViewProgressRendererRef,"hx.widgets.DataViewProgressRenderer","get_dataViewProgressRendererRef",0x544c2d19,"hx.widgets.DataViewProgressRenderer.get_dataViewProgressRendererRef","hx/widgets/DataViewProgressRenderer.hx",19,0x47a3bb40)
namespace hx{
namespace widgets{

void DataViewProgressRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a45cb942629495d6_8_new)
HXDLIN(   8)		super::__construct();
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			const char* this1 = HX_("",00,00,00,00).utf8_str();
HXDLIN(  10)			 wxString label = wxString::FromUTF8(this1);
HXDLIN(  10)			const char* this2 = HX_("long",7c,a5,b7,47).utf8_str();
HXDLIN(  10)			 wxString variantType = wxString::FromUTF8(this2);
HXDLIN(  10)			::cpp::Pointer<  wxDataViewProgressRenderer > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxDataViewProgressRenderer(label,variantType,wxDATAVIEW_CELL_INERT,::wx::widgets::Defs_obj::ALIGN_CENTER_VERTICAL)));
HXDLIN(  10)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic DataViewProgressRenderer_obj::__CreateEmpty() { return new DataViewProgressRenderer_obj; }

void *DataViewProgressRenderer_obj::_hx_vtable = 0;

Dynamic DataViewProgressRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewProgressRenderer_obj > _hx_result = new DataViewProgressRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataViewProgressRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0d79f556) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0d79f556;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x56388651;
	}
}

::cpp::Pointer<  wxDataViewProgressRenderer > DataViewProgressRenderer_obj::get_dataViewProgressRendererRef(){
            	HX_STACKFRAME(&_hx_pos_a45cb942629495d6_19_get_dataViewProgressRendererRef)
HXDLIN(  19)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewProgressRenderer_obj,get_dataViewProgressRendererRef,return )


::hx::ObjectPtr< DataViewProgressRenderer_obj > DataViewProgressRenderer_obj::__new() {
	::hx::ObjectPtr< DataViewProgressRenderer_obj > __this = new DataViewProgressRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DataViewProgressRenderer_obj > DataViewProgressRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DataViewProgressRenderer_obj *__this = (DataViewProgressRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewProgressRenderer_obj), true, "hx.widgets.DataViewProgressRenderer"));
	*(void **)__this = DataViewProgressRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataViewProgressRenderer_obj::DataViewProgressRenderer_obj()
{
}

void DataViewProgressRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewProgressRenderer);
	HX_MARK_MEMBER_NAME(dataViewProgressRendererRef,"dataViewProgressRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataViewProgressRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataViewProgressRendererRef,"dataViewProgressRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataViewProgressRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 27:
		if (HX_FIELD_EQ(inName,"dataViewProgressRendererRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataViewProgressRendererRef() : dataViewProgressRendererRef ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_dataViewProgressRendererRef") ) { return ::hx::Val( get_dataViewProgressRendererRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewProgressRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 27:
		if (HX_FIELD_EQ(inName,"dataViewProgressRendererRef") ) { dataViewProgressRendererRef=inValue.Cast< ::cpp::Pointer<  wxDataViewProgressRenderer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewProgressRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataViewProgressRendererRef",b4,dc,34,eb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewProgressRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataViewProgressRenderer > */ ,(int)offsetof(DataViewProgressRenderer_obj,dataViewProgressRendererRef),HX_("dataViewProgressRendererRef",b4,dc,34,eb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewProgressRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewProgressRenderer_obj_sMemberFields[] = {
	HX_("dataViewProgressRendererRef",b4,dc,34,eb),
	HX_("get_dataViewProgressRendererRef",4b,72,05,c7),
	::String(null()) };

::hx::Class DataViewProgressRenderer_obj::__mClass;

void DataViewProgressRenderer_obj::__register()
{
	DataViewProgressRenderer_obj _hx_dummy;
	DataViewProgressRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewProgressRenderer",3c,23,b5,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewProgressRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewProgressRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewProgressRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewProgressRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
