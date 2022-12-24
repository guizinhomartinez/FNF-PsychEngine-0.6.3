#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
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
#ifndef INCLUDED_haxe_ui_containers_TreeView
#include <haxe/ui/containers/TreeView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#include <haxe/ui/containers/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_AddNode
#include <haxe/ui/containers/_TreeViewNode/AddNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_ClearNodes
#include <haxe/ui/containers/_TreeViewNode/ClearNodes.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_Expanded
#include <haxe/ui/containers/_TreeViewNode/Expanded.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_GetNodesInternal
#include <haxe/ui/containers/_TreeViewNode/GetNodesInternal.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_RemoveNode
#include <haxe/ui/containers/_TreeViewNode/RemoveNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeBuilder
#include <haxe/ui/containers/_TreeViewNode/TreeViewNodeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeEvents
#include <haxe/ui/containers/_TreeViewNode/TreeViewNodeEvents.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_54a31cdaf0633586_23_new,"haxe.ui.containers.TreeViewNode","new",0xf54f8821,"haxe.ui.containers.TreeViewNode.new","haxe/ui/containers/TreeViewNode.hx",23,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_679ff0f9fead2ede_565_addNode,"haxe.ui.containers.TreeViewNode","addNode",0x88407904,"haxe.ui.containers.TreeViewNode.addNode","haxe/ui/macros/Macros.hx",565,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_679ff0f9fead2ede_565_removeNode,"haxe.ui.containers.TreeViewNode","removeNode",0x652a76c5,"haxe.ui.containers.TreeViewNode.removeNode","haxe/ui/macros/Macros.hx",565,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_679ff0f9fead2ede_557_clearNodes,"haxe.ui.containers.TreeViewNode","clearNodes",0x13ca29c3,"haxe.ui.containers.TreeViewNode.clearNodes","haxe/ui/macros/Macros.hx",557,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_679ff0f9fead2ede_568_getNodesInternal,"haxe.ui.containers.TreeViewNode","getNodesInternal",0xd31e61b7,"haxe.ui.containers.TreeViewNode.getNodesInternal","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_33_nodePath,"haxe.ui.containers.TreeViewNode","nodePath",0x8adcd166,"haxe.ui.containers.TreeViewNode.nodePath","haxe/ui/containers/TreeViewNode.hx",33,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_53_findNodeByPath,"haxe.ui.containers.TreeViewNode","findNodeByPath",0x44f78e36,"haxe.ui.containers.TreeViewNode.findNodeByPath","haxe/ui/containers/TreeViewNode.hx",53,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_74_matchesPathPart,"haxe.ui.containers.TreeViewNode","matchesPathPart",0x8032a58c,"haxe.ui.containers.TreeViewNode.matchesPathPart","haxe/ui/containers/TreeViewNode.hx",74,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_92_getNodes,"haxe.ui.containers.TreeViewNode","getNodes",0x96a3545a,"haxe.ui.containers.TreeViewNode.getNodes","haxe/ui/containers/TreeViewNode.hx",92,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_102_get_selected,"haxe.ui.containers.TreeViewNode","get_selected",0xae00a683,"haxe.ui.containers.TreeViewNode.get_selected","haxe/ui/containers/TreeViewNode.hx",102,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_106_set_selected,"haxe.ui.containers.TreeViewNode","set_selected",0xc2f9c9f7,"haxe.ui.containers.TreeViewNode.set_selected","haxe/ui/containers/TreeViewNode.hx",106,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_115_get_data,"haxe.ui.containers.TreeViewNode","get_data",0x592b9e52,"haxe.ui.containers.TreeViewNode.get_data","haxe/ui/containers/TreeViewNode.hx",115,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_117_set_data,"haxe.ui.containers.TreeViewNode","set_data",0x0788f7c6,"haxe.ui.containers.TreeViewNode.set_data","haxe/ui/containers/TreeViewNode.hx",117,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_128_get_text,"haxe.ui.containers.TreeViewNode","get_text",0x63c214d5,"haxe.ui.containers.TreeViewNode.get_text","haxe/ui/containers/TreeViewNode.hx",128,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_130_set_text,"haxe.ui.containers.TreeViewNode","set_text",0x121f6e49,"haxe.ui.containers.TreeViewNode.set_text","haxe/ui/containers/TreeViewNode.hx",130,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_140_get_icon,"haxe.ui.containers.TreeViewNode","get_icon",0x5c7b2fa1,"haxe.ui.containers.TreeViewNode.get_icon","haxe/ui/containers/TreeViewNode.hx",140,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_54a31cdaf0633586_142_set_icon,"haxe.ui.containers.TreeViewNode","set_icon",0x0ad88915,"haxe.ui.containers.TreeViewNode.set_icon","haxe/ui/containers/TreeViewNode.hx",142,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_679ff0f9fead2ede_138_registerComposite,"haxe.ui.containers.TreeViewNode","registerComposite",0xc5a14ca5,"haxe.ui.containers.TreeViewNode.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_679ff0f9fead2ede_441_registerBehaviours,"haxe.ui.containers.TreeViewNode","registerBehaviours",0xaa80d138,"haxe.ui.containers.TreeViewNode.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_679ff0f9fead2ede_475_get_expanded,"haxe.ui.containers.TreeViewNode","get_expanded",0xf6628d61,"haxe.ui.containers.TreeViewNode.get_expanded","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_679ff0f9fead2ede_520_set_expanded,"haxe.ui.containers.TreeViewNode","set_expanded",0x0b5bb0d5,"haxe.ui.containers.TreeViewNode.set_expanded","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3f1788001432f1e3_565_cloneComponent,"haxe.ui.containers.TreeViewNode","cloneComponent",0x95ea377f,"haxe.ui.containers.TreeViewNode.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_679ff0f9fead2ede_423_self,"haxe.ui.containers.TreeViewNode","self",0xb3959cab,"haxe.ui.containers.TreeViewNode.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void TreeViewNode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_23_new)
HXLINE( 112)		this->_data = null();
HXLINE(  31)		this->parentNode = null();
HXLINE(  23)		super::__construct();
            	}

