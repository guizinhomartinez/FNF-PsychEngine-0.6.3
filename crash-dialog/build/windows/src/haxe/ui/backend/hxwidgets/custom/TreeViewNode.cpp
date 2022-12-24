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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TreeViewIcons
#include <haxe/ui/backend/hxwidgets/TreeViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewBuilder
#include <haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TreeViewNode
#include <haxe/ui/backend/hxwidgets/custom/TreeViewNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_066b1635387226d3_10_new,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","new",0x73ce6cf9,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.new","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",10,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_15_applyExpanded,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","applyExpanded",0x184826a0,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.applyExpanded","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",15,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_21_set_data,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","set_data",0xfba583ee,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.set_data","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",21,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_30_updateNodeFromData,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","updateNodeFromData",0x53927006,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.updateNodeFromData","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",30,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_46_get_expanded,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","get_expanded",0x49bc4d89,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.get_expanded","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",46,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_54_set_expanded,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","set_expanded",0x5eb570fd,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.set_expanded","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",54,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_69_getNodesInternal,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","getNodesInternal",0x3e5f55df,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.getNodesInternal","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",69,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_83_get_selected,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","get_selected",0x015a66ab,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.get_selected","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",83,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_89_set_selected,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","set_selected",0x16538a1f,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.set_selected","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",89,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_cd40792116e72f3f_442_registerBehaviours,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","registerBehaviours",0x1f051f60,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d21f974eec3cbbd0_565_cloneComponent,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","cloneComponent",0xc35251a7,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_cd40792116e72f3f_423_self,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","self",0xe41ef4d3,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{

void TreeViewNode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_10_new)
HXLINE(  45)		this->_expand = null();
HXLINE(  12)		this->dataViewItem = null();
HXLINE(  11)		this->treeView = null();
HXLINE(  10)		super::__construct();
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
		if (inClassId<=(int)0x4ba87886) {
			if (inClassId<=(int)0x31fbae07) {
				if (inClassId<=(int)0x2eb1d3e1) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x2eb1d3e1;
				} else {
					return inClassId==(int)0x31fbae07;
				}
			} else {
				return inClassId==(int)0x4ba87886;
			}
		} else {
			if (inClassId<=(int)0x72c347e4) {
				return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
			} else {
				return inClassId==(int)0x7ec24579;
			}
		}
	}
}

void TreeViewNode_obj::applyExpanded(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_15_applyExpanded)
HXDLIN(  15)		if (::hx::IsNotNull( this->_expand )) {
HXLINE(  16)			this->set_expanded(( (bool)(this->_expand) ));
HXLINE(  17)			this->_expand = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,applyExpanded,(void))

 ::Dynamic TreeViewNode_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_21_set_data)
HXLINE(  22)		if (::hx::IsEq( value,this->_data )) {
HXLINE(  23)			return value;
            		}
HXLINE(  25)		 ::Dynamic r = this->super::set_data(value);
HXLINE(  26)		this->updateNodeFromData();
HXLINE(  27)		return r;
            	}


void TreeViewNode_obj::updateNodeFromData(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_30_updateNodeFromData)
HXLINE(  31)		bool _hx_tmp;
HXDLIN(  31)		bool _hx_tmp1;
HXDLIN(  31)		if (::hx::IsNotNull( this->treeView )) {
HXLINE(  31)			_hx_tmp1 = ::hx::IsNull( this->dataViewItem );
            		}
            		else {
HXLINE(  31)			_hx_tmp1 = true;
            		}
HXDLIN(  31)		if (!(_hx_tmp1)) {
HXLINE(  31)			_hx_tmp = ::hx::IsNull( this->treeView->get_window() );
            		}
            		else {
HXLINE(  31)			_hx_tmp = true;
            		}
HXDLIN(  31)		if (_hx_tmp) {
HXLINE(  32)			return;
            		}
