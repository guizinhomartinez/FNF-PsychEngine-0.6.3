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
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
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
#ifndef INCLUDED_haxe_ui_containers__TreeView_AddNode
#include <haxe/ui/containers/_TreeView/AddNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_ClearNodes
#include <haxe/ui/containers/_TreeView/ClearNodes.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_GetNodesInternal
#include <haxe/ui/containers/_TreeView/GetNodesInternal.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_RemoveNode
#include <haxe/ui/containers/_TreeView/RemoveNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_SelectedNode
#include <haxe/ui/containers/_TreeView/SelectedNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_TreeViewBuilder
#include <haxe/ui/containers/_TreeView/TreeViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_TreeViewEvents
#include <haxe/ui/containers/_TreeView/TreeViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_BasicItemRenderer
#include <haxe/ui/core/BasicItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_19bad4b85660a40c_29_new,"haxe.ui.containers.TreeView","new",0x2d9f4e7f,"haxe.ui.containers.TreeView.new","haxe/ui/containers/TreeView.hx",29,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_e29e92d3fff25226_565_addNode,"haxe.ui.containers.TreeView","addNode",0x0a95c662,"haxe.ui.containers.TreeView.addNode","haxe/ui/macros/Macros.hx",565,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e29e92d3fff25226_565_removeNode,"haxe.ui.containers.TreeView","removeNode",0x69855827,"haxe.ui.containers.TreeView.removeNode","haxe/ui/macros/Macros.hx",565,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e29e92d3fff25226_557_clearNodes,"haxe.ui.containers.TreeView","clearNodes",0x18250b25,"haxe.ui.containers.TreeView.clearNodes","haxe/ui/macros/Macros.hx",557,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e29e92d3fff25226_568_getNodesInternal,"haxe.ui.containers.TreeView","getNodesInternal",0xdf8f7899,"haxe.ui.containers.TreeView.getNodesInternal","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19bad4b85660a40c_39_get_dataSource,"haxe.ui.containers.TreeView","get_dataSource",0xd280872f,"haxe.ui.containers.TreeView.get_dataSource","haxe/ui/containers/TreeView.hx",39,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_19bad4b85660a40c_46_set_dataSource,"haxe.ui.containers.TreeView","set_dataSource",0xf2a06fa3,"haxe.ui.containers.TreeView.set_dataSource","haxe/ui/containers/TreeView.hx",46,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_19bad4b85660a40c_55_onDataChanged,"haxe.ui.containers.TreeView","onDataChanged",0x5e6613ea,"haxe.ui.containers.TreeView.onDataChanged","haxe/ui/containers/TreeView.hx",55,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_19bad4b85660a40c_58_getNodes,"haxe.ui.containers.TreeView","getNodes",0x1ef1b93c,"haxe.ui.containers.TreeView.getNodes","haxe/ui/containers/TreeView.hx",58,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_19bad4b85660a40c_70_get_itemRenderer,"haxe.ui.containers.TreeView","get_itemRenderer",0x9d7ed880,"haxe.ui.containers.TreeView.get_itemRenderer","haxe/ui/containers/TreeView.hx",70,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_19bad4b85660a40c_72_set_itemRenderer,"haxe.ui.containers.TreeView","set_itemRenderer",0xf3c0c5f4,"haxe.ui.containers.TreeView.set_itemRenderer","haxe/ui/containers/TreeView.hx",72,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_19bad4b85660a40c_83_get_expandableItemRenderer,"haxe.ui.containers.TreeView","get_expandableItemRenderer",0xabea4414,"haxe.ui.containers.TreeView.get_expandableItemRenderer","haxe/ui/containers/TreeView.hx",83,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_19bad4b85660a40c_89_set_expandableItemRenderer,"haxe.ui.containers.TreeView","set_expandableItemRenderer",0x0b7f0a88,"haxe.ui.containers.TreeView.set_expandableItemRenderer","haxe/ui/containers/TreeView.hx",89,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_19bad4b85660a40c_98_findNodeByPath,"haxe.ui.containers.TreeView","findNodeByPath",0x141bc898,"haxe.ui.containers.TreeView.findNodeByPath","haxe/ui/containers/TreeView.hx",98,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_e29e92d3fff25226_138_registerComposite,"haxe.ui.containers.TreeView","registerComposite",0x9c243b83,"haxe.ui.containers.TreeView.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e29e92d3fff25226_441_registerBehaviours,"haxe.ui.containers.TreeView","registerBehaviours",0x868ee49a,"haxe.ui.containers.TreeView.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e29e92d3fff25226_468_get_selectedNode,"haxe.ui.containers.TreeView","get_selectedNode",0xe01df107,"haxe.ui.containers.TreeView.get_selectedNode","haxe/ui/macros/Macros.hx",468,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e29e92d3fff25226_520_set_selectedNode,"haxe.ui.containers.TreeView","set_selectedNode",0x365fde7b,"haxe.ui.containers.TreeView.set_selectedNode","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_44ba5fd4ba31efac_565_cloneComponent,"haxe.ui.containers.TreeView","cloneComponent",0x650e71e1,"haxe.ui.containers.TreeView.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_e29e92d3fff25226_423_self,"haxe.ui.containers.TreeView","self",0xc113688d,"haxe.ui.containers.TreeView.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void TreeView_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_19bad4b85660a40c_29_new)
HXLINE(  81)		this->_expandableItemRenderer = null();
HXLINE(  67)		this->_itemRenderer = ( ( ::haxe::ui::core::ItemRenderer)( ::haxe::ui::core::BasicItemRenderer_obj::__alloc( HX_CTX )) );
HXLINE(  37)		this->_dataSource = null();
HXLINE(  29)		super::__construct();
            	}

