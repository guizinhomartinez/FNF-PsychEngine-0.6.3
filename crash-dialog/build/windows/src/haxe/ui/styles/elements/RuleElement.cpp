#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_RuleElement
#include <haxe/ui/styles/elements/RuleElement.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Selector
#include <haxe/ui/styles/elements/Selector.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_SelectorPart
#include <haxe/ui/styles/elements/SelectorPart.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8b9957a42d1340b9_7_new,"haxe.ui.styles.elements.RuleElement","new",0xe0db6eb5,"haxe.ui.styles.elements.RuleElement.new","haxe/ui/styles/elements/RuleElement.hx",7,0x55caecdb)
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_20_addDirective,"haxe.ui.styles.elements.RuleElement","addDirective",0x34e2f8f9,"haxe.ui.styles.elements.RuleElement.addDirective","haxe/ui/styles/elements/RuleElement.hx",20,0x55caecdb)
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_26_match,"haxe.ui.styles.elements.RuleElement","match",0xcb8ee6da,"haxe.ui.styles.elements.RuleElement.match","haxe/ui/styles/elements/RuleElement.hx",26,0x55caecdb)
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_87_processDirective,"haxe.ui.styles.elements.RuleElement","processDirective",0x7bc8b06b,"haxe.ui.styles.elements.RuleElement.processDirective","haxe/ui/styles/elements/RuleElement.hx",87,0x55caecdb)
static const ::String _hx_array_data_e40ef043_7[] = {
	HX_("animation-name",74,af,fd,ae),HX_("animation-duration",fd,94,5c,5e),HX_("animation-timing-function",f2,dd,68,8f),HX_("animation-delay",3a,1e,9e,af),HX_("animation-iteration-count",56,1d,0c,30),HX_("animation-direction",76,d0,26,5b),HX_("animation-fill-mode",e4,12,c9,b7),
};
static const ::String _hx_array_data_e40ef043_8[] = {
	HX_("background-color",84,e8,6d,de),HX_("background-color-end",52,18,72,2e),HX_("background-gradient-style",93,4c,5d,f2),
};
static const ::String _hx_array_data_e40ef043_9[] = {
	HX_("background-image-clip-top",89,46,05,ca),HX_("background-image-clip-left",93,1d,47,f5),HX_("background-image-clip-bottom",77,77,29,f7),HX_("background-image-clip-right",d0,d0,ff,1f),
};
static const ::String _hx_array_data_e40ef043_10[] = {
	HX_("background-image-slice-top",89,71,91,06),HX_("background-image-slice-left",93,92,60,b3),HX_("background-image-slice-bottom",77,2c,4a,86),HX_("background-image-slice-right",d0,bb,2c,b8),
};
static const ::String _hx_array_data_e40ef043_11[] = {
	HX_("background-position-x",d3,15,69,2f),HX_("background-position-y",d4,15,69,2f),
};
static const ::String _hx_array_data_e40ef043_12[] = {
	HX_("border-size",02,17,a7,2e),HX_("border-style",d0,a7,d1,aa),HX_("border-color",02,74,10,71),
};
static const ::String _hx_array_data_e40ef043_13[] = {
	HX_("border-bottom-size",82,24,35,2c),HX_("border-style",d0,a7,d1,aa),HX_("border-bottom-color",82,36,ce,4f),
};
static const ::String _hx_array_data_e40ef043_14[] = {
	HX_("border-top-color",8a,f0,a5,c6),HX_("border-left-color",5e,12,2b,99),HX_("border-right-color",d1,4a,d2,a1),HX_("border-bottom-color",82,36,ce,4f),
};
static const ::String _hx_array_data_e40ef043_15[] = {
	HX_("border-left-size",26,78,a1,a1),HX_("border-style",d0,a7,d1,aa),HX_("border-left-color",5e,12,2b,99),
};
static const ::String _hx_array_data_e40ef043_16[] = {
	HX_("border-right-size",13,4f,36,fb),HX_("border-style",d0,a7,d1,aa),HX_("border-right-color",d1,4a,d2,a1),
};
static const ::String _hx_array_data_e40ef043_17[] = {
	HX_("border-top-size",7a,83,50,ad),HX_("border-left-size",26,78,a1,a1),HX_("border-right-size",13,4f,36,fb),HX_("border-bottom-size",82,24,35,2c),
};
static const ::String _hx_array_data_e40ef043_18[] = {
	HX_("border-top-size",7a,83,50,ad),HX_("border-style",d0,a7,d1,aa),HX_("border-top-color",8a,f0,a5,c6),
};
static const ::String _hx_array_data_e40ef043_19[] = {
	HX_("margin-top",b6,1f,6b,70),HX_("margin-left",c6,4b,ff,e7),HX_("margin-right",3d,0f,70,8e),HX_("margin-bottom",6a,d8,ef,2a),
};
static const ::String _hx_array_data_e40ef043_20[] = {
	HX_("margin-top",b6,1f,6b,70),HX_("margin-bottom",6a,d8,ef,2a),
};
static const ::String _hx_array_data_e40ef043_21[] = {
	HX_("margin-left",c6,4b,ff,e7),HX_("margin-right",3d,0f,70,8e),
};
static const ::String _hx_array_data_e40ef043_22[] = {
	HX_("padding-top",d9,16,74,71),HX_("padding-left",43,93,ce,ce),HX_("padding-right",20,55,ff,9c),HX_("padding-bottom",27,b9,bd,d9),
};
static const ::String _hx_array_data_e40ef043_23[] = {
	HX_("padding-top",d9,16,74,71),HX_("padding-bottom",27,b9,bd,d9),
};
static const ::String _hx_array_data_e40ef043_24[] = {
	HX_("padding-left",43,93,ce,ce),HX_("padding-right",20,55,ff,9c),
};
static const ::String _hx_array_data_e40ef043_25[] = {
	HX_("padding-top",d9,16,74,71),HX_("padding-left",43,93,ce,ce),HX_("padding-right",20,55,ff,9c),HX_("padding-bottom",27,b9,bd,d9),
};
static const ::String _hx_array_data_e40ef043_26[] = {
	HX_("horizontal-spacing",da,c3,ba,32),HX_("vertical-spacing",6c,65,11,2b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_152_processComposite,"haxe.ui.styles.elements.RuleElement","processComposite",0x7e2d5823,"haxe.ui.styles.elements.RuleElement.processComposite","haxe/ui/styles/elements/RuleElement.hx",152,0x55caecdb)
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_29_ruleMatch,"haxe.ui.styles.elements.RuleElement","ruleMatch",0x24abbabe,"haxe.ui.styles.elements.RuleElement.ruleMatch","haxe/ui/styles/elements/RuleElement.hx",29,0x55caecdb)
namespace haxe{
namespace ui{
namespace styles{
namespace elements{

void RuleElement_obj::__construct(::String selector,::Array< ::Dynamic> directives){
            	HX_GC_STACKFRAME(&_hx_pos_8b9957a42d1340b9_7_new)
HXLINE(   9)		this->directives =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  12)		this->selector =  ::haxe::ui::styles::elements::Selector_obj::__alloc( HX_CTX ,selector);
HXLINE(  15)		{
HXLINE(  15)			int _g = 0;
HXDLIN(  15)			while((_g < directives->length)){
HXLINE(  15)				 ::haxe::ui::styles::elements::Directive d = directives->__get(_g).StaticCast<  ::haxe::ui::styles::elements::Directive >();
HXDLIN(  15)				_g = (_g + 1);
HXLINE(  16)				this->processDirective(d);
            			}
            		}
            	}

Dynamic RuleElement_obj::__CreateEmpty() { return new RuleElement_obj; }

void *RuleElement_obj::_hx_vtable = 0;

Dynamic RuleElement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RuleElement_obj > _hx_result = new RuleElement_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RuleElement_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c42e88d;
}

void RuleElement_obj::addDirective(::String directive, ::haxe::ui::styles::Value value){
            	HX_GC_STACKFRAME(&_hx_pos_8b9957a42d1340b9_20_addDirective)
HXLINE(  21)		 ::haxe::ui::styles::elements::Directive d =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,directive,value,null());
HXLINE(  22)		this->processDirective(d);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RuleElement_obj,addDirective,(void))

bool RuleElement_obj::match( ::haxe::ui::core::Component d){
            	HX_STACKFRAME(&_hx_pos_8b9957a42d1340b9_26_match)
HXDLIN(  26)		return ::haxe::ui::styles::elements::RuleElement_obj::ruleMatch(this->selector->parts->__get((this->selector->parts->length - 1)).StaticCast<  ::haxe::ui::styles::elements::SelectorPart >(),d);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RuleElement_obj,match,return )

void RuleElement_obj::processDirective( ::haxe::ui::styles::elements::Directive d){
            	HX_GC_STACKFRAME(&_hx_pos_8b9957a42d1340b9_87_processDirective)
HXDLIN(  87)		::String _hx_switch_0 = d->directive;
            		if (  (_hx_switch_0==HX_("animation",04,ef,34,4b)) ){
HXLINE( 131)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_7,7),null());
HXDLIN( 131)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("background",ee,93,1d,26)) ){
HXLINE( 111)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_8,3),null());
HXDLIN( 111)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("background-image-clip",81,f1,70,5b)) ){
HXLINE( 127)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_9,4),null());
HXDLIN( 127)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("background-image-slice",81,9c,cb,dd)) ){
HXLINE( 129)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_10,4),null());
HXDLIN( 129)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("background-position",28,94,bd,15)) ){
HXLINE( 107)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_11,2),null());
HXDLIN( 107)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border",ec,4c,1a,64)) ){
HXLINE( 113)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_12,3),null());
HXDLIN( 113)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-bottom",6c,2f,47,1c)) ){
HXLINE( 119)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_13,3),null());
HXDLIN( 119)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-color",02,74,10,71)) ){
HXLINE( 125)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_14,4),true);
HXDLIN( 125)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-left",48,7e,03,2a)) ){
HXLINE( 117)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_15,3),null());
HXDLIN( 117)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-right",7b,0e,18,10)) ){
HXLINE( 121)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_16,3),null());
HXDLIN( 121)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-size",02,17,a7,2e)) ){
HXLINE( 123)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_17,4),null());
HXDLIN( 123)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-top",74,33,d8,ed)) ){
HXLINE( 115)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_18,3),null());
HXDLIN( 115)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("font-style",f3,04,ec,01)) ){
HXLINE( 133)			::Array< ::Dynamic> v1 = ::haxe::ui::styles::ValueTools_obj::composite(d->value);
HXLINE( 134)			if (::hx::IsNull( v1 )) {
HXLINE( 135)				v1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,d->value);
            			}