HXLINE(  35)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->treeView->get_window());
HXLINE(  36)		::String text = ( (::String)(this->_data->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE(  37)		::String icon = ( (::String)(this->_data->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) );
HXLINE(  39)		treeCtrl->setItemText(this->dataViewItem,text);
HXLINE(  40)		if (::hx::IsNotNull( icon )) {
HXLINE(  41)			 ::hx::widgets::DataViewItem _hx_tmp = this->dataViewItem;
HXDLIN(  41)			treeCtrl->setItemIconIndex(_hx_tmp,::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(this->treeView,icon));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,updateNodeFromData,(void))

bool TreeViewNode_obj::get_expanded(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_46_get_expanded)
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		bool _hx_tmp1;
HXDLIN(  47)		if (::hx::IsNotNull( this->treeView )) {
HXLINE(  47)			_hx_tmp1 = ::hx::IsNull( this->dataViewItem );
            		}
            		else {
HXLINE(  47)			_hx_tmp1 = true;
            		}
HXDLIN(  47)		if (!(_hx_tmp1)) {
HXLINE(  47)			_hx_tmp = ::hx::IsNull( this->treeView->get_window() );
            		}
            		else {
HXLINE(  47)			_hx_tmp = true;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  48)			return ( (bool)(this->_expand) );
            		}
HXLINE(  51)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->treeView->get_window());
HXLINE(  52)		return treeCtrl->isExpanded(this->dataViewItem);
            	}


bool TreeViewNode_obj::set_expanded(bool value){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_54_set_expanded)
HXLINE(  55)		bool _hx_tmp;
HXDLIN(  55)		bool _hx_tmp1;
HXDLIN(  55)		if (::hx::IsNotNull( this->treeView )) {
HXLINE(  55)			_hx_tmp1 = ::hx::IsNull( this->dataViewItem );
            		}
            		else {
HXLINE(  55)			_hx_tmp1 = true;
            		}
HXDLIN(  55)		if (!(_hx_tmp1)) {
HXLINE(  55)			_hx_tmp = ::hx::IsNull( this->treeView->get_window() );
            		}
            		else {
HXLINE(  55)			_hx_tmp = true;
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  56)			this->_expand = value;
HXLINE(  57)			return value;
            		}
HXLINE(  60)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->treeView->get_window());
HXLINE(  61)		if (value) {
HXLINE(  62)			treeCtrl->expand(this->dataViewItem);
            		}
            		else {
HXLINE(  64)			treeCtrl->collapse(this->dataViewItem);
            		}
HXLINE(  66)		return value;
            	}


::Array< ::Dynamic> TreeViewNode_obj::getNodesInternal(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_69_getNodesInternal)
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		bool _hx_tmp1;
HXDLIN(  70)		if (::hx::IsNotNull( this->treeView )) {
HXLINE(  70)			_hx_tmp1 = ::hx::IsNull( this->dataViewItem );
            		}
            		else {
HXLINE(  70)			_hx_tmp1 = true;
            		}
HXDLIN(  70)		if (!(_hx_tmp1)) {
HXLINE(  70)			_hx_tmp = ::hx::IsNull( this->treeView->get_window() );
            		}
            		else {
HXLINE(  70)			_hx_tmp = true;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  74)		::Array< ::Dynamic> nodes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  75)		 ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder builder = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder >::cast(this->treeView->_compositeBuilder);
HXLINE(  76)		::Array< ::Dynamic> internalNodes = builder->dataViewItemChildren(this->dataViewItem);
HXLINE(  77)		{
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			while((_g < internalNodes->length)){
HXLINE(  77)				 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node = internalNodes->__get(_g).StaticCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >();
HXDLIN(  77)				_g = (_g + 1);
HXLINE(  78)				nodes->push(node);
            			}
            		}
HXLINE(  80)		return nodes;
            	}


bool TreeViewNode_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_83_get_selected)
HXLINE(  84)		if (::hx::IsNull( this->treeView )) {
HXLINE(  85)			return false;
            		}