Dynamic TreeViewNode_obj::__CreateEmpty() { return new TreeViewNode_obj; }

void *TreeViewNode_obj::_hx_vtable = 0;

Dynamic TreeViewNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewNode_obj > _hx_result = new TreeViewNode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TreeViewNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x02a99f31) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x02a99f31;
				}
			} else {
				return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241810fb) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241810fb;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x2eb1d3e1) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x2eb1d3e1;
				} else {
					return inClassId==(int)0x4ba87886;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

 ::haxe::ui::containers::TreeViewNode TreeViewNode_obj::addNode( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_679ff0f9fead2ede_565_addNode)
HXDLIN( 565)		return ( ( ::haxe::ui::containers::TreeViewNode)(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->call(HX_("addNode",c3,4c,47,85),data))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewNode_obj,addNode,return )

 ::haxe::ui::containers::TreeViewNode TreeViewNode_obj::removeNode( ::haxe::ui::containers::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_679ff0f9fead2ede_565_removeNode)
HXDLIN( 565)		return ( ( ::haxe::ui::containers::TreeViewNode)(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->call(HX_("removeNode",66,44,29,c6),node))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewNode_obj,removeNode,return )

void TreeViewNode_obj::clearNodes(){
            	HX_STACKFRAME(&_hx_pos_679ff0f9fead2ede_557_clearNodes)
HXLINE( 558)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 559)			return;
            		}
HXLINE( 561)		this->behaviours->call(HX_("clearNodes",64,f7,c8,74),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,clearNodes,(void))

