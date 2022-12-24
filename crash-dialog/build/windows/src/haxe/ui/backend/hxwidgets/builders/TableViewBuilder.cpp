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
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TableViewBuilder
#include <haxe/ui/backend/hxwidgets/builders/TableViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_NumberStepper
#include <haxe/ui/components/NumberStepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Switch
#include <haxe/ui/components/Switch.h>
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
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewBitmapRenderer
#include <hx/widgets/DataViewBitmapRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewColumn
#include <hx/widgets/DataViewColumn.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewCtrl
#include <hx/widgets/DataViewCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewCustomRenderer
#include <hx/widgets/DataViewCustomRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewEvent
#include <hx/widgets/DataViewEvent.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewItem
#include <hx/widgets/DataViewItem.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewListCtrl
#include <hx/widgets/DataViewListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewProgressRenderer
#include <hx/widgets/DataViewProgressRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewSpinRenderer
#include <hx/widgets/DataViewSpinRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewTextRenderer
#include <hx/widgets/DataViewTextRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewToggleRenderer
#include <hx/widgets/DataViewToggleRenderer.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_HeaderColumn
#include <hx/widgets/HeaderColumn.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_SettableHeaderColumn
#include <hx/widgets/SettableHeaderColumn.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7cc01605335f5667_42_new,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder","new",0xe36e7d55,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder.new","haxe/ui/backend/hxwidgets/builders/TableViewBuilder.hx",42,0x5bef613c)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc01605335f5667_55_create,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder","create",0x57d98127,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder.create","haxe/ui/backend/hxwidgets/builders/TableViewBuilder.hx",55,0x5bef613c)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc01605335f5667_59_onReady,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder","onReady",0xf2050a39,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder.onReady","haxe/ui/backend/hxwidgets/builders/TableViewBuilder.hx",59,0x5bef613c)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc01605335f5667_62_addComponent,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder","addComponent",0x081c9ec7,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder.addComponent","haxe/ui/backend/hxwidgets/builders/TableViewBuilder.hx",62,0x5bef613c)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc01605335f5667_87_createColumns,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder","createColumns",0x2822d676,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder.createColumns","haxe/ui/backend/hxwidgets/builders/TableViewBuilder.hx",87,0x5bef613c)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc01605335f5667_138_onItemChanged,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder","onItemChanged",0xda3f9a77,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder.onItemChanged","haxe/ui/backend/hxwidgets/builders/TableViewBuilder.hx",138,0x5bef613c)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc01605335f5667_183_onTableResized,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder","onTableResized",0xcdfa266c,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder.onTableResized","haxe/ui/backend/hxwidgets/builders/TableViewBuilder.hx",183,0x5bef613c)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc01605335f5667_186_getRendererInfo,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder","getRendererInfo",0xcb9ea57c,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder.getRendererInfo","haxe/ui/backend/hxwidgets/builders/TableViewBuilder.hx",186,0x5bef613c)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc01605335f5667_197_resizeColumns,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder","resizeColumns",0xe7d7b27e,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder.resizeColumns","haxe/ui/backend/hxwidgets/builders/TableViewBuilder.hx",197,0x5bef613c)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{

void TableViewBuilder_obj::__construct( ::haxe::ui::containers::TableView table){
            	HX_STACKFRAME(&_hx_pos_7cc01605335f5667_42_new)
HXLINE(  47)		this->renderers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		this->columns = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  45)		this->headersCreated = false;
HXLINE(  50)		super::__construct(table);
HXLINE(  51)		this->_table = table;
            	}

Dynamic TableViewBuilder_obj::__CreateEmpty() { return new TableViewBuilder_obj; }

void *TableViewBuilder_obj::_hx_vtable = 0;

Dynamic TableViewBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TableViewBuilder_obj > _hx_result = new TableViewBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TableViewBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x4ec37365;
	}
}

void TableViewBuilder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_7cc01605335f5667_55_create)
HXDLIN(  55)		this->createColumns();
            	}


