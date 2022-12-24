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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TreeViewSelectedNode
#include <haxe/ui/backend/hxwidgets/behaviours/TreeViewSelectedNode.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6d4fca1ad111ce78_11_new,"haxe.ui.backend.hxwidgets.behaviours.TreeViewSelectedNode","new",0x20621f6f,"haxe.ui.backend.hxwidgets.behaviours.TreeViewSelectedNode.new","haxe/ui/backend/hxwidgets/behaviours/TreeViewSelectedNode.hx",11,0xd3dc1162)
HX_LOCAL_STACK_FRAME(_hx_pos_6d4fca1ad111ce78_12_get,"haxe.ui.backend.hxwidgets.behaviours.TreeViewSelectedNode","get",0x205ccfa5,"haxe.ui.backend.hxwidgets.behaviours.TreeViewSelectedNode.get","haxe/ui/backend/hxwidgets/behaviours/TreeViewSelectedNode.hx",12,0xd3dc1162)
HX_LOCAL_STACK_FRAME(_hx_pos_6d4fca1ad111ce78_25_validateData,"haxe.ui.backend.hxwidgets.behaviours.TreeViewSelectedNode","validateData",0x43f02cf1,"haxe.ui.backend.hxwidgets.behaviours.TreeViewSelectedNode.validateData","haxe/ui/backend/hxwidgets/behaviours/TreeViewSelectedNode.hx",25,0xd3dc1162)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TreeViewSelectedNode_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6d4fca1ad111ce78_11_new)
HXDLIN(  11)		super::__construct(component);
            	}

Dynamic TreeViewSelectedNode_obj::__CreateEmpty() { return new TreeViewSelectedNode_obj; }

void *TreeViewSelectedNode_obj::_hx_vtable = 0;

Dynamic TreeViewSelectedNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewSelectedNode_obj > _hx_result = new TreeViewSelectedNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewSelectedNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x7d20fb73 || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType TreeViewSelectedNode_obj::get(){
            	HX_STACKFRAME(&_hx_pos_6d4fca1ad111ce78_12_get)
HXLINE(  13)		bool _hx_tmp;
HXDLIN(  13)		if ((this->_component->get_isReady() != false)) {
HXLINE(  13)			_hx_tmp = ::hx::IsNull( this->_component->get_window() );
            		}
            		else {
HXLINE(  13)			_hx_tmp = true;
            		}
HXDLIN(  13)		if (_hx_tmp) {
HXLINE(  14)			return this->_value;
            		}
HXLINE(  17)		 ::haxe::ui::containers::TreeView treeview = ::hx::TCast<  ::haxe::ui::containers::TreeView >::cast(this->_component);
HXLINE(  18)		 ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder builder = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder >::cast(treeview->_compositeBuilder);
HXLINE(  19)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(treeview->get_window());
HXLINE(  20)		 ::hx::widgets::DataViewItem selectedDataViewItem = treeCtrl->get_selection();
HXLINE(  21)		 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode selectedNode = builder->dataViewItemToNode(selectedDataViewItem);
HXLINE(  22)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(selectedNode);
            	}


void TreeViewSelectedNode_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_6d4fca1ad111ce78_25_validateData)
HXLINE(  26)		 ::haxe::ui::containers::TreeView treeview = ::hx::TCast<  ::haxe::ui::containers::TreeView >::cast(this->_component);
HXLINE(  27)		 ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder builder = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder >::cast(treeview->_compositeBuilder);
HXLINE(  28)		if (::hx::IsNotNull( treeview->get_window() )) {
HXLINE(  29)			 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(treeview->get_window());
HXLINE(  30)			bool _hx_tmp;
HXDLIN(  30)			if (::hx::IsNotNull( this->_value )) {
HXLINE(  30)				_hx_tmp = (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value) == false);
            			}
            			else {
HXLINE(  30)				_hx_tmp = false;
            			}
HXDLIN(  30)			if (_hx_tmp) {
HXLINE(  31)				 ::hx::widgets::DataViewItem dataViewItem = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value))->dataViewItem;
HXLINE(  32)				treeCtrl->set_selection(dataViewItem);
HXLINE(  33)				treeCtrl->ensureVisible(dataViewItem);
            			}
            			else {
HXLINE(  35)				if (::hx::IsNotNull( treeCtrl->get_selection() )) {
HXLINE(  36)					treeCtrl->unselect(treeCtrl->get_selection());
            				}
            			}
HXLINE(  39)			 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE(  40)			this->_component->dispatch(event);
            		}
            	}



::hx::ObjectPtr< TreeViewSelectedNode_obj > TreeViewSelectedNode_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TreeViewSelectedNode_obj > __this = new TreeViewSelectedNode_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TreeViewSelectedNode_obj > TreeViewSelectedNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TreeViewSelectedNode_obj *__this = (TreeViewSelectedNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewSelectedNode_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TreeViewSelectedNode"));
	*(void **)__this = TreeViewSelectedNode_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TreeViewSelectedNode_obj::TreeViewSelectedNode_obj()
{
}

::hx::Val TreeViewSelectedNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TreeViewSelectedNode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TreeViewSelectedNode_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewSelectedNode_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class TreeViewSelectedNode_obj::__mClass;

void TreeViewSelectedNode_obj::__register()
{
	TreeViewSelectedNode_obj _hx_dummy;
	TreeViewSelectedNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewSelectedNode",fd,3b,0c,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewSelectedNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewSelectedNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewSelectedNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewSelectedNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
