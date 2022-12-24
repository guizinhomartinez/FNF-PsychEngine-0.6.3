#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_CallLater
#include <haxe/ui/CallLater.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_actions_ActionManager
#include <haxe/ui/actions/ActionManager.h>
#endif
#ifndef INCLUDED_haxe_ui_actions_IActionInputSource
#include <haxe/ui/actions/IActionInputSource.h>
#endif
#ifndef INCLUDED_haxe_ui_actions_KeyboardActionInputSource
#include <haxe/ui/actions/KeyboardActionInputSource.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_CallLaterImpl
#include <haxe/ui/backend/CallLaterImpl.h>
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
#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#include <haxe/ui/backend/FocusManagerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerImpl
#include <haxe/ui/backend/FocusManagerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_KeyboardEvent
#include <haxe/ui/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CompositeStyleSheet
#include <haxe/ui/styles/CompositeStyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_Theme
#include <haxe/ui/themes/Theme.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#include <haxe/ui/themes/ThemeManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Defines
#include <haxe/ui/util/Defines.h>
#endif
#ifndef INCLUDED_haxe_ui_util_GenericConfig
#include <haxe/ui/util/GenericConfig.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Properties
#include <haxe/ui/util/Properties.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_26_get_theme,"haxe.ui.Toolkit","get_theme",0x863ecf3e,"haxe.ui.Toolkit.get_theme","haxe/ui/Toolkit.hx",26,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_29_set_theme,"haxe.ui.Toolkit","set_theme",0x698fbb4a,"haxe.ui.Toolkit.set_theme","haxe/ui/Toolkit.hx",29,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_44_get_backendProperties,"haxe.ui.Toolkit","get_backendProperties",0x0d72e9dc,"haxe.ui.Toolkit.get_backendProperties","haxe/ui/Toolkit.hx",44,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_50_build,"haxe.ui.Toolkit","build",0x3d2a890c,"haxe.ui.Toolkit.build","haxe/ui/Toolkit.hx",50,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_61_buildBackend,"haxe.ui.Toolkit","buildBackend",0x925ed468,"haxe.ui.Toolkit.buildBackend","haxe/ui/Toolkit.hx",61,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_72_get_initialized,"haxe.ui.Toolkit","get_initialized",0x6e4c9c09,"haxe.ui.Toolkit.get_initialized","haxe/ui/Toolkit.hx",72,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_75_init,"haxe.ui.Toolkit","init",0xfa8c72f2,"haxe.ui.Toolkit.init","haxe/ui/Toolkit.hx",75,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_87_onKeyDown,"haxe.ui.Toolkit","onKeyDown",0xa7011720,"haxe.ui.Toolkit.onKeyDown","haxe/ui/Toolkit.hx",87,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_98_get_assets,"haxe.ui.Toolkit","get_assets",0xb69205ae,"haxe.ui.Toolkit.get_assets","haxe/ui/Toolkit.hx",98,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_103_get_screen,"haxe.ui.Toolkit","get_screen",0xb1ebf897,"haxe.ui.Toolkit.get_screen","haxe/ui/Toolkit.hx",103,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_107_set_pixelsPerRem,"haxe.ui.Toolkit","set_pixelsPerRem",0xae42c469,"haxe.ui.Toolkit.set_pixelsPerRem","haxe/ui/Toolkit.hx",107,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_121_get_autoScaleDPIThreshold,"haxe.ui.Toolkit","get_autoScaleDPIThreshold",0x87fa48fe,"haxe.ui.Toolkit.get_autoScaleDPIThreshold","haxe/ui/Toolkit.hx",121,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_130_get_scaleX,"haxe.ui.Toolkit","get_scaleX",0xa6b4a7b9,"haxe.ui.Toolkit.get_scaleX","haxe/ui/Toolkit.hx",130,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_149_set_scaleX,"haxe.ui.Toolkit","set_scaleX",0xaa32462d,"haxe.ui.Toolkit.set_scaleX","haxe/ui/Toolkit.hx",149,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_160_get_scaleY,"haxe.ui.Toolkit","get_scaleY",0xa6b4a7ba,"haxe.ui.Toolkit.get_scaleY","haxe/ui/Toolkit.hx",160,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_179_set_scaleY,"haxe.ui.Toolkit","set_scaleY",0xaa32462e,"haxe.ui.Toolkit.set_scaleY","haxe/ui/Toolkit.hx",179,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_190_get_scale,"haxe.ui.Toolkit","get_scale",0xef871fbf,"haxe.ui.Toolkit.get_scale","haxe/ui/Toolkit.hx",190,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_192_set_scale,"haxe.ui.Toolkit","set_scale",0xd2d80bcb,"haxe.ui.Toolkit.set_scale","haxe/ui/Toolkit.hx",192,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_199_callLater,"haxe.ui.Toolkit","callLater",0x2f0b05ec,"haxe.ui.Toolkit.callLater","haxe/ui/Toolkit.hx",199,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_17_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",17,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_19_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",19,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_21_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",21,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_23_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",23,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_42_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",42,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_49_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",49,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_60_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",60,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_69_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",69,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_106_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",106,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_118_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",118,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_119_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",119,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_128_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",128,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_158_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",158,0xed163512)
namespace haxe{
namespace ui{

void Toolkit_obj::__construct() { }

Dynamic Toolkit_obj::__CreateEmpty() { return new Toolkit_obj; }

void *Toolkit_obj::_hx_vtable = 0;

Dynamic Toolkit_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Toolkit_obj > _hx_result = new Toolkit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Toolkit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f607ba4;
}

 ::haxe::ui::styles::CompositeStyleSheet Toolkit_obj::styleSheet;

 ::haxe::ds::StringMap Toolkit_obj::properties;

 ::haxe::ui::util::GenericConfig Toolkit_obj::nativeConfig;

::String Toolkit_obj::_theme;

::String Toolkit_obj::get_theme(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_26_get_theme)
HXDLIN(  26)		return ::haxe::ui::Toolkit_obj::_theme;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_theme,return )

::String Toolkit_obj::set_theme(::String value){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_29_set_theme)
HXLINE(  30)		if ((::haxe::ui::Toolkit_obj::_theme == value)) {
HXLINE(  31)			return value;
            		}
HXLINE(  33)		::haxe::ui::Toolkit_obj::_theme = value;
HXLINE(  34)		if ((::haxe::ui::Toolkit_obj::_initialized == true)) {
HXLINE(  35)			::haxe::ui::themes::ThemeManager_obj::get_instance()->applyTheme(::haxe::ui::Toolkit_obj::_theme);
HXLINE(  36)			::haxe::ui::core::Screen_obj::get_instance()->onThemeChanged();
HXLINE(  37)			::haxe::ui::core::Screen_obj::get_instance()->invalidateAll(null());
            		}
HXLINE(  39)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_theme,return )

 ::haxe::ui::util::Properties Toolkit_obj::_backendProperties;

 ::haxe::ui::util::Properties Toolkit_obj::backendProperties;

 ::haxe::ui::util::Properties Toolkit_obj::get_backendProperties(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_44_get_backendProperties)
HXLINE(  45)		::haxe::ui::Toolkit_obj::buildBackend();
HXLINE(  46)		return ::haxe::ui::Toolkit_obj::_backendProperties;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_backendProperties,return )

bool Toolkit_obj::_built;

void Toolkit_obj::build(){
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_50_build)
HXLINE(  51)		if ((::haxe::ui::Toolkit_obj::_built == true)) {
HXLINE(  52)			return;
            		}
