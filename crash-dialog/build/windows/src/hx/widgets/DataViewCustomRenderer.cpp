#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_DataViewCustomRenderer
#include <hx/widgets/DataViewCustomRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cfe23d3da1fe887d_3_new,"hx.widgets.DataViewCustomRenderer","new",0x7b633532,"hx.widgets.DataViewCustomRenderer.new","hx/widgets/DataViewCustomRenderer.hx",3,0x13c9393c)
namespace hx{
namespace widgets{

void DataViewCustomRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cfe23d3da1fe887d_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic DataViewCustomRenderer_obj::__CreateEmpty() { return new DataViewCustomRenderer_obj; }

void *DataViewCustomRenderer_obj::_hx_vtable = 0;

Dynamic DataViewCustomRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataViewCustomRenderer_obj > _hx_result = new DataViewCustomRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataViewCustomRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x56388651) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x56388651;
		}
	} else {
		return inClassId==(int)0x5a78a1a2;
	}
}


::hx::ObjectPtr< DataViewCustomRenderer_obj > DataViewCustomRenderer_obj::__new() {
	::hx::ObjectPtr< DataViewCustomRenderer_obj > __this = new DataViewCustomRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DataViewCustomRenderer_obj > DataViewCustomRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DataViewCustomRenderer_obj *__this = (DataViewCustomRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewCustomRenderer_obj), true, "hx.widgets.DataViewCustomRenderer"));
	*(void **)__this = DataViewCustomRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataViewCustomRenderer_obj::DataViewCustomRenderer_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DataViewCustomRenderer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DataViewCustomRenderer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DataViewCustomRenderer_obj::__mClass;

void DataViewCustomRenderer_obj::__register()
{
	DataViewCustomRenderer_obj _hx_dummy;
	DataViewCustomRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataViewCustomRenderer",40,74,b8,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DataViewCustomRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataViewCustomRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataViewCustomRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
