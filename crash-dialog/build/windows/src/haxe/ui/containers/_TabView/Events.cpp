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
#ifndef INCLUDED_haxe_ui_containers__TabView_Events
#include <haxe/ui/containers/_TabView/Events.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6c81e9bf7101840a_305_new,"haxe.ui.containers._TabView.Events","new",0x878525b4,"haxe.ui.containers._TabView.Events.new","haxe/ui/containers/TabView.hx",305,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_6c81e9bf7101840a_310_register,"haxe.ui.containers._TabView.Events","register",0x8374808f,"haxe.ui.containers._TabView.Events.register","haxe/ui/containers/TabView.hx",310,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_6c81e9bf7101840a_323_unregister,"haxe.ui.containers._TabView.Events","unregister",0x0bc44ae8,"haxe.ui.containers._TabView.Events.unregister","haxe/ui/containers/TabView.hx",323,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_6c81e9bf7101840a_330_onBeforeTabClosed,"haxe.ui.containers._TabView.Events","onBeforeTabClosed",0xfdc82b57,"haxe.ui.containers._TabView.Events.onBeforeTabClosed","haxe/ui/containers/TabView.hx",330,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_6c81e9bf7101840a_333_onTabClosed,"haxe.ui.containers._TabView.Events","onTabClosed",0x91261216,"haxe.ui.containers._TabView.Events.onTabClosed","haxe/ui/containers/TabView.hx",333,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_6c81e9bf7101840a_344_onTabChanged,"haxe.ui.containers._TabView.Events","onTabChanged",0xc3d3a54a,"haxe.ui.containers._TabView.Events.onTabChanged","haxe/ui/containers/TabView.hx",344,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void Events_obj::__construct( ::haxe::ui::containers::TabView tabview){
            	HX_STACKFRAME(&_hx_pos_6c81e9bf7101840a_305_new)
HXLINE( 306)		super::__construct(tabview);
HXLINE( 307)		this->_tabview = tabview;
            	}

Dynamic Events_obj::__CreateEmpty() { return new Events_obj; }

void *Events_obj::_hx_vtable = 0;

Dynamic Events_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Events_obj > _hx_result = new Events_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Events_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x2d6b9108;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_6c81e9bf7101840a_310_register)
HXLINE( 311)		 ::haxe::ui::components::TabBar tabs = this->_tabview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::TabBar >(),false,null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE( 312)		if ((tabs->hasEvent(HX_("change",70,91,72,b7),this->onTabChanged_dyn()) == false)) {
HXLINE( 313)			tabs->registerEvent(HX_("change",70,91,72,b7),this->onTabChanged_dyn(),null());
            		}
HXLINE( 315)		if ((tabs->hasEvent(HX_("beforeclose",d9,16,93,3a),this->onBeforeTabClosed_dyn()) == false)) {
HXLINE( 316)			tabs->registerEvent(HX_("beforeclose",d9,16,93,3a),this->onBeforeTabClosed_dyn(),null());
            		}
HXLINE( 318)		if ((tabs->hasEvent(HX_("close",b8,17,63,48),this->onTabClosed_dyn()) == false)) {
HXLINE( 319)			tabs->registerEvent(HX_("close",b8,17,63,48),this->onTabClosed_dyn(),null());
            		}
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_6c81e9bf7101840a_323_unregister)
HXLINE( 324)		 ::haxe::ui::components::TabBar tabs = this->_tabview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::TabBar >(),false,null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE( 325)		tabs->unregisterEvent(HX_("change",70,91,72,b7),this->onTabChanged_dyn());
HXLINE( 326)		tabs->unregisterEvent(HX_("beforeclose",d9,16,93,3a),this->onBeforeTabClosed_dyn());
            	}


void Events_obj::onBeforeTabClosed( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_6c81e9bf7101840a_330_onBeforeTabClosed)
HXDLIN( 330)		this->_tabview->dispatch(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onBeforeTabClosed,(void))

void Events_obj::onTabClosed( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_6c81e9bf7101840a_333_onTabClosed)
HXLINE( 334)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_tabview->_compositeBuilder);
HXLINE( 335)		 ::haxe::ui::core::Component view = builder->_views->__get(( (int)(event->data) )).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 336)		builder->_views->remove(view);
HXLINE( 337)		if ((builder->_content->getComponentIndex(view) != -1)) {
HXLINE( 338)			builder->_content->removeComponent(view,null(),null());
            		}
HXLINE( 341)		 ::haxe::ui::containers::TabView _hx_tmp = this->_tabview;
HXDLIN( 341)		_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("close",b8,17,63,48),event->data,null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onTabClosed,(void))

void Events_obj::onTabChanged( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_6c81e9bf7101840a_344_onTabChanged)
HXLINE( 345)		 ::haxe::ui::components::TabBar tabs = this->_tabview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::TabBar >(),false,null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE( 346)		this->_tabview->set_pageIndex(-1);
HXLINE( 347)		 ::haxe::ui::containers::TabView _hx_tmp = this->_tabview;
HXDLIN( 347)		_hx_tmp->set_pageIndex(tabs->get_selectedIndex());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onTabChanged,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::containers::TabView tabview) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(tabview);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TabView tabview) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.containers._TabView.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(tabview);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_tabview,"_tabview");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tabview,"_tabview");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_tabview") ) { return ::hx::Val( _tabview ); }
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onTabClosed") ) { return ::hx::Val( onTabClosed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onTabChanged") ) { return ::hx::Val( onTabChanged_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onBeforeTabClosed") ) { return ::hx::Val( onBeforeTabClosed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_tabview") ) { _tabview=inValue.Cast<  ::haxe::ui::containers::TabView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tabview",bb,34,a4,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TabView */ ,(int)offsetof(Events_obj,_tabview),HX_("_tabview",bb,34,a4,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_tabview",bb,34,a4,95),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onBeforeTabClosed",03,ab,3b,34),
	HX_("onTabClosed",c2,48,e1,91),
	HX_("onTabChanged",1e,45,e8,66),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.Events",c2,7b,33,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Events_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Events_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Events_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Events_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
