#include <hxcpp.h>

#ifndef INCLUDED_5e796aaa4b4aa75c
#define INCLUDED_5e796aaa4b4aa75c
#include "wx/treebase.h"
#endif
#ifndef INCLUDED_hx_widgets_TreeItemId
#include <hx/widgets/TreeItemId.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f785edb72698e71e_8_new,"hx.widgets.TreeItemId","new",0xbb82e1db,"hx.widgets.TreeItemId.new","hx/widgets/TreeItemId.hx",8,0xdfa4efb3)
namespace hx{
namespace widgets{

void TreeItemId_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f785edb72698e71e_8_new)
            	}

Dynamic TreeItemId_obj::__CreateEmpty() { return new TreeItemId_obj; }

void *TreeItemId_obj::_hx_vtable = 0;

Dynamic TreeItemId_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeItemId_obj > _hx_result = new TreeItemId_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TreeItemId_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x778d7acb;
}


TreeItemId_obj::TreeItemId_obj()
{
}

void TreeItemId_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeItemId);
	HX_MARK_MEMBER_NAME(itemId,"itemId");
	HX_MARK_END_CLASS();
}

void TreeItemId_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(itemId,"itemId");
}

void TreeItemId_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("itemId",ce,af,09,09));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeItemId_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /*  wxTreeItemId */ ,(int)offsetof(TreeItemId_obj,itemId),HX_("itemId",ce,af,09,09)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeItemId_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TreeItemId_obj::__mClass;

void TreeItemId_obj::__register()
{
	TreeItemId_obj _hx_dummy;
	TreeItemId_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.TreeItemId",69,58,a8,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TreeItemId_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeItemId_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeItemId_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
