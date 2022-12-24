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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_Menu
#include <haxe/ui/containers/menus/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuBar
#include <haxe/ui/containers/menus/MenuBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuBar_Builder
#include <haxe/ui/containers/menus/_MenuBar/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_775f8a0de575e1a5_257_new,"haxe.ui.containers.menus._MenuBar.Builder","new",0x58564998,"haxe.ui.containers.menus._MenuBar.Builder.new","haxe/ui/containers/menus/MenuBar.hx",257,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_270_onThemeChanged,"haxe.ui.containers.menus._MenuBar.Builder","onThemeChanged",0x88269f72,"haxe.ui.containers.menus._MenuBar.Builder.onThemeChanged","haxe/ui/containers/menus/MenuBar.hx",270,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_276_create,"haxe.ui.containers.menus._MenuBar.Builder","create",0xb12280c4,"haxe.ui.containers.menus._MenuBar.Builder.create","haxe/ui/containers/menus/MenuBar.hx",276,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_279_destroy,"haxe.ui.containers.menus._MenuBar.Builder","destroy",0x6029a232,"haxe.ui.containers.menus._MenuBar.Builder.destroy","haxe/ui/containers/menus/MenuBar.hx",279,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_287_addComponent,"haxe.ui.containers.menus._MenuBar.Builder","addComponent",0xe958b224,"haxe.ui.containers.menus._MenuBar.Builder.addComponent","haxe/ui/containers/menus/MenuBar.hx",287,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_310_onChildAdded,"haxe.ui.containers.menus._MenuBar.Builder","onChildAdded",0x6db3874b,"haxe.ui.containers.menus._MenuBar.Builder.onChildAdded","haxe/ui/containers/menus/MenuBar.hx",310,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_317_onChildRemoved,"haxe.ui.containers.menus._MenuBar.Builder","onChildRemoved",0x45a9caeb,"haxe.ui.containers.menus._MenuBar.Builder.onChildRemoved","haxe/ui/containers/menus/MenuBar.hx",317,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_325_onMenuPropertyChanged,"haxe.ui.containers.menus._MenuBar.Builder","onMenuPropertyChanged",0x59ef2f99,"haxe.ui.containers.menus._MenuBar.Builder.onMenuPropertyChanged","haxe/ui/containers/menus/MenuBar.hx",325,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_339_addComponentAt,"haxe.ui.containers.menus._MenuBar.Builder","addComponentAt",0x7684bc37,"haxe.ui.containers.menus._MenuBar.Builder.addComponentAt","haxe/ui/containers/menus/MenuBar.hx",339,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_343_removeComponent,"haxe.ui.containers.menus._MenuBar.Builder","removeComponent",0xe0e1f911,"haxe.ui.containers.menus._MenuBar.Builder.removeComponent","haxe/ui/containers/menus/MenuBar.hx",343,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_346_styleMenuButton,"haxe.ui.containers.menus._MenuBar.Builder","styleMenuButton",0xf3957aba,"haxe.ui.containers.menus._MenuBar.Builder.styleMenuButton","haxe/ui/containers/menus/MenuBar.hx",346,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_358_getComponentIndex,"haxe.ui.containers.menus._MenuBar.Builder","getComponentIndex",0x9c9e2783,"haxe.ui.containers.menus._MenuBar.Builder.getComponentIndex","haxe/ui/containers/menus/MenuBar.hx",358,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_362_setComponentIndex,"haxe.ui.containers.menus._MenuBar.Builder","setComponentIndex",0xc00bff8f,"haxe.ui.containers.menus._MenuBar.Builder.setComponentIndex","haxe/ui/containers/menus/MenuBar.hx",362,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_366_getComponentAt,"haxe.ui.containers.menus._MenuBar.Builder","getComponentAt",0x684c07e2,"haxe.ui.containers.menus._MenuBar.Builder.getComponentAt","haxe/ui/containers/menus/MenuBar.hx",366,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_369_findComponent,"haxe.ui.containers.menus._MenuBar.Builder","findComponent",0x6fe0e07c,"haxe.ui.containers.menus._MenuBar.Builder.findComponent","haxe/ui/containers/menus/MenuBar.hx",369,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_388_findComponents,"haxe.ui.containers.menus._MenuBar.Builder","findComponents",0x74e38c77,"haxe.ui.containers.menus._MenuBar.Builder.findComponents","haxe/ui/containers/menus/MenuBar.hx",388,0x144ebed0)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuBar{

void Builder_obj::__construct( ::haxe::ui::containers::menus::MenuBar menubar){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_257_new)
HXLINE( 261)		this->_menus = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 260)		this->_buttons = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 264)		super::__construct(menubar);
HXLINE( 265)		this->_menubar = menubar;
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
	if (inClassId<=(int)0x02ee3bc2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02ee3bc2;
	} else {
		return inClassId==(int)0x0472fd8d;
	}
}

void Builder_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_270_onThemeChanged)
HXDLIN( 270)		int _g = 0;
HXDLIN( 270)		::Array< ::Dynamic> _g1 = this->_menus;
HXDLIN( 270)		while((_g < _g1->length)){
HXDLIN( 270)			 ::haxe::ui::containers::menus::Menu menu = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::menus::Menu >();
HXDLIN( 270)			_g = (_g + 1);
HXLINE( 271)			::haxe::ui::core::Screen_obj::get_instance()->invalidateChildren(menu,null());
HXLINE( 272)			::haxe::ui::core::Screen_obj::get_instance()->onThemeChangedChildren(menu);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,onThemeChanged,(void))

void Builder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_276_create)
            	}


void Builder_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_279_destroy)
HXLINE( 280)		this->super::destroy();
HXLINE( 281)		{
HXLINE( 281)			int _g = 0;
HXDLIN( 281)			::Array< ::Dynamic> _g1 = this->_menus;
HXDLIN( 281)			while((_g < _g1->length)){
HXLINE( 281)				 ::haxe::ui::containers::menus::Menu menu = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::menus::Menu >();
HXDLIN( 281)				_g = (_g + 1);
HXLINE( 282)				::haxe::ui::core::Screen_obj::get_instance()->removeComponent(menu,null());
            			}
            		}
HXLINE( 284)		this->_menus = null();
            	}


 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_775f8a0de575e1a5_287_addComponent)
HXLINE( 288)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::menus::Menu >())) {
HXLINE( 289)			 ::haxe::ui::containers::menus::Menu menu = ::hx::TCast<  ::haxe::ui::containers::menus::Menu >::cast(child);
HXLINE( 290)			 ::haxe::ui::components::Button button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 291)			button->set_text(menu->get_text());
HXLINE( 292)			button->set_icon(::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(menu->get_icon()));
HXLINE( 293)			button->set_tooltip(menu->get_tooltip());
HXLINE( 294)			button->set_hidden(child->get_hidden());
HXLINE( 295)			::haxe::ui::locale::LocaleManager_obj::get_instance()->cloneForComponent(child,button);
HXLINE( 296)			this->_buttons->push(button);
HXLINE( 297)			this->_menubar->addComponent(button);
HXLINE( 298)			this->_menubar->registerInternalEvents(null(),true);
HXLINE( 300)			this->_menus->push(menu);
HXLINE( 301)			this->styleMenuButton(menu,button);
HXLINE( 302)			menu->registerEvent(HX_("componentadded",e3,16,1d,d8),this->onChildAdded_dyn(),null());
HXLINE( 303)			menu->registerEvent(HX_("componentremoved",83,70,48,49),this->onChildRemoved_dyn(),null());
HXLINE( 304)			menu->registerEvent(HX_("propertychange",85,47,b1,35),this->onMenuPropertyChanged_dyn(),null());
HXLINE( 305)			return menu;
            		}
HXLINE( 307)		return null();
            	}


void Builder_obj::onChildAdded( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_310_onChildAdded)
HXLINE( 311)		 ::haxe::ui::containers::menus::Menu menu = ::hx::TCast<  ::haxe::ui::containers::menus::Menu >::cast(event->target);
HXLINE( 312)		int index = this->_menus->indexOf(menu,null());
HXLINE( 313)		 ::haxe::ui::components::Button button = this->_buttons->__get(index).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 314)		this->styleMenuButton(menu,button);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onChildAdded,(void))

void Builder_obj::onChildRemoved( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_317_onChildRemoved)
HXLINE( 318)		 ::haxe::ui::containers::menus::Menu menu = ::hx::TCast<  ::haxe::ui::containers::menus::Menu >::cast(event->target);
HXLINE( 319)		int index = this->_menus->indexOf(menu,null());
HXLINE( 320)		 ::haxe::ui::components::Button button = this->_buttons->__get(index).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 321)		this->styleMenuButton(menu,button);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onChildRemoved,(void))

void Builder_obj::onMenuPropertyChanged( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_325_onMenuPropertyChanged)
HXDLIN( 325)		if (::hx::IsEq( event->data,HX_("text",ad,cc,f9,4c) )) {
HXLINE( 326)			 ::haxe::ui::containers::menus::Menu menu = ::hx::TCast<  ::haxe::ui::containers::menus::Menu >::cast(event->target);
HXLINE( 327)			int index = this->_menus->indexOf(menu,null());
HXLINE( 328)			 ::haxe::ui::components::Button button = this->_buttons->__get(index).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 329)			button->set_text(event->target->get_text());
            		}
            		else {
HXLINE( 330)			if (::hx::IsEq( event->data,HX_("hidden",6a,ff,95,4c) )) {
HXLINE( 331)				 ::haxe::ui::containers::menus::Menu menu = ::hx::TCast<  ::haxe::ui::containers::menus::Menu >::cast(event->target);
HXLINE( 332)				int index = this->_menus->indexOf(menu,null());
HXLINE( 333)				 ::haxe::ui::components::Button button = this->_buttons->__get(index).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 334)				button->set_hidden(event->target->get_hidden());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onMenuPropertyChanged,(void))

 ::haxe::ui::core::Component Builder_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_339_addComponentAt)
HXDLIN( 339)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_343_removeComponent)
HXDLIN( 343)		return null();
            	}


void Builder_obj::styleMenuButton( ::haxe::ui::containers::menus::Menu menu, ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_346_styleMenuButton)
HXLINE( 347)		::Array< ::Dynamic> hasChildren;
HXDLIN( 347)		if (::hx::IsNull( menu->_children )) {
HXLINE( 347)			hasChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 347)			hasChildren = menu->_children;
            		}
HXDLIN( 347)		bool hasChildren1 = (hasChildren->length > 0);
HXLINE( 348)		if ((hasChildren1 == true)) {
HXLINE( 349)			button->swapClass(HX_("menubar-button",cb,e2,3d,ba),HX_("menubar-button-no-children",49,4a,88,b3),null(),null());
            		}
            		else {
HXLINE( 351)			button->swapClass(HX_("menubar-button-no-children",49,4a,88,b3),HX_("menubar-button",cb,e2,3d,ba),null(),null());
            		}
HXLINE( 353)		button->set_toggle(hasChildren1);
HXLINE( 354)		this->_menubar->registerInternalEvents(null(),true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Builder_obj,styleMenuButton,(void))

int Builder_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_358_getComponentIndex)
HXDLIN( 358)		return -1;
            	}


 ::haxe::ui::core::Component Builder_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_362_setComponentIndex)
HXDLIN( 362)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_366_getComponentAt)
HXDLIN( 366)		return null();
            	}


 ::Dynamic Builder_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_369_findComponent)
HXLINE( 370)		 ::Dynamic match = this->super::findComponent(criteria,type,recursive,searchType);
HXLINE( 371)		if (::hx::IsNull( match )) {
HXLINE( 372)			int _g = 0;
HXDLIN( 372)			::Array< ::Dynamic> _g1 = this->_menus;
HXDLIN( 372)			while((_g < _g1->length)){
HXLINE( 372)				 ::haxe::ui::containers::menus::Menu menu = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::menus::Menu >();
HXDLIN( 372)				_g = (_g + 1);
HXLINE( 373)				match = menu->findComponent(criteria,type,recursive,searchType);
HXLINE( 374)				if (menu->matchesSearch(criteria,type,searchType)) {
HXLINE( 375)					return menu;
            				}
            				else {
HXLINE( 377)					match = menu->findComponent(criteria,type,recursive,searchType);
            				}
HXLINE( 380)				if (::hx::IsNotNull( match )) {
HXLINE( 381)					goto _hx_goto_16;
            				}
            			}
            			_hx_goto_16:;
            		}
HXLINE( 385)		return match;
            	}


