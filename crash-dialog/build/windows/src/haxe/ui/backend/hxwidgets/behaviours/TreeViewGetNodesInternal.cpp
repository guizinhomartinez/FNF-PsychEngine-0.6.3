#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TreeViewGetNodesInternal
#include <haxe/ui/backend/hxwidgets/behaviours/TreeViewGetNodesInternal.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewBuilder
#include <haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TreeViewNode
#include <haxe/ui/backend/hxwidgets/custom/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeView
#include <haxe/ui/containers/TreeView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#include <haxe/ui/containers/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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
#ifndef INCLUDED_hx_widgets_DataViewItem
#include <hx/widgets/DataViewItem.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewTreeCtrl
#include <hx/widgets/DataViewTreeCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cd4075ee43ed9e91_10_new,"haxe.ui.backend.hxwidgets.behaviours.TreeViewGetNodesInternal","new",0x0a7f3d0a,"haxe.ui.backend.hxwidgets.behaviours.TreeViewGetNodesInternal.new","haxe/ui/backend/hxwidgets/behaviours/TreeViewGetNodesInternal.hx",10,0x3573b4a7)
HX_LOCAL_STACK_FRAME(_hx_pos_cd4075ee43ed9e91_11_call,"haxe.ui.backend.hxwidgets.behaviours.TreeViewGetNodesInternal","call",0x1d8dc0b4,"haxe.ui.backend.hxwidgets.behaviours.TreeViewGetNodesInternal.call","haxe/ui/backend/hxwidgets/behaviours/TreeViewGetNodesInternal.hx",11,0x3573b4a7)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TreeViewGetNodesInternal_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_cd4075ee43ed9e91_10_new)
HXDLIN(  10)		super::__construct(component);
            	}

Dynamic TreeViewGetNodesInternal_obj::__CreateEmpty() { return new TreeViewGetNodesInternal_obj; }

void *TreeViewGetNodesInternal_obj::_hx_vtable = 0;

Dynamic TreeViewGetNodesInternal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewGetNodesInternal_obj > _hx_result = new TreeViewGetNodesInternal_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewGetNodesInternal_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x6bfcc5de;
	}
}

 ::haxe::ui::util::VariantType TreeViewGetNodesInternal_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_cd4075ee43ed9e91_11_call)
HXLINE(  12)		 ::haxe::ui::containers::TreeView treeview = null();
HXLINE(  13)		 ::hx::widgets::DataViewItem dataViewItem = null();
HXLINE(  14)		if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::TreeView >())) {
HXLINE(  15)			treeview = ::hx::TCast<  ::haxe::ui::containers::TreeView >::cast(this->_component);
            		}
            		else {
HXLINE(  16)			if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >())) {
HXLINE(  17)				treeview = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(this->_component)->treeView;
HXLINE(  18)				dataViewItem = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(this->_component)->dataViewItem;
            			}
            		}
HXLINE(  21)		if (::hx::IsNull( treeview )) {
HXLINE(  22)			return null();
            		}
HXLINE(  25)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(treeview->get_window());
HXLINE(  26)		 ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder builder = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder >::cast(treeview->_compositeBuilder);
HXLINE(  28)		::Array< ::Dynamic> nodes = builder->dataViewItemChildren(dataViewItem);
HXLINE(  29)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(nodes);
            	}



::hx::ObjectPtr< TreeViewGetNodesInternal_obj > TreeViewGetNodesInternal_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TreeViewGetNodesInternal_obj > __this = new TreeViewGetNodesInternal_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TreeViewGetNodesInternal_obj > TreeViewGetNodesInternal_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TreeViewGetNodesInternal_obj *__this = (TreeViewGetNodesInternal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewGetNodesInternal_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TreeViewGetNodesInternal"));
	*(void **)__this = TreeViewGetNodesInternal_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TreeViewGetNodesInternal_obj::TreeViewGetNodesInternal_obj()
{
}

::hx::Val TreeViewGetNodesInternal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TreeViewGetNodesInternal_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TreeViewGetNodesInternal_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewGetNodesInternal_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class TreeViewGetNodesInternal_obj::__mClass;

void TreeViewGetNodesInternal_obj::__register()
{
	TreeViewGetNodesInternal_obj _hx_dummy;
	TreeViewGetNodesInternal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewGetNodesInternal",18,b0,8d,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewGetNodesInternal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewGetNodesInternal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewGetNodesInternal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewGetNodesInternal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
