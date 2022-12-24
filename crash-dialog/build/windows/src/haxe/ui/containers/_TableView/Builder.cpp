#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Column
#include <haxe/ui/components/Column.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_Builder
#include <haxe/ui/containers/_TableView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_CompoundItemRenderer
#include <haxe/ui/containers/_TableView/CompoundItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_events_SortEvent
#include <haxe/ui/events/SortEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3efc1cade498a4d7_309_new,"haxe.ui.containers._TableView.Builder","new",0x4d24a4bd,"haxe.ui.containers._TableView.Builder.new","haxe/ui/containers/TableView.hx",309,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_315_create,"haxe.ui.containers._TableView.Builder","create",0x6ff3eabf,"haxe.ui.containers._TableView.Builder.create","haxe/ui/containers/TableView.hx",315,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_318_onInitialize,"haxe.ui.containers._TableView.Builder","onInitialize",0xe4810b52,"haxe.ui.containers._TableView.Builder.onInitialize","haxe/ui/containers/TableView.hx",318,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_329_onReady,"haxe.ui.containers._TableView.Builder","onReady",0xf10705a1,"haxe.ui.containers._TableView.Builder.onReady","haxe/ui/containers/TableView.hx",329,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_343_createContentContainer,"haxe.ui.containers._TableView.Builder","createContentContainer",0x27564da7,"haxe.ui.containers._TableView.Builder.createContentContainer","haxe/ui/containers/TableView.hx",343,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_349_addComponent,"haxe.ui.containers._TableView.Builder","addComponent",0x2e2a4a5f,"haxe.ui.containers._TableView.Builder.addComponent","haxe/ui/containers/TableView.hx",349,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_380_onColumnAdded,"haxe.ui.containers._TableView.Builder","onColumnAdded",0x8ce355c8,"haxe.ui.containers._TableView.Builder.onColumnAdded","haxe/ui/containers/TableView.hx",380,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_390_onSortChanged,"haxe.ui.containers._TableView.Builder","onSortChanged",0x8e0760f4,"haxe.ui.containers._TableView.Builder.onSortChanged","haxe/ui/containers/TableView.hx",390,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_402_removeComponent,"haxe.ui.containers._TableView.Builder","removeComponent",0x541ef7b6,"haxe.ui.containers._TableView.Builder.removeComponent","haxe/ui/containers/TableView.hx",402,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_410_createRenderer,"haxe.ui.containers._TableView.Builder","createRenderer",0xb398c322,"haxe.ui.containers._TableView.Builder.createRenderer","haxe/ui/containers/TableView.hx",410,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_428_buildDefaultRenderer,"haxe.ui.containers._TableView.Builder","buildDefaultRenderer",0x0feee699,"haxe.ui.containers._TableView.Builder.buildDefaultRenderer","haxe/ui/containers/TableView.hx",428,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_442_fillExistingRenderer,"haxe.ui.containers._TableView.Builder","fillExistingRenderer",0xfeee2e94,"haxe.ui.containers._TableView.Builder.fillExistingRenderer","haxe/ui/containers/TableView.hx",442,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_498_verticalConstraintModifier,"haxe.ui.containers._TableView.Builder","verticalConstraintModifier",0x179e0a2d,"haxe.ui.containers._TableView.Builder.verticalConstraintModifier","haxe/ui/containers/TableView.hx",498,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_507_onVirtualChanged,"haxe.ui.containers._TableView.Builder","onVirtualChanged",0xce4ee52b,"haxe.ui.containers._TableView.Builder.onVirtualChanged","haxe/ui/containers/TableView.hx",507,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_511_get_virtualHorizontal,"haxe.ui.containers._TableView.Builder","get_virtualHorizontal",0xbc8aed43,"haxe.ui.containers._TableView.Builder.get_virtualHorizontal","haxe/ui/containers/TableView.hx",511,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_515_addItemRendererClass,"haxe.ui.containers._TableView.Builder","addItemRendererClass",0x40bb9684,"haxe.ui.containers._TableView.Builder.addItemRendererClass","haxe/ui/containers/TableView.hx",515,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void Builder_obj::__construct( ::haxe::ui::containers::TableView tableview){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_309_new)
HXLINE( 310)		super::__construct(tableview);
HXLINE( 311)		this->_tableview = tableview;
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17e93bfd) {
		if (inClassId<=(int)0x0472fd8d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
		} else {
			return inClassId==(int)0x17e93bfd;
		}
	} else {
		return inClassId==(int)0x3aec497b;
	}
}

void Builder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_315_create)
HXDLIN( 315)		::String _hx_tmp;
HXDLIN( 315)		if (this->_tableview->get_virtual()) {
HXDLIN( 315)			_hx_tmp = HX_("absolute",77,ce,95,c3);
            		}
            		else {
HXDLIN( 315)			_hx_tmp = HX_("vertical",76,bc,15,6a);
            		}
HXDLIN( 315)		this->createContentContainer(_hx_tmp);
            	}


void Builder_obj::onInitialize(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_318_onInitialize)
HXLINE( 319)		if (::hx::IsNull( this->_header )) {
HXLINE( 320)			return;
            		}
HXLINE( 322)		if (::hx::IsNull( this->_tableview->get_itemRenderer() )) {
HXLINE( 323)			this->buildDefaultRenderer();
            		}
            		else {
HXLINE( 325)			this->fillExistingRenderer();
            		}
            	}


void Builder_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_329_onReady)
HXLINE( 330)		if (::hx::IsNull( this->_header )) {
HXLINE( 331)			return;
            		}
HXLINE( 333)		if (::hx::IsNull( this->_tableview->get_itemRenderer() )) {
HXLINE( 334)			this->buildDefaultRenderer();
            		}
            		else {
HXLINE( 336)			this->fillExistingRenderer();
            		}
HXLINE( 339)		{
HXLINE( 339)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 339)			bool _hx_tmp;
HXDLIN( 339)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 339)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 339)				_hx_tmp = true;
            			}
HXDLIN( 339)			if (!(_hx_tmp)) {
HXLINE( 339)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


void Builder_obj::createContentContainer(::String layoutName){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_343_createContentContainer)
HXDLIN( 343)		if (::hx::IsNull( this->_contents )) {
HXLINE( 344)			this->super::createContentContainer(layoutName);
HXLINE( 345)			this->_contents->addClass(HX_("tableview-contents",74,2a,d3,78),null(),null());
            		}
            	}


 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_3efc1cade498a4d7_349_addComponent)
HXLINE( 350)		 ::haxe::ui::core::Component r = null();
HXLINE( 351)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 352)			 ::haxe::ui::core::ItemRenderer itemRenderer = this->_tableview->get_itemRenderer();
HXLINE( 353)			if (::hx::IsNull( itemRenderer )) {
HXLINE( 354)				itemRenderer =  ::haxe::ui::containers::_TableView::CompoundItemRenderer_obj::__alloc( HX_CTX );
HXLINE( 355)				this->_tableview->set_itemRenderer(itemRenderer);
            			}
HXLINE( 357)			itemRenderer->addComponent(child);
HXLINE( 359)			return child;
            		}
            		else {
HXLINE( 360)			if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::Header >())) {
HXLINE( 361)				this->_header = ::hx::TCast<  ::haxe::ui::containers::Header >::cast(child);
HXLINE( 362)				this->_header->registerEvent(HX_("componentadded",e3,16,1d,d8),this->onColumnAdded_dyn(),null());
HXLINE( 363)				this->_header->registerEvent(HX_("sortchanged",56,51,5d,eb),this->onSortChanged_dyn(),null());
HXLINE( 373)				r = null();
            			}
            			else {
HXLINE( 375)				r = this->super::addComponent(child);
            			}
            		}
HXLINE( 377)		return r;
            	}


void Builder_obj::onColumnAdded( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_380_onColumnAdded)
HXLINE( 381)		if (::hx::IsNull( this->_tableview->get_itemRenderer() )) {
HXLINE( 382)			this->buildDefaultRenderer();
            		}
            		else {
HXLINE( 384)			this->fillExistingRenderer();
            		}
HXLINE( 387)		{
HXLINE( 387)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 387)			bool _hx_tmp;
HXDLIN( 387)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 387)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 387)				_hx_tmp = true;
            			}
HXDLIN( 387)			if (!(_hx_tmp)) {
HXLINE( 387)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onColumnAdded,(void))

void Builder_obj::onSortChanged( ::haxe::ui::events::SortEvent e){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_390_onSortChanged)
HXLINE( 391)		this->_tableview->dispatch(e);
HXLINE( 392)		if ((e->canceled == false)) {
HXLINE( 393)			 ::haxe::ui::components::Column column = ::hx::TCast<  ::haxe::ui::components::Column >::cast(e->target);
HXLINE( 394)			::String field = column->get_id();
HXLINE( 395)			if (::hx::IsNotNull( column->sortField )) {
HXLINE( 396)				field = column->sortField;
            			}
HXLINE( 398)			this->_tableview->get_dataSource()->sort(field,e->direction);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onSortChanged,(void))

 ::haxe::ui::core::Component Builder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_402_removeComponent)
HXLINE( 403)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::Header >()) == true)) {
HXLINE( 404)			this->_header = null();
HXLINE( 405)			return null();
            		}
HXLINE( 407)		return this->super::removeComponent(child,dispose,invalidate);
            	}


 ::haxe::ui::core::ItemRenderer Builder_obj::createRenderer(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_3efc1cade498a4d7_410_createRenderer)
HXLINE( 411)		 ::haxe::ui::core::ItemRenderer itemRenderer = null();
HXLINE( 412)		if (::hx::IsNull( this->_tableview->get_itemRendererClass() )) {
HXLINE( 413)			itemRenderer =  ::haxe::ui::core::ItemRenderer_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 415)			itemRenderer = ( ( ::haxe::ui::core::ItemRenderer)(::Type_obj::createInstance(this->_tableview->get_itemRendererClass(),::cpp::VirtualArray_obj::__new(0))) );
            		}
HXLINE( 418)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 418)		if (::hx::IsNull( itemRenderer->_children )) {
HXLINE( 418)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 418)			_hx_tmp = itemRenderer->_children;
            		}
HXDLIN( 418)		if ((_hx_tmp->length == 0)) {
HXLINE( 419)			 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 420)			label->set_id(id);
HXLINE( 421)			label->set_percentWidth(100);
HXLINE( 422)			label->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE( 423)			itemRenderer->addComponent(label);
            		}
HXLINE( 425)		return itemRenderer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,createRenderer,return )

void Builder_obj::buildDefaultRenderer(){
            	HX_GC_STACKFRAME(&_hx_pos_3efc1cade498a4d7_428_buildDefaultRenderer)
HXLINE( 429)		 ::haxe::ui::containers::_TableView::CompoundItemRenderer r =  ::haxe::ui::containers::_TableView::CompoundItemRenderer_obj::__alloc( HX_CTX );
HXLINE( 430)		if (::hx::IsNotNull( this->_header )) {
HXLINE( 431)			int _g = 0;
HXDLIN( 431)			::Array< ::Dynamic> _g1 = this->_header->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Column >(),null());
HXDLIN( 431)			while((_g < _g1->length)){
HXLINE( 431)				 ::haxe::ui::components::Column column = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Column >();
HXDLIN( 431)				_g = (_g + 1);
HXLINE( 432)				if (::hx::IsNull( column->get_id() )) {
HXLINE( 433)					continue;
            				}
HXLINE( 435)				 ::haxe::ui::core::ItemRenderer itemRenderer = this->createRenderer(column->get_id());
HXLINE( 436)				r->addComponent(itemRenderer);
            			}
            		}
HXLINE( 439)		this->_tableview->set_itemRenderer(r);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,buildDefaultRenderer,(void))

void Builder_obj::fillExistingRenderer(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_442_fillExistingRenderer)
HXLINE( 443)		int i = 0;
HXLINE( 444)		{
HXLINE( 444)			int _g = 0;
HXDLIN( 444)			::Array< ::Dynamic> _g1 = this->_header->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Column >(),null());
HXDLIN( 444)			while((_g < _g1->length)){
HXLINE( 444)				 ::haxe::ui::components::Column column = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Column >();
HXDLIN( 444)				_g = (_g + 1);
HXLINE( 445)				if (::hx::IsNull( column->get_id() )) {
HXLINE( 446)					continue;
            				}
HXLINE( 448)				 ::haxe::ui::core::ItemRenderer existing = this->_tableview->get_itemRenderer();
HXDLIN( 448)				 ::haxe::ui::core::ItemRenderer existing1 = existing->findComponent(column->get_id(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),true,null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 449)				if (::hx::IsNull( existing1 )) {
HXLINE( 450)					 ::haxe::ui::core::ItemRenderer temp = this->_tableview->get_itemRenderer();
HXDLIN( 450)					 ::haxe::ui::core::Component temp1 = temp->findComponent(column->get_id(),::hx::ClassOf< ::haxe::ui::core::Component >(),true,null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 451)					if (::hx::IsNotNull( temp1 )) {
HXLINE( 452)						if (::Std_obj::isOfType(temp1,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 453)							existing1 = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(temp1);
            						}
            						else {
HXLINE( 455)							existing1 = temp1->findAncestor(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
            						}
HXLINE( 457)						this->_tableview->get_itemRenderer()->setComponentIndex(existing1,i);
            					}
            					else {
HXLINE( 459)						 ::haxe::ui::core::ItemRenderer itemRenderer = this->createRenderer(column->get_id());
HXLINE( 460)						this->_tableview->get_itemRenderer()->addComponentAt(itemRenderer,i);
            					}
            				}
            				else {
HXLINE( 463)					this->_tableview->get_itemRenderer()->setComponentIndex(existing1,i);
            				}
HXLINE( 465)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,fillExistingRenderer,(void))

Float Builder_obj::verticalConstraintModifier(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_498_verticalConstraintModifier)
HXLINE( 499)		if (::hx::IsNull( this->_header )) {
HXLINE( 500)			return ( (Float)(0) );
            		}
HXLINE( 503)		return ( (Float)(this->_header->get_height()) );
            	}


void Builder_obj::onVirtualChanged(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_507_onVirtualChanged)
HXDLIN( 507)		 ::haxe::ui::containers::Box _hx_tmp = this->_contents;
HXDLIN( 507)		::String _hx_tmp1;
HXDLIN( 507)		if (this->_tableview->get_virtual()) {
HXDLIN( 507)			_hx_tmp1 = HX_("absolute",77,ce,95,c3);
            		}
            		else {
HXDLIN( 507)			_hx_tmp1 = HX_("vertical",76,bc,15,6a);
            		}
HXDLIN( 507)		_hx_tmp->set_layoutName(_hx_tmp1);
            	}


bool Builder_obj::get_virtualHorizontal(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_511_get_virtualHorizontal)
HXDLIN( 511)		return false;
            	}


void Builder_obj::addItemRendererClass( ::haxe::ui::core::Component child,::String className,::hx::Null< bool >  __o_add){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,bool,add,::String,className) HXARGC(1)
            		bool _hx_run( ::haxe::ui::core::Component c){
            			HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_515_addItemRendererClass)
HXLINE( 516)			if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 517)				if ((add == true)) {
HXLINE( 518)					c->addClass(className,null(),null());
            				}
            				else {
HXLINE( 520)					c->removeClass(className,null(),null());
            				}
            			}
            			else {
HXLINE( 523)				c->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 523)				{
            				}
            			}
HXLINE( 525)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		bool add = __o_add.Default(true);
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_515_addItemRendererClass)
HXDLIN( 515)		child->walkComponents( ::Dynamic(new _hx_Closure_0(add,className)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Builder_obj,addItemRendererClass,(void))


::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::TableView tableview) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(tableview);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TableView tableview) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers._TableView.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(tableview);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_tableview,"_tableview");
	HX_MARK_MEMBER_NAME(_header,"_header");
	 ::haxe::ui::containers::ScrollViewBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tableview,"_tableview");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	 ::haxe::ui::containers::ScrollViewBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { return ::hx::Val( _header ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tableview") ) { return ::hx::Val( _tableview ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onColumnAdded") ) { return ::hx::Val( onColumnAdded_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSortChanged") ) { return ::hx::Val( onSortChanged_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createRenderer") ) { return ::hx::Val( createRenderer_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onVirtualChanged") ) { return ::hx::Val( onVirtualChanged_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"buildDefaultRenderer") ) { return ::hx::Val( buildDefaultRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"fillExistingRenderer") ) { return ::hx::Val( fillExistingRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"addItemRendererClass") ) { return ::hx::Val( addItemRendererClass_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_virtualHorizontal") ) { return ::hx::Val( get_virtualHorizontal_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createContentContainer") ) { return ::hx::Val( createContentContainer_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"verticalConstraintModifier") ) { return ::hx::Val( verticalConstraintModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast<  ::haxe::ui::containers::Header >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tableview") ) { _tableview=inValue.Cast<  ::haxe::ui::containers::TableView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tableview",34,85,ad,2c));
	outFields->push(HX_("_header",2c,1b,77,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TableView */ ,(int)offsetof(Builder_obj,_tableview),HX_("_tableview",34,85,ad,2c)},
	{::hx::fsObject /*  ::haxe::ui::containers::Header */ ,(int)offsetof(Builder_obj,_header),HX_("_header",2c,1b,77,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_tableview",34,85,ad,2c),
	HX_("_header",2c,1b,77,6b),
	HX_("create",fc,66,0f,7c),
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("onReady",c4,3e,f8,7c),
	HX_("createContentContainer",e4,d3,42,a7),
	HX_("addComponent",5c,12,a8,0e),
	HX_("onColumnAdded",2b,8b,74,1a),
	HX_("onSortChanged",57,96,98,1b),
	HX_("removeComponent",d9,8b,72,50),
	HX_("createRenderer",5f,44,16,05),
	HX_("buildDefaultRenderer",96,73,a0,56),
	HX_("fillExistingRenderer",91,bb,9f,45),
	HX_("verticalConstraintModifier",ea,f2,b6,ce),
	HX_("onVirtualChanged",a8,ef,1c,9b),
	HX_("get_virtualHorizontal",a6,bd,34,51),
	HX_("addItemRendererClass",81,23,6d,87),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.Builder",4b,82,f2,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
