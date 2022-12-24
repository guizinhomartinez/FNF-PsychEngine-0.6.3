#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
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
#ifndef INCLUDED_haxe_ui_events_ThemeEvent
#include <haxe/ui/events/ThemeEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_8_new,"haxe.ui.themes.ThemeManager","new",0x36faac48,"haxe.ui.themes.ThemeManager.new","haxe/ui/themes/ThemeManager.hx",8,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_29_registerEvent,"haxe.ui.themes.ThemeManager","registerEvent",0xbca5589f,"haxe.ui.themes.ThemeManager.registerEvent","haxe/ui/themes/ThemeManager.hx",29,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_37_unregisterEvent,"haxe.ui.themes.ThemeManager","unregisterEvent",0xa21c78a6,"haxe.ui.themes.ThemeManager.unregisterEvent","haxe/ui/themes/ThemeManager.hx",37,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_45_dispatch,"haxe.ui.themes.ThemeManager","dispatch",0xf8cec9d2,"haxe.ui.themes.ThemeManager.dispatch","haxe/ui/themes/ThemeManager.hx",45,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_53_getTheme,"haxe.ui.themes.ThemeManager","getTheme",0x49c888ab,"haxe.ui.themes.ThemeManager.getTheme","haxe/ui/themes/ThemeManager.hx",53,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_63_addStyleResource,"haxe.ui.themes.ThemeManager","addStyleResource",0x1a808756,"haxe.ui.themes.ThemeManager.addStyleResource","haxe/ui/themes/ThemeManager.hx",63,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_70_setThemeVar,"haxe.ui.themes.ThemeManager","setThemeVar",0x63f29208,"haxe.ui.themes.ThemeManager.setThemeVar","haxe/ui/themes/ThemeManager.hx",70,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_79_setCurrentThemeVar,"haxe.ui.themes.ThemeManager","setCurrentThemeVar",0x8604194d,"haxe.ui.themes.ThemeManager.setCurrentThemeVar","haxe/ui/themes/ThemeManager.hx",79,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_83_addImageResource,"haxe.ui.themes.ThemeManager","addImageResource",0xbe713b80,"haxe.ui.themes.ThemeManager.addImageResource","haxe/ui/themes/ThemeManager.hx",83,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_110_applyTheme,"haxe.ui.themes.ThemeManager","applyTheme",0x4249ead3,"haxe.ui.themes.ThemeManager.applyTheme","haxe/ui/themes/ThemeManager.hx",110,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_124_applyTheme,"haxe.ui.themes.ThemeManager","applyTheme",0x4249ead3,"haxe.ui.themes.ThemeManager.applyTheme","haxe/ui/themes/ThemeManager.hx",124,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_92_applyTheme,"haxe.ui.themes.ThemeManager","applyTheme",0x4249ead3,"haxe.ui.themes.ThemeManager.applyTheme","haxe/ui/themes/ThemeManager.hx",92,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_140_applyResource,"haxe.ui.themes.ThemeManager","applyResource",0xa44d8a44,"haxe.ui.themes.ThemeManager.applyResource","haxe/ui/themes/ThemeManager.hx",140,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_161_addStyleString,"haxe.ui.themes.ThemeManager","addStyleString",0x15fb2159,"haxe.ui.themes.ThemeManager.addStyleString","haxe/ui/themes/ThemeManager.hx",161,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_164_buildThemeVars,"haxe.ui.themes.ThemeManager","buildThemeVars",0xa24d9a5f,"haxe.ui.themes.ThemeManager.buildThemeVars","haxe/ui/themes/ThemeManager.hx",164,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_179_buildThemeEntries,"haxe.ui.themes.ThemeManager","buildThemeEntries",0xaba4b07d,"haxe.ui.themes.ThemeManager.buildThemeEntries","haxe/ui/themes/ThemeManager.hx",179,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_193_buildThemeImages,"haxe.ui.themes.ThemeManager","buildThemeImages",0xaf96122b,"haxe.ui.themes.ThemeManager.buildThemeImages","haxe/ui/themes/ThemeManager.hx",193,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_210_image,"haxe.ui.themes.ThemeManager","image",0x106cc543,"haxe.ui.themes.ThemeManager.image","haxe/ui/themes/ThemeManager.hx",210,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_219_icon,"haxe.ui.themes.ThemeManager","icon",0xe10c7691,"haxe.ui.themes.ThemeManager.icon","haxe/ui/themes/ThemeManager.hx",219,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_11_get_instance,"haxe.ui.themes.ThemeManager","get_instance",0xcb9d3ab6,"haxe.ui.themes.ThemeManager.get_instance","haxe/ui/themes/ThemeManager.hx",11,0xab3ecbe7)
namespace haxe{
namespace ui{
namespace themes{

void ThemeManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_8_new)
HXLINE(  90)		this->currentThemeVars =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  23)		this->_eventMap = null();
HXLINE(  26)		this->_themes =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ThemeManager_obj::__CreateEmpty() { return new ThemeManager_obj; }

void *ThemeManager_obj::_hx_vtable = 0;

Dynamic ThemeManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ThemeManager_obj > _hx_result = new ThemeManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ThemeManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d58af48;
}