::Array< ::Dynamic> TreeViewNode_obj::getNodesInternal(){
            	HX_STACKFRAME(&_hx_pos_679ff0f9fead2ede_568_getNodesInternal)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toArray(this->behaviours->call(HX_("getNodesInternal",18,9e,b4,dd),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,getNodesInternal,return )

::String TreeViewNode_obj::nodePath(::String field){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_33_nodePath)
HXLINE(  34)		if (::hx::IsNull( field )) {
HXLINE(  35)			if (::Reflect_obj::hasField(this->get_data(),HX_("id",db,5b,00,00))) {
HXLINE(  36)				field = HX_("id",db,5b,00,00);
            			}
            			else {
HXLINE(  37)				if (::Reflect_obj::hasField(this->get_data(),HX_("nodeId",7d,4e,22,27))) {
HXLINE(  38)					field = HX_("nodeId",7d,4e,22,27);
            				}
            				else {
HXLINE(  40)					field = HX_("text",ad,cc,f9,4c);
            				}
            			}
            		}
HXLINE(  43)		::cpp::VirtualArray parts = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  44)		 ::haxe::ui::containers::TreeViewNode p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  45)		while(::hx::IsNotNull( p )){
HXLINE(  46)			parts->push(::Reflect_obj::field(p->get_data(),field));
HXLINE(  47)			p = p->parentNode;
            		}
HXLINE(  49)		parts->reverse();
HXLINE(  50)		return parts->join(HX_("/",2f,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewNode_obj,nodePath,return )

 ::haxe::ui::containers::TreeViewNode TreeViewNode_obj::findNodeByPath(::String path,::String field){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_53_findNodeByPath)
HXLINE(  54)		 ::haxe::ui::containers::TreeViewNode foundNode = null();
HXLINE(  56)		::Array< ::String > parts = path.split(HX_("/",2f,00,00,00));
HXLINE(  57)		::String part = ( (::String)(parts->shift()) );
HXLINE(  59)		::Array< ::Dynamic> nodes = this->getNodes();
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			while((_g < nodes->length)){
HXLINE(  60)				 ::haxe::ui::containers::TreeViewNode node = nodes->__get(_g).StaticCast<  ::haxe::ui::containers::TreeViewNode >();
HXDLIN(  60)				_g = (_g + 1);
HXLINE(  61)				if (node->matchesPathPart(part,field)) {
HXLINE(  62)					if ((parts->length == 0)) {
HXLINE(  63)						foundNode = node;
            					}
            					else {
HXLINE(  65)						foundNode = node->findNodeByPath(parts->join(HX_("/",2f,00,00,00)),field);
            					}
HXLINE(  67)					goto _hx_goto_7;
            				}
            			}
            			_hx_goto_7:;
            		}
HXLINE(  71)		return foundNode;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TreeViewNode_obj,findNodeByPath,return )

bool TreeViewNode_obj::matchesPathPart(::String part,::String field){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_74_matchesPathPart)
HXLINE(  75)		if (::hx::IsNull( field )) {
HXLINE(  76)			if (::Reflect_obj::hasField(this->get_data(),HX_("id",db,5b,00,00))) {
HXLINE(  77)				field = HX_("id",db,5b,00,00);
            			}
            			else {
HXLINE(  78)				if (::Reflect_obj::hasField(this->get_data(),HX_("nodeId",7d,4e,22,27))) {
HXLINE(  79)					field = HX_("nodeId",7d,4e,22,27);
            				}
            				else {
HXLINE(  81)					field = HX_("text",ad,cc,f9,4c);
            				}
            			}
            		}
HXLINE(  85)		if ((::Reflect_obj::hasField(this->get_data(),field) == false)) {
HXLINE(  86)			return false;
            		}
HXLINE(  89)		return (::Std_obj::string(::Reflect_obj::field(this->get_data(),field)) == part);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TreeViewNode_obj,matchesPathPart,return )

