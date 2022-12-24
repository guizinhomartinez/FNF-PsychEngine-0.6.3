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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_LayoutBehaviour
#include <haxe/ui/behaviours/LayoutBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListViewEvents
#include <haxe/ui/containers/ListViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_DataSourceBehaviour
#include <haxe/ui/containers/_ListView/DataSourceBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_ListViewBuilder
#include <haxe/ui/containers/_ListView/ListViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_SelectedIndexBehaviour
#include <haxe/ui/containers/_ListView/SelectedIndexBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_SelectedIndicesBehaviour
#include <haxe/ui/containers/_ListView/SelectedIndicesBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_SelectedItemBehaviour
#include <haxe/ui/containers/_ListView/SelectedItemBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_SelectedItemsBehaviour
#include <haxe/ui/containers/_ListView/SelectedItemsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_SelectionModeBehaviour
#include <haxe/ui/containers/_ListView/SelectionModeBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ItemEvent
#include <haxe/ui/events/ItemEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <haxe/ui/layouts/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalVirtualLayout
#include <haxe/ui/layouts/VerticalVirtualLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VirtualLayout
#include <haxe/ui/layouts/VirtualLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a8cd988d67443219_31_new,"haxe.ui.containers.ListView","new",0x7809d17f,"haxe.ui.containers.ListView.new","haxe/ui/containers/ListView.hx",31,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_53_get_itemRendererClass,"haxe.ui.containers.ListView","get_itemRendererClass",0xb72d8298,"haxe.ui.containers.ListView.get_itemRendererClass","haxe/ui/containers/ListView.hx",53,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_55_set_itemRendererClass,"haxe.ui.containers.ListView","set_itemRendererClass",0x0b3650a4,"haxe.ui.containers.ListView.set_itemRendererClass","haxe/ui/containers/ListView.hx",55,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_67_get_itemRenderer,"haxe.ui.containers.ListView","get_itemRenderer",0x4a7e7580,"haxe.ui.containers.ListView.get_itemRenderer","haxe/ui/containers/ListView.hx",67,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_69_set_itemRenderer,"haxe.ui.containers.ListView","set_itemRenderer",0xa0c062f4,"haxe.ui.containers.ListView.set_itemRenderer","haxe/ui/containers/ListView.hx",69,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_138_registerComposite,"haxe.ui.containers.ListView","registerComposite",0x4ecdfe83,"haxe.ui.containers.ListView.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_167_set_onComponentEvent,"haxe.ui.containers.ListView","set_onComponentEvent",0xd5d6701a,"haxe.ui.containers.ListView.set_onComponentEvent","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_441_registerBehaviours,"haxe.ui.containers.ListView","registerBehaviours",0x286fc19a,"haxe.ui.containers.ListView.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_dataSource,"haxe.ui.containers.ListView","get_dataSource",0x216ee42f,"haxe.ui.containers.ListView.get_dataSource","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_520_set_dataSource,"haxe.ui.containers.ListView","set_dataSource",0x418ecca3,"haxe.ui.containers.ListView.set_dataSource","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_itemWidth,"haxe.ui.containers.ListView","get_itemWidth",0x7c422da9,"haxe.ui.containers.ListView.get_itemWidth","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_520_set_itemWidth,"haxe.ui.containers.ListView","set_itemWidth",0xc1480fb5,"haxe.ui.containers.ListView.set_itemWidth","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_itemHeight,"haxe.ui.containers.ListView","get_itemHeight",0xf3f53ee4,"haxe.ui.containers.ListView.get_itemHeight","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_520_set_itemHeight,"haxe.ui.containers.ListView","set_itemHeight",0x14152758,"haxe.ui.containers.ListView.set_itemHeight","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_itemCount,"haxe.ui.containers.ListView","get_itemCount",0xfc42bc72,"haxe.ui.containers.ListView.get_itemCount","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_520_set_itemCount,"haxe.ui.containers.ListView","set_itemCount",0x41489e7e,"haxe.ui.containers.ListView.set_itemCount","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_variableItemSize,"haxe.ui.containers.ListView","get_variableItemSize",0xe302b2da,"haxe.ui.containers.ListView.get_variableItemSize","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_520_set_variableItemSize,"haxe.ui.containers.ListView","set_variableItemSize",0xafba6a4e,"haxe.ui.containers.ListView.set_variableItemSize","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_selectedIndex,"haxe.ui.containers.ListView","get_selectedIndex",0x0b149b6d,"haxe.ui.containers.ListView.get_selectedIndex","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_491_set_selectedIndex,"haxe.ui.containers.ListView","set_selectedIndex",0x2e827379,"haxe.ui.containers.ListView.set_selectedIndex","haxe/ui/macros/Macros.hx",491,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_465_get_selectedItem,"haxe.ui.containers.ListView","get_selectedItem",0x89d34918,"haxe.ui.containers.ListView.get_selectedItem","haxe/ui/macros/Macros.hx",465,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_500_set_selectedItem,"haxe.ui.containers.ListView","set_selectedItem",0xe015368c,"haxe.ui.containers.ListView.set_selectedItem","haxe/ui/macros/Macros.hx",500,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_selectedIndices,"haxe.ui.containers.ListView","get_selectedIndices",0x70995442,"haxe.ui.containers.ListView.get_selectedIndices","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_520_set_selectedIndices,"haxe.ui.containers.ListView","set_selectedIndices",0xad36474e,"haxe.ui.containers.ListView.set_selectedIndices","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_selectedItems,"haxe.ui.containers.ListView","get_selectedItems",0x0f0cac5b,"haxe.ui.containers.ListView.get_selectedItems","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_520_set_selectedItems,"haxe.ui.containers.ListView","set_selectedItems",0x327a8467,"haxe.ui.containers.ListView.set_selectedItems","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_selectionMode,"haxe.ui.containers.ListView","get_selectionMode",0x4f633285,"haxe.ui.containers.ListView.get_selectionMode","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_520_set_selectionMode,"haxe.ui.containers.ListView","set_selectionMode",0x72d10a91,"haxe.ui.containers.ListView.set_selectionMode","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_475_get_longPressSelectionTime,"haxe.ui.containers.ListView","get_longPressSelectionTime",0xbd0e3a1c,"haxe.ui.containers.ListView.get_longPressSelectionTime","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_520_set_longPressSelectionTime,"haxe.ui.containers.ListView","set_longPressSelectionTime",0x1ca30090,"haxe.ui.containers.ListView.set_longPressSelectionTime","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_602_get_value,"haxe.ui.containers.ListView","get_value",0x3827fe27,"haxe.ui.containers.ListView.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_605_set_value,"haxe.ui.containers.ListView","set_value",0x1b78ea33,"haxe.ui.containers.ListView.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_73961147c20b323a_565_cloneComponent,"haxe.ui.containers.ListView","cloneComponent",0xb3fccee1,"haxe.ui.containers.ListView.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_423_self,"haxe.ui.containers.ListView","self",0x93db858d,"haxe.ui.containers.ListView.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void ListView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_31_new)
HXDLIN(  31)		super::__construct();
            	}

Dynamic ListView_obj::__CreateEmpty() { return new ListView_obj; }

void *ListView_obj::_hx_vtable = 0;

Dynamic ListView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListView_obj > _hx_result = new ListView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ListView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x395782b4) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x2ccba775) {
				return inClassId==(int)0x241b0321 || inClassId==(int)0x2ccba775;
			} else {
				return inClassId==(int)0x395782b4;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x5c9408f3) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x433ebabe || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x5c9408f3;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

static ::haxe::ui::containers::IVirtualContainer_obj _hx_haxe_ui_containers_ListView__hx_haxe_ui_containers_IVirtualContainer= {
	( Float (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_itemWidth,
	( Float (::hx::Object::*)(Float))&::haxe::ui::containers::ListView_obj::set_itemWidth,
	( Float (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_itemHeight,
	( Float (::hx::Object::*)(Float))&::haxe::ui::containers::ListView_obj::set_itemHeight,
	( int (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_itemCount,
	( int (::hx::Object::*)(int))&::haxe::ui::containers::ListView_obj::set_itemCount,
	( bool (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_variableItemSize,
	( bool (::hx::Object::*)(bool))&::haxe::ui::containers::ListView_obj::set_variableItemSize,
	( bool (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_virtual,
	( bool (::hx::Object::*)(bool))&::haxe::ui::containers::ListView_obj::set_virtual,
	( Float (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_hscrollPos,
	( Float (::hx::Object::*)(Float))&::haxe::ui::containers::ListView_obj::set_hscrollPos,
	( Float (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_hscrollMax,
	( Float (::hx::Object::*)(Float))&::haxe::ui::containers::ListView_obj::set_hscrollMax,
	( Float (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_hscrollPageSize,
	( Float (::hx::Object::*)(Float))&::haxe::ui::containers::ListView_obj::set_hscrollPageSize,
	( Float (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_vscrollPos,
	( Float (::hx::Object::*)(Float))&::haxe::ui::containers::ListView_obj::set_vscrollPos,
	( Float (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_vscrollMax,
	( Float (::hx::Object::*)(Float))&::haxe::ui::containers::ListView_obj::set_vscrollMax,
	( Float (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_vscrollPageSize,
	( Float (::hx::Object::*)(Float))&::haxe::ui::containers::ListView_obj::set_vscrollPageSize,
	(  ::haxe::ui::core::ItemRenderer (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_itemRenderer,
	(  ::haxe::ui::core::ItemRenderer (::hx::Object::*)( ::haxe::ui::core::ItemRenderer))&::haxe::ui::containers::ListView_obj::set_itemRenderer,
	( ::hx::Class (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_itemRendererClass,
	( ::hx::Class (::hx::Object::*)(::hx::Class))&::haxe::ui::containers::ListView_obj::set_itemRendererClass,
};

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_containers_ListView__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (::hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (::hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::containers::ListView_obj::set_dataSource,
};

void *ListView_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x3d194ad3: return &_hx_haxe_ui_containers_ListView__hx_haxe_ui_containers_IVirtualContainer;
		case (int)0xfafb3fc3: return &_hx_haxe_ui_containers_ListView__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

::hx::Class ListView_obj::get_itemRendererClass(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_53_get_itemRendererClass)
HXDLIN(  53)		return this->_itemRendererClass;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemRendererClass,return )

::hx::Class ListView_obj::set_itemRendererClass(::hx::Class value){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_55_set_itemRendererClass)
HXLINE(  56)		if (::hx::IsPointerNotEq( this->_itemRendererClass,value )) {
HXLINE(  57)			this->_itemRendererClass = value;
HXLINE(  58)			{
HXLINE(  58)				bool _hx_tmp;
HXDLIN(  58)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(  58)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(  58)					_hx_tmp = true;
            				}
HXDLIN(  58)				if (!(_hx_tmp)) {
HXLINE(  58)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
HXLINE(  61)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemRendererClass,return )

 ::haxe::ui::core::ItemRenderer ListView_obj::get_itemRenderer(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_67_get_itemRenderer)
HXDLIN(  67)		return this->_itemRenderer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemRenderer,return )

 ::haxe::ui::core::ItemRenderer ListView_obj::set_itemRenderer( ::haxe::ui::core::ItemRenderer value){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_69_set_itemRenderer)
HXLINE(  70)		if (::hx::IsInstanceNotEq( this->_itemRenderer,value )) {
HXLINE(  71)			this->_itemRenderer = value;
HXLINE(  72)			{
HXLINE(  72)				bool _hx_tmp;
HXDLIN(  72)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(  72)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(  72)					_hx_tmp = true;
            				}
HXDLIN(  72)				if (!(_hx_tmp)) {
HXLINE(  72)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
HXLINE(  75)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemRenderer,return )

void ListView_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::ListViewEvents >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::_ListView::ListViewBuilder >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::VerticalVirtualLayout >();
            	}


 ::Dynamic ListView_obj::set_onComponentEvent( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_167_set_onComponentEvent)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onComponentEvent )) {
HXLINE( 169)			this->unregisterEvent(HX_("itemcomponentevent",90,6a,39,18),this->_internal__onComponentEvent);
HXLINE( 170)			this->_internal__onComponentEvent = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onComponentEvent = value;
HXLINE( 174)			this->registerEvent(HX_("itemcomponentevent",90,6a,39,18),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_onComponentEvent,return )

void ListView_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("dataSource",a5,76,d3,1d),::hx::ClassOf< ::haxe::ui::containers::_ListView::DataSourceBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("itemWidth",f3,1b,4e,ca),::hx::ClassOf< ::haxe::ui::behaviours::LayoutBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("itemHeight",5a,d1,59,f0),::hx::ClassOf< ::haxe::ui::behaviours::LayoutBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 543)		_hx_tmp2->_hx_register(HX_("itemCount",bc,aa,4e,4a),::hx::ClassOf< ::haxe::ui::behaviours::LayoutBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp3 = this->behaviours;
HXDLIN( 543)		_hx_tmp3->_hx_register(HX_("variableItemSize",d0,81,05,ab),::hx::ClassOf< ::haxe::ui::behaviours::LayoutBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp4 = this->behaviours;
HXDLIN( 543)		_hx_tmp4->_hx_register(HX_("selectedIndex",b7,76,56,b4),::hx::ClassOf< ::haxe::ui::containers::_ListView::SelectedIndexBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXLINE( 539)		this->behaviours->_hx_register(HX_("selectedItem",0e,e5,59,d6),::hx::ClassOf< ::haxe::ui::containers::_ListView::SelectedItemBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selectedIndices",0c,16,80,52),::hx::ClassOf< ::haxe::ui::containers::_ListView::SelectedIndicesBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selectedItems",a5,87,4e,b8),::hx::ClassOf< ::haxe::ui::containers::_ListView::SelectedItemsBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp5 = this->behaviours;
HXDLIN( 543)		_hx_tmp5->_hx_register(HX_("selectionMode",cf,0d,a5,f8),::hx::ClassOf< ::haxe::ui::containers::_ListView::SelectionModeBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("one-item",9a,d3,eb,3b)));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp6 = this->behaviours;
HXDLIN( 543)		_hx_tmp6->_hx_register(HX_("longPressSelectionTime",92,a5,bf,ad),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(500));
            	}


 ::haxe::ui::data::DataSource ListView_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_dataSource)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->behaviours->get(HX_("dataSource",a5,76,d3,1d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource ListView_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_520_set_dataSource)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("dataSource",a5,76,d3,1d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("dataSource",a5,76,d3,1d)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_dataSource,return )

Float ListView_obj::get_itemWidth(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_itemWidth)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("itemWidth",f3,1b,4e,ca)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemWidth,return )

Float ListView_obj::set_itemWidth(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_520_set_itemWidth)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("itemWidth",f3,1b,4e,ca),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("itemWidth",f3,1b,4e,ca)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemWidth,return )

Float ListView_obj::get_itemHeight(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_itemHeight)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("itemHeight",5a,d1,59,f0)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemHeight,return )

Float ListView_obj::set_itemHeight(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_520_set_itemHeight)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("itemHeight",5a,d1,59,f0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("itemHeight",5a,d1,59,f0)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemHeight,return )

int ListView_obj::get_itemCount(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_itemCount)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("itemCount",bc,aa,4e,4a)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemCount,return )

int ListView_obj::set_itemCount(int value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_520_set_itemCount)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("itemCount",bc,aa,4e,4a),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("itemCount",bc,aa,4e,4a)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemCount,return )

bool ListView_obj::get_variableItemSize(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_variableItemSize)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("variableItemSize",d0,81,05,ab)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_variableItemSize,return )

bool ListView_obj::set_variableItemSize(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_520_set_variableItemSize)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("variableItemSize",d0,81,05,ab),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("variableItemSize",d0,81,05,ab)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_variableItemSize,return )

int ListView_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_selectedIndex)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("selectedIndex",b7,76,56,b4)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedIndex,return )

int ListView_obj::set_selectedIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_491_set_selectedIndex)
HXLINE( 492)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 492)		_hx_tmp->set(HX_("selectedIndex",b7,76,56,b4),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 493)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedIndex",b7,76,56,b4)));
HXLINE( 494)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectedIndex,return )

 ::Dynamic ListView_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_465_get_selectedItem)
HXDLIN( 465)		return this->behaviours->getDynamic(HX_("selectedItem",0e,e5,59,d6));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedItem,return )

 ::Dynamic ListView_obj::set_selectedItem( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_500_set_selectedItem)
HXLINE( 501)		this->behaviours->setDynamic(HX_("selectedItem",0e,e5,59,d6),value);
HXLINE( 502)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedItem",0e,e5,59,d6)));
HXLINE( 503)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectedItem,return )

::Array< int > ListView_obj::get_selectedIndices(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_selectedIndices)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toArray(this->behaviours->get(HX_("selectedIndices",0c,16,80,52)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedIndices,return )

::Array< int > ListView_obj::set_selectedIndices(::Array< int > value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_520_set_selectedIndices)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedIndices",0c,16,80,52),::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedIndices",0c,16,80,52)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectedIndices,return )

::cpp::VirtualArray ListView_obj::get_selectedItems(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_selectedItems)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toArray(this->behaviours->get(HX_("selectedItems",a5,87,4e,b8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedItems,return )

::cpp::VirtualArray ListView_obj::set_selectedItems(::cpp::VirtualArray value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_520_set_selectedItems)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedItems",a5,87,4e,b8),::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedItems",a5,87,4e,b8)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectedItems,return )

::String ListView_obj::get_selectionMode(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_selectionMode)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("selectionMode",cf,0d,a5,f8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectionMode,return )

::String ListView_obj::set_selectionMode(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_520_set_selectionMode)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectionMode",cf,0d,a5,f8),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectionMode",cf,0d,a5,f8)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectionMode,return )

int ListView_obj::get_longPressSelectionTime(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_475_get_longPressSelectionTime)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("longPressSelectionTime",92,a5,bf,ad)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_longPressSelectionTime,return )

int ListView_obj::set_longPressSelectionTime(int value){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_520_set_longPressSelectionTime)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("longPressSelectionTime",92,a5,bf,ad),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("longPressSelectionTime",92,a5,bf,ad)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_longPressSelectionTime,return )

 ::Dynamic ListView_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_602_get_value)
HXDLIN( 602)		return this->get_selectedIndex();
            	}


 ::Dynamic ListView_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_605_set_value)
HXLINE( 606)		this->set_selectedIndex(( (int)(value) ));
HXLINE( 607)		return value;
            	}


 ::haxe::ui::core::ComponentContainer ListView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_73961147c20b323a_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::ListView c = ( ( ::haxe::ui::containers::ListView)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_itemRendererClass() )) {
HXLINE( 380)			c->set_itemRendererClass(this->get_itemRendererClass());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_itemRenderer() )) {
HXLINE( 380)			c->set_itemRenderer(this->get_itemRenderer());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_dataSource() )) {
HXLINE( 380)			c->set_dataSource(this->get_dataSource());
            		}
HXLINE( 382)		c->set_itemWidth(this->get_itemWidth());
HXDLIN( 382)		c->set_itemHeight(this->get_itemHeight());
HXDLIN( 382)		c->set_itemCount(this->get_itemCount());
HXDLIN( 382)		c->set_variableItemSize(this->get_variableItemSize());
HXDLIN( 382)		c->set_selectedIndex(this->get_selectedIndex());
HXLINE( 380)		if (::hx::IsNotNull( this->get_selectedItem() )) {
HXLINE( 380)			c->set_selectedItem(this->get_selectedItem());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_selectedIndices() )) {
HXLINE( 380)			c->set_selectedIndices(this->get_selectedIndices());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_selectedItems() )) {
HXLINE( 380)			c->set_selectedItems(this->get_selectedItems());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_selectionMode() )) {
HXLINE( 380)			c->set_selectionMode(this->get_selectionMode());
            		}
HXLINE( 382)		c->set_longPressSelectionTime(this->get_longPressSelectionTime());
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				::Array< ::Dynamic> _g1;
HXDLIN( 388)				if (::hx::IsNull( this->_children )) {
HXLINE( 388)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 388)					_g1 = this->_children;
            				}
HXDLIN( 388)				while((_g < _g1->length)){
HXLINE( 388)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 393)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 395)		return c;
            	}


 ::haxe::ui::core::ComponentContainer ListView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::ListView_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ListView_obj > ListView_obj::__new() {
	::hx::ObjectPtr< ListView_obj > __this = new ListView_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ListView_obj > ListView_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ListView_obj *__this = (ListView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListView_obj), true, "haxe.ui.containers.ListView"));
	*(void **)__this = ListView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ListView_obj::ListView_obj()
{
}

