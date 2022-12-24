#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ui_CallLater
#include <haxe/ui/CallLater.h>
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
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_TypeMap
#include <haxe/ui/core/TypeMap.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_Actuator
#include <haxe/ui/styles/animation/util/Actuator.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_ActuatorOptions
#include <haxe/ui/styles/animation/util/ActuatorOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_ColorPropertyDetails
#include <haxe/ui/styles/animation/util/ColorPropertyDetails.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_PropertyDetails
#include <haxe/ui/styles/animation/util/PropertyDetails.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_StringPropertyDetails
#include <haxe/ui/styles/animation/util/StringPropertyDetails.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util__Actuator_Ease
#include <haxe/ui/styles/animation/util/_Actuator/Ease.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StyleUtil
#include <haxe/ui/util/StyleUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_01a0595adc97b707_20_new,"haxe.ui.styles.animation.util.Actuator","new",0x3f4e5213,"haxe.ui.styles.animation.util.Actuator.new","haxe/ui/styles/animation/util/Actuator.hx",20,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_71_stop,"haxe.ui.styles.animation.util.Actuator","stop",0x2892eaef,"haxe.ui.styles.animation.util.Actuator.stop","haxe/ui/styles/animation/util/Actuator.hx",71,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_79_run,"haxe.ui.styles.animation.util.Actuator","run",0x3f5168fe,"haxe.ui.styles.animation.util.Actuator.run","haxe/ui/styles/animation/util/Actuator.hx",79,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_111__initialize,"haxe.ui.styles.animation.util.Actuator","_initialize",0xacf4eb22,"haxe.ui.styles.animation.util.Actuator._initialize","haxe/ui/styles/animation/util/Actuator.hx",111,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_237__nextFrame,"haxe.ui.styles.animation.util.Actuator","_nextFrame",0x677878a8,"haxe.ui.styles.animation.util.Actuator._nextFrame","haxe/ui/styles/animation/util/Actuator.hx",237,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_265__isValid,"haxe.ui.styles.animation.util.Actuator","_isValid",0xda29e7a0,"haxe.ui.styles.animation.util.Actuator._isValid","haxe/ui/styles/animation/util/Actuator.hx",265,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_280__apply,"haxe.ui.styles.animation.util.Actuator","_apply",0xb4401cdc,"haxe.ui.styles.animation.util.Actuator._apply","haxe/ui/styles/animation/util/Actuator.hx",280,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_321__finish,"haxe.ui.styles.animation.util.Actuator","_finish",0xfa7f2925,"haxe.ui.styles.animation.util.Actuator._finish","haxe/ui/styles/animation/util/Actuator.hx",321,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_24_tween,"haxe.ui.styles.animation.util.Actuator","tween",0xed553ede,"haxe.ui.styles.animation.util.Actuator.tween","haxe/ui/styles/animation/util/Actuator.hx",24,0xdc64e2fe)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{

void Actuator_obj::__construct( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_20_new)
HXLINE(  52)		this->delay = ((Float)0);
HXLINE(  46)		this->duration = ((Float)0);
HXLINE(  55)		this->target = target;
HXLINE(  56)		this->properties = properties;
HXLINE(  57)		this->duration = duration;
HXLINE(  59)		if (::hx::IsNotNull( options )) {
HXLINE(  60)			 ::haxe::ui::styles::EasingFunction _hx_tmp;
HXDLIN(  60)			if (::hx::IsNotNull( options->easingFunction )) {
HXLINE(  60)				_hx_tmp = options->easingFunction;
            			}
            			else {
HXLINE(  60)				_hx_tmp = ::haxe::ui::styles::EasingFunction_obj::EASE_dyn();
            			}
HXDLIN(  60)			this->_easeFunc = ::haxe::ui::styles::animation::util::_Actuator::Ease_obj::get(_hx_tmp);
HXLINE(  62)			if (::hx::IsNotNull( options->delay )) {
HXLINE(  62)				this->delay = ( (Float)(options->delay) );
            			}
HXLINE(  63)			if (::hx::IsNotNull( options->onComplete )) {
HXLINE(  63)				this->_onComplete = options->onComplete;
            			}
HXLINE(  64)			if (::hx::IsNotNull( options->onUpdate )) {
HXLINE(  64)				this->_onUpdate = options->onUpdate;
            			}
            		}
            	}

