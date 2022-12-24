#include <hxcpp.h>

#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
#ifndef INCLUDED_b4548bb3748a21b1
#define INCLUDED_b4548bb3748a21b1
#include "wx/headercol.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewColumn
#include <hx/widgets/DataViewColumn.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewCtrl
#include <hx/widgets/DataViewCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewItem
#include <hx/widgets/DataViewItem.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5275e2cf9a684978_9_new,"hx.widgets.DataViewCtrl","new",0xf6a80449,"hx.widgets.DataViewCtrl.new","hx/widgets/DataViewCtrl.hx",9,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_10_getColumn,"hx.widgets.DataViewCtrl","getColumn",0x4fe760b5,"hx.widgets.DataViewCtrl.getColumn","hx/widgets/DataViewCtrl.hx",10,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_19_get_columnCount,"hx.widgets.DataViewCtrl","get_columnCount",0xa0128319,"hx.widgets.DataViewCtrl.get_columnCount","hx/widgets/DataViewCtrl.hx",19,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_23_collapse,"hx.widgets.DataViewCtrl","collapse",0xba4f50e4,"hx.widgets.DataViewCtrl.collapse","hx/widgets/DataViewCtrl.hx",23,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_27_expand,"hx.widgets.DataViewCtrl","expand",0xca835211,"hx.widgets.DataViewCtrl.expand","hx/widgets/DataViewCtrl.hx",27,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_31_get_selection,"hx.widgets.DataViewCtrl","get_selection",0x90a05d4c,"hx.widgets.DataViewCtrl.get_selection","hx/widgets/DataViewCtrl.hx",31,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_40_set_selection,"hx.widgets.DataViewCtrl","set_selection",0xd5a63f58,"hx.widgets.DataViewCtrl.set_selection","hx/widgets/DataViewCtrl.hx",40,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_46_isExpanded,"hx.widgets.DataViewCtrl","isExpanded",0xcc502e7a,"hx.widgets.DataViewCtrl.isExpanded","hx/widgets/DataViewCtrl.hx",46,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_50_isSelected,"hx.widgets.DataViewCtrl","isSelected",0x83ee479c,"hx.widgets.DataViewCtrl.isSelected","hx/widgets/DataViewCtrl.hx",50,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_54_ensureVisible,"hx.widgets.DataViewCtrl","ensureVisible",0xbd248f7d,"hx.widgets.DataViewCtrl.ensureVisible","hx/widgets/DataViewCtrl.hx",54,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_58_unselect,"hx.widgets.DataViewCtrl","unselect",0x6234498c,"hx.widgets.DataViewCtrl.unselect","hx/widgets/DataViewCtrl.hx",58,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_62_unselectAll,"hx.widgets.DataViewCtrl","unselectAll",0x939ae6f5,"hx.widgets.DataViewCtrl.unselectAll","hx/widgets/DataViewCtrl.hx",62,0xb285e085)
HX_LOCAL_STACK_FRAME(_hx_pos_5275e2cf9a684978_70_get_dataViewCtrlRef,"hx.widgets.DataViewCtrl","get_dataViewCtrlRef",0xce9fe479,"hx.widgets.DataViewCtrl.get_dataViewCtrlRef","hx/widgets/DataViewCtrl.hx",70,0xb285e085)
namespace hx{
namespace widgets{

void DataViewCtrl_obj::__construct( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_9_new)
HXDLIN(   9)		super::__construct(parent,style,id);
            	}

Dynamic DataViewCtrl_obj::__CreateEmpty() { return new DataViewCtrl_obj; }

void *DataViewCtrl_obj::_hx_vtable = 0;

Dynamic DataViewCtrl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewCtrl_obj > _hx_result = new DataViewCtrl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DataViewCtrl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2bc5f4d5) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x2bc5f4d5;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

 ::hx::widgets::DataViewColumn DataViewCtrl_obj::getColumn(int pos){
            	HX_GC_STACKFRAME(&_hx_pos_5275e2cf9a684978_10_getColumn)
HXLINE(  11)		 wxDataViewColumn* p = this->get_dataViewCtrlRef()->ptr->GetColumn(pos);
HXLINE(  12)		 ::hx::widgets::DataViewColumn col =  ::hx::widgets::DataViewColumn_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  13)		col->_ref = ::cpp::Pointer_obj::fromRaw(p)->reinterpret();
HXLINE(  14)		return col;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataViewCtrl_obj,getColumn,return )

int DataViewCtrl_obj::get_columnCount(){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_19_get_columnCount)
HXDLIN(  19)		return this->get_dataViewCtrlRef()->ptr->GetColumnCount();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewCtrl_obj,get_columnCount,return )

void DataViewCtrl_obj::collapse( ::hx::widgets::DataViewItem item){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_23_collapse)
HXDLIN(  23)		this->get_dataViewCtrlRef()->ptr->Collapse(item->_item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataViewCtrl_obj,collapse,(void))

void DataViewCtrl_obj::expand( ::hx::widgets::DataViewItem item){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_27_expand)
HXDLIN(  27)		this->get_dataViewCtrlRef()->ptr->Expand(item->_item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataViewCtrl_obj,expand,(void))

 ::hx::widgets::DataViewItem DataViewCtrl_obj::get_selection(){
            	HX_GC_STACKFRAME(&_hx_pos_5275e2cf9a684978_31_get_selection)
HXLINE(  32)		 wxDataViewItem itemId = this->get_dataViewCtrlRef()->ptr->GetSelection();
HXLINE(  33)		 ::hx::widgets::DataViewItem dataViewItem =  ::hx::widgets::DataViewItem_obj::__alloc( HX_CTX );
HXLINE(  34)		dataViewItem->_item = itemId;
HXLINE(  35)		if (!(dataViewItem->get_isOK())) {
HXLINE(  36)			return null();
            		}
HXLINE(  38)		return dataViewItem;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewCtrl_obj,get_selection,return )

 ::hx::widgets::DataViewItem DataViewCtrl_obj::set_selection( ::hx::widgets::DataViewItem value){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_40_set_selection)
HXLINE(  41)		this->get_dataViewCtrlRef()->ptr->Select(value->_item);
HXLINE(  42)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataViewCtrl_obj,set_selection,return )

bool DataViewCtrl_obj::isExpanded( ::hx::widgets::DataViewItem item){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_46_isExpanded)
HXDLIN(  46)		return this->get_dataViewCtrlRef()->ptr->IsExpanded(item->_item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataViewCtrl_obj,isExpanded,return )

bool DataViewCtrl_obj::isSelected( ::hx::widgets::DataViewItem item){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_50_isSelected)
HXDLIN(  50)		return this->get_dataViewCtrlRef()->ptr->IsSelected(item->_item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataViewCtrl_obj,isSelected,return )

void DataViewCtrl_obj::ensureVisible( ::hx::widgets::DataViewItem item){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_54_ensureVisible)
HXDLIN(  54)		this->get_dataViewCtrlRef()->ptr->EnsureVisible(item->_item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataViewCtrl_obj,ensureVisible,(void))

void DataViewCtrl_obj::unselect( ::hx::widgets::DataViewItem item){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_58_unselect)
HXDLIN(  58)		this->get_dataViewCtrlRef()->ptr->Unselect(item->_item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataViewCtrl_obj,unselect,(void))

void DataViewCtrl_obj::unselectAll(){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_62_unselectAll)
HXDLIN(  62)		this->get_dataViewCtrlRef()->ptr->UnselectAll();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewCtrl_obj,unselectAll,(void))

::cpp::Pointer<  wxDataViewCtrl > DataViewCtrl_obj::get_dataViewCtrlRef(){
            	HX_STACKFRAME(&_hx_pos_5275e2cf9a684978_70_get_dataViewCtrlRef)
HXDLIN(  70)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewCtrl_obj,get_dataViewCtrlRef,return )


::hx::ObjectPtr< DataViewCtrl_obj > DataViewCtrl_obj::__new( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id) {
	::hx::ObjectPtr< DataViewCtrl_obj > __this = new DataViewCtrl_obj();
	__this->__construct(parent,style,id);
	return __this;
}

::hx::ObjectPtr< DataViewCtrl_obj > DataViewCtrl_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id) {
	DataViewCtrl_obj *__this = (DataViewCtrl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewCtrl_obj), true, "hx.widgets.DataViewCtrl"));
	*(void **)__this = DataViewCtrl_obj::_hx_vtable;
	__this->__construct(parent,style,id);
	return __this;
}

DataViewCtrl_obj::DataViewCtrl_obj()
{
}

void DataViewCtrl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewCtrl);
	HX_MARK_MEMBER_NAME(columnCount,"columnCount");
	HX_MARK_MEMBER_NAME(dataViewCtrlRef,"dataViewCtrlRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataViewCtrl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(columnCount,"columnCount");
	HX_VISIT_MEMBER_NAME(dataViewCtrlRef,"dataViewCtrlRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataViewCtrl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"expand") ) { return ::hx::Val( expand_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collapse") ) { return ::hx::Val( collapse_dyn() ); }
		if (HX_FIELD_EQ(inName,"unselect") ) { return ::hx::Val( unselect_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getColumn") ) { return ::hx::Val( getColumn_dyn() ); }
		if (HX_FIELD_EQ(inName,"selection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selection() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isExpanded") ) { return ::hx::Val( isExpanded_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSelected") ) { return ::hx::Val( isSelected_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"columnCount") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_columnCount() : columnCount ); }
		if (HX_FIELD_EQ(inName,"unselectAll") ) { return ::hx::Val( unselectAll_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_selection") ) { return ::hx::Val( get_selection_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selection") ) { return ::hx::Val( set_selection_dyn() ); }
		if (HX_FIELD_EQ(inName,"ensureVisible") ) { return ::hx::Val( ensureVisible_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_columnCount") ) { return ::hx::Val( get_columnCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"dataViewCtrlRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataViewCtrlRef() : dataViewCtrlRef ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_dataViewCtrlRef") ) { return ::hx::Val( get_dataViewCtrlRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewCtrl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"selection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selection(inValue.Cast<  ::hx::widgets::DataViewItem >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"columnCount") ) { columnCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dataViewCtrlRef") ) { dataViewCtrlRef=inValue.Cast< ::cpp::Pointer<  wxDataViewCtrl > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewCtrl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("columnCount",19,de,a9,e5));
	outFields->push(HX_("selection",4c,f8,1a,8e));
	outFields->push(HX_("dataViewCtrlRef",79,bf,80,a2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewCtrl_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DataViewCtrl_obj,columnCount),HX_("columnCount",19,de,a9,e5)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataViewCtrl > */ ,(int)offsetof(DataViewCtrl_obj,dataViewCtrlRef),HX_("dataViewCtrlRef",79,bf,80,a2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewCtrl_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewCtrl_obj_sMemberFields[] = {
	HX_("getColumn",0c,d8,e1,42),
	HX_("columnCount",19,de,a9,e5),
	HX_("get_columnCount",b0,95,8b,a6),
	HX_("collapse",6d,51,95,c4),
	HX_("expand",5a,ee,72,c4),
	HX_("get_selection",23,cc,7e,4f),
	HX_("set_selection",2f,ae,84,94),
	HX_("isExpanded",43,23,7e,74),
	HX_("isSelected",65,3c,1c,2c),
	HX_("ensureVisible",54,fe,02,7c),
	HX_("unselect",15,4a,7a,6c),
	HX_("unselectAll",0c,22,a3,13),
	HX_("dataViewCtrlRef",79,bf,80,a2),
	HX_("get_dataViewCtrlRef",90,8e,8b,2d),
	::String(null()) };

::hx::Class DataViewCtrl_obj::__mClass;

void DataViewCtrl_obj::__register()
{
	DataViewCtrl_obj _hx_dummy;
	DataViewCtrl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewCtrl",d7,2b,d4,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewCtrl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewCtrl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewCtrl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewCtrl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
