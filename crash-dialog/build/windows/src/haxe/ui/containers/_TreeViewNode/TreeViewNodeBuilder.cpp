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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeBuilder
#include <haxe/ui/containers/_TreeViewNode/TreeViewNodeBuilder.h>
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
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_232_new,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","new",0xc7c28fb4,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.new","haxe/ui/containers/TreeViewNode.hx",232,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_246_onInitialize,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","onInitialize",0x47af897b,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.onInitialize","haxe/ui/containers/TreeViewNode.hx",246,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_272_onContainerClick,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","onContainerClick",0xe3de14f2,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.onContainerClick","haxe/ui/containers/TreeViewNode.hx",272,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_286_onContainerDblClick,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","onContainerDblClick",0x93b09bd0,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.onContainerDblClick","haxe/ui/containers/TreeViewNode.hx",286,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_295_onExpandCollapseClicked,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","onExpandCollapseClicked",0xb4046535,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.onExpandCollapseClicked","haxe/ui/containers/TreeViewNode.hx",295,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_301_updateIconClass,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","updateIconClass",0x86e1880a,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.updateIconClass","haxe/ui/containers/TreeViewNode.hx",301,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_313_validateComponentData,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","validateComponentData",0x1bd29365,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.validateComponentData","haxe/ui/containers/TreeViewNode.hx",313,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_316_changeToExpandableRenderer,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","changeToExpandableRenderer",0xc4e4ab6e,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.changeToExpandableRenderer","haxe/ui/containers/TreeViewNode.hx",316,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_325_changeToNonExpandableRenderer,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","changeToNonExpandableRenderer",0xd3faee0d,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.changeToNonExpandableRenderer","haxe/ui/containers/TreeViewNode.hx",325,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_334_makeNonExpandableRendererChanges,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","makeNonExpandableRendererChanges",0x2ba391d9,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.makeNonExpandableRendererChanges","haxe/ui/containers/TreeViewNode.hx",334,0x9b33be2e)
static const ::String _hx_array_data_3cf3e5c2_10[] = {
	HX_("node-collapsed",0c,61,a0,76),HX_("node-expanded",24,2c,38,bd),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_356_makeExpandableRendererChanges,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","makeExpandableRendererChanges",0x938acff2,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.makeExpandableRendererChanges","haxe/ui/containers/TreeViewNode.hx",356,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_375_addComponent,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","addComponent",0x9158c888,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.addComponent","haxe/ui/containers/TreeViewNode.hx",375,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_2f49944dcef4d2b2_399_removeComponent,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder","removeComponent",0x05acf92d,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder.removeComponent","haxe/ui/containers/TreeViewNode.hx",399,0x9b33be2e)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeViewNode{

void TreeViewNodeBuilder_obj::__construct( ::haxe::ui::containers::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_232_new)
HXLINE( 239)		this->_isExpandable = false;
HXLINE( 237)		this->_childContainer = null();
HXLINE( 236)		this->_renderer = null();
HXLINE( 235)		this->_expandCollapseIcon = null();
HXLINE( 234)		this->_nodeContainer = null();
HXLINE( 242)		super::__construct(node);
HXLINE( 243)		this->_node = node;
            	}

Dynamic TreeViewNodeBuilder_obj::__CreateEmpty() { return new TreeViewNodeBuilder_obj; }

void *TreeViewNodeBuilder_obj::_hx_vtable = 0;

Dynamic TreeViewNodeBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewNodeBuilder_obj > _hx_result = new TreeViewNodeBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewNodeBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x6487d722;
	}
}

void TreeViewNodeBuilder_obj::onInitialize(){
            	HX_GC_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_246_onInitialize)