Dynamic Actuator_obj::__CreateEmpty() { return new Actuator_obj; }

void *Actuator_obj::_hx_vtable = 0;

Dynamic Actuator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Actuator_obj > _hx_result = new Actuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Actuator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d51ba5f;
}

void Actuator_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_71_stop)
HXLINE(  72)		this->_stopped = true;
HXLINE(  73)		this->target = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,stop,(void))

void Actuator_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_79_run)
HXLINE(  80)		this->_initialize();
HXLINE(  82)		this->_stopped = false;
HXLINE(  84)		if ((this->duration == 0)) {
HXLINE(  85)			this->_apply(( (Float)(1) ));
HXLINE(  86)			this->_finish();
            		}
            		else {
HXLINE(  88)			this->_currentTime =  ::__time_stamp();
HXLINE(  90)			if ((this->delay > 0)) {
HXLINE(  91)				::haxe::ui::util::Timer_obj::delay(this->_nextFrame_dyn(),::Std_obj::_hx_int((this->delay * ( (Float)(1000) ))));
            			}
            			else {
HXLINE(  93)				 ::haxe::ui::CallLater_obj::__alloc( HX_CTX ,this->_nextFrame_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,run,(void))

void Actuator_obj::_initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_111__initialize)
HXLINE( 112)		if ((this->_isValid() == false)) {
HXLINE( 113)			this->stop();
HXLINE( 114)			return;
            		}
HXLINE( 117)		this->_propertyDetails = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 118)		this->_colorPropertyDetails = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 119)		this->_stringPropertyDetails = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 121)		{
HXLINE( 121)			int _g = 0;
HXDLIN( 121)			::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN( 121)			while((_g < _g1->length)){
HXLINE( 121)				::String p = _g1->__get(_g);
HXDLIN( 121)				_g = (_g + 1);
HXLINE( 122)				::String componentProperty = ::haxe::ui::util::StyleUtil_obj::styleProperty2ComponentProperty(p);
HXLINE( 124)				 ::Dynamic end = ::Reflect_obj::getProperty(this->properties,p);
HXLINE( 125)				if ((end.StaticCast< ::hx::EnumBase >()->_hx_getIndex() == 3)) {
HXLINE( 126)					 ::haxe::ui::styles::Dimension _g = end.StaticCast< ::hx::EnumBase >()->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 126)					if ((_g->_hx_getIndex() == 0)) {
HXLINE( 126)						Float v = _g->_hx_getFloat(0);
HXLINE( 127)						componentProperty = (HX_("percent",c5,aa,da,78) + ::haxe::ui::util::StringUtil_obj::capitalizeFirstLetter(componentProperty));
            					}
            				}
HXLINE( 131)				 ::Dynamic start = ::Reflect_obj::getProperty(this->target,componentProperty);
HXLINE( 132)				if (::hx::IsNull( start )) {
HXLINE( 133)					switch((int)(end.StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 136)							::String v = end.StaticCast< ::hx::EnumBase >()->_hx_getString(0);
HXLINE( 137)							start = v;
            						}
            						break;
            						case (int)1: {
HXLINE( 134)							Float v = end.StaticCast< ::hx::EnumBase >()->_hx_getFloat(0);
HXLINE( 135)							start = 0;
            						}
            						break;
            						case (int)3: {
HXLINE( 134)							 ::haxe::ui::styles::Dimension _g = end.StaticCast< ::hx::EnumBase >()->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 134)							if ((_g->_hx_getIndex() == 0)) {
HXLINE( 134)								Float v = _g->_hx_getFloat(0);
HXLINE( 135)								start = 0;
            							}
            						}
            						break;
            						default:{
            						}
            					}
            				}