Dynamic TreeView_obj::__CreateEmpty() { return new TreeView_obj; }

void *TreeView_obj::_hx_vtable = 0;

Dynamic TreeView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeView_obj > _hx_result = new TreeView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TreeView_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x606705f3) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x433ebabe || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x606705f3;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_containers_TreeView__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (::hx::Object::*)())&::haxe::ui::containers::TreeView_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (::hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::containers::TreeView_obj::set_dataSource,
};

void *TreeView_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_containers_TreeView__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

 ::haxe::ui::containers::TreeViewNode TreeView_obj::addNode( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_e29e92d3fff25226_565_addNode)
HXDLIN( 565)		return ( ( ::haxe::ui::containers::TreeViewNode)(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->call(HX_("addNode",c3,4c,47,85),data))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeView_obj,addNode,return )

 ::haxe::ui::containers::TreeViewNode TreeView_obj::removeNode( ::haxe::ui::containers::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_e29e92d3fff25226_565_removeNode)
HXDLIN( 565)		return ( ( ::haxe::ui::containers::TreeViewNode)(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->call(HX_("removeNode",66,44,29,c6),node))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeView_obj,removeNode,return )

void TreeView_obj::clearNodes(){
            	HX_STACKFRAME(&_hx_pos_e29e92d3fff25226_557_clearNodes)
HXLINE( 558)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 559)			return;
            		}
HXLINE( 561)		this->behaviours->call(HX_("clearNodes",64,f7,c8,74),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeView_obj,clearNodes,(void))

::Array< ::Dynamic> TreeView_obj::getNodesInternal(){
            	HX_STACKFRAME(&_hx_pos_e29e92d3fff25226_568_getNodesInternal)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toArray(this->behaviours->call(HX_("getNodesInternal",18,9e,b4,dd),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeView_obj,getNodesInternal,return )

 ::haxe::ui::data::DataSource TreeView_obj::get_dataSource(){
            	HX_GC_STACKFRAME(&_hx_pos_19bad4b85660a40c_39_get_dataSource)
HXLINE(  40)		if (::hx::IsNull( this->_dataSource )) {
HXLINE(  41)			this->_dataSource =  ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null());
HXLINE(  42)			this->_dataSource->onDataSourceChange = this->onDataChanged_dyn();
            		}
HXLINE(  44)		return this->_dataSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeView_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource TreeView_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_STACKFRAME(&_hx_pos_19bad4b85660a40c_46_set_dataSource)
HXLINE(  47)		 ::haxe::ui::data::DataSource dataSource = value;
HXLINE(  48)		if (::hx::IsNotNull( dataSource )) {
HXLINE(  49)			this->_dataSource = dataSource;
HXLINE(  50)			this->_dataSource->onDataSourceChange = this->onDataChanged_dyn();
            		}
HXLINE(  52)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeView_obj,set_dataSource,return )

void TreeView_obj::onDataChanged(){
            	HX_STACKFRAME(&_hx_pos_19bad4b85660a40c_55_onDataChanged)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeView_obj,onDataChanged,(void))

::Array< ::Dynamic> TreeView_obj::getNodes(){
            	HX_STACKFRAME(&_hx_pos_19bad4b85660a40c_58_getNodes)
HXLINE(  59)		::Array< ::Dynamic> nodes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  60)		::Array< ::Dynamic> internalNodes = this->getNodesInternal();
HXLINE(  61)		{
HXLINE(  61)			int _g = 0;
HXDLIN(  61)			while((_g < internalNodes->length)){
HXLINE(  61)				 ::haxe::ui::core::Component node = internalNodes->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  61)				_g = (_g + 1);
HXLINE(  62)				nodes->push(( ( ::haxe::ui::containers::TreeViewNode)(node) ));
            			}
            		}
HXLINE(  64)		return nodes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeView_obj,getNodes,return )

 ::haxe::ui::core::ItemRenderer TreeView_obj::get_itemRenderer(){
            	HX_STACKFRAME(&_hx_pos_19bad4b85660a40c_70_get_itemRenderer)
HXDLIN(  70)		return this->_itemRenderer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeView_obj,get_itemRenderer,return )

 ::haxe::ui::core::ItemRenderer TreeView_obj::set_itemRenderer( ::haxe::ui::core::ItemRenderer value){
            	HX_STACKFRAME(&_hx_pos_19bad4b85660a40c_72_set_itemRenderer)
HXLINE(  73)		if (::hx::IsInstanceNotEq( this->_itemRenderer,value )) {
HXLINE(  74)			this->_itemRenderer = value;
            		}
HXLINE(  78)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeView_obj,set_itemRenderer,return )

 ::haxe::ui::core::ItemRenderer TreeView_obj::get_expandableItemRenderer(){
            	HX_STACKFRAME(&_hx_pos_19bad4b85660a40c_83_get_expandableItemRenderer)
HXLINE(  84)		if (::hx::IsNull( this->_expandableItemRenderer )) {
HXLINE(  85)			return this->_itemRenderer;
            		}
HXLINE(  87)		return this->_expandableItemRenderer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeView_obj,get_expandableItemRenderer,return )

 ::haxe::ui::core::ItemRenderer TreeView_obj::set_expandableItemRenderer( ::haxe::ui::core::ItemRenderer value){
            	HX_STACKFRAME(&_hx_pos_19bad4b85660a40c_89_set_expandableItemRenderer)
HXLINE(  90)		if (::hx::IsInstanceNotEq( this->_expandableItemRenderer,value )) {
HXLINE(  91)			this->_expandableItemRenderer = value;
            		}
HXLINE(  95)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeView_obj,set_expandableItemRenderer,return )

 ::haxe::ui::containers::TreeViewNode TreeView_obj::findNodeByPath(::String path,::String field){
            	HX_STACKFRAME(&_hx_pos_19bad4b85660a40c_98_findNodeByPath)
HXLINE(  99)		 ::haxe::ui::containers::TreeViewNode foundNode = null();
HXLINE( 101)		::Array< ::String > parts = path.split(HX_("/",2f,00,00,00));
HXLINE( 102)		::String part = ( (::String)(parts->shift()) );
HXLINE( 104)		::Array< ::Dynamic> nodes = this->getNodes();
HXLINE( 105)		{
HXLINE( 105)			int _g = 0;
HXDLIN( 105)			while((_g < nodes->length)){
HXLINE( 105)				 ::haxe::ui::containers::TreeViewNode node = nodes->__get(_g).StaticCast<  ::haxe::ui::containers::TreeViewNode >();
HXDLIN( 105)				_g = (_g + 1);
HXLINE( 106)				if (node->matchesPathPart(part,field)) {
HXLINE( 107)					if ((parts->length == 0)) {
HXLINE( 108)						foundNode = node;
            					}
            					else {
HXLINE( 110)						foundNode = node->findNodeByPath(parts->join(HX_("/",2f,00,00,00)),field);
            					}
HXLINE( 112)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE( 116)		return foundNode;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TreeView_obj,findNodeByPath,return )

void TreeView_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_e29e92d3fff25226_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::_TreeView::TreeViewEvents >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::_TreeView::TreeViewBuilder >();
            	}


void TreeView_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_e29e92d3fff25226_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("selectedNode",fd,29,a4,d9),::hx::ClassOf< ::haxe::ui::containers::_TreeView::SelectedNode >(),null());
HXLINE( 578)		this->behaviours->_hx_register(HX_("addNode",c3,4c,47,85),::hx::ClassOf< ::haxe::ui::containers::_TreeView::AddNode >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("removeNode",66,44,29,c6),::hx::ClassOf< ::haxe::ui::containers::_TreeView::RemoveNode >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("clearNodes",64,f7,c8,74),::hx::ClassOf< ::haxe::ui::containers::_TreeView::ClearNodes >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("getNodesInternal",18,9e,b4,dd),::hx::ClassOf< ::haxe::ui::containers::_TreeView::GetNodesInternal >(),null());
            	}


 ::haxe::ui::containers::TreeViewNode TreeView_obj::get_selectedNode(){
            	HX_STACKFRAME(&_hx_pos_e29e92d3fff25226_468_get_selectedNode)
HXLINE( 469)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 470)			return null();
            		}
HXLINE( 472)		return ( ( ::haxe::ui::containers::TreeViewNode)(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("selectedNode",fd,29,a4,d9)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeView_obj,get_selectedNode,return )

 ::haxe::ui::containers::TreeViewNode TreeView_obj::set_selectedNode( ::haxe::ui::containers::TreeViewNode value){
            	HX_GC_STACKFRAME(&_hx_pos_e29e92d3fff25226_520_set_selectedNode)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedNode",fd,29,a4,d9),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedNode",fd,29,a4,d9)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeView_obj,set_selectedNode,return )

 ::haxe::ui::core::ComponentContainer TreeView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_44ba5fd4ba31efac_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::TreeView c = ( ( ::haxe::ui::containers::TreeView)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer TreeView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_e29e92d3fff25226_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::TreeView_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< TreeView_obj > TreeView_obj::__new() {
	::hx::ObjectPtr< TreeView_obj > __this = new TreeView_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TreeView_obj > TreeView_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TreeView_obj *__this = (TreeView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeView_obj), true, "haxe.ui.containers.TreeView"));
	*(void **)__this = TreeView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TreeView_obj::TreeView_obj()
{
}

void TreeView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeView);
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_MARK_MEMBER_NAME(_expandableItemRenderer,"_expandableItemRenderer");
	 ::haxe::ui::containers::ScrollView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_VISIT_MEMBER_NAME(_expandableItemRenderer,"_expandableItemRenderer");
	 ::haxe::ui::containers::ScrollView_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addNode") ) { return ::hx::Val( addNode_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getNodes") ) { return ::hx::Val( getNodes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeNode") ) { return ::hx::Val( removeNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearNodes") ) { return ::hx::Val( clearNodes_dyn() ); }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return ::hx::Val( _dataSource ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_itemRenderer() ); }
		if (HX_FIELD_EQ(inName,"selectedNode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedNode() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onDataChanged") ) { return ::hx::Val( onDataChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { return ::hx::Val( _itemRenderer ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"findNodeByPath") ) { return ::hx::Val( findNodeByPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNodesInternal") ) { return ::hx::Val( getNodesInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_itemRenderer") ) { return ::hx::Val( get_itemRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemRenderer") ) { return ::hx::Val( set_itemRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedNode") ) { return ::hx::Val( get_selectedNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedNode") ) { return ::hx::Val( set_selectedNode_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"expandableItemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_expandableItemRenderer() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_expandableItemRenderer") ) { return ::hx::Val( _expandableItemRenderer ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_expandableItemRenderer") ) { return ::hx::Val( get_expandableItemRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_expandableItemRenderer") ) { return ::hx::Val( set_expandableItemRenderer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast<  ::haxe::ui::data::DataSource >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_itemRenderer(inValue.Cast<  ::haxe::ui::core::ItemRenderer >()) ); }
		if (HX_FIELD_EQ(inName,"selectedNode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedNode(inValue.Cast<  ::haxe::ui::containers::TreeViewNode >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { _itemRenderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"expandableItemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_expandableItemRenderer(inValue.Cast<  ::haxe::ui::core::ItemRenderer >()) ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_expandableItemRenderer") ) { _expandableItemRenderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dataSource",c4,43,5d,f0));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	outFields->push(HX_("_itemRenderer",55,a4,73,79));
	outFields->push(HX_("itemRenderer",76,11,05,97));
	outFields->push(HX_("_expandableItemRenderer",29,0c,fa,18));
	outFields->push(HX_("expandableItemRenderer",8a,8c,21,86));
	outFields->push(HX_("selectedNode",fd,29,a4,d9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::data::DataSource */ ,(int)offsetof(TreeView_obj,_dataSource),HX_("_dataSource",c4,43,5d,f0)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(TreeView_obj,_itemRenderer),HX_("_itemRenderer",55,a4,73,79)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(TreeView_obj,_expandableItemRenderer),HX_("_expandableItemRenderer",29,0c,fa,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeView_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeView_obj_sMemberFields[] = {
	HX_("addNode",c3,4c,47,85),
	HX_("removeNode",66,44,29,c6),
	HX_("clearNodes",64,f7,c8,74),
	HX_("getNodesInternal",18,9e,b4,dd),
	HX_("_dataSource",c4,43,5d,f0),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("onDataChanged",0b,19,a2,71),
	HX_("getNodes",bb,c7,95,ff),
	HX_("_itemRenderer",55,a4,73,79),
	HX_("get_itemRenderer",ff,fd,a3,9b),
	HX_("set_itemRenderer",73,eb,e5,f1),
	HX_("_expandableItemRenderer",29,0c,fa,18),
	HX_("get_expandableItemRenderer",53,de,26,be),
	HX_("set_expandableItemRenderer",c7,a4,bb,1d),
	HX_("findNodeByPath",57,40,64,d5),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_selectedNode",86,16,43,de),
	HX_("set_selectedNode",fa,03,85,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class TreeView_obj::__mClass;

void TreeView_obj::__register()
{
	TreeView_obj _hx_dummy;
	TreeView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.TreeView",0d,a3,20,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