HXLINE( 247)		 ::haxe::ui::containers::TreeView treeview = this->_node->findAncestor(null(),::hx::ClassOf< ::haxe::ui::containers::TreeView >(),null()).StaticCast<  ::haxe::ui::containers::TreeView >();
HXLINE( 249)		this->_nodeContainer =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE( 250)		this->_nodeContainer->addClass(HX_("treenode-container",d4,e9,23,fb),null(),null());
HXLINE( 251)		this->_expandCollapseIcon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 252)		this->_expandCollapseIcon->set_scriptAccess(false);
HXLINE( 253)		this->_expandCollapseIcon->addClass(HX_("treenode-expand-collapse-icon",73,a3,73,1b),null(),null());
HXLINE( 254)		this->_expandCollapseIcon->set_id(HX_("treenode-expand-collapse-icon",73,a3,73,1b));
HXLINE( 255)		this->_expandCollapseIcon->registerEvent(HX_("click",48,7c,5e,48),this->onExpandCollapseClicked_dyn(),null());
HXLINE( 256)		this->_nodeContainer->registerEvent(HX_("click",48,7c,5e,48),this->onContainerClick_dyn(),null());
HXLINE( 257)		this->_nodeContainer->registerEvent(HX_("rightclick",ec,f2,f5,b7),this->onContainerClick_dyn(),null());
HXLINE( 258)		this->_nodeContainer->registerEvent(HX_("doubleclick",97,93,48,3a),this->onContainerDblClick_dyn(),null());
HXLINE( 259)		this->_nodeContainer->addComponent(this->_expandCollapseIcon);
HXLINE( 261)		this->_renderer = Dynamic( treeview->get_itemRenderer()->cloneComponent()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 262)		 ::haxe::ui::core::ItemRenderer _hx_tmp = this->_renderer;
HXDLIN( 262)		_hx_tmp->set_data(this->_node->get_data());
HXLINE( 263)		this->_nodeContainer->addComponent(this->_renderer);
HXLINE( 266)		if ((this->_isExpandable == true)) {
HXLINE( 267)			this->makeExpandableRendererChanges();
            		}
HXLINE( 269)		this->_node->addComponentAt(this->_nodeContainer,0);
            	}


void TreeViewNodeBuilder_obj::onContainerClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_272_onContainerClick)
HXLINE( 273)		if (this->_expandCollapseIcon->hitTest(event->screenX,event->screenY,null())) {
HXLINE( 274)			return;
            		}
HXLINE( 277)		::Array< ::Dynamic> interactives = this->_node->findComponentsUnderPoint(event->screenX,event->screenY,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >());
HXLINE( 278)		if ((interactives->length > 0)) {
HXLINE( 279)			return;
            		}
HXLINE( 282)		 ::haxe::ui::containers::TreeView treeview = this->_node->findAncestor(null(),::hx::ClassOf< ::haxe::ui::containers::TreeView >(),null()).StaticCast<  ::haxe::ui::containers::TreeView >();
HXLINE( 283)		treeview->set_selectedNode(this->_node);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewNodeBuilder_obj,onContainerClick,(void))

void TreeViewNodeBuilder_obj::onContainerDblClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_286_onContainerDblClick)
HXLINE( 287)		::Array< ::Dynamic> interactives = this->_node->findComponentsUnderPoint(event->screenX,event->screenY,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >());
HXLINE( 288)		if ((interactives->length > 0)) {
HXLINE( 289)			return;
            		}
HXLINE( 292)		this->onExpandCollapseClicked(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewNodeBuilder_obj,onContainerDblClick,(void))

void TreeViewNodeBuilder_obj::onExpandCollapseClicked( ::haxe::ui::events::UIEvent _){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_295_onExpandCollapseClicked)
HXLINE( 296)		 ::haxe::ui::containers::TreeViewNode _hx_tmp = this->_node;
HXDLIN( 296)		_hx_tmp->set_expanded(!(this->_node->get_expanded()));
HXLINE( 297)		this->updateIconClass();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewNodeBuilder_obj,onExpandCollapseClicked,(void))