HXLINE( 137)			{
HXLINE( 137)				int _g = 0;
HXDLIN( 137)				while((_g < v1->length)){
HXLINE( 137)					 ::haxe::ui::styles::Value v = v1->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 137)					_g = (_g + 1);
HXLINE( 138)					::String s = ::haxe::ui::styles::ValueTools_obj::string(v).toLowerCase();
HXLINE( 139)					if ((s == HX_("bold",85,81,1b,41))) {
HXLINE( 140)						::Dynamic this1 = this->directives;
HXDLIN( 140)						( ( ::haxe::ds::StringMap)(this1) )->set(HX_("font-bold",03,d0,d1,42), ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("font-bold",03,d0,d1,42),::haxe::ui::styles::Value_obj::VBool(true),null()));
            					}
            					else {
HXLINE( 141)						if ((s == HX_("italic",f0,2e,64,06))) {
HXLINE( 142)							::Dynamic this1 = this->directives;
HXDLIN( 142)							( ( ::haxe::ds::StringMap)(this1) )->set(HX_("font-italic",ee,98,29,9d), ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("font-italic",ee,98,29,9d),::haxe::ui::styles::Value_obj::VBool(true),null()));
            						}
            						else {
HXLINE( 143)							if ((s == HX_("underline",0c,15,d1,87))) {
HXLINE( 144)								::Dynamic this1 = this->directives;
HXDLIN( 144)								( ( ::haxe::ds::StringMap)(this1) )->set(HX_("font-underline",ce,7d,77,c9), ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("font-underline",ce,7d,77,c9),::haxe::ui::styles::Value_obj::VBool(true),null()));
            							}
            						}
            					}
            				}
            			}
HXLINE( 132)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("margin",2e,70,6d,ba)) ){
HXLINE(  99)			::Array< ::Dynamic> vl = ::haxe::ui::styles::ValueTools_obj::composite(d->value);
HXLINE( 100)			bool _hx_tmp;
HXDLIN( 100)			if ((vl->length != 4)) {
HXLINE( 100)				_hx_tmp = (vl->length == 1);
            			}
            			else {
HXLINE( 100)				_hx_tmp = true;
            			}
HXDLIN( 100)			if (_hx_tmp) {
HXLINE( 101)				this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_19,4),null());
            			}
            			else {
HXLINE( 102)				if ((vl->length == 2)) {
HXLINE( 103)					this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >(),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_20,2),null());
HXLINE( 104)					this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >(),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_21,2),null());
            				}
            			}
HXLINE(  98)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("padding",d1,59,7d,d0)) ){
HXLINE(  89)			::Array< ::Dynamic> vl = ::haxe::ui::styles::ValueTools_obj::composite(d->value);
HXLINE(  90)			bool _hx_tmp;
HXDLIN(  90)			if ((vl->length != 4)) {
HXLINE(  90)				_hx_tmp = (vl->length == 1);
            			}
            			else {
HXLINE(  90)				_hx_tmp = true;
            			}
HXDLIN(  90)			if (_hx_tmp) {
HXLINE(  91)				this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_22,4),null());
            			}
            			else {
HXLINE(  92)				if ((vl->length == 2)) {
HXLINE(  93)					this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >(),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_23,2),null());
HXLINE(  94)					this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >(),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_24,2),null());
            				}
            				else {
HXLINE(  95)					if ((vl->length == 0)) {
HXLINE(  96)						this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_25,4),null());
            					}
            				}
            			}
