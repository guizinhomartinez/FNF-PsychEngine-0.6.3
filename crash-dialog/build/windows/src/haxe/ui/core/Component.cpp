#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Backend
#include <haxe/ui/Backend.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_BackendImpl
#include <haxe/ui/backend/BackendImpl.h>
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
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
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
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_dragdrop_DragManager
#include <haxe/ui/dragdrop/DragManager.h>
#endif
#ifndef INCLUDED_haxe_ui_events_AnimationEvent
#include <haxe/ui/events/AnimationEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_DragEvent
#include <haxe/ui/events/DragEvent.h>
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
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayout
#include <haxe/ui/layouts/DelegateLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
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
#ifndef INCLUDED_haxe_ui_styles_CompositeStyleSheet
#include <haxe/ui/styles/CompositeStyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Parser
#include <haxe/ui/styles/Parser.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleSheet
#include <haxe/ui/styles/StyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_Animation
#include <haxe/ui/styles/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#include <haxe/ui/styles/elements/AnimationKeyFrames.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_RuleElement
#include <haxe/ui/styles/elements/RuleElement.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ComponentUtil
#include <haxe/ui/util/ComponentUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_ValidationManager
#include <haxe/ui/validation/ValidationManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_41_new,"haxe.ui.core.Component","new",0xf80fa452,"haxe.ui.core.Component.new","haxe/ui/core/Component.hx",41,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_88_create,"haxe.ui.core.Component","create",0xe32f164a,"haxe.ui.core.Component.create","haxe/ui/core/Component.hx",88,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_123_registerComposite,"haxe.ui.core.Component","registerComposite",0x2203fc96,"haxe.ui.core.Component.registerComposite","haxe/ui/core/Component.hx",123,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_126_createDefaults,"haxe.ui.core.Component","createDefaults",0x6c48fcfc,"haxe.ui.core.Component.createDefaults","haxe/ui/core/Component.hx",126,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_129_createChildren,"haxe.ui.core.Component","createChildren",0x2d1945a9,"haxe.ui.core.Component.createChildren","haxe/ui/core/Component.hx",129,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_134_destroyChildren,"haxe.ui.core.Component","destroyChildren",0x9e11834b,"haxe.ui.core.Component.destroyChildren","haxe/ui/core/Component.hx",134,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_137_createLayout,"haxe.ui.core.Component","createLayout",0x5b250c94,"haxe.ui.core.Component.createLayout","haxe/ui/core/Component.hx",137,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_169_get_native,"haxe.ui.core.Component","get_native",0xfe08a7ae,"haxe.ui.core.Component.get_native","haxe/ui/core/Component.hx",169,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_178_set_native,"haxe.ui.core.Component","set_native",0x01864622,"haxe.ui.core.Component.set_native","haxe/ui/core/Component.hx",178,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_212_get_animatable,"haxe.ui.core.Component","get_animatable",0x5e32d675,"haxe.ui.core.Component.get_animatable","haxe/ui/core/Component.hx",212,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_217_set_animatable,"haxe.ui.core.Component","set_animatable",0x7e52bee9,"haxe.ui.core.Component.set_animatable","haxe/ui/core/Component.hx",217,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_236_get_componentAnimation,"haxe.ui.core.Component","get_componentAnimation",0x643c831e,"haxe.ui.core.Component.get_componentAnimation","haxe/ui/core/Component.hx",236,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_238_set_componentAnimation,"haxe.ui.core.Component","set_componentAnimation",0x97e7ff92,"haxe.ui.core.Component.set_componentAnimation","haxe/ui/core/Component.hx",238,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_264_get_screen,"haxe.ui.core.Component","get_screen",0x23491983,"haxe.ui.core.Component.get_screen","haxe/ui/core/Component.hx",264,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_272_get_draggable,"haxe.ui.core.Component","get_draggable",0x535cf756,"haxe.ui.core.Component.get_draggable","haxe/ui/core/Component.hx",272,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_274_set_draggable,"haxe.ui.core.Component","set_draggable",0x9862d962,"haxe.ui.core.Component.set_draggable","haxe/ui/core/Component.hx",274,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_286_get_dragInitiator,"haxe.ui.core.Component","get_dragInitiator",0xc26164e4,"haxe.ui.core.Component.get_dragInitiator","haxe/ui/core/Component.hx",286,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_288_set_dragInitiator,"haxe.ui.core.Component","set_dragInitiator",0xe5cf3cf0,"haxe.ui.core.Component.set_dragInitiator","haxe/ui/core/Component.hx",288,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_299_get_dragOptions,"haxe.ui.core.Component","get_dragOptions",0x12a40453,"haxe.ui.core.Component.get_dragOptions","haxe/ui/core/Component.hx",299,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_305_set_dragOptions,"haxe.ui.core.Component","set_dragOptions",0x0e6f815f,"haxe.ui.core.Component.set_dragOptions","haxe/ui/core/Component.hx",305,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_326_get_rootComponent,"haxe.ui.core.Component","get_rootComponent",0x6f023104,"haxe.ui.core.Component.get_rootComponent","haxe/ui/core/Component.hx",326,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_339_get_numComponents,"haxe.ui.core.Component","get_numComponents",0x5eaa8dc5,"haxe.ui.core.Component.get_numComponents","haxe/ui/core/Component.hx",339,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_358_addComponent,"haxe.ui.core.Component","addComponent",0xeebf302a,"haxe.ui.core.Component.addComponent","haxe/ui/core/Component.hx",358,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_409_containsComponent,"haxe.ui.core.Component","containsComponent",0x37f8d210,"haxe.ui.core.Component.containsComponent","haxe/ui/core/Component.hx",409,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_404_containsComponent,"haxe.ui.core.Component","containsComponent",0x37f8d210,"haxe.ui.core.Component.containsComponent","haxe/ui/core/Component.hx",404,0x3bb69e3f)
static const bool _hx_array_data_1376d360_27[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_422_addComponentAt,"haxe.ui.core.Component","addComponentAt",0x810b47bd,"haxe.ui.core.Component.addComponentAt","haxe/ui/core/Component.hx",422,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_468_onComponentAdded,"haxe.ui.core.Component","onComponentAdded",0xea95b110,"haxe.ui.core.Component.onComponentAdded","haxe/ui/core/Component.hx",468,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_475_removeComponent,"haxe.ui.core.Component","removeComponent",0x0c1582cb,"haxe.ui.core.Component.removeComponent","haxe/ui/core/Component.hx",475,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_525_disposeComponent,"haxe.ui.core.Component","disposeComponent",0x497fe0ec,"haxe.ui.core.Component.disposeComponent","haxe/ui/core/Component.hx",525,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_558_removeComponentAt,"haxe.ui.core.Component","removeComponentAt",0x5e94449e,"haxe.ui.core.Component.removeComponentAt","haxe/ui/core/Component.hx",558,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_616_onComponentRemoved,"haxe.ui.core.Component","onComponentRemoved",0x5ebdaff0,"haxe.ui.core.Component.onComponentRemoved","haxe/ui/core/Component.hx",616,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_619_assignPositionClasses,"haxe.ui.core.Component","assignPositionClasses",0xc1aef400,"haxe.ui.core.Component.assignPositionClasses","haxe/ui/core/Component.hx",619,0x3bb69e3f)
static const ::String _hx_array_data_1376d360_36[] = {
	HX_("first",30,78,9d,00),HX_("last",56,0a,ad,47),
};
static const ::String _hx_array_data_1376d360_37[] = {
	HX_("first",30,78,9d,00),HX_("last",56,0a,ad,47),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_636_destroyComponent,"haxe.ui.core.Component","destroyComponent",0xd4295131,"haxe.ui.core.Component.destroyComponent","haxe/ui/core/Component.hx",636,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_644_onDestroy,"haxe.ui.core.Component","onDestroy",0x72573b0d,"haxe.ui.core.Component.onDestroy","haxe/ui/core/Component.hx",644,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_654_walkComponents,"haxe.ui.core.Component","walkComponents",0x417ec8cd,"haxe.ui.core.Component.walkComponents","haxe/ui/core/Component.hx",654,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_661_walkComponents,"haxe.ui.core.Component","walkComponents",0x417ec8cd,"haxe.ui.core.Component.walkComponents","haxe/ui/core/Component.hx",661,0x3bb69e3f)
static const bool _hx_array_data_1376d360_44[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_676_removeAllComponents,"haxe.ui.core.Component","removeAllComponents",0x5ae576a5,"haxe.ui.core.Component.removeAllComponents","haxe/ui/core/Component.hx",676,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_693_matchesSearch,"haxe.ui.core.Component","matchesSearch",0x1adfff2d,"haxe.ui.core.Component.matchesSearch","haxe/ui/core/Component.hx",693,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_723_findComponent,"haxe.ui.core.Component","findComponent",0x2428a7b6,"haxe.ui.core.Component.findComponent","haxe/ui/core/Component.hx",723,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_751_findComponents,"haxe.ui.core.Component","findComponents",0x7f6a17fd,"haxe.ui.core.Component.findComponents","haxe/ui/core/Component.hx",751,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_807_findAncestor,"haxe.ui.core.Component","findAncestor",0x61148f7a,"haxe.ui.core.Component.findAncestor","haxe/ui/core/Component.hx",807,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_821_findComponentsUnderPoint,"haxe.ui.core.Component","findComponentsUnderPoint",0x29ea7675,"haxe.ui.core.Component.findComponentsUnderPoint","haxe/ui/core/Component.hx",821,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_840_hasComponentUnderPoint,"haxe.ui.core.Component","hasComponentUnderPoint",0xbfade349,"haxe.ui.core.Component.hasComponentUnderPoint","haxe/ui/core/Component.hx",840,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_869_getComponentIndex,"haxe.ui.core.Component","getComponentIndex",0xa31313bd,"haxe.ui.core.Component.getComponentIndex","haxe/ui/core/Component.hx",869,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_884_setComponentIndex,"haxe.ui.core.Component","setComponentIndex",0xc680ebc9,"haxe.ui.core.Component.setComponentIndex","haxe/ui/core/Component.hx",884,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_905_getComponentAt,"haxe.ui.core.Component","getComponentAt",0x72d29368,"haxe.ui.core.Component.getComponentAt","haxe/ui/core/Component.hx",905,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_922_hide,"haxe.ui.core.Component","hide",0x11abd490,"haxe.ui.core.Component.hide","haxe/ui/core/Component.hx",922,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_941_hideInternal,"haxe.ui.core.Component","hideInternal",0xc99307ed,"haxe.ui.core.Component.hideInternal","haxe/ui/core/Component.hx",941,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_968_show,"haxe.ui.core.Component","show",0x18f074cb,"haxe.ui.core.Component.show","haxe/ui/core/Component.hx",968,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_988_showInternal,"haxe.ui.core.Component","showInternal",0x341adb28,"haxe.ui.core.Component.showInternal","haxe/ui/core/Component.hx",988,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1012_fadeIn,"haxe.ui.core.Component","fadeIn",0x4bcafbcf,"haxe.ui.core.Component.fadeIn","haxe/ui/core/Component.hx",1012,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1024_fadeIn,"haxe.ui.core.Component","fadeIn",0x4bcafbcf,"haxe.ui.core.Component.fadeIn","haxe/ui/core/Component.hx",1024,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1018_fadeIn,"haxe.ui.core.Component","fadeIn",0x4bcafbcf,"haxe.ui.core.Component.fadeIn","haxe/ui/core/Component.hx",1018,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1035_fadeOut,"haxe.ui.core.Component","fadeOut",0x05d5ed64,"haxe.ui.core.Component.fadeOut","haxe/ui/core/Component.hx",1035,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1038_fadeOut,"haxe.ui.core.Component","fadeOut",0x05d5ed64,"haxe.ui.core.Component.fadeOut","haxe/ui/core/Component.hx",1038,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1058_get_hidden,"haxe.ui.core.Component","get_hidden",0x2881dd81,"haxe.ui.core.Component.get_hidden","haxe/ui/core/Component.hx",1058,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1067_set_hidden,"haxe.ui.core.Component","set_hidden",0x2bff7bf5,"haxe.ui.core.Component.set_hidden","haxe/ui/core/Component.hx",1067,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1089_get_customStyle,"haxe.ui.core.Component","get_customStyle",0x95deba49,"haxe.ui.core.Component.get_customStyle","haxe/ui/core/Component.hx",1089,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1095_set_customStyle,"haxe.ui.core.Component","set_customStyle",0x91aa3755,"haxe.ui.core.Component.set_customStyle","haxe/ui/core/Component.hx",1095,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1110_addClass,"haxe.ui.core.Component","addClass",0xf39a3d25,"haxe.ui.core.Component.addClass","haxe/ui/core/Component.hx",1110,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1129_addClasses,"haxe.ui.core.Component","addClasses",0xbc7fe8d3,"haxe.ui.core.Component.addClasses","haxe/ui/core/Component.hx",1129,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1155_removeClass,"haxe.ui.core.Component","removeClass",0x53086b46,"haxe.ui.core.Component.removeClass","haxe/ui/core/Component.hx",1155,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1174_removeClasses,"haxe.ui.core.Component","removeClasses",0x766ea134,"haxe.ui.core.Component.removeClasses","haxe/ui/core/Component.hx",1174,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1201_hasClass,"haxe.ui.core.Component","hasClass",0x0695614c,"haxe.ui.core.Component.hasClass","haxe/ui/core/Component.hx",1201,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1208_swapClass,"haxe.ui.core.Component","swapClass",0x342bde17,"haxe.ui.core.Component.swapClass","haxe/ui/core/Component.hx",1208,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1237_get_styleNames,"haxe.ui.core.Component","get_styleNames",0xf6e51e6e,"haxe.ui.core.Component.get_styleNames","haxe/ui/core/Component.hx",1237,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1239_set_styleNames,"haxe.ui.core.Component","set_styleNames",0x170506e2,"haxe.ui.core.Component.set_styleNames","haxe/ui/core/Component.hx",1239,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1257_get_styleString,"haxe.ui.core.Component","get_styleString",0x054c6b6b,"haxe.ui.core.Component.get_styleString","haxe/ui/core/Component.hx",1257,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1259_set_styleString,"haxe.ui.core.Component","set_styleString",0x0117e877,"haxe.ui.core.Component.set_styleString","haxe/ui/core/Component.hx",1259,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1285_get_styleSheet,"haxe.ui.core.Component","get_styleSheet",0xdc807145,"haxe.ui.core.Component.get_styleSheet","haxe/ui/core/Component.hx",1285,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1305_set_styleSheet,"haxe.ui.core.Component","set_styleSheet",0xfca059b9,"haxe.ui.core.Component.set_styleSheet","haxe/ui/core/Component.hx",1305,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1310_resetCachedStyleSheetRef,"haxe.ui.core.Component","resetCachedStyleSheetRef",0xa7d00742,"haxe.ui.core.Component.resetCachedStyleSheetRef","haxe/ui/core/Component.hx",1310,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1329_get_includeInLayout,"haxe.ui.core.Component","get_includeInLayout",0x181f41c0,"haxe.ui.core.Component.get_includeInLayout","haxe/ui/core/Component.hx",1329,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1335_set_includeInLayout,"haxe.ui.core.Component","set_includeInLayout",0x54bc34cc,"haxe.ui.core.Component.set_includeInLayout","haxe/ui/core/Component.hx",1335,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1346_get_layout,"haxe.ui.core.Component","get_layout",0x34a48cc1,"haxe.ui.core.Component.get_layout","haxe/ui/core/Component.hx",1346,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1348_set_layout,"haxe.ui.core.Component","set_layout",0x38222b35,"haxe.ui.core.Component.set_layout","haxe/ui/core/Component.hx",1348,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1363_lockLayout,"haxe.ui.core.Component","lockLayout",0x8ec36f43,"haxe.ui.core.Component.lockLayout","haxe/ui/core/Component.hx",1363,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1376_unlockLayout,"haxe.ui.core.Component","unlockLayout",0xef854e5c,"haxe.ui.core.Component.unlockLayout","haxe/ui/core/Component.hx",1376,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1400_ready,"haxe.ui.core.Component","ready",0x2408d4d5,"haxe.ui.core.Component.ready","haxe/ui/core/Component.hx",1400,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1422_ready,"haxe.ui.core.Component","ready",0x2408d4d5,"haxe.ui.core.Component.ready","haxe/ui/core/Component.hx",1422,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1440_onReady,"haxe.ui.core.Component","onReady",0x5191f3b6,"haxe.ui.core.Component.onReady","haxe/ui/core/Component.hx",1440,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1443_onInitialize,"haxe.ui.core.Component","onInitialize",0xa515f11d,"haxe.ui.core.Component.onInitialize","haxe/ui/core/Component.hx",1443,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1447_onResized,"haxe.ui.core.Component","onResized",0xb1446a03,"haxe.ui.core.Component.onResized","haxe/ui/core/Component.hx",1447,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1451_onMoved,"haxe.ui.core.Component","onMoved",0x773d1f86,"haxe.ui.core.Component.onMoved","haxe/ui/core/Component.hx",1451,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1495_get_scriptAccess,"haxe.ui.core.Component","get_scriptAccess",0x1a29fb66,"haxe.ui.core.Component.get_scriptAccess","haxe/ui/core/Component.hx",1495,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1497_set_scriptAccess,"haxe.ui.core.Component","set_scriptAccess",0x706be8da,"haxe.ui.core.Component.set_scriptAccess","haxe/ui/core/Component.hx",1497,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1515_get_namedComponents,"haxe.ui.core.Component","get_namedComponents",0xbc51b138,"haxe.ui.core.Component.get_namedComponents","haxe/ui/core/Component.hx",1515,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1577_onThemeChanged,"haxe.ui.core.Component","onThemeChanged",0x92ad2af8,"haxe.ui.core.Component.onThemeChanged","haxe/ui/core/Component.hx",1577,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1595_initializeComponent,"haxe.ui.core.Component","initializeComponent",0x4b914d3f,"haxe.ui.core.Component.initializeComponent","haxe/ui/core/Component.hx",1595,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1619_validateInitialSize,"haxe.ui.core.Component","validateInitialSize",0xea31ca61,"haxe.ui.core.Component.validateInitialSize","haxe/ui/core/Component.hx",1619,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1642_validateComponentData,"haxe.ui.core.Component","validateComponentData",0x87072783,"haxe.ui.core.Component.validateComponentData","haxe/ui/core/Component.hx",1642,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1653_validateComponentLayout,"haxe.ui.core.Component","validateComponentLayout",0xeaf64843,"haxe.ui.core.Component.validateComponentLayout","haxe/ui/core/Component.hx",1653,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1686_enforceSizeConstraints,"haxe.ui.core.Component","enforceSizeConstraints",0x6ae632c1,"haxe.ui.core.Component.enforceSizeConstraints","haxe/ui/core/Component.hx",1686,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1743_validateComponentStyle,"haxe.ui.core.Component","validateComponentStyle",0x4ed101b8,"haxe.ui.core.Component.validateComponentStyle","haxe/ui/core/Component.hx",1743,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1773_validateComponentPosition,"haxe.ui.core.Component","validateComponentPosition",0x9b049282,"haxe.ui.core.Component.validateComponentPosition","haxe/ui/core/Component.hx",1773,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1781_updateComponentDisplay,"haxe.ui.core.Component","updateComponentDisplay",0x3c5a127c,"haxe.ui.core.Component.updateComponentDisplay","haxe/ui/core/Component.hx",1781,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1797_validateComponentAutoSize,"haxe.ui.core.Component","validateComponentAutoSize",0xff8381a9,"haxe.ui.core.Component.validateComponentAutoSize","haxe/ui/core/Component.hx",1797,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1820_applyStyle,"haxe.ui.core.Component","applyStyle",0x1ad38f31,"haxe.ui.core.Component.applyStyle","haxe/ui/core/Component.hx",1820,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1928_onPointerEventsMouseOver,"haxe.ui.core.Component","onPointerEventsMouseOver",0xa08c12d0,"haxe.ui.core.Component.onPointerEventsMouseOver","haxe/ui/core/Component.hx",1928,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1932_onPointerEventsMouseOut,"haxe.ui.core.Component","onPointerEventsMouseOut",0xfafae292,"haxe.ui.core.Component.onPointerEventsMouseOut","haxe/ui/core/Component.hx",1932,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1936_onPointerEventsMouseDown,"haxe.ui.core.Component","onPointerEventsMouseDown",0x994179de,"haxe.ui.core.Component.onPointerEventsMouseDown","haxe/ui/core/Component.hx",1936,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1940_onPointerEventsMouseUp,"haxe.ui.core.Component","onPointerEventsMouseUp",0x7f6750d7,"haxe.ui.core.Component.onPointerEventsMouseUp","haxe/ui/core/Component.hx",1940,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1959_applyAnimationKeyFrame,"haxe.ui.core.Component","applyAnimationKeyFrame",0xb58d5732,"haxe.ui.core.Component.applyAnimationKeyFrame","haxe/ui/core/Component.hx",1959,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1947_applyAnimationKeyFrame,"haxe.ui.core.Component","applyAnimationKeyFrame",0xb58d5732,"haxe.ui.core.Component.applyAnimationKeyFrame","haxe/ui/core/Component.hx",1947,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1968_cloneComponent,"haxe.ui.core.Component","cloneComponent",0x90cb96ee,"haxe.ui.core.Component.cloneComponent","haxe/ui/core/Component.hx",1968,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1989_get_isComponentClipped,"haxe.ui.core.Component","get_isComponentClipped",0x606cd163,"haxe.ui.core.Component.get_isComponentClipped","haxe/ui/core/Component.hx",1989,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2000_get_cssName,"haxe.ui.core.Component","get_cssName",0x0d3b35b7,"haxe.ui.core.Component.get_cssName","haxe/ui/core/Component.hx",2000,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_442_registerBehaviours,"haxe.ui.core.Component","registerBehaviours",0x24781427,"haxe.ui.core.Component.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_color,"haxe.ui.core.Component","get_color",0x042c232c,"haxe.ui.core.Component.get_color","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_color,"haxe.ui.core.Component","set_color",0xe77d0f38,"haxe.ui.core.Component.set_color","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_backgroundColor,"haxe.ui.core.Component","get_backgroundColor",0xb6a0759e,"haxe.ui.core.Component.get_backgroundColor","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_backgroundColor,"haxe.ui.core.Component","set_backgroundColor",0xf33d68aa,"haxe.ui.core.Component.set_backgroundColor","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_backgroundColorEnd,"haxe.ui.core.Component","get_backgroundColorEnd",0xebfb1cdd,"haxe.ui.core.Component.get_backgroundColorEnd","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_backgroundColorEnd,"haxe.ui.core.Component","set_backgroundColorEnd",0x1fa69951,"haxe.ui.core.Component.set_backgroundColorEnd","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_backgroundImage,"haxe.ui.core.Component","get_backgroundImage",0x29ad2396,"haxe.ui.core.Component.get_backgroundImage","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_backgroundImage,"haxe.ui.core.Component","set_backgroundImage",0x664a16a2,"haxe.ui.core.Component.set_backgroundImage","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_borderColor,"haxe.ui.core.Component","get_borderColor",0x5359eb60,"haxe.ui.core.Component.get_borderColor","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_borderColor,"haxe.ui.core.Component","set_borderColor",0x4f25686c,"haxe.ui.core.Component.set_borderColor","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_borderSize,"haxe.ui.core.Component","get_borderSize",0xe7583564,"haxe.ui.core.Component.get_borderSize","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_borderSize,"haxe.ui.core.Component","set_borderSize",0x07781dd8,"haxe.ui.core.Component.set_borderSize","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_borderRadius,"haxe.ui.core.Component","get_borderRadius",0x85c413b5,"haxe.ui.core.Component.get_borderRadius","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_borderRadius,"haxe.ui.core.Component","set_borderRadius",0xdc060129,"haxe.ui.core.Component.set_borderRadius","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_padding,"haxe.ui.core.Component","get_padding",0x62f3cfda,"haxe.ui.core.Component.get_padding","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_padding,"haxe.ui.core.Component","set_padding",0x6d60d6e6,"haxe.ui.core.Component.set_padding","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_paddingLeft,"haxe.ui.core.Component","get_paddingLeft",0x026af901,"haxe.ui.core.Component.get_paddingLeft","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_paddingLeft,"haxe.ui.core.Component","set_paddingLeft",0xfe36760d,"haxe.ui.core.Component.set_paddingLeft","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_paddingRight,"haxe.ui.core.Component","get_paddingRight",0x923bf5a2,"haxe.ui.core.Component.get_paddingRight","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_paddingRight,"haxe.ui.core.Component","set_paddingRight",0xe87de316,"haxe.ui.core.Component.set_paddingRight","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_paddingTop,"haxe.ui.core.Component","get_paddingTop",0x1a7032db,"haxe.ui.core.Component.get_paddingTop","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_paddingTop,"haxe.ui.core.Component","set_paddingTop",0x3a901b4f,"haxe.ui.core.Component.set_paddingTop","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_paddingBottom,"haxe.ui.core.Component","get_paddingBottom",0x798d8a65,"haxe.ui.core.Component.get_paddingBottom","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_paddingBottom,"haxe.ui.core.Component","set_paddingBottom",0x9cfb6271,"haxe.ui.core.Component.set_paddingBottom","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_marginLeft,"haxe.ui.core.Component","get_marginLeft",0x654788ec,"haxe.ui.core.Component.get_marginLeft","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_marginLeft,"haxe.ui.core.Component","set_marginLeft",0x85677160,"haxe.ui.core.Component.set_marginLeft","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_marginRight,"haxe.ui.core.Component","get_marginRight",0xb05d5357,"haxe.ui.core.Component.get_marginRight","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_marginRight,"haxe.ui.core.Component","set_marginRight",0xac28d063,"haxe.ui.core.Component.set_marginRight","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_marginTop,"haxe.ui.core.Component","get_marginTop",0xe3c74950,"haxe.ui.core.Component.get_marginTop","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_marginTop,"haxe.ui.core.Component","set_marginTop",0x28cd2b5c,"haxe.ui.core.Component.set_marginTop","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_marginBottom,"haxe.ui.core.Component","get_marginBottom",0xb89e2b10,"haxe.ui.core.Component.get_marginBottom","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_marginBottom,"haxe.ui.core.Component","set_marginBottom",0x0ee01884,"haxe.ui.core.Component.set_marginBottom","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_clip,"haxe.ui.core.Component","get_clip",0xf361c927,"haxe.ui.core.Component.get_clip","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_clip,"haxe.ui.core.Component","set_clip",0xa1bf229b,"haxe.ui.core.Component.set_clip","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_opacity,"haxe.ui.core.Component","get_opacity",0x7ddbd3d4,"haxe.ui.core.Component.get_opacity","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_opacity,"haxe.ui.core.Component","set_opacity",0x8848dae0,"haxe.ui.core.Component.set_opacity","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_horizontalAlign,"haxe.ui.core.Component","get_horizontalAlign",0x9dc0b64a,"haxe.ui.core.Component.get_horizontalAlign","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_horizontalAlign,"haxe.ui.core.Component","set_horizontalAlign",0xda5da956,"haxe.ui.core.Component.set_horizontalAlign","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_193_get_verticalAlign,"haxe.ui.core.Component","get_verticalAlign",0x0e704138,"haxe.ui.core.Component.get_verticalAlign","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_206_set_verticalAlign,"haxe.ui.core.Component","set_verticalAlign",0x31de1944,"haxe.ui.core.Component.set_verticalAlign","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_423_self,"haxe.ui.core.Component","self",0x18ee2b5a,"haxe.ui.core.Component.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onDragStart,"haxe.ui.core.Component","set_onDragStart",0x80f3f244,"haxe.ui.core.Component.set_onDragStart","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onDrag,"haxe.ui.core.Component","set_onDrag",0xc463b13e,"haxe.ui.core.Component.set_onDrag","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onDragEnd,"haxe.ui.core.Component","set_onDragEnd",0x0370e53d,"haxe.ui.core.Component.set_onDragEnd","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onAnimationStart,"haxe.ui.core.Component","set_onAnimationStart",0xf1e5cc88,"haxe.ui.core.Component.set_onAnimationStart","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onAnimationFrame,"haxe.ui.core.Component","set_onAnimationFrame",0x745dd053,"haxe.ui.core.Component.set_onAnimationFrame","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onAnimationEnd,"haxe.ui.core.Component","set_onAnimationEnd",0x3c6ce681,"haxe.ui.core.Component.set_onAnimationEnd","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onClick,"haxe.ui.core.Component","set_onClick",0x7b7f97be,"haxe.ui.core.Component.set_onClick","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onMouseOver,"haxe.ui.core.Component","set_onMouseOver",0x90a0588f,"haxe.ui.core.Component.set_onMouseOver","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onMouseOut,"haxe.ui.core.Component","set_onMouseOut",0x825ed9b3,"haxe.ui.core.Component.set_onMouseOut","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onDblClick,"haxe.ui.core.Component","set_onDblClick",0x2b43e084,"haxe.ui.core.Component.set_onDblClick","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onRightClick,"haxe.ui.core.Component","set_onRightClick",0xf13cfb96,"haxe.ui.core.Component.set_onRightClick","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_167_set_onChange,"haxe.ui.core.Component","set_onChange",0x41497d3a,"haxe.ui.core.Component.set_onChange","haxe/ui/macros/Macros.hx",167,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1521_addNamedComponentsFrom,"haxe.ui.core.Component","addNamedComponentsFrom",0x87ba48e6,"haxe.ui.core.Component.addNamedComponentsFrom","haxe/ui/core/Component.hx",1521,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_41_boot,"haxe.ui.core.Component","boot",0x0db92400,"haxe.ui.core.Component.boot","haxe/ui/core/Component.hx",41,0x3bb69e3f)
namespace haxe{
namespace ui{
namespace core{

void Component_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_41_new)
HXLINE(1819)		this->_pauseAnimationStyleChanges = false;
HXLINE(1617)		this->_initialSizeApplied = false;
HXLINE(1491)		this->_scriptAccess = true;
HXLINE(1321)		this->_includeInLayout = true;
HXLINE(1283)		this->_styleSheet = null();
HXLINE(1282)		this->_cachedStyleSheetRef = null();
HXLINE(1281)		this->_useCachedStyleSheetRef = false;
HXLINE(1105)		this->cascadeActive = false;
HXLINE(1103)		this->classes = ::Array_obj< ::String >::__new(0);
HXLINE(1083)		this->_customStyle = null();
HXLINE(1052)		this->_hidden = false;
HXLINE( 315)		this->bindingRoot = false;
HXLINE( 297)		this->_dragOptions = null();
HXLINE( 283)		this->_dragInitiator = null();
HXLINE( 253)		this->userData = null();
HXLINE( 204)		this->_animatable = true;
HXLINE( 164)		this->_native = null();
HXLINE(  87)		this->_defaultLayoutClass = null();
HXLINE(  82)		this->componentTabIndex = 0;
HXLINE(  43)		super::__construct();
HXLINE(  51)		this->addClass(::haxe::ui::Backend_obj::get_id(),false,null());
HXLINE(  53)		::hx::Class c = ::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  54)		while(::hx::IsNotNull( c )){
HXLINE(  55)			::String css = ::Type_obj::getClassName(c);
HXLINE(  56)			::String className = ( (::String)(css.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE(  57)			this->addClass(className.toLowerCase(),false,null());
HXLINE(  58)			this->addClass(::haxe::ui::util::StringUtil_obj::toDashes(className,null()),false,null());
HXLINE(  59)			if ((className.toLowerCase() == HX_("component",bd,f0,53,0f))) {
HXLINE(  60)				goto _hx_goto_0;
            			}
HXLINE(  62)			c = ::Type_obj::getSuperClass(c);
            		}
            		_hx_goto_0:;
HXLINE(  68)		 ::haxe::ui::styles::Style s = ::haxe::ui::Toolkit_obj::styleSheet->buildStyleFor(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if (::hx::IsNotNull( s->native )) {
HXLINE(  69)			_hx_tmp = (this->get_hasNativeEntry() == true);
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			this->set_native(s->native);
            		}
            		else {
HXLINE(  72)			this->create();
            		}
HXLINE(  76)		if ((::haxe::ui::Toolkit_obj::get_initialized() == false)) {
HXLINE(  77)			::haxe::Log_obj::trace(HX_("WARNING: You are trying to create a component before the toolkit has been initialized. This could have undefined results.",5e,d9,e2,65),::hx::SourceInfo(HX_("haxe/ui/core/Component.hx",3f,9e,b6,3b),77,HX_("haxe.ui.core.Component",60,d3,76,13),HX_("new",60,d0,53,00)));
            		}
            	}

Dynamic Component_obj::__CreateEmpty() { return new Component_obj; }

void *Component_obj::_hx_vtable = 0;

Dynamic Component_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Component_obj > _hx_result = new Component_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Component_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
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
			return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241b0321;
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

static ::haxe::ui::validation::IValidating_obj _hx_haxe_ui_core_Component__hx_haxe_ui_validation_IValidating= {
	( int (::hx::Object::*)())&::haxe::ui::core::Component_obj::get_depth,
	( int (::hx::Object::*)(int))&::haxe::ui::core::Component_obj::set_depth,
	( ::String (::hx::Object::*)())&::haxe::ui::core::Component_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::haxe::ui::core::Component_obj::set_id,
	( bool (::hx::Object::*)())&::haxe::ui::core::Component_obj::get_isComponentOffscreen,
	( void (::hx::Object::*)(::hx::Null< bool > ))&::haxe::ui::core::Component_obj::validateComponent,
	( void (::hx::Object::*)())&::haxe::ui::core::Component_obj::updateComponentDisplay,
};

void *Component_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x1e962029: return &_hx_haxe_ui_core_Component__hx_haxe_ui_validation_IValidating;
	}
	return super::_hx_getInterface(inHash);
}

void Component_obj::create(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_88_create)
HXLINE(  89)		bool _hx_tmp;
HXDLIN(  89)		if (::hx::IsNotEq( this->get_native(),false )) {
HXLINE(  89)			_hx_tmp = ::hx::IsNull( this->get_native() );
            		}
            		else {
HXLINE(  89)			_hx_tmp = true;
            		}
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  90)			this->registerComposite();
            		}