HXLINE( 142)				bool isVariant = false;
HXLINE( 143)				if (::hx::IsNotNull( start )) {
HXLINE( 144)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 145)						if ((start.StaticCast< ::hx::EnumBase >()->_hx_getIndex() == 2)) {
HXLINE( 146)							::String v = start.StaticCast< ::hx::EnumBase >()->_hx_getString(0);
HXDLIN( 146)							{
HXLINE( 147)								start = v;
HXLINE( 148)								isVariant = true;
            							}
            						}
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 151)							{
HXLINE( 151)								null();
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
HXLINE( 154)				if (::hx::IsNotNull( end )) {
HXLINE( 155)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 156)						if ((end.StaticCast< ::hx::EnumBase >()->_hx_getIndex() == 2)) {
HXLINE( 157)							::String v = end.StaticCast< ::hx::EnumBase >()->_hx_getString(0);
HXDLIN( 157)							{
HXLINE( 158)								end = v;
HXLINE( 159)								isVariant = true;
            							}
            						}
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 162)							{
HXLINE( 162)								null();
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
HXLINE( 165)				bool _hx_tmp;
HXDLIN( 165)				if (::hx::IsNotNull( start )) {
HXLINE( 165)					_hx_tmp = ::hx::IsNull( end );
            				}
            				else {
HXLINE( 165)					_hx_tmp = true;
            				}
HXDLIN( 165)				if (_hx_tmp) {
HXLINE( 166)					continue;
            				}
HXLINE( 168)				switch((int)(end.StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 191)						::String v = end.StaticCast< ::hx::EnumBase >()->_hx_getString(0);
HXDLIN( 191)						{
HXLINE( 193)							::String startVal = ( (::String)(start) );
HXLINE( 194)							::String endVal = ::haxe::ui::styles::ValueTools_obj::string(end);
HXLINE( 195)							if ((endVal.indexOf(HX_("[[",a0,4f,00,00),null()) != -1)) {
HXLINE( 196)								int n1 = endVal.indexOf(HX_("[[",a0,4f,00,00),null());
HXLINE( 197)								int n2 = (endVal.indexOf(HX_("]]",60,51,00,00),null()) + 2);
HXLINE( 198)								::String before = endVal.substr(0,n1);
HXLINE( 199)								::String after = endVal.substr(n2,null());
HXLINE( 202)								::String s = ::StringTools_obj::replace(startVal,before,HX_("",00,00,00,00));
HXLINE( 203)								s = ::StringTools_obj::replace(s,after,HX_("",00,00,00,00));
HXLINE( 204)								 ::Dynamic startInt = ::Std_obj::parseInt(s);
HXLINE( 206)								::String s1 = ::StringTools_obj::replace(endVal,(before + HX_("[[",a0,4f,00,00)),HX_("",00,00,00,00));
HXLINE( 207)								s1 = ::StringTools_obj::replace(s1,(HX_("]]",60,51,00,00) + after),HX_("",00,00,00,00));
HXLINE( 208)								 ::Dynamic endInt = ::Std_obj::parseInt(s1);
HXLINE( 210)								 ::haxe::ui::styles::animation::util::StringPropertyDetails details =  ::haxe::ui::styles::animation::util::StringPropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,startVal,endVal);
HXLINE( 211)								details->pattern = ((before + HX_("[[n]]",ae,fd,f0,a1)) + after);
HXLINE( 212)								details->startInt = ( (int)(startInt) );
HXLINE( 213)								details->changeInt = (( (int)(endInt) ) - ( (int)(startInt) ));
HXLINE( 214)								::String typeInfo = ::haxe::ui::core::TypeMap_obj::getTypeInfo(::Type_obj::getClassName(::Type_obj::getClass(this->target)),componentProperty);
HXLINE( 215)								bool _hx_tmp;
HXDLIN( 215)								bool _hx_tmp1;
HXDLIN( 215)								if (::hx::IsNotNull( typeInfo )) {
HXLINE( 215)									_hx_tmp1 = (isVariant == false);
            								}
            								else {
HXLINE( 215)									_hx_tmp1 = false;
            								}
HXDLIN( 215)								if (_hx_tmp1) {
HXLINE( 215)									_hx_tmp = (typeInfo == HX_("Variant",65,68,33,aa));
            								}
            								else {
HXLINE( 215)									_hx_tmp = false;
            								}
HXDLIN( 215)								if (_hx_tmp) {
HXLINE( 216)									isVariant = true;
            								}
HXLINE( 218)								details->isVariant = isVariant;
HXLINE( 219)								this->_stringPropertyDetails->push(details);
            							}
            							else {
HXLINE( 221)								 ::haxe::ui::styles::animation::util::StringPropertyDetails details =  ::haxe::ui::styles::animation::util::StringPropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,startVal,endVal);
HXLINE( 222)								this->_stringPropertyDetails->push(details);
            							}
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 184)						 ::haxe::ui::styles::Dimension _g = end.StaticCast< ::hx::EnumBase >()->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 184)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 184)							Float v = _g->_hx_getFloat(0);
HXDLIN( 184)							{
HXLINE( 185)								 ::Dynamic val = v;
HXLINE( 186)								if (::hx::IsNotNull( val )) {
HXLINE( 187)									 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(val) ) - ( (Float)(start) )));
HXLINE( 188)									this->_propertyDetails->push(details);
            								}
            							}
            						}
            						else {
HXLINE( 225)							 ::Dynamic val = ::haxe::ui::styles::ValueTools_obj::calcDimension(end);
HXLINE( 226)							if (::hx::IsNotNull( val )) {
HXLINE( 227)								 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(val) ) - ( (Float)(start) )));
HXLINE( 228)								this->_propertyDetails->push(details);
            							}
            							else {
HXLINE( 230)								 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(end) ) - ( (Float)(start) )));
HXLINE( 231)								this->_propertyDetails->push(details);
            							}
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 169)						int v = end.StaticCast< ::hx::EnumBase >()->_hx_getInt(0);
HXDLIN( 169)						{
HXLINE( 170)							int startColor = ::hx::TCast< int >::cast(start);
HXLINE( 171)							int endColor = v;
HXLINE( 172)							 ::haxe::ui::styles::animation::util::ColorPropertyDetails details =  ::haxe::ui::styles::animation::util::ColorPropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,startColor,(((endColor >> 16) & 255) - ((startColor >> 16) & 255)),(((endColor >> 8) & 255) - ((startColor >> 8) & 255)),((endColor & 255) - (startColor & 255)),(((endColor >> 24) & 255) - ((startColor >> 24) & 255)));
HXLINE( 180)							if (::hx::IsNull( this->_colorPropertyDetails )) {
HXLINE( 181)								this->_colorPropertyDetails = ::Array_obj< ::Dynamic>::__new(0);
            							}