HXLINE(  88)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("spacing",83,33,bb,91)) ){
HXLINE( 109)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_26,2),null());
HXDLIN( 109)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE( 148)			this->directives->set(d->directive,d);
            		}
            		_hx_goto_4:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RuleElement_obj,processDirective,(void))

void RuleElement_obj::processComposite( ::haxe::ui::styles::elements::Directive d,::Array< ::String > parts,::hx::Null< bool >  __o_duplicate){
            		bool duplicate = __o_duplicate.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_8b9957a42d1340b9_152_processComposite)
HXLINE( 153)		{
HXLINE( 153)			int _g = 0;
HXDLIN( 153)			while((_g < parts->length)){
HXLINE( 153)				::String p = parts->__get(_g);
HXDLIN( 153)				_g = (_g + 1);
HXLINE( 154)				this->directives->remove(p);
            			}
            		}
HXLINE( 157)		{
HXLINE( 157)			 ::haxe::ui::styles::Value _g1 = d->value;
HXDLIN( 157)			switch((int)(_g1->_hx_getIndex())){
            				case (int)1: {
HXLINE( 171)					Float _g = _g1->_hx_getFloat(0);
HXLINE( 172)					{
HXLINE( 172)						int _g2 = 0;
HXDLIN( 172)						while((_g2 < parts->length)){
HXLINE( 172)							::String p = parts->__get(_g2);
HXDLIN( 172)							_g2 = (_g2 + 1);
HXLINE( 173)							{
HXLINE( 173)								::Dynamic this1 = this->directives;
HXDLIN( 173)								( ( ::haxe::ds::StringMap)(this1) )->set(p, ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,d->value,null()));
            							}
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 167)					 ::haxe::ui::styles::Dimension v = _g1->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE( 168)					{
HXLINE( 168)						int _g = 0;
HXDLIN( 168)						while((_g < parts->length)){
HXLINE( 168)							::String p = parts->__get(_g);
HXDLIN( 168)							_g = (_g + 1);
HXLINE( 169)							{
HXLINE( 169)								::Dynamic this1 = this->directives;
HXDLIN( 169)								( ( ::haxe::ds::StringMap)(this1) )->set(p, ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,::haxe::ui::styles::Value_obj::VDimension(v),null()));
            							}
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 159)					int _g = _g1->_hx_getInt(0);
HXLINE( 160)					if ((duplicate == false)) {
HXLINE( 161)						::Dynamic this1 = this->directives;
HXDLIN( 161)						 ::haxe::ui::styles::elements::Directive value =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,parts->__get(0),d->value,null());
HXDLIN( 161)						( ( ::haxe::ds::StringMap)(this1) )->set(parts->__get(0),value);
            					}
            					else {
HXLINE( 163)						int _g = 0;
HXDLIN( 163)						while((_g < parts->length)){
HXLINE( 163)							::String p = parts->__get(_g);
HXDLIN( 163)							_g = (_g + 1);
HXLINE( 164)							{
HXLINE( 164)								::Dynamic this1 = this->directives;
HXDLIN( 164)								( ( ::haxe::ds::StringMap)(this1) )->set(p, ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,d->value,null()));
            							}
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 158)					::String _g = _g1->_hx_getString(0);
            				}
            				break;
            				case (int)7: {
HXLINE( 175)					::Array< ::Dynamic> vl = _g1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 175)					{
HXLINE( 176)						int n = 0;
HXLINE( 177)						{
HXLINE( 177)							int _g = 0;
HXDLIN( 177)							while((_g < parts->length)){
HXLINE( 177)								::String p = parts->__get(_g);
HXDLIN( 177)								_g = (_g + 1);
HXLINE( 178)								if (::hx::IsNotNull( vl->__get(n).StaticCast<  ::haxe::ui::styles::Value >() )) {
HXLINE( 179)									 ::haxe::ui::styles::elements::Directive nd =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,vl->__get(n).StaticCast<  ::haxe::ui::styles::Value >(),null());
HXLINE( 180)									this->processDirective(nd);
HXLINE( 181)									this->directives->set(p,nd);
            								}
HXLINE( 183)								n = (n + 1);
            							}
            						}
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 186)					int _g = 0;
HXDLIN( 186)					while((_g < parts->length)){
HXLINE( 186)						::String p = parts->__get(_g);
HXDLIN( 186)						_g = (_g + 1);
HXLINE( 187)						 ::haxe::ui::styles::elements::Directive nd =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,d->value,null());
HXLINE( 188)						this->processDirective(nd);
HXLINE( 189)						this->directives->set(p,nd);
            					}
            				}
            				break;
            				default:{
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(RuleElement_obj,processComposite,(void))

bool RuleElement_obj::ruleMatch( ::haxe::ui::styles::elements::SelectorPart c, ::haxe::ui::core::Component d){
            	HX_STACKFRAME(&_hx_pos_8b9957a42d1340b9_29_ruleMatch)
HXLINE(  30)		if ((c->nodeName == HX_("*",2a,00,00,00))) {
HXLINE(  31)			return true;
            		}
HXLINE(  34)		if (::hx::IsNotNull( c->pseudoClass )) {
HXLINE(  35)			::String pc = (HX_(":",3a,00,00,00) + c->pseudoClass);
HXLINE(  36)			if (((d->classes->indexOf(pc,null()) != -1) == false)) {
HXLINE(  37)				return false;
            			}
            		}
HXLINE(  41)		if (::hx::IsNotNull( c->className )) {
HXLINE(  42)			int _g = 0;
HXDLIN(  42)			::Array< ::String > _g1 = c->get_classNameParts();
HXDLIN(  42)			while((_g < _g1->length)){
HXLINE(  42)				::String p = _g1->__get(_g);
HXDLIN(  42)				_g = (_g + 1);
HXLINE(  43)				if (((d->classes->indexOf(p,null()) != -1) == false)) {
HXLINE(  44)					return false;
            				}
            			}
            		}
HXLINE(  49)		if (::hx::IsNotNull( c->nodeName )) {
HXLINE(  50)			::String classNodeName = d->get_nodeName();
HXLINE(  51)			if ((c->nodeName != classNodeName)) {
HXLINE(  52)				return false;
            			}
            		}
HXLINE(  56)		bool _hx_tmp;
HXDLIN(  56)		if (::hx::IsNotNull( c->id )) {
HXLINE(  56)			::String c1 = c->id;
HXDLIN(  56)			_hx_tmp = (c1 != d->get_id());
            		}
            		else {
HXLINE(  56)			_hx_tmp = false;
            		}
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  57)			return false;
            		}