::Array< ::Dynamic> TreeViewNode_obj::getNodes(){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_92_getNodes)
HXLINE(  93)		::Array< ::Dynamic> nodes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  94)		::Array< ::Dynamic> internalNodes = this->getNodesInternal();
HXLINE(  95)		{
HXLINE(  95)			int _g = 0;
HXDLIN(  95)			while((_g < internalNodes->length)){
HXLINE(  95)				 ::haxe::ui::core::Component node = internalNodes->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  95)				_g = (_g + 1);
HXLINE(  96)				nodes->push(( ( ::haxe::ui::containers::TreeViewNode)(node) ));
            			}
            		}
HXLINE(  98)		return nodes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,getNodes,return )

bool TreeViewNode_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_102_get_selected)
HXLINE( 103)		 ::haxe::ui::containers::TreeView treeview = ( ( ::haxe::ui::containers::TreeView)(this->findAncestor(null(),::hx::ClassOf< ::haxe::ui::containers::TreeView >(),null())) );
HXLINE( 104)		return ::hx::IsInstanceEq( treeview->get_selectedNode(),::hx::ObjectPtr<OBJ_>(this) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,get_selected,return )

bool TreeViewNode_obj::set_selected(bool value){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_106_set_selected)
HXLINE( 107)		 ::haxe::ui::containers::TreeView treeview = ( ( ::haxe::ui::containers::TreeView)(this->findAncestor(null(),::hx::ClassOf< ::haxe::ui::containers::TreeView >(),null())) );
HXLINE( 108)		treeview->set_selectedNode(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 109)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewNode_obj,set_selected,return )

 ::Dynamic TreeViewNode_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_115_get_data)
HXDLIN( 115)		return this->_data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,get_data,return )

 ::Dynamic TreeViewNode_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_117_set_data)
HXLINE( 118)		if (::hx::IsEq( value,this->_data )) {
HXLINE( 119)			return value;
            		}
HXLINE( 122)		this->_data = value;
HXLINE( 123)		this->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE( 124)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewNode_obj,set_data,return )

::String TreeViewNode_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_128_get_text)
HXDLIN( 128)		return ( (::String)(this->_data->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
            	}


::String TreeViewNode_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_130_set_text)
HXLINE( 131)		if (::hx::IsNull( this->_data )) {
HXLINE( 132)			this->_data =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE( 134)		this->_data->__SetField(HX_("text",ad,cc,f9,4c),value,::hx::paccDynamic);
HXLINE( 135)		this->set_data(::Reflect_obj::copy(this->_data));
HXLINE( 136)		return value;
            	}


::String TreeViewNode_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_140_get_icon)
HXDLIN( 140)		return ( (::String)(this->_data->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) );
            	}


::String TreeViewNode_obj::set_icon(::String value){
            	HX_STACKFRAME(&_hx_pos_54a31cdaf0633586_142_set_icon)
HXLINE( 143)		if (::hx::IsNull( this->_data )) {
HXLINE( 144)			this->_data =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE( 146)		this->_data->__SetField(HX_("icon",79,e7,b2,45),value,::hx::paccDynamic);
HXLINE( 147)		this->set_data(::Reflect_obj::copy(this->_data));
HXLINE( 148)		return value;
            	}


void TreeViewNode_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_679ff0f9fead2ede_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::_TreeViewNode::TreeViewNodeEvents >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::_TreeViewNode::TreeViewNodeBuilder >();
            	}


void TreeViewNode_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_679ff0f9fead2ede_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("expanded",39,11,cf,f9),::hx::ClassOf< ::haxe::ui::containers::_TreeViewNode::Expanded >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXLINE( 578)		this->behaviours->_hx_register(HX_("addNode",c3,4c,47,85),::hx::ClassOf< ::haxe::ui::containers::_TreeViewNode::AddNode >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("removeNode",66,44,29,c6),::hx::ClassOf< ::haxe::ui::containers::_TreeViewNode::RemoveNode >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("clearNodes",64,f7,c8,74),::hx::ClassOf< ::haxe::ui::containers::_TreeViewNode::ClearNodes >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("getNodesInternal",18,9e,b4,dd),::hx::ClassOf< ::haxe::ui::containers::_TreeViewNode::GetNodesInternal >(),null());
            	}


