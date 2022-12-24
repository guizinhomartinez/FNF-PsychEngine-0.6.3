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
#ifndef INCLUDED_hx_widgets_DataViewToggleRenderer
#include <hx/widgets/DataViewToggleRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb462d869b2acb6f_8_new,"hx.widgets.DataViewToggleRenderer","new",0x453a3595,"hx.widgets.DataViewToggleRenderer.new","hx/widgets/DataViewToggleRenderer.hx",8,0x5d039639)
HX_LOCAL_STACK_FRAME(_hx_pos_cb462d869b2acb6f_19_get_dataViewToggleRendererRef,"hx.widgets.DataViewToggleRenderer","get_dataViewToggleRendererRef",0x25dcaf39,"hx.widgets.DataViewToggleRenderer.get_dataViewToggleRendererRef","hx/widgets/DataViewToggleRenderer.hx",19,0x5d039639)
namespace hx{
namespace widgets{

void DataViewToggleRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cb462d869b2acb6f_8_new)
HXDLIN(   8)		super::__construct();
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			const char* this1 = HX_("bool",2a,84,1b,41).utf8_str();
HXDLIN(  10)			 wxString variantType = wxString::FromUTF8(this1);
HXDLIN(  10)			::cpp::Pointer<  wxDataViewToggleRenderer > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxDataViewToggleRenderer(variantType,wxDATAVIEW_CELL_ACTIVATABLE,::wx::widgets::Defs_obj::ALIGN_CENTER)));
HXDLIN(  10)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic DataViewToggleRenderer_obj::__CreateEmpty() { return new DataViewToggleRenderer_obj; }

void *DataViewToggleRenderer_obj::_hx_vtable = 0;

Dynamic DataViewToggleRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewToggleRenderer_obj > _hx_result = new DataViewToggleRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataViewToggleRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2cc8f485) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x2cc8f485;
		}
	} else {
		return inClassId==(int)0x56388651;
	}
}

::cpp::Pointer<  wxDataViewToggleRenderer > DataViewToggleRenderer_obj::get_dataViewToggleRendererRef(){
            	HX_STACKFRAME(&_hx_pos_cb462d869b2acb6f_19_get_dataViewToggleRendererRef)
HXDLIN(  19)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewToggleRenderer_obj,get_dataViewToggleRendererRef,return )


::hx::ObjectPtr< DataViewToggleRenderer_obj > DataViewToggleRenderer_obj::__new() {
	::hx::ObjectPtr< DataViewToggleRenderer_obj > __this = new DataViewToggleRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DataViewToggleRenderer_obj > DataViewToggleRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DataViewToggleRenderer_obj *__this = (DataViewToggleRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewToggleRenderer_obj), true, "hx.widgets.DataViewToggleRenderer"));
	*(void **)__this = DataViewToggleRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataViewToggleRenderer_obj::DataViewToggleRenderer_obj()
{
}

void DataViewToggleRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewToggleRenderer);
	HX_MARK_MEMBER_NAME(dataViewToggleRendererRef,"dataViewToggleRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataViewToggleRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataViewToggleRendererRef,"dataViewToggleRendererRef");
	 ::hx::widgets::DataViewRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataViewToggleRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"dataViewToggleRendererRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataViewToggleRendererRef() : dataViewToggleRendererRef ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_dataViewToggleRendererRef") ) { return ::hx::Val( get_dataViewToggleRendererRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewToggleRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"dataViewToggleRendererRef") ) { dataViewToggleRendererRef=inValue.Cast< ::cpp::Pointer<  wxDataViewToggleRenderer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewToggleRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataViewToggleRendererRef",ed,a9,69,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewToggleRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataViewToggleRenderer > */ ,(int)offsetof(DataViewToggleRenderer_obj,dataViewToggleRendererRef),HX_("dataViewToggleRendererRef",ed,a9,69,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewToggleRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewToggleRenderer_obj_sMemberFields[] = {
	HX_("dataViewToggleRendererRef",ed,a9,69,84),
	HX_("get_dataViewToggleRendererRef",c4,db,a8,6c),
	::String(null()) };

::hx::Class DataViewToggleRenderer_obj::__mClass;

void DataViewToggleRenderer_obj::__register()
{
	DataViewToggleRenderer_obj _hx_dummy;
	DataViewToggleRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewToggleRenderer",23,c7,08,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewToggleRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewToggleRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewToggleRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewToggleRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