void TableViewBuilder_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_7cc01605335f5667_59_onReady)
HXDLIN(  59)		this->createColumns();
            	}


 ::haxe::ui::core::Component TableViewBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_7cc01605335f5667_62_addComponent)
HXLINE(  63)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::Header >())) {
HXLINE(  64)			this->_header = ::hx::TCast<  ::haxe::ui::containers::Header >::cast(child);
HXLINE(  65)			this->_header->ready();
HXLINE(  66)			this->createColumns();
HXLINE(  67)			return child;
            		}
            		else {
HXLINE(  68)			if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE(  69)				if (::hx::IsNotNull( child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::CheckBox >(),null(),null()).StaticCast<  ::haxe::ui::components::CheckBox >() )) {
HXLINE(  70)					::Array< ::Dynamic> _hx_tmp = this->renderers;
HXDLIN(  70)					_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("component",bd,f0,53,0f),( ( ::haxe::ui::core::Component)(child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::CheckBox >(),null(),null()).StaticCast<  ::haxe::ui::components::CheckBox >()) ))
            						->setFixed(1,HX_("type",ba,f2,08,4d),HX_("checkbox",43,d2,f5,ac))));
            				}
            				else {
HXLINE(  71)					if (::hx::IsNotNull( child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Switch >(),null(),null()).StaticCast<  ::haxe::ui::components::Switch >() )) {
HXLINE(  72)						::Array< ::Dynamic> _hx_tmp = this->renderers;
HXDLIN(  72)						_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("component",bd,f0,53,0f),( ( ::haxe::ui::core::Component)(child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Switch >(),null(),null()).StaticCast<  ::haxe::ui::components::Switch >()) ))
            							->setFixed(1,HX_("type",ba,f2,08,4d),HX_("checkbox",43,d2,f5,ac))));
            					}
            					else {
HXLINE(  73)						if (::hx::IsNotNull( child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Progress >(),null(),null()).StaticCast<  ::haxe::ui::components::Progress >() )) {
HXLINE(  74)							::Array< ::Dynamic> _hx_tmp = this->renderers;
HXDLIN(  74)							_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("component",bd,f0,53,0f),( ( ::haxe::ui::core::Component)(child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Progress >(),null(),null()).StaticCast<  ::haxe::ui::components::Progress >()) ))
            								->setFixed(1,HX_("type",ba,f2,08,4d),HX_("progress",ad,f7,2a,86))));
            						}
            						else {
HXLINE(  75)							if (::hx::IsNotNull( child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null(),null()).StaticCast<  ::haxe::ui::components::Image >() )) {
HXLINE(  76)								::Array< ::Dynamic> _hx_tmp = this->renderers;
HXDLIN(  76)								_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("component",bd,f0,53,0f),( ( ::haxe::ui::core::Component)(child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null(),null()).StaticCast<  ::haxe::ui::components::Image >()) ))
            									->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
            							}
            							else {
HXLINE(  77)								if (::hx::IsNotNull( child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::NumberStepper >(),null(),null()).StaticCast<  ::haxe::ui::components::NumberStepper >() )) {
HXLINE(  78)									::Array< ::Dynamic> _hx_tmp = this->renderers;
HXDLIN(  78)									_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            										->setFixed(0,HX_("component",bd,f0,53,0f),( ( ::haxe::ui::core::Component)(child->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::NumberStepper >(),null(),null()).StaticCast<  ::haxe::ui::components::NumberStepper >()) ))
            										->setFixed(1,HX_("type",ba,f2,08,4d),HX_("number",c9,86,7a,a1))));
            								}
            								else {
HXLINE(  80)									this->renderers->push( ::Dynamic(::hx::Anon_obj::Create(2)
            										->setFixed(0,HX_("component",bd,f0,53,0f),child)
            										->setFixed(1,HX_("type",ba,f2,08,4d),HX_("label",f4,0d,af,6f))));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  83)		return child;
            	}


void TableViewBuilder_obj::createColumns(){
            	HX_GC_STACKFRAME(&_hx_pos_7cc01605335f5667_87_createColumns)
HXDLIN(  87)		bool _hx_tmp;
HXDLIN(  87)		bool _hx_tmp1;
HXDLIN(  87)		if (::hx::IsNotNull( this->_header )) {
HXDLIN(  87)			_hx_tmp1 = ::hx::IsNotNull( this->_component->get_window() );
            		}
            		else {
HXDLIN(  87)			_hx_tmp1 = false;
            		}
HXDLIN(  87)		if (_hx_tmp1) {
HXDLIN(  87)			_hx_tmp = (this->headersCreated == false);
            		}
            		else {
HXDLIN(  87)			_hx_tmp = false;
            		}
HXDLIN(  87)		if (_hx_tmp) {
HXLINE(  88)			 ::hx::widgets::DataViewListCtrl dataList = ::hx::TCast<  ::hx::widgets::DataViewListCtrl >::cast(this->_component->get_window());
HXLINE(  89)			int i = 0;
HXLINE(  90)			{
HXLINE(  90)				int _g = 0;
HXDLIN(  90)				 ::haxe::ui::containers::Header _this = this->_header;
HXDLIN(  90)				::Array< ::Dynamic> _g1;
HXDLIN(  90)				if (::hx::IsNull( _this->_children )) {
HXLINE(  90)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(  90)					_g1 = _this->_children;
            				}
HXDLIN(  90)				while((_g < _g1->length)){
HXLINE(  90)					 ::haxe::ui::core::Component col = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  90)					_g = (_g + 1);
HXLINE(  91)					 ::Dynamic renderer = this->getRendererInfo(i);
HXLINE(  92)					 ::haxe::ui::components::Button button = ::hx::TCast<  ::haxe::ui::components::Button >::cast(col);
HXLINE(  93)					 ::hx::widgets::DataViewRenderer r = null();
HXLINE(  94)					::String _hx_switch_0 = ( (::String)(renderer->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
            					if (  (_hx_switch_0==HX_("checkbox",43,d2,f5,ac)) ){
HXLINE(  96)						r =  ::hx::widgets::DataViewToggleRenderer_obj::__alloc( HX_CTX );
HXDLIN(  96)						goto _hx_goto_5;
            					}
            					if (  (_hx_switch_0==HX_("image",5b,1f,69,bd)) ){
HXLINE( 100)						r =  ::hx::widgets::DataViewBitmapRenderer_obj::__alloc( HX_CTX );
HXDLIN( 100)						goto _hx_goto_5;
            					}
            					if (  (_hx_switch_0==HX_("number",c9,86,7a,a1)) ){
HXLINE( 102)						r =  ::hx::widgets::DataViewSpinRenderer_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 102)						goto _hx_goto_5;
            					}
            					if (  (_hx_switch_0==HX_("progress",ad,f7,2a,86)) ){
HXLINE(  98)						r =  ::hx::widgets::DataViewProgressRenderer_obj::__alloc( HX_CTX );
HXDLIN(  98)						goto _hx_goto_5;
            					}
            					/* default */{
HXLINE( 104)						r =  ::hx::widgets::DataViewTextRenderer_obj::__alloc( HX_CTX );
            					}
            					_hx_goto_5:;
HXLINE( 107)					::String columnText = col->get_text();
HXLINE( 108)					if (::hx::IsNull( columnText )) {
HXLINE( 109)						columnText = HX_("",00,00,00,00);
            					}
HXLINE( 111)					 ::hx::widgets::DataViewColumn c =  ::hx::widgets::DataViewColumn_obj::__alloc( HX_CTX ,columnText,r,i);
HXLINE( 112)					dataList->appendColumn(c);
HXLINE( 114)					::Array< ::Dynamic> _hx_tmp = this->columns;
HXLINE( 115)					::String _hx_tmp1 = col->get_id();
HXLINE( 116)					::String _hx_tmp2 = col->get_text();
HXLINE( 117)					 ::Dynamic _hx_tmp3 = button->get_width();
HXLINE( 114)					_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("width",06,b6,62,ca),_hx_tmp3)
            						->setFixed(1,HX_("percentWidth",01,51,1b,fe),button->get_percentWidth())
            						->setFixed(2,HX_("id",db,5b,00,00),_hx_tmp1)
            						->setFixed(3,HX_("text",ad,cc,f9,4c),_hx_tmp2)));
HXLINE( 120)					i = (i + 1);
            				}
            			}