bool TreeViewNode_obj::get_expanded(){
            	HX_STACKFRAME(&_hx_pos_679ff0f9fead2ede_475_get_expanded)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("expanded",39,11,cf,f9)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,get_expanded,return )

bool TreeViewNode_obj::set_expanded(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_679ff0f9fead2ede_520_set_expanded)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("expanded",39,11,cf,f9),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("expanded",39,11,cf,f9)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewNode_obj,set_expanded,return )

 ::haxe::ui::core::ComponentContainer TreeViewNode_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_3f1788001432f1e3_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::TreeViewNode c = ( ( ::haxe::ui::containers::TreeViewNode)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer TreeViewNode_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_679ff0f9fead2ede_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::TreeViewNode_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< TreeViewNode_obj > TreeViewNode_obj::__new() {
	::hx::ObjectPtr< TreeViewNode_obj > __this = new TreeViewNode_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TreeViewNode_obj > TreeViewNode_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TreeViewNode_obj *__this = (TreeViewNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewNode_obj), true, "haxe.ui.containers.TreeViewNode"));
	*(void **)__this = TreeViewNode_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TreeViewNode_obj::TreeViewNode_obj()
{
}

void TreeViewNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeViewNode);
	HX_MARK_MEMBER_NAME(parentNode,"parentNode");
	HX_MARK_MEMBER_NAME(_data,"_data");
	 ::haxe::ui::containers::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentNode,"parentNode");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	 ::haxe::ui::containers::Box_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_data() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addNode") ) { return ::hx::Val( addNode_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodePath") ) { return ::hx::Val( nodePath_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNodes") ) { return ::hx::Val( getNodes_dyn() ); }
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selected() ); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return ::hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return ::hx::Val( set_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"expanded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_expanded() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeNode") ) { return ::hx::Val( removeNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearNodes") ) { return ::hx::Val( clearNodes_dyn() ); }
		if (HX_FIELD_EQ(inName,"parentNode") ) { return ::hx::Val( parentNode ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return ::hx::Val( set_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_expanded") ) { return ::hx::Val( get_expanded_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_expanded") ) { return ::hx::Val( set_expanded_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findNodeByPath") ) { return ::hx::Val( findNodeByPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"matchesPathPart") ) { return ::hx::Val( matchesPathPart_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNodesInternal") ) { return ::hx::Val( getNodesInternal_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"expanded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_expanded(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentNode") ) { parentNode=inValue.Cast<  ::haxe::ui::containers::TreeViewNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parentNode",4c,18,1c,e8));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("expanded",39,11,cf,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TreeViewNode */ ,(int)offsetof(TreeViewNode_obj,parentNode),HX_("parentNode",4c,18,1c,e8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TreeViewNode_obj,_data),HX_("_data",09,72,74,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewNode_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewNode_obj_sMemberFields[] = {
	HX_("addNode",c3,4c,47,85),
	HX_("removeNode",66,44,29,c6),
	HX_("clearNodes",64,f7,c8,74),
	HX_("getNodesInternal",18,9e,b4,dd),
	HX_("parentNode",4c,18,1c,e8),
	HX_("nodePath",c7,44,cf,f3),
	HX_("findNodeByPath",57,40,64,d5),
	HX_("matchesPathPart",4b,d0,e1,4e),
	HX_("getNodes",bb,c7,95,ff),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("_data",09,72,74,f5),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_icon",02,a3,6d,c5),
	HX_("set_icon",76,fc,ca,73),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_expanded",42,c5,e8,ae),
	HX_("set_expanded",b6,e8,e1,c3),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class TreeViewNode_obj::__mClass;

void TreeViewNode_obj::__register()
{
	TreeViewNode_obj _hx_dummy;
	TreeViewNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.TreeViewNode",af,e3,c6,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
