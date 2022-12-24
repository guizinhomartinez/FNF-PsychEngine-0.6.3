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
#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewTextRenderer
#include <hx/widgets/DataViewTextRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b87a2ceca0a8dbf3_8_new,"hx.widgets.DataViewTextRenderer","new",0x1463612e,"hx.widgets.DataViewTextRenderer.new","hx/widgets/DataViewTextRenderer.hx",8,0xa828d540)
HX_LOCAL_STACK_FRAME(_hx_pos_b87a2ceca0a8dbf3_19_get_dataViewTextRendererRef,"hx.widgets.DataViewTextRenderer","get_dataViewTextRendererRef",0x2aaa1419,"hx.widgets.DataViewTextRenderer.get_dataViewTextRendererRef","hx/widgets/DataViewTextRenderer.hx",19,0xa828d540)
namespace hx{
namespace widgets{

void DataViewTextRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b87a2ceca0a8dbf3_8_new)
HXDLIN(   8)		super::__construct();
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			const char* this1 = HX_("string",d1,28,30,11).utf8_str();
HXDLIN(  10)			 wxString variantType = wxString::FromUTF8(this1);
HXDLIN(  10)			::cpp::Pointer<  wxDataViewTextRenderer > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxDataViewTextRenderer(variantType,wxDATAVIEW_CELL_INERT,::wx::widgets::Defs_obj::ALIGN_CENTER_VERTICAL)));
HXDLIN(  10)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic DataViewTextRenderer_obj::__CreateEmpty() { return new DataViewTextRenderer_obj; }

void *DataViewTextRenderer_obj::_hx_vtable = 0;

Dynamic DataViewTextRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewTextRenderer_obj > _hx_result = new DataViewTextRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataViewTextRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0a3be93a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a3be93a;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x56388651;
	}
}

::cpp::Pointer<  wxDataViewTextRenderer > DataViewTextRenderer_obj::get_dataViewTextRendererRef(){
            	HX_STACKFRAME(&_hx_pos_b87a2ceca0a8dbf3_19_get_dataViewTextRendererRef)
HXDLIN(  19)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewTextRenderer_obj,get_dataViewTextRendererRef,return )


::hx::ObjectPtr< DataViewTextRenderer_obj > DataViewTextRenderer_obj::__new() {
	::hx::ObjectPtr< DataViewTextRenderer_obj > __this = new DataViewTextRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DataViewTextRenderer_obj > DataViewTextRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DataViewTextRenderer_obj *__this = (DataViewTextRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewTextRenderer_obj), true, "hx.widgets.DataViewTextRenderer"));
	*(void **)__this = DataViewTextRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataViewTextRenderer_obj::DataViewTextRenderer_obj()
{
}

void DataViewTextRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewTextRenderer);
	HX_MARK_MEMBER_NAME(dataViewTextRendererRef,"dataViewTextRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataViewTextRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataViewTextRendererRef,"dataViewTextRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataViewTextRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"dataViewTextRendererRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataViewTextRendererRef() : dataViewTextRendererRef ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_dataViewTextRendererRef") ) { return ::hx::Val( get_dataViewTextRendererRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewTextRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"dataViewTextRendererRef") ) { dataViewTextRendererRef=inValue.Cast< ::cpp::Pointer<  wxDataViewTextRenderer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewTextRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataViewTextRendererRef",34,cb,f6,7f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewTextRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataViewTextRenderer > */ ,(int)offsetof(DataViewTextRenderer_obj,dataViewTextRendererRef),HX_("dataViewTextRendererRef",34,cb,f6,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewTextRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewTextRenderer_obj_sMemberFields[] = {
	HX_("dataViewTextRendererRef",34,cb,f6,7f),
	HX_("get_dataViewTextRendererRef",4b,09,99,4c),
	::String(null()) };

::hx::Class DataViewTextRenderer_obj::__mClass;

void DataViewTextRenderer_obj::__register()
{
	DataViewTextRenderer_obj _hx_dummy;
	DataViewTextRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewTextRenderer",3c,f2,bb,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewTextRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewTextRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewTextRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewTextRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