HXLINE(  92)		this->createDefaults();
HXLINE(  93)		this->handleCreate(( (bool)(this->get_native()) ));
HXLINE(  94)		this->destroyChildren();
HXLINE(  95)		this->registerBehaviours();
HXLINE(  96)		this->behaviours->replaceNative();
HXLINE(  98)		bool _hx_tmp1;
HXDLIN(  98)		if (::hx::IsNotEq( this->get_native(),false )) {
HXLINE(  98)			_hx_tmp1 = ::hx::IsNull( this->get_native() );
            		}
            		else {
HXLINE(  98)			_hx_tmp1 = true;
            		}
HXDLIN(  98)		if (_hx_tmp1) {
HXLINE(  99)			if (::hx::IsNotNull( this->_compositeBuilderClass )) {
HXLINE( 100)				if (::hx::IsNull( this->_compositeBuilder )) {
HXLINE( 101)					this->_compositeBuilder = ( ( ::haxe::ui::core::CompositeBuilder)(::Type_obj::createInstance(this->_compositeBuilderClass,::cpp::VirtualArray_obj::__new(1)->init(0,::hx::ObjectPtr<OBJ_>(this)))) );
            				}
HXLINE( 103)				this->_compositeBuilder->create();
            			}
HXLINE( 105)			this->createChildren();
HXLINE( 106)			bool _hx_tmp;
HXDLIN( 106)			if (::hx::IsNotNull( this->_internalEventsClass )) {
HXLINE( 106)				_hx_tmp = ::hx::IsNull( this->_internalEvents );
            			}
            			else {
HXLINE( 106)				_hx_tmp = false;
            			}
HXDLIN( 106)			if (_hx_tmp) {
HXLINE( 107)				this->registerInternalEvents(this->_internalEventsClass,null());
            			}
            		}
            		else {
HXLINE( 110)			::String builderClass = this->getNativeConfigProperty(HX_(".builder.@class",99,29,ba,a8),null());
HXLINE( 111)			if (::hx::IsNotNull( builderClass )) {
HXLINE( 112)				if (::hx::IsNull( this->_compositeBuilder )) {
HXLINE( 113)					this->_compositeBuilder = ( ( ::haxe::ui::core::CompositeBuilder)(::Type_obj::createInstance(::Type_obj::resolveClass(builderClass),::cpp::VirtualArray_obj::__new(1)->init(0,::hx::ObjectPtr<OBJ_>(this)))) );
            				}
HXLINE( 115)				this->_compositeBuilder->create();
            			}
            		}
HXLINE( 118)		this->behaviours->applyDefaults();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,create,(void))

void Component_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_123_registerComposite)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,registerComposite,(void))

void Component_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_126_createDefaults)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,createDefaults,(void))

void Component_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_129_createChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,createChildren,(void))

void Component_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_134_destroyChildren)
HXDLIN( 134)		this->unregisterInternalEvents();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,destroyChildren,(void))

 ::haxe::ui::layouts::Layout Component_obj::createLayout(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_137_createLayout)
HXLINE( 138)		 ::haxe::ui::layouts::Layout l = null();
HXLINE( 139)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE( 140)			 ::haxe::ds::StringMap sizeProps = this->getNativeConfigProperties(HX_(".size",ef,4f,c2,c8));
HXLINE( 141)			bool _hx_tmp;
HXDLIN( 141)			if (::hx::IsNotNull( sizeProps )) {
HXLINE( 141)				_hx_tmp = sizeProps->exists(HX_("class",38,78,58,48));
            			}
            			else {
HXLINE( 141)				_hx_tmp = false;
            			}
HXDLIN( 141)			if (_hx_tmp) {
HXLINE( 142)				 ::haxe::ui::layouts::DelegateLayoutSize size = ( ( ::haxe::ui::layouts::DelegateLayoutSize)(::Type_obj::createInstance(::Type_obj::resolveClass(sizeProps->get_string(HX_("class",38,78,58,48))),::cpp::VirtualArray_obj::__new(0))) );
HXLINE( 143)				size->config = sizeProps;
HXLINE( 144)				l =  ::haxe::ui::layouts::DelegateLayout_obj::__alloc( HX_CTX ,size);
            			}
            			else {
HXLINE( 146)				 ::haxe::ds::StringMap layoutProps = this->getNativeConfigProperties(HX_(".layout",58,05,94,d1));
HXLINE( 147)				bool _hx_tmp;
HXDLIN( 147)				if (::hx::IsNotNull( layoutProps )) {
HXLINE( 147)					_hx_tmp = layoutProps->exists(HX_("class",38,78,58,48));
            				}
            				else {
HXLINE( 147)					_hx_tmp = false;
            				}
HXDLIN( 147)				if (_hx_tmp) {
HXLINE( 148)					l = ( ( ::haxe::ui::layouts::Layout)(::Type_obj::createInstance(::Type_obj::resolveClass(layoutProps->get_string(HX_("class",38,78,58,48))),::cpp::VirtualArray_obj::__new(0))) );
            				}
            			}
            		}
HXLINE( 153)		if (::hx::IsNull( l )) {
HXLINE( 154)			if (::hx::IsNotNull( this->_defaultLayoutClass )) {
HXLINE( 155)				l = ( ( ::haxe::ui::layouts::Layout)(::Type_obj::createInstance(this->_defaultLayoutClass,::cpp::VirtualArray_obj::__new(0))) );
            			}
            			else {
HXLINE( 157)				l =  ::haxe::ui::layouts::DefaultLayout_obj::__alloc( HX_CTX );
            			}
            		}
HXLINE( 161)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,createLayout,return )

 ::Dynamic Component_obj::get_native(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_169_get_native)
HXLINE( 170)		if (::hx::IsNull( this->_native )) {
HXLINE( 171)			return false;
            		}
HXLINE( 173)		if ((this->get_hasNativeEntry() == false)) {
HXLINE( 174)			return false;
            		}
HXLINE( 176)		return this->_native;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_native,return )

 ::Dynamic Component_obj::set_native( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_178_set_native)
HXLINE( 179)		if ((this->get_hasNativeEntry() == false)) {
HXLINE( 180)			return value;
            		}
HXLINE( 182)		if (::hx::IsEq( this->_native,value )) {
HXLINE( 183)			return value;
            		}
HXLINE( 186)		this->_native = value;
HXLINE( 187)		this->get_customStyle()->native = value;
HXLINE( 188)		bool _hx_tmp;
HXDLIN( 188)		if (::hx::IsEq( this->_native,true )) {
HXLINE( 188)			_hx_tmp = this->get_hasNativeEntry();
            		}
            		else {
HXLINE( 188)			_hx_tmp = false;
            		}
HXDLIN( 188)		if (_hx_tmp) {
HXLINE( 189)			this->addClass(HX_(":native",51,b1,f9,8d),null(),null());
            		}
            		else {
HXLINE( 191)			this->removeClass(HX_(":native",51,b1,f9,8d),null(),null());
            		}
HXLINE( 194)		this->behaviours->cache();
HXLINE( 195)		this->behaviours->detatch();
HXLINE( 196)		this->create();
HXLINE( 197)		if (::hx::IsNotNull( this->get_layout() )) {
HXLINE( 198)			this->set_layout(this->createLayout());
            		}
HXLINE( 200)		this->behaviours->restore();
HXLINE( 201)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_native,return )

bool Component_obj::get_animatable(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_212_get_animatable)
HXDLIN( 212)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_animatable,return )

bool Component_obj::set_animatable(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_217_set_animatable)
HXLINE( 218)		if ((this->_animatable != value)) {
HXLINE( 219)			bool _hx_tmp;
HXDLIN( 219)			if ((value == false)) {
HXLINE( 219)				_hx_tmp = ::hx::IsNotNull( this->_componentAnimation );
            			}
            			else {
HXLINE( 219)				_hx_tmp = false;
            			}
HXDLIN( 219)			if (_hx_tmp) {
HXLINE( 220)				this->_componentAnimation->stop();
HXLINE( 221)				this->_componentAnimation = null();
            			}
HXLINE( 224)			this->_animatable = value;
            		}
HXLINE( 226)		this->_animatable = value;
HXLINE( 227)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_animatable,return )

 ::haxe::ui::styles::animation::Animation Component_obj::get_componentAnimation(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_236_get_componentAnimation)
HXDLIN( 236)		return this->_componentAnimation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_componentAnimation,return )

 ::haxe::ui::styles::animation::Animation Component_obj::set_componentAnimation( ::haxe::ui::styles::animation::Animation value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_238_set_componentAnimation)
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		if (::hx::IsInstanceNotEq( this->_componentAnimation,value )) {
HXLINE( 239)			_hx_tmp = (this->_animatable == true);
            		}
            		else {
HXLINE( 239)			_hx_tmp = false;
            		}
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 240)			if (::hx::IsNotNull( this->_componentAnimation )) {
HXLINE( 241)				this->_componentAnimation->stop();
            			}
HXLINE( 244)			this->_componentAnimation = value;
            		}
HXLINE( 247)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_componentAnimation,return )

 ::haxe::ui::core::Screen Component_obj::get_screen(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_264_get_screen)
HXDLIN( 264)		return ::haxe::ui::Toolkit_obj::get_screen();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_screen,return )

bool Component_obj::get_draggable(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_272_get_draggable)
HXDLIN( 272)		return ::haxe::ui::dragdrop::DragManager_obj::get_instance()->isRegisteredDraggable(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_draggable,return )

bool Component_obj::set_draggable(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_274_set_draggable)
HXLINE( 275)		if ((value == true)) {
HXLINE( 276)			 ::haxe::ui::dragdrop::DragManager _hx_tmp = ::haxe::ui::dragdrop::DragManager_obj::get_instance();
HXDLIN( 276)			_hx_tmp->registerDraggable(::hx::ObjectPtr<OBJ_>(this),this->get_dragOptions());
            		}
            		else {
HXLINE( 278)			::haxe::ui::dragdrop::DragManager_obj::get_instance()->unregisterDraggable(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 280)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_draggable,return )

 ::haxe::ui::core::Component Component_obj::get_dragInitiator(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_286_get_dragInitiator)
HXDLIN( 286)		return this->_dragInitiator;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_dragInitiator,return )

 ::haxe::ui::core::Component Component_obj::set_dragInitiator( ::haxe::ui::core::Component value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_288_set_dragInitiator)
HXLINE( 289)		this->_dragInitiator = value;
HXLINE( 290)		if (::hx::IsNotNull( this->_dragOptions )) {
HXLINE( 291)			this->_dragOptions->__SetField(HX_("mouseTarget",56,27,75,7c),value,::hx::paccDynamic);
            		}
HXLINE( 293)		this->set_draggable(true);
HXLINE( 294)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_dragInitiator,return )

 ::Dynamic Component_obj::get_dragOptions(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_299_get_dragOptions)
HXLINE( 300)		if (::hx::IsNull( this->_dragOptions )) {
HXLINE( 301)			this->_dragOptions =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("mouseTarget",56,27,75,7c),this->_dragInitiator));
            		}
HXLINE( 303)		return this->_dragOptions;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_dragOptions,return )

 ::Dynamic Component_obj::set_dragOptions( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_305_set_dragOptions)
HXLINE( 306)		this->_dragOptions = value;
HXLINE( 307)		this->set_draggable(true);
HXLINE( 308)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_dragOptions,return )

 ::haxe::ui::core::Component Component_obj::get_rootComponent(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_326_get_rootComponent)
HXLINE( 327)		 ::haxe::ui::core::Component r = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 328)		while(::hx::IsNotNull( r->parentComponent )){
HXLINE( 329)			r = r->parentComponent;
            		}
HXLINE( 331)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_rootComponent,return )

int Component_obj::get_numComponents(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_339_get_numComponents)
HXLINE( 340)		int n = 0;
HXLINE( 341)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 342)			 ::Dynamic builderCount = this->_compositeBuilder->get_numComponents();
HXLINE( 343)			if (::hx::IsNotNull( builderCount )) {
HXLINE( 344)				n = ( (int)(builderCount) );
            			}
            			else {
HXLINE( 345)				if (::hx::IsNotNull( this->_children )) {
HXLINE( 346)					n = this->_children->length;
            				}
            			}
            		}
            		else {
HXLINE( 348)			if (::hx::IsNotNull( this->_children )) {
HXLINE( 349)				n = this->_children->length;
            			}
            		}
HXLINE( 351)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_numComponents,return )

 ::haxe::ui::core::Component Component_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_358_addComponent)
HXLINE( 359)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 360)			 ::haxe::ui::core::Component v = this->_compositeBuilder->addComponent(child);
HXLINE( 361)			if (::hx::IsNotNull( v )) {
HXLINE( 362)				v->set_scriptAccess(this->get_scriptAccess());
HXLINE( 363)				return v;
            			}
            		}
HXLINE( 367)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE( 368)			bool allowChildren = this->getNativeConfigPropertyBool(HX_(".@allowChildren",56,37,b0,b1),true);
HXLINE( 369)			if ((allowChildren == false)) {
HXLINE( 370)				return child;
            			}
            		}
HXLINE( 374)		child->parentComponent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 375)		child->_isDisposed = false;
HXLINE( 377)		if (::hx::IsNull( this->_children )) {
HXLINE( 378)			this->_children = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 380)		this->_children->push(child);
HXLINE( 382)		this->handleAddComponent(child);
HXLINE( 383)		if (this->_ready) {
HXLINE( 384)			child->ready();
            		}
HXLINE( 387)		this->assignPositionClasses(null());
HXLINE( 388)		{
HXLINE( 388)			bool _hx_tmp;
HXDLIN( 388)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 388)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 388)				_hx_tmp = true;
            			}
HXDLIN( 388)			if (!(_hx_tmp)) {
HXLINE( 388)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 389)		if (this->get_disabled()) {
HXLINE( 390)			child->set_disabled(true);
            		}
HXLINE( 393)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 394)			this->_compositeBuilder->onComponentAdded(child);
            		}
HXLINE( 397)		this->onComponentAdded(child);
HXLINE( 398)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentadded",e3,16,1d,d8),null(),null()));
HXLINE( 400)		child->set_scriptAccess(this->get_scriptAccess());
HXLINE( 401)		return child;
            	}


bool Component_obj::containsComponent( ::haxe::ui::core::Component child){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,contains, ::haxe::ui::core::Component,child) HXARGC(1)
            		bool _hx_run( ::haxe::ui::core::Component c){
            			HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_409_containsComponent)
HXLINE( 410)			if (::hx::IsInstanceEq( child,c )) {
HXLINE( 411)				contains[0] = true;
            			}
HXLINE( 413)			return !(contains->__get(0));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_404_containsComponent)
HXLINE( 405)		if (::hx::IsNull( child )) {
HXLINE( 406)			return false;
            		}
HXLINE( 408)		::Array< bool > contains = ::Array_obj< bool >::fromData( _hx_array_data_1376d360_27,1);
HXLINE( 409)		this->walkComponents( ::Dynamic(new _hx_Closure_0(contains,child)));
HXLINE( 415)		return contains->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,containsComponent,return )

 ::haxe::ui::core::Component Component_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_422_addComponentAt)
HXLINE( 423)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 424)			 ::haxe::ui::core::Component v = this->_compositeBuilder->addComponentAt(child,index);
HXLINE( 425)			if (::hx::IsNotNull( v )) {
HXLINE( 426)				v->set_scriptAccess(this->get_scriptAccess());
HXLINE( 427)				return v;
            			}
            		}
HXLINE( 431)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE( 432)			bool allowChildren = this->getNativeConfigPropertyBool(HX_(".@allowChildren",56,37,b0,b1),true);
HXLINE( 433)			if ((allowChildren == false)) {
HXLINE( 434)				return child;
            			}
            		}
HXLINE( 438)		child->parentComponent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 439)		child->_isDisposed = false;
HXLINE( 441)		if (::hx::IsNull( this->_children )) {
HXLINE( 442)			this->_children = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 444)		this->_children->insert(index,child);
HXLINE( 446)		this->handleAddComponentAt(child,index);
HXLINE( 447)		if (this->_ready) {
HXLINE( 448)			child->ready();
            		}
HXLINE( 451)		this->assignPositionClasses(null());
HXLINE( 452)		{
HXLINE( 452)			bool _hx_tmp;
HXDLIN( 452)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 452)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 452)				_hx_tmp = true;
            			}
HXDLIN( 452)			if (!(_hx_tmp)) {
HXLINE( 452)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 453)		if (this->get_disabled()) {
HXLINE( 454)			child->set_disabled(true);
            		}
HXLINE( 457)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 458)			this->_compositeBuilder->onComponentAdded(child);
            		}
HXLINE( 461)		this->onComponentAdded(child);
HXLINE( 462)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentadded",e3,16,1d,d8),null(),null()));
HXLINE( 464)		child->set_scriptAccess(this->get_scriptAccess());
HXLINE( 465)		return child;
            	}


void Component_obj::onComponentAdded( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_468_onComponentAdded)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onComponentAdded,(void))

 ::haxe::ui::core::Component Component_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_475_removeComponent)
HXLINE( 476)		if (::hx::IsNull( child )) {
HXLINE( 477)			return null();
            		}
HXLINE( 480)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 481)			 ::haxe::ui::core::Component v = this->_compositeBuilder->removeComponent(child,dispose,invalidate);
HXLINE( 482)			if (::hx::IsNotNull( v )) {
HXLINE( 483)				return v;
            			}
            		}
HXLINE( 487)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 488)			if ((this->_children->indexOf(child,null()) == -1)) {
HXLINE( 489)				::String childId = child->get_className();
HXLINE( 490)				if (::hx::IsNotNull( child->get_id() )) {
HXLINE( 491)					childId = (childId + (HX_("#",23,00,00,00) + child->get_id()));
            				}
HXLINE( 493)				::String thisId = this->get_className();
HXLINE( 494)				if (::hx::IsNotNull( this->get_id() )) {
HXLINE( 495)					thisId = (thisId + (HX_("#",23,00,00,00) + this->get_id()));
            				}
HXLINE( 497)				::haxe::Log_obj::trace(((((HX_("WARNING: trying to remove a child (",97,bd,ae,d5) + childId) + HX_(") that is not a child of this component (",c8,7a,aa,51)) + thisId) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/core/Component.hx",3f,9e,b6,3b),497,HX_("haxe.ui.core.Component",60,d3,76,13),HX_("removeComponent",d9,8b,72,50)));
HXLINE( 498)				return child;
            			}
HXLINE( 500)			if (this->_children->remove(child)) {
HXLINE( 501)				child->parentComponent = null();
HXLINE( 502)				child->set_depth(-1);
            			}
HXLINE( 504)			if ((dispose == true)) {
HXLINE( 505)				child->disposeComponent();
            			}
            		}
HXLINE( 509)		this->handleRemoveComponent(child,dispose);
HXLINE( 510)		this->assignPositionClasses(invalidate);
HXLINE( 511)		bool _hx_tmp;
HXDLIN( 511)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 511)			_hx_tmp = (invalidate == true);
            		}
            		else {
HXLINE( 511)			_hx_tmp = false;
            		}
HXDLIN( 511)		if (_hx_tmp) {
HXLINE( 512)			bool _hx_tmp;
HXDLIN( 512)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 512)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 512)				_hx_tmp = true;
            			}
HXDLIN( 512)			if (!(_hx_tmp)) {
HXLINE( 512)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 515)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 516)			this->_compositeBuilder->onComponentRemoved(child);
            		}
HXLINE( 519)		this->onComponentRemoved(child);
HXLINE( 520)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentremoved",83,70,48,49),null(),null()));
HXLINE( 522)		return child;
            	}


void Component_obj::disposeComponent(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_525_disposeComponent)
HXLINE( 526)		this->_isDisposed = true;
HXLINE( 527)		this->removeAllComponents(true);
HXLINE( 528)		this->destroyComponent();
HXLINE( 529)		this->unregisterEvents();
HXLINE( 530)		if (this->hasTextDisplay()) {
HXLINE( 531)			this->getTextDisplay()->dispose();
            		}
HXLINE( 533)		if (this->hasTextInput()) {
HXLINE( 534)			this->getTextInput()->dispose();
            		}
HXLINE( 536)		if (this->hasImageDisplay()) {
HXLINE( 537)			this->getImageDisplay()->dispose();
            		}
HXLINE( 539)		if (::hx::IsNotNull( this->behaviours )) {
HXLINE( 540)			this->behaviours->dispose();
HXLINE( 541)			this->behaviours = null();
            		}
HXLINE( 543)		if (::hx::IsNotNull( this->_layout )) {
HXLINE( 544)			this->_layout->set_component(null());
HXLINE( 545)			this->_layout = null();
            		}
HXLINE( 547)		if (::hx::IsNotNull( this->_internalEvents )) {
HXLINE( 548)			this->_internalEvents->_target = null();
HXLINE( 549)			this->_internalEvents = null();
            		}
HXLINE( 551)		this->parentComponent = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,disposeComponent,(void))

 ::haxe::ui::core::Component Component_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_558_removeComponentAt)
HXLINE( 559)		if (::hx::IsNull( this->_children )) {
HXLINE( 560)			return null();
            		}
HXLINE( 563)		int childCount = this->_children->length;
HXLINE( 564)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 565)			 ::Dynamic compositeChildCount = this->_compositeBuilder->get_numComponents();
HXLINE( 566)			if (::hx::IsNotNull( compositeChildCount )) {
HXLINE( 567)				childCount = ( (int)(compositeChildCount) );
            			}
            		}
HXLINE( 571)		bool _hx_tmp;
HXDLIN( 571)		if ((index >= 0)) {
HXLINE( 571)			_hx_tmp = (index > (childCount - 1));
            		}
            		else {
HXLINE( 571)			_hx_tmp = true;
            		}
HXDLIN( 571)		if (_hx_tmp) {
HXLINE( 572)			return null();
            		}
HXLINE( 575)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 576)			 ::haxe::ui::core::Component v = this->_compositeBuilder->removeComponentAt(index,dispose,invalidate);
HXLINE( 577)			if (::hx::IsNotNull( v )) {
HXLINE( 578)				return v;
            			}
            		}
HXLINE( 582)		 ::haxe::ui::core::Component child = this->_children->__get(index).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 583)		if (::hx::IsNull( child )) {
HXLINE( 584)			return null();
            		}
HXLINE( 587)		if ((dispose == true)) {
HXLINE( 588)			child->_isDisposed = true;
HXLINE( 589)			child->removeAllComponents(true);
            		}
HXLINE( 591)		this->handleRemoveComponentAt(index,dispose);
HXLINE( 592)		if (this->_children->remove(child)) {
HXLINE( 593)			child->parentComponent = null();
HXLINE( 594)			child->set_depth(-1);
            		}
HXLINE( 596)		if ((dispose == true)) {
HXLINE( 597)			child->destroyComponent();
HXLINE( 598)			child->unregisterEvents();
            		}
HXLINE( 601)		this->assignPositionClasses(invalidate);
HXLINE( 602)		if ((invalidate == true)) {
HXLINE( 603)			bool _hx_tmp;
HXDLIN( 603)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 603)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 603)				_hx_tmp = true;
            			}
HXDLIN( 603)			if (!(_hx_tmp)) {
HXLINE( 603)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 606)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 607)			this->_compositeBuilder->onComponentRemoved(child);
            		}
HXLINE( 610)		this->onComponentRemoved(child);
HXLINE( 611)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("componentremoved",83,70,48,49),null(),null()));
HXLINE( 613)		return child;
            	}


void Component_obj::onComponentRemoved( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_616_onComponentRemoved)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onComponentRemoved,(void))

void Component_obj::assignPositionClasses(::hx::Null< bool >  __o_invalidate){
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_619_assignPositionClasses)
HXLINE( 620)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 620)		if (::hx::IsNull( this->_children )) {
HXLINE( 620)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 620)			_hx_tmp = this->_children;
            		}
HXDLIN( 620)		if ((_hx_tmp->length == 1)) {
HXLINE( 621)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 621)			if (::hx::IsNull( this->_children )) {
HXLINE( 621)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 621)				_hx_tmp = this->_children;
            			}
HXDLIN( 621)			_hx_tmp->__get(0).StaticCast<  ::haxe::ui::core::Component >()->addClasses(::Array_obj< ::String >::fromData( _hx_array_data_1376d360_36,2),invalidate,null());
HXLINE( 622)			return;
            		}
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			::Array< ::Dynamic> _g1;
HXDLIN( 624)			if (::hx::IsNull( this->_children )) {
HXLINE( 624)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 624)				_g1 = this->_children;
            			}
HXDLIN( 624)			int _g2 = _g1->length;
HXDLIN( 624)			while((_g < _g2)){
HXLINE( 624)				_g = (_g + 1);
HXDLIN( 624)				int i = (_g - 1);
HXLINE( 625)				::Array< ::Dynamic> c;
HXDLIN( 625)				if (::hx::IsNull( this->_children )) {
HXLINE( 625)					c = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 625)					c = this->_children;
            				}
HXDLIN( 625)				 ::haxe::ui::core::Component c1 = c->__get(i).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 626)				if ((i == 0)) {
HXLINE( 627)					c1->swapClass(HX_("first",30,78,9d,00),HX_("last",56,0a,ad,47),invalidate,null());
            				}
            				else {
HXLINE( 628)					bool _hx_tmp;
HXDLIN( 628)					::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 628)					if (::hx::IsNull( this->_children )) {
HXLINE( 628)						_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE( 628)						_hx_tmp1 = this->_children;
            					}
HXDLIN( 628)					if ((_hx_tmp1->length > 1)) {
HXLINE( 628)						::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 628)						if (::hx::IsNull( this->_children )) {
HXLINE( 628)							_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            						}
            						else {
HXLINE( 628)							_hx_tmp1 = this->_children;
            						}
HXDLIN( 628)						_hx_tmp = (i == (_hx_tmp1->length - 1));
            					}
            					else {
HXLINE( 628)						_hx_tmp = false;
            					}
HXDLIN( 628)					if (_hx_tmp) {
HXLINE( 629)						c1->swapClass(HX_("last",56,0a,ad,47),HX_("first",30,78,9d,00),invalidate,null());
            					}
            					else {
HXLINE( 631)						c1->removeClasses(::Array_obj< ::String >::fromData( _hx_array_data_1376d360_37,2),invalidate,null());
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,assignPositionClasses,(void))

void Component_obj::destroyComponent(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_636_destroyComponent)
HXLINE( 637)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 638)			this->_compositeBuilder->destroy();
            		}
HXLINE( 640)		::haxe::ui::locale::LocaleManager_obj::get_instance()->unregisterComponent(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 641)		this->onDestroy();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,destroyComponent,(void))

void Component_obj::onDestroy(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_644_onDestroy)
HXLINE( 645)		{
HXLINE( 645)			int _g = 0;
HXDLIN( 645)			::Array< ::Dynamic> _g1;
HXDLIN( 645)			if (::hx::IsNull( this->_children )) {
HXLINE( 645)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 645)				_g1 = this->_children;
            			}
HXDLIN( 645)			while((_g < _g1->length)){
HXLINE( 645)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 645)				_g = (_g + 1);
HXLINE( 646)				child->onDestroy();
            			}
            		}
HXLINE( 648)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("destroy",fa,2c,86,24),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onDestroy,(void))

void Component_obj::walkComponents( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_654_walkComponents)
HXLINE( 655)		if (::hx::IsEq( callback(::hx::ObjectPtr<OBJ_>(this)),false )) {
HXLINE( 656)			return;
            		}
HXLINE( 659)		{
HXLINE( 659)			int _g = 0;
HXDLIN( 659)			::Array< ::Dynamic> _g1;
HXDLIN( 659)			if (::hx::IsNull( this->_children )) {
HXLINE( 659)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 659)				_g1 = this->_children;
            			}
HXDLIN( 659)			while((_g < _g1->length)){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,cont, ::Dynamic,callback) HXARGC(1)
            				bool _hx_run( ::haxe::ui::core::Component c){
            					HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_661_walkComponents)
HXLINE( 662)					cont[0] = ( (bool)(callback(c)) );
HXLINE( 663)					return cont->__get(0);
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 659)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 659)				_g = (_g + 1);
HXLINE( 660)				::Array< bool > cont = ::Array_obj< bool >::fromData( _hx_array_data_1376d360_44,1);
HXLINE( 661)				child->walkComponents( ::Dynamic(new _hx_Closure_0(cont,callback)));
HXLINE( 666)				if ((cont->__get(0) == false)) {
HXLINE( 667)					goto _hx_goto_41;
            				}
            			}
            			_hx_goto_41:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,walkComponents,(void))

void Component_obj::removeAllComponents(::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_676_removeAllComponents)
HXLINE( 677)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 678)			bool b = this->_compositeBuilder->removeAllComponents(dispose);
HXLINE( 679)			if ((b == true)) {
HXLINE( 680)				return;
            			}
            		}
HXLINE( 684)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 685)			while((this->_children->length > 0)){
HXLINE( 686)				this->_children->__get(0).StaticCast<  ::haxe::ui::core::Component >()->removeAllComponents(dispose);
HXLINE( 687)				this->removeComponent(this->_children->__get(0).StaticCast<  ::haxe::ui::core::Component >(),dispose,false);
            			}
HXLINE( 689)			{
HXLINE( 689)				bool _hx_tmp;
HXDLIN( 689)				if (::hx::IsNotNull( this->_layout )) {
HXLINE( 689)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE( 689)					_hx_tmp = true;
            				}
HXDLIN( 689)				if (!(_hx_tmp)) {
HXLINE( 689)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,removeAllComponents,(void))

bool Component_obj::matchesSearch(::String criteria,::hx::Class type,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_693_matchesSearch)
HXLINE( 694)		if (::hx::IsNotNull( criteria )) {
HXLINE( 695)			bool _hx_tmp;
HXDLIN( 695)			bool _hx_tmp1;
HXDLIN( 695)			if ((searchType == HX_("id",db,5b,00,00))) {
HXLINE( 695)				_hx_tmp1 = (this->get_id() == criteria);
            			}
            			else {
HXLINE( 695)				_hx_tmp1 = false;
            			}
HXDLIN( 695)			if (!(_hx_tmp1)) {
HXLINE( 695)				if ((searchType == HX_("css",c3,83,4b,00))) {
HXLINE( 695)					_hx_tmp = ((this->classes->indexOf(criteria,null()) != -1) == true);
            				}
            				else {
HXLINE( 695)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 695)				_hx_tmp = true;
            			}
HXDLIN( 695)			if (_hx_tmp) {
HXLINE( 696)				if (::hx::IsNotNull( type )) {
HXLINE( 697)					return ::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),type);
            				}
HXLINE( 699)				return true;
            			}
            		}
            		else {
HXLINE( 701)			if (::hx::IsNotNull( type )) {
HXLINE( 702)				return ::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),type);
            			}
            		}
HXLINE( 704)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,matchesSearch,return )

 ::Dynamic Component_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_723_findComponent)
HXLINE( 724)		bool _hx_tmp;
HXDLIN( 724)		bool _hx_tmp1;
HXDLIN( 724)		if (::hx::IsNull( recursive )) {
HXLINE( 724)			_hx_tmp1 = ::hx::IsNotNull( criteria );
            		}
            		else {
HXLINE( 724)			_hx_tmp1 = false;
            		}
HXDLIN( 724)		if (_hx_tmp1) {
HXLINE( 724)			_hx_tmp = (searchType == HX_("id",db,5b,00,00));
            		}
            		else {
HXLINE( 724)			_hx_tmp = false;
            		}
HXDLIN( 724)		if (_hx_tmp) {
HXLINE( 725)			recursive = true;
            		}
HXLINE( 728)		 ::haxe::ui::core::Component match = null();
HXLINE( 729)		{
HXLINE( 729)			int _g = 0;
HXDLIN( 729)			::Array< ::Dynamic> _g1;
HXDLIN( 729)			if (::hx::IsNull( this->_children )) {
HXLINE( 729)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 729)				_g1 = this->_children;
            			}
HXDLIN( 729)			while((_g < _g1->length)){
HXLINE( 729)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 729)				_g = (_g + 1);
HXLINE( 730)				if (child->matchesSearch(criteria,type,searchType)) {
HXLINE( 731)					match = child;
HXLINE( 732)					goto _hx_goto_48;
            				}
            			}
            			_hx_goto_48:;
            		}
HXLINE( 735)		bool _hx_tmp2;
HXDLIN( 735)		if (::hx::IsNull( match )) {
HXLINE( 735)			_hx_tmp2 = ::hx::IsEq( recursive,true );
            		}
            		else {
HXLINE( 735)			_hx_tmp2 = false;
            		}
HXDLIN( 735)		if (_hx_tmp2) {
HXLINE( 736)			{
HXLINE( 736)				int _g = 0;
HXDLIN( 736)				::Array< ::Dynamic> _g1;
HXDLIN( 736)				if (::hx::IsNull( this->_children )) {
HXLINE( 736)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 736)					_g1 = this->_children;
            				}
HXDLIN( 736)				while((_g < _g1->length)){
HXLINE( 736)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 736)					_g = (_g + 1);
HXLINE( 737)					 ::haxe::ui::core::Component temp = ( ( ::haxe::ui::core::Component)(child->findComponent(criteria,type,recursive,searchType)) );
HXLINE( 738)					if (::hx::IsNotNull( temp )) {
HXLINE( 739)						match = temp;
HXLINE( 740)						goto _hx_goto_49;
            					}
            				}
            				_hx_goto_49:;
            			}
HXLINE( 743)			bool _hx_tmp;
HXDLIN( 743)			if (::hx::IsNull( match )) {
HXLINE( 743)				_hx_tmp = ::hx::IsNotNull( this->_compositeBuilder );
            			}
            			else {
HXLINE( 743)				_hx_tmp = false;
            			}
HXDLIN( 743)			if (_hx_tmp) {
HXLINE( 744)				match = ( ( ::haxe::ui::core::Component)(this->_compositeBuilder->findComponent(criteria,type,recursive,searchType)) );
            			}
            		}
HXLINE( 748)		return match;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Component_obj,findComponent,return )

::cpp::VirtualArray Component_obj::findComponents(::String styleName,::hx::Class type,::hx::Null< int >  __o_maxDepth){
            		int maxDepth = __o_maxDepth.Default(5);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_751_findComponents)
HXLINE( 752)		if ((maxDepth == -1)) {
HXLINE( 753)			maxDepth = 100;
            		}
HXLINE( 755)		if ((maxDepth <= 0)) {
HXLINE( 756)			return ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 759)		maxDepth = (maxDepth - 1);
HXLINE( 761)		::cpp::VirtualArray r = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 762)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 763)			::cpp::VirtualArray childArray = this->_compositeBuilder->findComponents(styleName,type,maxDepth);
HXLINE( 764)			if (::hx::IsNotNull( childArray )) {
HXLINE( 765)				int _g = 0;
HXDLIN( 765)				while((_g < childArray->get_length())){
HXLINE( 765)					 ::Dynamic c = childArray->__get(_g);
HXDLIN( 765)					_g = (_g + 1);
HXLINE( 766)					r->push(c);
            				}
            			}
            		}
HXLINE( 771)		{
HXLINE( 771)			int _g = 0;
HXDLIN( 771)			::Array< ::Dynamic> _g1;
HXDLIN( 771)			if (::hx::IsNull( this->_children )) {
HXLINE( 771)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 771)				_g1 = this->_children;
            			}
HXDLIN( 771)			while((_g < _g1->length)){
HXLINE( 771)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 771)				_g = (_g + 1);
HXLINE( 772)				bool match = true;
HXLINE( 773)				bool _hx_tmp;
HXDLIN( 773)				if (::hx::IsNotNull( styleName )) {
HXLINE( 773)					_hx_tmp = ((child->classes->indexOf(styleName,null()) != -1) == false);
            				}
            				else {
HXLINE( 773)					_hx_tmp = false;
            				}
HXDLIN( 773)				if (_hx_tmp) {
HXLINE( 774)					match = false;
            				}
HXLINE( 776)				bool _hx_tmp1;
HXDLIN( 776)				if (::hx::IsNotNull( type )) {
HXLINE( 776)					_hx_tmp1 = (::Std_obj::isOfType(child,type) == false);
            				}
            				else {
HXLINE( 776)					_hx_tmp1 = false;
            				}
HXDLIN( 776)				if (_hx_tmp1) {
HXLINE( 777)					match = false;
            				}
HXLINE( 780)				if ((match == true)) {
HXLINE( 781)					r->push(child);
            				}
            				else {
HXLINE( 783)					::cpp::VirtualArray childArray = child->findComponents(styleName,type,maxDepth);
HXLINE( 784)					{
HXLINE( 784)						int _g = 0;
HXDLIN( 784)						while((_g < childArray->get_length())){
HXLINE( 784)							 ::Dynamic c = childArray->__get(_g);
HXDLIN( 784)							_g = (_g + 1);
HXLINE( 785)							r->push(c);
            						}
            					}
            				}
            			}
            		}
HXLINE( 790)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,findComponents,return )

 ::Dynamic Component_obj::findAncestor(::String criteria,::hx::Class type,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_807_findAncestor)
HXLINE( 808)		 ::haxe::ui::core::Component match = null();
HXLINE( 809)		 ::haxe::ui::core::Component p = this->parentComponent;
HXLINE( 810)		while(::hx::IsNotNull( p )){
HXLINE( 811)			if (p->matchesSearch(criteria,type,searchType)) {
HXLINE( 812)				match = p;
HXLINE( 813)				goto _hx_goto_55;
            			}
            			else {
HXLINE( 815)				p = p->parentComponent;
            			}
            		}
            		_hx_goto_55:;
HXLINE( 818)		return match;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,findAncestor,return )

::Array< ::Dynamic> Component_obj::findComponentsUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_821_findComponentsUnderPoint)
HXLINE( 822)		::Array< ::Dynamic> c = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 823)		if (this->hitTest(screenX,screenY,false)) {
HXLINE( 824)			int _g = 0;
HXDLIN( 824)			::Array< ::Dynamic> _g1;
HXDLIN( 824)			if (::hx::IsNull( this->_children )) {
HXLINE( 824)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 824)				_g1 = this->_children;
            			}
HXDLIN( 824)			while((_g < _g1->length)){
HXLINE( 824)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 824)				_g = (_g + 1);
HXLINE( 825)				if (child->hitTest(screenX,screenY,false)) {
HXLINE( 826)					bool match = true;
HXLINE( 827)					bool _hx_tmp;
HXDLIN( 827)					if (::hx::IsNotNull( type )) {
HXLINE( 827)						_hx_tmp = (::Std_obj::isOfType(child,type) == false);
            					}
            					else {
HXLINE( 827)						_hx_tmp = false;
            					}
HXDLIN( 827)					if (_hx_tmp) {
HXLINE( 828)						match = false;
            					}
HXLINE( 830)					if ((match == true)) {
HXLINE( 831)						c->push(child);
            					}
HXLINE( 833)					c = c->concat(child->findComponentsUnderPoint(screenX,screenY,type));
            				}
            			}
            		}
HXLINE( 837)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,findComponentsUnderPoint,return )

bool Component_obj::hasComponentUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_840_hasComponentUnderPoint)
HXLINE( 841)		bool b = false;
HXLINE( 842)		if (this->hitTest(screenX,screenY,false)) {
HXLINE( 843)			if (::hx::IsNull( type )) {
HXLINE( 844)				return true;
            			}
HXLINE( 846)			{
HXLINE( 846)				int _g = 0;
HXDLIN( 846)				::Array< ::Dynamic> _g1;
HXDLIN( 846)				if (::hx::IsNull( this->_children )) {
HXLINE( 846)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 846)					_g1 = this->_children;
            				}
HXDLIN( 846)				while((_g < _g1->length)){
HXLINE( 846)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 846)					_g = (_g + 1);
HXLINE( 847)					if (child->hitTest(screenX,screenY,false)) {
HXLINE( 848)						bool match = true;
HXLINE( 849)						bool _hx_tmp;
HXDLIN( 849)						if (::hx::IsNotNull( type )) {
HXLINE( 849)							_hx_tmp = (::Std_obj::isOfType(child,type) == false);
            						}
            						else {
HXLINE( 849)							_hx_tmp = false;
            						}
HXDLIN( 849)						if (_hx_tmp) {
HXLINE( 850)							match = false;
            						}
HXLINE( 852)						if ((match == false)) {
HXLINE( 853)							match = child->hasComponentUnderPoint(screenX,screenY,type);
            						}
HXLINE( 855)						if ((match == true)) {
HXLINE( 856)							b = match;
HXLINE( 857)							goto _hx_goto_59;
            						}
            					}
            				}
            				_hx_goto_59:;
            			}
            		}
HXLINE( 862)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,hasComponentUnderPoint,return )

int Component_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_869_getComponentIndex)
HXLINE( 870)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 871)			int index = this->_compositeBuilder->getComponentIndex(child);
HXLINE( 872)			if ((index != (int)-2147483648)) {
HXLINE( 873)				return index;
            			}
            		}
HXLINE( 877)		int index = -1;
HXLINE( 878)		bool _hx_tmp;
HXDLIN( 878)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 878)			_hx_tmp = ::hx::IsNotNull( child );
            		}
            		else {
HXLINE( 878)			_hx_tmp = false;
            		}
HXDLIN( 878)		if (_hx_tmp) {
HXLINE( 879)			index = this->_children->indexOf(child,null());
            		}
HXLINE( 881)		return index;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,getComponentIndex,return )

 ::haxe::ui::core::Component Component_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_884_setComponentIndex)
HXLINE( 885)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 886)			 ::haxe::ui::core::Component v = this->_compositeBuilder->setComponentIndex(child,index);
HXLINE( 887)			if (::hx::IsNotNull( v )) {
HXLINE( 888)				return v;
            			}
            		}
HXLINE( 892)		bool _hx_tmp;
HXDLIN( 892)		bool _hx_tmp1;
HXDLIN( 892)		if ((index >= 0)) {
HXLINE( 892)			_hx_tmp1 = (index <= this->_children->length);
            		}
            		else {
HXLINE( 892)			_hx_tmp1 = false;
            		}
HXDLIN( 892)		if (_hx_tmp1) {
HXLINE( 892)			_hx_tmp = ::hx::IsInstanceEq( child->parentComponent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 892)			_hx_tmp = false;
            		}
HXDLIN( 892)		if (_hx_tmp) {
HXLINE( 893)			this->handleSetComponentIndex(child,index);
HXLINE( 894)			this->_children->remove(child);
HXLINE( 895)			this->_children->insert(index,child);
HXLINE( 896)			{
HXLINE( 896)				bool _hx_tmp;
HXDLIN( 896)				if (::hx::IsNotNull( this->_layout )) {
HXLINE( 896)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE( 896)					_hx_tmp = true;
            				}
HXDLIN( 896)				if (!(_hx_tmp)) {
HXLINE( 896)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
HXLINE( 898)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,setComponentIndex,return )

 ::haxe::ui::core::Component Component_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_905_getComponentAt)
HXLINE( 906)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 907)			 ::haxe::ui::core::Component v = this->_compositeBuilder->getComponentAt(index);
HXLINE( 908)			if (::hx::IsNotNull( v )) {
HXLINE( 909)				return v;
            			}
            		}
HXLINE( 912)		if (::hx::IsNull( this->_children )) {
HXLINE( 913)			return null();
            		}
HXLINE( 915)		return this->_children->__get(index).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,getComponentAt,return )

void Component_obj::hide(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_922_hide)
HXLINE( 923)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 924)			bool v = this->_compositeBuilder->hide();
HXLINE( 925)			if ((v == true)) {
HXLINE( 926)				return;
            			}
            		}
HXLINE( 930)		if ((this->_hidden == false)) {
HXLINE( 931)			this->_hidden = true;
HXLINE( 932)			this->handleVisibility(false);
HXLINE( 933)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 934)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 934)				bool _hx_tmp;
HXDLIN( 934)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 934)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE( 934)					_hx_tmp = true;
            				}
HXDLIN( 934)				if (!(_hx_tmp)) {
HXLINE( 934)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE( 937)			this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,hide,(void))

void Component_obj::hideInternal(::hx::Null< bool >  __o_dispatchChildren){
            		bool dispatchChildren = __o_dispatchChildren.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_941_hideInternal)
HXLINE( 942)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 943)			bool v = this->_compositeBuilder->hide();
HXLINE( 944)			if ((v == true)) {
HXLINE( 945)				return;
            			}
            		}
HXLINE( 949)		if ((this->_hidden == false)) {
HXLINE( 950)			this->_hidden = true;
HXLINE( 951)			this->handleVisibility(false);
HXLINE( 952)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 953)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 953)				bool _hx_tmp;
HXDLIN( 953)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 953)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE( 953)					_hx_tmp = true;
            				}
HXDLIN( 953)				if (!(_hx_tmp)) {
HXLINE( 953)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE( 956)			if ((dispatchChildren == true)) {
HXLINE( 957)				this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
            			}
            			else {
HXLINE( 959)				this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,hideInternal,(void))

void Component_obj::show(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_968_show)
HXLINE( 969)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 970)			bool v = this->_compositeBuilder->show();
HXLINE( 971)			if ((v == true)) {
HXLINE( 972)				return;
            			}
            		}
HXLINE( 976)		if ((this->_hidden == true)) {
HXLINE( 977)			this->_hidden = false;
HXLINE( 978)			this->handleVisibility(true);
HXLINE( 979)			{
HXLINE( 979)				bool _hx_tmp;
HXDLIN( 979)				if (::hx::IsNotNull( this->_layout )) {
HXLINE( 979)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE( 979)					_hx_tmp = true;
            				}
HXDLIN( 979)				if (!(_hx_tmp)) {
HXLINE( 979)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE( 980)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 981)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 981)				bool _hx_tmp;
HXDLIN( 981)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 981)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE( 981)					_hx_tmp = true;
            				}
HXDLIN( 981)				if (!(_hx_tmp)) {
HXLINE( 981)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE( 984)			this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("shown",d1,88,27,7c),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,show,(void))

void Component_obj::showInternal(::hx::Null< bool >  __o_dispatchChildren){
            		bool dispatchChildren = __o_dispatchChildren.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_988_showInternal)
HXLINE( 989)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 990)			bool v = this->_compositeBuilder->show();
HXLINE( 991)			if ((v == true)) {
HXLINE( 992)				return;
            			}
            		}
HXLINE( 996)		if ((this->_hidden == true)) {
HXLINE( 997)			this->_hidden = false;
HXLINE( 998)			this->handleVisibility(true);
HXLINE( 999)			{
HXLINE( 999)				bool _hx_tmp;
HXDLIN( 999)				if (::hx::IsNotNull( this->_layout )) {
HXLINE( 999)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE( 999)					_hx_tmp = true;
            				}
HXDLIN( 999)				if (!(_hx_tmp)) {
HXLINE( 999)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1000)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1001)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN(1001)				bool _hx_tmp;
HXDLIN(1001)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1001)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1001)					_hx_tmp = true;
            				}
HXDLIN(1001)				if (!(_hx_tmp)) {
HXLINE(1001)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1004)			if ((dispatchChildren == true)) {
HXLINE(1005)				this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("shown",d1,88,27,7c),null(),null()));
            			}
            			else {
HXLINE(1007)				this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("shown",d1,88,27,7c),null(),null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,showInternal,(void))

void Component_obj::fadeIn( ::Dynamic onEnd,::hx::Null< bool >  __o_show){
            		bool show = __o_show.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1012_fadeIn)
HXDLIN(1012)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1013)		bool _hx_tmp;
HXDLIN(1013)		if (::hx::IsNull( onEnd )) {
HXLINE(1013)			_hx_tmp = (show == true);
            		}
            		else {
HXLINE(1013)			_hx_tmp = true;
            		}
HXDLIN(1013)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::haxe::ui::core::Component,_gthis, ::Dynamic,onEnd, ::Dynamic,prevEnd) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::AnimationEvent e){
            				HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1024_fadeIn)
HXLINE(1025)				if (::hx::IsNotNull( onEnd )) {
HXLINE(1026)					onEnd();
            				}
HXLINE(1028)				_gthis->removeClass(HX_("fade-in",56,61,22,31),null(),null());
HXLINE(1029)				_gthis->set_onAnimationEnd(prevEnd);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(1014)			::Array< ::Dynamic> prevStart = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->onAnimationStart);
HXLINE(1015)			 ::Dynamic prevEnd = this->onAnimationEnd;
HXLINE(1016)			if ((show == true)) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis,::Array< ::Dynamic>,prevStart) HXARGC(1)
            				void _hx_run( ::haxe::ui::events::AnimationEvent e){
            					HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1018_fadeIn)
HXLINE(1019)					_gthis->show();
HXLINE(1020)					_gthis->set_onAnimationStart(prevStart->__get(0));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(1017)				prevStart[0] = this->onAnimationStart;
HXLINE(1018)				this->set_onAnimationStart( ::Dynamic(new _hx_Closure_0(_gthis,prevStart)));
            			}
HXLINE(1024)			this->set_onAnimationEnd( ::Dynamic(new _hx_Closure_1(_gthis,onEnd,prevEnd)));
            		}
HXLINE(1032)		this->swapClass(HX_("fade-in",56,61,22,31),HX_("fade-out",fd,5d,f7,cc),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,fadeIn,(void))

void Component_obj::fadeOut( ::Dynamic onEnd,::hx::Null< bool >  __o_hide){
            		bool hide = __o_hide.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1035_fadeOut)
HXDLIN(1035)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1036)		bool _hx_tmp;
HXDLIN(1036)		if (::hx::IsNull( onEnd )) {
HXLINE(1036)			_hx_tmp = (hide == true);
            		}
            		else {
HXLINE(1036)			_hx_tmp = true;
            		}
HXDLIN(1036)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis, ::Dynamic,onEnd, ::Dynamic,prevEnd,bool,hide) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::AnimationEvent e){
            				HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1038_fadeOut)
HXLINE(1039)				if ((hide == true)) {
HXLINE(1040)					_gthis->hide();
            				}
HXLINE(1042)				if (::hx::IsNotNull( onEnd )) {
HXLINE(1043)					onEnd();
            				}
HXLINE(1045)				_gthis->set_onAnimationEnd(prevEnd);
HXLINE(1046)				_gthis->removeClass(HX_("fade-out",fd,5d,f7,cc),null(),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(1037)			 ::Dynamic prevEnd = this->onAnimationEnd;
HXLINE(1038)			this->set_onAnimationEnd( ::Dynamic(new _hx_Closure_0(_gthis,onEnd,prevEnd,hide)));
            		}
HXLINE(1049)		this->swapClass(HX_("fade-out",fd,5d,f7,cc),HX_("fade-in",56,61,22,31),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,fadeOut,(void))

bool Component_obj::get_hidden(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1058_get_hidden)
HXLINE(1059)		if ((this->_hidden == true)) {
HXLINE(1060)			return true;
            		}
HXLINE(1062)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1063)			return this->parentComponent->get_hidden();
            		}
HXLINE(1065)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_hidden,return )

bool Component_obj::set_hidden(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1067_set_hidden)
HXLINE(1068)		if ((value == this->_hidden)) {
HXLINE(1069)			return value;
            		}
HXLINE(1071)		if ((value == true)) {
HXLINE(1072)			this->hide();
            		}
            		else {
HXLINE(1074)			this->show();
            		}
HXLINE(1076)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("hidden",6a,ff,95,4c)));
HXLINE(1077)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_hidden,return )

 ::haxe::ui::styles::Style Component_obj::get_customStyle(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1089_get_customStyle)
HXLINE(1090)		if (::hx::IsNull( this->_customStyle )) {
HXLINE(1091)			this->_customStyle =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1093)		return this->_customStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_customStyle,return )

 ::haxe::ui::styles::Style Component_obj::set_customStyle( ::haxe::ui::styles::Style value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1095_set_customStyle)
HXLINE(1096)		if (::hx::IsInstanceNotEq( value,this->_customStyle )) {
HXLINE(1097)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1097)			{
            			}
            		}
HXLINE(1099)		this->_customStyle = value;
HXLINE(1100)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_customStyle,return )

void Component_obj::addClass(::String name,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1110_addClass)
HXLINE(1111)		if ((this->classes->indexOf(name,null()) == -1)) {
HXLINE(1112)			this->classes->push(name);
HXLINE(1113)			if ((invalidate == true)) {
HXLINE(1114)				this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1114)				{
            				}
            			}
            		}
HXLINE(1118)		bool _hx_tmp;
HXDLIN(1118)		if ((recursive != true)) {
HXLINE(1118)			if ((this->cascadeActive == true)) {
HXLINE(1118)				_hx_tmp = (name == HX_(":active",80,29,23,82));
            			}
            			else {
HXLINE(1118)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1118)			_hx_tmp = true;
            		}
HXDLIN(1118)		if (_hx_tmp) {
HXLINE(1119)			int _g = 0;
HXDLIN(1119)			::Array< ::Dynamic> _g1;
HXDLIN(1119)			if (::hx::IsNull( this->_children )) {
HXLINE(1119)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1119)				_g1 = this->_children;
            			}
HXDLIN(1119)			while((_g < _g1->length)){
HXLINE(1119)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1119)				_g = (_g + 1);
HXLINE(1120)				child->addClass(name,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,addClass,(void))

void Component_obj::addClasses(::Array< ::String > names,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1129_addClasses)
HXLINE(1130)		bool needsInvalidate = false;
HXLINE(1131)		{
HXLINE(1131)			int _g = 0;
HXDLIN(1131)			while((_g < names->length)){
HXLINE(1131)				::String name = names->__get(_g);
HXDLIN(1131)				_g = (_g + 1);
HXLINE(1132)				if ((this->classes->indexOf(name,null()) == -1)) {
HXLINE(1133)					this->classes->push(name);
HXLINE(1134)					if ((invalidate == true)) {
HXLINE(1135)						needsInvalidate = true;
            					}
            				}
            			}
            		}
HXLINE(1140)		if ((needsInvalidate == true)) {
HXLINE(1141)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1141)			{
            			}
            		}
HXLINE(1144)		if ((recursive == true)) {
HXLINE(1145)			int _g = 0;
HXDLIN(1145)			::Array< ::Dynamic> _g1;
HXDLIN(1145)			if (::hx::IsNull( this->_children )) {
HXLINE(1145)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1145)				_g1 = this->_children;
            			}
HXDLIN(1145)			while((_g < _g1->length)){
HXLINE(1145)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1145)				_g = (_g + 1);
HXLINE(1146)				child->addClasses(names,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,addClasses,(void))

void Component_obj::removeClass(::String name,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1155_removeClass)
HXLINE(1156)		if ((this->classes->indexOf(name,null()) != -1)) {
HXLINE(1157)			this->classes->remove(name);
HXLINE(1158)			if ((invalidate == true)) {
HXLINE(1159)				this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1159)				{
            				}
            			}
            		}
HXLINE(1163)		bool _hx_tmp;
HXDLIN(1163)		if ((recursive != true)) {
HXLINE(1163)			if ((this->cascadeActive == true)) {
HXLINE(1163)				_hx_tmp = (name == HX_(":active",80,29,23,82));
            			}
            			else {
HXLINE(1163)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1163)			_hx_tmp = true;
            		}
HXDLIN(1163)		if (_hx_tmp) {
HXLINE(1164)			int _g = 0;
HXDLIN(1164)			::Array< ::Dynamic> _g1;
HXDLIN(1164)			if (::hx::IsNull( this->_children )) {
HXLINE(1164)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1164)				_g1 = this->_children;
            			}
HXDLIN(1164)			while((_g < _g1->length)){
HXLINE(1164)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1164)				_g = (_g + 1);
HXLINE(1165)				child->removeClass(name,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,removeClass,(void))

void Component_obj::removeClasses(::Array< ::String > names,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1174_removeClasses)
HXLINE(1175)		bool needsInvalidate = false;
HXLINE(1176)		{
HXLINE(1176)			int _g = 0;
HXDLIN(1176)			while((_g < names->length)){
HXLINE(1176)				::String name = names->__get(_g);
HXDLIN(1176)				_g = (_g + 1);
HXLINE(1177)				if ((this->classes->indexOf(name,null()) != -1)) {
HXLINE(1178)					this->classes->remove(name);
HXLINE(1179)					if ((invalidate == true)) {
HXLINE(1180)						needsInvalidate = true;
            					}
            				}
            			}
            		}
HXLINE(1185)		if ((needsInvalidate == true)) {
HXLINE(1186)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1186)			{
            			}
            		}
HXLINE(1189)		if ((recursive == true)) {
HXLINE(1190)			int _g = 0;
HXDLIN(1190)			::Array< ::Dynamic> _g1;
HXDLIN(1190)			if (::hx::IsNull( this->_children )) {
HXLINE(1190)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1190)				_g1 = this->_children;
            			}
HXDLIN(1190)			while((_g < _g1->length)){
HXLINE(1190)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1190)				_g = (_g + 1);
HXLINE(1191)				child->removeClasses(names,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,removeClasses,(void))

bool Component_obj::hasClass(::String name){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1201_hasClass)
HXDLIN(1201)		return (this->classes->indexOf(name,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,hasClass,return )

void Component_obj::swapClass(::String classToAdd,::String classToRemove,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1208_swapClass)
HXLINE(1209)		bool needsInvalidate = false;
HXLINE(1210)		bool _hx_tmp;
HXDLIN(1210)		if (::hx::IsNotNull( classToAdd )) {
HXLINE(1210)			_hx_tmp = (this->classes->indexOf(classToAdd,null()) == -1);
            		}
            		else {
HXLINE(1210)			_hx_tmp = false;
            		}
HXDLIN(1210)		if (_hx_tmp) {
HXLINE(1211)			this->classes->push(classToAdd);
HXLINE(1212)			needsInvalidate = true;
            		}
HXLINE(1215)		bool _hx_tmp1;
HXDLIN(1215)		if (::hx::IsNotNull( classToRemove )) {
HXLINE(1215)			_hx_tmp1 = (this->classes->indexOf(classToRemove,null()) != -1);
            		}
            		else {
HXLINE(1215)			_hx_tmp1 = false;
            		}
HXDLIN(1215)		if (_hx_tmp1) {
HXLINE(1216)			this->classes->remove(classToRemove);
HXLINE(1217)			needsInvalidate = true;
            		}
HXLINE(1220)		bool _hx_tmp2;
HXDLIN(1220)		if ((invalidate == true)) {
HXLINE(1220)			_hx_tmp2 = (needsInvalidate == true);
            		}
            		else {
HXLINE(1220)			_hx_tmp2 = false;
            		}
HXDLIN(1220)		if (_hx_tmp2) {
HXLINE(1221)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1221)			{
            			}
            		}
HXLINE(1224)		if ((recursive == true)) {
HXLINE(1225)			int _g = 0;
HXDLIN(1225)			::Array< ::Dynamic> _g1;
HXDLIN(1225)			if (::hx::IsNull( this->_children )) {
HXLINE(1225)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1225)				_g1 = this->_children;
            			}
HXDLIN(1225)			while((_g < _g1->length)){
HXLINE(1225)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1225)				_g = (_g + 1);
HXLINE(1226)				child->swapClass(classToAdd,classToRemove,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Component_obj,swapClass,(void))

::String Component_obj::get_styleNames(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1237_get_styleNames)
HXDLIN(1237)		return this->classes->join(HX_(" ",20,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_styleNames,return )

::String Component_obj::set_styleNames(::String value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1239_set_styleNames)
HXLINE(1240)		if (::hx::IsNull( value )) {
HXLINE(1241)			return value;
            		}
HXLINE(1244)		{
HXLINE(1244)			int _g = 0;
HXDLIN(1244)			::Array< ::String > _g1 = value.split(HX_(" ",20,00,00,00));
HXDLIN(1244)			while((_g < _g1->length)){
HXLINE(1244)				::String x = _g1->__get(_g);
HXDLIN(1244)				_g = (_g + 1);
HXLINE(1245)				this->addClass(x,null(),null());
            			}
            		}
HXLINE(1247)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_styleNames,return )

::String Component_obj::get_styleString(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1257_get_styleString)
HXDLIN(1257)		return this->_styleString;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_styleString,return )

::String Component_obj::set_styleString(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1259_set_styleString)
HXLINE(1260)		bool _hx_tmp;
HXDLIN(1260)		if (::hx::IsNotNull( value )) {
HXLINE(1260)			_hx_tmp = (value == this->_styleString);
            		}
            		else {
HXLINE(1260)			_hx_tmp = true;
            		}
HXDLIN(1260)		if (_hx_tmp) {
HXLINE(1261)			return value;
            		}
HXLINE(1263)		::String cssString = ::StringTools_obj::trim(value);
HXLINE(1264)		if ((cssString.length == 0)) {
HXLINE(1265)			return value;
            		}
HXLINE(1267)		if ((::StringTools_obj::endsWith(cssString,HX_(";",3b,00,00,00)) == false)) {
HXLINE(1268)			cssString = (cssString + HX_(";",3b,00,00,00));
            		}
HXLINE(1270)		cssString = ((HX_("_ { ",66,f8,e3,3e) + cssString) + HX_("}",7d,00,00,00));
HXLINE(1271)		 ::haxe::ui::styles::StyleSheet s =  ::haxe::ui::styles::Parser_obj::__alloc( HX_CTX )->parse(cssString);
HXLINE(1272)		 ::haxe::ui::styles::Style _hx_tmp1 = this->get_customStyle();
HXDLIN(1272)		_hx_tmp1->mergeDirectives(s->get_rules()->__get(0).StaticCast<  ::haxe::ui::styles::elements::RuleElement >()->directives);
HXLINE(1274)		this->_styleString = value;
HXLINE(1275)		{
HXLINE(1275)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1275)			{
            			}
            		}
HXLINE(1276)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_styleString,return )

 ::haxe::ui::styles::StyleSheet Component_obj::get_styleSheet(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1285_get_styleSheet)
HXLINE(1286)		if ((this->_useCachedStyleSheetRef == true)) {
HXLINE(1287)			return this->_cachedStyleSheetRef;
            		}
HXLINE(1290)		 ::haxe::ui::styles::StyleSheet s = null();
HXLINE(1291)		 ::haxe::ui::core::Component ref = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1292)		while(::hx::IsNotNull( ref )){
HXLINE(1293)			if (::hx::IsNotNull( ref->_styleSheet )) {
HXLINE(1294)				s = ref->_styleSheet;
HXLINE(1295)				goto _hx_goto_95;
            			}
HXLINE(1297)			ref = ref->parentComponent;
            		}
            		_hx_goto_95:;
HXLINE(1300)		this->_useCachedStyleSheetRef = true;
HXLINE(1301)		this->_cachedStyleSheetRef = s;
HXLINE(1303)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_styleSheet,return )

 ::haxe::ui::styles::StyleSheet Component_obj::set_styleSheet( ::haxe::ui::styles::StyleSheet value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1305_set_styleSheet)
HXLINE(1306)		this->_styleSheet = value;
HXLINE(1307)		this->resetCachedStyleSheetRef();
HXLINE(1308)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_styleSheet,return )

void Component_obj::resetCachedStyleSheetRef(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1310_resetCachedStyleSheetRef)
HXLINE(1311)		this->_cachedStyleSheetRef = null();
HXLINE(1312)		this->_useCachedStyleSheetRef = false;
HXLINE(1313)		{
HXLINE(1313)			int _g = 0;
HXDLIN(1313)			::Array< ::Dynamic> _g1;
HXDLIN(1313)			if (::hx::IsNull( this->_children )) {
HXLINE(1313)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1313)				_g1 = this->_children;
            			}
HXDLIN(1313)			while((_g < _g1->length)){
HXLINE(1313)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1313)				_g = (_g + 1);
HXLINE(1314)				c->resetCachedStyleSheetRef();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,resetCachedStyleSheetRef,(void))

bool Component_obj::get_includeInLayout(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1329_get_includeInLayout)
HXLINE(1330)		if ((this->_hidden == true)) {
HXLINE(1331)			return false;
            		}
HXLINE(1333)		return this->_includeInLayout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_includeInLayout,return )

bool Component_obj::set_includeInLayout(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1335_set_includeInLayout)
HXLINE(1336)		this->_includeInLayout = value;
HXLINE(1337)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_includeInLayout,return )

 ::haxe::ui::layouts::Layout Component_obj::get_layout(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1346_get_layout)
HXDLIN(1346)		return this->_layout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_layout,return )

 ::haxe::ui::layouts::Layout Component_obj::set_layout( ::haxe::ui::layouts::Layout value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1348_set_layout)
HXLINE(1349)		if (::hx::IsNull( value )) {
HXLINE(1351)			return value;
            		}
HXLINE(1354)		bool _hx_tmp;
HXDLIN(1354)		if (::hx::IsNotNull( this->_layout )) {
HXLINE(1354)			::String _hx_tmp1 = ::Type_obj::getClassName(::Type_obj::getClass(value));
HXDLIN(1354)			_hx_tmp = (_hx_tmp1 == ::Type_obj::getClassName(::Type_obj::getClass(this->_layout)));
            		}
            		else {
HXLINE(1354)			_hx_tmp = false;
            		}
HXDLIN(1354)		if (_hx_tmp) {
HXLINE(1355)			return value;
            		}
HXLINE(1358)		this->_layout = value;
HXLINE(1359)		this->_layout->set_component(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1360)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_layout,return )

void Component_obj::lockLayout(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1363_lockLayout)
HXLINE(1364)		if ((this->_layoutLocked == true)) {
HXLINE(1365)			return;
            		}
HXLINE(1368)		this->_layoutLocked = true;
HXLINE(1369)		if ((recursive == true)) {
HXLINE(1370)			int _g = 0;
HXDLIN(1370)			::Array< ::Dynamic> _g1;
HXDLIN(1370)			if (::hx::IsNull( this->_children )) {
HXLINE(1370)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1370)				_g1 = this->_children;
            			}
HXDLIN(1370)			while((_g < _g1->length)){
HXLINE(1370)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1370)				_g = (_g + 1);
HXLINE(1371)				child->lockLayout(recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,lockLayout,(void))

void Component_obj::unlockLayout(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1376_unlockLayout)
HXLINE(1377)		if ((this->_layoutLocked == false)) {
HXLINE(1378)			return;
            		}
HXLINE(1381)		if ((recursive == true)) {
HXLINE(1382)			int _g = 0;
HXDLIN(1382)			::Array< ::Dynamic> _g1;
HXDLIN(1382)			if (::hx::IsNull( this->_children )) {
HXLINE(1382)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1382)				_g1 = this->_children;
            			}
HXDLIN(1382)			while((_g < _g1->length)){
HXLINE(1382)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1382)				_g = (_g + 1);
HXLINE(1383)				child->unlockLayout(recursive);
            			}
            		}
HXLINE(1387)		this->_layoutLocked = false;
HXLINE(1388)		{
HXLINE(1388)			bool _hx_tmp;
HXDLIN(1388)			if (::hx::IsNotNull( this->_layout )) {
HXLINE(1388)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE(1388)				_hx_tmp = true;
            			}
HXDLIN(1388)			if (!(_hx_tmp)) {
HXLINE(1388)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,unlockLayout,(void))

void Component_obj::ready(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1400_ready)
HXDLIN(1400)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1401)		this->set_depth(::haxe::ui::util::ComponentUtil_obj::getDepth(::hx::ObjectPtr<OBJ_>(this)));
HXLINE(1403)		if (this->isComponentInvalid(null())) {
HXLINE(1404)			this->_invalidateCount = 0;
HXLINE(1405)			::haxe::ui::validation::ValidationManager_obj::get_instance()->add(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1408)		if ((this->_ready == false)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1422_ready)
HXLINE(1423)				_gthis->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE(1424)				{
HXLINE(1424)					_gthis->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1424)					{
            					}
            				}
HXLINE(1426)				if (::hx::IsNotNull( _gthis->_compositeBuilder )) {
HXLINE(1427)					_gthis->_compositeBuilder->onReady();
            				}
HXLINE(1430)				_gthis->onReady();
HXLINE(1432)				 ::haxe::ui::core::Component _gthis1 = _gthis;
HXDLIN(1432)				_gthis1->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("ready",63,a0,ba,e6),null(),null()));
HXLINE(1433)				if ((_gthis->_hidden == false)) {
HXLINE(1434)					 ::haxe::ui::core::Component _gthis1 = _gthis;
HXDLIN(1434)					_gthis1->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("shown",d1,88,27,7c),null(),null()));
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(1409)			this->_ready = true;
HXLINE(1410)			this->handleReady();
HXLINE(1412)			::Array< ::Dynamic> _hx_tmp;
HXDLIN(1412)			if (::hx::IsNull( this->_children )) {
HXLINE(1412)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1412)				_hx_tmp = this->_children;
            			}
HXDLIN(1412)			if (::hx::IsNotNull( _hx_tmp )) {
HXLINE(1413)				int _g = 0;
HXDLIN(1413)				::Array< ::Dynamic> _g1;
HXDLIN(1413)				if (::hx::IsNull( this->_children )) {
HXLINE(1413)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(1413)					_g1 = this->_children;
            				}
HXDLIN(1413)				while((_g < _g1->length)){
HXLINE(1413)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1413)					_g = (_g + 1);
HXLINE(1414)					child->ready();
            				}
            			}
HXLINE(1418)			this->invalidateComponent(null(),null());
HXLINE(1420)			this->behaviours->ready();
HXLINE(1421)			this->behaviours->update();
HXLINE(1422)			::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,ready,(void))

void Component_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1440_onReady)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onReady,(void))

void Component_obj::onInitialize(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1443_onInitialize)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onInitialize,(void))

void Component_obj::onResized(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1447_onResized)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onResized,(void))

void Component_obj::onMoved(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1451_onMoved)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onMoved,(void))

bool Component_obj::get_scriptAccess(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1495_get_scriptAccess)
HXDLIN(1495)		return this->_scriptAccess;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_scriptAccess,return )

bool Component_obj::set_scriptAccess(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1497_set_scriptAccess)
HXLINE(1498)		if ((value == this->_scriptAccess)) {
HXLINE(1499)			return value;
            		}
HXLINE(1502)		this->_scriptAccess = value;
HXLINE(1503)		{
HXLINE(1503)			int _g = 0;
HXDLIN(1503)			::Array< ::Dynamic> _g1;
HXDLIN(1503)			if (::hx::IsNull( this->_children )) {
HXLINE(1503)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1503)				_g1 = this->_children;
            			}
HXDLIN(1503)			while((_g < _g1->length)){
HXLINE(1503)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1503)				_g = (_g + 1);
HXLINE(1504)				child->set_scriptAccess(value);
            			}
            		}
HXLINE(1507)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_scriptAccess,return )

::Array< ::Dynamic> Component_obj::get_namedComponents(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1515_get_namedComponents)
HXLINE(1516)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1517)		::haxe::ui::core::Component_obj::addNamedComponentsFrom(::hx::ObjectPtr<OBJ_>(this),list);
HXLINE(1518)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_namedComponents,return )

void Component_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1577_onThemeChanged)
HXLINE(1578)		this->_initialSizeApplied = false;
HXLINE(1579)		if (::hx::IsNotNull( this->_style )) {
HXLINE(1580)			if (::hx::IsNotNull( this->_style->initialWidth )) {
HXLINE(1581)				this->set_width(0);
            			}
HXLINE(1583)			if (::hx::IsNotNull( this->_style->initialPercentWidth )) {
HXLINE(1584)				this->set_percentWidth(null());
            			}
HXLINE(1586)			if (::hx::IsNotNull( this->_style->initialHeight )) {
HXLINE(1587)				this->set_height(0);
            			}
HXLINE(1589)			if (::hx::IsNotNull( this->_style->initialPercentHeight )) {
HXLINE(1590)				this->set_percentHeight(null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onThemeChanged,(void))

void Component_obj::initializeComponent(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1595_initializeComponent)
HXLINE(1596)		if ((this->_isInitialized == true)) {
HXLINE(1597)			return;
            		}
HXLINE(1600)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1601)			this->_compositeBuilder->onInitialize();
            		}
HXLINE(1604)		this->onInitialize();
HXLINE(1606)		if (::hx::IsNull( this->_layout )) {
HXLINE(1607)			this->set_layout(this->createLayout());
            		}
HXLINE(1610)		this->_isInitialized = true;
HXLINE(1612)		if (this->hasEvent(HX_("initialize",50,31,bb,ec),null())) {
HXLINE(1613)			this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("initialize",50,31,bb,ec),null(),null()));
            		}
            	}


void Component_obj::validateInitialSize(bool isInitialized){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1619_validateInitialSize)
HXDLIN(1619)		bool _hx_tmp;
HXDLIN(1619)		bool _hx_tmp1;
HXDLIN(1619)		if ((isInitialized == false)) {
HXDLIN(1619)			_hx_tmp1 = ::hx::IsNotNull( this->_style );
            		}
            		else {
HXDLIN(1619)			_hx_tmp1 = false;
            		}
HXDLIN(1619)		if (_hx_tmp1) {
HXDLIN(1619)			_hx_tmp = (this->_initialSizeApplied == false);
            		}
            		else {
HXDLIN(1619)			_hx_tmp = false;
            		}
HXDLIN(1619)		if (_hx_tmp) {
HXLINE(1620)			bool _hx_tmp;
HXDLIN(1620)			bool _hx_tmp1;
HXDLIN(1620)			if (::hx::IsNull( this->_style->initialWidth )) {
HXLINE(1620)				_hx_tmp1 = ::hx::IsNotNull( this->_style->initialPercentWidth );
            			}
            			else {
HXLINE(1620)				_hx_tmp1 = true;
            			}
HXDLIN(1620)			if (_hx_tmp1) {
HXLINE(1620)				if (::hx::IsLessEq( this->get_width(),0 )) {
HXLINE(1620)					_hx_tmp = ::hx::IsNull( this->get_percentWidth() );
            				}
            				else {
HXLINE(1620)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(1620)				_hx_tmp = false;
            			}
HXDLIN(1620)			if (_hx_tmp) {
HXLINE(1621)				if (::hx::IsNotNull( this->_style->initialWidth )) {
HXLINE(1622)					this->set_width(this->_style->initialWidth);
HXLINE(1623)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(1624)					if (::hx::IsNotNull( this->_style->initialPercentWidth )) {
HXLINE(1625)						this->set_percentWidth(this->_style->initialPercentWidth);
HXLINE(1626)						this->_initialSizeApplied = true;
            					}
            				}
            			}
HXLINE(1630)			bool _hx_tmp2;
HXDLIN(1630)			bool _hx_tmp3;
HXDLIN(1630)			if (::hx::IsNull( this->_style->initialHeight )) {
HXLINE(1630)				_hx_tmp3 = ::hx::IsNotNull( this->_style->initialPercentHeight );
            			}
            			else {
HXLINE(1630)				_hx_tmp3 = true;
            			}
HXDLIN(1630)			if (_hx_tmp3) {
HXLINE(1630)				if (::hx::IsLessEq( this->get_height(),0 )) {
HXLINE(1630)					_hx_tmp2 = ::hx::IsNull( this->get_percentHeight() );
            				}
            				else {
HXLINE(1630)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(1630)				_hx_tmp2 = false;
            			}
HXDLIN(1630)			if (_hx_tmp2) {
HXLINE(1631)				if (::hx::IsNotNull( this->_style->initialHeight )) {
HXLINE(1632)					this->set_height(this->_style->initialHeight);
HXLINE(1633)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(1634)					if (::hx::IsNotNull( this->_style->initialPercentHeight )) {
HXLINE(1635)						this->set_percentHeight(this->_style->initialPercentHeight);
HXLINE(1636)						this->_initialSizeApplied = true;
            					}
            				}
            			}
            		}
            	}


void Component_obj::validateComponentData(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1642_validateComponentData)
HXLINE(1643)		this->behaviours->validateData();
HXLINE(1645)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1646)			this->_compositeBuilder->validateComponentData();
            		}
            	}


bool Component_obj::validateComponentLayout(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1653_validateComponentLayout)
HXLINE(1654)		this->get_layout()->refresh();
HXLINE(1657)		while(this->validateComponentAutoSize()){
HXLINE(1658)			this->get_layout()->refresh();
            		}
HXLINE(1661)		bool sizeChanged = false;
HXLINE(1662)		bool _hx_tmp;
HXDLIN(1662)		if (::hx::IsEq( this->_componentWidth,this->_actualWidth )) {
HXLINE(1662)			_hx_tmp = ::hx::IsNotEq( this->_componentHeight,this->_actualHeight );
            		}
            		else {
HXLINE(1662)			_hx_tmp = true;
            		}
HXDLIN(1662)		if (_hx_tmp) {
HXLINE(1663)			this->_actualWidth = this->_componentWidth;
HXLINE(1664)			this->_actualHeight = this->_componentHeight;
HXLINE(1666)			this->enforceSizeConstraints();
HXLINE(1668)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1669)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN(1669)				bool _hx_tmp;
HXDLIN(1669)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1669)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1669)					_hx_tmp = true;
            				}
HXDLIN(1669)				if (!(_hx_tmp)) {
HXLINE(1669)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1672)			this->onResized();
HXLINE(1673)			this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("resize",f4,59,7b,08),null(),null()));
HXLINE(1675)			sizeChanged = true;
            		}
HXLINE(1678)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1679)			if (this->_compositeBuilder->validateComponentLayout()) {
HXLINE(1679)				sizeChanged = true;
            			}
            		}
HXLINE(1682)		return sizeChanged;
            	}


void Component_obj::enforceSizeConstraints(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1686_enforceSizeConstraints)
HXDLIN(1686)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE(1688)			bool _hx_tmp;
HXDLIN(1688)			if (::hx::IsNotNull( this->get_style()->minWidth )) {
HXLINE(1688)				 ::Dynamic _hx_tmp1 = this->_componentWidth;
HXDLIN(1688)				_hx_tmp = ::hx::IsLess( _hx_tmp1,this->get_style()->minWidth );
            			}
            			else {
HXLINE(1688)				_hx_tmp = false;
            			}
HXDLIN(1688)			if (_hx_tmp) {
HXLINE(1689)				this->_componentWidth = (this->_actualWidth = (this->_width = this->get_style()->minWidth));
            			}
HXLINE(1693)			bool _hx_tmp1;
HXDLIN(1693)			bool _hx_tmp2;
HXDLIN(1693)			if (::hx::IsNotNull( this->get_style()->maxWidth )) {
HXLINE(1693)				_hx_tmp2 = ::hx::IsNull( this->get_style()->maxPercentWidth );
            			}
            			else {
HXLINE(1693)				_hx_tmp2 = false;
            			}
HXDLIN(1693)			if (_hx_tmp2) {
HXLINE(1693)				 ::Dynamic _hx_tmp = this->_componentWidth;
HXDLIN(1693)				_hx_tmp1 = ::hx::IsGreater( _hx_tmp,this->get_style()->maxWidth );
            			}
            			else {
HXLINE(1693)				_hx_tmp1 = false;
            			}
HXDLIN(1693)			if (_hx_tmp1) {
HXLINE(1694)				this->_componentWidth = (this->_actualWidth = (this->_width = this->get_style()->maxWidth));
            			}
            			else {
HXLINE(1695)				bool _hx_tmp;
HXDLIN(1695)				if (::hx::IsNull( this->get_style()->maxWidth )) {
HXLINE(1695)					_hx_tmp = ::hx::IsNotNull( this->get_style()->maxPercentWidth );
            				}
            				else {
HXLINE(1695)					_hx_tmp = false;
            				}
HXDLIN(1695)				if (_hx_tmp) {
HXLINE(1696)					 ::haxe::ui::core::Component p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1697)					Float max = ( (Float)(0) );
HXLINE(1698)					while(::hx::IsNotNull( p )){
HXLINE(1699)						bool _hx_tmp;
HXDLIN(1699)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1699)							_hx_tmp = ::hx::IsNull( p->get_style()->maxPercentWidth );
            						}
            						else {
HXLINE(1699)							_hx_tmp = false;
            						}
HXDLIN(1699)						if (_hx_tmp) {
HXLINE(1700)							max = (max + p->get_width());
HXLINE(1701)							goto _hx_goto_125;
            						}
HXLINE(1703)						bool _hx_tmp1;
HXDLIN(1703)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1703)							_hx_tmp1 = ::hx::IsInstanceNotEq( p,::hx::ObjectPtr<OBJ_>(this) );
            						}
            						else {
HXLINE(1703)							_hx_tmp1 = false;
            						}
HXDLIN(1703)						if (_hx_tmp1) {
HXLINE(1704)							 ::Dynamic max1 = p->get_style()->paddingLeft;
HXDLIN(1704)							max = (max - (max1 + p->get_style()->paddingRight));
            						}
HXLINE(1706)						p = p->parentComponent;
            					}
            					_hx_goto_125:;
HXLINE(1708)					max = ((max * ( (Float)(this->get_style()->maxPercentWidth) )) / ( (Float)(100) ));
HXLINE(1709)					bool _hx_tmp;
HXDLIN(1709)					if ((max > 0)) {
HXLINE(1709)						_hx_tmp = ::hx::IsGreater( this->_componentWidth,max );
            					}
            					else {
HXLINE(1709)						_hx_tmp = false;
            					}
HXDLIN(1709)					if (_hx_tmp) {
HXLINE(1710)						this->_componentWidth = (this->_actualWidth = (this->_width = max));
            					}
            				}
            			}
HXLINE(1715)			bool _hx_tmp3;
HXDLIN(1715)			if (::hx::IsNotNull( this->get_style()->minHeight )) {
HXLINE(1715)				 ::Dynamic _hx_tmp = this->_componentHeight;
HXDLIN(1715)				_hx_tmp3 = ::hx::IsLess( _hx_tmp,this->get_style()->minHeight );
            			}
            			else {
HXLINE(1715)				_hx_tmp3 = false;
            			}
HXDLIN(1715)			if (_hx_tmp3) {
HXLINE(1716)				this->_componentHeight = (this->_actualHeight = (this->_height = this->get_style()->minHeight));
            			}
HXLINE(1720)			bool _hx_tmp4;
HXDLIN(1720)			bool _hx_tmp5;
HXDLIN(1720)			if (::hx::IsNotNull( this->get_style()->maxHeight )) {
HXLINE(1720)				_hx_tmp5 = ::hx::IsNull( this->get_style()->maxPercentHeight );
            			}
            			else {
HXLINE(1720)				_hx_tmp5 = false;
            			}
HXDLIN(1720)			if (_hx_tmp5) {
HXLINE(1720)				 ::Dynamic _hx_tmp = this->_componentHeight;
HXDLIN(1720)				_hx_tmp4 = ::hx::IsGreater( _hx_tmp,this->get_style()->maxHeight );
            			}
            			else {
HXLINE(1720)				_hx_tmp4 = false;
            			}
HXDLIN(1720)			if (_hx_tmp4) {
HXLINE(1721)				this->_componentHeight = (this->_actualHeight = (this->_height = this->get_style()->maxHeight));
            			}
            			else {
HXLINE(1722)				bool _hx_tmp;
HXDLIN(1722)				if (::hx::IsNull( this->get_style()->maxHeight )) {
HXLINE(1722)					_hx_tmp = ::hx::IsNotNull( this->get_style()->maxPercentHeight );
            				}
            				else {
HXLINE(1722)					_hx_tmp = false;
            				}
HXDLIN(1722)				if (_hx_tmp) {
HXLINE(1723)					 ::haxe::ui::core::Component p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1724)					Float max = ( (Float)(0) );
HXLINE(1725)					while(::hx::IsNotNull( p )){
HXLINE(1726)						bool _hx_tmp;
HXDLIN(1726)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1726)							_hx_tmp = ::hx::IsNull( p->get_style()->maxPercentHeight );
            						}
            						else {
HXLINE(1726)							_hx_tmp = false;
            						}
HXDLIN(1726)						if (_hx_tmp) {
HXLINE(1727)							max = (max + p->get_height());
HXLINE(1728)							goto _hx_goto_126;
            						}
HXLINE(1730)						bool _hx_tmp1;
HXDLIN(1730)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1730)							_hx_tmp1 = ::hx::IsInstanceNotEq( p,::hx::ObjectPtr<OBJ_>(this) );
            						}
            						else {
HXLINE(1730)							_hx_tmp1 = false;
            						}
HXDLIN(1730)						if (_hx_tmp1) {
HXLINE(1731)							 ::Dynamic max1 = p->get_style()->paddingTop;
HXDLIN(1731)							max = (max - (max1 + p->get_style()->paddingBottom));
            						}
HXLINE(1733)						p = p->parentComponent;
            					}
            					_hx_goto_126:;
HXLINE(1735)					max = ((max * ( (Float)(this->get_style()->maxPercentHeight) )) / ( (Float)(100) ));
HXLINE(1736)					bool _hx_tmp;
HXDLIN(1736)					if ((max > 0)) {
HXLINE(1736)						_hx_tmp = ::hx::IsGreater( this->_componentHeight,max );
            					}
            					else {
HXLINE(1736)						_hx_tmp = false;
            					}
HXDLIN(1736)					if (_hx_tmp) {
HXLINE(1737)						this->_componentHeight = (this->_actualHeight = (this->_height = max));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,enforceSizeConstraints,(void))

void Component_obj::validateComponentStyle(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1743_validateComponentStyle)
HXLINE(1744)		 ::haxe::ui::styles::Style s = ::haxe::ui::Toolkit_obj::styleSheet->buildStyleFor(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1745)		if (::hx::IsNotNull( this->get_styleSheet() )) {
HXLINE(1746)			 ::haxe::ui::styles::Style localStyle = this->get_styleSheet()->buildStyleFor(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE(1747)			s->apply(localStyle);
            		}
HXLINE(1749)		s->apply(this->get_customStyle());
HXLINE(1751)		bool _hx_tmp;
HXDLIN(1751)		if (::hx::IsNotNull( this->_style )) {
HXLINE(1751)			_hx_tmp = (this->_style->equalTo(s) == false);
            		}
            		else {
HXLINE(1751)			_hx_tmp = true;
            		}
HXDLIN(1751)		if (_hx_tmp) {
HXLINE(1753)			bool marginsChanged = false;
HXLINE(1754)			bool _hx_tmp;
HXDLIN(1754)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(1754)				_hx_tmp = ::hx::IsNotNull( this->_style );
            			}
            			else {
HXLINE(1754)				_hx_tmp = false;
            			}
HXDLIN(1754)			if (_hx_tmp) {
HXLINE(1755)				bool marginsChanged1;
HXDLIN(1755)				bool marginsChanged2;
HXDLIN(1755)				if (::hx::IsEq( this->_style->marginLeft,s->marginLeft )) {
HXLINE(1755)					marginsChanged2 = ::hx::IsNotEq( this->_style->marginRight,s->marginRight );
            				}
            				else {
HXLINE(1755)					marginsChanged2 = true;
            				}
HXDLIN(1755)				if (!(marginsChanged2)) {
HXLINE(1755)					marginsChanged1 = ::hx::IsNotEq( this->_style->marginTop,s->marginTop );
            				}
            				else {
HXLINE(1755)					marginsChanged1 = true;
            				}
HXDLIN(1755)				if (!(marginsChanged1)) {
HXLINE(1755)					marginsChanged = ::hx::IsNotEq( this->_style->marginBottom,s->marginBottom );
            				}
            				else {
HXLINE(1755)					marginsChanged = true;
            				}
            			}
HXLINE(1757)			bool bordersChanged = false;
HXLINE(1758)			bool _hx_tmp1;
HXDLIN(1758)			if (::hx::IsNotNull( this->_style )) {
HXLINE(1758)				 ::Dynamic _hx_tmp = this->_style->get_fullBorderSize();
HXDLIN(1758)				_hx_tmp1 = ::hx::IsNotEq( _hx_tmp,s->get_fullBorderSize() );
            			}
            			else {
HXLINE(1758)				_hx_tmp1 = false;
            			}
HXDLIN(1758)			if (_hx_tmp1) {
HXLINE(1759)				bordersChanged = true;
            			}
HXLINE(1762)			this->_style = s;
HXLINE(1763)			this->applyStyle(s);
HXLINE(1764)			if ((bordersChanged == true)) {
HXLINE(1765)				bool _hx_tmp;
HXDLIN(1765)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(1765)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(1765)					_hx_tmp = true;
            				}
HXDLIN(1765)				if (!(_hx_tmp)) {
HXLINE(1765)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1767)			if ((marginsChanged == true)) {
HXLINE(1768)				 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN(1768)				bool _hx_tmp;
HXDLIN(1768)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1768)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1768)					_hx_tmp = true;
            				}
HXDLIN(1768)				if (!(_hx_tmp)) {
HXLINE(1768)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
            	}


void Component_obj::validateComponentPosition(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1773_validateComponentPosition)
HXLINE(1774)		this->handlePosition(this->_left,this->_top,this->_style);
HXLINE(1776)		this->onMoved();
HXLINE(1777)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("move",11,e3,60,48),null(),null()));
            	}


void Component_obj::updateComponentDisplay(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1781_updateComponentDisplay)
HXLINE(1782)		bool _hx_tmp;
HXDLIN(1782)		if (::hx::IsNotNull( this->get_componentWidth() )) {
HXLINE(1782)			_hx_tmp = ::hx::IsNull( this->get_componentHeight() );
            		}
            		else {
HXLINE(1782)			_hx_tmp = true;
            		}
HXDLIN(1782)		if (_hx_tmp) {
HXLINE(1783)			return;
            		}
HXLINE(1786)		 ::Dynamic _hx_tmp1 = this->get_componentWidth();
HXDLIN(1786)		 ::Dynamic _hx_tmp2 = this->get_componentHeight();
HXDLIN(1786)		this->handleSize(_hx_tmp1,_hx_tmp2,this->_style);
HXLINE(1788)		bool _hx_tmp3;
HXDLIN(1788)		if (::hx::IsNull( this->_componentClipRect )) {
HXLINE(1789)			bool _hx_tmp;
HXDLIN(1789)			if (::hx::IsNotNull( this->get_style() )) {
HXLINE(1789)				_hx_tmp = ::hx::IsNotNull( this->get_style()->clip );
            			}
            			else {
HXLINE(1789)				_hx_tmp = false;
            			}
HXDLIN(1789)			if (_hx_tmp) {
HXLINE(1788)				_hx_tmp3 = ::hx::IsEq( this->get_style()->clip,true );
            			}
            			else {
HXLINE(1788)				_hx_tmp3 = false;
            			}
            		}
            		else {
HXLINE(1788)			_hx_tmp3 = true;
            		}
HXDLIN(1788)		if (_hx_tmp3) {
HXLINE(1790)			 ::haxe::ui::geom::Rectangle _hx_tmp;
HXDLIN(1790)			if (::hx::IsNotNull( this->_componentClipRect )) {
HXLINE(1790)				_hx_tmp = this->_componentClipRect;
            			}
            			else {
HXLINE(1790)				 ::Dynamic _hx_tmp1 = this->get_componentWidth();
HXDLIN(1790)				_hx_tmp =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp1,this->get_componentHeight());
            			}
HXDLIN(1790)			this->handleClipRect(_hx_tmp);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,updateComponentDisplay,(void))

bool Component_obj::validateComponentAutoSize(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1797_validateComponentAutoSize)
HXLINE(1798)		bool invalidate = false;
HXLINE(1799)		bool _hx_tmp;
HXDLIN(1799)		if ((this->get_autoWidth() != true)) {
HXLINE(1799)			_hx_tmp = (this->get_autoHeight() == true);
            		}
            		else {
HXLINE(1799)			_hx_tmp = true;
            		}
HXDLIN(1799)		if (_hx_tmp) {
HXLINE(1800)			 ::haxe::ui::geom::Size s = this->get_layout()->calcAutoSize(null());
HXLINE(1801)			if ((this->get_autoWidth() == true)) {
HXLINE(1802)				if (::hx::IsNotEq( s->width,this->_componentWidth )) {
HXLINE(1803)					this->_componentWidth = s->width;
HXLINE(1804)					invalidate = true;
            				}
            			}
HXLINE(1807)			if ((this->get_autoHeight() == true)) {
HXLINE(1808)				if (::hx::IsNotEq( s->height,this->_componentHeight )) {
HXLINE(1809)					this->_componentHeight = s->height;
HXLINE(1810)					invalidate = true;
            				}
            			}
            		}
HXLINE(1815)		return invalidate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,validateComponentAutoSize,return )

void Component_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1820_applyStyle)
HXLINE(1821)		this->super::applyStyle(style);
HXLINE(1823)		bool _hx_tmp;
HXDLIN(1823)		if (::hx::IsNotNull( style )) {
HXLINE(1823)			_hx_tmp = (this->_initialSizeApplied == false);
            		}
            		else {
HXLINE(1823)			_hx_tmp = false;
            		}
HXDLIN(1823)		if (_hx_tmp) {
HXLINE(1824)			bool _hx_tmp;
HXDLIN(1824)			bool _hx_tmp1;
HXDLIN(1824)			if (::hx::IsNull( style->initialWidth )) {
HXLINE(1824)				_hx_tmp1 = ::hx::IsNotNull( style->initialPercentWidth );
            			}
            			else {
HXLINE(1824)				_hx_tmp1 = true;
            			}
HXDLIN(1824)			if (_hx_tmp1) {
HXLINE(1824)				if (::hx::IsLessEq( this->get_width(),0 )) {
HXLINE(1824)					_hx_tmp = ::hx::IsNull( this->get_percentWidth() );
            				}
            				else {
HXLINE(1824)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(1824)				_hx_tmp = false;
            			}
HXDLIN(1824)			if (_hx_tmp) {
HXLINE(1825)				if (::hx::IsNotNull( style->initialWidth )) {
HXLINE(1826)					this->set_width(style->initialWidth);
HXLINE(1827)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(1828)					if (::hx::IsNotNull( style->initialPercentWidth )) {
HXLINE(1829)						this->set_percentWidth(style->initialPercentWidth);
HXLINE(1830)						this->_initialSizeApplied = true;
            					}
            				}
            			}
HXLINE(1834)			bool _hx_tmp2;
HXDLIN(1834)			bool _hx_tmp3;
HXDLIN(1834)			if (::hx::IsNull( style->initialHeight )) {
HXLINE(1834)				_hx_tmp3 = ::hx::IsNotNull( style->initialPercentHeight );
            			}
            			else {
HXLINE(1834)				_hx_tmp3 = true;
            			}
HXDLIN(1834)			if (_hx_tmp3) {
HXLINE(1834)				if (::hx::IsLessEq( this->get_height(),0 )) {
HXLINE(1834)					_hx_tmp2 = ::hx::IsNull( this->get_percentHeight() );
            				}
            				else {
HXLINE(1834)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(1834)				_hx_tmp2 = false;
            			}
HXDLIN(1834)			if (_hx_tmp2) {
HXLINE(1835)				if (::hx::IsNotNull( style->initialHeight )) {
HXLINE(1836)					this->set_height(style->initialHeight);
HXLINE(1837)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(1838)					if (::hx::IsNotNull( style->initialPercentHeight )) {
HXLINE(1839)						this->set_percentHeight(style->initialPercentHeight);
HXLINE(1840)						this->_initialSizeApplied = true;
            					}
            				}
            			}
            		}
HXLINE(1845)		if (::hx::IsNotNull( style->left )) {
HXLINE(1846)			this->set_left(style->left);
            		}
HXLINE(1848)		if (::hx::IsNotNull( style->top )) {
HXLINE(1849)			this->set_top(style->top);
            		}
HXLINE(1852)		if (::hx::IsNotNull( style->percentWidth )) {
HXLINE(1853)			this->_width = null();
HXLINE(1854)			this->set_componentWidth(null());
HXLINE(1855)			this->set_percentWidth(style->percentWidth);
            		}
HXLINE(1857)		if (::hx::IsNotNull( style->percentHeight )) {
HXLINE(1858)			this->_height = null();
HXLINE(1859)			this->set_componentHeight(null());
HXLINE(1860)			this->set_percentHeight(style->percentHeight);
            		}
HXLINE(1862)		if (::hx::IsNotNull( style->width )) {
HXLINE(1863)			this->set_percentWidth(null());
HXLINE(1864)			this->set_width(style->width);
            		}
HXLINE(1866)		if (::hx::IsNotNull( style->height )) {
HXLINE(1867)			this->set_percentHeight(null());
HXLINE(1868)			this->set_height(style->height);
            		}
HXLINE(1871)		if (::hx::IsNotNull( style->native )) {
HXLINE(1872)			this->set_native(style->native);
            		}
HXLINE(1875)		if (::hx::IsNotNull( style->hidden )) {
HXLINE(1876)			this->set_hidden(( (bool)(style->hidden) ));
            		}
HXLINE(1879)		if ((this->_pauseAnimationStyleChanges == false)) {
HXLINE(1880)			if (::hx::IsNotNull( style->animationName )) {
HXLINE(1881)				::Dynamic this1 = ::haxe::ui::Toolkit_obj::styleSheet->get_animations();
HXDLIN(1881)				 ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames = ( ( ::haxe::ui::styles::elements::AnimationKeyFrames)(( ( ::haxe::ds::StringMap)(this1) )->get(style->animationName)) );
HXLINE(1882)				this->applyAnimationKeyFrame(animationKeyFrames,style->animationOptions);
            			}
            			else {
HXLINE(1883)				if (::hx::IsNotNull( this->get_componentAnimation() )) {
HXLINE(1884)					this->set_componentAnimation(null());
            				}
            			}
            		}
HXLINE(1888)		bool _hx_tmp1;
HXDLIN(1888)		if (::hx::IsNotNull( style->pointerEvents )) {
HXLINE(1888)			_hx_tmp1 = (style->pointerEvents != HX_("none",b8,12,0a,49));
            		}
            		else {
HXLINE(1888)			_hx_tmp1 = false;
            		}
HXDLIN(1888)		if (_hx_tmp1) {
HXLINE(1889)			if ((this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onPointerEventsMouseOver_dyn()) == false)) {
HXLINE(1890)				if (::hx::IsNull( style->cursor )) {
HXLINE(1891)					this->get_customStyle()->cursor = HX_("pointer",bd,c0,21,51);
            				}
HXLINE(1893)				this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onPointerEventsMouseOver_dyn(),null());
            			}
HXLINE(1895)			if ((this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onPointerEventsMouseOut_dyn()) == false)) {
HXLINE(1896)				this->registerEvent(HX_("mouseout",89,2f,36,a4),this->onPointerEventsMouseOut_dyn(),null());
            			}
HXLINE(1898)			if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onPointerEventsMouseDown_dyn()) == false)) {
HXLINE(1899)				this->registerEvent(HX_("mousedown",07,85,e9,03),this->onPointerEventsMouseDown_dyn(),null());
            			}
HXLINE(1901)			if ((this->hasEvent(HX_("mouseup",c0,0f,73,c0),this->onPointerEventsMouseUp_dyn()) == false)) {
HXLINE(1902)				this->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onPointerEventsMouseUp_dyn(),null());
            			}
HXLINE(1904)			this->handleFrameworkProperty(HX_("allowMouseInteraction",56,34,ef,e0),true);
            		}
            		else {
HXLINE(1905)			if (::hx::IsNotNull( style->pointerEvents )) {
HXLINE(1906)				if ((this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onPointerEventsMouseOver_dyn()) == true)) {
HXLINE(1907)					this->get_customStyle()->cursor = null();
HXLINE(1908)					this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onPointerEventsMouseOver_dyn());
            				}
HXLINE(1910)				if ((this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onPointerEventsMouseOut_dyn()) == true)) {
HXLINE(1911)					this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onPointerEventsMouseOut_dyn());
            				}
HXLINE(1913)				if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onPointerEventsMouseDown_dyn()) == true)) {
HXLINE(1914)					this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onPointerEventsMouseDown_dyn());
            				}
HXLINE(1916)				if ((this->hasEvent(HX_("mouseup",c0,0f,73,c0),this->onPointerEventsMouseUp_dyn()) == true)) {
HXLINE(1917)					this->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onPointerEventsMouseUp_dyn());
            				}
HXLINE(1919)				this->handleFrameworkProperty(HX_("allowMouseInteraction",56,34,ef,e0),false);
            			}
            		}
HXLINE(1922)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1923)			this->_compositeBuilder->applyStyle(style);
            		}
            	}


void Component_obj::onPointerEventsMouseOver( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1928_onPointerEventsMouseOver)
HXDLIN(1928)		this->addClass(HX_(":hover",42,d3,17,5c),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseOver,(void))

void Component_obj::onPointerEventsMouseOut( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1932_onPointerEventsMouseOut)
HXDLIN(1932)		this->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseOut,(void))

void Component_obj::onPointerEventsMouseDown( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1936_onPointerEventsMouseDown)
HXDLIN(1936)		this->addClass(HX_(":down",9c,9d,ab,a7),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseDown,(void))

void Component_obj::onPointerEventsMouseUp( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1940_onPointerEventsMouseUp)
HXDLIN(1940)		this->removeClass(HX_(":down",9c,9d,ab,a7),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseUp,(void))

void Component_obj::applyAnimationKeyFrame( ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames, ::haxe::ui::styles::animation::AnimationOptions options){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1959_applyAnimationKeyFrame)
HXLINE(1959)			if (_gthis->hasEvent(HX_("animationend",57,4f,3c,aa),null())) {
HXLINE(1960)				 ::haxe::ui::core::Component _gthis1 = _gthis;
HXDLIN(1960)				_gthis1->dispatch( ::haxe::ui::events::AnimationEvent_obj::__alloc( HX_CTX ,HX_("animationend",57,4f,3c,aa)));
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1947_applyAnimationKeyFrame)
HXDLIN(1947)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1948)		bool _hx_tmp;
HXDLIN(1948)		bool _hx_tmp1;
HXDLIN(1948)		bool _hx_tmp2;
HXDLIN(1948)		if ((this->_animatable != false)) {
HXLINE(1948)			_hx_tmp2 = ::hx::IsNull( options );
            		}
            		else {
HXLINE(1948)			_hx_tmp2 = true;
            		}
HXDLIN(1948)		if (!(_hx_tmp2)) {
HXLINE(1948)			_hx_tmp1 = ::hx::IsEq( options->duration,0 );
            		}
            		else {
HXLINE(1948)			_hx_tmp1 = true;
            		}
HXDLIN(1948)		if (!(_hx_tmp1)) {
HXLINE(1949)			bool _hx_tmp1;
HXDLIN(1949)			if (::hx::IsNotNull( this->_componentAnimation )) {
HXLINE(1949)				_hx_tmp1 = (this->_componentAnimation->name == animationKeyFrames->id);
            			}
            			else {
HXLINE(1949)				_hx_tmp1 = false;
            			}
HXDLIN(1949)			if (_hx_tmp1) {
HXLINE(1948)				_hx_tmp = (options->compareToAnimation(this->_componentAnimation) == true);
            			}
            			else {
HXLINE(1948)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1948)			_hx_tmp = true;
            		}
HXDLIN(1948)		if (_hx_tmp) {
HXLINE(1950)			return;
            		}
HXLINE(1953)		if (this->hasEvent(HX_("animationstart",de,96,01,01),null())) {
HXLINE(1954)			this->dispatch( ::haxe::ui::events::AnimationEvent_obj::__alloc( HX_CTX ,HX_("animationstart",de,96,01,01)));
            		}
HXLINE(1957)		this->set_componentAnimation(::haxe::ui::styles::animation::Animation_obj::createWithKeyFrames(animationKeyFrames,::hx::ObjectPtr<OBJ_>(this),options));
HXLINE(1958)		this->get_componentAnimation()->run( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,applyAnimationKeyFrame,(void))

 ::haxe::ui::core::ComponentContainer Component_obj::cloneComponent(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1968_cloneComponent)
HXLINE( 371)		 ::haxe::ui::core::Component c = ( ( ::haxe::ui::core::Component)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_styleNames() )) {
HXLINE( 380)			c->set_styleNames(this->get_styleNames());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_styleString() )) {
HXLINE( 380)			c->set_styleString(this->get_styleString());
            		}
HXLINE(1969)		bool _hx_tmp = (this->_ready == false);
HXLINE(1972)		if ((this->_hidden == true)) {
HXLINE(1973)			c->hide();
            		}
HXLINE(1975)		bool _hx_tmp1;
HXDLIN(1975)		if ((this->get_autoWidth() == false)) {
HXLINE(1975)			_hx_tmp1 = ::hx::IsGreater( this->get_width(),0 );
            		}
            		else {
HXLINE(1975)			_hx_tmp1 = false;
            		}
HXDLIN(1975)		if (_hx_tmp1) {
HXLINE(1976)			c->set_width(this->get_width());
            		}
HXLINE(1978)		bool _hx_tmp2;
HXDLIN(1978)		if ((this->get_autoHeight() == false)) {
HXLINE(1978)			_hx_tmp2 = ::hx::IsGreater( this->get_height(),0 );
            		}
            		else {
HXLINE(1978)			_hx_tmp2 = false;
            		}
HXDLIN(1978)		if (_hx_tmp2) {
HXLINE(1979)			c->set_height(this->get_height());
            		}
HXLINE(1981)		if (::hx::IsNotNull( this->get_customStyle() )) {
HXLINE(1982)			if (::hx::IsNull( c->get_customStyle() )) {
HXLINE(1983)				c->set_customStyle( ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
            			}
HXLINE(1985)			 ::haxe::ui::styles::Style _hx_tmp = c->get_customStyle();
HXDLIN(1985)			_hx_tmp->apply(this->get_customStyle());
            		}
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp3;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp3 = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp4;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp4 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp4 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp3->length != _hx_tmp4->length)) {
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
HXLINE( 393)			this->postCloneComponent(c);
            		}
HXLINE( 395)		return c;
            	}


bool Component_obj::get_isComponentClipped(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1989_get_isComponentClipped)
HXLINE(1990)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1991)			return this->_compositeBuilder->get_isComponentClipped();
            		}
HXLINE(1993)		return ::hx::IsNotNull( this->get_componentClipRect() );
            	}


::String Component_obj::get_cssName(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2000_get_cssName)
HXLINE(2001)		::String cssName = null();
HXLINE(2002)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(2003)			cssName = this->_compositeBuilder->get_cssName();
            		}
HXLINE(2005)		if (::hx::IsNull( cssName )) {
HXLINE(2006)			cssName = ( (::String)(::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))).split(HX_(".",2e,00,00,00))->pop()) ).toLowerCase();
            		}
HXLINE(2008)		return cssName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_cssName,return )

void Component_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::Dynamic Component_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_color)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->color )) {
HXLINE( 195)			return this->get_customStyle()->color;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->color );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_color,return )

 ::Dynamic Component_obj::set_color( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_color)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->color,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->color = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->color = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_color,return )

 ::Dynamic Component_obj::get_backgroundColor(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_backgroundColor)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->backgroundColor )) {
HXLINE( 195)			return this->get_customStyle()->backgroundColor;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->backgroundColor );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->backgroundColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_backgroundColor,return )

 ::Dynamic Component_obj::set_backgroundColor( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_backgroundColor)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->backgroundColor,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->backgroundColor = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->backgroundColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_backgroundColor,return )

 ::Dynamic Component_obj::get_backgroundColorEnd(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_backgroundColorEnd)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->backgroundColorEnd )) {
HXLINE( 195)			return this->get_customStyle()->backgroundColorEnd;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->backgroundColorEnd );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->backgroundColorEnd;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_backgroundColorEnd,return )

 ::Dynamic Component_obj::set_backgroundColorEnd( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_backgroundColorEnd)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->backgroundColorEnd,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->backgroundColorEnd = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->backgroundColorEnd = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_backgroundColorEnd,return )

 ::haxe::ui::util::VariantType Component_obj::get_backgroundImage(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_backgroundImage)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->backgroundImage )) {
HXLINE( 195)			return this->get_customStyle()->backgroundImage;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->backgroundImage );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->backgroundImage;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_backgroundImage,return )

 ::haxe::ui::util::VariantType Component_obj::set_backgroundImage( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_backgroundImage)
HXLINE( 207)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(this->get_customStyle()->backgroundImage,value)) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->backgroundImage = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->backgroundImage = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_backgroundImage,return )

 ::Dynamic Component_obj::get_borderColor(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_borderColor)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->borderColor )) {
HXLINE( 195)			return this->get_customStyle()->borderColor;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->borderColor );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->borderColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_borderColor,return )

 ::Dynamic Component_obj::set_borderColor( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_borderColor)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->borderColor,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->borderColor = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->borderColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 222)		{
HXLINE( 223)			this->get_customStyle()->borderTopColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
HXLINE( 224)			this->get_customStyle()->borderLeftColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
HXLINE( 225)			this->get_customStyle()->borderBottomColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
HXLINE( 226)			this->get_customStyle()->borderRightColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_borderColor,return )

 ::Dynamic Component_obj::get_borderSize(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_borderSize)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->borderSize )) {
HXLINE( 195)			return this->get_customStyle()->borderSize;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->borderSize );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->borderSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_borderSize,return )

 ::Dynamic Component_obj::set_borderSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_borderSize)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->borderSize,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->borderSize = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->borderSize = value;
            		}
HXLINE( 229)		{
HXLINE( 230)			this->get_customStyle()->borderTopSize = value;
HXLINE( 231)			this->get_customStyle()->borderLeftSize = value;
HXLINE( 232)			this->get_customStyle()->borderBottomSize = value;
HXLINE( 233)			this->get_customStyle()->borderRightSize = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_borderSize,return )

 ::Dynamic Component_obj::get_borderRadius(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_borderRadius)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->borderRadius )) {
HXLINE( 195)			return this->get_customStyle()->borderRadius;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->borderRadius );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->borderRadius;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_borderRadius,return )

 ::Dynamic Component_obj::set_borderRadius( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_borderRadius)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->borderRadius,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->borderRadius = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->borderRadius = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_borderRadius,return )

 ::Dynamic Component_obj::get_padding(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_padding)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->padding )) {
HXLINE( 195)			return this->get_customStyle()->padding;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->padding );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->padding;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_padding,return )

 ::Dynamic Component_obj::set_padding( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_padding)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->padding,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->set_padding(null());
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->set_padding(value);
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_padding,return )

 ::Dynamic Component_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_paddingLeft)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->paddingLeft )) {
HXLINE( 195)			return this->get_customStyle()->paddingLeft;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingLeft );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingLeft,return )

 ::Dynamic Component_obj::set_paddingLeft( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_paddingLeft)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->paddingLeft,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->paddingLeft = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->paddingLeft = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingLeft,return )

 ::Dynamic Component_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_paddingRight)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->paddingRight )) {
HXLINE( 195)			return this->get_customStyle()->paddingRight;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingRight );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingRight,return )

 ::Dynamic Component_obj::set_paddingRight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_paddingRight)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->paddingRight,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->paddingRight = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->paddingRight = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingRight,return )

 ::Dynamic Component_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_paddingTop)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->paddingTop )) {
HXLINE( 195)			return this->get_customStyle()->paddingTop;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingTop );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingTop,return )

 ::Dynamic Component_obj::set_paddingTop( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_paddingTop)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->paddingTop,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->paddingTop = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->paddingTop = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingTop,return )

 ::Dynamic Component_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_paddingBottom)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->paddingBottom )) {
HXLINE( 195)			return this->get_customStyle()->paddingBottom;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingBottom,return )

 ::Dynamic Component_obj::set_paddingBottom( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_paddingBottom)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->paddingBottom,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->paddingBottom = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->paddingBottom = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingBottom,return )

 ::Dynamic Component_obj::get_marginLeft(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_marginLeft)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->marginLeft )) {
HXLINE( 195)			return this->get_customStyle()->marginLeft;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->marginLeft );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->marginLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginLeft,return )

 ::Dynamic Component_obj::set_marginLeft( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_marginLeft)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->marginLeft,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->marginLeft = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->marginLeft = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginLeft,return )

 ::Dynamic Component_obj::get_marginRight(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_marginRight)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->marginRight )) {
HXLINE( 195)			return this->get_customStyle()->marginRight;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->marginRight );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->marginRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginRight,return )

 ::Dynamic Component_obj::set_marginRight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_marginRight)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->marginRight,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->marginRight = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->marginRight = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginRight,return )

 ::Dynamic Component_obj::get_marginTop(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_marginTop)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->marginTop )) {
HXLINE( 195)			return this->get_customStyle()->marginTop;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->marginTop );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->marginTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginTop,return )

 ::Dynamic Component_obj::set_marginTop( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_marginTop)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->marginTop,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->marginTop = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->marginTop = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginTop,return )

 ::Dynamic Component_obj::get_marginBottom(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_marginBottom)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->marginBottom )) {
HXLINE( 195)			return this->get_customStyle()->marginBottom;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->marginBottom );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->marginBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginBottom,return )

 ::Dynamic Component_obj::set_marginBottom( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_marginBottom)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->marginBottom,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->marginBottom = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->marginBottom = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginBottom,return )

 ::Dynamic Component_obj::get_clip(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_clip)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->clip )) {
HXLINE( 195)			return this->get_customStyle()->clip;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->clip );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->clip;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_clip,return )

 ::Dynamic Component_obj::set_clip( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_clip)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->clip,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->clip = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->clip = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_clip,return )

 ::Dynamic Component_obj::get_opacity(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_opacity)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->opacity )) {
HXLINE( 195)			return this->get_customStyle()->opacity;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->opacity );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->opacity;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_opacity,return )

 ::Dynamic Component_obj::set_opacity( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_opacity)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->opacity,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->opacity = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->opacity = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_opacity,return )

::String Component_obj::get_horizontalAlign(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_horizontalAlign)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->horizontalAlign )) {
HXLINE( 195)			return this->get_customStyle()->horizontalAlign;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->horizontalAlign );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_horizontalAlign,return )

::String Component_obj::set_horizontalAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_horizontalAlign)
HXLINE( 207)		if ((this->get_customStyle()->horizontalAlign == value)) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->horizontalAlign = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->horizontalAlign = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 245)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 245)			 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 245)			bool _hx_tmp;
HXDLIN( 245)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 245)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 245)				_hx_tmp = true;
            			}
HXDLIN( 245)			if (!(_hx_tmp)) {
HXLINE( 245)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_horizontalAlign,return )

::String Component_obj::get_verticalAlign(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_193_get_verticalAlign)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->verticalAlign )) {
HXLINE( 195)			return this->get_customStyle()->verticalAlign;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->verticalAlign );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_verticalAlign,return )

::String Component_obj::set_verticalAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_206_set_verticalAlign)
HXLINE( 207)		if ((this->get_customStyle()->verticalAlign == value)) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->verticalAlign = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->verticalAlign = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 245)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE( 245)			 ::haxe::ui::core::Component _this = this->parentComponent;
HXDLIN( 245)			bool _hx_tmp;
HXDLIN( 245)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 245)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 245)				_hx_tmp = true;
            			}
HXDLIN( 245)			if (!(_hx_tmp)) {
HXLINE( 245)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_verticalAlign,return )

 ::haxe::ui::core::ComponentContainer Component_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_423_self)
HXDLIN( 423)		return  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
            	}


 ::Dynamic Component_obj::set_onDragStart( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onDragStart)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onDragStart )) {
HXLINE( 169)			this->unregisterEvent(HX_("dragstart",ee,73,33,53),this->_internal__onDragStart);
HXLINE( 170)			this->_internal__onDragStart = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onDragStart = value;
HXLINE( 174)			this->registerEvent(HX_("dragstart",ee,73,33,53),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onDragStart,return )

 ::Dynamic Component_obj::set_onDrag( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onDrag)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onDrag )) {
HXLINE( 169)			this->unregisterEvent(HX_("drag",f4,2b,70,42),this->_internal__onDrag);
HXLINE( 170)			this->_internal__onDrag = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onDrag = value;
HXLINE( 174)			this->registerEvent(HX_("drag",f4,2b,70,42),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onDrag,return )

 ::Dynamic Component_obj::set_onDragEnd( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onDragEnd)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onDragEnd )) {
HXLINE( 169)			this->unregisterEvent(HX_("dragend",67,c8,51,f1),this->_internal__onDragEnd);
HXLINE( 170)			this->_internal__onDragEnd = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onDragEnd = value;
HXLINE( 174)			this->registerEvent(HX_("dragend",67,c8,51,f1),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onDragEnd,return )

 ::Dynamic Component_obj::set_onAnimationStart( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onAnimationStart)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onAnimationStart )) {
HXLINE( 169)			this->unregisterEvent(HX_("animationstart",de,96,01,01),this->_internal__onAnimationStart);
HXLINE( 170)			this->_internal__onAnimationStart = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onAnimationStart = value;
HXLINE( 174)			this->registerEvent(HX_("animationstart",de,96,01,01),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onAnimationStart,return )

 ::Dynamic Component_obj::set_onAnimationFrame( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onAnimationFrame)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onAnimationFrame )) {
HXLINE( 169)			this->unregisterEvent(HX_("animationframe",a9,9a,79,83),this->_internal__onAnimationFrame);
HXLINE( 170)			this->_internal__onAnimationFrame = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onAnimationFrame = value;
HXLINE( 174)			this->registerEvent(HX_("animationframe",a9,9a,79,83),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onAnimationFrame,return )

 ::Dynamic Component_obj::set_onAnimationEnd( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onAnimationEnd)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onAnimationEnd )) {
HXLINE( 169)			this->unregisterEvent(HX_("animationend",57,4f,3c,aa),this->_internal__onAnimationEnd);
HXLINE( 170)			this->_internal__onAnimationEnd = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onAnimationEnd = value;
HXLINE( 174)			this->registerEvent(HX_("animationend",57,4f,3c,aa),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onAnimationEnd,return )

 ::Dynamic Component_obj::set_onClick( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onClick)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onClick )) {
HXLINE( 169)			this->unregisterEvent(HX_("click",48,7c,5e,48),this->_internal__onClick);
HXLINE( 170)			this->_internal__onClick = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onClick = value;
HXLINE( 174)			this->registerEvent(HX_("click",48,7c,5e,48),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onClick,return )

 ::Dynamic Component_obj::set_onMouseOver( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onMouseOver)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onMouseOver )) {
HXLINE( 169)			this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->_internal__onMouseOver);
HXLINE( 170)			this->_internal__onMouseOver = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onMouseOver = value;
HXLINE( 174)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onMouseOver,return )

 ::Dynamic Component_obj::set_onMouseOut( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onMouseOut)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onMouseOut )) {
HXLINE( 169)			this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->_internal__onMouseOut);
HXLINE( 170)			this->_internal__onMouseOut = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onMouseOut = value;
HXLINE( 174)			this->registerEvent(HX_("mouseout",89,2f,36,a4),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onMouseOut,return )

 ::Dynamic Component_obj::set_onDblClick( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onDblClick)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onDblClick )) {
HXLINE( 169)			this->unregisterEvent(HX_("doubleclick",97,93,48,3a),this->_internal__onDblClick);
HXLINE( 170)			this->_internal__onDblClick = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onDblClick = value;
HXLINE( 174)			this->registerEvent(HX_("doubleclick",97,93,48,3a),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onDblClick,return )

 ::Dynamic Component_obj::set_onRightClick( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onRightClick)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onRightClick )) {
HXLINE( 169)			this->unregisterEvent(HX_("rightclick",ec,f2,f5,b7),this->_internal__onRightClick);
HXLINE( 170)			this->_internal__onRightClick = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onRightClick = value;
HXLINE( 174)			this->registerEvent(HX_("rightclick",ec,f2,f5,b7),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onRightClick,return )

 ::Dynamic Component_obj::set_onChange( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_167_set_onChange)
HXLINE( 168)		if (::hx::IsNotNull( this->_internal__onChange )) {
HXLINE( 169)			this->unregisterEvent(HX_("change",70,91,72,b7),this->_internal__onChange);
HXLINE( 170)			this->_internal__onChange = null();
            		}
HXLINE( 172)		if (::hx::IsNotNull( value )) {
HXLINE( 173)			this->_internal__onChange = value;
HXLINE( 174)			this->registerEvent(HX_("change",70,91,72,b7),value,null());
            		}
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onChange,return )

void Component_obj::addNamedComponentsFrom( ::haxe::ui::core::Component parent,::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1521_addNamedComponentsFrom)
HXLINE(1522)		if (::hx::IsNull( parent )) {
HXLINE(1523)			return;
            		}
HXLINE(1526)		if (::hx::IsNotNull( parent->get_id() )) {
HXLINE(1527)			list->push(parent);
            		}
HXLINE(1530)		{
HXLINE(1530)			int _g = 0;
HXDLIN(1530)			::Array< ::Dynamic> _g1;
HXDLIN(1530)			if (::hx::IsNull( parent->_children )) {
HXLINE(1530)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1530)				_g1 = parent->_children;
            			}
HXDLIN(1530)			while((_g < _g1->length)){
HXLINE(1530)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1530)				_g = (_g + 1);
HXLINE(1531)				::haxe::ui::core::Component_obj::addNamedComponentsFrom(child,list);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Component_obj,addNamedComponentsFrom,(void))


::hx::ObjectPtr< Component_obj > Component_obj::__new() {
	::hx::ObjectPtr< Component_obj > __this = new Component_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Component_obj > Component_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Component_obj *__this = (Component_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Component_obj), true, "haxe.ui.core.Component"));
	*(void **)__this = Component_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(componentTabIndex,"componentTabIndex");
	HX_MARK_MEMBER_NAME(_defaultLayoutClass,"_defaultLayoutClass");
	HX_MARK_MEMBER_NAME(_compositeBuilderClass,"_compositeBuilderClass");
	HX_MARK_MEMBER_NAME(_compositeBuilder,"_compositeBuilder");
	HX_MARK_MEMBER_NAME(_native,"_native");
	HX_MARK_MEMBER_NAME(_animatable,"_animatable");
	HX_MARK_MEMBER_NAME(_componentAnimation,"_componentAnimation");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(_dragInitiator,"_dragInitiator");
	HX_MARK_MEMBER_NAME(_dragOptions,"_dragOptions");
	HX_MARK_MEMBER_NAME(bindingRoot,"bindingRoot");
	HX_MARK_MEMBER_NAME(_hidden,"_hidden");
	HX_MARK_MEMBER_NAME(_customStyle,"_customStyle");
	HX_MARK_MEMBER_NAME(classes,"classes");
	HX_MARK_MEMBER_NAME(cascadeActive,"cascadeActive");
	HX_MARK_MEMBER_NAME(_styleString,"_styleString");
	HX_MARK_MEMBER_NAME(_useCachedStyleSheetRef,"_useCachedStyleSheetRef");
	HX_MARK_MEMBER_NAME(_cachedStyleSheetRef,"_cachedStyleSheetRef");
	HX_MARK_MEMBER_NAME(_styleSheet,"_styleSheet");
	HX_MARK_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_MARK_MEMBER_NAME(_scriptAccess,"_scriptAccess");
	HX_MARK_MEMBER_NAME(namedComponents,"namedComponents");
	HX_MARK_MEMBER_NAME(_initialSizeApplied,"_initialSizeApplied");
	HX_MARK_MEMBER_NAME(_pauseAnimationStyleChanges,"_pauseAnimationStyleChanges");
	HX_MARK_MEMBER_NAME(cssName,"cssName");
	HX_MARK_MEMBER_NAME(_internal__onDragStart,"_internal__onDragStart");
	HX_MARK_MEMBER_NAME(onDragStart,"onDragStart");
	HX_MARK_MEMBER_NAME(_internal__onDrag,"_internal__onDrag");
	HX_MARK_MEMBER_NAME(onDrag,"onDrag");
	HX_MARK_MEMBER_NAME(_internal__onDragEnd,"_internal__onDragEnd");
	HX_MARK_MEMBER_NAME(onDragEnd,"onDragEnd");
	HX_MARK_MEMBER_NAME(_internal__onAnimationStart,"_internal__onAnimationStart");
	HX_MARK_MEMBER_NAME(onAnimationStart,"onAnimationStart");
	HX_MARK_MEMBER_NAME(_internal__onAnimationFrame,"_internal__onAnimationFrame");
	HX_MARK_MEMBER_NAME(onAnimationFrame,"onAnimationFrame");
	HX_MARK_MEMBER_NAME(_internal__onAnimationEnd,"_internal__onAnimationEnd");
	HX_MARK_MEMBER_NAME(onAnimationEnd,"onAnimationEnd");
	HX_MARK_MEMBER_NAME(_internal__onClick,"_internal__onClick");
	HX_MARK_MEMBER_NAME(onClick,"onClick");
	HX_MARK_MEMBER_NAME(_internal__onMouseOver,"_internal__onMouseOver");
	HX_MARK_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_MARK_MEMBER_NAME(_internal__onMouseOut,"_internal__onMouseOut");
	HX_MARK_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_MARK_MEMBER_NAME(_internal__onDblClick,"_internal__onDblClick");
	HX_MARK_MEMBER_NAME(onDblClick,"onDblClick");
	HX_MARK_MEMBER_NAME(_internal__onRightClick,"_internal__onRightClick");
	HX_MARK_MEMBER_NAME(onRightClick,"onRightClick");
	HX_MARK_MEMBER_NAME(_internal__onChange,"_internal__onChange");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	 ::haxe::ui::backend::ComponentImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(componentTabIndex,"componentTabIndex");
	HX_VISIT_MEMBER_NAME(_defaultLayoutClass,"_defaultLayoutClass");
	HX_VISIT_MEMBER_NAME(_compositeBuilderClass,"_compositeBuilderClass");
	HX_VISIT_MEMBER_NAME(_compositeBuilder,"_compositeBuilder");
	HX_VISIT_MEMBER_NAME(_native,"_native");
	HX_VISIT_MEMBER_NAME(_animatable,"_animatable");
	HX_VISIT_MEMBER_NAME(_componentAnimation,"_componentAnimation");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(_dragInitiator,"_dragInitiator");
	HX_VISIT_MEMBER_NAME(_dragOptions,"_dragOptions");
	HX_VISIT_MEMBER_NAME(bindingRoot,"bindingRoot");
	HX_VISIT_MEMBER_NAME(_hidden,"_hidden");
	HX_VISIT_MEMBER_NAME(_customStyle,"_customStyle");
	HX_VISIT_MEMBER_NAME(classes,"classes");
	HX_VISIT_MEMBER_NAME(cascadeActive,"cascadeActive");
	HX_VISIT_MEMBER_NAME(_styleString,"_styleString");
	HX_VISIT_MEMBER_NAME(_useCachedStyleSheetRef,"_useCachedStyleSheetRef");
	HX_VISIT_MEMBER_NAME(_cachedStyleSheetRef,"_cachedStyleSheetRef");
	HX_VISIT_MEMBER_NAME(_styleSheet,"_styleSheet");
	HX_VISIT_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_VISIT_MEMBER_NAME(_scriptAccess,"_scriptAccess");
	HX_VISIT_MEMBER_NAME(namedComponents,"namedComponents");
	HX_VISIT_MEMBER_NAME(_initialSizeApplied,"_initialSizeApplied");
	HX_VISIT_MEMBER_NAME(_pauseAnimationStyleChanges,"_pauseAnimationStyleChanges");
	HX_VISIT_MEMBER_NAME(cssName,"cssName");
	HX_VISIT_MEMBER_NAME(_internal__onDragStart,"_internal__onDragStart");
	HX_VISIT_MEMBER_NAME(onDragStart,"onDragStart");
	HX_VISIT_MEMBER_NAME(_internal__onDrag,"_internal__onDrag");
	HX_VISIT_MEMBER_NAME(onDrag,"onDrag");
	HX_VISIT_MEMBER_NAME(_internal__onDragEnd,"_internal__onDragEnd");
	HX_VISIT_MEMBER_NAME(onDragEnd,"onDragEnd");
	HX_VISIT_MEMBER_NAME(_internal__onAnimationStart,"_internal__onAnimationStart");
	HX_VISIT_MEMBER_NAME(onAnimationStart,"onAnimationStart");
	HX_VISIT_MEMBER_NAME(_internal__onAnimationFrame,"_internal__onAnimationFrame");
	HX_VISIT_MEMBER_NAME(onAnimationFrame,"onAnimationFrame");
	HX_VISIT_MEMBER_NAME(_internal__onAnimationEnd,"_internal__onAnimationEnd");
	HX_VISIT_MEMBER_NAME(onAnimationEnd,"onAnimationEnd");
	HX_VISIT_MEMBER_NAME(_internal__onClick,"_internal__onClick");
	HX_VISIT_MEMBER_NAME(onClick,"onClick");
	HX_VISIT_MEMBER_NAME(_internal__onMouseOver,"_internal__onMouseOver");
	HX_VISIT_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_VISIT_MEMBER_NAME(_internal__onMouseOut,"_internal__onMouseOut");
	HX_VISIT_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_VISIT_MEMBER_NAME(_internal__onDblClick,"_internal__onDblClick");
	HX_VISIT_MEMBER_NAME(onDblClick,"onDblClick");
	HX_VISIT_MEMBER_NAME(_internal__onRightClick,"_internal__onRightClick");
	HX_VISIT_MEMBER_NAME(onRightClick,"onRightClick");
	HX_VISIT_MEMBER_NAME(_internal__onChange,"_internal__onChange");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	 ::haxe::ui::backend::ComponentImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Component_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_clip() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready_dyn() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"native") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_native() ); }
		if (HX_FIELD_EQ(inName,"screen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screen() : screen ); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return ::hx::Val( fadeIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"hidden") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hidden() ); }
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layout() ); }
		if (HX_FIELD_EQ(inName,"onDrag") ) { return ::hx::Val( onDrag ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_native") ) { return ::hx::Val( _native ); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return ::hx::Val( fadeOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hidden") ) { return ::hx::Val( _hidden ); }
		if (HX_FIELD_EQ(inName,"classes") ) { return ::hx::Val( classes ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMoved") ) { return ::hx::Val( onMoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"cssName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_cssName() : cssName ); }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_padding() ); }
		if (HX_FIELD_EQ(inName,"opacity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_opacity() ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return ::hx::Val( userData ); }
		if (HX_FIELD_EQ(inName,"addClass") ) { return ::hx::Val( addClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasClass") ) { return ::hx::Val( hasClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_clip") ) { return ::hx::Val( get_clip_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clip") ) { return ::hx::Val( set_clip_dyn() ); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"draggable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_draggable() ); }
		if (HX_FIELD_EQ(inName,"onDestroy") ) { return ::hx::Val( onDestroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapClass") ) { return ::hx::Val( swapClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResized") ) { return ::hx::Val( onResized_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginTop() ); }
		if (HX_FIELD_EQ(inName,"onDragEnd") ) { return ::hx::Val( onDragEnd ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_native") ) { return ::hx::Val( get_native_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_native") ) { return ::hx::Val( set_native_dyn() ); }
		if (HX_FIELD_EQ(inName,"animatable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animatable() ); }
		if (HX_FIELD_EQ(inName,"get_screen") ) { return ::hx::Val( get_screen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hidden") ) { return ::hx::Val( get_hidden_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hidden") ) { return ::hx::Val( set_hidden_dyn() ); }
		if (HX_FIELD_EQ(inName,"addClasses") ) { return ::hx::Val( addClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"styleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleNames() ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleSheet() ); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return ::hx::Val( get_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return ::hx::Val( set_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"lockLayout") ) { return ::hx::Val( lockLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderSize() ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingTop() ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginLeft() ); }
		if (HX_FIELD_EQ(inName,"set_onDrag") ) { return ::hx::Val( set_onDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut ); }
		if (HX_FIELD_EQ(inName,"onDblClick") ) { return ::hx::Val( onDblClick ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animatable") ) { return ::hx::Val( _animatable ); }
		if (HX_FIELD_EQ(inName,"dragOptions") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dragOptions() ); }
		if (HX_FIELD_EQ(inName,"bindingRoot") ) { return ::hx::Val( bindingRoot ); }
		if (HX_FIELD_EQ(inName,"customStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customStyle() ); }
		if (HX_FIELD_EQ(inName,"removeClass") ) { return ::hx::Val( removeClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"styleString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleString() ); }
		if (HX_FIELD_EQ(inName,"_styleSheet") ) { return ::hx::Val( _styleSheet ); }
		if (HX_FIELD_EQ(inName,"get_cssName") ) { return ::hx::Val( get_cssName_dyn() ); }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderColor() ); }
		if (HX_FIELD_EQ(inName,"get_padding") ) { return ::hx::Val( get_padding_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return ::hx::Val( set_padding_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingLeft() ); }
		if (HX_FIELD_EQ(inName,"marginRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginRight() ); }
		if (HX_FIELD_EQ(inName,"get_opacity") ) { return ::hx::Val( get_opacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_opacity") ) { return ::hx::Val( set_opacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDragStart") ) { return ::hx::Val( onDragStart ); }
		if (HX_FIELD_EQ(inName,"set_onClick") ) { return ::hx::Val( set_onClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLayout") ) { return ::hx::Val( createLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"_dragOptions") ) { return ::hx::Val( _dragOptions ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"findAncestor") ) { return ::hx::Val( findAncestor_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideInternal") ) { return ::hx::Val( hideInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"showInternal") ) { return ::hx::Val( showInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"_customStyle") ) { return ::hx::Val( _customStyle ); }
		if (HX_FIELD_EQ(inName,"_styleString") ) { return ::hx::Val( _styleString ); }
		if (HX_FIELD_EQ(inName,"unlockLayout") ) { return ::hx::Val( unlockLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"scriptAccess") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scriptAccess() ); }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderRadius() ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingRight() ); }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginBottom() ); }
		if (HX_FIELD_EQ(inName,"onRightClick") ) { return ::hx::Val( onRightClick ); }
		if (HX_FIELD_EQ(inName,"set_onChange") ) { return ::hx::Val( set_onChange_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_draggable") ) { return ::hx::Val( get_draggable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_draggable") ) { return ::hx::Val( set_draggable_dyn() ); }
		if (HX_FIELD_EQ(inName,"dragInitiator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dragInitiator() ); }
		if (HX_FIELD_EQ(inName,"rootComponent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rootComponent() ); }
		if (HX_FIELD_EQ(inName,"numComponents") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numComponents() ); }
		if (HX_FIELD_EQ(inName,"matchesSearch") ) { return ::hx::Val( matchesSearch_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"cascadeActive") ) { return ::hx::Val( cascadeActive ); }
		if (HX_FIELD_EQ(inName,"removeClasses") ) { return ::hx::Val( removeClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"_scriptAccess") ) { return ::hx::Val( _scriptAccess ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingBottom() ); }
		if (HX_FIELD_EQ(inName,"get_marginTop") ) { return ::hx::Val( get_marginTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginTop") ) { return ::hx::Val( set_marginTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_verticalAlign() ); }
		if (HX_FIELD_EQ(inName,"set_onDragEnd") ) { return ::hx::Val( set_onDragEnd_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return ::hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return ::hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_animatable") ) { return ::hx::Val( get_animatable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animatable") ) { return ::hx::Val( set_animatable_dyn() ); }
		if (HX_FIELD_EQ(inName,"_dragInitiator") ) { return ::hx::Val( _dragInitiator ); }
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"walkComponents") ) { return ::hx::Val( walkComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponents") ) { return ::hx::Val( findComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleNames") ) { return ::hx::Val( get_styleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleNames") ) { return ::hx::Val( set_styleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleSheet") ) { return ::hx::Val( get_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleSheet") ) { return ::hx::Val( set_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_borderSize") ) { return ::hx::Val( get_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return ::hx::Val( set_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return ::hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingTop") ) { return ::hx::Val( set_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_marginLeft") ) { return ::hx::Val( get_marginLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginLeft") ) { return ::hx::Val( set_marginLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAnimationEnd") ) { return ::hx::Val( onAnimationEnd ); }
		if (HX_FIELD_EQ(inName,"set_onMouseOut") ) { return ::hx::Val( set_onMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onDblClick") ) { return ::hx::Val( set_onDblClick_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return ::hx::Val( destroyChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dragOptions") ) { return ::hx::Val( get_dragOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dragOptions") ) { return ::hx::Val( set_dragOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_customStyle") ) { return ::hx::Val( get_customStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customStyle") ) { return ::hx::Val( set_customStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleString") ) { return ::hx::Val( get_styleString_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleString") ) { return ::hx::Val( set_styleString_dyn() ); }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_includeInLayout() ); }
		if (HX_FIELD_EQ(inName,"namedComponents") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_namedComponents() : namedComponents ); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundColor() ); }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundImage() ); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return ::hx::Val( get_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return ::hx::Val( set_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return ::hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingLeft") ) { return ::hx::Val( set_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_marginRight") ) { return ::hx::Val( get_marginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginRight") ) { return ::hx::Val( set_marginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_horizontalAlign() ); }
		if (HX_FIELD_EQ(inName,"set_onDragStart") ) { return ::hx::Val( set_onDragStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onMouseOver") ) { return ::hx::Val( set_onMouseOver_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentAdded") ) { return ::hx::Val( onComponentAdded_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeComponent") ) { return ::hx::Val( disposeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyComponent") ) { return ::hx::Val( destroyComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { return ::hx::Val( _includeInLayout ); }
		if (HX_FIELD_EQ(inName,"get_scriptAccess") ) { return ::hx::Val( get_scriptAccess_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scriptAccess") ) { return ::hx::Val( set_scriptAccess_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_borderRadius") ) { return ::hx::Val( get_borderRadius_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderRadius") ) { return ::hx::Val( set_borderRadius_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return ::hx::Val( set_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_marginBottom") ) { return ::hx::Val( get_marginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginBottom") ) { return ::hx::Val( set_marginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAnimationStart") ) { return ::hx::Val( onAnimationStart ); }
		if (HX_FIELD_EQ(inName,"onAnimationFrame") ) { return ::hx::Val( onAnimationFrame ); }
		if (HX_FIELD_EQ(inName,"set_onRightClick") ) { return ::hx::Val( set_onRightClick_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentTabIndex") ) { return ::hx::Val( componentTabIndex ); }
		if (HX_FIELD_EQ(inName,"_compositeBuilder") ) { return ::hx::Val( _compositeBuilder ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dragInitiator") ) { return ::hx::Val( get_dragInitiator_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dragInitiator") ) { return ::hx::Val( set_dragInitiator_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rootComponent") ) { return ::hx::Val( get_rootComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numComponents") ) { return ::hx::Val( get_numComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"containsComponent") ) { return ::hx::Val( containsComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return ::hx::Val( set_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verticalAlign") ) { return ::hx::Val( get_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return ::hx::Val( set_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onDrag") ) { return ::hx::Val( _internal__onDrag ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"componentAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentAnimation() ); }
		if (HX_FIELD_EQ(inName,"onComponentRemoved") ) { return ::hx::Val( onComponentRemoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundColorEnd() ); }
		if (HX_FIELD_EQ(inName,"set_onAnimationEnd") ) { return ::hx::Val( set_onAnimationEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onClick") ) { return ::hx::Val( _internal__onClick ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_defaultLayoutClass") ) { return ::hx::Val( _defaultLayoutClass ); }
		if (HX_FIELD_EQ(inName,"_componentAnimation") ) { return ::hx::Val( _componentAnimation ); }
		if (HX_FIELD_EQ(inName,"removeAllComponents") ) { return ::hx::Val( removeAllComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_includeInLayout") ) { return ::hx::Val( get_includeInLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_includeInLayout") ) { return ::hx::Val( set_includeInLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_namedComponents") ) { return ::hx::Val( get_namedComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"initializeComponent") ) { return ::hx::Val( initializeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_initialSizeApplied") ) { return ::hx::Val( _initialSizeApplied ); }
		if (HX_FIELD_EQ(inName,"validateInitialSize") ) { return ::hx::Val( validateInitialSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return ::hx::Val( get_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return ::hx::Val( set_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundImage") ) { return ::hx::Val( get_backgroundImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundImage") ) { return ::hx::Val( set_backgroundImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_horizontalAlign") ) { return ::hx::Val( get_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_horizontalAlign") ) { return ::hx::Val( set_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onChange") ) { return ::hx::Val( _internal__onChange ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedStyleSheetRef") ) { return ::hx::Val( _cachedStyleSheetRef ); }
		if (HX_FIELD_EQ(inName,"_internal__onDragEnd") ) { return ::hx::Val( _internal__onDragEnd ); }
		if (HX_FIELD_EQ(inName,"set_onAnimationStart") ) { return ::hx::Val( set_onAnimationStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onAnimationFrame") ) { return ::hx::Val( set_onAnimationFrame_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"assignPositionClasses") ) { return ::hx::Val( assignPositionClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onMouseOut") ) { return ::hx::Val( _internal__onMouseOut ); }
		if (HX_FIELD_EQ(inName,"_internal__onDblClick") ) { return ::hx::Val( _internal__onDblClick ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_compositeBuilderClass") ) { return ::hx::Val( _compositeBuilderClass ); }
		if (HX_FIELD_EQ(inName,"get_componentAnimation") ) { return ::hx::Val( get_componentAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentAnimation") ) { return ::hx::Val( set_componentAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasComponentUnderPoint") ) { return ::hx::Val( hasComponentUnderPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"enforceSizeConstraints") ) { return ::hx::Val( enforceSizeConstraints_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentStyle") ) { return ::hx::Val( validateComponentStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateComponentDisplay") ) { return ::hx::Val( updateComponentDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseUp") ) { return ::hx::Val( onPointerEventsMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyAnimationKeyFrame") ) { return ::hx::Val( applyAnimationKeyFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isComponentClipped") ) { return ::hx::Val( get_isComponentClipped_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundColorEnd") ) { return ::hx::Val( get_backgroundColorEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColorEnd") ) { return ::hx::Val( set_backgroundColorEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onDragStart") ) { return ::hx::Val( _internal__onDragStart ); }
		if (HX_FIELD_EQ(inName,"_internal__onMouseOver") ) { return ::hx::Val( _internal__onMouseOver ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_useCachedStyleSheetRef") ) { return ::hx::Val( _useCachedStyleSheetRef ); }
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseOut") ) { return ::hx::Val( onPointerEventsMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onRightClick") ) { return ::hx::Val( _internal__onRightClick ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findComponentsUnderPoint") ) { return ::hx::Val( findComponentsUnderPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetCachedStyleSheetRef") ) { return ::hx::Val( resetCachedStyleSheetRef_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseOver") ) { return ::hx::Val( onPointerEventsMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseDown") ) { return ::hx::Val( onPointerEventsMouseDown_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"validateComponentPosition") ) { return ::hx::Val( validateComponentPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentAutoSize") ) { return ::hx::Val( validateComponentAutoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationEnd") ) { return ::hx::Val( _internal__onAnimationEnd ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_pauseAnimationStyleChanges") ) { return ::hx::Val( _pauseAnimationStyleChanges ); }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationStart") ) { return ::hx::Val( _internal__onAnimationStart ); }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationFrame") ) { return ::hx::Val( _internal__onAnimationFrame ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Component_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"addNamedComponentsFrom") ) { outValue = addNamedComponentsFrom_dyn(); return true; }
	}
	return false;
}

::hx::Val Component_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clip(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"native") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_native(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast<  ::haxe::ui::core::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hidden") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hidden(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layout(inValue.Cast<  ::haxe::ui::layouts::Layout >()) ); }
		if (HX_FIELD_EQ(inName,"onDrag") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDrag(inValue.Cast<  ::Dynamic >()) );onDrag=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_native") ) { _native=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hidden") ) { _hidden=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classes") ) { classes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cssName") ) { cssName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_padding(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"opacity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_opacity(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onClick(inValue.Cast<  ::Dynamic >()) );onClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onChange") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onChange(inValue.Cast<  ::Dynamic >()) );onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"draggable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_draggable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginTop(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onDragEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDragEnd(inValue.Cast<  ::Dynamic >()) );onDragEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animatable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animatable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"styleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleNames(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleSheet(inValue.Cast<  ::haxe::ui::styles::StyleSheet >()) ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderSize(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingTop(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginLeft(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMouseOut(inValue.Cast<  ::Dynamic >()) );onMouseOut=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDblClick") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDblClick(inValue.Cast<  ::Dynamic >()) );onDblClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animatable") ) { _animatable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dragOptions") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dragOptions(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"bindingRoot") ) { bindingRoot=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"customStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customStyle(inValue.Cast<  ::haxe::ui::styles::Style >()) ); }
		if (HX_FIELD_EQ(inName,"styleString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleString(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_styleSheet") ) { _styleSheet=inValue.Cast<  ::haxe::ui::styles::StyleSheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderColor(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingLeft(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"marginRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginRight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onDragStart") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDragStart(inValue.Cast<  ::Dynamic >()) );onDragStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMouseOver(inValue.Cast<  ::Dynamic >()) );onMouseOver=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_dragOptions") ) { _dragOptions=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_customStyle") ) { _customStyle=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_styleString") ) { _styleString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scriptAccess") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scriptAccess(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderRadius(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingRight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginBottom(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onRightClick") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onRightClick(inValue.Cast<  ::Dynamic >()) );onRightClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dragInitiator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dragInitiator(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		if (HX_FIELD_EQ(inName,"cascadeActive") ) { cascadeActive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scriptAccess") ) { _scriptAccess=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingBottom(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_verticalAlign(inValue.Cast< ::String >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dragInitiator") ) { _dragInitiator=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAnimationEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onAnimationEnd(inValue.Cast<  ::Dynamic >()) );onAnimationEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_includeInLayout(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"namedComponents") ) { namedComponents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColor(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundImage(inValue.Cast<  ::haxe::ui::util::VariantType >()) ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_horizontalAlign(inValue.Cast< ::String >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { _includeInLayout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAnimationStart") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onAnimationStart(inValue.Cast<  ::Dynamic >()) );onAnimationStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAnimationFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onAnimationFrame(inValue.Cast<  ::Dynamic >()) );onAnimationFrame=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentTabIndex") ) { componentTabIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_compositeBuilder") ) { _compositeBuilder=inValue.Cast<  ::haxe::ui::core::CompositeBuilder >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onDrag") ) { _internal__onDrag=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"componentAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentAnimation(inValue.Cast<  ::haxe::ui::styles::animation::Animation >()) ); }
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColorEnd(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_internal__onClick") ) { _internal__onClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_defaultLayoutClass") ) { _defaultLayoutClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_componentAnimation") ) { _componentAnimation=inValue.Cast<  ::haxe::ui::styles::animation::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_initialSizeApplied") ) { _initialSizeApplied=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onChange") ) { _internal__onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedStyleSheetRef") ) { _cachedStyleSheetRef=inValue.Cast<  ::haxe::ui::styles::StyleSheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onDragEnd") ) { _internal__onDragEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_internal__onMouseOut") ) { _internal__onMouseOut=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onDblClick") ) { _internal__onDblClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_compositeBuilderClass") ) { _compositeBuilderClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onDragStart") ) { _internal__onDragStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onMouseOver") ) { _internal__onMouseOver=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_useCachedStyleSheetRef") ) { _useCachedStyleSheetRef=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onRightClick") ) { _internal__onRightClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_internal__onAnimationEnd") ) { _internal__onAnimationEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_pauseAnimationStyleChanges") ) { _pauseAnimationStyleChanges=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationStart") ) { _internal__onAnimationStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationFrame") ) { _internal__onAnimationFrame=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("componentTabIndex",5a,4e,69,2f));
	outFields->push(HX_("_defaultLayoutClass",0c,ba,3b,98));
	outFields->push(HX_("_compositeBuilderClass",05,4f,94,24));
	outFields->push(HX_("_compositeBuilder",33,00,05,49));
	outFields->push(HX_("_native",36,db,93,90));
	outFields->push(HX_("native",97,c9,1c,22));
	outFields->push(HX_("_animatable",fd,6d,52,50));
	outFields->push(HX_("animatable",de,a0,c8,7d));
	outFields->push(HX_("_componentAnimation",a6,e2,8a,82));
	outFields->push(HX_("componentAnimation",87,5e,b0,a2));
	outFields->push(HX_("userData",15,96,28,05));
	outFields->push(HX_("screen",6c,3b,5d,47));
	outFields->push(HX_("draggable",0d,2d,d6,5d));
	outFields->push(HX_("_dragInitiator",5c,32,bf,d6));
	outFields->push(HX_("dragInitiator",1b,42,6d,98));
	outFields->push(HX_("_dragOptions",cb,03,29,fc));
	outFields->push(HX_("dragOptions",ca,55,1f,96));
	outFields->push(HX_("bindingRoot",07,2c,7d,bd));
	outFields->push(HX_("rootComponent",3b,0e,0e,45));
	outFields->push(HX_("numComponents",fc,6a,b6,34));
	outFields->push(HX_("_hidden",09,11,0d,bb));
	outFields->push(HX_("hidden",6a,ff,95,4c));
	outFields->push(HX_("_customStyle",c1,b9,63,7f));
	outFields->push(HX_("customStyle",c0,0b,5a,19));
	outFields->push(HX_("classes",a6,4e,91,69));
	outFields->push(HX_("cascadeActive",1a,89,af,1b));
	outFields->push(HX_("styleNames",d7,e8,7a,16));
	outFields->push(HX_("_styleString",e3,6a,d1,ee));
	outFields->push(HX_("styleString",e2,bc,c7,88));
	outFields->push(HX_("_useCachedStyleSheetRef",9b,74,e6,1d));
	outFields->push(HX_("_cachedStyleSheetRef",04,98,8d,3e));
	outFields->push(HX_("_styleSheet",cd,08,a0,ce));
	outFields->push(HX_("styleSheet",ae,3b,16,fc));
	outFields->push(HX_("_includeInLayout",38,5d,a5,59));
	outFields->push(HX_("includeInLayout",b7,1a,c6,6e));
	outFields->push(HX_("layout",aa,ae,b8,58));
	outFields->push(HX_("_scriptAccess",ee,84,04,85));
	outFields->push(HX_("scriptAccess",0f,f2,95,a2));
	outFields->push(HX_("namedComponents",2f,8a,f8,12));
	outFields->push(HX_("_initialSizeApplied",77,94,44,c2));
	outFields->push(HX_("_pauseAnimationStyleChanges",3f,a9,c7,6f));
	outFields->push(HX_("cssName",ae,bf,c4,7a));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("backgroundColorEnd",46,f8,6e,2a));
	outFields->push(HX_("backgroundImage",8d,fc,53,80));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("borderRadius",5e,0a,30,0e));
	outFields->push(HX_("padding",d1,59,7d,d0));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("marginLeft",55,53,dd,84));
	outFields->push(HX_("marginRight",ce,a4,d8,33));
	outFields->push(HX_("marginTop",07,7f,40,ee));
	outFields->push(HX_("marginBottom",b9,21,0a,41));
	outFields->push(HX_("clip",d0,6e,c2,41));
	outFields->push(HX_("opacity",cb,5d,65,eb));
	outFields->push(HX_("horizontalAlign",41,8f,67,f4));
	outFields->push(HX_("verticalAlign",6f,1e,7c,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Component_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Component_obj,componentTabIndex),HX_("componentTabIndex",5a,4e,69,2f)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Component_obj,_defaultLayoutClass),HX_("_defaultLayoutClass",0c,ba,3b,98)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Component_obj,_compositeBuilderClass),HX_("_compositeBuilderClass",05,4f,94,24)},
	{::hx::fsObject /*  ::haxe::ui::core::CompositeBuilder */ ,(int)offsetof(Component_obj,_compositeBuilder),HX_("_compositeBuilder",33,00,05,49)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_native),HX_("_native",36,db,93,90)},
	{::hx::fsBool,(int)offsetof(Component_obj,_animatable),HX_("_animatable",fd,6d,52,50)},
	{::hx::fsObject /*  ::haxe::ui::styles::animation::Animation */ ,(int)offsetof(Component_obj,_componentAnimation),HX_("_componentAnimation",a6,e2,8a,82)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,userData),HX_("userData",15,96,28,05)},
	{::hx::fsObject /*  ::haxe::ui::core::Screen */ ,(int)offsetof(Component_obj,screen),HX_("screen",6c,3b,5d,47)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(Component_obj,_dragInitiator),HX_("_dragInitiator",5c,32,bf,d6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_dragOptions),HX_("_dragOptions",cb,03,29,fc)},
	{::hx::fsBool,(int)offsetof(Component_obj,bindingRoot),HX_("bindingRoot",07,2c,7d,bd)},
	{::hx::fsBool,(int)offsetof(Component_obj,_hidden),HX_("_hidden",09,11,0d,bb)},
	{::hx::fsObject /*  ::haxe::ui::styles::Style */ ,(int)offsetof(Component_obj,_customStyle),HX_("_customStyle",c1,b9,63,7f)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Component_obj,classes),HX_("classes",a6,4e,91,69)},
	{::hx::fsBool,(int)offsetof(Component_obj,cascadeActive),HX_("cascadeActive",1a,89,af,1b)},
	{::hx::fsString,(int)offsetof(Component_obj,_styleString),HX_("_styleString",e3,6a,d1,ee)},
	{::hx::fsBool,(int)offsetof(Component_obj,_useCachedStyleSheetRef),HX_("_useCachedStyleSheetRef",9b,74,e6,1d)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleSheet */ ,(int)offsetof(Component_obj,_cachedStyleSheetRef),HX_("_cachedStyleSheetRef",04,98,8d,3e)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleSheet */ ,(int)offsetof(Component_obj,_styleSheet),HX_("_styleSheet",cd,08,a0,ce)},
	{::hx::fsBool,(int)offsetof(Component_obj,_includeInLayout),HX_("_includeInLayout",38,5d,a5,59)},
	{::hx::fsBool,(int)offsetof(Component_obj,_scriptAccess),HX_("_scriptAccess",ee,84,04,85)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Component_obj,namedComponents),HX_("namedComponents",2f,8a,f8,12)},
	{::hx::fsBool,(int)offsetof(Component_obj,_initialSizeApplied),HX_("_initialSizeApplied",77,94,44,c2)},
	{::hx::fsBool,(int)offsetof(Component_obj,_pauseAnimationStyleChanges),HX_("_pauseAnimationStyleChanges",3f,a9,c7,6f)},
	{::hx::fsString,(int)offsetof(Component_obj,cssName),HX_("cssName",ae,bf,c4,7a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onDragStart),HX_("_internal__onDragStart",73,b7,cb,0f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onDragStart),HX_("onDragStart",af,c6,a3,08)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onDrag),HX_("_internal__onDrag",6f,fa,df,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onDrag),HX_("onDrag",b3,34,fa,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onDragEnd),HX_("_internal__onDragEnd",ac,b0,6b,05)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onDragEnd),HX_("onDragEnd",e8,38,e4,c8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onAnimationStart),HX_("_internal__onAnimationStart",f9,dc,89,50)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onAnimationStart),HX_("onAnimationStart",3d,14,85,a0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onAnimationFrame),HX_("_internal__onAnimationFrame",c4,e0,01,d3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onAnimationFrame),HX_("onAnimationFrame",08,18,fd,22)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onAnimationEnd),HX_("_internal__onAnimationEnd",b2,48,0f,a4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onAnimationEnd),HX_("onAnimationEnd",f6,66,13,d4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onClick),HX_("_internal__onClick",6d,59,c3,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onClick),HX_("onClick",a9,1a,9c,de)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onMouseOver),HX_("_internal__onMouseOver",be,1d,78,1f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onMouseOver),HX_("onMouseOver",fa,2c,50,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onMouseOut),HX_("_internal__onMouseOut",64,0f,d6,3b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onMouseOut),HX_("onMouseOut",a8,bb,d4,81)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onDblClick),HX_("_internal__onDblClick",35,16,bb,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onDblClick),HX_("onDblClick",79,c2,b9,2a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onRightClick),HX_("_internal__onRightClick",87,bf,31,5f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onRightClick),HX_("onRightClick",cb,04,67,23)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onChange),HX_("_internal__onChange",ab,34,4f,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Component_obj_sStaticStorageInfo = 0;
#endif

static ::String Component_obj_sMemberFields[] = {
	HX_("componentTabIndex",5a,4e,69,2f),
	HX_("_defaultLayoutClass",0c,ba,3b,98),
	HX_("create",fc,66,0f,7c),
	HX_("_compositeBuilderClass",05,4f,94,24),
	HX_("_compositeBuilder",33,00,05,49),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("createChildren",5b,98,a4,c2),
	HX_("destroyChildren",59,8c,6e,e2),
	HX_("createLayout",c6,ee,0d,7b),
	HX_("_native",36,db,93,90),
	HX_("get_native",60,39,a4,12),
	HX_("set_native",d4,d7,21,16),
	HX_("_animatable",fd,6d,52,50),
	HX_("get_animatable",27,29,be,f3),
	HX_("set_animatable",9b,11,de,13),
	HX_("_componentAnimation",a6,e2,8a,82),
	HX_("get_componentAnimation",d0,d7,44,fc),
	HX_("set_componentAnimation",44,54,f0,2f),
	HX_("userData",15,96,28,05),
	HX_("screen",6c,3b,5d,47),
	HX_("get_screen",35,ab,e4,37),
	HX_("get_draggable",e4,00,3a,1f),
	HX_("set_draggable",f0,e2,3f,64),
	HX_("_dragInitiator",5c,32,bf,d6),
	HX_("get_dragInitiator",72,4d,dd,9e),
	HX_("set_dragInitiator",7e,25,4b,c2),
	HX_("_dragOptions",cb,03,29,fc),
	HX_("get_dragOptions",61,0d,01,57),
	HX_("set_dragOptions",6d,8a,cc,52),
	HX_("bindingRoot",07,2c,7d,bd),
	HX_("get_rootComponent",92,19,7e,4b),
	HX_("get_numComponents",53,76,26,3b),
	HX_("addComponent",5c,12,a8,0e),
	HX_("containsComponent",9e,ba,74,14),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("onComponentAdded",42,94,a0,77),
	HX_("removeComponent",d9,8b,72,50),
	HX_("disposeComponent",1e,c4,8a,d6),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("onComponentRemoved",a2,43,ad,6e),
	HX_("assignPositionClasses",8e,3b,25,b1),
	HX_("destroyComponent",63,34,34,61),
	HX_("onDestroy",9b,e5,30,fc),
	HX_("walkComponents",7f,1b,0a,d7),
	HX_("removeAllComponents",b3,1e,97,3c),
	HX_("matchesSearch",bb,08,bd,e6),
	HX_("findComponent",44,b1,05,f0),
	HX_("findComponents",af,6a,f5,14),
	HX_("findAncestor",ac,71,fd,80),
	HX_("findComponentsUnderPoint",a7,db,36,14),
	HX_("hasComponentUnderPoint",fb,37,b6,57),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("hide",c2,34,0e,45),
	HX_("hideInternal",1f,ea,7b,e9),
	HX_("show",fd,d4,52,4c),
	HX_("showInternal",5a,bd,03,54),
	HX_("fadeIn",81,4c,ab,e4),
	HX_("fadeOut",72,38,3c,31),
	HX_("_hidden",09,11,0d,bb),
	HX_("get_hidden",33,6f,1d,3d),
	HX_("set_hidden",a7,0d,9b,40),
	HX_("_customStyle",c1,b9,63,7f),
	HX_("get_customStyle",57,c3,3b,da),
	HX_("set_customStyle",63,40,07,d6),
	HX_("classes",a6,4e,91,69),
	HX_("cascadeActive",1a,89,af,1b),
	HX_("addClass",57,9e,b5,c1),
	HX_("addClasses",85,7a,1b,d1),
	HX_("removeClass",54,55,8c,46),
	HX_("removeClasses",c2,aa,4b,42),
	HX_("hasClass",7e,c2,b0,d4),
	HX_("swapClass",a5,88,05,be),
	HX_("get_styleNames",20,71,70,8c),
	HX_("set_styleNames",94,59,90,ac),
	HX_("_styleString",e3,6a,d1,ee),
	HX_("get_styleString",79,74,a9,49),
	HX_("set_styleString",85,f1,74,45),
	HX_("_useCachedStyleSheetRef",9b,74,e6,1d),
	HX_("_cachedStyleSheetRef",04,98,8d,3e),
	HX_("_styleSheet",cd,08,a0,ce),
	HX_("get_styleSheet",f7,c3,0b,72),
	HX_("set_styleSheet",6b,ac,2b,92),
	HX_("resetCachedStyleSheetRef",74,6c,1c,92),
	HX_("_includeInLayout",38,5d,a5,59),
	HX_("get_includeInLayout",ce,e9,d0,f9),
	HX_("set_includeInLayout",da,dc,6d,36),
	HX_("get_layout",73,1e,40,49),
	HX_("set_layout",e7,bc,bd,4c),
	HX_("lockLayout",f5,00,5f,a3),
	HX_("unlockLayout",8e,30,6e,0f),
	HX_("ready",63,a0,ba,e6),
	HX_("onReady",c4,3e,f8,7c),
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("onResized",91,14,1e,3b),
	HX_("onMoved",94,6a,a3,a2),
	HX_("_scriptAccess",ee,84,04,85),
	HX_("get_scriptAccess",98,de,34,a7),
	HX_("set_scriptAccess",0c,cc,76,fd),
	HX_("namedComponents",2f,8a,f8,12),
	HX_("get_namedComponents",46,59,03,9e),
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("initializeComponent",4d,f5,42,2d),
	HX_("_initialSizeApplied",77,94,44,c2),
	HX_("validateInitialSize",6f,72,e3,cb),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("enforceSizeConstraints",73,87,ee,02),
	HX_("validateComponentStyle",6a,56,d9,e6),
	HX_("validateComponentPosition",10,b9,90,b3),
	HX_("updateComponentDisplay",2e,67,62,d4),
	HX_("validateComponentAutoSize",37,a8,0f,18),
	HX_("_pauseAnimationStyleChanges",3f,a9,c7,6f),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("onPointerEventsMouseOver",02,78,d8,8a),
	HX_("onPointerEventsMouseOut",a0,a9,3c,6a),
	HX_("onPointerEventsMouseDown",10,df,8d,83),
	HX_("onPointerEventsMouseUp",89,a5,6f,17),
	HX_("applyAnimationKeyFrame",e4,ab,95,4d),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("get_isComponentClipped",15,26,75,f8),
	HX_("cssName",ae,bf,c4,7a),
	HX_("get_cssName",c5,1f,bf,00),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_backgroundColor",ac,1d,52,98),
	HX_("set_backgroundColor",b8,10,ef,d4),
	HX_("get_backgroundColorEnd",8f,71,03,84),
	HX_("set_backgroundColorEnd",03,ee,ae,b7),
	HX_("get_backgroundImage",a4,cb,5e,0b),
	HX_("set_backgroundImage",b0,be,fb,47),
	HX_("get_borderColor",6e,f4,b6,97),
	HX_("set_borderColor",7a,71,82,93),
	HX_("get_borderSize",16,88,e3,7c),
	HX_("set_borderSize",8a,70,03,9d),
	HX_("get_borderRadius",e7,f6,ce,12),
	HX_("set_borderRadius",5b,e4,10,69),
	HX_("get_padding",e8,b9,77,56),
	HX_("set_padding",f4,c0,e4,60),
	HX_("get_paddingLeft",0f,02,c8,46),
	HX_("set_paddingLeft",1b,7f,93,42),
	HX_("get_paddingRight",d4,d8,46,1f),
	HX_("set_paddingRight",48,c6,88,75),
	HX_("get_paddingTop",8d,85,fb,af),
	HX_("set_paddingTop",01,6e,1b,d0),
	HX_("get_paddingBottom",f3,72,09,56),
	HX_("set_paddingBottom",ff,4a,77,79),
	HX_("get_marginLeft",9e,db,d2,fa),
	HX_("set_marginLeft",12,c4,f2,1a),
	HX_("get_marginRight",65,5c,ba,f4),
	HX_("set_marginRight",71,d9,85,f0),
	HX_("get_marginTop",de,52,a4,af),
	HX_("set_marginTop",ea,34,aa,f4),
	HX_("get_marginBottom",42,0e,a9,45),
	HX_("set_marginBottom",b6,fb,ea,9b),
	HX_("get_clip",59,2a,7d,c1),
	HX_("set_clip",cd,83,da,6f),
	HX_("get_opacity",e2,bd,5f,71),
	HX_("set_opacity",ee,c4,cc,7b),
	HX_("get_horizontalAlign",58,5e,72,7f),
	HX_("set_horizontalAlign",64,51,0f,bc),
	HX_("get_verticalAlign",c6,29,ec,ea),
	HX_("set_verticalAlign",d2,01,5a,0e),
	HX_("self",8c,8b,50,4c),
	HX_("_internal__onDragStart",73,b7,cb,0f),
	HX_("onDragStart",af,c6,a3,08),
	HX_("set_onDragStart",52,fb,50,c5),
	HX_("_internal__onDrag",6f,fa,df,18),
	HX_("onDrag",b3,34,fa,e4),
	HX_("set_onDrag",f0,42,ff,d8),
	HX_("_internal__onDragEnd",ac,b0,6b,05),
	HX_("onDragEnd",e8,38,e4,c8),
	HX_("set_onDragEnd",cb,ee,4d,cf),
	HX_("_internal__onAnimationStart",f9,dc,89,50),
	HX_("onAnimationStart",3d,14,85,a0),
	HX_("set_onAnimationStart",ba,30,a7,8b),
	HX_("_internal__onAnimationFrame",c4,e0,01,d3),
	HX_("onAnimationFrame",08,18,fd,22),
	HX_("set_onAnimationFrame",85,34,1f,0e),
	HX_("_internal__onAnimationEnd",b2,48,0f,a4),
	HX_("onAnimationEnd",f6,66,13,d4),
	HX_("set_onAnimationEnd",33,7a,5c,4c),
	HX_("_internal__onClick",6d,59,c3,13),
	HX_("onClick",a9,1a,9c,de),
	HX_("set_onClick",cc,81,03,6f),
	HX_("_internal__onMouseOver",be,1d,78,1f),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("set_onMouseOver",9d,61,fd,d4),
	HX_("_internal__onMouseOut",64,0f,d6,3b),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("set_onMouseOut",65,2c,ea,17),
	HX_("_internal__onDblClick",35,16,bb,e4),
	HX_("onDblClick",79,c2,b9,2a),
	HX_("set_onDblClick",36,33,cf,c0),
	HX_("_internal__onRightClick",87,bf,31,5f),
	HX_("onRightClick",cb,04,67,23),
	HX_("set_onRightClick",c8,de,47,7e),
	HX_("_internal__onChange",ab,34,4f,e4),
	HX_("onChange",ef,87,1f,97),
	HX_("set_onChange",6c,5f,32,61),
	::String(null()) };

::hx::Class Component_obj::__mClass;

static ::String Component_obj_sStaticFields[] = {
	HX_("addNamedComponentsFrom",98,9d,c2,1f),
	::String(null())
};

void Component_obj::__register()
{
	Component_obj _hx_dummy;
	Component_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.Component",60,d3,76,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Component_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Component_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Component_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Component_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Component_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Component_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Component_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_41_boot)
HXDLIN(  41)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("styleString",e2,bc,c7,88), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())))
            				->setFixed(1,HX_("styleNames",d7,e8,7a,16), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