HXLINE(  60)		if (::hx::IsNotNull( c->parent )) {
HXLINE(  61)			if ((c->direct == true)) {
HXLINE(  62)				 ::haxe::ui::core::Component p = d->parentComponent;
HXLINE(  63)				if (::hx::IsNull( p )) {
HXLINE(  64)					return false;
            				}
HXLINE(  66)				if (!(::haxe::ui::styles::elements::RuleElement_obj::ruleMatch(c->parent,p))) {
HXLINE(  67)					return false;
            				}
            			}
            			else {
HXLINE(  70)				 ::haxe::ui::core::Component p = d->parentComponent;
HXLINE(  71)				while(::hx::IsNotNull( p )){
HXLINE(  72)					if (::haxe::ui::styles::elements::RuleElement_obj::ruleMatch(c->parent,p)) {
HXLINE(  73)						goto _hx_goto_35;
            					}
HXLINE(  75)					p = p->parentComponent;
            				}
            				_hx_goto_35:;
HXLINE(  77)				if (::hx::IsNull( p )) {
HXLINE(  78)					return false;
            				}
            			}
            		}
HXLINE(  83)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RuleElement_obj,ruleMatch,return )


::hx::ObjectPtr< RuleElement_obj > RuleElement_obj::__new(::String selector,::Array< ::Dynamic> directives) {
	::hx::ObjectPtr< RuleElement_obj > __this = new RuleElement_obj();
	__this->__construct(selector,directives);
	return __this;
}

::hx::ObjectPtr< RuleElement_obj > RuleElement_obj::__alloc(::hx::Ctx *_hx_ctx,::String selector,::Array< ::Dynamic> directives) {
	RuleElement_obj *__this = (RuleElement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RuleElement_obj), true, "haxe.ui.styles.elements.RuleElement"));
	*(void **)__this = RuleElement_obj::_hx_vtable;
	__this->__construct(selector,directives);
	return __this;
}

RuleElement_obj::RuleElement_obj()
{
}

void RuleElement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RuleElement);
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(directives,"directives");
	HX_MARK_END_CLASS();
}

void RuleElement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(directives,"directives");
}

::hx::Val RuleElement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return ::hx::Val( match_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"directives") ) { return ::hx::Val( directives ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addDirective") ) { return ::hx::Val( addDirective_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processDirective") ) { return ::hx::Val( processDirective_dyn() ); }
		if (HX_FIELD_EQ(inName,"processComposite") ) { return ::hx::Val( processComposite_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RuleElement_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"ruleMatch") ) { outValue = ruleMatch_dyn(); return true; }
	}
	return false;
}

::hx::Val RuleElement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::haxe::ui::styles::elements::Selector >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"directives") ) { directives=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RuleElement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("directives",44,dd,1a,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RuleElement_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::styles::elements::Selector */ ,(int)offsetof(RuleElement_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(RuleElement_obj,directives),HX_("directives",44,dd,1a,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RuleElement_obj_sStaticStorageInfo = 0;
#endif

static ::String RuleElement_obj_sMemberFields[] = {
	HX_("selector",1f,33,6d,b1),
	HX_("directives",44,dd,1a,28),
	HX_("addDirective",ee,89,94,0f),
	HX_("match",45,49,23,03),
	HX_("processDirective",e0,5f,ae,c7),
	HX_("processComposite",98,07,13,ca),
	::String(null()) };

::hx::Class RuleElement_obj::__mClass;

static ::String RuleElement_obj_sStaticFields[] = {
	HX_("ruleMatch",a9,2e,f9,96),
	::String(null())
};

void RuleElement_obj::__register()
{
	RuleElement_obj _hx_dummy;
	RuleElement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.elements.RuleElement",43,f0,0e,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RuleElement_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RuleElement_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RuleElement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RuleElement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RuleElement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RuleElement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements
