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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_IconMap
#include <haxe/ui/backend/hxwidgets/IconMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TreeViewIcons
#include <haxe/ui/backend/hxwidgets/TreeViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeView
#include <haxe/ui/containers/TreeView.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewCtrl
#include <hx/widgets/DataViewCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewTreeCtrl
#include <hx/widgets/DataViewTreeCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ImageList
#include <hx/widgets/ImageList.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3359bb21e6db827b_9_get,"haxe.ui.backend.hxwidgets.TreeViewIcons","get",0xf0a75d44,"haxe.ui.backend.hxwidgets.TreeViewIcons.get","haxe/ui/backend/hxwidgets/TreeViewIcons.hx",9,0x36db5c04)
HX_LOCAL_STACK_FRAME(_hx_pos_3359bb21e6db827b_6_boot,"haxe.ui.backend.hxwidgets.TreeViewIcons","boot",0x9e83bfc4,"haxe.ui.backend.hxwidgets.TreeViewIcons.boot","haxe/ui/backend/hxwidgets/TreeViewIcons.hx",6,0x36db5c04)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void TreeViewIcons_obj::__construct() { }

Dynamic TreeViewIcons_obj::__CreateEmpty() { return new TreeViewIcons_obj; }

void *TreeViewIcons_obj::_hx_vtable = 0;

Dynamic TreeViewIcons_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewIcons_obj > _hx_result = new TreeViewIcons_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TreeViewIcons_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3fa05c32;
}

 ::haxe::ui::backend::hxwidgets::IconMap TreeViewIcons_obj::_map;

int TreeViewIcons_obj::get( ::haxe::ui::containers::TreeView treeView,::String icon){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::TreeView,treeView) HXARGC(1)
            		void _hx_run( ::hx::widgets::ImageList imageList){
            			HX_STACKFRAME(&_hx_pos_3359bb21e6db827b_9_get)
HXLINE(  10)			 ::hx::widgets::DataViewTreeCtrl window = ( ( ::hx::widgets::DataViewTreeCtrl)(treeView->get_window()) );
HXLINE(  11)			window->set_imageList(imageList);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_3359bb21e6db827b_9_get)
HXDLIN(   9)		return ::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::_map->getImageIndex(treeView,icon, ::Dynamic(new _hx_Closure_0(treeView)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TreeViewIcons_obj,get,return )


TreeViewIcons_obj::TreeViewIcons_obj()
{
}

bool TreeViewIcons_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { outValue = ( _map ); return true; }
	}
	return false;
}

bool TreeViewIcons_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=ioValue.Cast<  ::haxe::ui::backend::hxwidgets::IconMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TreeViewIcons_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TreeViewIcons_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::backend::hxwidgets::IconMap */ ,(void *) &TreeViewIcons_obj::_map,HX_("_map",9d,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TreeViewIcons_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TreeViewIcons_obj::_map,"_map");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TreeViewIcons_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TreeViewIcons_obj::_map,"_map");
};

#endif

::hx::Class TreeViewIcons_obj::__mClass;

static ::String TreeViewIcons_obj_sStaticFields[] = {
	HX_("_map",9d,4f,1e,3f),
	HX_("get",96,80,4e,00),
	::String(null())
};

void TreeViewIcons_obj::__register()
{
	TreeViewIcons_obj _hx_dummy;
	TreeViewIcons_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.TreeViewIcons",1c,ce,b9,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TreeViewIcons_obj::__GetStatic;
	__mClass->mSetStaticField = &TreeViewIcons_obj::__SetStatic;
	__mClass->mMarkFunc = TreeViewIcons_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TreeViewIcons_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewIcons_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TreeViewIcons_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewIcons_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewIcons_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TreeViewIcons_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_3359bb21e6db827b_6_boot)
HXDLIN(   6)		_map =  ::haxe::ui::backend::hxwidgets::IconMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