void ListView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListView);
	HX_MARK_MEMBER_NAME(_itemRendererClass,"_itemRendererClass");
	HX_MARK_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_MARK_MEMBER_NAME(_internal__onComponentEvent,"_internal__onComponentEvent");
	HX_MARK_MEMBER_NAME(onComponentEvent,"onComponentEvent");
	 ::haxe::ui::containers::ScrollView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_itemRendererClass,"_itemRendererClass");
	HX_VISIT_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_VISIT_MEMBER_NAME(_internal__onComponentEvent,"_internal__onComponentEvent");
	HX_VISIT_MEMBER_NAME(onComponentEvent,"onComponentEvent");
	 ::haxe::ui::containers::ScrollView_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ListView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_itemWidth() ); }
		if (HX_FIELD_EQ(inName,"itemCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_itemCount() ); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		if (HX_FIELD_EQ(inName,"itemHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_itemHeight() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_itemRenderer() ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedItem() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { return ::hx::Val( _itemRenderer ); }
		if (HX_FIELD_EQ(inName,"get_itemWidth") ) { return ::hx::Val( get_itemWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemWidth") ) { return ::hx::Val( set_itemWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_itemCount") ) { return ::hx::Val( get_itemCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemCount") ) { return ::hx::Val( set_itemCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedItems() ); }
		if (HX_FIELD_EQ(inName,"selectionMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionMode() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_itemHeight") ) { return ::hx::Val( get_itemHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemHeight") ) { return ::hx::Val( set_itemHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectedIndices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndices() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_itemRenderer") ) { return ::hx::Val( get_itemRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemRenderer") ) { return ::hx::Val( set_itemRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"onComponentEvent") ) { return ::hx::Val( onComponentEvent ); }
		if (HX_FIELD_EQ(inName,"variableItemSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_variableItemSize() ); }
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return ::hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return ::hx::Val( set_selectedItem_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"itemRendererClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_itemRendererClass() ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedItems") ) { return ::hx::Val( get_selectedItems_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItems") ) { return ::hx::Val( set_selectedItems_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectionMode") ) { return ::hx::Val( get_selectionMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectionMode") ) { return ::hx::Val( set_selectionMode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_itemRendererClass") ) { return ::hx::Val( _itemRendererClass ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_selectedIndices") ) { return ::hx::Val( get_selectedIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndices") ) { return ::hx::Val( set_selectedIndices_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_onComponentEvent") ) { return ::hx::Val( set_onComponentEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_variableItemSize") ) { return ::hx::Val( get_variableItemSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_variableItemSize") ) { return ::hx::Val( set_variableItemSize_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_itemRendererClass") ) { return ::hx::Val( get_itemRendererClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemRendererClass") ) { return ::hx::Val( set_itemRendererClass_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"longPressSelectionTime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_longPressSelectionTime() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_longPressSelectionTime") ) { return ::hx::Val( get_longPressSelectionTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_longPressSelectionTime") ) { return ::hx::Val( set_longPressSelectionTime_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_internal__onComponentEvent") ) { return ::hx::Val( _internal__onComponentEvent ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"itemWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_itemWidth(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"itemCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_itemCount(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		if (HX_FIELD_EQ(inName,"itemHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_itemHeight(inValue.Cast< Float >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_itemRenderer(inValue.Cast<  ::haxe::ui::core::ItemRenderer >()) ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedItem(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { _itemRenderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedItems(inValue.Cast< ::cpp::VirtualArray >()) ); }
		if (HX_FIELD_EQ(inName,"selectionMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectionMode(inValue.Cast< ::String >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectedIndices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndices(inValue.Cast< ::Array< int > >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentEvent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onComponentEvent(inValue.Cast<  ::Dynamic >()) );onComponentEvent=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"variableItemSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_variableItemSize(inValue.Cast< bool >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"itemRendererClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_itemRendererClass(inValue.Cast< ::hx::Class >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_itemRendererClass") ) { _itemRendererClass=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"longPressSelectionTime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_longPressSelectionTime(inValue.Cast< int >()) ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_internal__onComponentEvent") ) { _internal__onComponentEvent=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_itemRendererClass",a3,6f,b5,c4));
	outFields->push(HX_("itemRendererClass",e2,ca,9f,f1));
	outFields->push(HX_("_itemRenderer",55,a4,73,79));
	outFields->push(HX_("itemRenderer",76,11,05,97));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	outFields->push(HX_("itemWidth",f3,1b,4e,ca));
	outFields->push(HX_("itemHeight",5a,d1,59,f0));
	outFields->push(HX_("itemCount",bc,aa,4e,4a));
	outFields->push(HX_("variableItemSize",d0,81,05,ab));
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("selectedItem",0e,e5,59,d6));
	outFields->push(HX_("selectedIndices",0c,16,80,52));
	outFields->push(HX_("selectedItems",a5,87,4e,b8));
	outFields->push(HX_("selectionMode",cf,0d,a5,f8));
	outFields->push(HX_("longPressSelectionTime",92,a5,bf,ad));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(ListView_obj,_itemRendererClass),HX_("_itemRendererClass",a3,6f,b5,c4)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(ListView_obj,_itemRenderer),HX_("_itemRenderer",55,a4,73,79)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ListView_obj,_internal__onComponentEvent),HX_("_internal__onComponentEvent",58,50,26,81)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ListView_obj,onComponentEvent),HX_("onComponentEvent",9c,87,21,d1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListView_obj_sStaticStorageInfo = 0;
#endif

static ::String ListView_obj_sMemberFields[] = {
	HX_("_itemRendererClass",a3,6f,b5,c4),
	HX_("get_itemRendererClass",b9,cd,4d,70),
	HX_("set_itemRendererClass",c5,9b,56,c4),
	HX_("_itemRenderer",55,a4,73,79),
	HX_("get_itemRenderer",ff,fd,a3,9b),
	HX_("set_itemRenderer",73,eb,e5,f1),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("_internal__onComponentEvent",58,50,26,81),
	HX_("onComponentEvent",9c,87,21,d1),
	HX_("set_onComponentEvent",19,a4,43,bc),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("get_itemWidth",ca,ef,b1,8b),
	HX_("set_itemWidth",d6,d1,b7,d0),
	HX_("get_itemHeight",a3,59,4f,66),
	HX_("set_itemHeight",17,42,6f,86),
	HX_("get_itemCount",93,7e,b2,0b),
	HX_("set_itemCount",9f,60,b8,50),
	HX_("get_variableItemSize",d9,e6,6f,c9),
	HX_("set_variableItemSize",4d,9e,27,96),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("set_selectedItem",0b,bf,3a,31),
	HX_("get_selectedIndices",23,e5,8a,dd),
	HX_("set_selectedIndices",2f,d8,27,1a),
	HX_("get_selectedItems",fc,92,be,be),
	HX_("set_selectedItems",08,6b,2c,e2),
	HX_("get_selectionMode",26,19,15,ff),
	HX_("set_selectionMode",32,f1,82,22),
	HX_("get_longPressSelectionTime",5b,f7,c4,e5),
	HX_("set_longPressSelectionTime",cf,bd,59,45),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ListView_obj::__mClass;

void ListView_obj::__register()
{
	ListView_obj _hx_dummy;
	ListView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.ListView",0d,a6,4d,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
