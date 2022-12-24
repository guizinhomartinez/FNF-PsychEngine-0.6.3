#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvents
#include <haxe/ui/containers/menus/MenuEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__Menu_Builder
#include <haxe/ui/containers/menus/_Menu/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37ec5715a3140243_312_new,"haxe.ui.containers.menus._Menu.Builder","new",0x854644d9,"haxe.ui.containers.menus._Menu.Builder.new","haxe/ui/containers/menus/Menu.hx",312,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_37ec5715a3140243_323_onThemeChanged,"haxe.ui.containers.menus._Menu.Builder","onThemeChanged",0x95ad59d1,"haxe.ui.containers.menus._Menu.Builder.onThemeChanged","haxe/ui/containers/menus/Menu.hx",323,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_37ec5715a3140243_330_addComponent,"haxe.ui.containers.menus._Menu.Builder","addComponent",0xfcf9c6c3,"haxe.ui.containers.menus._Menu.Builder.addComponent","haxe/ui/containers/menus/Menu.hx",330,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_37ec5715a3140243_350_onMenuPropertyChanged,"haxe.ui.containers.menus._Menu.Builder","onMenuPropertyChanged",0x89cc0f1a,"haxe.ui.containers.menus._Menu.Builder.onMenuPropertyChanged","haxe/ui/containers/menus/Menu.hx",350,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_37ec5715a3140243_363_onComponentAdded,"haxe.ui.containers.menus._Menu.Builder","onComponentAdded",0xd1220829,"haxe.ui.containers.menus._Menu.Builder.onComponentAdded","haxe/ui/containers/menus/Menu.hx",363,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_37ec5715a3140243_368_findComponent,"haxe.ui.containers.menus._Menu.Builder","findComponent",0x8931d6fd,"haxe.ui.containers.menus._Menu.Builder.findComponent","haxe/ui/containers/menus/Menu.hx",368,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_37ec5715a3140243_387_findComponents,"haxe.ui.containers.menus._Menu.Builder","findComponents",0x826a46d6,"haxe.ui.containers.menus._Menu.Builder.findComponents","haxe/ui/containers/menus/Menu.hx",387,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_37ec5715a3140243_410_destroy,"haxe.ui.containers.menus._Menu.Builder","destroy",0x313ed1f3,"haxe.ui.containers.menus._Menu.Builder.destroy","haxe/ui/containers/menus/Menu.hx",410,0x5a36fdb9)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _Menu{

void Builder_obj::__construct( ::haxe::ui::containers::menus::Menu menu){
            	HX_GC_STACKFRAME(&_hx_pos_37ec5715a3140243_312_new)
HXLINE( 314)		this->_subMenus =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 317)		super::__construct(menu);
HXLINE( 318)		this->_menu = menu;
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
		return inClassId==(int)0x19cce585;
	}
}

void Builder_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_37ec5715a3140243_323_onThemeChanged)
HXDLIN( 323)		 ::Dynamic menuItem = this->_subMenus->keys();
HXDLIN( 323)		while(( (bool)(menuItem->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 323)			 ::haxe::ui::containers::menus::MenuItem menuItem1 = ( ( ::haxe::ui::containers::menus::MenuItem)(menuItem->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 324)			 ::haxe::ui::containers::menus::Menu menu = ( ( ::haxe::ui::containers::menus::Menu)(this->_subMenus->get(menuItem1)) );
HXLINE( 325)			::haxe::ui::core::Screen_obj::get_instance()->invalidateChildren(menu,null());
HXLINE( 326)			::haxe::ui::core::Screen_obj::get_instance()->onThemeChangedChildren(menu);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,onThemeChanged,(void))

 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_37ec5715a3140243_330_addComponent)
HXLINE( 331)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::menus::Menu >())) {
HXLINE( 332)			 ::haxe::ui::containers::menus::Menu menu = ::hx::TCast<  ::haxe::ui::containers::menus::Menu >::cast(child);
HXLINE( 333)			 ::haxe::ui::containers::menus::MenuItem item =  ::haxe::ui::containers::menus::MenuItem_obj::__alloc( HX_CTX );
HXLINE( 334)			item->set_id((child->get_id() + HX_("Item",33,f1,98,30)));
HXLINE( 335)			item->set_text(child->get_text());
HXLINE( 336)			item->set_icon(menu->get_icon());
HXLINE( 337)			item->set_tooltip(child->get_tooltip());
HXLINE( 338)			item->set_expandable(true);
HXLINE( 339)			this->_menu->addComponent(item);
HXLINE( 340)			::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(menu->_internalEvents)->parentMenu = this->_menu;
HXLINE( 341)			menu->registerEvent(HX_("propertychange",85,47,b1,35),this->onMenuPropertyChanged_dyn(),null());
HXLINE( 342)			this->_subMenus->set(item,menu);
HXLINE( 343)			return child;
            		}
HXLINE( 346)		return null();
            	}


void Builder_obj::onMenuPropertyChanged( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_37ec5715a3140243_350_onMenuPropertyChanged)
HXDLIN( 350)		if (::hx::IsEq( event->data,HX_("text",ad,cc,f9,4c) )) {
HXLINE( 351)			 ::haxe::ui::containers::menus::Menu menu = ::hx::TCast<  ::haxe::ui::containers::menus::Menu >::cast(event->target);
HXLINE( 352)			{
HXLINE( 352)				 ::Dynamic item = this->_subMenus->keys();
HXDLIN( 352)				while(( (bool)(item->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 352)					 ::haxe::ui::containers::menus::MenuItem item1 = ( ( ::haxe::ui::containers::menus::MenuItem)(item->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 353)					 ::haxe::ui::containers::menus::Menu subMenu = ( ( ::haxe::ui::containers::menus::Menu)(this->_subMenus->get(item1)) );
HXLINE( 354)					if (::hx::IsInstanceEq( subMenu,menu )) {
HXLINE( 355)						item1->set_text(event->target->get_text());
HXLINE( 356)						goto _hx_goto_4;
            					}
            				}
            				_hx_goto_4:;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onMenuPropertyChanged,(void))

void Builder_obj::onComponentAdded( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_37ec5715a3140243_363_onComponentAdded)
HXDLIN( 363)		bool _hx_tmp;
HXDLIN( 363)		if (!(::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::menus::Menu >()))) {
HXDLIN( 363)			_hx_tmp = ::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::menus::MenuItem >());
            		}
            		else {
HXDLIN( 363)			_hx_tmp = true;
            		}
HXDLIN( 363)		if (_hx_tmp) {
HXLINE( 364)			this->_menu->registerInternalEvents(null(),true);
            		}
            	}


 ::Dynamic Builder_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType){
            	HX_STACKFRAME(&_hx_pos_37ec5715a3140243_368_findComponent)
HXLINE( 369)		 ::Dynamic match = this->super::findComponent(criteria,type,recursive,searchType);
HXLINE( 370)		if (::hx::IsNull( match )) {
HXLINE( 371)			 ::Dynamic menu = this->_subMenus->iterator();
HXDLIN( 371)			while(( (bool)(menu->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 371)				 ::haxe::ui::containers::menus::Menu menu1 = ( ( ::haxe::ui::containers::menus::Menu)(menu->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 372)				match = menu1->findComponent(criteria,type,recursive,searchType);
HXLINE( 373)				if (menu1->matchesSearch(criteria,type,searchType)) {
HXLINE( 374)					return menu1;
            				}
            				else {
HXLINE( 376)					match = menu1->findComponent(criteria,type,recursive,searchType);
            				}
HXLINE( 379)				if (::hx::IsNotNull( match )) {
HXLINE( 380)					goto _hx_goto_7;
            				}
            			}
            			_hx_goto_7:;
            		}
HXLINE( 384)		return match;
            	}


::cpp::VirtualArray Builder_obj::findComponents(::String styleName,::hx::Class type,::hx::Null< int >  __o_maxDepth){
            		int maxDepth = __o_maxDepth.Default(5);
            	HX_STACKFRAME(&_hx_pos_37ec5715a3140243_387_findComponents)
HXLINE( 388)		::cpp::VirtualArray r = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 389)		{
HXLINE( 389)			 ::Dynamic menu = this->_subMenus->iterator();
HXDLIN( 389)			while(( (bool)(menu->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 389)				 ::haxe::ui::containers::menus::Menu menu1 = ( ( ::haxe::ui::containers::menus::Menu)(menu->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 390)				bool match = true;
HXLINE( 391)				bool _hx_tmp;
HXDLIN( 391)				if (::hx::IsNotNull( styleName )) {
HXLINE( 391)					_hx_tmp = ((menu1->classes->indexOf(styleName,null()) != -1) == false);
            				}
            				else {
HXLINE( 391)					_hx_tmp = false;
            				}
HXDLIN( 391)				if (_hx_tmp) {
HXLINE( 392)					match = false;
            				}
HXLINE( 394)				bool _hx_tmp1;
HXDLIN( 394)				if (::hx::IsNotNull( type )) {
HXLINE( 394)					_hx_tmp1 = (::Std_obj::isOfType(menu1,type) == false);
            				}
            				else {
HXLINE( 394)					_hx_tmp1 = false;
            				}
HXDLIN( 394)				if (_hx_tmp1) {
HXLINE( 395)					match = false;
            				}
HXLINE( 398)				if ((match == true)) {
HXLINE( 399)					r->push(menu1);
            				}
            				else {
HXLINE( 401)					::cpp::VirtualArray childArray = menu1->findComponents(styleName,type,maxDepth);
HXLINE( 402)					{
HXLINE( 402)						int _g = 0;
HXDLIN( 402)						while((_g < childArray->get_length())){
HXLINE( 402)							 ::Dynamic c = childArray->__get(_g);
HXDLIN( 402)							_g = (_g + 1);
HXLINE( 403)							r->push(c);
            						}
            					}
            				}
            			}
            		}
HXLINE( 407)		return r;
            	}


void Builder_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_37ec5715a3140243_410_destroy)
HXLINE( 411)		this->super::destroy();
HXLINE( 412)		bool _hx_tmp;
HXDLIN( 412)		if (::hx::IsNotNull( this->_menu )) {
HXLINE( 412)			_hx_tmp = (this->_menu->_isDisposed == false);
            		}
            		else {
HXLINE( 412)			_hx_tmp = false;
            		}
HXDLIN( 412)		if (_hx_tmp) {
HXLINE( 413)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->_menu,null());
            		}
HXLINE( 415)		{
HXLINE( 415)			 ::Dynamic subMenu = this->_subMenus->iterator();
HXDLIN( 415)			while(( (bool)(subMenu->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 415)				 ::haxe::ui::containers::menus::Menu subMenu1 = ( ( ::haxe::ui::containers::menus::Menu)(subMenu->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 416)				::haxe::ui::core::Screen_obj::get_instance()->removeComponent(subMenu1,null());
            			}
            		}
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::menus::Menu menu) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(menu);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::menus::Menu menu) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers.menus._Menu.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(menu);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_menu,"_menu");
	HX_MARK_MEMBER_NAME(_subMenus,"_subMenus");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_menu,"_menu");
	HX_VISIT_MEMBER_NAME(_subMenus,"_subMenus");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { return ::hx::Val( _menu ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_subMenus") ) { return ::hx::Val( _subMenus ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponents") ) { return ::hx::Val( findComponents_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentAdded") ) { return ::hx::Val( onComponentAdded_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"onMenuPropertyChanged") ) { return ::hx::Val( onMenuPropertyChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { _menu=inValue.Cast<  ::haxe::ui::containers::menus::Menu >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_subMenus") ) { _subMenus=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_menu",7e,61,6a,fb));
	outFields->push(HX_("_subMenus",b3,f3,78,c2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::menus::Menu */ ,(int)offsetof(Builder_obj,_menu),HX_("_menu",7e,61,6a,fb)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Builder_obj,_subMenus),HX_("_subMenus",b3,f3,78,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_menu",7e,61,6a,fb),
	HX_("_subMenus",b3,f3,78,c2),
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("addComponent",5c,12,a8,0e),
	HX_("onMenuPropertyChanged",61,08,fe,8f),
	HX_("onComponentAdded",42,94,a0,77),
	HX_("findComponent",44,b1,05,f0),
	HX_("findComponents",af,6a,f5,14),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._Menu.Builder",67,e4,02,13);
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
} // end namespace _Menu
