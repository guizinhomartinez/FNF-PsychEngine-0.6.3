#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ContentHeight
#include <haxe/ui/containers/_ScrollView/ContentHeight.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ContentLayoutName
#include <haxe/ui/containers/_ScrollView/ContentLayoutName.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ContentWidth
#include <haxe/ui/containers/_ScrollView/ContentWidth.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_EnsureVisible
#include <haxe/ui/containers/_ScrollView/EnsureVisible.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_GetContents
#include <haxe/ui/containers/_ScrollView/GetContents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollMax
#include <haxe/ui/containers/_ScrollView/HScrollMax.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollPageSize
#include <haxe/ui/containers/_ScrollView/HScrollPageSize.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollPos
#include <haxe/ui/containers/_ScrollView/HScrollPos.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_PercentContentHeight
#include <haxe/ui/containers/_ScrollView/PercentContentHeight.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_PercentContentWidth
#include <haxe/ui/containers/_ScrollView/PercentContentWidth.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ScrollModeBehaviour
#include <haxe/ui/containers/_ScrollView/ScrollModeBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollMax
#include <haxe/ui/containers/_ScrollView/VScrollMax.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollPageSize
#include <haxe/ui/containers/_ScrollView/VScrollPageSize.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollPos
#include <haxe/ui/containers/_ScrollView/VScrollPos.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_Virtual
#include <haxe/ui/containers/_ScrollView/Virtual.h>
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
#ifndef INCLUDED_haxe_ui_events_ScrollEvent
#include <haxe/ui/events/ScrollEvent.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <haxe/ui/layouts/ScrollViewLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d194136255627609_32_new,"haxe.ui.containers.ScrollView","new",0x3c5772ae,"haxe.ui.containers.ScrollView.new","haxe/ui/containers/ScrollView.hx",32,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_557_ensureVisible,"haxe.ui.containers.ScrollView","ensureVisible",0xfd69ce22,"haxe.ui.containers.ScrollView.ensureVisible","haxe/ui/macros/Macros.hx",557,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_60_validateComponentInternal,"haxe.ui.containers.ScrollView","validateComponentInternal",0xd9d2cc72,"haxe.ui.containers.ScrollView.validateComponentInternal","haxe/ui/containers/ScrollView.hx",60,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_77_get_isScroller,"haxe.ui.containers.ScrollView","get_isScroller",0x3588ac7f,"haxe.ui.containers.ScrollView.get_isScroller","haxe/ui/containers/ScrollView.hx",77,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_441_registerBehaviours,"haxe.ui.containers.ScrollView","registerBehaviours",0x1e76cd4b,"haxe.ui.containers.ScrollView.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_virtual,"haxe.ui.containers.ScrollView","get_virtual",0x1e0f9e70,"haxe.ui.containers.ScrollView.get_virtual","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_virtual,"haxe.ui.containers.ScrollView","set_virtual",0x287ca57c,"haxe.ui.containers.ScrollView.set_virtual","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_contentLayoutName,"haxe.ui.containers.ScrollView","get_contentLayoutName",0x095ded53,"haxe.ui.containers.ScrollView.get_contentLayoutName","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_506_set_contentLayoutName,"haxe.ui.containers.ScrollView","set_contentLayoutName",0x5d66bb5f,"haxe.ui.containers.ScrollView.set_contentLayoutName","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_contentWidth,"haxe.ui.containers.ScrollView","get_contentWidth",0xf33e7b88,"haxe.ui.containers.ScrollView.get_contentWidth","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_contentWidth,"haxe.ui.containers.ScrollView","set_contentWidth",0x498068fc,"haxe.ui.containers.ScrollView.set_contentWidth","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_percentContentWidth,"haxe.ui.containers.ScrollView","get_percentContentWidth",0x62451857,"haxe.ui.containers.ScrollView.get_percentContentWidth","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_percentContentWidth,"haxe.ui.containers.ScrollView","set_percentContentWidth",0x64a68163,"haxe.ui.containers.ScrollView.set_percentContentWidth","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_contentHeight,"haxe.ui.containers.ScrollView","get_contentHeight",0x99bd1425,"haxe.ui.containers.ScrollView.get_contentHeight","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_contentHeight,"haxe.ui.containers.ScrollView","set_contentHeight",0xbd2aec31,"haxe.ui.containers.ScrollView.set_contentHeight","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_percentContentHeight,"haxe.ui.containers.ScrollView","get_percentContentHeight",0x507fac76,"haxe.ui.containers.ScrollView.get_percentContentHeight","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_percentContentHeight,"haxe.ui.containers.ScrollView","set_percentContentHeight",0x635a2dea,"haxe.ui.containers.ScrollView.set_percentContentHeight","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_hscrollPos,"haxe.ui.containers.ScrollView","get_hscrollPos",0x8acc42da,"haxe.ui.containers.ScrollView.get_hscrollPos","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_hscrollPos,"haxe.ui.containers.ScrollView","set_hscrollPos",0xaaec2b4e,"haxe.ui.containers.ScrollView.set_hscrollPos","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_hscrollMax,"haxe.ui.containers.ScrollView","get_hscrollMax",0x8ac9efea,"haxe.ui.containers.ScrollView.get_hscrollMax","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_hscrollMax,"haxe.ui.containers.ScrollView","set_hscrollMax",0xaae9d85e,"haxe.ui.containers.ScrollView.set_hscrollMax","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_hscrollPageSize,"haxe.ui.containers.ScrollView","get_hscrollPageSize",0xd581b7aa,"haxe.ui.containers.ScrollView.get_hscrollPageSize","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_hscrollPageSize,"haxe.ui.containers.ScrollView","set_hscrollPageSize",0x121eaab6,"haxe.ui.containers.ScrollView.set_hscrollPageSize","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_vscrollPos,"haxe.ui.containers.ScrollView","get_vscrollPos",0x0eded10c,"haxe.ui.containers.ScrollView.get_vscrollPos","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_vscrollPos,"haxe.ui.containers.ScrollView","set_vscrollPos",0x2efeb980,"haxe.ui.containers.ScrollView.set_vscrollPos","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_vscrollMax,"haxe.ui.containers.ScrollView","get_vscrollMax",0x0edc7e1c,"haxe.ui.containers.ScrollView.get_vscrollMax","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_vscrollMax,"haxe.ui.containers.ScrollView","set_vscrollMax",0x2efc6690,"haxe.ui.containers.ScrollView.set_vscrollMax","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_vscrollPageSize,"haxe.ui.containers.ScrollView","get_vscrollPageSize",0xfb447438,"haxe.ui.containers.ScrollView.get_vscrollPageSize","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_vscrollPageSize,"haxe.ui.containers.ScrollView","set_vscrollPageSize",0x37e16744,"haxe.ui.containers.ScrollView.set_vscrollPageSize","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_scrollMode,"haxe.ui.containers.ScrollView","get_scrollMode",0x34a4eecb,"haxe.ui.containers.ScrollView.get_scrollMode","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_scrollMode,"haxe.ui.containers.ScrollView","set_scrollMode",0x54c4d73f,"haxe.ui.containers.ScrollView.set_scrollMode","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_468_get_contents,"haxe.ui.containers.ScrollView","get_contents",0x46665d15,"haxe.ui.containers.ScrollView.get_contents","haxe/ui/macros/Macros.hx",468,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_contents,"haxe.ui.containers.ScrollView","set_contents",0x5b5f8089,"haxe.ui.containers.ScrollView.set_contents","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_autoHideScrolls,"haxe.ui.containers.ScrollView","get_autoHideScrolls",0x0a7b315a,"haxe.ui.containers.ScrollView.get_autoHideScrolls","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_autoHideScrolls,"haxe.ui.containers.ScrollView","set_autoHideScrolls",0x47182466,"haxe.ui.containers.ScrollView.set_autoHideScrolls","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_475_get_allowAutoScroll,"haxe.ui.containers.ScrollView","get_allowAutoScroll",0x832d642a,"haxe.ui.containers.ScrollView.get_allowAutoScroll","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_520_set_allowAutoScroll,"haxe.ui.containers.ScrollView","set_allowAutoScroll",0xbfca5736,"haxe.ui.containers.ScrollView.set_allowAutoScroll","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_78ca0428d63f675c_565_cloneComponent,"haxe.ui.containers.ScrollView","cloneComponent",0xdee5ee12,"haxe.ui.containers.ScrollView.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_423_self,"haxe.ui.containers.ScrollView","self",0x937aed7e,"haxe.ui.containers.ScrollView.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_138_registerComposite,"haxe.ui.containers.ScrollView","registerComposite",0xb985b3f2,"haxe.ui.containers.ScrollView.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_167_set_onScroll,"haxe.ui.containers.ScrollView","set_onScroll",0x534d49fb,"haxe.ui.containers.ScrollView.set_onScroll","haxe/ui/macros/Macros.hx",167,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void ScrollView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_32_new)
HXDLIN(  32)		super::__construct();
            	}

Dynamic ScrollView_obj::__CreateEmpty() { return new ScrollView_obj; }

void *ScrollView_obj::_hx_vtable = 0;

Dynamic ScrollView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollView_obj > _hx_result = new ScrollView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScrollView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x433ebabe) {
					return inClassId==(int)0x395782b4 || inClassId==(int)0x433ebabe;
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

static ::haxe::ui::core::IScrollView_obj _hx_haxe_ui_containers_ScrollView__hx_haxe_ui_core_IScrollView= {
	( void (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::containers::ScrollView_obj::ensureVisible,
};

void *ScrollView_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x6fc0ac82: return &_hx_haxe_ui_containers_ScrollView__hx_haxe_ui_core_IScrollView;
	}
	return super::_hx_getInterface(inHash);
}

void ScrollView_obj::ensureVisible( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_557_ensureVisible)
HXLINE( 558)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 559)			return;
            		}
HXLINE( 561)		this->behaviours->call(HX_("ensureVisible",54,fe,02,7c),component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,ensureVisible,(void))

void ScrollView_obj::validateComponentInternal(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_d194136255627609_60_validateComponentInternal)
HXLINE(  61)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE(  62)			this->super::validateComponentInternal(nextFrame);
HXLINE(  63)			return;
            		}
HXLINE(  65)		bool scrollInvalid = this->isComponentInvalid(HX_("scroll",0d,d8,64,47));
HXLINE(  66)		bool layoutInvalid = this->isComponentInvalid(HX_("layout",aa,ae,b8,58));
HXLINE(  68)		this->super::validateComponentInternal(nextFrame);
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		if (!(scrollInvalid)) {
HXLINE(  70)			_hx_tmp = layoutInvalid;
            		}
            		else {
HXLINE(  70)			_hx_tmp = true;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_compositeBuilder)->checkScrolls();
HXLINE(  72)			::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_compositeBuilder)->updateScrollRect();
            		}
            	}


bool ScrollView_obj::get_isScroller(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_77_get_isScroller)
HXDLIN(  77)		return true;
            	}


void ScrollView_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("virtual",0b,9e,11,17),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::Virtual >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("contentLayoutName",ae,9c,1f,41),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ContentLayoutName >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("vertical",76,bc,15,6a)));
HXLINE( 539)		this->behaviours->_hx_register(HX_("contentWidth",0d,0a,f1,b0),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ContentWidth >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("percentContentWidth",72,94,55,51),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::PercentContentWidth >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("contentHeight",00,3a,47,d8),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ContentHeight >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("percentContentHeight",fb,c7,db,8f),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::PercentContentHeight >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("hscrollPos",1f,b6,47,5c),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::HScrollPos >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("hscrollMax",2f,63,45,5c),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::HScrollMax >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("hscrollPageSize",45,4a,45,67),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::HScrollPageSize >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("vscrollPos",51,44,5a,e0),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::VScrollPos >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("vscrollMax",61,f1,57,e0),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::VScrollMax >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("vscrollPageSize",d3,06,08,8d),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::VScrollPageSize >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("scrollMode",10,62,20,06),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ScrollModeBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("drag",f4,2b,70,42)));
HXLINE( 539)		this->behaviours->_hx_register(HX_("contents",1a,05,24,2f),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::GetContents >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("autoHideScrolls",f5,c3,3e,9c),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 543)		_hx_tmp2->_hx_register(HX_("allowAutoScroll",c5,f6,f0,14),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true));
HXLINE( 578)		this->behaviours->_hx_register(HX_("ensureVisible",54,fe,02,7c),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::EnsureVisible >(),null());
            	}


bool ScrollView_obj::get_virtual(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_virtual)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("virtual",0b,9e,11,17)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_virtual,return )

bool ScrollView_obj::set_virtual(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_virtual)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("virtual",0b,9e,11,17),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("virtual",0b,9e,11,17)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_virtual,return )

::String ScrollView_obj::get_contentLayoutName(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_contentLayoutName)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("contentLayoutName",ae,9c,1f,41)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contentLayoutName,return )

::String ScrollView_obj::set_contentLayoutName(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_506_set_contentLayoutName)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("contentLayoutName",ae,9c,1f,41),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("contentLayoutName",ae,9c,1f,41),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("contentLayoutName",ae,9c,1f,41)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contentLayoutName,return )

 ::Dynamic ScrollView_obj::get_contentWidth(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_contentWidth)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("contentWidth",0d,0a,f1,b0)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contentWidth,return )

 ::Dynamic ScrollView_obj::set_contentWidth( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_contentWidth)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("contentWidth",0d,0a,f1,b0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("contentWidth",0d,0a,f1,b0)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contentWidth,return )

 ::Dynamic ScrollView_obj::get_percentContentWidth(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_percentContentWidth)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("percentContentWidth",72,94,55,51)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_percentContentWidth,return )

 ::Dynamic ScrollView_obj::set_percentContentWidth( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_percentContentWidth)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("percentContentWidth",72,94,55,51),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("percentContentWidth",72,94,55,51)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_percentContentWidth,return )

 ::Dynamic ScrollView_obj::get_contentHeight(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_contentHeight)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("contentHeight",00,3a,47,d8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contentHeight,return )

 ::Dynamic ScrollView_obj::set_contentHeight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_contentHeight)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("contentHeight",00,3a,47,d8),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("contentHeight",00,3a,47,d8)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contentHeight,return )

 ::Dynamic ScrollView_obj::get_percentContentHeight(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_percentContentHeight)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("percentContentHeight",fb,c7,db,8f)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_percentContentHeight,return )

 ::Dynamic ScrollView_obj::set_percentContentHeight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_percentContentHeight)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("percentContentHeight",fb,c7,db,8f),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("percentContentHeight",fb,c7,db,8f)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_percentContentHeight,return )

Float ScrollView_obj::get_hscrollPos(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_hscrollPos)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("hscrollPos",1f,b6,47,5c)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollPos,return )

Float ScrollView_obj::set_hscrollPos(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_hscrollPos)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("hscrollPos",1f,b6,47,5c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("hscrollPos",1f,b6,47,5c)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollPos,return )

Float ScrollView_obj::get_hscrollMax(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_hscrollMax)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("hscrollMax",2f,63,45,5c)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollMax,return )

Float ScrollView_obj::set_hscrollMax(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_hscrollMax)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("hscrollMax",2f,63,45,5c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("hscrollMax",2f,63,45,5c)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollMax,return )

Float ScrollView_obj::get_hscrollPageSize(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_hscrollPageSize)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("hscrollPageSize",45,4a,45,67)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollPageSize,return )

Float ScrollView_obj::set_hscrollPageSize(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_hscrollPageSize)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("hscrollPageSize",45,4a,45,67),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("hscrollPageSize",45,4a,45,67)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollPageSize,return )

Float ScrollView_obj::get_vscrollPos(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_vscrollPos)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("vscrollPos",51,44,5a,e0)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollPos,return )

Float ScrollView_obj::set_vscrollPos(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_vscrollPos)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("vscrollPos",51,44,5a,e0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("vscrollPos",51,44,5a,e0)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollPos,return )

Float ScrollView_obj::get_vscrollMax(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_vscrollMax)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("vscrollMax",61,f1,57,e0)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollMax,return )

Float ScrollView_obj::set_vscrollMax(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_vscrollMax)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("vscrollMax",61,f1,57,e0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("vscrollMax",61,f1,57,e0)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollMax,return )

Float ScrollView_obj::get_vscrollPageSize(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_vscrollPageSize)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("vscrollPageSize",d3,06,08,8d)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollPageSize,return )

Float ScrollView_obj::set_vscrollPageSize(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_vscrollPageSize)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("vscrollPageSize",d3,06,08,8d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("vscrollPageSize",d3,06,08,8d)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollPageSize,return )

::String ScrollView_obj::get_scrollMode(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_scrollMode)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("scrollMode",10,62,20,06)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_scrollMode,return )

::String ScrollView_obj::set_scrollMode(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_scrollMode)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("scrollMode",10,62,20,06),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("scrollMode",10,62,20,06)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_scrollMode,return )

 ::haxe::ui::core::Component ScrollView_obj::get_contents(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_468_get_contents)
HXLINE( 469)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 470)			return null();
            		}
HXLINE( 472)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("contents",1a,05,24,2f)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contents,return )

 ::haxe::ui::core::Component ScrollView_obj::set_contents( ::haxe::ui::core::Component value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_contents)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("contents",1a,05,24,2f),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("contents",1a,05,24,2f)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contents,return )

bool ScrollView_obj::get_autoHideScrolls(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_autoHideScrolls)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("autoHideScrolls",f5,c3,3e,9c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_autoHideScrolls,return )

bool ScrollView_obj::set_autoHideScrolls(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_autoHideScrolls)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("autoHideScrolls",f5,c3,3e,9c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("autoHideScrolls",f5,c3,3e,9c)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_autoHideScrolls,return )

bool ScrollView_obj::get_allowAutoScroll(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_475_get_allowAutoScroll)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("allowAutoScroll",c5,f6,f0,14)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_allowAutoScroll,return )

bool ScrollView_obj::set_allowAutoScroll(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_520_set_allowAutoScroll)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("allowAutoScroll",c5,f6,f0,14),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("allowAutoScroll",c5,f6,f0,14)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_allowAutoScroll,return )

 ::haxe::ui::core::ComponentContainer ScrollView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_78ca0428d63f675c_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::ScrollView c = ( ( ::haxe::ui::containers::ScrollView)(this->super::cloneComponent()) );
HXLINE( 382)		c->set_virtual(this->get_virtual());
HXLINE( 380)		if (::hx::IsNotNull( this->get_contentLayoutName() )) {
HXLINE( 380)			c->set_contentLayoutName(this->get_contentLayoutName());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_contentWidth() )) {
HXLINE( 380)			c->set_contentWidth(this->get_contentWidth());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_percentContentWidth() )) {
HXLINE( 380)			c->set_percentContentWidth(this->get_percentContentWidth());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_contentHeight() )) {
HXLINE( 380)			c->set_contentHeight(this->get_contentHeight());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_percentContentHeight() )) {
HXLINE( 380)			c->set_percentContentHeight(this->get_percentContentHeight());
            		}
HXLINE( 382)		c->set_hscrollPos(this->get_hscrollPos());
HXDLIN( 382)		c->set_hscrollMax(this->get_hscrollMax());
HXDLIN( 382)		c->set_hscrollPageSize(this->get_hscrollPageSize());
HXDLIN( 382)		c->set_vscrollPos(this->get_vscrollPos());
HXDLIN( 382)		c->set_vscrollMax(this->get_vscrollMax());
HXDLIN( 382)		c->set_vscrollPageSize(this->get_vscrollPageSize());
HXLINE( 380)		if (::hx::IsNotNull( this->get_scrollMode() )) {
HXLINE( 380)			c->set_scrollMode(this->get_scrollMode());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_contents() )) {
HXLINE( 380)			c->set_contents(this->get_contents());
            		}
HXLINE( 382)		c->set_autoHideScrolls(this->get_autoHideScrolls());
HXDLIN( 382)		c->set_allowAutoScroll(this->get_allowAutoScroll());
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


 ::haxe::ui::core::ComponentContainer ScrollView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::ScrollView_obj::__alloc( HX_CTX );
            	}


void ScrollView_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::ScrollViewEvents >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::ScrollViewBuilder >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::ScrollViewLayout >();
            	}


 ::Dynamic ScrollView_obj::set_onScroll( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_167_set_onScroll)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onScroll )) {
HXLINE( 169)			this->unregisterEvent(HX_("scrollscroll",da,b7,92,6a),this->_internal__onScroll);
HXLINE( 170)			this->_internal__onScroll = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onScroll = value;
HXLINE( 174)			this->registerEvent(HX_("scrollscroll",da,b7,92,6a),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_onScroll,return )


::hx::ObjectPtr< ScrollView_obj > ScrollView_obj::__new() {
	::hx::ObjectPtr< ScrollView_obj > __this = new ScrollView_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScrollView_obj > ScrollView_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScrollView_obj *__this = (ScrollView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollView_obj), true, "haxe.ui.containers.ScrollView"));
	*(void **)__this = ScrollView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScrollView_obj::ScrollView_obj()
{
}

void ScrollView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollView);
	HX_MARK_MEMBER_NAME(_internal__onScroll,"_internal__onScroll");
	HX_MARK_MEMBER_NAME(onScroll,"onScroll");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_internal__onScroll,"_internal__onScroll");
	HX_VISIT_MEMBER_NAME(onScroll,"onScroll");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"virtual") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_virtual() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contents") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contents() ); }
		if (HX_FIELD_EQ(inName,"onScroll") ) { return ::hx::Val( onScroll ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hscrollPos() ); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hscrollMax() ); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vscrollPos() ); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vscrollMax() ); }
		if (HX_FIELD_EQ(inName,"scrollMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollMode() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_virtual") ) { return ::hx::Val( get_virtual_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_virtual") ) { return ::hx::Val( set_virtual_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contentWidth() ); }
		if (HX_FIELD_EQ(inName,"get_contents") ) { return ::hx::Val( get_contents_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contents") ) { return ::hx::Val( set_contents_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onScroll") ) { return ::hx::Val( set_onScroll_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ensureVisible") ) { return ::hx::Val( ensureVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contentHeight() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isScroller") ) { return ::hx::Val( get_isScroller_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollPos") ) { return ::hx::Val( get_hscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hscrollPos") ) { return ::hx::Val( set_hscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollMax") ) { return ::hx::Val( get_hscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hscrollMax") ) { return ::hx::Val( set_hscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollPos") ) { return ::hx::Val( get_vscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vscrollPos") ) { return ::hx::Val( set_vscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollMax") ) { return ::hx::Val( get_vscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vscrollMax") ) { return ::hx::Val( set_vscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollMode") ) { return ::hx::Val( get_scrollMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollMode") ) { return ::hx::Val( set_scrollMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hscrollPageSize() ); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vscrollPageSize() ); }
		if (HX_FIELD_EQ(inName,"autoHideScrolls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoHideScrolls() ); }
		if (HX_FIELD_EQ(inName,"allowAutoScroll") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowAutoScroll() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_contentWidth") ) { return ::hx::Val( get_contentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contentWidth") ) { return ::hx::Val( set_contentWidth_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLayoutName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contentLayoutName() ); }
		if (HX_FIELD_EQ(inName,"get_contentHeight") ) { return ::hx::Val( get_contentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contentHeight") ) { return ::hx::Val( set_contentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"percentContentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentContentWidth() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollPageSize") ) { return ::hx::Val( get_hscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hscrollPageSize") ) { return ::hx::Val( set_hscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollPageSize") ) { return ::hx::Val( get_vscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vscrollPageSize") ) { return ::hx::Val( set_vscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoHideScrolls") ) { return ::hx::Val( get_autoHideScrolls_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoHideScrolls") ) { return ::hx::Val( set_autoHideScrolls_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_allowAutoScroll") ) { return ::hx::Val( get_allowAutoScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowAutoScroll") ) { return ::hx::Val( set_allowAutoScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onScroll") ) { return ::hx::Val( _internal__onScroll ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percentContentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentContentHeight() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_contentLayoutName") ) { return ::hx::Val( get_contentLayoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contentLayoutName") ) { return ::hx::Val( set_contentLayoutName_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_percentContentWidth") ) { return ::hx::Val( get_percentContentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentContentWidth") ) { return ::hx::Val( set_percentContentWidth_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_percentContentHeight") ) { return ::hx::Val( get_percentContentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentContentHeight") ) { return ::hx::Val( set_percentContentHeight_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"validateComponentInternal") ) { return ::hx::Val( validateComponentInternal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"virtual") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_virtual(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contents") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contents(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		if (HX_FIELD_EQ(inName,"onScroll") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onScroll(inValue.Cast<  ::Dynamic >()) );onScroll=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hscrollPos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hscrollMax(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vscrollPos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vscrollMax(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scrollMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollMode(inValue.Cast< ::String >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contentWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"contentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contentHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hscrollPageSize(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vscrollPageSize(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"autoHideScrolls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoHideScrolls(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"allowAutoScroll") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowAutoScroll(inValue.Cast< bool >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLayoutName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contentLayoutName(inValue.Cast< ::String >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"percentContentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentContentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_internal__onScroll") ) { _internal__onScroll=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percentContentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentContentHeight(inValue.Cast<  ::Dynamic >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("virtual",0b,9e,11,17));
	outFields->push(HX_("contentLayoutName",ae,9c,1f,41));
	outFields->push(HX_("contentWidth",0d,0a,f1,b0));
	outFields->push(HX_("percentContentWidth",72,94,55,51));
	outFields->push(HX_("contentHeight",00,3a,47,d8));
	outFields->push(HX_("percentContentHeight",fb,c7,db,8f));
	outFields->push(HX_("hscrollPos",1f,b6,47,5c));
	outFields->push(HX_("hscrollMax",2f,63,45,5c));
	outFields->push(HX_("hscrollPageSize",45,4a,45,67));
	outFields->push(HX_("vscrollPos",51,44,5a,e0));
	outFields->push(HX_("vscrollMax",61,f1,57,e0));
	outFields->push(HX_("vscrollPageSize",d3,06,08,8d));
	outFields->push(HX_("scrollMode",10,62,20,06));
	outFields->push(HX_("contents",1a,05,24,2f));
	outFields->push(HX_("autoHideScrolls",f5,c3,3e,9c));
	outFields->push(HX_("allowAutoScroll",c5,f6,f0,14));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScrollView_obj,_internal__onScroll),HX_("_internal__onScroll",48,7b,41,74)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScrollView_obj,onScroll),HX_("onScroll",8c,ce,11,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollView_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollView_obj_sMemberFields[] = {
	HX_("ensureVisible",54,fe,02,7c),
	HX_("validateComponentInternal",a4,7f,0c,11),
	HX_("get_isScroller",0d,a8,f9,7c),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_virtual",22,fe,0b,9d),
	HX_("set_virtual",2e,05,79,a7),
	HX_("get_contentLayoutName",85,9f,cd,bf),
	HX_("set_contentLayoutName",91,6d,d6,13),
	HX_("get_contentWidth",96,f6,8f,b5),
	HX_("set_contentWidth",0a,e4,d1,0b),
	HX_("get_percentContentWidth",09,3b,ab,59),
	HX_("set_percentContentWidth",15,a4,0c,5c),
	HX_("get_contentHeight",57,45,b7,de),
	HX_("set_contentHeight",63,1d,25,02),
	HX_("get_percentContentHeight",84,e5,77,d2),
	HX_("set_percentContentHeight",f8,66,52,e5),
	HX_("get_hscrollPos",68,3e,3d,d2),
	HX_("set_hscrollPos",dc,26,5d,f2),
	HX_("get_hscrollMax",78,eb,3a,d2),
	HX_("set_hscrollMax",ec,d3,5a,f2),
	HX_("get_hscrollPageSize",5c,19,50,f2),
	HX_("set_hscrollPageSize",68,0c,ed,2e),
	HX_("get_vscrollPos",9a,cc,4f,56),
	HX_("set_vscrollPos",0e,b5,6f,76),
	HX_("get_vscrollMax",aa,79,4d,56),
	HX_("set_vscrollMax",1e,62,6d,76),
	HX_("get_vscrollPageSize",ea,d5,12,18),
	HX_("set_vscrollPageSize",f6,c8,af,54),
	HX_("get_scrollMode",59,ea,15,7c),
	HX_("set_scrollMode",cd,d2,35,9c),
	HX_("get_contents",23,b9,3d,e4),
	HX_("set_contents",97,dc,36,f9),
	HX_("get_autoHideScrolls",0c,93,49,27),
	HX_("set_autoHideScrolls",18,86,e6,63),
	HX_("get_allowAutoScroll",dc,c5,fb,9f),
	HX_("set_allowAutoScroll",e8,b8,98,dc),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("_internal__onScroll",48,7b,41,74),
	HX_("onScroll",8c,ce,11,27),
	HX_("set_onScroll",09,a6,24,f1),
	::String(null()) };

::hx::Class ScrollView_obj::__mClass;

void ScrollView_obj::__register()
{
	ScrollView_obj _hx_dummy;
	ScrollView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.ScrollView",bc,43,e9,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
