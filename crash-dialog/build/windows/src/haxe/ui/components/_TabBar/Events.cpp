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
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Events
#include <haxe/ui/components/_TabBar/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8c22a69be7cd1f4e_295_new,"haxe.ui.components._TabBar.Events","new",0xac4d1b42,"haxe.ui.components._TabBar.Events.new","haxe/ui/components/TabBar.hx",295,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_8c22a69be7cd1f4e_300_register,"haxe.ui.components._TabBar.Events","register",0xe361a841,"haxe.ui.components._TabBar.Events.register","haxe/ui/components/TabBar.hx",300,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_8c22a69be7cd1f4e_311_unregister,"haxe.ui.components._TabBar.Events","unregister",0x1f10431a,"haxe.ui.components._TabBar.Events.unregister","haxe/ui/components/TabBar.hx",311,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_8c22a69be7cd1f4e_314_onMouseWheel,"haxe.ui.components._TabBar.Events","onMouseWheel",0x95161313,"haxe.ui.components._TabBar.Events.onMouseWheel","haxe/ui/components/TabBar.hx",314,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_8c22a69be7cd1f4e_324_onTabMouseDown,"haxe.ui.components._TabBar.Events","onTabMouseDown",0x2b60e02f,"haxe.ui.components._TabBar.Events.onTabMouseDown","haxe/ui/components/TabBar.hx",324,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void Events_obj::__construct( ::haxe::ui::components::TabBar tabbar){
            	HX_STACKFRAME(&_hx_pos_8c22a69be7cd1f4e_295_new)
HXLINE( 296)		super::__construct(tabbar);
HXLINE( 297)		this->_tabbar = tabbar;
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
		return inClassId==(int)0x17e0fca6;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_8c22a69be7cd1f4e_300_register)
HXLINE( 301)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_tabbar->_compositeBuilder);
HXLINE( 302)		{
HXLINE( 302)			int _g = 0;
HXDLIN( 302)			 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 302)			::Array< ::Dynamic> _g1;
HXDLIN( 302)			if (::hx::IsNull( _this->_children )) {
HXLINE( 302)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 302)				_g1 = _this->_children;
            			}
HXDLIN( 302)			while((_g < _g1->length)){
HXLINE( 302)				 ::haxe::ui::core::Component t = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 302)				_g = (_g + 1);
HXLINE( 303)				if ((t->hasEvent(HX_("mousedown",07,85,e9,03),this->onTabMouseDown_dyn()) == false)) {
HXLINE( 304)					t->registerEvent(HX_("mousedown",07,85,e9,03),this->onTabMouseDown_dyn(),null());
            				}
            			}
            		}
HXLINE( 307)		this->registerEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn(),null());
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_8c22a69be7cd1f4e_311_unregister)
HXDLIN( 311)		this->unregisterEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn());
            	}


void Events_obj::onMouseWheel( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_8c22a69be7cd1f4e_314_onMouseWheel)
HXLINE( 315)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_tabbar->_compositeBuilder);
HXLINE( 316)		if ((event->delta < 0)) {
HXLINE( 317)			builder->scrollLeft();
            		}
            		else {
HXLINE( 319)			builder->scrollRight();
            		}
HXLINE( 321)		event->cancel();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseWheel,(void))

void Events_obj::onTabMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_8c22a69be7cd1f4e_324_onTabMouseDown)
HXLINE( 325)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_tabbar->_compositeBuilder);
HXLINE( 326)		 ::haxe::ui::core::Component button = event->target;
HXLINE( 327)		 ::haxe::ui::components::Image close = button->findComponent(HX_("tab-close-button",5f,35,00,26),::hx::ClassOf< ::haxe::ui::components::Image >(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 328)		bool select = true;
HXLINE( 329)		if (::hx::IsNotNull( close )) {
HXLINE( 330)			select = !(close->hitTest(event->screenX,event->screenY,null()));
            		}
HXLINE( 332)		if ((select == true)) {
HXLINE( 333)			 ::haxe::ui::components::TabBar _hx_tmp = this->_tabbar;
HXDLIN( 333)			_hx_tmp->set_selectedIndex(builder->_container->getComponentIndex(button));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onTabMouseDown,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::components::TabBar tabbar) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(tabbar);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::TabBar tabbar) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._TabBar.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(tabbar);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_tabbar,"_tabbar");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tabbar,"_tabbar");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tabbar") ) { return ::hx::Val( _tabbar ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onTabMouseDown") ) { return ::hx::Val( onTabMouseDown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tabbar") ) { _tabbar=inValue.Cast<  ::haxe::ui::components::TabBar >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tabbar",3d,cc,cc,ea));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::TabBar */ ,(int)offsetof(Events_obj,_tabbar),HX_("_tabbar",3d,cc,cc,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_tabbar",3d,cc,cc,ea),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("onTabMouseDown",d1,23,0b,f6),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.Events",50,12,12,d6);
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
} // end namespace components
} // end namespace _TabBar
