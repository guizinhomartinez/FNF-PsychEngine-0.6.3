#include <hxcpp.h>

#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_hx_widgets_DataViewEvent
#include <hx/widgets/DataViewEvent.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewItem
#include <hx/widgets/DataViewItem.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a046b2dbe372362b_7_new,"hx.widgets.DataViewEvent","new",0xc888db60,"hx.widgets.DataViewEvent.new","hx/widgets/DataViewEvent.hx",7,0x6a70bd12)
HX_LOCAL_STACK_FRAME(_hx_pos_a046b2dbe372362b_10_get_column,"hx.widgets.DataViewEvent","get_column",0xba65139f,"hx.widgets.DataViewEvent.get_column","hx/widgets/DataViewEvent.hx",10,0x6a70bd12)
HX_LOCAL_STACK_FRAME(_hx_pos_a046b2dbe372362b_15_get_selection,"hx.widgets.DataViewEvent","get_selection",0xda8f9723,"hx.widgets.DataViewEvent.get_selection","hx/widgets/DataViewEvent.hx",15,0x6a70bd12)
HX_LOCAL_STACK_FRAME(_hx_pos_a046b2dbe372362b_19_get_item,"hx.widgets.DataViewEvent","get_item",0x0a1d959c,"hx.widgets.DataViewEvent.get_item","hx/widgets/DataViewEvent.hx",19,0x6a70bd12)
HX_LOCAL_STACK_FRAME(_hx_pos_a046b2dbe372362b_31_get_dataViewEventRef,"hx.widgets.DataViewEvent","get_dataViewEventRef",0x7423e431,"hx.widgets.DataViewEvent.get_dataViewEventRef","hx/widgets/DataViewEvent.hx",31,0x6a70bd12)
namespace hx{
namespace widgets{

void DataViewEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a046b2dbe372362b_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic DataViewEvent_obj::__CreateEmpty() { return new DataViewEvent_obj; }

void *DataViewEvent_obj::_hx_vtable = 0;

Dynamic DataViewEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewEvent_obj > _hx_result = new DataViewEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataViewEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x498600b0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x498600b0;
	} else {
		return inClassId==(int)0x4f345a43;
	}
}

int DataViewEvent_obj::get_column(){
            	HX_STACKFRAME(&_hx_pos_a046b2dbe372362b_10_get_column)
HXDLIN(  10)		return this->get_dataViewEventRef()->ptr->GetColumn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewEvent_obj,get_column,return )

int DataViewEvent_obj::get_selection(){
            	HX_STACKFRAME(&_hx_pos_a046b2dbe372362b_15_get_selection)
HXDLIN(  15)		return this->get_dataViewEventRef()->ptr->GetSelection();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewEvent_obj,get_selection,return )

 ::hx::widgets::DataViewItem DataViewEvent_obj::get_item(){
            	HX_GC_STACKFRAME(&_hx_pos_a046b2dbe372362b_19_get_item)
HXLINE(  20)		 ::hx::widgets::DataViewItem i =  ::hx::widgets::DataViewItem_obj::__alloc( HX_CTX );
HXLINE(  21)		 wxDataViewItem itemRef = this->get_dataViewEventRef()->ptr->GetItem();
HXLINE(  22)		i->_item = itemRef;
HXLINE(  23)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewEvent_obj,get_item,return )

::cpp::Pointer<  wxDataViewEvent > DataViewEvent_obj::get_dataViewEventRef(){
            	HX_STACKFRAME(&_hx_pos_a046b2dbe372362b_31_get_dataViewEventRef)
HXDLIN(  31)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewEvent_obj,get_dataViewEventRef,return )


::hx::ObjectPtr< DataViewEvent_obj > DataViewEvent_obj::__new() {
	::hx::ObjectPtr< DataViewEvent_obj > __this = new DataViewEvent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DataViewEvent_obj > DataViewEvent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DataViewEvent_obj *__this = (DataViewEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewEvent_obj), true, "hx.widgets.DataViewEvent"));
	*(void **)__this = DataViewEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataViewEvent_obj::DataViewEvent_obj()
{
}

void DataViewEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewEvent);
	HX_MARK_MEMBER_NAME(column,"column");
	HX_MARK_MEMBER_NAME(selection,"selection");
	HX_MARK_MEMBER_NAME(item,"item");
	HX_MARK_MEMBER_NAME(dataViewEventRef,"dataViewEventRef");
	 ::hx::widgets::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataViewEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(column,"column");
	HX_VISIT_MEMBER_NAME(selection,"selection");
	HX_VISIT_MEMBER_NAME(item,"item");
	HX_VISIT_MEMBER_NAME(dataViewEventRef,"dataViewEventRef");
	 ::hx::widgets::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataViewEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"item") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_item() : item ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"column") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_column() : column ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_item") ) { return ::hx::Val( get_item_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"selection") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_selection() : selection ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_column") ) { return ::hx::Val( get_column_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_selection") ) { return ::hx::Val( get_selection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dataViewEventRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataViewEventRef() : dataViewEventRef ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_dataViewEventRef") ) { return ::hx::Val( get_dataViewEventRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"item") ) { item=inValue.Cast<  ::hx::widgets::DataViewItem >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"column") ) { column=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"selection") ) { selection=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dataViewEventRef") ) { dataViewEventRef=inValue.Cast< ::cpp::Pointer<  wxDataViewEvent > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("column",d6,4e,8b,c6));
	outFields->push(HX_("selection",4c,f8,1a,8e));
	outFields->push(HX_("item",13,c5,bf,45));
	outFields->push(HX_("dataViewEventRef",28,ea,4a,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DataViewEvent_obj,column),HX_("column",d6,4e,8b,c6)},
	{::hx::fsInt,(int)offsetof(DataViewEvent_obj,selection),HX_("selection",4c,f8,1a,8e)},
	{::hx::fsObject /*  ::hx::widgets::DataViewItem */ ,(int)offsetof(DataViewEvent_obj,item),HX_("item",13,c5,bf,45)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataViewEvent > */ ,(int)offsetof(DataViewEvent_obj,dataViewEventRef),HX_("dataViewEventRef",28,ea,4a,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewEvent_obj_sMemberFields[] = {
	HX_("column",d6,4e,8b,c6),
	HX_("get_column",9f,be,12,b7),
	HX_("selection",4c,f8,1a,8e),
	HX_("get_selection",23,cc,7e,4f),
	HX_("item",13,c5,bf,45),
	HX_("get_item",9c,80,7a,c5),
	HX_("dataViewEventRef",28,ea,4a,5e),
	HX_("get_dataViewEventRef",31,4f,b5,7c),
	::String(null()) };

::hx::Class DataViewEvent_obj::__mClass;

void DataViewEvent_obj::__register()
{
	DataViewEvent_obj _hx_dummy;
	DataViewEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewEvent",6e,eb,e7,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