HXLINE( 183)							this->_colorPropertyDetails->push(details);
            						}
            					}
            					break;
            					default:{
HXLINE( 225)						 ::Dynamic val = ::haxe::ui::styles::ValueTools_obj::calcDimension(end);
HXLINE( 226)						if (::hx::IsNotNull( val )) {
HXLINE( 227)							 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(val) ) - ( (Float)(start) )));
HXLINE( 228)							this->_propertyDetails->push(details);
            						}
            						else {
HXLINE( 230)							 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(end) ) - ( (Float)(start) )));
HXLINE( 231)							this->_propertyDetails->push(details);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_initialize,(void))

void Actuator_obj::_nextFrame(){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_237__nextFrame)
HXLINE( 238)		if ((this->_stopped == true)) {
HXLINE( 239)			return;
            		}
HXLINE( 242)		Float currentTime =  ::__time_stamp();
HXLINE( 243)		Float delta = (currentTime - this->_currentTime);
HXLINE( 244)		if ((this->delay < 0)) {
HXLINE( 245)			delta = (delta + -(this->delay));
            		}
HXLINE( 247)		Float tweenPosition = (delta / this->duration);
HXLINE( 248)		if ((tweenPosition > 1)) {
HXLINE( 249)			tweenPosition = ( (Float)(1) );
            		}
HXLINE( 252)		this->_apply(tweenPosition);
HXLINE( 254)		if (::hx::IsNotNull( this->_onUpdate )) {
HXLINE( 255)			this->_onUpdate(currentTime,delta,tweenPosition);
            		}
HXLINE( 258)		if ((delta >= this->duration)) {
HXLINE( 259)			this->_finish();
            		}
            		else {
HXLINE( 261)			 ::haxe::ui::CallLater_obj::__alloc( HX_CTX ,this->_nextFrame_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_nextFrame,(void))

bool Actuator_obj::_isValid(){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_265__isValid)
HXLINE( 266)		if (::hx::IsNull( this->target )) {
HXLINE( 267)			return false;
            		}
HXLINE( 270)		if (::Std_obj::isOfType(this->target,::hx::ClassOf< ::haxe::ui::core::Component >())) {
HXLINE( 271)			 ::haxe::ui::core::Component c = ( ( ::haxe::ui::core::Component)(this->target) );
HXLINE( 272)			if ((c->_isDisposed == true)) {
HXLINE( 273)				return false;
            			}
            		}
HXLINE( 277)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_isValid,return )

void Actuator_obj::_apply(Float position){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_280__apply)
HXLINE( 281)		if ((this->_isValid() == false)) {
HXLINE( 282)			this->stop();
HXLINE( 283)			return;
            		}
HXLINE( 286)		position = ( (Float)(this->_easeFunc(position)) );
HXLINE( 287)		{
HXLINE( 287)			int _g = 0;
HXDLIN( 287)			::Array< ::Dynamic> _g1 = this->_propertyDetails;
HXDLIN( 287)			while((_g < _g1->length)){
HXLINE( 287)				 ::haxe::ui::styles::animation::util::PropertyDetails details = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::animation::util::PropertyDetails >();
HXDLIN( 287)				_g = (_g + 1);
HXLINE( 288)				::Reflect_obj::setProperty(this->target,details->propertyName,(details->start + (details->change * position)));
            			}
            		}
HXLINE( 291)		{
HXLINE( 291)			int _g2 = 0;
HXDLIN( 291)			::Array< ::Dynamic> _g3 = this->_stringPropertyDetails;
HXDLIN( 291)			while((_g2 < _g3->length)){
HXLINE( 291)				 ::haxe::ui::styles::animation::util::StringPropertyDetails details = _g3->__get(_g2).StaticCast<  ::haxe::ui::styles::animation::util::StringPropertyDetails >();
HXDLIN( 291)				_g2 = (_g2 + 1);
HXLINE( 292)				if (::hx::IsNotNull( details->pattern )) {
HXLINE( 293)					int newInt = ::Std_obj::_hx_int((details->startInt + (position * ( (Float)(details->changeInt) ))));
HXLINE( 294)					::String newString = ::StringTools_obj::replace(details->pattern,HX_("[[n]]",ae,fd,f0,a1),(HX_("",00,00,00,00) + newInt));
HXLINE( 295)					if (details->isVariant) {
HXLINE( 296)						 ::haxe::ui::util::VariantType v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(newString);
HXLINE( 297)						::Reflect_obj::setProperty(this->target,details->propertyName,v);
            					}
            					else {
HXLINE( 299)						::Reflect_obj::setProperty(this->target,details->propertyName,newString);
            					}
            				}
            				else {
HXLINE( 302)					if ((position != 1)) {
HXLINE( 303)						::Reflect_obj::setProperty(this->target,details->propertyName,details->start);
            					}
            					else {
HXLINE( 305)						::Reflect_obj::setProperty(this->target,details->propertyName,details->end);
            					}
            				}
            			}
            		}
HXLINE( 310)		{
HXLINE( 310)			int _g4 = 0;
HXDLIN( 310)			::Array< ::Dynamic> _g5 = this->_colorPropertyDetails;
HXDLIN( 310)			while((_g4 < _g5->length)){
HXLINE( 310)				 ::haxe::ui::styles::animation::util::ColorPropertyDetails details = _g5->__get(_g4).StaticCast<  ::haxe::ui::styles::animation::util::ColorPropertyDetails >();
HXDLIN( 310)				_g4 = (_g4 + 1);
HXLINE( 312)				int currentColor = ::Std_obj::_hx_int((((details->start >> 16) & 255) + (( (Float)(details->changeR) ) * position)));
HXLINE( 313)				int currentColor1 = ::Std_obj::_hx_int((((details->start >> 8) & 255) + (( (Float)(details->changeG) ) * position)));
HXLINE( 314)				int currentColor2 = ::Std_obj::_hx_int(((details->start & 255) + (( (Float)(details->changeB) ) * position)));
HXLINE( 311)				int currentColor3 = ::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(currentColor,currentColor1,currentColor2,::Std_obj::_hx_int((((details->start >> 24) & 255) + (( (Float)(details->changeA) ) * position))));
HXLINE( 317)				::Reflect_obj::setProperty(details->target,details->propertyName,currentColor3);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,_apply,(void))

void Actuator_obj::_finish(){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_321__finish)
HXLINE( 322)		this->_stopped = true;
HXLINE( 323)		this->target = null();
HXLINE( 324)		if (::hx::IsNotNull( this->_onComplete )) {
HXLINE( 325)			this->_onComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_finish,(void))

 ::haxe::ui::styles::animation::util::Actuator Actuator_obj::tween( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_24_tween)
HXLINE(  25)		 ::haxe::ui::styles::animation::util::Actuator actuator =  ::haxe::ui::styles::animation::util::Actuator_obj::__alloc( HX_CTX ,target,properties,duration,options);
HXLINE(  26)		actuator->run();
HXLINE(  27)		return actuator;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuator_obj,tween,return )


::hx::ObjectPtr< Actuator_obj > Actuator_obj::__new( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options) {
	::hx::ObjectPtr< Actuator_obj > __this = new Actuator_obj();
	__this->__construct(target,properties,duration,options);
	return __this;
}

::hx::ObjectPtr< Actuator_obj > Actuator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options) {
	Actuator_obj *__this = (Actuator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Actuator_obj), true, "haxe.ui.styles.animation.util.Actuator"));
	*(void **)__this = Actuator_obj::_hx_vtable;
	__this->__construct(target,properties,duration,options);
	return __this;
}

Actuator_obj::Actuator_obj()
{
}

void Actuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actuator);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(_currentTime,"_currentTime");
	HX_MARK_MEMBER_NAME(_easeFunc,"_easeFunc");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_MARK_MEMBER_NAME(_stopped,"_stopped");
	HX_MARK_MEMBER_NAME(_propertyDetails,"_propertyDetails");
	HX_MARK_MEMBER_NAME(_colorPropertyDetails,"_colorPropertyDetails");
	HX_MARK_MEMBER_NAME(_stringPropertyDetails,"_stringPropertyDetails");
	HX_MARK_END_CLASS();
}

void Actuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(_currentTime,"_currentTime");
	HX_VISIT_MEMBER_NAME(_easeFunc,"_easeFunc");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_VISIT_MEMBER_NAME(_stopped,"_stopped");
	HX_VISIT_MEMBER_NAME(_propertyDetails,"_propertyDetails");
	HX_VISIT_MEMBER_NAME(_colorPropertyDetails,"_colorPropertyDetails");
	HX_VISIT_MEMBER_NAME(_stringPropertyDetails,"_stringPropertyDetails");
}

::hx::Val Actuator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"_apply") ) { return ::hx::Val( _apply_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_finish") ) { return ::hx::Val( _finish_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"_stopped") ) { return ::hx::Val( _stopped ); }
		if (HX_FIELD_EQ(inName,"_isValid") ) { return ::hx::Val( _isValid_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_easeFunc") ) { return ::hx::Val( _easeFunc ); }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { return ::hx::Val( _onUpdate ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return ::hx::Val( properties ); }
		if (HX_FIELD_EQ(inName,"_nextFrame") ) { return ::hx::Val( _nextFrame_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return ::hx::Val( _onComplete ); }
		if (HX_FIELD_EQ(inName,"_initialize") ) { return ::hx::Val( _initialize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { return ::hx::Val( _currentTime ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_propertyDetails") ) { return ::hx::Val( _propertyDetails ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_colorPropertyDetails") ) { return ::hx::Val( _colorPropertyDetails ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_stringPropertyDetails") ) { return ::hx::Val( _stringPropertyDetails ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Actuator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true; }
	}
	return false;
}

::hx::Val Actuator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stopped") ) { _stopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_easeFunc") ) { _easeFunc=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { _onUpdate=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { _currentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_propertyDetails") ) { _propertyDetails=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_colorPropertyDetails") ) { _colorPropertyDetails=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_stringPropertyDetails") ) { _stringPropertyDetails=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Actuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("properties",f3,fb,0e,61));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("_currentTime",e7,52,98,eb));
	outFields->push(HX_("_stopped",8e,2b,1a,7d));
	outFields->push(HX_("_propertyDetails",6e,e3,27,5c));
	outFields->push(HX_("_colorPropertyDetails",a9,48,5a,47));
	outFields->push(HX_("_stringPropertyDetails",5d,ac,70,14));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Actuator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,properties),HX_("properties",f3,fb,0e,61)},
	{::hx::fsFloat,(int)offsetof(Actuator_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsFloat,(int)offsetof(Actuator_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsFloat,(int)offsetof(Actuator_obj,_currentTime),HX_("_currentTime",e7,52,98,eb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,_easeFunc),HX_("_easeFunc",b1,29,40,eb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,_onComplete),HX_("_onComplete",17,a2,08,30)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,_onUpdate),HX_("_onUpdate",e7,73,48,ae)},
	{::hx::fsBool,(int)offsetof(Actuator_obj,_stopped),HX_("_stopped",8e,2b,1a,7d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Actuator_obj,_propertyDetails),HX_("_propertyDetails",6e,e3,27,5c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Actuator_obj,_colorPropertyDetails),HX_("_colorPropertyDetails",a9,48,5a,47)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Actuator_obj,_stringPropertyDetails),HX_("_stringPropertyDetails",5d,ac,70,14)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Actuator_obj_sStaticStorageInfo = 0;
#endif

static ::String Actuator_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("properties",f3,fb,0e,61),
	HX_("duration",54,0f,8e,14),
	HX_("delay",83,d7,26,d7),
	HX_("stop",02,f0,5b,4c),
	HX_("run",4b,e7,56,00),
	HX_("_currentTime",e7,52,98,eb),
	HX_("_easeFunc",b1,29,40,eb),
	HX_("_onComplete",17,a2,08,30),
	HX_("_onUpdate",e7,73,48,ae),
	HX_("_stopped",8e,2b,1a,7d),
	HX_("_propertyDetails",6e,e3,27,5c),
	HX_("_colorPropertyDetails",a9,48,5a,47),
	HX_("_stringPropertyDetails",5d,ac,70,14),
	HX_("_initialize",6f,fe,44,bf),
	HX_("_nextFrame",fb,0d,6b,09),
	HX_("_isValid",33,72,f6,07),
	HX_("_apply",af,cc,22,20),
	HX_("_finish",f2,51,f6,f4),
	::String(null()) };

::hx::Class Actuator_obj::__mClass;

static ::String Actuator_obj_sStaticFields[] = {
	HX_("tween",6b,aa,70,19),
	::String(null())
};

void Actuator_obj::__register()
{
	Actuator_obj _hx_dummy;
	Actuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.util.Actuator",a1,4c,79,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Actuator_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Actuator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Actuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Actuator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Actuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Actuator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util
