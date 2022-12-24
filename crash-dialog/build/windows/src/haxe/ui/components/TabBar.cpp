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
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBarLayout
#include <haxe/ui/components/TabBarLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_ButtonHeight
#include <haxe/ui/components/_TabBar/ButtonHeight.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_ButtonWidth
#include <haxe/ui/components/_TabBar/ButtonWidth.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Closable
#include <haxe/ui/components/_TabBar/Closable.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Events
#include <haxe/ui/components/_TabBar/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_GetTab
#include <haxe/ui/components/_TabBar/GetTab.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_RemoveTab
#include <haxe/ui/components/_TabBar/RemoveTab.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_SelectedIndex
#include <haxe/ui/components/_TabBar/SelectedIndex.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_SelectedTab
#include <haxe/ui/components/_TabBar/SelectedTab.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_TabCount
#include <haxe/ui/components/_TabBar/TabCount.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_TabPosition
#include <haxe/ui/components/_TabBar/TabPosition.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5013957fd959d036_20_new,"haxe.ui.components.TabBar","new",0xee5b7296,"haxe.ui.components.TabBar.new","haxe/ui/components/TabBar.hx",20,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_568_removeTab,"haxe.ui.components.TabBar","removeTab",0xd2e7a727,"haxe.ui.components.TabBar.removeTab","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_565_getTab,"haxe.ui.components.TabBar","getTab",0x2bc2b6e9,"haxe.ui.components.TabBar.getTab","haxe/ui/macros/Macros.hx",565,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_138_registerComposite,"haxe.ui.components.TabBar","registerComposite",0x72f2b9da,"haxe.ui.components.TabBar.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_441_registerBehaviours,"haxe.ui.components.TabBar","registerBehaviours",0xa46ef263,"haxe.ui.components.TabBar.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_475_get_selectedIndex,"haxe.ui.components.TabBar","get_selectedIndex",0x2f3956c4,"haxe.ui.components.TabBar.get_selectedIndex","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_520_set_selectedIndex,"haxe.ui.components.TabBar","set_selectedIndex",0x52a72ed0,"haxe.ui.components.TabBar.set_selectedIndex","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_468_get_selectedTab,"haxe.ui.components.TabBar","get_selectedTab",0xd37e6587,"haxe.ui.components.TabBar.get_selectedTab","haxe/ui/macros/Macros.hx",468,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_520_set_selectedTab,"haxe.ui.components.TabBar","set_selectedTab",0xcf49e293,"haxe.ui.components.TabBar.set_selectedTab","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_475_get_tabPosition,"haxe.ui.components.TabBar","get_tabPosition",0x498566eb,"haxe.ui.components.TabBar.get_tabPosition","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_506_set_tabPosition,"haxe.ui.components.TabBar","set_tabPosition",0x4550e3f7,"haxe.ui.components.TabBar.set_tabPosition","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_475_get_tabCount,"haxe.ui.components.TabBar","get_tabCount",0xb6cae14d,"haxe.ui.components.TabBar.get_tabCount","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_520_set_tabCount,"haxe.ui.components.TabBar","set_tabCount",0xcbc404c1,"haxe.ui.components.TabBar.set_tabCount","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_475_get_closable,"haxe.ui.components.TabBar","get_closable",0x806d873a,"haxe.ui.components.TabBar.get_closable","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_520_set_closable,"haxe.ui.components.TabBar","set_closable",0x9566aaae,"haxe.ui.components.TabBar.set_closable","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_475_get_buttonWidth,"haxe.ui.components.TabBar","get_buttonWidth",0xbb7c4981,"haxe.ui.components.TabBar.get_buttonWidth","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_520_set_buttonWidth,"haxe.ui.components.TabBar","set_buttonWidth",0xb747c68d,"haxe.ui.components.TabBar.set_buttonWidth","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_475_get_buttonHeight,"haxe.ui.components.TabBar","get_buttonHeight",0x0793800c,"haxe.ui.components.TabBar.get_buttonHeight","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_520_set_buttonHeight,"haxe.ui.components.TabBar","set_buttonHeight",0x5dd56d80,"haxe.ui.components.TabBar.set_buttonHeight","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_36e8987585bd609b_565_cloneComponent,"haxe.ui.components.TabBar","cloneComponent",0xf96fa72a,"haxe.ui.components.TabBar.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_423_self,"haxe.ui.components.TabBar","self",0xa4f6d896,"haxe.ui.components.TabBar.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void TabBar_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_20_new)
HXDLIN(  20)		super::__construct();
            	}

