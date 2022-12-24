#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeView
#include <haxe/ui/containers/TreeView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_TreeViewEvents
#include <haxe/ui/containers/_TreeView/TreeViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7e5f812f87f4efe1_209_new,"haxe.ui.containers._TreeView.TreeViewEvents","new",0x9c91d104,"haxe.ui.containers._TreeView.TreeViewEvents.new","haxe/ui/containers/TreeView.hx",209,0xc7a0e210)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeView{

void TreeViewEvents_obj::__construct( ::haxe::ui::containers::TreeView treeview){
            	HX_STACKFRAME(&_hx_pos_7e5f812f87f4efe1_209_new)
HXLINE( 210)		super::__construct(treeview);
HXLINE( 211)		this->_treeview = treeview;
            	}

Dynamic TreeViewEvents_obj::__CreateEmpty() { return new TreeViewEvents_obj; }

void *TreeViewEvents_obj::_hx_vtable = 0;

Dynamic TreeViewEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewEvents_obj > _hx_result = new TreeViewEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1bae5da3) {
		if (inClassId<=(int)0x0548a7cc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
		} else {
			return inClassId==(int)0x1bae5da3;
		}
	} else {
		return inClassId==(int)0x3c4922ae;
	}
}


::hx::ObjectPtr< TreeViewEvents_obj > TreeViewEvents_obj::__new( ::haxe::ui::containers::TreeView treeview) {
	::hx::ObjectPtr< TreeViewEvents_obj > __this = new TreeViewEvents_obj();
	__this->__construct(treeview);
	return __this;
}

::hx::ObjectPtr< TreeViewEvents_obj > TreeViewEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeView treeview) {
	TreeViewEvents_obj *__this = (TreeViewEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewEvents_obj), true, "haxe.ui.containers._TreeView.TreeViewEvents"));
	*(void **)__this = TreeViewEvents_obj::_hx_vtable;
	__this->__construct(treeview);
	return __this;
}

TreeViewEvents_obj::TreeViewEvents_obj()
{
}

void TreeViewEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeViewEvents);
	HX_MARK_MEMBER_NAME(_treeview,"_treeview");
	 ::haxe::ui::containers::ScrollViewEvents_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_treeview,"_treeview");
	 ::haxe::ui::containers::ScrollViewEvents_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_treeview") ) { return ::hx::Val( _treeview ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_treeview") ) { _treeview=inValue.Cast<  ::haxe::ui::containers::TreeView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_treeview",22,ca,d3,8e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TreeView */ ,(int)offsetof(TreeViewEvents_obj,_treeview),HX_("_treeview",22,ca,d3,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewEvents_obj_sMemberFields[] = {
	HX_("_treeview",22,ca,d3,8e),
	::String(null()) };

::hx::Class TreeViewEvents_obj::__mClass;

void TreeViewEvents_obj::__register()
{
	TreeViewEvents_obj _hx_dummy;
	TreeViewEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeView.TreeViewEvents",12,3f,14,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeView
