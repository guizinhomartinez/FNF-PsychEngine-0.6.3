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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TreeViewClearNodes
#include <haxe/ui/backend/hxwidgets/behaviours/TreeViewClearNodes.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c17c6f199dae648a_9_new,"haxe.ui.backend.hxwidgets.behaviours.TreeViewClearNodes","new",0xbdeeac56,"haxe.ui.backend.hxwidgets.behaviours.TreeViewClearNodes.new","haxe/ui/backend/hxwidgets/behaviours/TreeViewClearNodes.hx",9,0x10a28c1b)
HX_LOCAL_STACK_FRAME(_hx_pos_c17c6f199dae648a_10_call,"haxe.ui.backend.hxwidgets.behaviours.TreeViewClearNodes","call",0x6b9fb3e8,"haxe.ui.backend.hxwidgets.behaviours.TreeViewClearNodes.call","haxe/ui/backend/hxwidgets/behaviours/TreeViewClearNodes.hx",10,0x10a28c1b)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TreeViewClearNodes_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c17c6f199dae648a_9_new)
HXDLIN(   9)		super::__construct(component);
            	}

Dynamic TreeViewClearNodes_obj::__CreateEmpty() { return new TreeViewClearNodes_obj; }

void *TreeViewClearNodes_obj::_hx_vtable = 0;

Dynamic TreeViewClearNodes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewClearNodes_obj > _hx_result = new TreeViewClearNodes_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewClearNodes_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x6886e746;
	}
}

 ::haxe::ui::util::VariantType TreeViewClearNodes_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_c17c6f199dae648a_10_call)
HXLINE(  11)		 ::haxe::ui::containers::TreeView treeview = null();
HXLINE(  12)		if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::TreeView >())) {
HXLINE(  13)			treeview = ::hx::TCast<  ::haxe::ui::containers::TreeView >::cast(this->_component);
            		}
            		else {
HXLINE(  14)			if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >())) {
HXLINE(  15)				treeview = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(this->_component)->treeView;
            			}
            		}
HXLINE(  18)		if (::hx::IsNull( treeview )) {
HXLINE(  19)			return null();
            		}
HXLINE(  22)		 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(this->_component);
HXLINE(  23)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(treeview->get_window());
HXLINE(  24)		 ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder builder = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder >::cast(treeview->_compositeBuilder);
HXLINE(  25)		if (::hx::IsNotNull( treeCtrl )) {
HXLINE(  26)			builder->clearNodes(node);
            		}
            		else {
HXLINE(  28)			builder->nodesToCreate->remove(node);
            		}
HXLINE(  30)		return null();
            	}



::hx::ObjectPtr< TreeViewClearNodes_obj > TreeViewClearNodes_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TreeViewClearNodes_obj > __this = new TreeViewClearNodes_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TreeViewClearNodes_obj > TreeViewClearNodes_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TreeViewClearNodes_obj *__this = (TreeViewClearNodes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewClearNodes_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TreeViewClearNodes"));
	*(void **)__this = TreeViewClearNodes_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TreeViewClearNodes_obj::TreeViewClearNodes_obj()
{
}

::hx::Val TreeViewClearNodes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TreeViewClearNodes_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TreeViewClearNodes_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewClearNodes_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class TreeViewClearNodes_obj::__mClass;

void TreeViewClearNodes_obj::__register()
{
	TreeViewClearNodes_obj _hx_dummy;
	TreeViewClearNodes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewClearNodes",64,89,a8,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewClearNodes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewClearNodes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewClearNodes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewClearNodes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