void TreeViewNodeBuilder_obj::updateIconClass(){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_301_updateIconClass)
HXDLIN( 301)		if (::hx::IsNotNull( this->_expandCollapseIcon )) {
HXLINE( 302)			if (::hx::IsNotNull( this->_childContainer )) {
HXLINE( 303)				if ((this->_node->get_expanded() == true)) {
HXLINE( 304)					this->_expandCollapseIcon->swapClass(HX_("node-expanded",24,2c,38,bd),HX_("node-collapsed",0c,61,a0,76),null(),null());
            				}
            				else {
HXLINE( 306)					this->_expandCollapseIcon->swapClass(HX_("node-collapsed",0c,61,a0,76),HX_("node-expanded",24,2c,38,bd),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNodeBuilder_obj,updateIconClass,(void))

void TreeViewNodeBuilder_obj::validateComponentData(){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_313_validateComponentData)
HXDLIN( 313)		 ::haxe::ui::core::ItemRenderer _hx_tmp = this->_renderer;
HXDLIN( 313)		_hx_tmp->set_data(this->_node->get_data());
            	}


void TreeViewNodeBuilder_obj::changeToExpandableRenderer(){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_316_changeToExpandableRenderer)
HXLINE( 317)		if ((this->_isExpandable == true)) {
HXLINE( 318)			return;
            		}
HXLINE( 321)		this->_isExpandable = true;
HXLINE( 322)		this->makeExpandableRendererChanges();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNodeBuilder_obj,changeToExpandableRenderer,(void))

void TreeViewNodeBuilder_obj::changeToNonExpandableRenderer(){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_325_changeToNonExpandableRenderer)
HXLINE( 326)		if ((this->_isExpandable == false)) {
HXLINE( 327)			return;
            		}
HXLINE( 330)		this->_isExpandable = false;
HXLINE( 331)		this->makeNonExpandableRendererChanges();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNodeBuilder_obj,changeToNonExpandableRenderer,(void))

void TreeViewNodeBuilder_obj::makeNonExpandableRendererChanges(){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_334_makeNonExpandableRendererChanges)
HXLINE( 335)		 ::haxe::ui::containers::TreeView treeview = this->_node->findAncestor(null(),::hx::ClassOf< ::haxe::ui::containers::TreeView >(),null()).StaticCast<  ::haxe::ui::containers::TreeView >();
HXLINE( 337)		if (::hx::IsNotNull( this->_expandCollapseIcon )) {
HXLINE( 338)			this->_expandCollapseIcon->removeClasses(::Array_obj< ::String >::fromData( _hx_array_data_3cf3e5c2_10,2),null(),null());
            		}
HXLINE( 341)		if (::hx::IsNotNull( this->_renderer )) {
HXLINE( 342)			 ::haxe::ui::containers::TreeViewNode wasSelected = treeview->get_selectedNode();
HXDLIN( 342)			bool wasSelected1 = ::hx::IsInstanceEq( wasSelected,this->_node );
HXLINE( 343)			 ::Dynamic data = this->_renderer->get_data();
HXLINE( 344)			 ::haxe::ui::core::ItemRenderer newRenderer = Dynamic( treeview->get_itemRenderer()->cloneComponent()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 345)			newRenderer->set_data(data);
HXLINE( 346)			this->_nodeContainer->removeComponent(this->_renderer,null(),null());
HXLINE( 347)			this->_renderer = newRenderer;
HXLINE( 348)			this->_nodeContainer->addComponent(newRenderer);
HXLINE( 349)			if ((wasSelected1 == true)) {
HXLINE( 351)				treeview->set_selectedNode(this->_node);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNodeBuilder_obj,makeNonExpandableRendererChanges,(void))

void TreeViewNodeBuilder_obj::makeExpandableRendererChanges(){
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_356_makeExpandableRendererChanges)
HXLINE( 357)		 ::haxe::ui::containers::TreeView treeview = this->_node->findAncestor(null(),::hx::ClassOf< ::haxe::ui::containers::TreeView >(),null()).StaticCast<  ::haxe::ui::containers::TreeView >();
HXLINE( 359)		this->updateIconClass();
HXLINE( 360)		if (::hx::IsNotNull( this->_renderer )) {
HXLINE( 361)			 ::haxe::ui::containers::TreeViewNode wasSelected = treeview->get_selectedNode();
HXDLIN( 361)			bool wasSelected1 = ::hx::IsInstanceEq( wasSelected,this->_node );
HXLINE( 362)			 ::Dynamic data = this->_renderer->get_data();
HXLINE( 363)			 ::haxe::ui::core::ItemRenderer newRenderer = Dynamic( treeview->get_expandableItemRenderer()->cloneComponent()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 364)			newRenderer->set_data(data);
HXLINE( 365)			this->_nodeContainer->removeComponent(this->_renderer,null(),null());
HXLINE( 366)			this->_renderer = newRenderer;
HXLINE( 367)			this->_nodeContainer->addComponent(newRenderer);
HXLINE( 368)			if ((wasSelected1 == true)) {
HXLINE( 370)				treeview->set_selectedNode(this->_node);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNodeBuilder_obj,makeExpandableRendererChanges,(void))

 ::haxe::ui::core::Component TreeViewNodeBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_375_addComponent)
HXLINE( 376)		bool _hx_tmp;
HXDLIN( 376)		if (::hx::IsInstanceNotEq( child,this->_renderer )) {
HXLINE( 376)			_hx_tmp = ::hx::IsInstanceEq( child,this->_childContainer );
            		}
            		else {
HXLINE( 376)			_hx_tmp = true;
            		}
HXDLIN( 376)		if (_hx_tmp) {
HXLINE( 377)			return null();
            		}
HXLINE( 380)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::TreeViewNode >())) {
HXLINE( 381)			if (::hx::IsNull( this->_childContainer )) {
HXLINE( 382)				this->_childContainer =  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX );
HXLINE( 383)				if ((this->_node->get_expanded() == true)) {
HXLINE( 384)					this->_childContainer->show();
            				}
            				else {
HXLINE( 386)					this->_childContainer->hide();
            				}
HXLINE( 388)				this->_childContainer->addClass(HX_("treenode-child-container",e3,70,2d,aa),null(),null());
HXLINE( 389)				this->_childContainer->set_id(HX_("treenode-child-container",e3,70,2d,aa));
HXLINE( 390)				this->_node->addComponent(this->_childContainer);
            			}