Dynamic TabBar_obj::__CreateEmpty() { return new TabBar_obj; }

void *TabBar_obj::_hx_vtable = 0;

Dynamic TabBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabBar_obj > _hx_result = new TabBar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabBar_obj::_hx_isInstanceOf(int inClassId) {
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
				return inClassId==(int)0x41765b2e || inClassId==(int)0x4ba87886;
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

 ::haxe::ui::util::VariantType TabBar_obj::removeTab(int index){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_568_removeTab)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("removeTab",71,78,f3,ca),index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,removeTab,return )

 ::haxe::ui::core::Component TabBar_obj::getTab(int index){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_565_getTab)
HXDLIN( 565)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->call(HX_("getTab",5f,93,27,a3),index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,getTab,return )

void TabBar_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_TabBar::Builder >();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::_TabBar::Events >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::TabBarLayout >();
            	}


void TabBar_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("selectedIndex",b7,76,56,b4),::hx::ClassOf< ::haxe::ui::components::_TabBar::SelectedIndex >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXLINE( 539)		this->behaviours->_hx_register(HX_("selectedTab",ba,92,0f,30),::hx::ClassOf< ::haxe::ui::components::_TabBar::SelectedTab >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("tabPosition",1e,94,16,a6),::hx::ClassOf< ::haxe::ui::components::_TabBar::TabPosition >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("top",95,66,58,00)));
HXLINE( 539)		this->behaviours->_hx_register(HX_("tabCount",3a,c6,07,b9),::hx::ClassOf< ::haxe::ui::components::_TabBar::TabCount >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 543)		_hx_tmp2->_hx_register(HX_("closable",27,6c,aa,82),::hx::ClassOf< ::haxe::ui::components::_TabBar::Closable >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXDLIN( 543)		this->behaviours->_hx_register(HX_("buttonWidth",b4,76,0d,18),::hx::ClassOf< ::haxe::ui::components::_TabBar::ButtonWidth >(),null());
HXDLIN( 543)		this->behaviours->_hx_register(HX_("buttonHeight",79,df,09,aa),::hx::ClassOf< ::haxe::ui::components::_TabBar::ButtonHeight >(),null());
HXLINE( 578)		this->behaviours->_hx_register(HX_("removeTab",71,78,f3,ca),::hx::ClassOf< ::haxe::ui::components::_TabBar::RemoveTab >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("getTab",5f,93,27,a3),::hx::ClassOf< ::haxe::ui::components::_TabBar::GetTab >(),null());
            	}


int TabBar_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_475_get_selectedIndex)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("selectedIndex",b7,76,56,b4)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedIndex,return )

int TabBar_obj::set_selectedIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_520_set_selectedIndex)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedIndex",b7,76,56,b4),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedIndex",b7,76,56,b4)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_selectedIndex,return )

 ::haxe::ui::core::Component TabBar_obj::get_selectedTab(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_468_get_selectedTab)
HXLINE( 469)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 470)			return null();
            		}
HXLINE( 472)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("selectedTab",ba,92,0f,30)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedTab,return )

 ::haxe::ui::core::Component TabBar_obj::set_selectedTab( ::haxe::ui::core::Component value){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_520_set_selectedTab)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedTab",ba,92,0f,30),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedTab",ba,92,0f,30)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_selectedTab,return )

::String TabBar_obj::get_tabPosition(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_475_get_tabPosition)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("tabPosition",1e,94,16,a6)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_tabPosition,return )

::String TabBar_obj::set_tabPosition(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_506_set_tabPosition)
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
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("tabPosition",1e,94,16,a6),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("tabPosition",1e,94,16,a6),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("tabPosition",1e,94,16,a6)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_tabPosition,return )

int TabBar_obj::get_tabCount(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_475_get_tabCount)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("tabCount",3a,c6,07,b9)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_tabCount,return )

int TabBar_obj::set_tabCount(int value){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_520_set_tabCount)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("tabCount",3a,c6,07,b9),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("tabCount",3a,c6,07,b9)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_tabCount,return )

bool TabBar_obj::get_closable(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_475_get_closable)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("closable",27,6c,aa,82)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_closable,return )

bool TabBar_obj::set_closable(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_520_set_closable)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("closable",27,6c,aa,82),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("closable",27,6c,aa,82)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_closable,return )

 ::Dynamic TabBar_obj::get_buttonWidth(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_475_get_buttonWidth)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("buttonWidth",b4,76,0d,18)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_buttonWidth,return )

 ::Dynamic TabBar_obj::set_buttonWidth( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_520_set_buttonWidth)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("buttonWidth",b4,76,0d,18),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("buttonWidth",b4,76,0d,18)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_buttonWidth,return )

 ::Dynamic TabBar_obj::get_buttonHeight(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_475_get_buttonHeight)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("buttonHeight",79,df,09,aa)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_buttonHeight,return )

 ::Dynamic TabBar_obj::set_buttonHeight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_520_set_buttonHeight)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("buttonHeight",79,df,09,aa),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("buttonHeight",79,df,09,aa)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_buttonHeight,return )

 ::haxe::ui::core::ComponentContainer TabBar_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_36e8987585bd609b_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::TabBar c = ( ( ::haxe::ui::components::TabBar)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer TabBar_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::TabBar_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< TabBar_obj > TabBar_obj::__new() {
	::hx::ObjectPtr< TabBar_obj > __this = new TabBar_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabBar_obj > TabBar_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabBar_obj *__this = (TabBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabBar_obj), true, "haxe.ui.components.TabBar"));
	*(void **)__this = TabBar_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabBar_obj::TabBar_obj()
{
}

::hx::Val TabBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getTab") ) { return ::hx::Val( getTab_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabCount() ); }
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_closable() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeTab") ) { return ::hx::Val( removeTab_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"selectedTab") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedTab() ); }
		if (HX_FIELD_EQ(inName,"tabPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabPosition() ); }
		if (HX_FIELD_EQ(inName,"buttonWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonWidth() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_tabCount") ) { return ::hx::Val( get_tabCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabCount") ) { return ::hx::Val( set_tabCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_closable") ) { return ::hx::Val( get_closable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_closable") ) { return ::hx::Val( set_closable_dyn() ); }
		if (HX_FIELD_EQ(inName,"buttonHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonHeight() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_selectedTab") ) { return ::hx::Val( get_selectedTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedTab") ) { return ::hx::Val( set_selectedTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabPosition") ) { return ::hx::Val( get_tabPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabPosition") ) { return ::hx::Val( set_tabPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_buttonWidth") ) { return ::hx::Val( get_buttonWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonWidth") ) { return ::hx::Val( set_buttonWidth_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_buttonHeight") ) { return ::hx::Val( get_buttonHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonHeight") ) { return ::hx::Val( set_buttonHeight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabCount(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_closable(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"selectedTab") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedTab(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		if (HX_FIELD_EQ(inName,"tabPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabPosition(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"buttonWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("selectedTab",ba,92,0f,30));
	outFields->push(HX_("tabPosition",1e,94,16,a6));
	outFields->push(HX_("tabCount",3a,c6,07,b9));
	outFields->push(HX_("closable",27,6c,aa,82));
	outFields->push(HX_("buttonWidth",b4,76,0d,18));
	outFields->push(HX_("buttonHeight",79,df,09,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabBar_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabBar_obj_sStaticStorageInfo = 0;
#endif

static ::String TabBar_obj_sMemberFields[] = {
	HX_("removeTab",71,78,f3,ca),
	HX_("getTab",5f,93,27,a3),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_selectedTab",51,4a,f1,f0),
	HX_("set_selectedTab",5d,c7,bc,ec),
	HX_("get_tabPosition",b5,4b,f8,66),
	HX_("set_tabPosition",c1,c8,c3,62),
	HX_("get_tabCount",43,7a,21,6e),
	HX_("set_tabCount",b7,9d,1a,83),
	HX_("get_closable",30,20,c4,37),
	HX_("set_closable",a4,43,bd,4c),
	HX_("get_buttonWidth",4b,2e,ef,d8),
	HX_("set_buttonWidth",57,ab,ba,d4),
	HX_("get_buttonHeight",02,cc,a8,ae),
	HX_("set_buttonHeight",76,b9,ea,04),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class TabBar_obj::__mClass;

void TabBar_obj::__register()
{
	TabBar_obj _hx_dummy;
	TabBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.TabBar",a4,2f,25,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
