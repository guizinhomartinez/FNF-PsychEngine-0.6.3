#include <hxcpp.h>

#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
#ifndef INCLUDED_b4548bb3748a21b1
#define INCLUDED_b4548bb3748a21b1
#include "wx/headercol.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_DataViewColumn
#include <hx/widgets/DataViewColumn.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_HeaderColumn
#include <hx/widgets/HeaderColumn.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_SettableHeaderColumn
#include <hx/widgets/SettableHeaderColumn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_321fe91aa92bdcd4_9_new,"hx.widgets.DataViewColumn","new",0x005e5ef4,"hx.widgets.DataViewColumn.new","hx/widgets/DataViewColumn.hx",9,0x93da0fba)
HX_LOCAL_STACK_FRAME(_hx_pos_321fe91aa92bdcd4_23_get_dataViewColumnRef,"hx.widgets.DataViewColumn","get_dataViewColumnRef",0x5d3d12d9,"hx.widgets.DataViewColumn.get_dataViewColumnRef","hx/widgets/DataViewColumn.hx",23,0x93da0fba)
namespace hx{
namespace widgets{

void DataViewColumn_obj::__construct(::String title, ::hx::widgets::DataViewRenderer renderer,::hx::Null< int >  __o_modelColumn){
            		int modelColumn = __o_modelColumn.Default(-1);
            	HX_STACKFRAME(&_hx_pos_321fe91aa92bdcd4_9_new)
HXLINE(  10)		bool _hx_tmp;
HXDLIN(  10)		bool _hx_tmp1;
HXDLIN(  10)		if (::hx::IsNotNull( title )) {
HXLINE(  10)			_hx_tmp1 = ::hx::IsNotNull( renderer );
            		}
            		else {
HXLINE(  10)			_hx_tmp1 = false;
            		}
HXDLIN(  10)		if (_hx_tmp1) {
HXLINE(  10)			_hx_tmp = (modelColumn != -1);
            		}
            		else {
HXLINE(  10)			_hx_tmp = false;
            		}
HXDLIN(  10)		if (_hx_tmp) {
HXLINE(  11)			const char* this1 = title.utf8_str();
HXDLIN(  11)			 wxString s = wxString::FromUTF8(this1);
HXLINE(  12)			 wxDataViewRenderer* p = renderer->get_dataViewRendererRef()->get_raw();
HXLINE(  13)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxDataViewColumn(s,p,modelColumn)))->reinterpret();
            		}
HXLINE(  15)		super::__construct();
            	}

Dynamic DataViewColumn_obj::__CreateEmpty() { return new DataViewColumn_obj; }

void *DataViewColumn_obj::_hx_vtable = 0;

Dynamic DataViewColumn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewColumn_obj > _hx_result = new DataViewColumn_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DataViewColumn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21841f1e) {
		if (inClassId<=(int)0x1b8a1064) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1b8a1064;
		} else {
			return inClassId==(int)0x21841f1e;
		}
	} else {
		return inClassId==(int)0x7b23bb4e;
	}
}

::cpp::Pointer<  wxDataViewColumn > DataViewColumn_obj::get_dataViewColumnRef(){
            	HX_STACKFRAME(&_hx_pos_321fe91aa92bdcd4_23_get_dataViewColumnRef)
HXDLIN(  23)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewColumn_obj,get_dataViewColumnRef,return )


::hx::ObjectPtr< DataViewColumn_obj > DataViewColumn_obj::__new(::String title, ::hx::widgets::DataViewRenderer renderer,::hx::Null< int >  __o_modelColumn) {
	::hx::ObjectPtr< DataViewColumn_obj > __this = new DataViewColumn_obj();
	__this->__construct(title,renderer,__o_modelColumn);
	return __this;
}

::hx::ObjectPtr< DataViewColumn_obj > DataViewColumn_obj::__alloc(::hx::Ctx *_hx_ctx,::String title, ::hx::widgets::DataViewRenderer renderer,::hx::Null< int >  __o_modelColumn) {
	DataViewColumn_obj *__this = (DataViewColumn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewColumn_obj), true, "hx.widgets.DataViewColumn"));
	*(void **)__this = DataViewColumn_obj::_hx_vtable;
	__this->__construct(title,renderer,__o_modelColumn);
	return __this;
}

DataViewColumn_obj::DataViewColumn_obj()
{
}

void DataViewColumn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewColumn);
	HX_MARK_MEMBER_NAME(dataViewColumnRef,"dataViewColumnRef");
	 ::hx::widgets::SettableHeaderColumn_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataViewColumn_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataViewColumnRef,"dataViewColumnRef");
	 ::hx::widgets::SettableHeaderColumn_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataViewColumn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"dataViewColumnRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataViewColumnRef() : dataViewColumnRef ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_dataViewColumnRef") ) { return ::hx::Val( get_dataViewColumnRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewColumn_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"dataViewColumnRef") ) { dataViewColumnRef=inValue.Cast< ::cpp::Pointer<  wxDataViewColumn > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewColumn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataViewColumnRef",6e,4c,39,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewColumn_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataViewColumn > */ ,(int)offsetof(DataViewColumn_obj,dataViewColumnRef),HX_("dataViewColumnRef",6e,4c,39,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewColumn_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewColumn_obj_sMemberFields[] = {
	HX_("dataViewColumnRef",6e,4c,39,e7),
	HX_("get_dataViewColumnRef",45,4f,e7,65),
	::String(null()) };

::hx::Class DataViewColumn_obj::__mClass;

void DataViewColumn_obj::__register()
{
	DataViewColumn_obj _hx_dummy;
	DataViewColumn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewColumn",02,15,27,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewColumn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewColumn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewColumn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewColumn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