HXLINE( 392)			this->changeToExpandableRenderer();
HXLINE( 393)			return this->_childContainer->addComponent(child);
            		}
HXLINE( 396)		return null();
            	}


 ::haxe::ui::core::Component TreeViewNodeBuilder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_2f49944dcef4d2b2_399_removeComponent)
HXLINE( 400)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::TreeViewNode >())) {
HXLINE( 401)			::hx::TCast<  ::haxe::ui::containers::TreeViewNode >::cast(child)->parentNode = null();
HXLINE( 402)			 ::haxe::ui::core::Component c = this->_childContainer->removeComponent(child,dispose,invalidate);
HXLINE( 403)			if ((this->_childContainer->get_numComponents() == 0)) {
HXLINE( 404)				this->changeToNonExpandableRenderer();
            			}
HXLINE( 406)			return c;
            		}
HXLINE( 408)		return null();
            	}



::hx::ObjectPtr< TreeViewNodeBuilder_obj > TreeViewNodeBuilder_obj::__new( ::haxe::ui::containers::TreeViewNode node) {
	::hx::ObjectPtr< TreeViewNodeBuilder_obj > __this = new TreeViewNodeBuilder_obj();
	__this->__construct(node);
	return __this;
}

::hx::ObjectPtr< TreeViewNodeBuilder_obj > TreeViewNodeBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeViewNode node) {
	TreeViewNodeBuilder_obj *__this = (TreeViewNodeBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewNodeBuilder_obj), true, "haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder"));
	*(void **)__this = TreeViewNodeBuilder_obj::_hx_vtable;
	__this->__construct(node);
	return __this;
}

TreeViewNodeBuilder_obj::TreeViewNodeBuilder_obj()
{
}

void TreeViewNodeBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeViewNodeBuilder);
	HX_MARK_MEMBER_NAME(_node,"_node");
	HX_MARK_MEMBER_NAME(_nodeContainer,"_nodeContainer");
	HX_MARK_MEMBER_NAME(_expandCollapseIcon,"_expandCollapseIcon");
	HX_MARK_MEMBER_NAME(_renderer,"_renderer");
	HX_MARK_MEMBER_NAME(_childContainer,"_childContainer");
	HX_MARK_MEMBER_NAME(_isExpandable,"_isExpandable");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewNodeBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_node,"_node");
	HX_VISIT_MEMBER_NAME(_nodeContainer,"_nodeContainer");
	HX_VISIT_MEMBER_NAME(_expandCollapseIcon,"_expandCollapseIcon");
	HX_VISIT_MEMBER_NAME(_renderer,"_renderer");
	HX_VISIT_MEMBER_NAME(_childContainer,"_childContainer");
	HX_VISIT_MEMBER_NAME(_isExpandable,"_isExpandable");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewNodeBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_node") ) { return ::hx::Val( _node ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderer") ) { return ::hx::Val( _renderer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isExpandable") ) { return ::hx::Val( _isExpandable ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_nodeContainer") ) { return ::hx::Val( _nodeContainer ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_childContainer") ) { return ::hx::Val( _childContainer ); }
		if (HX_FIELD_EQ(inName,"updateIconClass") ) { return ::hx::Val( updateIconClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onContainerClick") ) { return ::hx::Val( onContainerClick_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_expandCollapseIcon") ) { return ::hx::Val( _expandCollapseIcon ); }
		if (HX_FIELD_EQ(inName,"onContainerDblClick") ) { return ::hx::Val( onContainerDblClick_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onExpandCollapseClicked") ) { return ::hx::Val( onExpandCollapseClicked_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"changeToExpandableRenderer") ) { return ::hx::Val( changeToExpandableRenderer_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"changeToNonExpandableRenderer") ) { return ::hx::Val( changeToNonExpandableRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeExpandableRendererChanges") ) { return ::hx::Val( makeExpandableRendererChanges_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"makeNonExpandableRendererChanges") ) { return ::hx::Val( makeNonExpandableRendererChanges_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewNodeBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_node") ) { _node=inValue.Cast<  ::haxe::ui::containers::TreeViewNode >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderer") ) { _renderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isExpandable") ) { _isExpandable=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_nodeContainer") ) { _nodeContainer=inValue.Cast<  ::haxe::ui::containers::HBox >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_childContainer") ) { _childContainer=inValue.Cast<  ::haxe::ui::containers::VBox >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_expandCollapseIcon") ) { _expandCollapseIcon=inValue.Cast<  ::haxe::ui::components::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewNodeBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_node",e1,25,1b,fc));
	outFields->push(HX_("_nodeContainer",20,eb,91,4e));
	outFields->push(HX_("_expandCollapseIcon",1f,fd,03,65));
	outFields->push(HX_("_renderer",a2,bc,71,fa));
	outFields->push(HX_("_childContainer",a4,e0,50,bc));
	outFields->push(HX_("_isExpandable",5d,4c,88,0a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewNodeBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TreeViewNode */ ,(int)offsetof(TreeViewNodeBuilder_obj,_node),HX_("_node",e1,25,1b,fc)},
	{::hx::fsObject /*  ::haxe::ui::containers::HBox */ ,(int)offsetof(TreeViewNodeBuilder_obj,_nodeContainer),HX_("_nodeContainer",20,eb,91,4e)},
	{::hx::fsObject /*  ::haxe::ui::components::Image */ ,(int)offsetof(TreeViewNodeBuilder_obj,_expandCollapseIcon),HX_("_expandCollapseIcon",1f,fd,03,65)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(TreeViewNodeBuilder_obj,_renderer),HX_("_renderer",a2,bc,71,fa)},
	{::hx::fsObject /*  ::haxe::ui::containers::VBox */ ,(int)offsetof(TreeViewNodeBuilder_obj,_childContainer),HX_("_childContainer",a4,e0,50,bc)},
	{::hx::fsBool,(int)offsetof(TreeViewNodeBuilder_obj,_isExpandable),HX_("_isExpandable",5d,4c,88,0a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewNodeBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewNodeBuilder_obj_sMemberFields[] = {
	HX_("_node",e1,25,1b,fc),
	HX_("_nodeContainer",20,eb,91,4e),
	HX_("_expandCollapseIcon",1f,fd,03,65),
	HX_("_renderer",a2,bc,71,fa),
	HX_("_childContainer",a4,e0,50,bc),
	HX_("_isExpandable",5d,4c,88,0a),
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("onContainerClick",c6,d8,f8,05),
	HX_("onContainerDblClick",7c,f4,92,ae),
	HX_("onExpandCollapseClicked",e1,83,de,33),
	HX_("updateIconClass",b6,1a,a7,d1),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("changeToExpandableRenderer",42,00,62,6f),
	HX_("changeToNonExpandableRenderer",b9,55,ab,27),
	HX_("makeNonExpandableRendererChanges",ad,3d,9e,cc),
	HX_("makeExpandableRendererChanges",9e,37,3b,e7),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	::String(null()) };

::hx::Class TreeViewNodeBuilder_obj::__mClass;

void TreeViewNodeBuilder_obj::__register()
{
	TreeViewNodeBuilder_obj _hx_dummy;
	TreeViewNodeBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder",c2,e5,f3,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewNodeBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewNodeBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewNodeBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewNodeBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeViewNode
