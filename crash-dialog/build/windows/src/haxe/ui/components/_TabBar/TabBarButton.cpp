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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonLayout
#include <haxe/ui/components/ButtonLayout.h>
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
#ifndef INCLUDED_haxe_ui_components__TabBar_TabBarButton
#include <haxe/ui/components/_TabBar/TabBarButton.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_TabBarButtonLayout
#include <haxe/ui/components/_TabBar/TabBarButtonLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8285d904a115228d_589_new,"haxe.ui.components._TabBar.TabBarButton","new",0x2a2531f9,"haxe.ui.components._TabBar.TabBarButton.new","haxe/ui/components/TabBar.hx",589,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_8285d904a115228d_593_get_closable,"haxe.ui.components._TabBar.TabBarButton","get_closable",0xefc04377,"haxe.ui.components._TabBar.TabBarButton.get_closable","haxe/ui/components/TabBar.hx",593,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_8285d904a115228d_596_set_closable,"haxe.ui.components._TabBar.TabBarButton","set_closable",0x04b966eb,"haxe.ui.components._TabBar.TabBarButton.set_closable","haxe/ui/components/TabBar.hx",596,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_8285d904a115228d_622_onCloseClicked,"haxe.ui.components._TabBar.TabBarButton","onCloseClicked",0x39ad9095,"haxe.ui.components._TabBar.TabBarButton.onCloseClicked","haxe/ui/components/TabBar.hx",622,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_b85e0875f6bf2718_138_registerComposite,"haxe.ui.components._TabBar.TabBarButton","registerComposite",0xb5fb807d,"haxe.ui.components._TabBar.TabBarButton.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b85e0875f6bf2718_442_registerBehaviours,"haxe.ui.components._TabBar.TabBarButton","registerBehaviours",0x0913fa60,"haxe.ui.components._TabBar.TabBarButton.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_46772a0e91034aca_565_cloneComponent,"haxe.ui.components._TabBar.TabBarButton","cloneComponent",0xf017aca7,"haxe.ui.components._TabBar.TabBarButton.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_b85e0875f6bf2718_423_self,"haxe.ui.components._TabBar.TabBarButton","self",0xb9b48fd3,"haxe.ui.components._TabBar.TabBarButton.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void TabBarButton_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8285d904a115228d_589_new)
HXLINE( 590)		this->_closable = false;
HXLINE( 589)		super::__construct();
            	}

Dynamic TabBarButton_obj::__CreateEmpty() { return new TabBarButton_obj; }

void *TabBarButton_obj::_hx_vtable = 0;

Dynamic TabBarButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabBarButton_obj > _hx_result = new TabBarButton_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabBarButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x23cb9179) {
				return inClassId==(int)0x142c98ce || inClassId==(int)0x23cb9179;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x395782b4) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x395782b4;
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

bool TabBarButton_obj::get_closable(){
            	HX_STACKFRAME(&_hx_pos_8285d904a115228d_593_get_closable)
HXDLIN( 593)		return this->_closable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBarButton_obj,get_closable,return )

bool TabBarButton_obj::set_closable(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_8285d904a115228d_596_set_closable)
HXLINE( 597)		if ((this->_closable == value)) {
HXLINE( 598)			return value;
            		}
HXLINE( 601)		this->_closable = value;
HXLINE( 602)		 ::haxe::ui::components::Image existing = ( ( ::haxe::ui::components::Image)(this->findComponent(HX_("tab-close-button",5f,35,00,26),::hx::ClassOf< ::haxe::ui::components::Image >(),false,null())) );
HXLINE( 604)		 ::haxe::ui::components::ButtonEvents events = ::hx::TCast<  ::haxe::ui::components::ButtonEvents >::cast(this->_internalEvents);
HXLINE( 605)		events->recursiveStyling = false;
HXLINE( 606)		bool _hx_tmp;
HXDLIN( 606)		if ((this->_closable == true)) {
HXLINE( 606)			_hx_tmp = ::hx::IsNull( existing );
            		}
            		else {
HXLINE( 606)			_hx_tmp = false;
            		}
HXDLIN( 606)		if (_hx_tmp) {
HXLINE( 607)			this->set_iconPosition(HX_("far-left",7d,bc,22,51));
HXLINE( 608)			 ::haxe::ui::components::Image image =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 609)			image->set_id(HX_("tab-close-button",5f,35,00,26));
HXLINE( 610)			image->addClass(HX_("tab-close-button",5f,35,00,26),null(),null());
HXLINE( 611)			image->set_includeInLayout(false);
HXLINE( 612)			image->set_scriptAccess(false);
HXLINE( 613)			image->set_onClick(this->onCloseClicked_dyn());
HXLINE( 614)			this->addComponent(image);
            		}
            		else {
HXLINE( 615)			if (::hx::IsNotNull( existing )) {
HXLINE( 616)				this->removeComponent(existing,null(),null());
            			}
            		}
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBarButton_obj,set_closable,return )

void TabBarButton_obj::onCloseClicked( ::haxe::ui::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_8285d904a115228d_622_onCloseClicked)
HXLINE( 623)		 ::haxe::ui::components::TabBar tabbar = ( ( ::haxe::ui::components::TabBar)(this->findAncestor(null(),::hx::ClassOf< ::haxe::ui::components::TabBar >(),null())) );
HXLINE( 625)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(tabbar->_compositeBuilder);
HXLINE( 626)		int index = builder->_container->getComponentIndex(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 627)		 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("beforeclose",d9,16,93,3a),null(),index);
HXLINE( 628)		tabbar->dispatch(event);
HXLINE( 629)		if ((event->canceled == false)) {
HXLINE( 630)			if ((index != -1)) {
HXLINE( 631)				tabbar->removeTab(index);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBarButton_obj,onCloseClicked,(void))

void TabBarButton_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_b85e0875f6bf2718_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_TabBar::TabBarButtonLayout >();
            	}


void TabBarButton_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_b85e0875f6bf2718_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer TabBarButton_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_46772a0e91034aca_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::_TabBar::TabBarButton c = ( ( ::haxe::ui::components::_TabBar::TabBarButton)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer TabBarButton_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_b85e0875f6bf2718_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::_TabBar::TabBarButton_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< TabBarButton_obj > TabBarButton_obj::__new() {
	::hx::ObjectPtr< TabBarButton_obj > __this = new TabBarButton_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabBarButton_obj > TabBarButton_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabBarButton_obj *__this = (TabBarButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabBarButton_obj), true, "haxe.ui.components._TabBar.TabBarButton"));
	*(void **)__this = TabBarButton_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabBarButton_obj::TabBarButton_obj()
{
}

::hx::Val TabBarButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_closable() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_closable") ) { return ::hx::Val( _closable ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_closable") ) { return ::hx::Val( get_closable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_closable") ) { return ::hx::Val( set_closable_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onCloseClicked") ) { return ::hx::Val( onCloseClicked_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabBarButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_closable(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_closable") ) { _closable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabBarButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_closable",86,63,40,ca));
	outFields->push(HX_("closable",27,6c,aa,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabBarButton_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TabBarButton_obj,_closable),HX_("_closable",86,63,40,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabBarButton_obj_sStaticStorageInfo = 0;
#endif

static ::String TabBarButton_obj_sMemberFields[] = {
	HX_("_closable",86,63,40,ca),
	HX_("get_closable",30,20,c4,37),
	HX_("set_closable",a4,43,bd,4c),
	HX_("onCloseClicked",8e,cd,ec,6f),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class TabBarButton_obj::__mClass;

void TabBarButton_obj::__register()
{
	TabBarButton_obj _hx_dummy;
	TabBarButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.TabBarButton",87,c1,5c,9c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabBarButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabBarButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBarButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBarButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
