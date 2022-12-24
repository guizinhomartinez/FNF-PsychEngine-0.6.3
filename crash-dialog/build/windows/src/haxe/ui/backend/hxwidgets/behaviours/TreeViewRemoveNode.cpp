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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TreeViewRemoveNode
#include <haxe/ui/backend/hxwidgets/behaviours/TreeViewRemoveNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_35584aab8ec85454_10_new,"haxe.ui.backend.hxwidgets.behaviours.TreeViewRemoveNode","new",0x40c6a258,"haxe.ui.backend.hxwidgets.behaviours.TreeViewRemoveNode.new","haxe/ui/backend/hxwidgets/behaviours/TreeViewRemoveNode.hx",10,0xc202cc59)
HX_LOCAL_STACK_FRAME(_hx_pos_35584aab8ec85454_11_call,"haxe.ui.backend.hxwidgets.behaviours.TreeViewRemoveNode","call",0x65beffa6,"haxe.ui.backend.hxwidgets.behaviours.TreeViewRemoveNode.call","haxe/ui/backend/hxwidgets/behaviours/TreeViewRemoveNode.hx",11,0xc202cc59)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TreeViewRemoveNode_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_35584aab8ec85454_10_new)
HXDLIN(  10)		super::__construct(component);
            	}

Dynamic TreeViewRemoveNode_obj::__CreateEmpty() { return new TreeViewRemoveNode_obj; }

void *TreeViewRemoveNode_obj::_hx_vtable = 0;

Dynamic TreeViewRemoveNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewRemoveNode_obj > _hx_result = new TreeViewRemoveNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewRemoveNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x05b8b4e4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x05b8b4e4;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType TreeViewRemoveNode_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_35584aab8ec85454_11_call)
HXLINE(  12)		 ::haxe::ui::containers::TreeView treeview = null();
HXLINE(  13)		if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::TreeView >())) {
HXLINE(  14)			treeview = ::hx::TCast<  ::haxe::ui::containers::TreeView >::cast(this->_component);
            		}
            		else {
HXLINE(  15)			if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >())) {
HXLINE(  16)				treeview = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(this->_component)->treeView;
            			}
            		}
HXLINE(  19)		if (::hx::IsNull( treeview )) {
HXLINE(  20)			return null();
            		}
HXLINE(  23)		 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(param);
HXLINE(  24)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(treeview->get_window());
HXLINE(  25)		 ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder builder = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder >::cast(treeview->_compositeBuilder);
HXLINE(  26)		if (::hx::IsNotNull( treeCtrl )) {
HXLINE(  27)			builder->removeNode(node);
            		}
            		else {
HXLINE(  29)			builder->nodesToCreate->remove(node);
            		}
HXLINE(  32)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(node);
            	}



::hx::ObjectPtr< TreeViewRemoveNode_obj > TreeViewRemoveNode_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TreeViewRemoveNode_obj > __this = new TreeViewRemoveNode_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TreeViewRemoveNode_obj > TreeViewRemoveNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TreeViewRemoveNode_obj *__this = (TreeViewRemoveNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewRemoveNode_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TreeViewRemoveNode"));
	*(void **)__this = TreeViewRemoveNode_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TreeViewRemoveNode_obj::TreeViewRemoveNode_obj()
{
}

::hx::Val TreeViewRemoveNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TreeViewRemoveNode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TreeViewRemoveNode_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewRemoveNode_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class TreeViewRemoveNode_obj::__mClass;

void TreeViewRemoveNode_obj::__register()
{
	TreeViewRemoveNode_obj _hx_dummy;
	TreeViewRemoveNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewRemoveNode",66,d6,08,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewRemoveNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewRemoveNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewRemoveNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewRemoveNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