HXLINE(  11)		{
HXLINE(  93)			::haxe::ui::themes::ThemeManager_obj::get_instance()->getTheme(HX_("native",97,c9,1c,22))->parent = HX_("default",c1,d8,c3,9b);
HXLINE( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("native",97,c9,1c,22),HX_("haxeui-core/styles/native/main.css",76,1e,48,cf),((Float)-3.),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("global",63,31,b2,a7),HX_("haxeui-core/styles/global.css",88,82,c9,63),((Float)-4.),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/main.css",ac,d6,ca,62),((Float)-3.),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/buttons.css",38,78,30,88),((Float)-2.99),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/dialogs.css",a2,cd,71,48),((Float)-2.9800000000000004),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/textinputs.css",09,ed,72,81),((Float)-2.9700000000000006),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/scrollbars.css",c0,4c,46,92),((Float)-2.9600000000000009),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/scrollview.css",65,8e,d9,71),((Float)-2.9500000000000011),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/checkboxes.css",64,26,af,d6),((Float)-2.9400000000000013),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/optionboxes.css",1b,c0,25,17),((Float)-2.9300000000000015),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/ranges.css",89,d4,eb,8e),((Float)-2.9200000000000017),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/progressbars.css",e0,cf,d4,b0),((Float)-2.9100000000000019),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/sliders.css",a9,89,67,aa),((Float)-2.9000000000000021),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/steppers.css",35,68,15,e3),((Float)-2.8900000000000023),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/tabs.css",71,55,ad,07),((Float)-2.8800000000000026),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/listview.css",36,28,9e,75),((Float)-2.8700000000000028),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/dropdowns.css",39,62,eb,fe),((Float)-2.860000000000003),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/tableview.css",ea,bc,51,42),((Float)-2.8500000000000032),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/switches.css",55,15,2d,15),((Float)-2.8400000000000034),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/calendars.css",6c,a4,7e,64),((Float)-2.8300000000000036),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/menus.css",eb,34,77,27),((Float)-2.8200000000000038),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/accordion.css",7f,cc,f1,db),((Float)-2.8100000000000041),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/propertygrids.css",6f,0d,0f,bd),((Float)-2.8000000000000043),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/frames.css",19,2c,67,9f),((Float)-2.7900000000000045),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/splitters.css",43,3b,0d,c7),((Float)-2.7800000000000047),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/tooltips.css",03,b3,08,96),((Float)-2.7700000000000049),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/rules.css",6e,b0,74,20),((Float)-2.7600000000000051),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/sidebars.css",ca,b8,c4,c1),((Float)-2.7500000000000053),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/cards.css",1a,0b,84,df),((Float)-2.7400000000000055),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/treeviews.css",47,7e,8e,39),((Float)-2.7300000000000058),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/colorpickers.css",15,07,17,3b),((Float)-2.720000000000006),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/last.css",49,7b,91,9d),((Float)-2.7100000000000062),null());
HXLINE( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("warning-large",ca,77,ac,9a),HX_("haxeui-core/styles/shared/warning-large.png",2b,54,ce,63));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("tooltip-background-color",4e,52,d6,9a),HX_("#fffff8",f5,b7,6e,76));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("tertiary-background-color",df,6b,2a,15),HX_("#ffffff",23,b8,6e,76));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("sort-desc",e0,dc,b4,a0),HX_("haxeui-core/styles/shared/sortable-desc-blue.png",56,c3,0c,7a));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("sort-asc",82,c7,aa,36),HX_("haxeui-core/styles/shared/sortable-asc-blue.png",8c,b2,c1,0c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("solid-background-color-hover",15,01,e9,38),HX_("#fcfcfc",da,b3,38,bc));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("solid-background-color-down",29,4b,b2,b0),HX_("#f0f0f0",01,6b,a2,5e));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("solid-background-color-disabled",c3,03,97,cc),HX_("#fefefe",60,61,07,e3));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("solid-background-color-alt",42,5c,1c,2a),HX_("#fafafa",54,06,6a,95));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("solid-background-color",26,be,a2,8f),HX_("#f6f6f6",93,73,0e,d3));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("selection-text-color",24,28,0d,3d),HX_("#ffffff",23,b8,6e,76));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("selection-background-color-hover",14,21,95,95),HX_("#d9e5f2",74,7f,e1,bf));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("selection-background-color",e5,c4,02,1d),HX_("#b4cbe4",83,97,f9,10));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("secondary-background-color",bd,e0,ce,8b),HX_("#ffffff",23,b8,6e,76));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("search",68,9f,f7,62),HX_("haxeui-core/styles/shared/search.png",bd,d5,f0,bd));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("scrollbar-button-color",8f,09,58,12),HX_("#d6d6d6",d9,4b,05,05));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("scrollbar-background-color",0b,f0,da,25),HX_("#f0f0f0",01,6b,a2,5e));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("question-large",14,ec,90,63),HX_("haxeui-core/styles/shared/help-large.png",c4,c4,fd,b5));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("option-selected",73,35,f8,9d),HX_("haxeui-core/styles/shared/option-blue.png",93,dc,f2,5c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("normal-text-color",29,16,12,fb),HX_("#666666",23,ba,32,82));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("normal-inner-shadow",1d,86,86,31),HX_("drop-shadow(1, 45, #888888, 0.1, 1, 1, 1, 3, true)",79,61,27,bf));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("normal-border-size",9c,ec,6c,bf),HX_("1px",79,90,25,00));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("normal-border-radius",ed,08,df,15),HX_("2px",ba,52,26,00));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("normal-border-color",28,85,65,8d),HX_("#d2d2d2",cd,f0,67,b7));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("normal-background-color-start",3f,11,b0,f3),HX_("#fdfdfd",9d,0a,a0,4f));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("normal-background-color-end",78,bf,95,7f),HX_("#f6f6f6",93,73,0e,d3));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("modal-background-color",e4,af,5e,2d),HX_("#ffffff",23,b8,6e,76));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("menu-shadow",0e,e4,44,f0),HX_("drop-shadow(2, 45, #888888, 0.1, 4, 1, 30, 35, false)",6b,c2,bb,37));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("lighter-text-color",0d,0b,5e,17),HX_("#a0a0a0",b0,87,8b,5b));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("info-large",5c,af,f8,c1),HX_("haxeui-core/styles/shared/info-large.png",b1,84,14,e1));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("hover-text-color",b4,50,a0,fe),HX_("#444444",e3,e4,5a,8d));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("hover-border-color",73,b8,df,3c),HX_("#c0c0c0",6a,af,94,29));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("hover-background-color-start",4a,70,31,90),HX_("#f2f2f2",87,18,71,85));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("hover-background-color-end",c3,b5,b4,1d),HX_("#e1e1e1",e7,2d,05,8b));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("gripper-vertical",f8,a2,ea,94),HX_("haxeui-core/styles/shared/gripper-vertical.png",cd,05,a0,76));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("gripper-horizontal",e6,07,81,4c),HX_("haxeui-core/styles/shared/gripper-horizontal.png",3b,94,53,b6));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("expanded",39,11,cf,f9),HX_("haxeui-core/styles/shared/collapsed-blue.png",e5,27,69,d7));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("error-text-color",28,4e,d2,16),HX_("#ff0000",a3,09,94,52));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("error-large",36,42,a3,27),HX_("haxeui-core/styles/shared/error-large.png",17,cf,df,cf));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("error-background-color",e9,45,7e,ee),HX_("#ffdddd",a3,c4,1a,75));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("down-text-color",ce,93,0d,3a),HX_("#444444",e3,e4,5a,8d));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("down-border-color",0d,76,77,20),HX_("#b3b3b3",d6,1f,c6,7c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("down-background-color-start",64,f2,83,31),HX_("#e6e6e6",b6,df,09,6c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("down-background-color-end",5d,9d,0a,10),HX_("#cccccc",43,f8,2a,87));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("disabled-text-color",f4,0c,eb,1f),HX_("#cccccc",43,f8,2a,87));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("disabled-border-color",b3,04,82,53),HX_("#e4e4e4",30,32,3b,45));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("disabled-background-color-start",8a,8c,c5,44),HX_("#fdfdfd",9d,0a,a0,4f));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("disabled-background-color-end",03,42,dd,0d),HX_("#f6f6f6",93,73,0e,d3));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("dialog-title-color",69,5b,14,eb),HX_("#aaaaaa",03,23,53,92));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("dialog-shadow",05,4c,c5,10),HX_("drop-shadow(1, 45, #888888, 0.2, 30, 2, 1, 3, false)",fc,a3,6a,6e));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("default-background-color",d0,10,0a,0b),HX_("#ffffff",23,b8,6e,76));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("contrast-background-color",6f,23,65,9d),HX_("#ffffff",23,b8,6e,76));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("collapsed",57,ee,11,3e),HX_("haxeui-core/styles/shared/expanded-blue.png",cf,bb,0b,10));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("close-hover",27,d4,2f,af),HX_("haxeui-core/styles/shared/close-button-white.png",98,ae,3a,62));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("close",b8,17,63,48),HX_("haxeui-core/styles/shared/close-button-blue.png",21,59,7b,3e));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("check-selected",c0,ad,c0,8a),HX_("haxeui-core/styles/shared/check-blue.png",54,12,a6,e3));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("blank",54,df,f1,b4),HX_("haxeui-core/styles/shared/blank.png",b5,b2,7d,bd));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("arrow-up-down",10,bd,57,89),HX_("haxeui-core/styles/shared/sortable-arrows-blue.png",3d,77,2b,80));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("arrow-up",9f,95,a0,fd),HX_("haxeui-core/styles/shared/up-arrow-blue.png",31,ce,9d,05));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("arrow-right-square",72,b4,fa,1b),HX_("haxeui-core/styles/shared/right-arrow-square-blue.png",36,a5,a8,f3));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("arrow-right",18,bf,bd,6d),HX_("haxeui-core/styles/shared/right-arrow-blue.png",44,d9,93,f7));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("arrow-left",4b,90,2d,11),HX_("haxeui-core/styles/shared/left-arrow-blue.png",85,43,a8,4d));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("arrow-down-square",a4,60,72,0f),HX_("haxeui-core/styles/shared/down-arrow-square-blue.png",b0,c1,e3,8f));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("arrow-down",a6,80,eb,0b),HX_("haxeui-core/styles/shared/down-arrow-blue.png",8a,f1,36,e4));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("accent-gradient-start",e8,85,55,00),HX_("#98c4e6",a4,36,cf,f9));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("accent-gradient-end",e1,87,69,99),HX_("#549bde",0c,64,27,f7));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("accent-color-lighter",16,8d,08,29),HX_("#ecf2f9",e0,28,b8,55));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("accent-color-darker",70,df,e8,8a),HX_("#407dbf",30,cb,e0,41));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("default",c1,d8,c3,9b),HX_("accent-color",e0,52,69,09),HX_("#83aad4",0e,ab,42,b1));
HXLINE(  93)			::haxe::ui::themes::ThemeManager_obj::get_instance()->getTheme(HX_("dark",76,54,63,42))->parent = HX_("default",c1,d8,c3,9b);
HXLINE( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("dark",76,54,63,42),HX_("haxeui-core/styles/dark/scrollbars.css",0b,04,08,d2),((Float)-2.),null());
HXLINE( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("tooltip-background-color",4e,52,d6,9a),HX_("#3d3f41",c4,1a,b8,c9));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("tertiary-background-color",df,6b,2a,15),HX_("#313435",84,93,22,6c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("solid-background-color-hover",15,01,e9,38),HX_("#393b3c",68,1f,7a,07));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("solid-background-color-down",29,4b,b2,b0),HX_("#313335",43,d1,21,6c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("solid-background-color-disabled",c3,03,97,cc),HX_("#2f3132",14,af,01,8a));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("solid-background-color-alt",42,5c,1c,2a),HX_("#2d2e2f",fc,c3,b2,62));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("solid-background-color",26,be,a2,8f),HX_("#3d3f41",c4,1a,b8,c9));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("selection-text-color",24,28,0d,3d),HX_("#d4d4d4",53,9e,36,de));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("selection-background-color-hover",14,21,95,95),HX_("#323e52",31,58,ae,ff));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("selection-background-color",e5,c4,02,1d),HX_("#415982",be,2c,d4,d3));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("secondary-background-color",bd,e0,ce,8b),HX_("#3d3f41",c4,1a,b8,c9));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("scrollbar-button-color",8f,09,58,12),HX_("#3e4142",70,ae,9f,5d));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("scrollbar-background-color",0b,f0,da,25),HX_("#2c2f30",65,f2,4c,cf));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("normal-text-color",29,16,12,fb),HX_("#aaaaaa",03,23,53,92));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("normal-inner-shadow",1d,86,86,31),HX_("drop-shadow(1, 45, #000000, 0.2, 2, 2, 1, 3, true)",78,d6,36,4c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("normal-border-size",9c,ec,6c,bf),HX_("1px",79,90,25,00));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("normal-border-radius",ed,08,df,15),HX_("2px",ba,52,26,00));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("normal-border-color",28,85,65,8d),HX_("#222426",29,94,84,98));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("normal-background-color-start",3f,11,b0,f3),HX_("#3e4142",70,ae,9f,5d));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("normal-background-color-end",78,bf,95,7f),HX_("#36383a",39,83,26,4d));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("modal-background-color",e4,af,5e,2d),HX_("#181a1b",eb,a0,09,a6));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("menu-shadow",0e,e4,44,f0),HX_("drop-shadow(2, 45, #000000, 0.15, 6, 1, 30, 35, false)",a4,41,4d,1c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("lighter-text-color",0d,0b,5e,17),HX_("#737373",b7,49,01,2f));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("hover-text-color",b4,50,a0,fe),HX_("#bbbbbb",a3,0d,bf,8c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("hover-border-color",73,b8,df,3c),HX_("#222426",29,94,84,98));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("hover-background-color-start",4a,70,31,90),HX_("#434647",e7,d4,f5,f9));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("hover-background-color-end",c3,b5,b4,1d),HX_("#393b3c",68,1f,7a,07));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("error-text-color",28,4e,d2,16),HX_("#880000",63,c1,ba,71));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("error-background-color",e9,45,7e,ee),HX_("#cf6679",e8,cf,7d,23));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("down-text-color",ce,93,0d,3a),HX_("#999999",03,7a,76,71));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("down-border-color",0d,76,77,20),HX_("#222426",29,94,84,98));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("down-background-color-start",64,f2,83,31),HX_("#393c3c",a9,e1,7a,07));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("down-background-color-end",5d,9d,0a,10),HX_("#313335",43,d1,21,6c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("disabled-text-color",f4,0c,eb,1f),HX_("#595959",8f,2a,64,d5));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("disabled-border-color",b3,04,82,53),HX_("#26292b",9e,b1,22,e6));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("disabled-background-color-start",8a,8c,c5,44),HX_("#36393a",7a,45,27,4d));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("disabled-background-color-end",03,42,dd,0d),HX_("#313335",43,d1,21,6c));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("dialog-title-color",69,5b,14,eb),HX_("#aaaaaa",03,23,53,92));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("dialog-shadow",05,4c,c5,10),HX_("drop-shadow(1, 45, #000000, 0.2, 30, 2, 1, 3, false)",fc,0e,75,e5));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("default-background-color",d0,10,0a,0b),HX_("#2c2f30",65,f2,4c,cf));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("contrast-background-color",6f,23,65,9d),HX_("#aaaaaa",03,23,53,92));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("accent-gradient-start",e8,85,55,00),HX_("#334666",45,7a,9a,93));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("accent-gradient-end",e1,87,69,99),HX_("#2f3746",7d,3d,06,8a));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("accent-color-lighter",16,8d,08,29),HX_("#323e52",31,58,ae,ff));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("accent-color-darker",70,df,e8,8a),HX_("#407dbf",30,cb,e0,41));
HXDLIN( 115)			::haxe::ui::themes::ThemeManager_obj::get_instance()->setThemeVar(HX_("dark",76,54,63,42),HX_("accent-color",e0,52,69,09),HX_("#3c5177",af,be,7b,37));
HXLINE( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("en",69,58,00,00),HX_("haxeui-core/locale/en/std-strings.properties",57,b6,47,b3));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("en",69,58,00,00),HX_("haxeui-core/locale/en/formats.properties",13,26,d5,c1));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("en_US",b4,6f,76,70),HX_("haxeui-core/locale/en_US/formats.properties",58,9c,0d,c6));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("es",6e,58,00,00),HX_("haxeui-core/locale/es/std-strings.properties",f2,16,78,10));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("es",6e,58,00,00),HX_("haxeui-core/locale/es/formats.properties",2e,5d,cc,c1));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("de",81,57,00,00),HX_("haxeui-core/locale/de/std-strings.properties",3f,9a,1c,9c));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("de",81,57,00,00),HX_("haxeui-core/locale/de/formats.properties",fb,f5,9f,f6));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("fr",4c,59,00,00),HX_("haxeui-core/locale/fr/std-strings.properties",d4,71,42,6d));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("fr",4c,59,00,00),HX_("haxeui-core/locale/fr/formats.properties",10,1f,13,8d));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("it",eb,5b,00,00),HX_("haxeui-core/locale/it/std-strings.properties",15,e3,d1,e0));
HXDLIN( 158)			::haxe::ui::locale::LocaleManager_obj::get_instance()->parseResource(HX_("it",eb,5b,00,00),HX_("haxeui-core/locale/it/formats.properties",d1,9b,de,ee));
HXLINE( 174)			 ::haxe::ui::actions::ActionManager _hx_tmp = ::haxe::ui::actions::ActionManager_obj::get_instance();
HXDLIN( 174)			_hx_tmp->registerInputSource( ::haxe::ui::actions::KeyboardActionInputSource_obj::__alloc( HX_CTX ));
HXLINE( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("global",63,31,b2,a7),HX_("styles/main.css",db,29,33,58),-2,null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("global",63,31,b2,a7),HX_("styles/listviews.css",b8,5d,a7,e7),((Float)-1.99),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("global",63,31,b2,a7),HX_("styles/dialogs.css",d3,61,d0,9f),((Float)-1.98),null());
HXDLIN( 103)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("global",63,31,b2,a7),HX_("styles/frames.css",08,e9,ed,fd),((Float)-1.97),null());
HXLINE( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/default/haxeui.png",53,7f,8e,98))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/default/haxeui_small.png",5b,fd,5d,a9))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/default/haxeui_tiny.png",82,88,f0,32))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/blank.png",b5,b2,7d,bd))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/check-blue.png",54,12,a6,e3))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/check-bright.png",b4,25,8b,91))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/check-dark.png",30,42,f4,cd))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/check-light.png",b2,62,d4,ee))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/close-button-blue.png",21,59,7b,3e))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/close-button-dark.png",fd,88,c9,28))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/close-button-light.png",45,0f,9d,0e))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/close-button-white.png",98,ae,3a,62))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/collapsed-blue.png",e5,27,69,d7))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/collapsed-dark.png",c1,57,b7,c1))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/down-arrow-blue.png",8a,f1,36,e4))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/down-arrow-bright.png",6a,be,7a,7f))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/down-arrow-dark.png",66,21,85,ce))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/down-arrow-light.png",bc,d2,06,6d))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/down-arrow-square-blue.png",b0,c1,e3,8f))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/down-arrow-square-dark.png",8c,f1,31,7a))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/down-arrow-square-light.png",d6,23,90,f8))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/error-large.png",17,cf,df,cf))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/error-medium.png",6f,f8,c3,d2))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/error-small.png",23,02,81,87))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/expanded-blue.png",cf,bb,0b,10))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/expanded-dark.png",ab,eb,59,fa))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/folder-light.png",0c,d4,dd,02))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/gripper-horizontal.png",3b,94,53,b6))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/gripper-vertical.png",cd,05,a0,76))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/help-large.png",c4,c4,fd,b5))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/help-medium.png",22,fa,dc,46))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/help-small.png",d0,f7,9e,6d))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/info-large.png",b1,84,14,e1))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/info-medium.png",95,29,ae,cf))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/info-small.png",bd,b7,b5,98))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/left-arrow-blue.png",85,43,a8,4d))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/left-arrow-bright.png",25,c5,60,25))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/left-arrow-dark.png",61,73,f6,37))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/left-arrow-light.png",61,3c,bd,46))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/left-square-arrow-blue.png",1d,2d,b6,81))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/option-blue.png",93,dc,f2,5c))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/option-dark.png",6f,0c,41,47))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/option-light.png",93,8f,b8,98))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/right-arrow-blue.png",44,d9,93,f7))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/right-arrow-bright.png",a4,88,ac,d1))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/right-arrow-dark.png",20,09,e2,e1))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/right-arrow-light.png",c2,ad,f4,4a))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/right-arrow-square-blue.png",36,a5,a8,f3))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/right-arrow-square-dark.png",12,d5,f6,dd))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/right-arrow-square-light.png",90,55,12,e1))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/right-square-arrow-blue.png",3e,5d,3a,c4))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/search.png",bd,d5,f0,bd))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/sortable-arrows-blue.png",3d,77,2b,80))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/sortable-arrows-dark.png",19,a7,79,6a))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/sortable-asc-blue.png",8c,b2,c1,0c))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/sortable-asc-dark.png",68,e2,0f,f7))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/sortable-desc-blue.png",56,c3,0c,7a))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/sortable-desc-dark.png",32,f3,5a,64))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/transparent_px.png",ea,e6,31,f9))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/up-arrow-blue.png",31,ce,9d,05))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/up-arrow-bright.png",d1,52,cf,ed))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/up-arrow-dark.png",0d,fe,eb,ef))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/up-arrow-light.png",35,08,a1,85))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/up-down-arrows-light.png",c1,41,ac,71))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/warning-large.png",2b,54,ce,63))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/warning-medium.png",db,e4,89,af))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("haxeui-core/styles/shared/warning-small.png",37,87,6f,1b))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("styles/FF00FF-0.png",eb,dd,46,26))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("assets/banner.png",73,fe,d3,c1))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
HXDLIN( 183)			::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("resourceId",49,ec,0b,41),HX_("assets/banner1.png",b4,d9,3f,66))
            				->setFixed(1,HX_("type",ba,f2,08,4d),HX_("image",5b,1f,69,bd))));
            		}