HXLINE( 124)			this->_header->removeAllComponents(null());
HXLINE( 125)			this->_header->get_window()->scheduleForDestruction();
HXLINE( 126)			this->_header = null();
HXLINE( 128)			this->headersCreated = true;
HXLINE( 129)			this->resizeColumns();
HXLINE( 131)			 ::haxe::ui::containers::TableView _hx_tmp = this->_table;
HXDLIN( 131)			_hx_tmp->set_dataSource(this->_table->get_dataSource());
HXLINE( 132)			this->_table->registerEvent(HX_("resize",f4,59,7b,08),this->onTableResized_dyn(),null());
HXLINE( 134)			this->_table->get_window()->bind(::wx::widgets::EventType_obj::DATAVIEW_ITEM_VALUE_CHANGED,this->onItemChanged_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TableViewBuilder_obj,createColumns,(void))

void TableViewBuilder_obj::onItemChanged( ::hx::widgets::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_7cc01605335f5667_138_onItemChanged)
HXLINE( 139)		 ::hx::widgets::DataViewEvent dve = e->convertTo(::hx::ClassOf< ::hx::widgets::DataViewEvent >()).StaticCast<  ::hx::widgets::DataViewEvent >();
HXLINE( 140)		 ::hx::widgets::DataViewListCtrl dataList = ::hx::TCast<  ::hx::widgets::DataViewListCtrl >::cast(this->_component->get_window());
HXLINE( 141)		int column = dve->get_column();
HXLINE( 142)		int row = dataList->itemToRow(dve->get_item());
HXLINE( 143)		 ::Dynamic columnInfo = this->columns->__get(column);
HXLINE( 144)		 ::Dynamic renderer = this->getRendererInfo(column);
HXLINE( 145)		 ::Dynamic newValue = dataList->getValue(row,column);
HXLINE( 147)		 ::Dynamic realValue = null();
HXLINE( 148)		bool sendEvent = false;
HXLINE( 149)		::String _hx_switch_0 = ( (::String)(renderer->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("checkbox",43,d2,f5,ac)) ){
HXLINE( 151)			realValue = (::Std_obj::string(newValue) == HX_("true",4e,a7,03,4d));
HXLINE( 152)			sendEvent = true;
HXLINE( 150)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("image",5b,1f,69,bd)) ){
HXLINE( 156)			realValue = ::Std_obj::string(newValue);
HXDLIN( 156)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("number",c9,86,7a,a1)) ){
HXLINE( 158)			realValue = ::Std_obj::parseInt(( (::String)(newValue) ));
HXLINE( 159)			sendEvent = true;
HXLINE( 157)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("progress",ad,f7,2a,86)) ){
HXLINE( 154)			realValue = ::Std_obj::parseInt(( (::String)(newValue) ));
HXDLIN( 154)			goto _hx_goto_7;
            		}
            		/* default */{
HXLINE( 161)			realValue = ::Std_obj::string(newValue);
            		}
            		_hx_goto_7:;
HXLINE( 164)		if (::hx::IsNotNull( realValue )) {
HXLINE( 165)			 ::Dynamic item = this->_table->get_dataSource()->get(row);
HXLINE( 166)			::Reflect_obj::setField(item,( (::String)(columnInfo->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),realValue);
HXLINE( 168)			if ((sendEvent == true)) {
HXLINE( 169)				 ::haxe::ui::events::ItemEvent e =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,HX_("itemcomponentevent",90,6a,39,18),null(),null());
HXLINE( 170)				e->bubble = true;
HXLINE( 171)				if (::hx::IsNotNull( renderer->__Field(HX_("component",bd,f0,53,0f),::hx::paccDynamic) )) {
HXLINE( 172)					e->source = ( ( ::haxe::ui::core::Component)(renderer->__Field(HX_("component",bd,f0,53,0f),::hx::paccDynamic)) );
            				}
HXLINE( 174)				e->sourceEvent =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 175)				e->itemIndex = row;
HXLINE( 176)				e->data = item;
HXLINE( 177)				this->_table->dispatch(e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TableViewBuilder_obj,onItemChanged,(void))

void TableViewBuilder_obj::onTableResized( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_7cc01605335f5667_183_onTableResized)
HXDLIN( 183)		this->resizeColumns();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TableViewBuilder_obj,onTableResized,(void))

 ::Dynamic TableViewBuilder_obj::getRendererInfo(int index){
            	HX_STACKFRAME(&_hx_pos_7cc01605335f5667_186_getRendererInfo)
HXLINE( 187)		if ((index > (this->renderers->length - 1))) {
HXLINE( 188)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("component",bd,f0,53,0f),null())
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("label",f4,0d,af,6f)));
            		}
HXLINE( 194)		return this->renderers->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TableViewBuilder_obj,getRendererInfo,return )

void TableViewBuilder_obj::resizeColumns(){
            	HX_STACKFRAME(&_hx_pos_7cc01605335f5667_197_resizeColumns)
HXLINE( 198)		 ::hx::widgets::DataViewListCtrl dataList = ::hx::TCast<  ::hx::widgets::DataViewListCtrl >::cast(this->_component->get_window());
HXLINE( 199)		 ::hx::widgets::Size size = dataList->get_clientSize();
HXLINE( 200)		int i = 0;
HXLINE( 201)		Float ucx = ( (Float)(size->width) );
HXLINE( 202)		{
HXLINE( 202)			int _g = 0;
HXDLIN( 202)			::Array< ::Dynamic> _g1 = this->columns;
HXDLIN( 202)			while((_g < _g1->length)){
HXLINE( 202)				 ::Dynamic c = _g1->__get(_g);
HXDLIN( 202)				_g = (_g + 1);
HXLINE( 203)				if (::hx::IsNull( c->__Field(HX_("percentWidth",01,51,1b,fe),::hx::paccDynamic) )) {
HXLINE( 204)					 ::hx::widgets::DataViewColumn dc = dataList->getColumn(i);
HXLINE( 205)					 ::Dynamic cx = c->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic);
HXLINE( 206)					dc->set_width(::Std_obj::_hx_int(( (Float)(cx) )));
HXLINE( 207)					ucx = (ucx - ( (Float)(cx) ));
            				}
HXLINE( 209)				i = (i + 1);
            			}
            		}
HXLINE( 212)		ucx = (ucx - ::haxe::ui::core::Platform_obj::get_vscrollWidth());
HXLINE( 214)		int i1 = 0;
HXLINE( 215)		{
HXLINE( 215)			int _g2 = 0;
HXDLIN( 215)			::Array< ::Dynamic> _g3 = this->columns;
HXDLIN( 215)			while((_g2 < _g3->length)){
HXLINE( 215)				 ::Dynamic c = _g3->__get(_g2);
HXDLIN( 215)				_g2 = (_g2 + 1);
HXLINE( 216)				if (::hx::IsNotNull( c->__Field(HX_("percentWidth",01,51,1b,fe),::hx::paccDynamic) )) {
HXLINE( 217)					 ::hx::widgets::DataViewColumn dc = dataList->getColumn(i1);
HXLINE( 218)					Float cx = ((ucx * ( (Float)(c->__Field(HX_("percentWidth",01,51,1b,fe),::hx::paccDynamic)) )) / ( (Float)(100) ));
HXLINE( 219)					dc->set_width(::Std_obj::_hx_int(cx));
            				}
HXLINE( 221)				i1 = (i1 + 1);
            			}
            		}
HXLINE( 223)		dataList->refresh(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TableViewBuilder_obj,resizeColumns,(void))


::hx::ObjectPtr< TableViewBuilder_obj > TableViewBuilder_obj::__new( ::haxe::ui::containers::TableView table) {
	::hx::ObjectPtr< TableViewBuilder_obj > __this = new TableViewBuilder_obj();
	__this->__construct(table);
	return __this;
}

::hx::ObjectPtr< TableViewBuilder_obj > TableViewBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TableView table) {
	TableViewBuilder_obj *__this = (TableViewBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TableViewBuilder_obj), true, "haxe.ui.backend.hxwidgets.builders.TableViewBuilder"));
	*(void **)__this = TableViewBuilder_obj::_hx_vtable;
	__this->__construct(table);
	return __this;
}

TableViewBuilder_obj::TableViewBuilder_obj()
{
}

void TableViewBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TableViewBuilder);
	HX_MARK_MEMBER_NAME(_table,"_table");
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(headersCreated,"headersCreated");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(renderers,"renderers");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TableViewBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_table,"_table");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(headersCreated,"headersCreated");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(renderers,"renderers");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TableViewBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_table") ) { return ::hx::Val( _table ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { return ::hx::Val( _header ); }
		if (HX_FIELD_EQ(inName,"columns") ) { return ::hx::Val( columns ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"renderers") ) { return ::hx::Val( renderers ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createColumns") ) { return ::hx::Val( createColumns_dyn() ); }
		if (HX_FIELD_EQ(inName,"onItemChanged") ) { return ::hx::Val( onItemChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeColumns") ) { return ::hx::Val( resizeColumns_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"headersCreated") ) { return ::hx::Val( headersCreated ); }
		if (HX_FIELD_EQ(inName,"onTableResized") ) { return ::hx::Val( onTableResized_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getRendererInfo") ) { return ::hx::Val( getRendererInfo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TableViewBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_table") ) { _table=inValue.Cast<  ::haxe::ui::containers::TableView >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast<  ::haxe::ui::containers::Header >(); return inValue; }
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"renderers") ) { renderers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"headersCreated") ) { headersCreated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TableViewBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_table",4f,ff,ca,06));
	outFields->push(HX_("_header",2c,1b,77,6b));
	outFields->push(HX_("headersCreated",42,00,0d,39));
	outFields->push(HX_("columns",dd,ac,59,f3));
	outFields->push(HX_("renderers",d0,d5,70,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TableViewBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TableView */ ,(int)offsetof(TableViewBuilder_obj,_table),HX_("_table",4f,ff,ca,06)},
	{::hx::fsObject /*  ::haxe::ui::containers::Header */ ,(int)offsetof(TableViewBuilder_obj,_header),HX_("_header",2c,1b,77,6b)},
	{::hx::fsBool,(int)offsetof(TableViewBuilder_obj,headersCreated),HX_("headersCreated",42,00,0d,39)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TableViewBuilder_obj,columns),HX_("columns",dd,ac,59,f3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TableViewBuilder_obj,renderers),HX_("renderers",d0,d5,70,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TableViewBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TableViewBuilder_obj_sMemberFields[] = {
	HX_("_table",4f,ff,ca,06),
	HX_("_header",2c,1b,77,6b),
	HX_("headersCreated",42,00,0d,39),
	HX_("columns",dd,ac,59,f3),
	HX_("renderers",d0,d5,70,cd),
	HX_("create",fc,66,0f,7c),
	HX_("onReady",c4,3e,f8,7c),
	HX_("addComponent",5c,12,a8,0e),
	HX_("createColumns",41,85,9c,db),
	HX_("onItemChanged",42,49,b9,8d),
	HX_("onTableResized",41,69,f9,24),
	HX_("getRendererInfo",07,dd,f9,93),
	HX_("resizeColumns",49,61,51,9b),
	::String(null()) };

::hx::Class TableViewBuilder_obj::__mClass;

void TableViewBuilder_obj::__register()
{
	TableViewBuilder_obj _hx_dummy;
	TableViewBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.builders.TableViewBuilder",e3,2e,0e,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TableViewBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TableViewBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TableViewBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TableViewBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders
