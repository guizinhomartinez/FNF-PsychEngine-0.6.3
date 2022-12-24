#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TabView
#include <haxe/ui/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a1723373ba00b7bf_357_new,"haxe.ui.containers._TabView.Builder","new",0x6e18f444,"haxe.ui.containers._TabView.Builder.new","haxe/ui/containers/TabView.hx",357,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_371_create,"haxe.ui.containers._TabView.Builder","create",0xf096c998,"haxe.ui.containers._TabView.Builder.create","haxe/ui/containers/TabView.hx",371,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_392_get_numComponents,"haxe.ui.containers._TabView.Builder","get_numComponents",0x6e9d2137,"haxe.ui.containers._TabView.Builder.get_numComponents","haxe/ui/containers/TabView.hx",392,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_395_addComponent,"haxe.ui.containers._TabView.Builder","addComponent",0xb0f951f8,"haxe.ui.containers._TabView.Builder.addComponent","haxe/ui/containers/TabView.hx",395,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_418_addComponentAt,"haxe.ui.containers._TabView.Builder","addComponentAt",0xdf6bf90b,"haxe.ui.containers._TabView.Builder.addComponentAt","haxe/ui/containers/TabView.hx",418,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_441_onPagePropertyChanged,"haxe.ui.containers._TabView.Builder","onPagePropertyChanged",0xda582695,"haxe.ui.containers._TabView.Builder.onPagePropertyChanged","haxe/ui/containers/TabView.hx",441,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_456_removeComponent,"haxe.ui.containers._TabView.Builder","removeComponent",0x424ff5bd,"haxe.ui.containers._TabView.Builder.removeComponent","haxe/ui/containers/TabView.hx",456,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_469_removeComponentAt,"haxe.ui.containers._TabView.Builder","removeComponentAt",0x6e86d810,"haxe.ui.containers._TabView.Builder.removeComponentAt","haxe/ui/containers/TabView.hx",469,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_473_getComponentIndex,"haxe.ui.containers._TabView.Builder","getComponentIndex",0xb305a72f,"haxe.ui.containers._TabView.Builder.getComponentIndex","haxe/ui/containers/TabView.hx",473,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_476_setComponentIndex,"haxe.ui.containers._TabView.Builder","setComponentIndex",0xd6737f3b,"haxe.ui.containers._TabView.Builder.setComponentIndex","haxe/ui/containers/TabView.hx",476,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_491_getComponentAt,"haxe.ui.containers._TabView.Builder","getComponentAt",0xd13344b6,"haxe.ui.containers._TabView.Builder.getComponentAt","haxe/ui/containers/TabView.hx",491,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_494_findComponent,"haxe.ui.containers._TabView.Builder","findComponent",0x54cc1a28,"haxe.ui.containers._TabView.Builder.findComponent","haxe/ui/containers/TabView.hx",494,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_a1723373ba00b7bf_513_applyStyle,"haxe.ui.containers._TabView.Builder","applyStyle",0x0ad2017f,"haxe.ui.containers._TabView.Builder.applyStyle","haxe/ui/containers/TabView.hx",513,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void Builder_obj::__construct( ::haxe::ui::containers::TabView tabview){
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_357_new)
HXLINE( 364)		this->_views = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 363)		this->_currentView = null();
HXLINE( 367)		super::__construct(tabview);
HXLINE( 368)		this->_tabview = tabview;
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
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x05c1c414;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_a1723373ba00b7bf_371_create)
HXLINE( 372)		if (::hx::IsNull( this->_content )) {
HXLINE( 373)			this->_content =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE( 374)			this->_content->set_id(HX_("tabview-content",e6,41,c6,35));
HXLINE( 375)			this->_content->addClass(HX_("tabview-content",e6,41,c6,35),null(),null());
HXLINE( 376)			 ::haxe::ui::containers::Box _hx_tmp = this->_content;
HXDLIN( 376)			_hx_tmp->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(HX_("vertical",76,bc,15,6a)));
HXLINE( 377)			this->_content->componentTabIndex = 1;
HXLINE( 378)			this->_tabview->addComponent(this->_content);
            		}
HXLINE( 381)		if (::hx::IsNull( this->_tabs )) {
HXLINE( 382)			::haxe::Log_obj::trace(HX_("create",fc,66,0f,7c),::hx::SourceInfo(HX_("haxe/ui/containers/TabView.hx",ef,42,88,fd),382,HX_("haxe.ui.containers._TabView.Builder",52,c2,f8,ff),HX_("create",fc,66,0f,7c)));
HXLINE( 383)			this->_tabs =  ::haxe::ui::components::TabBar_obj::__alloc( HX_CTX );
HXLINE( 384)			this->_tabs->set_id(HX_("tabview-tabs",b1,fd,eb,1e));
HXLINE( 385)			this->_tabs->addClass(HX_("tabview-tabs",b1,fd,eb,1e),null(),null());
HXLINE( 386)			this->_tabs->componentTabIndex = 0;
HXLINE( 387)			this->_tabview->addComponent(this->_tabs);
            		}
            	}


 ::Dynamic Builder_obj::get_numComponents(){
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_392_get_numComponents)
HXDLIN( 392)		return this->_views->length;
            	}


 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_a1723373ba00b7bf_395_addComponent)
HXLINE( 396)		bool _hx_tmp;
HXDLIN( 396)		if (::hx::IsInstanceNotEq( child,this->_content )) {
HXLINE( 396)			_hx_tmp = ::hx::IsInstanceNotEq( child,this->_tabs );
            		}
            		else {
HXLINE( 396)			_hx_tmp = false;
            		}
HXDLIN( 396)		if (_hx_tmp) {
HXLINE( 397)			::String text = child->get_text();
HXLINE( 398)			::String icon = null();
HXLINE( 399)			if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::Box >())) {
HXLINE( 400)				icon = ::hx::TCast<  ::haxe::ui::containers::Box >::cast(child)->get_icon();
            			}
HXLINE( 402)			child->registerEvent(HX_("propertychange",85,47,b1,35),this->onPagePropertyChanged_dyn(),null());
HXLINE( 403)			this->_views->push(child);
HXLINE( 404)			 ::haxe::ui::components::Button button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 405)			button->set_text(text);
HXLINE( 406)			button->set_icon(::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(icon));
HXLINE( 407)			button->set_tooltip(child->get_tooltip());
HXLINE( 408)			if (::hx::IsNotNull( child->get_id() )) {
HXLINE( 409)				button->set_id((child->get_id() + HX_("_button",91,73,57,48)));
            			}
HXLINE( 411)			this->_tabs->addComponent(button);
HXLINE( 413)			return child;
            		}
HXLINE( 415)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_a1723373ba00b7bf_418_addComponentAt)
HXLINE( 419)		bool _hx_tmp;
HXDLIN( 419)		if (::hx::IsInstanceNotEq( child,this->_content )) {
HXLINE( 419)			_hx_tmp = ::hx::IsInstanceNotEq( child,this->_tabs );
            		}
            		else {
HXLINE( 419)			_hx_tmp = false;
            		}
HXDLIN( 419)		if (_hx_tmp) {
HXLINE( 420)			::String text = child->get_text();
HXLINE( 421)			::String icon = null();
HXLINE( 422)			if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::Box >())) {
HXLINE( 423)				icon = ::hx::TCast<  ::haxe::ui::containers::Box >::cast(child)->get_icon();
            			}
HXLINE( 425)			child->registerEvent(HX_("propertychange",85,47,b1,35),this->onPagePropertyChanged_dyn(),null());
HXLINE( 426)			this->_views->insert(index,child);
HXLINE( 427)			 ::haxe::ui::components::Button button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 428)			button->set_text(text);
HXLINE( 429)			button->set_icon(::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(icon));
HXLINE( 430)			button->set_tooltip(child->get_tooltip());
HXLINE( 431)			if (::hx::IsNotNull( child->get_id() )) {
HXLINE( 432)				button->set_id((child->get_id() + HX_("_button",91,73,57,48)));
            			}
HXLINE( 434)			this->_tabs->addComponentAt(button,index);
HXLINE( 435)			return child;
            		}
HXLINE( 437)		return null();
            	}


void Builder_obj::onPagePropertyChanged( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_441_onPagePropertyChanged)
HXDLIN( 441)		if (::hx::IsEq( event->data,HX_("text",ad,cc,f9,4c) )) {
HXLINE( 442)			int index = this->_views->indexOf(event->target,null());
HXLINE( 443)			 ::haxe::ui::core::Component button = this->_tabs->getTab(index);
HXLINE( 444)			bool _hx_tmp;
HXDLIN( 444)			if (::hx::IsNotNull( button )) {
HXLINE( 444)				::String _hx_tmp1 = button->get_text();
HXDLIN( 444)				_hx_tmp = (_hx_tmp1 != event->target->get_text());
            			}
            			else {
HXLINE( 444)				_hx_tmp = false;
            			}
HXDLIN( 444)			if (_hx_tmp) {
HXLINE( 445)				button->set_text(event->target->get_text());
            			}
            		}
            		else {
HXLINE( 447)			if (::hx::IsEq( event->data,HX_("icon",79,e7,b2,45) )) {
HXLINE( 448)				int index = this->_views->indexOf(event->target,null());
HXLINE( 449)				 ::haxe::ui::components::Button button = ::hx::TCast<  ::haxe::ui::components::Button >::cast(this->_tabs->getTab(index));
HXLINE( 450)				bool _hx_tmp;
HXDLIN( 450)				if (::hx::IsNotNull( button )) {
HXLINE( 450)					 ::haxe::ui::util::VariantType _hx_tmp1 = button->get_icon();
HXDLIN( 450)					_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::neq(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(::hx::TCast<  ::haxe::ui::containers::Box >::cast(event->target)->get_icon()));
            				}
            				else {
HXLINE( 450)					_hx_tmp = false;
            				}
HXDLIN( 450)				if (_hx_tmp) {
HXLINE( 451)					button->set_icon(::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(::hx::TCast<  ::haxe::ui::containers::Box >::cast(event->target)->get_icon()));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onPagePropertyChanged,(void))

 ::haxe::ui::core::Component Builder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_456_removeComponent)
HXLINE( 457)		bool _hx_tmp;
HXDLIN( 457)		if (::hx::IsInstanceNotEq( child,this->_content )) {
HXLINE( 457)			_hx_tmp = ::hx::IsInstanceNotEq( child,this->_tabs );
            		}
            		else {
HXLINE( 457)			_hx_tmp = false;
            		}
HXDLIN( 457)		if (_hx_tmp) {
HXLINE( 458)			int _g = this->_views->indexOf(child,null());
HXDLIN( 458)			if ((_g != -1)) {
HXLINE( 460)				int i = _g;
HXLINE( 461)				this->_tabs->removeComponentAt(i,dispose,invalidate);
HXLINE( 462)				return child;
            			}
            		}
HXLINE( 465)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_469_removeComponentAt)
HXDLIN( 469)		return this->_tabs->removeComponentAt(index,dispose,invalidate);
            	}


int Builder_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_473_getComponentIndex)
HXDLIN( 473)		return this->_views->indexOf(child,null());
            	}


 ::haxe::ui::core::Component Builder_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_476_setComponentIndex)
HXLINE( 477)		bool _hx_tmp;
HXDLIN( 477)		if (::hx::IsInstanceNotEq( child,this->_content )) {
HXLINE( 477)			_hx_tmp = ::hx::IsInstanceNotEq( child,this->_tabs );
            		}
            		else {
HXLINE( 477)			_hx_tmp = false;
            		}
HXDLIN( 477)		if (_hx_tmp) {
HXLINE( 478)			int _g = this->_views->indexOf(child,null());
HXDLIN( 478)			if ((_g != -1)) {
HXLINE( 480)				int i = _g;
HXLINE( 481)				this->_views->removeRange(i,1);
HXLINE( 482)				this->_views->insert(index,child);
HXLINE( 483)				 ::haxe::ui::components::TabBar _hx_tmp = this->_tabs;
HXDLIN( 483)				_hx_tmp->setComponentIndex(this->_tabs->getComponentAt(i),index);
HXLINE( 484)				return child;
            			}
            		}
HXLINE( 487)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_491_getComponentAt)
HXDLIN( 491)		return this->_views->__get(index).StaticCast<  ::haxe::ui::core::Component >();
            	}


 ::Dynamic Builder_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType){
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_494_findComponent)
HXLINE( 495)		 ::Dynamic match = this->super::findComponent(criteria,type,recursive,searchType);
HXLINE( 496)		if (::hx::IsNull( match )) {
HXLINE( 497)			int _g = 0;
HXDLIN( 497)			::Array< ::Dynamic> _g1 = this->_views;
HXDLIN( 497)			while((_g < _g1->length)){
HXLINE( 497)				 ::haxe::ui::core::Component view = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 497)				_g = (_g + 1);
HXLINE( 498)				match = view->findComponent(criteria,type,recursive,searchType);
HXLINE( 499)				if (view->matchesSearch(criteria,type,searchType)) {
HXLINE( 500)					return view;
            				}
            				else {
HXLINE( 502)					match = view->findComponent(criteria,type,recursive,searchType);
            				}
HXLINE( 505)				if (::hx::IsNotNull( match )) {
HXLINE( 506)					goto _hx_goto_11;
            				}
            			}
            			_hx_goto_11:;
            		}
HXLINE( 510)		return match;
            	}


void Builder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_a1723373ba00b7bf_513_applyStyle)
HXLINE( 514)		this->super::applyStyle(style);
HXLINE(  11)		{
HXLINE( 103)			 ::haxe::ui::core::Component c = this->_component->findComponent(HX_("tabview-tabs",b1,fd,eb,1e),::hx::ClassOf< ::haxe::ui::core::Component >(),false,null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 117)			if (::hx::IsNotNull( c )) {
HXLINE( 118)				bool invalidate = false;
HXLINE( 120)				{
HXLINE( 110)					bool _hx_tmp;
HXDLIN( 110)					if (::hx::IsNull( c->get_customStyle()->color )) {
HXLINE( 110)						_hx_tmp = ::hx::IsNotEq( c->get_customStyle()->color,style->color );
            					}
            					else {
HXLINE( 110)						_hx_tmp = false;
            					}
HXDLIN( 110)					if (_hx_tmp) {
HXLINE( 111)						c->get_customStyle()->color = style->color;
HXLINE( 112)						invalidate = true;
            					}
HXLINE( 110)					bool _hx_tmp1;
HXDLIN( 110)					if (::hx::IsNull( c->get_customStyle()->fontName )) {
HXLINE( 110)						_hx_tmp1 = (c->get_customStyle()->fontName != style->fontName);
            					}
            					else {
HXLINE( 110)						_hx_tmp1 = false;
            					}
HXDLIN( 110)					if (_hx_tmp1) {
HXLINE( 111)						c->get_customStyle()->fontName = style->fontName;
HXLINE( 112)						invalidate = true;
            					}
HXLINE( 110)					bool _hx_tmp2;
HXDLIN( 110)					if (::hx::IsNull( c->get_customStyle()->fontSize )) {
HXLINE( 110)						_hx_tmp2 = ::hx::IsNotEq( c->get_customStyle()->fontSize,style->fontSize );
            					}
            					else {
HXLINE( 110)						_hx_tmp2 = false;
            					}
HXDLIN( 110)					if (_hx_tmp2) {
HXLINE( 111)						c->get_customStyle()->fontSize = style->fontSize;
HXLINE( 112)						invalidate = true;
            					}
HXLINE( 110)					bool _hx_tmp3;
HXDLIN( 110)					if (::hx::IsNull( c->get_customStyle()->cursor )) {
HXLINE( 110)						_hx_tmp3 = (c->get_customStyle()->cursor != style->cursor);
            					}
            					else {
HXLINE( 110)						_hx_tmp3 = false;
            					}
HXDLIN( 110)					if (_hx_tmp3) {
HXLINE( 111)						c->get_customStyle()->cursor = style->cursor;
HXLINE( 112)						invalidate = true;
            					}
HXLINE( 110)					bool _hx_tmp4;
HXDLIN( 110)					if (::hx::IsNull( c->get_customStyle()->textAlign )) {
HXLINE( 110)						_hx_tmp4 = (c->get_customStyle()->textAlign != style->textAlign);
            					}
            					else {
HXLINE( 110)						_hx_tmp4 = false;
            					}
HXDLIN( 110)					if (_hx_tmp4) {
HXLINE( 111)						c->get_customStyle()->textAlign = style->textAlign;
HXLINE( 112)						invalidate = true;
            					}
HXLINE( 110)					bool _hx_tmp5;
HXDLIN( 110)					if (::hx::IsNull( c->get_customStyle()->fontBold )) {
HXLINE( 110)						_hx_tmp5 = ::hx::IsNotEq( c->get_customStyle()->fontBold,style->fontBold );
            					}
            					else {
HXLINE( 110)						_hx_tmp5 = false;
            					}
HXDLIN( 110)					if (_hx_tmp5) {
HXLINE( 111)						c->get_customStyle()->fontBold = style->fontBold;
HXLINE( 112)						invalidate = true;
            					}
HXLINE( 110)					bool _hx_tmp6;
HXDLIN( 110)					if (::hx::IsNull( c->get_customStyle()->fontUnderline )) {
HXLINE( 110)						_hx_tmp6 = ::hx::IsNotEq( c->get_customStyle()->fontUnderline,style->fontUnderline );
            					}
            					else {
HXLINE( 110)						_hx_tmp6 = false;
            					}
HXDLIN( 110)					if (_hx_tmp6) {
HXLINE( 111)						c->get_customStyle()->fontUnderline = style->fontUnderline;
HXLINE( 112)						invalidate = true;
            					}
HXLINE( 110)					bool _hx_tmp7;
HXDLIN( 110)					if (::hx::IsNull( c->get_customStyle()->fontItalic )) {
HXLINE( 110)						_hx_tmp7 = ::hx::IsNotEq( c->get_customStyle()->fontItalic,style->fontItalic );
            					}
            					else {
HXLINE( 110)						_hx_tmp7 = false;
            					}
HXDLIN( 110)					if (_hx_tmp7) {
HXLINE( 111)						c->get_customStyle()->fontItalic = style->fontItalic;
HXLINE( 112)						invalidate = true;
            					}
            				}
HXLINE( 122)				if ((invalidate == true)) {
HXLINE( 123)					c->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 123)					{
            					}
            				}
            			}
            		}
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::TabView tabview) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(tabview);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TabView tabview) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers._TabView.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(tabview);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_tabview,"_tabview");
	HX_MARK_MEMBER_NAME(_tabs,"_tabs");
	HX_MARK_MEMBER_NAME(_content,"_content");
	HX_MARK_MEMBER_NAME(_currentView,"_currentView");
	HX_MARK_MEMBER_NAME(_views,"_views");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tabview,"_tabview");
	HX_VISIT_MEMBER_NAME(_tabs,"_tabs");
	HX_VISIT_MEMBER_NAME(_content,"_content");
	HX_VISIT_MEMBER_NAME(_currentView,"_currentView");
	HX_VISIT_MEMBER_NAME(_views,"_views");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tabs") ) { return ::hx::Val( _tabs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_views") ) { return ::hx::Val( _views ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tabview") ) { return ::hx::Val( _tabview ); }
		if (HX_FIELD_EQ(inName,"_content") ) { return ::hx::Val( _content ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentView") ) { return ::hx::Val( _currentView ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numComponents") ) { return ::hx::Val( get_numComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"onPagePropertyChanged") ) { return ::hx::Val( onPagePropertyChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tabs") ) { _tabs=inValue.Cast<  ::haxe::ui::components::TabBar >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_views") ) { _views=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tabview") ) { _tabview=inValue.Cast<  ::haxe::ui::containers::TabView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_content") ) { _content=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentView") ) { _currentView=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tabview",bb,34,a4,95));
	outFields->push(HX_("_tabs",5d,cc,07,00));
	outFields->push(HX_("_content",ba,e6,2f,53));
	outFields->push(HX_("_currentView",3f,b9,ea,ec));
	outFields->push(HX_("_views",af,2d,e4,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TabView */ ,(int)offsetof(Builder_obj,_tabview),HX_("_tabview",bb,34,a4,95)},
	{::hx::fsObject /*  ::haxe::ui::components::TabBar */ ,(int)offsetof(Builder_obj,_tabs),HX_("_tabs",5d,cc,07,00)},
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(Builder_obj,_content),HX_("_content",ba,e6,2f,53)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(Builder_obj,_currentView),HX_("_currentView",3f,b9,ea,ec)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Builder_obj,_views),HX_("_views",af,2d,e4,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_tabview",bb,34,a4,95),
	HX_("_tabs",5d,cc,07,00),
	HX_("_content",ba,e6,2f,53),
	HX_("_currentView",3f,b9,ea,ec),
	HX_("_views",af,2d,e4,32),
	HX_("create",fc,66,0f,7c),
	HX_("get_numComponents",53,76,26,3b),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("onPagePropertyChanged",b1,39,e8,4d),
	HX_("removeComponent",d9,8b,72,50),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("findComponent",44,b1,05,f0),
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.Builder",52,c2,f8,ff);
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
} // end namespace _TabView