::cpp::VirtualArray Builder_obj::findComponents(::String styleName,::hx::Class type,::hx::Null< int >  __o_maxDepth){
            		int maxDepth = __o_maxDepth.Default(5);
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_388_findComponents)
HXLINE( 389)		::cpp::VirtualArray r = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 390)		{
HXLINE( 390)			int _g = 0;
HXDLIN( 390)			::Array< ::Dynamic> _g1 = this->_menus;
HXDLIN( 390)			while((_g < _g1->length)){
HXLINE( 390)				 ::haxe::ui::containers::menus::Menu menu = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::menus::Menu >();
HXDLIN( 390)				_g = (_g + 1);
HXLINE( 391)				bool match = true;
HXLINE( 392)				bool _hx_tmp;
HXDLIN( 392)				if (::hx::IsNotNull( styleName )) {
HXLINE( 392)					_hx_tmp = ((menu->classes->indexOf(styleName,null()) != -1) == false);
            				}
            				else {
HXLINE( 392)					_hx_tmp = false;
            				}
HXDLIN( 392)				if (_hx_tmp) {
HXLINE( 393)					match = false;
            				}
HXLINE( 395)				bool _hx_tmp1;
HXDLIN( 395)				if (::hx::IsNotNull( type )) {
HXLINE( 395)					_hx_tmp1 = (::Std_obj::isOfType(menu,type) == false);
            				}
            				else {
HXLINE( 395)					_hx_tmp1 = false;
            				}
HXDLIN( 395)				if (_hx_tmp1) {
HXLINE( 396)					match = false;
            				}
HXLINE( 399)				if ((match == true)) {
HXLINE( 400)					r->push(menu);
            				}
HXLINE( 403)				::cpp::VirtualArray childArray = menu->findComponents(styleName,type,maxDepth);
HXLINE( 404)				{
HXLINE( 404)					int _g2 = 0;
HXDLIN( 404)					while((_g2 < childArray->get_length())){
HXLINE( 404)						 ::Dynamic c = childArray->__get(_g2);
HXDLIN( 404)						_g2 = (_g2 + 1);
HXLINE( 405)						r->push(c);
            					}
            				}
            			}
            		}
HXLINE( 408)		return r;
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::menus::MenuBar menubar) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(menubar);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::menus::MenuBar menubar) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers.menus._MenuBar.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(menubar);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_menubar,"_menubar");
	HX_MARK_MEMBER_NAME(_buttons,"_buttons");
	HX_MARK_MEMBER_NAME(_menus,"_menus");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_menubar,"_menubar");
	HX_VISIT_MEMBER_NAME(_buttons,"_buttons");
	HX_VISIT_MEMBER_NAME(_menus,"_menus");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_menus") ) { return ::hx::Val( _menus ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_menubar") ) { return ::hx::Val( _menubar ); }
		if (HX_FIELD_EQ(inName,"_buttons") ) { return ::hx::Val( _buttons ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"onChildAdded") ) { return ::hx::Val( onChildAdded_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"onChildRemoved") ) { return ::hx::Val( onChildRemoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponents") ) { return ::hx::Val( findComponents_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"styleMenuButton") ) { return ::hx::Val( styleMenuButton_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"onMenuPropertyChanged") ) { return ::hx::Val( onMenuPropertyChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_menus") ) { _menus=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_menubar") ) { _menubar=inValue.Cast<  ::haxe::ui::containers::menus::MenuBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttons") ) { _buttons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_menubar",15,d3,1b,f4));
	outFields->push(HX_("_buttons",c2,ab,2d,04));
	outFields->push(HX_("_menus",35,ed,aa,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::menus::MenuBar */ ,(int)offsetof(Builder_obj,_menubar),HX_("_menubar",15,d3,1b,f4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Builder_obj,_buttons),HX_("_buttons",c2,ab,2d,04)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Builder_obj,_menus),HX_("_menus",35,ed,aa,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_menubar",15,d3,1b,f4),
	HX_("_buttons",c2,ab,2d,04),
	HX_("_menus",35,ed,aa,01),
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("create",fc,66,0f,7c),
	HX_("destroy",fa,2c,86,24),
	HX_("addComponent",5c,12,a8,0e),
	HX_("onChildAdded",83,e7,02,93),
	HX_("onChildRemoved",23,a9,bb,e5),
	HX_("onMenuPropertyChanged",61,08,fe,8f),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("removeComponent",d9,8b,72,50),
	HX_("styleMenuButton",82,0d,26,63),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("findComponent",44,b1,05,f0),
	HX_("findComponents",af,6a,f5,14),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._MenuBar.Builder",a6,dd,63,29);
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
} // end namespace menus
} // end namespace _MenuBar