HXLINE(  11)		{
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section1 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section1->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.ListView",0d,a6,4d,ae));
HXDLIN( 126)			section1->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.custom.SimpleListView",b7,e2,20,d0));
HXDLIN( 126)			section1->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2 = section1->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.WindowSize",03,44,ec,97));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section21 = section1->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section21->values->set(HX_("native",97,c9,1c,22),HX_("EventType.LIST_ITEM_SELECTED",c0,e3,e4,5d));
HXDLIN( 126)			section21->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section22 = section1->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section22->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section22->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section23 = section1->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section23->values->set(HX_("id",db,5b,00,00),HX_("dataSource",a5,76,d3,1d));
HXDLIN( 126)			section23->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource",a5,cb,61,4c));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section24 = section1->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section24->values->set(HX_("id",db,5b,00,00),HX_("selectedIndex",b7,76,56,b4));
HXDLIN( 126)			section24->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ListViewSelectedIndex",b7,41,ab,c1));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section25 = section1->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section25->values->set(HX_("id",db,5b,00,00),HX_("contentLayoutName",ae,9c,1f,41));
HXDLIN( 126)			section25->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section26 = section1->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section26->values->set(HX_("id",db,5b,00,00),HX_("selectedItem",0e,e5,59,d6));
HXDLIN( 126)			section26->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem",44,f3,f1,25));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section27 = section1->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section27->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section27->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section11 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section11->values->set(HX_("style",31,a5,1d,84),HX_("DataViewCtrlStyle.DV_ROW_LINES",84,ba,44,18));
HXDLIN( 126)			section11->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.TableView",29,36,4a,44));
HXDLIN( 126)			section11->values->set(HX_("constructor",fa,2c,c5,97),HX_("$style",8d,a2,f6,e8));
HXDLIN( 126)			section11->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.DataViewListCtrl",55,01,78,3f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section28 = section11->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section28->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section28->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.WindowSize",03,44,ec,97));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section29 = section11->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section29->values->set(HX_("native",97,c9,1c,22),HX_("EventType.DATAVIEW_SELECTION_CHANGED",eb,e2,9f,a3));
HXDLIN( 126)			section29->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section210 = section11->addSection(HX_("builder",1b,db,ba,6f));
HXLINE( 126)			section210->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.builders.TableViewBuilder",e3,2e,0e,03));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section211 = section11->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section211->values->set(HX_("id",db,5b,00,00),HX_("selectedIndex",b7,76,56,b4));
HXDLIN( 126)			section211->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow",8a,73,33,4a));
HXDLIN( 126)			section211->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section212 = section11->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section212->values->set(HX_("id",db,5b,00,00),HX_("dataSource",a5,76,d3,1d));
HXDLIN( 126)			section212->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource",3b,26,b6,0e));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section213 = section11->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section213->values->set(HX_("id",db,5b,00,00),HX_("contentLayoutName",ae,9c,1f,41));
HXDLIN( 126)			section213->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section12 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section12->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.TreeView",0d,a3,20,b2));
HXDLIN( 126)			section12->values->set(HX_("constructor",fa,2c,c5,97),HX_("$style",8d,a2,f6,e8));
HXDLIN( 126)			section12->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.DataViewTreeCtrl",55,fe,4a,43));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section214 = section12->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section214->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section214->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.WindowSize",03,44,ec,97));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section215 = section12->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section215->values->set(HX_("native",97,c9,1c,22),HX_("EventType.DATAVIEW_SELECTION_CHANGED",eb,e2,9f,a3));
HXDLIN( 126)			section215->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section216 = section12->addSection(HX_("builder",1b,db,ba,6f));
HXLINE( 126)			section216->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.builders.TreeViewBuilder",bd,99,6c,d3));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section217 = section12->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section217->values->set(HX_("id",db,5b,00,00),HX_("contentLayoutName",ae,9c,1f,41));
HXDLIN( 126)			section217->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section218 = section12->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section218->values->set(HX_("id",db,5b,00,00),HX_("addNode",c3,4c,47,85));
HXDLIN( 126)			section218->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewAddNode",c3,7a,d8,00));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section219 = section12->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section219->values->set(HX_("id",db,5b,00,00),HX_("removeNode",66,44,29,c6));
HXDLIN( 126)			section219->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewRemoveNode",66,d6,08,83));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section220 = section12->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section220->values->set(HX_("id",db,5b,00,00),HX_("clearNodes",64,f7,c8,74));
HXDLIN( 126)			section220->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewClearNodes",64,89,a8,31));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section221 = section12->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section221->values->set(HX_("id",db,5b,00,00),HX_("selectedNode",fd,29,a4,d9));
HXDLIN( 126)			section221->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewSelectedNode",fd,3b,0c,3b));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section222 = section12->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section222->values->set(HX_("id",db,5b,00,00),HX_("getNodesInternal",18,9e,b4,dd));
HXDLIN( 126)			section222->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewGetNodesInternal",18,b0,8d,49));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section13 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section13->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.TreeViewNode",af,e3,c6,42));
HXDLIN( 126)			section13->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Object",dc,ec,bd,e0));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section223 = section13->addSection(HX_("builder",1b,db,ba,6f));
HXLINE( 126)			section223->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.builders.TreeViewNodeBuilder",db,d4,6e,ed));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section224 = section13->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section224->values->set(HX_("id",db,5b,00,00),HX_("addNode",c3,4c,47,85));
HXDLIN( 126)			section224->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewAddNode",c3,7a,d8,00));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section225 = section13->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section225->values->set(HX_("id",db,5b,00,00),HX_("removeNode",66,44,29,c6));
HXDLIN( 126)			section225->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewRemoveNode",66,d6,08,83));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section226 = section13->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section226->values->set(HX_("id",db,5b,00,00),HX_("clearNodes",64,f7,c8,74));
HXDLIN( 126)			section226->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TreeViewClearNodes",64,89,a8,31));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section14 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section14->values->set(HX_("style",31,a5,1d,84),HX_("ScrollBarStyle.HORIZONTAL",c7,6c,15,a2));
HXDLIN( 126)			section14->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.HScroll",af,4e,8f,71));
HXDLIN( 126)			section14->values->set(HX_("constructor",fa,2c,c5,97),HX_("$style",8d,a2,f6,e8));
HXDLIN( 126)			section14->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.ScrollBar",c9,d9,e1,fd));
HXDLIN( 126)			section14->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section227 = section14->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section227->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section227->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section228 = section14->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section228->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXDLIN( 126)			section228->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section229 = section14->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section229->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section229->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section15 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section15->values->set(HX_("style",31,a5,1d,84),HX_("ScrollBarStyle.VERTICAL",99,79,a3,a9));
HXDLIN( 126)			section15->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.VScroll",3d,cd,bb,b7));
HXDLIN( 126)			section15->values->set(HX_("constructor",fa,2c,c5,97),HX_("$style",8d,a2,f6,e8));
HXDLIN( 126)			section15->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.ScrollBar",c9,d9,e1,fd));
HXDLIN( 126)			section15->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section230 = section15->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section230->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section230->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section231 = section15->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section231->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXDLIN( 126)			section231->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section232 = section15->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section232->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section232->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section16 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section16->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.DropDown",d7,72,36,99));
HXDLIN( 126)			section16->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Choice",7e,2d,2e,8c));
HXDLIN( 126)			section16->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section233 = section16->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section233->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section233->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section234 = section16->addSection(HX_("handler",ca,af,d5,45));
HXLINE( 126)			section234->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.handlers.ChoiceHandler",9f,d6,10,18));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section235 = section16->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section235->values->set(HX_("native",97,c9,1c,22),HX_("EventType.CHOICE",bb,c8,8c,e0));
HXDLIN( 126)			section235->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section236 = section16->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section236->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section236->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedLabel",9b,51,14,ee));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section237 = section16->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section237->values->set(HX_("id",db,5b,00,00),HX_("dataSource",a5,76,d3,1d));
HXDLIN( 126)			section237->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource",63,d9,af,eb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section238 = section16->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section238->values->set(HX_("id",db,5b,00,00),HX_("selectedIndex",b7,76,56,b4));
HXDLIN( 126)			section238->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedIndex",b9,de,79,3c));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section239 = section16->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section239->values->set(HX_("id",db,5b,00,00),HX_("selectedItem",0e,e5,59,d6));
HXDLIN( 126)			section239->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem",44,f3,f1,25));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section240 = section16->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section240->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section240->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section241 = section16->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section241->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section241->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section17 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section17->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.dialogs.Dialog",d5,ab,c9,d3));
HXDLIN( 126)			section17->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.DialogCreator",58,2a,60,f4));
HXDLIN( 126)			section17->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Dialog",e5,72,b1,7c));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section242 = section17->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section242->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.DialogSize",db,00,18,81));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section243 = section17->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section243->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section243->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section18 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section18->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.Label",8e,b7,db,5c));
HXDLIN( 126)			section18->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.custom.TransparentStaticText",2b,24,1f,34));
HXDLIN( 126)			section18->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section244 = section18->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section244->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section244->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section245 = section18->addSection(HX_("handler",ca,af,d5,45));
HXLINE( 126)			section245->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.handlers.StaticTextHandler",c5,5b,a8,e7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section246 = section18->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section246->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section246->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section247 = section18->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section247->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section247->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section248 = section18->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section248->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section248->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section249 = section18->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section249->values->set(HX_("id",db,5b,00,00),HX_("allowInteraction",c9,55,84,63));
HXDLIN( 126)			section249->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.AllowInteraction",c6,91,f4,62));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section250 = section18->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section250->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section250->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section19 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section19->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.Image",f5,c8,95,aa));
HXDLIN( 126)			section19->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.StaticBitmapCreator",83,67,b1,fa));
HXDLIN( 126)			section19->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap",ed,c2,d4,ed));
HXDLIN( 126)			section19->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section251 = section19->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section251->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section251->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section252 = section19->addSection(HX_("builder",1b,db,ba,6f));
HXLINE( 126)			section252->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.builders.ImageBuilder",9b,24,22,3b));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section253 = section19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section253->values->set(HX_("id",db,5b,00,00),HX_("resource",ce,5c,a0,12));
HXDLIN( 126)			section253->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlBitmap",0f,67,19,c3));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section254 = section19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section254->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section254->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlBitmap",0f,67,19,c3));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section255 = section19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section255->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section255->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section256 = section19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section256->values->set(HX_("id",db,5b,00,00),HX_("allowInteraction",c9,55,84,63));
HXDLIN( 126)			section256->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.AllowInteraction",c6,91,f4,62));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section257 = section19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section257->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section257->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section258 = section19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section258->values->set(HX_("id",db,5b,00,00),HX_("scaleMode",0d,db,d3,2b));
HXDLIN( 126)			section258->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ImageScaleMode",ef,aa,c2,c0));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section259 = section19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section259->values->set(HX_("id",db,5b,00,00),HX_("imageScale",2f,95,9c,84));
HXDLIN( 126)			section259->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section110 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section110->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.Button",18,1f,c8,73));
HXDLIN( 126)			section110->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.ButtonCreator",6e,26,0f,a1));
HXDLIN( 126)			section110->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section260 = section110->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section260->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section260->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section261 = section110->addSection(HX_("handler",ca,af,d5,45));
HXLINE( 126)			section261->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.handlers.ButtonHandler",2e,18,ab,d6));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section262 = section110->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section262->values->set(HX_("native",97,c9,1c,22),HX_("EventType.BUTTON",4c,6b,bd,f9));
HXDLIN( 126)			section262->values->set(HX_("id",db,5b,00,00),HX_("click",48,7c,5e,48));
HXDLIN( 126)			section262->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.events.MouseEvent",b8,03,66,d0));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section263 = section110->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section263->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section263->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section264 = section110->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section264->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section264->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section265 = section110->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section265->values->set(HX_("id",db,5b,00,00),HX_("icon",79,e7,b2,45));
HXDLIN( 126)			section265->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlBitmap",0f,67,19,c3));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section266 = section110->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section266->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section266->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section267 = section110->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section267->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section267->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section268 = section110->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section268->values->set(HX_("id",db,5b,00,00),HX_("selected",5b,2a,6d,b1));
HXDLIN( 126)			section268->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section268->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section111 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section111->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.Toggle",ba,7c,2b,29));
HXDLIN( 126)			section111->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.ToggleButton",83,de,ed,ec));
HXDLIN( 126)			section111->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section269 = section111->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section269->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section269->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section270 = section111->addSection(HX_("handler",ca,af,d5,45));
HXLINE( 126)			section270->values->set(HX_("targetProp",94,63,8f,a4),HX_("selected",5b,2a,6d,b1));
HXDLIN( 126)			section270->values->set(HX_("sourceProp",1e,ae,c2,72),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section270->values->set(HX_("event",1a,c8,c4,75),HX_("EventType.TOGGLEBUTTON",60,3d,3e,c1));
HXDLIN( 126)			section270->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.handlers.ReflectionHandler",95,98,ab,d0));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section271 = section111->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section271->values->set(HX_("native",97,c9,1c,22),HX_("EventType.TOGGLEBUTTON",60,3d,3e,c1));
HXDLIN( 126)			section271->values->set(HX_("id",db,5b,00,00),HX_("click",48,7c,5e,48));
HXDLIN( 126)			section271->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.events.MouseEvent",b8,03,66,d0));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section272 = section111->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section272->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section272->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section273 = section111->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section273->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section273->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section274 = section111->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section274->values->set(HX_("id",db,5b,00,00),HX_("selected",5b,2a,6d,b1));
HXDLIN( 126)			section274->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section274->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section275 = section111->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section275->values->set(HX_("id",db,5b,00,00),HX_("icon",79,e7,b2,45));
HXDLIN( 126)			section275->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlBitmap",0f,67,19,c3));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section276 = section111->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section276->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section276->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section277 = section111->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section277->values->set(HX_("id",db,5b,00,00),HX_("toggle",94,bf,43,8f));
HXDLIN( 126)			section277->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section278 = section111->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section278->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section278->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section112 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section112->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.Switch",1a,07,61,5f));
HXDLIN( 126)			section112->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.ToggleButton",83,de,ed,ec));
HXDLIN( 126)			section112->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section279 = section112->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section279->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section279->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section280 = section112->addSection(HX_("handler",ca,af,d5,45));
HXLINE( 126)			section280->values->set(HX_("targetProp",94,63,8f,a4),HX_("selected",5b,2a,6d,b1));
HXDLIN( 126)			section280->values->set(HX_("sourceProp",1e,ae,c2,72),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section280->values->set(HX_("event",1a,c8,c4,75),HX_("EventType.TOGGLEBUTTON",60,3d,3e,c1));
HXDLIN( 126)			section280->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.handlers.ReflectionHandler",95,98,ab,d0));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section281 = section112->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section281->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section281->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section282 = section112->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section282->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section282->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section283 = section112->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section283->values->set(HX_("id",db,5b,00,00),HX_("selected",5b,2a,6d,b1));
HXDLIN( 126)			section283->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section283->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section284 = section112->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section284->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section284->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section113 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section113->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.CheckBox",c9,5c,0b,5e));
HXDLIN( 126)			section113->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.CheckBox",80,79,69,27));
HXDLIN( 126)			section113->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section285 = section113->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section285->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section285->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section286 = section113->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section286->values->set(HX_("native",97,c9,1c,22),HX_("EventType.CHECKBOX",1d,4a,2b,45));
HXDLIN( 126)			section286->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section287 = section113->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section287->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section287->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section288 = section113->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section288->values->set(HX_("id",db,5b,00,00),HX_("selected",5b,2a,6d,b1));
HXDLIN( 126)			section288->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section289 = section113->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section289->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section289->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section290 = section113->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section290->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section290->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section291 = section113->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section291->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section291->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section114 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section114->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.OptionBox",30,f8,3d,d9));
HXDLIN( 126)			section114->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.RadioButtonCreator",cb,ec,93,59));
HXDLIN( 126)			section114->values->set(HX_("constructor",fa,2c,c5,97),HX_("null, $style",88,15,7c,33));
HXDLIN( 126)			section114->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.RadioButton",10,9e,50,d7));
HXDLIN( 126)			section114->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section292 = section114->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section292->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section292->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section293 = section114->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section293->values->set(HX_("native",97,c9,1c,22),HX_("EventType.RADIOBUTTON",73,e9,3e,ec));
HXDLIN( 126)			section293->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section294 = section114->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section294->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section294->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section295 = section114->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section295->values->set(HX_("id",db,5b,00,00),HX_("selected",5b,2a,6d,b1));
HXDLIN( 126)			section295->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section296 = section114->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section296->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section296->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section297 = section114->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section297->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section297->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section298 = section114->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section298->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section298->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section115 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section115->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.TextField",67,a3,6b,f0));
HXDLIN( 126)			section115->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.TextCtrl",55,cb,4f,bf));
HXDLIN( 126)			section115->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section299 = section115->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section299->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section299->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2100 = section115->addSection(HX_("handler",ca,af,d5,45));
HXLINE( 126)			section2100->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler",68,84,ca,c2));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2101 = section115->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section2101->values->set(HX_("native",97,c9,1c,22),HX_("EventType.TEXT",87,07,ef,98));
HXDLIN( 126)			section2101->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2102 = section115->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2102->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section2102->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2102->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2103 = section115->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2103->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2103->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2103->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2104 = section115->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2104->values->set(HX_("id",db,5b,00,00),HX_("password",1b,23,d0,48));
HXDLIN( 126)			section2104->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword",30,af,66,40));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2105 = section115->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2105->values->set(HX_("id",db,5b,00,00),HX_("placeholder",73,73,f3,ba));
HXDLIN( 126)			section2105->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder",7e,e2,dd,bc));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2106 = section115->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2106->values->set(HX_("id",db,5b,00,00),HX_("icon",79,e7,b2,45));
HXDLIN( 126)			section2106->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2107 = section115->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2107->values->set(HX_("id",db,5b,00,00),HX_("restrictChars",01,08,2c,ba));
HXDLIN( 126)			section2107->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2108 = section115->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2108->values->set(HX_("id",db,5b,00,00),HX_("maxChars",99,ef,d0,ef));
HXDLIN( 126)			section2108->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2109 = section115->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2109->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2109->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2110 = section115->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2110->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2110->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section116 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section116->values->set(HX_("style",31,a5,1d,84),HX_("TextCtrlStyle.MULTILINE, TextCtrlStyle.HSCROLL",d4,7e,84,45));
HXDLIN( 126)			section116->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.TextArea",80,b1,9d,f4));
HXDLIN( 126)			section116->values->set(HX_("constructor",fa,2c,c5,97),HX_("null, $style",88,15,7c,33));
HXDLIN( 126)			section116->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.TextCtrl",55,cb,4f,bf));
HXDLIN( 126)			section116->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2111 = section116->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2111->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2111->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2112 = section116->addSection(HX_("handler",ca,af,d5,45));
HXLINE( 126)			section2112->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler",68,84,ca,c2));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2113 = section116->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section2113->values->set(HX_("native",97,c9,1c,22),HX_("EventType.TEXT",87,07,ef,98));
HXDLIN( 126)			section2113->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2114 = section116->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2114->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section2114->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2114->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2115 = section116->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2115->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2115->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2115->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2116 = section116->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2116->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2116->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2117 = section116->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2117->values->set(HX_("id",db,5b,00,00),HX_("wrap",ca,39,ff,4e));
HXDLIN( 126)			section2117->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TextCtrlWordWrap",c9,a0,71,f8));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2118 = section116->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2118->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2118->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section117 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section117->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.HorizontalRange",53,4c,bc,ad));
HXDLIN( 126)			section117->values->set(HX_("constructor",fa,2c,c5,97),HX_("100, $style",72,c9,1d,36));
HXDLIN( 126)			section117->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Gauge",7c,18,12,2e));
HXDLIN( 126)			section117->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2119 = section117->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2119->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2119->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2120 = section117->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2120->values->set(HX_("id",db,5b,00,00),HX_("end",db,03,4d,00));
HXDLIN( 126)			section2120->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2120->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2121 = section117->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2121->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2121->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2121->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2122 = section117->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2122->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2122->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2123 = section117->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2123->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2123->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section118 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section118->values->set(HX_("style",31,a5,1d,84),HX_("GaugeStyle.VERTICAL",0c,19,ac,d6));
HXDLIN( 126)			section118->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.VerticalRange",01,41,c1,e3));
HXDLIN( 126)			section118->values->set(HX_("constructor",fa,2c,c5,97),HX_("100, $style",72,c9,1d,36));
HXDLIN( 126)			section118->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Gauge",7c,18,12,2e));
HXDLIN( 126)			section118->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2124 = section118->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2124->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2124->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2125 = section118->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2125->values->set(HX_("id",db,5b,00,00),HX_("end",db,03,4d,00));
HXDLIN( 126)			section2125->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2125->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2126 = section118->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2126->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2126->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2126->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2127 = section118->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2127->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2127->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2128 = section118->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2128->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2128->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section119 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section119->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.HorizontalProgress",d7,12,a0,c2));
HXDLIN( 126)			section119->values->set(HX_("constructor",fa,2c,c5,97),HX_("100, $style",72,c9,1d,36));
HXDLIN( 126)			section119->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Gauge",7c,18,12,2e));
HXDLIN( 126)			section119->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2129 = section119->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2129->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2129->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2130 = section119->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2130->values->set(HX_("id",db,5b,00,00),HX_("end",db,03,4d,00));
HXDLIN( 126)			section2130->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2130->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2131 = section119->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2131->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2131->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2131->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2132 = section119->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2132->values->set(HX_("id",db,5b,00,00),HX_("max",a4,0a,53,00));
HXDLIN( 126)			section2132->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMax",84,ff,a5,29));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2133 = section119->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2133->values->set(HX_("id",db,5b,00,00),HX_("indeterminate",fb,f6,49,0e));
HXDLIN( 126)			section2133->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlPulse",f9,33,2b,26));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2134 = section119->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2134->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2134->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2135 = section119->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2135->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2135->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section120 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section120->values->set(HX_("style",31,a5,1d,84),HX_("GaugeStyle.VERTICAL",0c,19,ac,d6));
HXDLIN( 126)			section120->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.VerticalProgress",e9,be,2e,e2));
HXDLIN( 126)			section120->values->set(HX_("constructor",fa,2c,c5,97),HX_("100, $style",72,c9,1d,36));
HXDLIN( 126)			section120->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Gauge",7c,18,12,2e));
HXDLIN( 126)			section120->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2136 = section120->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2136->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2136->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2137 = section120->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2137->values->set(HX_("id",db,5b,00,00),HX_("end",db,03,4d,00));
HXDLIN( 126)			section2137->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2137->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2138 = section120->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2138->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2138->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2138->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2139 = section120->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2139->values->set(HX_("id",db,5b,00,00),HX_("max",a4,0a,53,00));
HXDLIN( 126)			section2139->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMax",84,ff,a5,29));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2140 = section120->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2140->values->set(HX_("id",db,5b,00,00),HX_("indeterminate",fb,f6,49,0e));
HXDLIN( 126)			section2140->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlPulse",f9,33,2b,26));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2141 = section120->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2141->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2141->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2142 = section120->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2142->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2142->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section121 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section121->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.HorizontalSlider",cb,e2,79,0f));
HXDLIN( 126)			section121->values->set(HX_("constructor",fa,2c,c5,97),HX_("0, 0, 100, $style",f2,1a,13,55));
HXDLIN( 126)			section121->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Slider",3e,34,83,3b));
HXDLIN( 126)			section121->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2143 = section121->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2143->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2143->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2144 = section121->addSection(HX_("handler",ca,af,d5,45));
HXLINE( 126)			section2144->values->set(HX_("targetProp",94,63,8f,a4),HX_("pos",94,5d,55,00));
HXDLIN( 126)			section2144->values->set(HX_("sourceProp",1e,ae,c2,72),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2144->values->set(HX_("event",1a,c8,c4,75),HX_("EventType.SLIDER",7b,cf,e1,8f));
HXDLIN( 126)			section2144->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.handlers.ReflectionHandler",95,98,ab,d0));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2145 = section121->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section2145->values->set(HX_("native",97,c9,1c,22),HX_("EventType.SLIDER",7b,cf,e1,8f));
HXDLIN( 126)			section2145->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2146 = section121->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2146->values->set(HX_("id",db,5b,00,00),HX_("end",db,03,4d,00));
HXDLIN( 126)			section2146->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2147 = section121->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2147->values->set(HX_("id",db,5b,00,00),HX_("start",62,74,0b,84));
HXDLIN( 126)			section2147->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2148 = section121->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2148->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXDLIN( 126)			section2148->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2148->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2149 = section121->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2149->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2149->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2149->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2150 = section121->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2150->values->set(HX_("id",db,5b,00,00),HX_("min",92,11,53,00));
HXDLIN( 126)			section2150->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMin",72,06,a6,29));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2151 = section121->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2151->values->set(HX_("id",db,5b,00,00),HX_("max",a4,0a,53,00));
HXDLIN( 126)			section2151->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMax",84,ff,a5,29));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2152 = section121->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2152->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2152->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2153 = section121->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2153->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2153->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section122 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section122->values->set(HX_("style",31,a5,1d,84),HX_("SliderStyle.VERTICAL",74,b5,86,a7));
HXDLIN( 126)			section122->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.VerticalSlider",5d,06,cb,1d));
HXDLIN( 126)			section122->values->set(HX_("constructor",fa,2c,c5,97),HX_("0, 0, 100, $style",f2,1a,13,55));
HXDLIN( 126)			section122->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Slider",3e,34,83,3b));
HXDLIN( 126)			section122->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2154 = section122->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2154->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2154->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2155 = section122->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section2155->values->set(HX_("native",97,c9,1c,22),HX_("EventType.SLIDER",7b,cf,e1,8f));
HXDLIN( 126)			section2155->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2156 = section122->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2156->values->set(HX_("id",db,5b,00,00),HX_("end",db,03,4d,00));
HXDLIN( 126)			section2156->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2157 = section122->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2157->values->set(HX_("id",db,5b,00,00),HX_("start",62,74,0b,84));
HXDLIN( 126)			section2157->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2158 = section122->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2158->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXDLIN( 126)			section2158->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2158->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2159 = section122->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2159->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2159->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 126)			section2159->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2160 = section122->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2160->values->set(HX_("id",db,5b,00,00),HX_("min",92,11,53,00));
HXDLIN( 126)			section2160->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMin",72,06,a6,29));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2161 = section122->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2161->values->set(HX_("id",db,5b,00,00),HX_("max",a4,0a,53,00));
HXDLIN( 126)			section2161->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMax",84,ff,a5,29));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2162 = section122->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2162->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2162->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2163 = section122->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2163->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2163->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section123 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section123->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.TabView",70,96,d8,b7));
HXDLIN( 126)			section123->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Notebook",78,6c,01,e0));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2164 = section123->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2164->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2164->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.NotebookSize",2e,4f,7f,b3));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2165 = section123->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section2165->values->set(HX_("native",97,c9,1c,22),HX_("EventType.NOTEBOOK_PAGE_CHANGED",6e,d0,38,a0));
HXDLIN( 126)			section2165->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2166 = section123->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2166->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2166->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2167 = section123->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2167->values->set(HX_("id",db,5b,00,00),HX_("removeAllPages",c7,26,87,80));
HXDLIN( 126)			section2167->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllPages",ff,a8,21,a5));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2168 = section123->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2168->values->set(HX_("id",db,5b,00,00),HX_("removePage",b3,14,71,c7));
HXDLIN( 126)			section2168->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookRemovePage",eb,1a,a0,82));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2169 = section123->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2169->values->set(HX_("id",db,5b,00,00),HX_("getPage",05,8a,d4,1c));
HXDLIN( 126)			section2169->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookGetPage",cd,f0,fb,03));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2170 = section123->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2170->values->set(HX_("id",db,5b,00,00),HX_("pageCount",00,1c,7a,f0));
HXDLIN( 126)			section2170->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookPageCount",c8,c4,5e,7d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2171 = section123->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2171->values->set(HX_("id",db,5b,00,00),HX_("pageIndex",43,72,2b,64));
HXDLIN( 126)			section2171->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookPageIndex",0b,1b,10,f1));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2172 = section123->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2172->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2172->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2173 = section123->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2173->values->set(HX_("id",db,5b,00,00),HX_("tabPosition",1e,94,16,a6));
HXDLIN( 126)			section2173->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section124 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section124->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.ScrollView",bc,43,e9,dc));
HXDLIN( 126)			section124->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.ScrolledWindow",d9,f1,9e,22));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2174 = section124->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2174->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2174->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.WindowSize",03,44,ec,97));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2175 = section124->addSection(HX_("builder",1b,db,ba,6f));
HXLINE( 126)			section2175->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.builders.ScrollViewBuilder",ae,26,f7,1c));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2176 = section124->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2176->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2176->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2177 = section124->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2177->values->set(HX_("id",db,5b,00,00),HX_("contentLayoutName",ae,9c,1f,41));
HXDLIN( 126)			section2177->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2178 = section124->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2178->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2178->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section125 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section125->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.NumberStepper",e2,d4,85,bd));
HXDLIN( 126)			section125->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.SpinCtrl",ea,8e,c7,db));
HXDLIN( 126)			section125->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2179 = section125->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2179->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2179->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2180 = section125->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section2180->values->set(HX_("native",97,c9,1c,22),HX_("EventType.SPINCTRL",47,eb,97,0e));
HXDLIN( 126)			section2180->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2181 = section125->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2181->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2181->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2182 = section125->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2182->values->set(HX_("id",db,5b,00,00),HX_("step",4c,e7,5b,4c));
HXDLIN( 126)			section2182->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2183 = section125->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2183->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXDLIN( 126)			section2183->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2184 = section125->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2184->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2184->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section126 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section126->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.menus.MenuBar",90,48,c6,3f));
HXDLIN( 126)			section126->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.MenuBarCreator",84,8d,2a,12));
HXDLIN( 126)			section126->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.MenuBar",b7,1c,6d,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2185 = section126->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2185->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2185->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.ZeroSize",bb,2a,b9,12));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2186 = section126->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2186->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2186->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2187 = section126->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2187->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section2187->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2188 = section126->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2188->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2188->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section127 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section127->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.menus.Menu",03,e5,c4,32));
HXDLIN( 126)			section127->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.MenuCreator",61,f5,16,9d));
HXDLIN( 126)			section127->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Menu",7c,02,c9,ca));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2189 = section127->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2189->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2189->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.ZeroSize",bb,2a,b9,12));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2190 = section127->addSection(HX_("builder",1b,db,ba,6f));
HXLINE( 126)			section2190->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.builders.MenuBuilder",01,9c,5c,49));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2191 = section127->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2191->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2191->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2192 = section127->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2192->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section2192->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2193 = section127->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2193->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2193->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section128 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section128->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.menus.MenuItem",b6,13,68,92));
HXDLIN( 126)			section128->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.MenuItemCreator",0e,6f,f3,1b));
HXDLIN( 126)			section128->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.MenuItem",af,e1,ba,c6));
HXDLIN( 126)			section128->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2194 = section128->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2194->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2194->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.ZeroSize",bb,2a,b9,12));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2195 = section128->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2195->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2195->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.MenuDisable",2c,13,9b,3c));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2196 = section128->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2196->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section2196->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.MenuLabel",38,1e,da,cd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2197 = section128->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2197->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2197->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2198 = section128->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2198->values->set(HX_("id",db,5b,00,00),HX_("icon",79,e7,b2,45));
HXDLIN( 126)			section2198->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.MenuItemBitmap",9e,52,19,2b));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section129 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section129->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.menus.MenuCheckBox",46,66,15,89));
HXDLIN( 126)			section129->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.MenuItemCreator",0e,6f,f3,1b));
HXDLIN( 126)			section129->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.MenuItem",af,e1,ba,c6));
HXDLIN( 126)			section129->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2199 = section129->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2199->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2199->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.ZeroSize",bb,2a,b9,12));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2200 = section129->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2200->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2200->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2201 = section129->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2201->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section2201->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.MenuLabel",38,1e,da,cd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2202 = section129->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2202->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2202->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section130 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section130->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.menus.MenuOptionBox",13,3c,fc,56));
HXDLIN( 126)			section130->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.MenuItemCreator",0e,6f,f3,1b));
HXDLIN( 126)			section130->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.MenuItem",af,e1,ba,c6));
HXDLIN( 126)			section130->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2203 = section130->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2203->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2203->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.ZeroSize",bb,2a,b9,12));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2204 = section130->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2204->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2204->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2205 = section130->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2205->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section2205->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.MenuLabel",38,1e,da,cd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2206 = section130->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2206->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2206->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section131 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section131->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.menus.MenuSeparator",e2,22,28,06));
HXDLIN( 126)			section131->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.MenuItemCreator",0e,6f,f3,1b));
HXDLIN( 126)			section131->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.MenuItem",af,e1,ba,c6));
HXDLIN( 126)			section131->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2207 = section131->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2207->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2207->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.ZeroSize",bb,2a,b9,12));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2208 = section131->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2208->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2208->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2209 = section131->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2209->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section2209->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2210 = section131->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2210->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2210->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section132 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section132->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.properties.PropertyGrid",6c,6e,1e,3d));
HXDLIN( 126)			section132->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.PropertyGrid",98,fb,43,8f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2211 = section132->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2211->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2211->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2212 = section132->addSection(HX_("builder",1b,db,ba,6f));
HXLINE( 126)			section2212->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder",65,10,be,52));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2213 = section132->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2213->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 126)			section2213->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2214 = section132->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2214->values->set(HX_("id",db,5b,00,00),HX_("contentLayoutName",ae,9c,1f,41));
HXDLIN( 126)			section2214->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2215 = section132->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2215->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2215->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section133 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section133->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.properties.PropertyGroup",d9,cc,86,3d));
HXDLIN( 126)			section133->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Panel",87,ff,a7,5c));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2216 = section133->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2216->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2216->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section134 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section134->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.Frame",c3,f5,4b,96));
HXDLIN( 126)			section134->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.FrameCreator",eb,ec,b0,a4));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2217 = section134->addSection(HX_("handler",ca,af,d5,45));
HXLINE( 126)			section2217->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.handlers.FrameHandler",a7,47,e7,89));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2218 = section134->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2218->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 126)			section2218->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.FrameTextBehaviour",a0,fc,4c,79));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2219 = section134->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2219->values->set(HX_("id",db,5b,00,00),HX_("value",71,7f,b8,31));
HXDLIN( 126)			section2219->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.FrameTextBehaviour",a0,fc,4c,79));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2220 = section134->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2220->values->set(HX_("id",db,5b,00,00),HX_("icon",79,e7,b2,45));
HXDLIN( 126)			section2220->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2221 = section134->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2221->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2221->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section135 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section135->values->set(HX_("creator",ac,be,6a,11),HX_("haxe.ui.backend.hxwidgets.creators.StaticBitmapCreator",83,67,b1,fa));
HXDLIN( 126)			section135->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.StaticBitmap",1a,79,73,7c));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2222 = section135->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2222->values->set(HX_("id",db,5b,00,00),HX_("tooltip",03,ad,8c,6a));
HXDLIN( 126)			section2222->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ToolTipBehaviour",d7,74,d6,16));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section136 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section136->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.CalendarView",6d,f5,fa,af));
HXDLIN( 126)			section136->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.CalendarCtrl",66,ac,e7,71));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2223 = section136->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 126)			section2223->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 126)			section2223->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2224 = section136->addSection(HX_("event",1a,c8,c4,75));
HXLINE( 126)			section2224->values->set(HX_("native",97,c9,1c,22),HX_("EventType.CALENDAR_SEL_CHANGED",68,28,cf,27));
HXDLIN( 126)			section2224->values->set(HX_("id",db,5b,00,00),HX_("change",70,91,72,b7));
HXLINE( 137)			 ::haxe::ui::util::GenericConfig section2225 = section136->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 126)			section2225->values->set(HX_("id",db,5b,00,00),HX_("selectedDate",29,76,fd,d2));
HXDLIN( 126)			section2225->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.CalendarCtrlDateBehaviour",49,86,82,8b));
HXDLIN( 126)			section2225->values->set(HX_("autoDispatch",49,f1,af,5f),HX_("haxe.ui.events.UIEvent.CHANGE",1b,99,cd,15));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section137 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section137->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.HorizontalRule",26,37,9d,0e));
HXDLIN( 126)			section137->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.StaticLine",5f,50,4b,d2));
HXLINE( 133)			 ::haxe::ui::util::GenericConfig section138 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 126)			section138->values->set(HX_("style",31,a5,1d,84),HX_("StaticLineStyle.VERTICAL",d5,c6,26,82));
HXDLIN( 126)			section138->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.VerticalRule",38,f2,7b,1b));
HXDLIN( 126)			section138->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.StaticLine",5f,50,4b,d2));
            		}
HXLINE(  56)		::haxe::ui::Toolkit_obj::buildBackend();
HXLINE(  57)		::haxe::ui::Toolkit_obj::_built = true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,build,(void))

bool Toolkit_obj::_backendBuilt;

void Toolkit_obj::buildBackend(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_61_buildBackend)
HXLINE(  62)		if ((::haxe::ui::Toolkit_obj::_backendBuilt == true)) {
HXLINE(  63)			return;
            		}
HXLINE(  11)		{
HXLINE(  23)			::haxe::ui::Toolkit_obj::_backendProperties->setProp(HX_("haxe.ui.hxwidgets.frame.title",76,d6,8a,78),HX_("Izzy Engine Crash Dialog",0f,74,1c,c6));
HXDLIN(  23)			::haxe::ui::Toolkit_obj::_backendProperties->setProp(HX_("haxe.ui.hxwidgets.frame.resizable",49,bf,74,a7),HX_("false",a3,35,4f,fb));
HXDLIN(  23)			::haxe::ui::Toolkit_obj::_backendProperties->setProp(HX_("haxe.ui.hxwidgets.frame.maximizable",f1,7e,69,77),HX_("false",a3,35,4f,fb));
HXDLIN(  23)			::haxe::ui::Toolkit_obj::_backendProperties->setProp(HX_("haxe.ui.hxwidgets.frame.fit",2f,ef,70,f7),HX_("true",4e,a7,03,4d));
HXLINE(  35)			::haxe::ui::util::Defines_obj::set(HX_("wxWidgetsVersion",aa,fa,25,29),HX_("3.1.5",fd,bc,fc,7b),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("wxRELEASE_NUMBER",82,7d,be,3a),HX_("5",35,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("wxMINOR_VERSION",cd,bb,43,9f),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("wxMAJOR_VERSION",d1,a1,ce,8d),HX_("3",33,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("windows",83,de,74,e8),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("utf16",cc,2f,dc,aa),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("true",4e,a7,03,4d),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("target.utf16",ef,8e,36,97),HX_("true",4e,a7,03,4d),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("target.unicode",00,3f,73,32),HX_("true",4e,a7,03,4d),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("target.threaded",66,12,73,76),HX_("true",4e,a7,03,4d),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("target.sys",70,ed,16,8e),HX_("true",4e,a7,03,4d),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("target.static",2b,bc,b4,e8),HX_("true",4e,a7,03,4d),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("target.name",88,88,98,c2),HX_("cpp",23,81,4b,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("sys",0d,ad,57,00),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("static",ae,dc,fb,05),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("source_header",b1,0b,03,ee),HX_("Generated by Haxe 4.2.5",9d,7b,44,e2),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("hxwidgets",1f,43,1f,aa),HX_("1.4.0",b9,da,31,55),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("hxcpp_smart_strings",a0,ca,65,73),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("hxcpp_api_level",73,aa,bc,b1),HX_("400",34,9f,27,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("hxcpp",13,70,49,31),HX_("4.2.1",bb,13,64,0f),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("hxWidgets",ff,6a,70,77),HX_("1.9.0",fe,a5,35,55),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("hscript",73,8c,18,2c),HX_("2.5.0",7b,31,99,e8),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("haxeui_hxwidgets",5a,ab,91,12),HX_("1.4.0",b9,da,31,55),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("haxeui_core",04,3f,41,9a),HX_("1.5.0",fa,9c,32,55),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("haxeui-hxwidgets",cc,41,06,84),HX_("1.4.0",b9,da,31,55),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("haxeui-core",d2,3d,38,d0),HX_("1.5.0",fa,9c,32,55),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("haxe_ver",8a,66,91,5f),HX_("4.205",7d,15,64,0f),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("haxe4",4e,6d,25,22),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("haxe3",4d,6d,25,22),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("haxe",26,34,08,45),HX_("4.2.5",bf,13,64,0f),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("dce",06,38,4c,00),HX_("std",a3,a8,57,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("cpp",23,81,4b,00),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("core",5f,bd,c4,41),HX_("1.5.0",fa,9c,32,55),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("backend",14,bc,87,fb),HX_("hxwidgets",1f,43,1f,aa),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("WXSTATIC",8f,23,04,74),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("PLATFORM_WINDOWS",97,b9,5e,36),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("NO_PRECOMPILED_HEADERS",fd,fb,d7,56),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("HXCPP_M64",3f,ff,fb,2a),HX_("1",31,00,00,00),null());
HXDLIN(  35)			::haxe::ui::util::Defines_obj::set(HX_("ABI",48,8c,31,00),HX_("-MD",c4,68,22,00),null());
            		}
HXLINE(  66)		::haxe::ui::Toolkit_obj::_backendBuilt = true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,buildBackend,(void))

bool Toolkit_obj::_initialized;

bool Toolkit_obj::initialized;

bool Toolkit_obj::get_initialized(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_72_get_initialized)
HXDLIN(  72)		return ::haxe::ui::Toolkit_obj::_initialized;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_initialized,return )

void Toolkit_obj::init( ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_75_init)
HXLINE(  76)		::haxe::ui::Toolkit_obj::build();
HXLINE(  77)		::haxe::ui::themes::ThemeManager_obj::get_instance()->applyTheme(::haxe::ui::Toolkit_obj::_theme);
HXLINE(  78)		if (::hx::IsNotNull( options )) {
HXLINE(  79)			::haxe::ui::Toolkit_obj::get_screen()->set_options(options);
HXLINE(  80)			::haxe::ui::ToolkitAssets_obj::get_instance()->options = options;
            		}
HXLINE(  82)		::haxe::ui::Toolkit_obj::get_screen()->registerEvent(HX_("keydown",81,3d,6e,b1),::haxe::ui::Toolkit_obj::onKeyDown_dyn(),null());
HXLINE(  83)		::haxe::ui::Toolkit_obj::_initialized = true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,init,(void))

void Toolkit_obj::onKeyDown( ::haxe::ui::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_87_onKeyDown)
HXDLIN(  87)		int event1 = event->keyCode;
HXDLIN(  87)		if ((event1 == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("tab",55,5a,58,00)))) {
HXLINE(  88)			if ((event->shiftKey == false)) {
HXLINE(  89)				::haxe::ui::focus::FocusManager_obj::get_instance()->focusNext();
            			}
            			else {
HXLINE(  91)				::haxe::ui::focus::FocusManager_obj::get_instance()->focusPrev();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,onKeyDown,(void))

 ::haxe::ui::ToolkitAssets Toolkit_obj::assets;

 ::haxe::ui::ToolkitAssets Toolkit_obj::get_assets(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_98_get_assets)
HXDLIN(  98)		return ::haxe::ui::ToolkitAssets_obj::get_instance();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_assets,return )

 ::haxe::ui::core::Screen Toolkit_obj::screen;

 ::haxe::ui::core::Screen Toolkit_obj::get_screen(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_103_get_screen)
HXDLIN( 103)		return ::haxe::ui::core::Screen_obj::get_instance();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_screen,return )

int Toolkit_obj::pixelsPerRem;

int Toolkit_obj::set_pixelsPerRem(int value){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_107_set_pixelsPerRem)
HXLINE( 108)		if ((::haxe::ui::Toolkit_obj::pixelsPerRem == value)) {
HXLINE( 109)			return value;
            		}
HXLINE( 112)		::haxe::ui::Toolkit_obj::pixelsPerRem = value;
HXLINE( 113)		::haxe::ui::core::Screen_obj::get_instance()->refreshStyleRootComponents();
HXLINE( 115)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_pixelsPerRem,return )

bool Toolkit_obj::roundScale;

bool Toolkit_obj::autoScale;

int Toolkit_obj::autoScaleDPIThreshold;

int Toolkit_obj::get_autoScaleDPIThreshold(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_121_get_autoScaleDPIThreshold)
HXLINE( 122)		if ((::haxe::ui::core::Screen_obj::get_instance()->get_isRetina() == true)) {
HXLINE( 123)			return 192;
            		}
HXLINE( 125)		return 120;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_autoScaleDPIThreshold,return )

Float Toolkit_obj::_scaleX;

Float Toolkit_obj::get_scaleX(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_130_get_scaleX)
HXLINE( 131)		if ((::haxe::ui::Toolkit_obj::_scaleX == 0)) {
HXLINE( 132)			if ((::haxe::ui::Toolkit_obj::autoScale == true)) {
HXLINE( 133)				Float dpi = ::haxe::ui::core::Screen_obj::get_instance()->get_dpi();
HXLINE( 134)				if ((dpi > ::haxe::ui::Toolkit_obj::get_autoScaleDPIThreshold())) {
HXLINE( 135)					if ((::haxe::ui::Toolkit_obj::roundScale == true)) {
HXLINE( 136)						::haxe::ui::Toolkit_obj::_scaleX = ::Math_obj::fround((dpi / ( (Float)(::haxe::ui::Toolkit_obj::get_autoScaleDPIThreshold()) )));
            					}
            					else {
HXLINE( 138)						::haxe::ui::Toolkit_obj::_scaleX = (dpi / ( (Float)(::haxe::ui::Toolkit_obj::get_autoScaleDPIThreshold()) ));
            					}
            				}
            				else {
HXLINE( 141)					::haxe::ui::Toolkit_obj::_scaleX = ( (Float)(1) );
            				}
            			}
            			else {
HXLINE( 144)				::haxe::ui::Toolkit_obj::_scaleX = ( (Float)(1) );
            			}
            		}
HXLINE( 147)		return ::haxe::ui::Toolkit_obj::_scaleX;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_scaleX,return )

Float Toolkit_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_149_set_scaleX)
HXLINE( 150)		if ((::haxe::ui::Toolkit_obj::_scaleX == value)) {
HXLINE( 151)			return value;
            		}
HXLINE( 153)		::haxe::ui::Toolkit_obj::_scaleX = value;
HXLINE( 154)		::haxe::ui::Toolkit_obj::autoScale = false;
HXLINE( 155)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_scaleX,return )

Float Toolkit_obj::_scaleY;

Float Toolkit_obj::get_scaleY(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_160_get_scaleY)
HXLINE( 161)		if ((::haxe::ui::Toolkit_obj::_scaleY == 0)) {
HXLINE( 162)			if ((::haxe::ui::Toolkit_obj::autoScale == true)) {
HXLINE( 163)				Float dpi = ::haxe::ui::core::Screen_obj::get_instance()->get_dpi();
HXLINE( 164)				if ((dpi > ::haxe::ui::Toolkit_obj::get_autoScaleDPIThreshold())) {
HXLINE( 165)					if ((::haxe::ui::Toolkit_obj::roundScale == true)) {
HXLINE( 166)						::haxe::ui::Toolkit_obj::_scaleY = ::Math_obj::fround((dpi / ( (Float)(::haxe::ui::Toolkit_obj::get_autoScaleDPIThreshold()) )));
            					}
            					else {
HXLINE( 168)						::haxe::ui::Toolkit_obj::_scaleY = (dpi / ( (Float)(::haxe::ui::Toolkit_obj::get_autoScaleDPIThreshold()) ));
            					}
            				}
            				else {
HXLINE( 171)					::haxe::ui::Toolkit_obj::_scaleY = ( (Float)(1) );
            				}
            			}
            			else {
HXLINE( 174)				::haxe::ui::Toolkit_obj::_scaleY = ( (Float)(1) );
            			}
            		}
HXLINE( 177)		return ::haxe::ui::Toolkit_obj::_scaleY;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_scaleY,return )

Float Toolkit_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_179_set_scaleY)
HXLINE( 180)		if ((::haxe::ui::Toolkit_obj::_scaleY == value)) {
HXLINE( 181)			return value;
            		}
HXLINE( 183)		::haxe::ui::Toolkit_obj::_scaleY = value;
HXLINE( 184)		::haxe::ui::Toolkit_obj::autoScale = false;
HXLINE( 185)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_scaleY,return )

Float Toolkit_obj::get_scale(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_190_get_scale)
HXDLIN( 190)		Float _hx_tmp = ::haxe::ui::Toolkit_obj::get_scaleX();
HXDLIN( 190)		return ::Math_obj::max(_hx_tmp,::haxe::ui::Toolkit_obj::get_scaleY());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_scale,return )

Float Toolkit_obj::set_scale(Float value){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_192_set_scale)
HXLINE( 193)		::haxe::ui::Toolkit_obj::set_scaleX(value);
HXLINE( 194)		::haxe::ui::Toolkit_obj::set_scaleY(value);
HXLINE( 195)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_scale,return )

void Toolkit_obj::callLater( ::Dynamic fn){
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_199_callLater)
HXDLIN( 199)		 ::haxe::ui::CallLater_obj::__alloc( HX_CTX ,fn);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,callLater,(void))


Toolkit_obj::Toolkit_obj()
{
}

bool Toolkit_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_theme() ); return true; } }
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_scale() ); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_theme") ) { outValue = ( _theme ); return true; }
		if (HX_FIELD_EQ(inName,"_built") ) { outValue = ( _built ); return true; }
		if (HX_FIELD_EQ(inName,"assets") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_assets() : assets ); return true; }
		if (HX_FIELD_EQ(inName,"screen") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_screen() : screen ); return true; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_scaleX() ); return true; } }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_scaleY() ); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { outValue = ( _scaleX ); return true; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { outValue = ( _scaleY ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_theme") ) { outValue = get_theme_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_theme") ) { outValue = set_theme_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { outValue = onKeyDown_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"autoScale") ) { outValue = ( autoScale ); return true; }
		if (HX_FIELD_EQ(inName,"get_scale") ) { outValue = get_scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_scale") ) { outValue = set_scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"callLater") ) { outValue = callLater_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleSheet") ) { outValue = ( styleSheet ); return true; }
		if (HX_FIELD_EQ(inName,"properties") ) { outValue = ( properties ); return true; }
		if (HX_FIELD_EQ(inName,"get_assets") ) { outValue = get_assets_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_screen") ) { outValue = get_screen_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"roundScale") ) { outValue = ( roundScale ); return true; }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { outValue = get_scaleX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { outValue = set_scaleX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { outValue = get_scaleY_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { outValue = set_scaleY_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_initialized() : initialized ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nativeConfig") ) { outValue = ( nativeConfig ); return true; }
		if (HX_FIELD_EQ(inName,"buildBackend") ) { outValue = buildBackend_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_initialized") ) { outValue = ( _initialized ); return true; }
		if (HX_FIELD_EQ(inName,"pixelsPerRem") ) { outValue = ( pixelsPerRem ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_backendBuilt") ) { outValue = ( _backendBuilt ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_initialized") ) { outValue = get_initialized_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_pixelsPerRem") ) { outValue = set_pixelsPerRem_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"backendProperties") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_backendProperties() : backendProperties ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_backendProperties") ) { outValue = ( _backendProperties ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_backendProperties") ) { outValue = get_backendProperties_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"autoScaleDPIThreshold") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_autoScaleDPIThreshold() : autoScaleDPIThreshold ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_autoScaleDPIThreshold") ) { outValue = get_autoScaleDPIThreshold_dyn(); return true; }
	}
	return false;
}

bool Toolkit_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_theme(ioValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_scale(ioValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_theme") ) { _theme=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"_built") ) { _built=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"assets") ) { assets=ioValue.Cast<  ::haxe::ui::ToolkitAssets >(); return true; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=ioValue.Cast<  ::haxe::ui::core::Screen >(); return true; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_scaleX(ioValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_scaleY(ioValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { _scaleX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { _scaleY=ioValue.Cast< Float >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoScale") ) { autoScale=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleSheet") ) { styleSheet=ioValue.Cast<  ::haxe::ui::styles::CompositeStyleSheet >(); return true; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"roundScale") ) { roundScale=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nativeConfig") ) { nativeConfig=ioValue.Cast<  ::haxe::ui::util::GenericConfig >(); return true; }
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"pixelsPerRem") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_pixelsPerRem(ioValue.Cast< int >()) ); else pixelsPerRem=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_backendBuilt") ) { _backendBuilt=ioValue.Cast< bool >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"backendProperties") ) { backendProperties=ioValue.Cast<  ::haxe::ui::util::Properties >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_backendProperties") ) { _backendProperties=ioValue.Cast<  ::haxe::ui::util::Properties >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"autoScaleDPIThreshold") ) { autoScaleDPIThreshold=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Toolkit_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Toolkit_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::styles::CompositeStyleSheet */ ,(void *) &Toolkit_obj::styleSheet,HX_("styleSheet",ae,3b,16,fc)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Toolkit_obj::properties,HX_("properties",f3,fb,0e,61)},
	{::hx::fsObject /*  ::haxe::ui::util::GenericConfig */ ,(void *) &Toolkit_obj::nativeConfig,HX_("nativeConfig",b9,5f,e9,7c)},
	{::hx::fsString,(void *) &Toolkit_obj::_theme,HX_("_theme",4a,c5,6d,0b)},
	{::hx::fsObject /*  ::haxe::ui::util::Properties */ ,(void *) &Toolkit_obj::_backendProperties,HX_("_backendProperties",e8,c1,40,dd)},
	{::hx::fsObject /*  ::haxe::ui::util::Properties */ ,(void *) &Toolkit_obj::backendProperties,HX_("backendProperties",27,1d,2b,0a)},
	{::hx::fsBool,(void *) &Toolkit_obj::_built,HX_("_built",7f,22,d2,b6)},
	{::hx::fsBool,(void *) &Toolkit_obj::_backendBuilt,HX_("_backendBuilt",69,d9,98,22)},
	{::hx::fsBool,(void *) &Toolkit_obj::_initialized,HX_("_initialized",15,a3,19,9d)},
	{::hx::fsBool,(void *) &Toolkit_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsObject /*  ::haxe::ui::ToolkitAssets */ ,(void *) &Toolkit_obj::assets,HX_("assets",83,48,03,4c)},
	{::hx::fsObject /*  ::haxe::ui::core::Screen */ ,(void *) &Toolkit_obj::screen,HX_("screen",6c,3b,5d,47)},
	{::hx::fsInt,(void *) &Toolkit_obj::pixelsPerRem,HX_("pixelsPerRem",8a,67,2b,3a)},
	{::hx::fsBool,(void *) &Toolkit_obj::roundScale,HX_("roundScale",5c,6b,c9,21)},
	{::hx::fsBool,(void *) &Toolkit_obj::autoScale,HX_("autoScale",9b,0c,da,56)},
	{::hx::fsInt,(void *) &Toolkit_obj::autoScaleDPIThreshold,HX_("autoScaleDPIThreshold",c9,7d,55,df)},
	{::hx::fsFloat,(void *) &Toolkit_obj::_scaleX,HX_("_scaleX",2d,fc,9c,aa)},
	{::hx::fsFloat,(void *) &Toolkit_obj::_scaleY,HX_("_scaleY",2e,fc,9c,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Toolkit_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Toolkit_obj::styleSheet,"styleSheet");
	HX_MARK_MEMBER_NAME(Toolkit_obj::properties,"properties");
	HX_MARK_MEMBER_NAME(Toolkit_obj::nativeConfig,"nativeConfig");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_theme,"_theme");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_backendProperties,"_backendProperties");
	HX_MARK_MEMBER_NAME(Toolkit_obj::backendProperties,"backendProperties");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_built,"_built");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_backendBuilt,"_backendBuilt");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_initialized,"_initialized");
	HX_MARK_MEMBER_NAME(Toolkit_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Toolkit_obj::assets,"assets");
	HX_MARK_MEMBER_NAME(Toolkit_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(Toolkit_obj::pixelsPerRem,"pixelsPerRem");
	HX_MARK_MEMBER_NAME(Toolkit_obj::roundScale,"roundScale");
	HX_MARK_MEMBER_NAME(Toolkit_obj::autoScale,"autoScale");
	HX_MARK_MEMBER_NAME(Toolkit_obj::autoScaleDPIThreshold,"autoScaleDPIThreshold");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_scaleX,"_scaleX");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_scaleY,"_scaleY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Toolkit_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Toolkit_obj::styleSheet,"styleSheet");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::properties,"properties");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::nativeConfig,"nativeConfig");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_theme,"_theme");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_backendProperties,"_backendProperties");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::backendProperties,"backendProperties");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_built,"_built");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_backendBuilt,"_backendBuilt");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_initialized,"_initialized");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::assets,"assets");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::pixelsPerRem,"pixelsPerRem");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::roundScale,"roundScale");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::autoScale,"autoScale");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::autoScaleDPIThreshold,"autoScaleDPIThreshold");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_scaleX,"_scaleX");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_scaleY,"_scaleY");
};

#endif

::hx::Class Toolkit_obj::__mClass;

static ::String Toolkit_obj_sStaticFields[] = {
	HX_("styleSheet",ae,3b,16,fc),
	HX_("properties",f3,fb,0e,61),
	HX_("nativeConfig",b9,5f,e9,7c),
	HX_("_theme",4a,c5,6d,0b),
	HX_("get_theme",60,da,2f,53),
	HX_("set_theme",6c,c6,80,36),
	HX_("_backendProperties",e8,c1,40,dd),
	HX_("backendProperties",27,1d,2b,0a),
	HX_("get_backendProperties",fe,1f,d9,88),
	HX_("_built",7f,22,d2,b6),
	HX_("build",2e,db,ea,ba),
	HX_("_backendBuilt",69,d9,98,22),
	HX_("buildBackend",86,ea,df,0d),
	HX_("_initialized",15,a3,19,9d),
	HX_("initialized",14,f5,0f,37),
	HX_("get_initialized",ab,ac,f1,f7),
	HX_("init",10,3b,bb,45),
	HX_("onKeyDown",42,22,f2,73),
	HX_("assets",83,48,03,4c),
	HX_("get_assets",4c,b8,8a,3c),
	HX_("screen",6c,3b,5d,47),
	HX_("get_screen",35,ab,e4,37),
	HX_("pixelsPerRem",8a,67,2b,3a),
	HX_("set_pixelsPerRem",87,41,0c,95),
	HX_("roundScale",5c,6b,c9,21),
	HX_("autoScale",9b,0c,da,56),
	HX_("autoScaleDPIThreshold",c9,7d,55,df),
	HX_("get_autoScaleDPIThreshold",20,38,53,e5),
	HX_("_scaleX",2d,fc,9c,aa),
	HX_("get_scaleX",57,5a,ad,2c),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("_scaleY",2e,fc,9c,aa),
	HX_("get_scaleY",58,5a,ad,2c),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("get_scale",e1,2a,78,bc),
	HX_("set_scale",ed,16,c9,9f),
	HX_("callLater",0e,11,fc,fb),
	::String(null())
};

void Toolkit_obj::__register()
{
	Toolkit_obj _hx_dummy;
	Toolkit_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.Toolkit",cc,33,92,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Toolkit_obj::__GetStatic;
	__mClass->mSetStaticField = &Toolkit_obj::__SetStatic;
	__mClass->mMarkFunc = Toolkit_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Toolkit_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Toolkit_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Toolkit_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Toolkit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Toolkit_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Toolkit_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_17_boot)
HXDLIN(  17)		styleSheet =  ::haxe::ui::styles::CompositeStyleSheet_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_19_boot)
HXDLIN(  19)		properties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_21_boot)
HXDLIN(  21)		nativeConfig =  ::haxe::ui::util::GenericConfig_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_23_boot)
HXDLIN(  23)		_theme = HX_("default",c1,d8,c3,9b);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_42_boot)
HXDLIN(  42)		_backendProperties =  ::haxe::ui::util::Properties_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_49_boot)
HXDLIN(  49)		_built = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_60_boot)
HXDLIN(  60)		_backendBuilt = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_69_boot)
HXDLIN(  69)		_initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_106_boot)
HXDLIN( 106)		pixelsPerRem = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_118_boot)
HXDLIN( 118)		roundScale = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_119_boot)
HXDLIN( 119)		autoScale = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_128_boot)
HXDLIN( 128)		_scaleX = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_158_boot)
HXDLIN( 158)		_scaleY = ((Float)0);
            	}
}

} // end namespace haxe
} // end namespace ui
