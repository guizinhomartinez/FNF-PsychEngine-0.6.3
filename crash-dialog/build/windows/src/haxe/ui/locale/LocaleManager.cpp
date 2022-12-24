#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleEvent
#include <haxe/ui/locale/LocaleEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_locale_LocaleParser
#include <haxe/ui/parsers/locale/LocaleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ExpressionUtil
#include <haxe/ui/util/ExpressionUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_MathUtil
#include <haxe/ui/util/MathUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_SimpleExpressionEvaluator
#include <haxe/ui/util/SimpleExpressionEvaluator.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c866bb869b01b7dd_19_new,"haxe.ui.locale.LocaleManager","new",0x7778ab83,"haxe.ui.locale.LocaleManager.new","haxe/ui/locale/LocaleManager.hx",19,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_39_registerComponent,"haxe.ui.locale.LocaleManager","registerComponent",0xc963b83d,"haxe.ui.locale.LocaleManager.registerComponent","haxe/ui/locale/LocaleManager.hx",39,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_69_unregisterComponent,"haxe.ui.locale.LocaleManager","unregisterComponent",0xac3a3c84,"haxe.ui.locale.LocaleManager.unregisterComponent","haxe/ui/locale/LocaleManager.hx",69,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_72_findBindingExpr,"haxe.ui.locale.LocaleManager","findBindingExpr",0x47c6ef04,"haxe.ui.locale.LocaleManager.findBindingExpr","haxe/ui/locale/LocaleManager.hx",72,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_85_cloneForComponent,"haxe.ui.locale.LocaleManager","cloneForComponent",0x6c6ec9d4,"haxe.ui.locale.LocaleManager.cloneForComponent","haxe/ui/locale/LocaleManager.hx",85,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_97_onComponentReady,"haxe.ui.locale.LocaleManager","onComponentReady",0x08780ae2,"haxe.ui.locale.LocaleManager.onComponentReady","haxe/ui/locale/LocaleManager.hx",97,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_102_refreshFor,"haxe.ui.locale.LocaleManager","refreshFor",0x76061f2b,"haxe.ui.locale.LocaleManager.refreshFor","haxe/ui/locale/LocaleManager.hx",102,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_140_refreshAll,"haxe.ui.locale.LocaleManager","refreshAll",0x76025143,"haxe.ui.locale.LocaleManager.refreshAll","haxe/ui/locale/LocaleManager.hx",140,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_148_get_language,"haxe.ui.locale.LocaleManager","get_language",0xb2415cde,"haxe.ui.locale.LocaleManager.get_language","haxe/ui/locale/LocaleManager.hx",148,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_150_set_language,"haxe.ui.locale.LocaleManager","set_language",0xc73a8052,"haxe.ui.locale.LocaleManager.set_language","haxe/ui/locale/LocaleManager.hx",150,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_171_registerEvent,"haxe.ui.locale.LocaleManager","registerEvent",0x9b7acf9a,"haxe.ui.locale.LocaleManager.registerEvent","haxe/ui/locale/LocaleManager.hx",171,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_178_hasEvent,"haxe.ui.locale.LocaleManager","hasEvent",0x4efbf85d,"haxe.ui.locale.LocaleManager.hasEvent","haxe/ui/locale/LocaleManager.hx",178,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_187_unregisterEvent,"haxe.ui.locale.LocaleManager","unregisterEvent",0xfa79e461,"haxe.ui.locale.LocaleManager.unregisterEvent","haxe/ui/locale/LocaleManager.hx",187,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_192_parseResource,"haxe.ui.locale.LocaleManager","parseResource",0x881cd904,"haxe.ui.locale.LocaleManager.parseResource","haxe/ui/locale/LocaleManager.hx",192,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_209_addStrings,"haxe.ui.locale.LocaleManager","addStrings",0xcf5fd99e,"haxe.ui.locale.LocaleManager.addStrings","haxe/ui/locale/LocaleManager.hx",209,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_238_getStrings,"haxe.ui.locale.LocaleManager","getStrings",0xb73733c9,"haxe.ui.locale.LocaleManager.getStrings","haxe/ui/locale/LocaleManager.hx",238,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_252_hasString,"haxe.ui.locale.LocaleManager","hasString",0x4843332e,"haxe.ui.locale.LocaleManager.hasString","haxe/ui/locale/LocaleManager.hx",252,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_261_lookupString,"haxe.ui.locale.LocaleManager","lookupString",0x46b07f68,"haxe.ui.locale.LocaleManager.lookupString","haxe/ui/locale/LocaleManager.hx",261,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_264_translateTo,"haxe.ui.locale.LocaleManager","translateTo",0x2198468c,"haxe.ui.locale.LocaleManager.translateTo","haxe/ui/locale/LocaleManager.hx",264,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_282_findRoot,"haxe.ui.locale.LocaleManager","findRoot",0xeb21e0f8,"haxe.ui.locale.LocaleManager.findRoot","haxe/ui/locale/LocaleManager.hx",282,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_22_get_instance,"haxe.ui.locale.LocaleManager","get_instance",0x9210fc1b,"haxe.ui.locale.LocaleManager.get_instance","haxe/ui/locale/LocaleManager.hx",22,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_38_boot,"haxe.ui.locale.LocaleManager","boot",0x0a3667af,"haxe.ui.locale.LocaleManager.boot","haxe/ui/locale/LocaleManager.hx",38,0x996fe4ae)
namespace haxe{
namespace ui{
namespace locale{

void LocaleManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_19_new)
HXLINE( 208)		this->_localeMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 145)		this->_language = HX_("en",69,58,00,00);
HXLINE(  33)		this->_eventMap = null();
            	}

Dynamic LocaleManager_obj::__CreateEmpty() { return new LocaleManager_obj; }

void *LocaleManager_obj::_hx_vtable = 0;

Dynamic LocaleManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocaleManager_obj > _hx_result = new LocaleManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LocaleManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4926143f;
}

void LocaleManager_obj::registerComponent( ::haxe::ui::core::Component component,::String prop, ::Dynamic callback,::String expr,::hx::Null< bool >  __o_fix){
            		bool fix = __o_fix.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_39_registerComponent)
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if (::hx::IsNull( callback )) {
HXLINE(  40)			_hx_tmp = ::hx::IsNull( expr );
            		}
            		else {
HXLINE(  40)			_hx_tmp = false;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			return;
            		}
HXLINE(  44)		::String fixedExpr = null();
HXLINE(  45)		if ((fix == true)) {
HXLINE(  46)			if (::hx::IsNotNull( expr )) {
HXLINE(  47)				fixedExpr = ::haxe::ui::util::ExpressionUtil_obj::stringToLanguageExpression(expr,HX_("LocaleManager",d3,bc,32,59));
HXLINE(  48)				if ((::StringTools_obj::endsWith(fixedExpr,HX_(";",3b,00,00,00)) == true)) {
HXLINE(  49)					fixedExpr = fixedExpr.substr(0,(fixedExpr.length - 1));
            				}
            			}
            		}
            		else {
HXLINE(  53)			fixedExpr = expr;
            		}
HXLINE(  56)		 ::haxe::ds::StringMap propMap = ( ( ::haxe::ds::StringMap)(::haxe::ui::locale::LocaleManager_obj::_registeredComponents->get(component)) );
HXLINE(  57)		if (::hx::IsNull( propMap )) {
HXLINE(  58)			propMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  59)			::haxe::ui::locale::LocaleManager_obj::_registeredComponents->set(component,propMap);
            		}
HXLINE(  61)		propMap->set(prop, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("expr",35,fd,1d,43),fixedExpr)
            			->setFixed(1,HX_("callback",c5,99,06,7f),callback)));
HXLINE(  65)		this->refreshFor(component);
            	}


HX_DEFINE_DYNAMIC_FUNC5(LocaleManager_obj,registerComponent,(void))

void LocaleManager_obj::unregisterComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_69_unregisterComponent)
HXDLIN(  69)		::haxe::ui::locale::LocaleManager_obj::_registeredComponents->remove(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,unregisterComponent,(void))

::String LocaleManager_obj::findBindingExpr( ::haxe::ui::core::Component component,::String prop){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_72_findBindingExpr)
HXLINE(  73)		 ::haxe::ds::StringMap propMap = ( ( ::haxe::ds::StringMap)(::haxe::ui::locale::LocaleManager_obj::_registeredComponents->get(component)) );
HXLINE(  74)		if (::hx::IsNull( propMap )) {
HXLINE(  75)			return null();
            		}
HXLINE(  78)		 ::Dynamic entry = propMap->get(prop);
HXLINE(  79)		if (::hx::IsNull( entry )) {
HXLINE(  80)			return null();
            		}
HXLINE(  82)		return ( (::String)(entry->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,findBindingExpr,return )

void LocaleManager_obj::cloneForComponent( ::haxe::ui::core::Component from, ::haxe::ui::core::Component to){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_85_cloneForComponent)
HXLINE(  86)		 ::haxe::ds::StringMap propMap = ( ( ::haxe::ds::StringMap)(::haxe::ui::locale::LocaleManager_obj::_registeredComponents->get(from)) );
HXLINE(  87)		if (::hx::IsNull( propMap )) {
HXLINE(  88)			return;
            		}
HXLINE(  91)		{
HXLINE(  91)			 ::Dynamic prop = propMap->keys();
HXDLIN(  91)			while(( (bool)(prop->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  91)				::String prop1 = ( (::String)(prop->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  92)				 ::Dynamic entry = propMap->get(prop1);
HXLINE(  93)				this->registerComponent(to,prop1,entry->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic),( (::String)(entry->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)) ),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,cloneForComponent,(void))

void LocaleManager_obj::onComponentReady( ::haxe::ui::events::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_97_onComponentReady)
HXLINE(  98)		e->target->unregisterEvent(HX_("initialize",50,31,bb,ec),this->onComponentReady_dyn());
HXLINE(  99)		this->refreshFor(e->target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,onComponentReady,(void))

void LocaleManager_obj::refreshFor( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_102_refreshFor)
HXLINE( 103)		if ((component->get_isReady() == false)) {
HXLINE( 104)			component->registerEvent(HX_("initialize",50,31,bb,ec),this->onComponentReady_dyn(),null());
HXLINE( 105)			return;
            		}
HXLINE( 108)		 ::haxe::ds::StringMap propMap = ( ( ::haxe::ds::StringMap)(::haxe::ui::locale::LocaleManager_obj::_registeredComponents->get(component)) );
HXLINE( 109)		if (::hx::IsNull( propMap )) {
HXLINE( 110)			return;
            		}
HXLINE( 113)		 ::Dynamic context =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("LocaleManager",d3,bc,32,59),::hx::ClassOf< ::haxe::ui::locale::LocaleManager >())
            			->setFixed(1,HX_("MathUtil",0a,06,68,71),::hx::ClassOf< ::haxe::ui::util::MathUtil >()));
HXLINE( 118)		 ::haxe::ui::core::Component root = this->findRoot(component);
HXLINE( 119)		{
HXLINE( 119)			int _g = 0;
HXDLIN( 119)			::Array< ::Dynamic> _g1 = root->get_namedComponents();
HXDLIN( 119)			while((_g < _g1->length)){
HXLINE( 119)				 ::haxe::ui::core::Component k = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 119)				_g = (_g + 1);
HXLINE( 120)				if ((k->get_scriptAccess() == false)) {
HXLINE( 121)					continue;
            				}
HXLINE( 123)				::Reflect_obj::setField(context,k->get_id(),k);
            			}
            		}
HXLINE( 127)		{
HXLINE( 127)			 ::Dynamic prop = propMap->keys();
HXDLIN( 127)			while(( (bool)(prop->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 127)				::String prop1 = ( (::String)(prop->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 128)				 ::Dynamic entry = propMap->get(prop1);
HXLINE( 129)				if (::hx::IsNotNull( entry->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic) )) {
HXLINE( 130)					 ::Dynamic value = entry->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic)();
HXLINE( 131)					::Reflect_obj::setProperty(component,prop1,value);
            				}
            				else {
HXLINE( 132)					if (::hx::IsNotNull( entry->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic) )) {
HXLINE( 133)						 ::Dynamic value = ::haxe::ui::util::SimpleExpressionEvaluator_obj::eval(( (::String)(entry->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)) ),context);
HXLINE( 134)						::Reflect_obj::setProperty(component,prop1,value);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,refreshFor,(void))

void LocaleManager_obj::refreshAll(){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_140_refreshAll)
HXDLIN( 140)		 ::Dynamic c = ::haxe::ui::locale::LocaleManager_obj::_registeredComponents->keys();
HXDLIN( 140)		while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 140)			 ::haxe::ui::core::Component c1 = ( ( ::haxe::ui::core::Component)(c->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 141)			this->refreshFor(c1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocaleManager_obj,refreshAll,(void))

::String LocaleManager_obj::get_language(){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_148_get_language)
HXDLIN( 148)		return this->_language;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocaleManager_obj,get_language,return )

::String LocaleManager_obj::set_language(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_150_set_language)
HXLINE( 151)		if (::hx::IsNull( value )) {
HXLINE( 152)			return value;
            		}
HXLINE( 154)		if ((this->_language == value)) {
HXLINE( 155)			return value;
            		}
HXLINE( 158)		bool _hx_tmp = ::hx::IsNull( this->getStrings(value) );
HXLINE( 162)		this->_language = value;
HXLINE( 163)		this->refreshAll();
HXLINE( 164)		if (::hx::IsNotNull( this->_eventMap )) {
HXLINE( 165)			 ::haxe::ui::locale::LocaleEvent event =  ::haxe::ui::locale::LocaleEvent_obj::__alloc( HX_CTX ,HX_("localeChanged",7a,8b,4d,ca));
HXLINE( 166)			this->_eventMap->invoke(HX_("localeChanged",7a,8b,4d,ca),event,null());
            		}
HXLINE( 168)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,set_language,return )

void LocaleManager_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_171_registerEvent)
HXLINE( 172)		if (::hx::IsNull( this->_eventMap )) {
HXLINE( 173)			this->_eventMap =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 175)		this->_eventMap->add(type,listener,priority);
            	}


HX_DEFINE_DYNAMIC_FUNC3(LocaleManager_obj,registerEvent,(void))

bool LocaleManager_obj::hasEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_178_hasEvent)
HXLINE( 179)		if (::hx::IsNull( this->_eventMap )) {
HXLINE( 180)			return false;
            		}
HXLINE( 182)		return this->_eventMap->contains(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,hasEvent,return )

void LocaleManager_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_187_unregisterEvent)
HXDLIN( 187)		if (::hx::IsNotNull( this->_eventMap )) {
HXLINE( 188)			this->_eventMap->remove(type,listener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,unregisterEvent,(void))

void LocaleManager_obj::parseResource(::String localeId,::String resourceId){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_192_parseResource)
HXLINE( 193)		::String content = ::haxe::ui::ToolkitAssets_obj::get_instance()->getText(resourceId);
HXLINE( 194)		if (::hx::IsNotNull( content )) {
HXLINE( 195)			::Array< ::String > parts = resourceId.split(HX_(".",2e,00,00,00));
HXLINE( 196)			::String extension = ( (::String)(parts->pop()) );
HXLINE( 197)			::String filename = parts->join(HX_(".",2e,00,00,00));
HXLINE( 198)			int n = filename.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE( 199)			if ((n != -1)) {
HXLINE( 200)				filename = filename.substr((n + 1),null());
            			}
HXLINE( 202)			 ::haxe::ui::parsers::locale::LocaleParser parser = ::haxe::ui::parsers::locale::LocaleParser_obj::get(extension);
HXLINE( 203)			 ::haxe::ds::StringMap map = parser->parse(content);
HXLINE( 204)			this->addStrings(localeId,map,filename);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,parseResource,(void))

void LocaleManager_obj::addStrings(::String localeId, ::haxe::ds::StringMap map,::String filename){
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_209_addStrings)
HXLINE( 210)		 ::haxe::ds::StringMap stringMap = ( ( ::haxe::ds::StringMap)(this->_localeMap->get(localeId)) );
HXLINE( 211)		if (::hx::IsNull( stringMap )) {
HXLINE( 212)			stringMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 213)			this->_localeMap->set(localeId,stringMap);
            		}
HXLINE( 215)		{
HXLINE( 215)			 ::Dynamic k = map->keys();
HXDLIN( 215)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 215)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 216)				::String v = map->get_string(k1);
HXLINE( 217)				bool _hx_tmp;
HXDLIN( 217)				bool _hx_tmp1;
HXDLIN( 217)				if (::hx::IsNotNull( filename )) {
HXLINE( 217)					_hx_tmp1 = (filename != localeId);
            				}
            				else {
HXLINE( 217)					_hx_tmp1 = false;
            				}
HXDLIN( 217)				if (_hx_tmp1) {
HXLINE( 217)					_hx_tmp = (::StringTools_obj::startsWith(k1,filename) == false);
            				}
            				else {
HXLINE( 217)					_hx_tmp = false;
            				}
HXDLIN( 217)				if (_hx_tmp) {
HXLINE( 218)					::String altKey = ((filename + HX_(".",2e,00,00,00)) + k1);
HXLINE( 219)					stringMap->set(altKey,v);
            				}
HXLINE( 221)				stringMap->set(k1,v);
            			}
            		}
HXLINE( 224)		localeId = ::StringTools_obj::replace(localeId,HX_("-",2d,00,00,00),HX_("_",5f,00,00,00));
HXLINE( 225)		::Array< ::String > parts = localeId.split(HX_("_",5f,00,00,00));
HXLINE( 226)		if ((parts->length > 1)) {
HXLINE( 227)			 ::haxe::ds::StringMap parent = ( ( ::haxe::ds::StringMap)(this->_localeMap->get(parts->__get(0))) );
HXLINE( 228)			if (::hx::IsNotNull( parent )) {
HXLINE( 229)				 ::Dynamic k = parent->keys();
HXDLIN( 229)				while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 229)					::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 230)					if ((stringMap->exists(k1) == false)) {
HXLINE( 231)						stringMap->set(k1,parent->get_string(k1));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(LocaleManager_obj,addStrings,(void))

 ::haxe::ds::StringMap LocaleManager_obj::getStrings(::String localeId){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_238_getStrings)
HXLINE( 239)		 ::haxe::ds::StringMap strings = ( ( ::haxe::ds::StringMap)(this->_localeMap->get(localeId)) );
HXLINE( 240)		if (::hx::IsNotNull( strings )) {
HXLINE( 241)			return strings;
            		}
HXLINE( 244)		localeId = ::StringTools_obj::replace(localeId,HX_("-",2d,00,00,00),HX_("_",5f,00,00,00));
HXLINE( 245)		::Array< ::String > parts = localeId.split(HX_("_",5f,00,00,00));
HXLINE( 246)		if (!(this->_localeMap->exists(parts->__get(0)))) {
HXLINE( 247)			return ( ( ::haxe::ds::StringMap)(this->_localeMap->get(HX_("en",69,58,00,00))) );
            		}
HXLINE( 249)		return ( ( ::haxe::ds::StringMap)(this->_localeMap->get(parts->__get(0))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,getStrings,return )

bool LocaleManager_obj::hasString(::String id){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_252_hasString)
HXLINE( 253)		 ::haxe::ds::StringMap strings = this->getStrings(this->get_language());
HXLINE( 254)		if (::hx::IsNull( strings )) {
HXLINE( 255)			return false;
            		}
HXLINE( 257)		return strings->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,hasString,return )

::String LocaleManager_obj::lookupString(::String id, ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_261_lookupString)
HXDLIN( 261)		return this->translateTo(this->get_language(),id,param0,param1,param2,param3);
            	}


HX_DEFINE_DYNAMIC_FUNC5(LocaleManager_obj,lookupString,return )

::String LocaleManager_obj::translateTo(::String lang,::String id, ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_264_translateTo)
HXLINE( 265)		 ::haxe::ds::StringMap strings = this->getStrings(lang);
HXLINE( 266)		if (::hx::IsNull( strings )) {
HXLINE( 267)			return id;
            		}
HXLINE( 269)		::String value = strings->get_string(id);
HXLINE( 270)		if (::hx::IsNull( value )) {
HXLINE( 271)			return id;
            		}
HXLINE( 274)		if (::hx::IsNotNull( param0 )) {
HXLINE( 274)			value = ::StringTools_obj::replace(value,HX_("{0}",88,7f,5d,00),( (::String)(param0) ));
            		}
HXLINE( 275)		if (::hx::IsNotNull( param1 )) {
HXLINE( 275)			value = ::StringTools_obj::replace(value,HX_("{1}",67,80,5d,00),( (::String)(param1) ));
            		}
HXLINE( 276)		if (::hx::IsNotNull( param2 )) {
HXLINE( 276)			value = ::StringTools_obj::replace(value,HX_("{2}",46,81,5d,00),( (::String)(param2) ));
            		}
HXLINE( 277)		if (::hx::IsNotNull( param3 )) {
HXLINE( 277)			value = ::StringTools_obj::replace(value,HX_("{3}",25,82,5d,00),( (::String)(param3) ));
            		}
HXLINE( 279)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC6(LocaleManager_obj,translateTo,return )

 ::haxe::ui::core::Component LocaleManager_obj::findRoot( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_282_findRoot)
HXLINE( 283)		 ::haxe::ui::core::Component root = c;
HXLINE( 285)		 ::haxe::ui::core::Component ref = c;
HXLINE( 286)		while(::hx::IsNotNull( ref )){
HXLINE( 287)			root = ref;
HXLINE( 288)			if (root->bindingRoot) {
HXLINE( 289)				goto _hx_goto_25;
            			}
HXLINE( 291)			ref = ref->parentComponent;
            		}
            		_hx_goto_25:;
HXLINE( 294)		return root;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,findRoot,return )

 ::haxe::ui::locale::LocaleManager LocaleManager_obj::_instance;

 ::haxe::ui::locale::LocaleManager LocaleManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_22_get_instance)
HXLINE(  23)		if (::hx::IsNull( ::haxe::ui::locale::LocaleManager_obj::_instance )) {
HXLINE(  24)			::haxe::ui::locale::LocaleManager_obj::_instance =  ::haxe::ui::locale::LocaleManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  26)		return ::haxe::ui::locale::LocaleManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LocaleManager_obj,get_instance,return )

 ::haxe::ds::ObjectMap LocaleManager_obj::_registeredComponents;


::hx::ObjectPtr< LocaleManager_obj > LocaleManager_obj::__new() {
	::hx::ObjectPtr< LocaleManager_obj > __this = new LocaleManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LocaleManager_obj > LocaleManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LocaleManager_obj *__this = (LocaleManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocaleManager_obj), true, "haxe.ui.locale.LocaleManager"));
	*(void **)__this = LocaleManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LocaleManager_obj::LocaleManager_obj()
{
}

void LocaleManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocaleManager);
	HX_MARK_MEMBER_NAME(_eventMap,"_eventMap");
	HX_MARK_MEMBER_NAME(_language,"_language");
	HX_MARK_MEMBER_NAME(_localeMap,"_localeMap");
	HX_MARK_END_CLASS();
}

void LocaleManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_eventMap,"_eventMap");
	HX_VISIT_MEMBER_NAME(_language,"_language");
	HX_VISIT_MEMBER_NAME(_localeMap,"_localeMap");
}

::hx::Val LocaleManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_language() ); }
		if (HX_FIELD_EQ(inName,"hasEvent") ) { return ::hx::Val( hasEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"findRoot") ) { return ::hx::Val( findRoot_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { return ::hx::Val( _eventMap ); }
		if (HX_FIELD_EQ(inName,"_language") ) { return ::hx::Val( _language ); }
		if (HX_FIELD_EQ(inName,"hasString") ) { return ::hx::Val( hasString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"refreshFor") ) { return ::hx::Val( refreshFor_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshAll") ) { return ::hx::Val( refreshAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"_localeMap") ) { return ::hx::Val( _localeMap ); }
		if (HX_FIELD_EQ(inName,"addStrings") ) { return ::hx::Val( addStrings_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStrings") ) { return ::hx::Val( getStrings_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"translateTo") ) { return ::hx::Val( translateTo_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { return ::hx::Val( get_language_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_language") ) { return ::hx::Val( set_language_dyn() ); }
		if (HX_FIELD_EQ(inName,"lookupString") ) { return ::hx::Val( lookupString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseResource") ) { return ::hx::Val( parseResource_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"findBindingExpr") ) { return ::hx::Val( findBindingExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentReady") ) { return ::hx::Val( onComponentReady_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComponent") ) { return ::hx::Val( registerComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneForComponent") ) { return ::hx::Val( cloneForComponent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"unregisterComponent") ) { return ::hx::Val( unregisterComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LocaleManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredComponents") ) { outValue = ( _registeredComponents ); return true; }
	}
	return false;
}

::hx::Val LocaleManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_language(inValue.Cast< ::String >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { _eventMap=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_language") ) { _language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_localeMap") ) { _localeMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LocaleManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::locale::LocaleManager >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredComponents") ) { _registeredComponents=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

void LocaleManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_eventMap",01,7e,68,08));
	outFields->push(HX_("_language",b7,77,a7,c1));
	outFields->push(HX_("language",58,80,11,7a));
	outFields->push(HX_("_localeMap",e3,25,09,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocaleManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(LocaleManager_obj,_eventMap),HX_("_eventMap",01,7e,68,08)},
	{::hx::fsString,(int)offsetof(LocaleManager_obj,_language),HX_("_language",b7,77,a7,c1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LocaleManager_obj,_localeMap),HX_("_localeMap",e3,25,09,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LocaleManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::locale::LocaleManager */ ,(void *) &LocaleManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &LocaleManager_obj::_registeredComponents,HX_("_registeredComponents",17,17,c4,94)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LocaleManager_obj_sMemberFields[] = {
	HX_("_eventMap",01,7e,68,08),
	HX_("registerComponent",da,c5,2e,fb),
	HX_("unregisterComponent",61,ab,19,31),
	HX_("findBindingExpr",61,6b,f4,75),
	HX_("cloneForComponent",71,d7,39,9e),
	HX_("onComponentReady",e5,5f,17,42),
	HX_("refreshFor",ee,ff,23,07),
	HX_("refreshAll",06,32,20,07),
	HX_("_language",b7,77,a7,c1),
	HX_("get_language",61,34,2b,2f),
	HX_("set_language",d5,57,24,44),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("hasEvent",60,12,1d,02),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("parseResource",21,94,cf,57),
	HX_("_localeMap",e3,25,09,76),
	HX_("addStrings",61,ba,7d,60),
	HX_("getStrings",8c,14,55,48),
	HX_("hasString",cb,db,18,52),
	HX_("lookupString",eb,56,9a,c3),
	HX_("translateTo",69,10,9f,8a),
	HX_("findRoot",fb,fa,42,9e),
	::String(null()) };

static void LocaleManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LocaleManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(LocaleManager_obj::_registeredComponents,"_registeredComponents");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LocaleManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LocaleManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(LocaleManager_obj::_registeredComponents,"_registeredComponents");
};

#endif

::hx::Class LocaleManager_obj::__mClass;

static ::String LocaleManager_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("get_instance",9e,d3,fa,0e),
	HX_("_registeredComponents",17,17,c4,94),
	::String(null())
};

void LocaleManager_obj::__register()
{
	LocaleManager_obj _hx_dummy;
	LocaleManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.locale.LocaleManager",11,2e,3e,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LocaleManager_obj::__GetStatic;
	__mClass->mSetStaticField = &LocaleManager_obj::__SetStatic;
	__mClass->mMarkFunc = LocaleManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LocaleManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocaleManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocaleManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LocaleManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocaleManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocaleManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LocaleManager_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_38_boot)
HXDLIN(  38)		_registeredComponents =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace locale
