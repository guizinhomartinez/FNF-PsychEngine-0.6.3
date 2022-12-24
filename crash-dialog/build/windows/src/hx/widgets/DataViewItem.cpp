#include <hxcpp.h>

#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
#ifndef INCLUDED_hx_widgets_DataViewItem
#include <hx/widgets/DataViewItem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a65af62c3dccdc9_8_new,"hx.widgets.DataViewItem","new",0xae9994b1,"hx.widgets.DataViewItem.new","hx/widgets/DataViewItem.hx",8,0x307a551d)
HX_LOCAL_STACK_FRAME(_hx_pos_0a65af62c3dccdc9_12_get_id,"hx.widgets.DataViewItem","get_id",0x3166f773,"hx.widgets.DataViewItem.get_id","hx/widgets/DataViewItem.hx",12,0x307a551d)
HX_LOCAL_STACK_FRAME(_hx_pos_0a65af62c3dccdc9_23_get_isOK,"hx.widgets.DataViewItem","get_isOK",0x92b5a11e,"hx.widgets.DataViewItem.get_isOK","hx/widgets/DataViewItem.hx",23,0x307a551d)
namespace hx{
namespace widgets{

void DataViewItem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0a65af62c3dccdc9_8_new)
            	}

Dynamic DataViewItem_obj::__CreateEmpty() { return new DataViewItem_obj; }

void *DataViewItem_obj::_hx_vtable = 0;

Dynamic DataViewItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewItem_obj > _hx_result = new DataViewItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataViewItem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2fbd313d;
}

int DataViewItem_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_0a65af62c3dccdc9_12_get_id)
HXLINE(  13)		if (!(this->get_isOK())) {
HXLINE(  14)			return -1;
            		}
HXLINE(  16)		void* id = this->_item.GetID();
HXLINE(  17)		int v = (int)(size_t)id;
HXLINE(  18)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewItem_obj,get_id,return )

bool DataViewItem_obj::get_isOK(){
            	HX_STACKFRAME(&_hx_pos_0a65af62c3dccdc9_23_get_isOK)
HXDLIN(  23)		return this->_item.IsOk();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataViewItem_obj,get_isOK,return )


::hx::ObjectPtr< DataViewItem_obj > DataViewItem_obj::__new() {
	::hx::ObjectPtr< DataViewItem_obj > __this = new DataViewItem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DataViewItem_obj > DataViewItem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DataViewItem_obj *__this = (DataViewItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewItem_obj), true, "hx.widgets.DataViewItem"));
	*(void **)__this = DataViewItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataViewItem_obj::DataViewItem_obj()
{
}

void DataViewItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataViewItem);
	HX_MARK_MEMBER_NAME(_item,"_item");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(isOK,"isOK");
	HX_MARK_END_CLASS();
}

void DataViewItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_item,"_item");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(isOK,"isOK");
}

::hx::Val DataViewItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_id() : id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isOK") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isOK() : isOK ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_isOK") ) { return ::hx::Val( get_isOK_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataViewItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isOK") ) { isOK=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataViewItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_item",f2,e0,d0,f8));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("isOK",86,ef,be,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataViewItem_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /*  wxDataViewItem */ ,(int)offsetof(DataViewItem_obj,_item),HX_("_item",f2,e0,d0,f8)},
	{::hx::fsInt,(int)offsetof(DataViewItem_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsBool,(int)offsetof(DataViewItem_obj,isOK),HX_("isOK",86,ef,be,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataViewItem_obj_sStaticStorageInfo = 0;
#endif

static ::String DataViewItem_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("get_id",24,f3,2f,a3),
	HX_("isOK",86,ef,be,45),
	HX_("get_isOK",0f,ab,79,c5),
	::String(null()) };

::hx::Class DataViewItem_obj::__mClass;

void DataViewItem_obj::__register()
{
	DataViewItem_obj _hx_dummy;
	DataViewItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewItem",3f,68,cb,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataViewItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataViewItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