void ThemeManager_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_29_registerEvent)
HXLINE(  30)		if (::hx::IsNull( this->_eventMap )) {
HXLINE(  31)			this->_eventMap =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  34)		this->_eventMap->add(type,listener,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(ThemeManager_obj,registerEvent,(void))

void ThemeManager_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_37_unregisterEvent)
HXLINE(  38)		if (::hx::IsNull( this->_eventMap )) {
HXLINE(  39)			return;
            		}
HXLINE(  42)		this->_eventMap->remove(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThemeManager_obj,unregisterEvent,(void))

void ThemeManager_obj::dispatch( ::haxe::ui::events::ThemeEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_45_dispatch)
HXLINE(  46)		if (::hx::IsNull( this->_eventMap )) {
HXLINE(  47)			return;
            		}
HXLINE(  50)		 ::haxe::ui::util::EventMap _hx_tmp = this->_eventMap;
HXDLIN(  50)		::String event1 = event->type;
HXDLIN(  50)		_hx_tmp->invoke(event1, ::haxe::ui::events::ThemeEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ThemeEvent_obj::THEME_CHANGED,null(),null()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,dispatch,(void))

 ::haxe::ui::themes::Theme ThemeManager_obj::getTheme(::String themeName){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_53_getTheme)
HXLINE(  54)		 ::haxe::ui::themes::Theme theme = ( ( ::haxe::ui::themes::Theme)(this->_themes->get(themeName)) );
HXLINE(  55)		if (::hx::IsNull( theme )) {
HXLINE(  56)			theme =  ::haxe::ui::themes::Theme_obj::__alloc( HX_CTX );
HXLINE(  57)			this->_themes->set(themeName,theme);
            		}
HXLINE(  59)		return theme;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,getTheme,return )

void ThemeManager_obj::addStyleResource(::String themeName,::String resourceId,::hx::Null< Float >  __o_priority,::String styleData){
            		Float priority = __o_priority.Default(0);
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_63_addStyleResource)
HXDLIN(  63)		this->getTheme(themeName)->styles->push( ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("priority",64,7b,3e,bb),priority)
            			->setFixed(1,HX_("styleData",fb,13,33,d8),styleData)
            			->setFixed(2,HX_("resourceId",49,ec,0b,41),resourceId)));
            	}


HX_DEFINE_DYNAMIC_FUNC4(ThemeManager_obj,addStyleResource,(void))

void ThemeManager_obj::setThemeVar(::String themeName,::String varName,::String varValue){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_70_setThemeVar)
HXLINE(  71)		 ::haxe::ui::themes::Theme theme = this->getTheme(themeName);
HXLINE(  72)		if (::hx::IsNull( theme )) {
HXLINE(  73)			return;
            		}
HXLINE(  75)		theme->vars->set(varName,varValue);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ThemeManager_obj,setThemeVar,(void))

void ThemeManager_obj::setCurrentThemeVar(::String varName,::String varValue){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_79_setCurrentThemeVar)
HXDLIN(  79)		this->setThemeVar(::haxe::ui::Toolkit_obj::get_theme(),varName,varValue);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThemeManager_obj,setCurrentThemeVar,(void))

void ThemeManager_obj::addImageResource(::String themeName,::String id,::String resourceId,::hx::Null< Float >  __o_priority){
            		Float priority = __o_priority.Default(0);
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_83_addImageResource)
HXDLIN(  83)		this->getTheme(themeName)->images->push( ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("priority",64,7b,3e,bb),priority)
            			->setFixed(1,HX_("id",db,5b,00,00),id)
            			->setFixed(2,HX_("resourceId",49,ec,0b,41),resourceId)));
            	}


HX_DEFINE_DYNAMIC_FUNC4(ThemeManager_obj,addImageResource,(void))

void ThemeManager_obj::applyTheme(::String themeName){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::Dynamic a, ::Dynamic b){
            			HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_110_applyTheme)
HXLINE( 111)			if (::hx::IsLess( a->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic),b->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic) )) {
HXLINE( 111)				return -1;
            			}
            			else {
HXLINE( 112)				if (::hx::IsGreater( a->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic),b->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic) )) {
HXLINE( 112)					return 1;
            				}
            			}
HXLINE( 113)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            		int _hx_run( ::Dynamic a, ::Dynamic b){
            			HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_124_applyTheme)
HXLINE( 125)			if (::hx::IsLess( a->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic),b->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic) )) {
HXLINE( 125)				return -1;
            			}
            			else {
HXLINE( 126)				if (::hx::IsGreater( a->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic),b->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic) )) {
HXLINE( 126)					return 1;
            				}
            			}
HXLINE( 127)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_92_applyTheme)
HXLINE(  93)		::haxe::ui::Toolkit_obj::styleSheet->clear(HX_("default",c1,d8,c3,9b));
HXLINE(  96)		 ::haxe::ds::StringMap finalVars =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  97)		this->buildThemeVars(HX_("global",63,31,b2,a7),finalVars);
HXLINE(  98)		this->buildThemeVars(themeName,finalVars);
HXLINE(  99)		this->currentThemeVars =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 100)		{
HXLINE( 100)			 ::Dynamic k = finalVars->keys();
HXDLIN( 100)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 100)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 101)				{
HXLINE( 101)					::Dynamic this1 = this->currentThemeVars;
HXDLIN( 101)					( ( ::haxe::ds::StringMap)(this1) )->set(k1,finalVars->get_string(k1));
            				}
            			}
            		}
HXLINE( 106)		::Array< ::Dynamic> entries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 107)		this->buildThemeEntries(HX_("global",63,31,b2,a7),entries);
HXLINE( 108)		this->buildThemeEntries(themeName,entries);
HXLINE( 110)		::haxe::ds::ArraySort_obj::sort(entries, ::Dynamic(new _hx_Closure_0()));
HXLINE( 116)		{
HXLINE( 116)			int _g = 0;
HXDLIN( 116)			while((_g < entries->length)){
HXLINE( 116)				 ::Dynamic e = entries->__get(_g);
HXDLIN( 116)				_g = (_g + 1);
HXLINE( 117)				this->applyResource(( (::String)(e->__Field(HX_("resourceId",49,ec,0b,41),::hx::paccDynamic)) ),( (::String)(e->__Field(HX_("styleData",fb,13,33,d8),::hx::paccDynamic)) ));
            			}
            		}
HXLINE( 121)		::Array< ::Dynamic> images = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 122)		this->buildThemeImages(HX_("global",63,31,b2,a7),images);
HXLINE( 123)		this->buildThemeImages(themeName,images);
HXLINE( 124)		::haxe::ds::ArraySort_obj::sort(images, ::Dynamic(new _hx_Closure_1()));
HXLINE( 130)		{
HXLINE( 130)			int _g1 = 0;
HXDLIN( 130)			while((_g1 < images->length)){
HXLINE( 130)				 ::Dynamic i = images->__get(_g1);
HXDLIN( 130)				_g1 = (_g1 + 1);
HXLINE( 131)				if (::hx::IsNull( this->_themeImages )) {
HXLINE( 132)					this->_themeImages =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            				}
HXLINE( 134)				this->_themeImages->set(( (::String)(i->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),i);
            			}
            		}
HXLINE( 137)		this->dispatch( ::haxe::ui::events::ThemeEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ThemeEvent_obj::THEME_CHANGED,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,applyTheme,(void))

void ThemeManager_obj::applyResource(::String resourceId,::String styleData){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_140_applyResource)
HXLINE( 141)		::String style = HX_("",00,00,00,00);
HXLINE( 142)		if (::hx::IsNotNull( resourceId )) {
HXLINE( 143)			style = ::haxe::ui::Toolkit_obj::get_assets()->getText(resourceId);
            		}
HXLINE( 145)		if (::hx::IsNotNull( styleData )) {
HXLINE( 146)			if (::hx::IsNull( style )) {
HXLINE( 147)				style = HX_("",00,00,00,00);
            			}
HXLINE( 149)			style = (style + (HX_("\n",0a,00,00,00) + styleData));
            		}
HXLINE( 151)		if (::hx::IsNotNull( style )) {
HXLINE( 152)			this->addStyleString(style);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThemeManager_obj,applyResource,(void))

void ThemeManager_obj::addStyleString(::String style){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_161_addStyleString)
HXDLIN( 161)		::haxe::ui::Toolkit_obj::styleSheet->parse(style,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,addStyleString,(void))

void ThemeManager_obj::buildThemeVars(::String themeName, ::haxe::ds::StringMap vars){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_164_buildThemeVars)
HXLINE( 165)		 ::haxe::ui::themes::Theme theme = ( ( ::haxe::ui::themes::Theme)(this->_themes->get(themeName)) );
HXLINE( 166)		if (::hx::IsNull( theme )) {
HXLINE( 167)			return;
            		}
HXLINE( 169)		if (::hx::IsNotNull( theme->parent )) {
HXLINE( 170)			this->buildThemeVars(theme->parent,vars);
            		}
HXLINE( 173)		{
HXLINE( 173)			 ::Dynamic k = theme->vars->keys();
HXDLIN( 173)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 173)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 174)				::String v = theme->vars->get_string(k1);
HXLINE( 175)				vars->set(k1,v);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThemeManager_obj,buildThemeVars,(void))

void ThemeManager_obj::buildThemeEntries(::String themeName,::Array< ::Dynamic> arr){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_179_buildThemeEntries)
HXLINE( 180)		 ::haxe::ui::themes::Theme theme = ( ( ::haxe::ui::themes::Theme)(this->_themes->get(themeName)) );
HXLINE( 181)		if (::hx::IsNull( theme )) {
HXLINE( 182)			return;
            		}
HXLINE( 184)		if (::hx::IsNotNull( theme->parent )) {
HXLINE( 185)			this->buildThemeEntries(theme->parent,arr);
            		}
HXLINE( 188)		{
HXLINE( 188)			int _g = 0;
HXDLIN( 188)			::Array< ::Dynamic> _g1 = theme->styles;
HXDLIN( 188)			while((_g < _g1->length)){
HXLINE( 188)				 ::Dynamic s = _g1->__get(_g);
HXDLIN( 188)				_g = (_g + 1);
HXLINE( 189)				arr->push(s);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThemeManager_obj,buildThemeEntries,(void))

void ThemeManager_obj::buildThemeImages(::String themeName,::Array< ::Dynamic> arr){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_193_buildThemeImages)
HXLINE( 194)		 ::haxe::ui::themes::Theme theme = ( ( ::haxe::ui::themes::Theme)(this->_themes->get(themeName)) );
HXLINE( 195)		if (::hx::IsNull( theme )) {
HXLINE( 196)			return;
            		}
HXLINE( 198)		if (::hx::IsNotNull( theme->parent )) {
HXLINE( 199)			this->buildThemeImages(theme->parent,arr);
            		}
HXLINE( 202)		{
HXLINE( 202)			int _g = 0;
HXDLIN( 202)			::Array< ::Dynamic> _g1 = theme->images;
HXDLIN( 202)			while((_g < _g1->length)){
HXLINE( 202)				 ::Dynamic s = _g1->__get(_g);
HXDLIN( 202)				_g = (_g + 1);
HXLINE( 203)				arr->push(s);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThemeManager_obj,buildThemeImages,(void))

::String ThemeManager_obj::image(::String id){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_210_image)
HXLINE( 211)		 ::Dynamic image = this->_themeImages->get(id);
HXLINE( 212)		if (::hx::IsNull( image )) {
HXLINE( 213)			return null();
            		}
HXLINE( 215)		return ( (::String)(image->__Field(HX_("resourceId",49,ec,0b,41),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,image,return )

::String ThemeManager_obj::icon(::String id){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_219_icon)
HXDLIN( 219)		return this->image(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,icon,return )

 ::haxe::ui::themes::ThemeManager ThemeManager_obj::_instance;

 ::haxe::ui::themes::ThemeManager ThemeManager_obj::instance;

 ::haxe::ui::themes::ThemeManager ThemeManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_11_get_instance)
HXLINE(  12)		if (::hx::IsNull( ::haxe::ui::themes::ThemeManager_obj::_instance )) {
HXLINE(  13)			::haxe::ui::themes::ThemeManager_obj::_instance =  ::haxe::ui::themes::ThemeManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  15)		return ::haxe::ui::themes::ThemeManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ThemeManager_obj,get_instance,return )


::hx::ObjectPtr< ThemeManager_obj > ThemeManager_obj::__new() {
	::hx::ObjectPtr< ThemeManager_obj > __this = new ThemeManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ThemeManager_obj > ThemeManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ThemeManager_obj *__this = (ThemeManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ThemeManager_obj), true, "haxe.ui.themes.ThemeManager"));
	*(void **)__this = ThemeManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ThemeManager_obj::ThemeManager_obj()
{
}

void ThemeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThemeManager);
	HX_MARK_MEMBER_NAME(_themes,"_themes");
	HX_MARK_MEMBER_NAME(_themeImages,"_themeImages");
	HX_MARK_MEMBER_NAME(_eventMap,"_eventMap");
	HX_MARK_MEMBER_NAME(currentThemeVars,"currentThemeVars");
	HX_MARK_END_CLASS();
}

void ThemeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_themes,"_themes");
	HX_VISIT_MEMBER_NAME(_themeImages,"_themeImages");
	HX_VISIT_MEMBER_NAME(_eventMap,"_eventMap");
	HX_VISIT_MEMBER_NAME(currentThemeVars,"currentThemeVars");
}

::hx::Val ThemeManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return ::hx::Val( icon_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_themes") ) { return ::hx::Val( _themes ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTheme") ) { return ::hx::Val( getTheme_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { return ::hx::Val( _eventMap ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyTheme") ) { return ::hx::Val( applyTheme_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setThemeVar") ) { return ::hx::Val( setThemeVar_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_themeImages") ) { return ::hx::Val( _themeImages ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyResource") ) { return ::hx::Val( applyResource_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addStyleString") ) { return ::hx::Val( addStyleString_dyn() ); }
		if (HX_FIELD_EQ(inName,"buildThemeVars") ) { return ::hx::Val( buildThemeVars_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addStyleResource") ) { return ::hx::Val( addStyleResource_dyn() ); }
		if (HX_FIELD_EQ(inName,"addImageResource") ) { return ::hx::Val( addImageResource_dyn() ); }
		if (HX_FIELD_EQ(inName,"currentThemeVars") ) { return ::hx::Val( currentThemeVars ); }
		if (HX_FIELD_EQ(inName,"buildThemeImages") ) { return ::hx::Val( buildThemeImages_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"buildThemeEntries") ) { return ::hx::Val( buildThemeEntries_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setCurrentThemeVar") ) { return ::hx::Val( setCurrentThemeVar_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ThemeManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val ThemeManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_themes") ) { _themes=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { _eventMap=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_themeImages") ) { _themeImages=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentThemeVars") ) { currentThemeVars=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ThemeManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::themes::ThemeManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::themes::ThemeManager >(); return true; }
	}
	return false;
}

void ThemeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_themes",e9,db,9e,f4));
	outFields->push(HX_("_themeImages",a2,9d,ea,17));
	outFields->push(HX_("_eventMap",01,7e,68,08));
	outFields->push(HX_("currentThemeVars",dc,82,8b,22));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ThemeManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ThemeManager_obj,_themes),HX_("_themes",e9,db,9e,f4)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ThemeManager_obj,_themeImages),HX_("_themeImages",a2,9d,ea,17)},
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(ThemeManager_obj,_eventMap),HX_("_eventMap",01,7e,68,08)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ThemeManager_obj,currentThemeVars),HX_("currentThemeVars",dc,82,8b,22)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ThemeManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::themes::ThemeManager */ ,(void *) &ThemeManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::themes::ThemeManager */ ,(void *) &ThemeManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ThemeManager_obj_sMemberFields[] = {
	HX_("_themes",e9,db,9e,f4),
	HX_("_themeImages",a2,9d,ea,17),
	HX_("_eventMap",01,7e,68,08),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("dispatch",ba,ce,63,1e),
	HX_("getTheme",93,8d,5d,6f),
	HX_("addStyleResource",3e,b4,80,4d),
	HX_("setThemeVar",20,8e,b1,67),
	HX_("setCurrentThemeVar",35,50,17,9b),
	HX_("addImageResource",68,68,71,f1),
	HX_("currentThemeVars",dc,82,8b,22),
	HX_("applyTheme",bb,f9,d7,ba),
	HX_("applyResource",5c,bc,d5,52),
	HX_("addStyleString",41,c4,9e,1e),
	HX_("buildThemeVars",47,3d,f1,aa),
	HX_("buildThemeEntries",95,ce,cb,18),
	HX_("buildThemeImages",13,3f,96,e2),
	HX_("image",5b,1f,69,bd),
	HX_("icon",79,e7,b2,45),
	::String(null()) };

static void ThemeManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThemeManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ThemeManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThemeManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThemeManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ThemeManager_obj::instance,"instance");
};

#endif

::hx::Class ThemeManager_obj::__mClass;

static ::String ThemeManager_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ThemeManager_obj::__register()
{
	ThemeManager_obj _hx_dummy;
	ThemeManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.themes.ThemeManager",56,28,15,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ThemeManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ThemeManager_obj::__SetStatic;
	__mClass->mMarkFunc = ThemeManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ThemeManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ThemeManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ThemeManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ThemeManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThemeManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThemeManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace themes