HXLINE(  87)		return ::hx::IsInstanceEq( this->treeView->get_selectedNode(),::hx::ObjectPtr<OBJ_>(this) );
            	}


bool TreeViewNode_obj::set_selected(bool value){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_89_set_selected)
HXLINE(  90)		if (::hx::IsNull( this->treeView )) {
HXLINE(  91)			return value;
            		}
HXLINE(  94)		this->treeView->set_selectedNode(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  95)		return value;
            	}


void TreeViewNode_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_cd40792116e72f3f_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer TreeViewNode_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_d21f974eec3cbbd0_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode c = ( ( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode)(this->super::cloneComponent()) );
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
            	HX_GC_STACKFRAME(&_hx_pos_cd40792116e72f3f_423_self)
HXDLIN( 423)		return  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< TreeViewNode_obj > TreeViewNode_obj::__new() {
	::hx::ObjectPtr< TreeViewNode_obj > __this = new TreeViewNode_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TreeViewNode_obj > TreeViewNode_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TreeViewNode_obj *__this = (TreeViewNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewNode_obj), true, "haxe.ui.backend.hxwidgets.custom.TreeViewNode"));
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
	HX_MARK_MEMBER_NAME(treeView,"treeView");
	HX_MARK_MEMBER_NAME(dataViewItem,"dataViewItem");
	HX_MARK_MEMBER_NAME(_expand,"_expand");
	 ::haxe::ui::containers::TreeViewNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(treeView,"treeView");
	HX_VISIT_MEMBER_NAME(dataViewItem,"dataViewItem");
	HX_VISIT_MEMBER_NAME(_expand,"_expand");
	 ::haxe::ui::containers::TreeViewNode_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_expand") ) { return ::hx::Val( _expand ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"treeView") ) { return ::hx::Val( treeView ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataViewItem") ) { return ::hx::Val( dataViewItem ); }
		if (HX_FIELD_EQ(inName,"get_expanded") ) { return ::hx::Val( get_expanded_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_expanded") ) { return ::hx::Val( set_expanded_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return ::hx::Val( set_selected_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"applyExpanded") ) { return ::hx::Val( applyExpanded_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNodesInternal") ) { return ::hx::Val( getNodesInternal_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateNodeFromData") ) { return ::hx::Val( updateNodeFromData_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_expand") ) { _expand=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"treeView") ) { treeView=inValue.Cast<  ::haxe::ui::containers::TreeView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataViewItem") ) { dataViewItem=inValue.Cast<  ::hx::widgets::DataViewItem >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("treeView",e3,fe,16,32));
	outFields->push(HX_("dataViewItem",62,06,d8,ee));
	outFields->push(HX_("_expand",f9,ff,e9,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TreeView */ ,(int)offsetof(TreeViewNode_obj,treeView),HX_("treeView",e3,fe,16,32)},
	{::hx::fsObject /*  ::hx::widgets::DataViewItem */ ,(int)offsetof(TreeViewNode_obj,dataViewItem),HX_("dataViewItem",62,06,d8,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TreeViewNode_obj,_expand),HX_("_expand",f9,ff,e9,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewNode_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewNode_obj_sMemberFields[] = {
	HX_("treeView",e3,fe,16,32),
	HX_("dataViewItem",62,06,d8,ee),
	HX_("applyExpanded",c7,70,04,3a),
	HX_("set_data",27,6b,7b,70),
	HX_("updateNodeFromData",7f,f8,f4,68),
	HX_("_expand",f9,ff,e9,32),
	HX_("get_expanded",42,c5,e8,ae),
	HX_("set_expanded",b6,e8,e1,c3),
	HX_("getNodesInternal",18,9e,b4,dd),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class TreeViewNode_obj::__mClass;

void TreeViewNode_obj::__register()
{
	TreeViewNode_obj _hx_dummy;
	TreeViewNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.custom.TreeViewNode",87,7c,0c,f4);
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
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom
