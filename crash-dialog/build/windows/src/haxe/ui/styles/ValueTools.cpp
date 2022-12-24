#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleLookupMap
#include <haxe/ui/styles/StyleLookupMap.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#include <haxe/ui/themes/ThemeManager.h>
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
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_14_parse,"haxe.ui.styles.ValueTools","parse",0xa44338c9,"haxe.ui.styles.ValueTools.parse","haxe/ui/styles/ValueTools.hx",14,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_73_compositeParts,"haxe.ui.styles.ValueTools","compositeParts",0xe7c30c43,"haxe.ui.styles.ValueTools.compositeParts","haxe/ui/styles/ValueTools.hx",73,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_86_composite,"haxe.ui.styles.ValueTools","composite",0x23a1bb9d,"haxe.ui.styles.ValueTools.composite","haxe/ui/styles/ValueTools.hx",86,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_104_isNum,"haxe.ui.styles.ValueTools","isNum",0xa83fb112,"haxe.ui.styles.ValueTools.isNum","haxe/ui/styles/ValueTools.hx",104,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_138_parseColor,"haxe.ui.styles.ValueTools","parseColor",0x40572fda,"haxe.ui.styles.ValueTools.parseColor","haxe/ui/styles/ValueTools.hx",138,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_155_validColor,"haxe.ui.styles.ValueTools","validColor",0x64b55271,"haxe.ui.styles.ValueTools.validColor","haxe/ui/styles/ValueTools.hx",155,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_167_time,"haxe.ui.styles.ValueTools","time",0x4f2bc837,"haxe.ui.styles.ValueTools.time","haxe/ui/styles/ValueTools.hx",167,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_187_variant,"haxe.ui.styles.ValueTools","variant",0x98fbba9b,"haxe.ui.styles.ValueTools.variant","haxe/ui/styles/ValueTools.hx",187,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_206_string,"haxe.ui.styles.ValueTools","string",0x3a36037b,"haxe.ui.styles.ValueTools.string","haxe/ui/styles/ValueTools.hx",206,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_223_bool,"haxe.ui.styles.ValueTools","bool",0x434a8054,"haxe.ui.styles.ValueTools.bool","haxe/ui/styles/ValueTools.hx",223,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_236_none,"haxe.ui.styles.ValueTools","none",0x4b390ee2,"haxe.ui.styles.ValueTools.none","haxe/ui/styles/ValueTools.hx",236,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_249_int,"haxe.ui.styles.ValueTools","int",0x83314405,"haxe.ui.styles.ValueTools.int","haxe/ui/styles/ValueTools.hx",249,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_268_float,"haxe.ui.styles.ValueTools","float",0xe9846e32,"haxe.ui.styles.ValueTools.float","haxe/ui/styles/ValueTools.hx",268,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_285_any,"haxe.ui.styles.ValueTools","any",0x832b3202,"haxe.ui.styles.ValueTools.any","haxe/ui/styles/ValueTools.hx",285,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_304_array,"haxe.ui.styles.ValueTools","array",0x0c7d162f,"haxe.ui.styles.ValueTools.array","haxe/ui/styles/ValueTools.hx",304,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_317_percent,"haxe.ui.styles.ValueTools","percent",0x34f424db,"haxe.ui.styles.ValueTools.percent","haxe/ui/styles/ValueTools.hx",317,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_335_constant,"haxe.ui.styles.ValueTools","constant",0x7fcf1a8e,"haxe.ui.styles.ValueTools.constant","haxe/ui/styles/ValueTools.hx",335,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_348_calcDimension,"haxe.ui.styles.ValueTools","calcDimension",0xf6caf6a7,"haxe.ui.styles.ValueTools.calcDimension","haxe/ui/styles/ValueTools.hx",348,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_379_calcEasing,"haxe.ui.styles.ValueTools","calcEasing",0x09456eca,"haxe.ui.styles.ValueTools.calcEasing","haxe/ui/styles/ValueTools.hx",379,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_402_call,"haxe.ui.styles.ValueTools","call",0x43e914c8,"haxe.ui.styles.ValueTools.call","haxe/ui/styles/ValueTools.hx",402,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_12_boot,"haxe.ui.styles.ValueTools","boot",0x434a805c,"haxe.ui.styles.ValueTools.boot","haxe/ui/styles/ValueTools.hx",12,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_118_boot,"haxe.ui.styles.ValueTools","boot",0x434a805c,"haxe.ui.styles.ValueTools.boot","haxe/ui/styles/ValueTools.hx",118,0x39dab2b9)
namespace haxe{
namespace ui{
namespace styles{

void ValueTools_obj::__construct() { }

Dynamic ValueTools_obj::__CreateEmpty() { return new ValueTools_obj; }

void *ValueTools_obj::_hx_vtable = 0;

Dynamic ValueTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValueTools_obj > _hx_result = new ValueTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ValueTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ea297a6;
}

 ::EReg ValueTools_obj::timeEReg;

 ::haxe::ui::styles::Value ValueTools_obj::parse(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_14_parse)
HXLINE(  15)		 ::haxe::ui::styles::Value v = null();
HXLINE(  17)		bool hasSpace = (s.indexOf(HX_(" ",20,00,00,00),null()) != -1);
HXLINE(  19)		bool _hx_tmp;
HXDLIN(  19)		if ((::StringTools_obj::endsWith(s,HX_("%",25,00,00,00)) == true)) {
HXLINE(  19)			_hx_tmp = (hasSpace == false);
            		}
            		else {
HXLINE(  19)			_hx_tmp = false;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  20)			v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::PERCENT(::Std_obj::parseFloat(s)));
            		}
            		else {
HXLINE(  21)			bool _hx_tmp;
HXDLIN(  21)			if ((::StringTools_obj::endsWith(s,HX_("px",08,62,00,00)) == true)) {
HXLINE(  21)				_hx_tmp = (hasSpace == false);
            			}
            			else {
HXLINE(  21)				_hx_tmp = false;
            			}
HXDLIN(  21)			if (_hx_tmp) {
HXLINE(  22)				v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::PX(::Std_obj::parseFloat(s)));
            			}
            			else {
HXLINE(  23)				bool _hx_tmp;
HXDLIN(  23)				if ((::StringTools_obj::endsWith(s,HX_("vw",41,67,00,00)) == true)) {
HXLINE(  23)					_hx_tmp = (hasSpace == false);
            				}
            				else {
HXLINE(  23)					_hx_tmp = false;
            				}
HXDLIN(  23)				if (_hx_tmp) {
HXLINE(  24)					v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::VW(::Std_obj::parseFloat(s)));
            				}
            				else {
HXLINE(  25)					bool _hx_tmp;
HXDLIN(  25)					if ((::StringTools_obj::endsWith(s,HX_("vh",32,67,00,00)) == true)) {
HXLINE(  25)						_hx_tmp = (hasSpace == false);
            					}
            					else {
HXLINE(  25)						_hx_tmp = false;
            					}
HXDLIN(  25)					if (_hx_tmp) {
HXLINE(  26)						v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::VH(::Std_obj::parseFloat(s)));
            					}
            					else {
HXLINE(  27)						bool _hx_tmp;
HXDLIN(  27)						if ((::StringTools_obj::endsWith(s,HX_("rem",5a,d9,56,00)) == true)) {
HXLINE(  27)							_hx_tmp = (hasSpace == false);
            						}
            						else {
HXLINE(  27)							_hx_tmp = false;
            						}
HXDLIN(  27)						if (_hx_tmp) {
HXLINE(  28)							v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::REM(::Std_obj::parseFloat(s)));
            						}
            						else {
HXLINE(  29)							if (::haxe::ui::styles::ValueTools_obj::validColor(s)) {
HXLINE(  30)								v = ::haxe::ui::styles::ValueTools_obj::parseColor(s);
            							}
            							else {
HXLINE(  31)								if ((s == HX_("none",b8,12,0a,49))) {
HXLINE(  32)									v = ::haxe::ui::styles::Value_obj::VNone_dyn();
            								}
            								else {
HXLINE(  33)									bool _hx_tmp;
HXDLIN(  33)									if ((s.indexOf(HX_("(",28,00,00,00),null()) != -1)) {
HXLINE(  33)										_hx_tmp = ::StringTools_obj::endsWith(s,HX_(")",29,00,00,00));
            									}
            									else {
HXLINE(  33)										_hx_tmp = false;
            									}
HXDLIN(  33)									if (_hx_tmp) {
HXLINE(  34)										int n = s.indexOf(HX_("(",28,00,00,00),null());
HXLINE(  35)										::String f = s.substr(0,n);
HXLINE(  36)										::String params = s.substr((n + 1),((s.length - n) - 2));
HXLINE(  37)										if ((f == HX_("calc",95,18,ba,41))) {
HXLINE(  38)											params = ((HX_("'",27,00,00,00) + params) + HX_("'",27,00,00,00));
            										}
HXLINE(  40)										::Array< ::Dynamic> vl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  41)										{
HXLINE(  41)											int _g = 0;
HXDLIN(  41)											::Array< ::String > _g1 = params.split(HX_(",",2c,00,00,00));
HXDLIN(  41)											while((_g < _g1->length)){
HXLINE(  41)												::String p = _g1->__get(_g);
HXDLIN(  41)												_g = (_g + 1);
HXLINE(  42)												p = ::StringTools_obj::trim(p);
HXLINE(  43)												vl->push(::haxe::ui::styles::ValueTools_obj::parse(p));
            											}
            										}
HXLINE(  45)										v = ::haxe::ui::styles::Value_obj::VCall(f,vl);
            									}
            									else {
HXLINE(  46)										bool _hx_tmp;
HXDLIN(  46)										if (::StringTools_obj::startsWith(s,HX_("\"",22,00,00,00))) {
HXLINE(  46)											_hx_tmp = ::StringTools_obj::endsWith(s,HX_("\"",22,00,00,00));
            										}
            										else {
HXLINE(  46)											_hx_tmp = false;
            										}
HXDLIN(  46)										if (_hx_tmp) {
HXLINE(  47)											v = ::haxe::ui::styles::Value_obj::VString(s.substr(1,(s.length - 2)));
            										}
            										else {
HXLINE(  48)											bool _hx_tmp;
HXDLIN(  48)											if (::StringTools_obj::startsWith(s,HX_("'",27,00,00,00))) {
HXLINE(  48)												_hx_tmp = ::StringTools_obj::endsWith(s,HX_("'",27,00,00,00));
            											}
            											else {
HXLINE(  48)												_hx_tmp = false;
            											}
HXDLIN(  48)											if (_hx_tmp) {
HXLINE(  49)												v = ::haxe::ui::styles::Value_obj::VString(s.substr(1,(s.length - 2)));
            											}
            											else {
HXLINE(  50)												if ((::haxe::ui::styles::ValueTools_obj::isNum(s) == true)) {
HXLINE(  51)													v = ::haxe::ui::styles::Value_obj::VNumber(::Std_obj::parseFloat(s));
            												}
            												else {
HXLINE(  52)													bool _hx_tmp;
HXDLIN(  52)													if ((s != HX_("true",4e,a7,03,4d))) {
HXLINE(  52)														_hx_tmp = (s == HX_("false",a3,35,4f,fb));
            													}
            													else {
HXLINE(  52)														_hx_tmp = true;
            													}
HXDLIN(  52)													if (_hx_tmp) {
HXLINE(  53)														v = ::haxe::ui::styles::Value_obj::VBool((s == HX_("true",4e,a7,03,4d)));
            													}
            													else {
HXLINE(  54)														if (::haxe::ui::styles::ValueTools_obj::timeEReg->match(s)) {
HXLINE(  55)															Float v1 = ::Std_obj::parseFloat(::haxe::ui::styles::ValueTools_obj::timeEReg->matched(1));
HXDLIN(  55)															v = ::haxe::ui::styles::Value_obj::VTime(v1,::haxe::ui::styles::ValueTools_obj::timeEReg->matched(2));
            														}
            														else {
HXLINE(  57)															::Array< ::String > arr = s.split(HX_(" ",20,00,00,00));
HXLINE(  58)															if ((arr->length == 1)) {
HXLINE(  59)																v = ::haxe::ui::styles::Value_obj::VConstant(s);
            															}
            															else {
HXLINE(  61)																::Array< ::Dynamic> vl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  62)																{
HXLINE(  62)																	int _g = 0;
HXDLIN(  62)																	while((_g < arr->length)){
HXLINE(  62)																		::String a = arr->__get(_g);
HXDLIN(  62)																		_g = (_g + 1);
HXLINE(  63)																		a = ::StringTools_obj::trim(a);
HXLINE(  64)																		vl->push(::haxe::ui::styles::ValueTools_obj::parse(a));
            																	}
            																}
HXLINE(  66)																v = ::haxe::ui::styles::Value_obj::VComposite(vl);
            															}
            														}
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  70)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,parse,return )

int ValueTools_obj::compositeParts( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_73_compositeParts)
HXLINE(  74)		if (::hx::IsNull( value )) {
HXLINE(  75)			return 0;
            		}
HXLINE(  78)		if ((value->_hx_getIndex() == 7)) {
HXLINE(  79)			::Array< ::Dynamic> vl = value->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  80)			return vl->length;
            		}
            		else {
HXLINE(  82)			return 0;
            		}
HXLINE(  78)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,compositeParts,return )

::Array< ::Dynamic> ValueTools_obj::composite( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_86_composite)
HXLINE(  87)		if (::hx::IsNull( value )) {
HXLINE(  88)			return null();
            		}
HXLINE(  91)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE(  94)				Float _g = value->_hx_getFloat(0);
HXLINE(  95)				return ::Array_obj< ::Dynamic>::__new(1)->init(0,value);
            			}
            			break;
            			case (int)3: {
HXLINE(  94)				 ::haxe::ui::styles::Dimension _g = value->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE(  95)				return ::Array_obj< ::Dynamic>::__new(1)->init(0,value);
            			}
            			break;
            			case (int)7: {
HXLINE(  92)				::Array< ::Dynamic> vl = value->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  93)				return vl;
            			}
            			break;
            			case (int)9: {
HXLINE(  97)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			break;
            			default:{
HXLINE(  99)				return null();
            			}
            		}
HXLINE(  91)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,composite,return )

bool ValueTools_obj::isNum(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_104_isNum)
HXLINE( 105)		bool b = true;
HXLINE( 107)		{
HXLINE( 107)			int _g = 0;
HXDLIN( 107)			int _g1 = s.length;
HXDLIN( 107)			while((_g < _g1)){
HXLINE( 107)				_g = (_g + 1);
HXDLIN( 107)				int i = (_g - 1);
HXLINE( 108)				 ::Dynamic c = s.charCodeAt(i);
HXLINE( 109)				bool _hx_tmp;
HXDLIN( 109)				bool _hx_tmp1;
HXDLIN( 109)				bool _hx_tmp2;
HXDLIN( 109)				if (::hx::IsGreaterEq( c,48 )) {
HXLINE( 109)					_hx_tmp2 = ::hx::IsLessEq( c,57 );
            				}
            				else {
HXLINE( 109)					_hx_tmp2 = false;
            				}
HXDLIN( 109)				if (!(_hx_tmp2)) {
HXLINE( 109)					_hx_tmp1 = ::hx::IsEq( c,46 );
            				}
            				else {
HXLINE( 109)					_hx_tmp1 = true;
            				}
HXDLIN( 109)				if (!(_hx_tmp1)) {
HXLINE( 109)					_hx_tmp = ::hx::IsEq( c,45 );
            				}
            				else {
HXLINE( 109)					_hx_tmp = true;
            				}
HXDLIN( 109)				if (!(_hx_tmp)) {
HXLINE( 110)					b = false;
HXLINE( 111)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 115)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,isNum,return )

 ::haxe::ds::StringMap ValueTools_obj::colors;

 ::haxe::ui::styles::Value ValueTools_obj::parseColor(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_138_parseColor)
HXLINE( 139)		if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE( 140)			s = s.substring(1,null());
HXLINE( 141)			if ((s.length == 6)) {
HXLINE( 142)				return ::haxe::ui::styles::Value_obj::VColor(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s)));
            			}
            			else {
HXLINE( 143)				if ((s.length == 3)) {
HXLINE( 144)					::String _hx_tmp = (HX_("0x",48,2a,00,00) + s.charAt(0));
HXDLIN( 144)					::String _hx_tmp1 = (_hx_tmp + s.charAt(0));
HXDLIN( 144)					::String _hx_tmp2 = (_hx_tmp1 + s.charAt(1));
HXDLIN( 144)					::String _hx_tmp3 = (_hx_tmp2 + s.charAt(1));
HXDLIN( 144)					::String _hx_tmp4 = (_hx_tmp3 + s.charAt(2));
HXDLIN( 144)					return ::haxe::ui::styles::Value_obj::VColor(::Std_obj::parseInt((_hx_tmp4 + s.charAt(2))));
            				}
            			}
            		}
            		else {
HXLINE( 148)			if (::haxe::ui::styles::ValueTools_obj::colors->exists(s)) {
HXLINE( 149)				return ::haxe::ui::styles::Value_obj::VColor(::haxe::ui::styles::ValueTools_obj::colors->get(s));
            			}
            		}
HXLINE( 152)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,parseColor,return )

bool ValueTools_obj::validColor(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_155_validColor)
HXLINE( 156)		bool _hx_tmp;
HXDLIN( 156)		if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE( 156)			if ((s.length != 7)) {
HXLINE( 156)				_hx_tmp = (s.length == 4);
            			}
            			else {
HXLINE( 156)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 156)			_hx_tmp = false;
            		}
HXDLIN( 156)		if (_hx_tmp) {
HXLINE( 157)			return true;
            		}
            		else {
HXLINE( 158)			if (::haxe::ui::styles::ValueTools_obj::colors->exists(s)) {
HXLINE( 159)				return true;
            			}
            		}
HXLINE( 164)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,validColor,return )

 ::Dynamic ValueTools_obj::time( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_167_time)
HXLINE( 168)		if (::hx::IsNull( value )) {
HXLINE( 169)			return null();
            		}
HXLINE( 172)		if ((value->_hx_getIndex() == 8)) {
HXLINE( 173)			Float v = value->_hx_getFloat(0);
HXDLIN( 173)			::String unit = value->_hx_getString(1);
HXLINE( 174)			::String _hx_switch_0 = unit;
            			if (  (_hx_switch_0==HX_("ms",66,5f,00,00)) ){
HXLINE( 178)				return (v / ( (Float)(1000) ));
HXDLIN( 178)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("s",73,00,00,00)) ){
HXLINE( 176)				return v;
HXDLIN( 176)				goto _hx_goto_9;
            			}
            			/* default */{
HXLINE( 180)				return null();
            			}
            			_hx_goto_9:;
            		}
            		else {
HXLINE( 183)			return null();
            		}
HXLINE( 172)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,time,return )

 ::haxe::ui::util::VariantType ValueTools_obj::variant( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_187_variant)
HXLINE( 188)		if (::hx::IsNull( value )) {
HXLINE( 189)			return null();
            		}
HXLINE( 192)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 193)				::String v = value->_hx_getString(0);
HXLINE( 194)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			case (int)1: {
HXLINE( 195)				Float v = value->_hx_getFloat(0);
HXLINE( 196)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			case (int)2: {
HXLINE( 197)				bool v = value->_hx_getBool(0);
HXLINE( 198)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			case (int)5: {
HXLINE( 199)				::String f = value->_hx_getString(0);
HXDLIN( 199)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 200)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(::haxe::ui::styles::ValueTools_obj::call(f,vl));
            			}
            			break;
            			case (int)6: {
HXLINE( 193)				::String v = value->_hx_getString(0);
HXLINE( 194)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			default:{
HXLINE( 202)				return null();
            			}
            		}
HXLINE( 192)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,variant,return )

::String ValueTools_obj::string( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_206_string)
HXLINE( 207)		if (::hx::IsNull( value )) {
HXLINE( 208)			return null();
            		}
HXLINE( 211)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 212)				::String v = value->_hx_getString(0);
HXLINE( 213)				return v;
            			}
            			break;
            			case (int)2: {
HXLINE( 214)				bool v = value->_hx_getBool(0);
HXLINE( 215)				return ::Std_obj::string(v);
            			}
            			break;
            			case (int)5: {
HXLINE( 216)				::String f = value->_hx_getString(0);
HXDLIN( 216)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 217)				return ( (::String)(::haxe::ui::styles::ValueTools_obj::call(f,vl)) );
            			}
            			break;
            			case (int)6: {
HXLINE( 212)				::String v = value->_hx_getString(0);
HXLINE( 213)				return v;
            			}
            			break;
            			default:{
HXLINE( 219)				return null();
            			}
            		}
HXLINE( 211)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,string,return )

 ::Dynamic ValueTools_obj::_hx_bool( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_223_bool)
HXLINE( 224)		if (::hx::IsNull( value )) {
HXLINE( 225)			return null();
            		}
HXLINE( 228)		if ((value->_hx_getIndex() == 2)) {
HXLINE( 229)			bool v = value->_hx_getBool(0);
HXLINE( 230)			return v;
            		}
            		else {
HXLINE( 232)			return null();
            		}
HXLINE( 228)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,_hx_bool,return )

 ::Dynamic ValueTools_obj::none( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_236_none)
HXLINE( 237)		if (::hx::IsNull( value )) {
HXLINE( 238)			return null();
            		}
HXLINE( 241)		if ((value->_hx_getIndex() == 9)) {
HXLINE( 243)			return true;
            		}
            		else {
HXLINE( 245)			return null();
            		}
HXLINE( 241)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,none,return )

 ::Dynamic ValueTools_obj::_hx_int( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_249_int)
HXLINE( 250)		if (::hx::IsNull( value )) {
HXLINE( 251)			return null();
            		}
HXLINE( 254)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE( 257)				Float v = value->_hx_getFloat(0);
HXLINE( 258)				return ::Std_obj::_hx_int(v);
            			}
            			break;
            			case (int)4: {
HXLINE( 255)				int v = value->_hx_getInt(0);
HXLINE( 256)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 261)				::String f = value->_hx_getString(0);
HXDLIN( 261)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 262)				return ::haxe::ui::styles::ValueTools_obj::call(f,vl);
            			}
            			break;
            			case (int)9: {
HXLINE( 260)				return null();
            			}
            			break;
            			default:{
HXLINE( 264)				return null();
            			}
            		}
HXLINE( 254)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,_hx_int,return )

 ::Dynamic ValueTools_obj::_hx_float( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_268_float)
HXLINE( 269)		if (::hx::IsNull( value )) {
HXLINE( 270)			return null();
            		}
HXLINE( 273)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE( 274)				Float v = value->_hx_getFloat(0);
HXLINE( 275)				return v;
            			}
            			break;
            			case (int)4: {
HXLINE( 276)				int v = value->_hx_getInt(0);
HXLINE( 277)				return v;
            			}
            			break;
            			case (int)9: {
HXLINE( 279)				return null();
            			}
            			break;
            			default:{
HXLINE( 281)				return null();
            			}
            		}
HXLINE( 273)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,_hx_float,return )

 ::Dynamic ValueTools_obj::any( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_285_any)
HXLINE( 286)		if (::hx::IsNull( v )) {
HXLINE( 287)			return null();
            		}
HXLINE( 290)		switch((int)(v->_hx_getIndex())){
            			case (int)1: {
HXLINE( 291)				Float v1 = v->_hx_getFloat(0);
HXLINE( 292)				return v1;
            			}
            			break;
            			case (int)2: {
HXLINE( 297)				bool v1 = v->_hx_getBool(0);
HXLINE( 298)				return v1;
            			}
            			break;
            			case (int)3: {
HXLINE( 293)				 ::haxe::ui::styles::Dimension _g = v->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 293)				if ((_g->_hx_getIndex() == 1)) {
HXLINE( 293)					Float v = _g->_hx_getFloat(0);
HXLINE( 294)					return v;
            				}
            				else {
HXLINE( 300)					return null();
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 295)				int v1 = v->_hx_getInt(0);
HXLINE( 296)				return v1;
            			}
            			break;
            			default:{
HXLINE( 300)				return null();
            			}
            		}
HXLINE( 290)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,any,return )

::cpp::VirtualArray ValueTools_obj::array(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_304_array)
HXLINE( 305)		::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 307)		{
HXLINE( 307)			int _g = 0;
HXDLIN( 307)			while((_g < vl->length)){
HXLINE( 307)				 ::haxe::ui::styles::Value v = vl->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 307)				_g = (_g + 1);
HXLINE( 308)				 ::Dynamic a = ::haxe::ui::styles::ValueTools_obj::any(v);
HXLINE( 309)				if (::hx::IsNotNull( a )) {
HXLINE( 310)					arr->push(a);
            				}
            			}
            		}
HXLINE( 314)		return arr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,array,return )

 ::Dynamic ValueTools_obj::percent( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_317_percent)
HXLINE( 318)		if (::hx::IsNull( value )) {
HXLINE( 319)			return null();
            		}
HXLINE( 322)		if ((value->_hx_getIndex() == 3)) {
HXLINE( 323)			 ::haxe::ui::styles::Dimension v = value->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE( 324)			if ((v->_hx_getIndex() == 0)) {
HXLINE( 325)				Float d = v->_hx_getFloat(0);
HXLINE( 326)				return d;
            			}
            			else {
HXLINE( 328)				return null();
            			}
            		}
            		else {
HXLINE( 331)			return null();
            		}
HXLINE( 322)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,percent,return )

bool ValueTools_obj::constant( ::haxe::ui::styles::Value value,::String required){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_335_constant)
HXLINE( 336)		if (::hx::IsNull( value )) {
HXLINE( 337)			return false;
            		}
HXLINE( 340)		if ((value->_hx_getIndex() == 6)) {
HXLINE( 341)			::String v = value->_hx_getString(0);
HXLINE( 342)			return (v == required);
            		}
            		else {
HXLINE( 344)			return false;
            		}
HXLINE( 340)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ValueTools_obj,constant,return )

 ::Dynamic ValueTools_obj::calcDimension( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_348_calcDimension)
HXLINE( 349)		if (::hx::IsNull( value )) {
HXLINE( 350)			return null();
            		}
HXLINE( 353)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE( 367)				Float v = value->_hx_getFloat(0);
HXLINE( 368)				return v;
            			}
            			break;
            			case (int)3: {
HXLINE( 354)				 ::haxe::ui::styles::Dimension v = value->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE( 355)				switch((int)(v->_hx_getIndex())){
            					case (int)1: {
HXLINE( 356)						Float d = v->_hx_getFloat(0);
HXLINE( 357)						return d;
            					}
            					break;
            					case (int)2: {
HXLINE( 358)						Float d = v->_hx_getFloat(0);
HXLINE( 359)						return ((d / ( (Float)(100) )) * ::haxe::ui::core::Screen_obj::get_instance()->get_width());
            					}
            					break;
            					case (int)3: {
HXLINE( 360)						Float d = v->_hx_getFloat(0);
HXLINE( 361)						return ((d / ( (Float)(100) )) * ::haxe::ui::core::Screen_obj::get_instance()->get_height());
            					}
            					break;
            					case (int)4: {
HXLINE( 362)						Float d = v->_hx_getFloat(0);
HXLINE( 363)						return (d * ( (Float)(::haxe::ui::Toolkit_obj::pixelsPerRem) ));
            					}
            					break;
            					default:{
HXLINE( 365)						return null();
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 369)				::String f = value->_hx_getString(0);
HXDLIN( 369)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 370)				return ::haxe::ui::styles::ValueTools_obj::call(f,vl);
            			}
            			break;
            			case (int)9: {
HXLINE( 372)				return null();
            			}
            			break;
            			default:{
HXLINE( 374)				return null();
            			}
            		}
HXLINE( 353)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,calcDimension,return )

 ::haxe::ui::styles::EasingFunction ValueTools_obj::calcEasing( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_379_calcEasing)
HXDLIN( 379)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 380)				::String v = value->_hx_getString(0);
HXLINE( 381)				::String _hx_switch_0 = v;
            				if (  (_hx_switch_0==HX_("ease",ee,8b,0c,43)) ){
HXLINE( 385)					return ::haxe::ui::styles::EasingFunction_obj::EASE_dyn();
HXDLIN( 385)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("ease-in",24,9e,8f,aa)) ){
HXLINE( 387)					return ::haxe::ui::styles::EasingFunction_obj::EASE_IN_dyn();
HXDLIN( 387)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("ease-in-out",a5,ba,36,c6)) ){
HXLINE( 391)					return ::haxe::ui::styles::EasingFunction_obj::EASE_IN_OUT_dyn();
HXDLIN( 391)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("ease-out",6f,55,1f,93)) ){
HXLINE( 389)					return ::haxe::ui::styles::EasingFunction_obj::EASE_OUT_dyn();
HXDLIN( 389)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("linear",e5,51,a0,ec)) ){
HXLINE( 383)					return ::haxe::ui::styles::EasingFunction_obj::LINEAR_dyn();
HXDLIN( 383)					goto _hx_goto_23;
            				}
            				/* default */{
HXLINE( 393)					return null();
            				}
            				_hx_goto_23:;
            			}
            			break;
            			case (int)6: {
HXLINE( 380)				::String v = value->_hx_getString(0);
HXLINE( 381)				::String _hx_switch_1 = v;
            				if (  (_hx_switch_1==HX_("ease",ee,8b,0c,43)) ){
HXLINE( 385)					return ::haxe::ui::styles::EasingFunction_obj::EASE_dyn();
HXDLIN( 385)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_1==HX_("ease-in",24,9e,8f,aa)) ){
HXLINE( 387)					return ::haxe::ui::styles::EasingFunction_obj::EASE_IN_dyn();
HXDLIN( 387)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_1==HX_("ease-in-out",a5,ba,36,c6)) ){
HXLINE( 391)					return ::haxe::ui::styles::EasingFunction_obj::EASE_IN_OUT_dyn();
HXDLIN( 391)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_1==HX_("ease-out",6f,55,1f,93)) ){
HXLINE( 389)					return ::haxe::ui::styles::EasingFunction_obj::EASE_OUT_dyn();
HXDLIN( 389)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_1==HX_("linear",e5,51,a0,ec)) ){
HXLINE( 383)					return ::haxe::ui::styles::EasingFunction_obj::LINEAR_dyn();
HXDLIN( 383)					goto _hx_goto_24;
            				}
            				/* default */{
HXLINE( 393)					return null();
            				}
            				_hx_goto_24:;
            			}
            			break;
            			default:{
HXLINE( 396)				return null();
            			}
            		}
HXLINE( 379)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,calcEasing,return )

 ::Dynamic ValueTools_obj::call(::String f,::Array< ::Dynamic> vl){
            	HX_GC_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_402_call)
HXDLIN( 402)		::String _hx_switch_0 = f;
            		if (  (_hx_switch_0==HX_("calc",95,18,ba,41)) ){
HXLINE( 406)			 ::hscript::Parser parser =  ::hscript::Parser_obj::__alloc( HX_CTX );
HXLINE( 407)			 ::hscript::Expr program = parser->parseString(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >()),null());
HXLINE( 409)			 ::hscript::Interp interp =  ::hscript::Interp_obj::__alloc( HX_CTX );
HXLINE( 410)			return interp->expr(program);
HXLINE( 403)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("clamp",fb,72,58,48)) ){
HXLINE( 438)			 ::Dynamic valNum = ::haxe::ui::styles::ValueTools_obj::calcDimension(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE( 439)			 ::Dynamic minNum = ::haxe::ui::styles::ValueTools_obj::calcDimension(vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE( 440)			 ::Dynamic maxNum = ::haxe::ui::styles::ValueTools_obj::calcDimension(vl->__get(2).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE( 442)			bool _hx_tmp;
HXDLIN( 442)			bool _hx_tmp1;
HXDLIN( 442)			if (::hx::IsNotNull( valNum )) {
HXLINE( 442)				_hx_tmp1 = ::hx::IsNull( minNum );
            			}
            			else {
HXLINE( 442)				_hx_tmp1 = true;
            			}
HXDLIN( 442)			if (!(_hx_tmp1)) {
HXLINE( 442)				_hx_tmp = ::hx::IsNull( maxNum );
            			}
            			else {
HXLINE( 442)				_hx_tmp = true;
            			}
HXDLIN( 442)			if (_hx_tmp) {
HXLINE( 443)				return null();
            			}
            			else {
HXLINE( 444)				if (::hx::IsLess( valNum,minNum )) {
HXLINE( 445)					return minNum;
            				}
            				else {
HXLINE( 446)					if (::hx::IsGreater( valNum,maxNum )) {
HXLINE( 447)						return maxNum;
            					}
            					else {
HXLINE( 449)						return valNum;
            					}
            				}
            			}
HXLINE( 437)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("lookup",7a,a2,b5,61)) ){
HXLINE( 457)			 ::haxe::ui::styles::StyleLookupMap _hx_tmp = ::haxe::ui::styles::StyleLookupMap_obj::get_instance();
HXDLIN( 457)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(_hx_tmp->get(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >())));
HXDLIN( 457)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("max",a4,0a,53,00)) ){
HXLINE( 428)			Float maxv = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 429)			{
HXLINE( 429)				int _g = 0;
HXDLIN( 429)				while((_g < vl->length)){
HXLINE( 429)					 ::haxe::ui::styles::Value val = vl->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 429)					_g = (_g + 1);
HXLINE( 430)					 ::Dynamic num = ::haxe::ui::styles::ValueTools_obj::calcDimension(val);
HXLINE( 431)					if (::hx::IsNull( num )) {
HXLINE( 432)						return null();
            					}
            					else {
HXLINE( 433)						if (::hx::IsGreater( num,maxv )) {
HXLINE( 434)							maxv = ( (Float)(num) );
            						}
            					}
            				}
            			}
HXLINE( 436)			return maxv;
HXLINE( 427)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("min",92,11,53,00)) ){
HXLINE( 418)			Float minv = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 419)			{
HXLINE( 419)				int _g = 0;
HXDLIN( 419)				while((_g < vl->length)){
HXLINE( 419)					 ::haxe::ui::styles::Value val = vl->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 419)					_g = (_g + 1);
HXLINE( 420)					 ::Dynamic num = ::haxe::ui::styles::ValueTools_obj::calcDimension(val);
HXLINE( 421)					if (::hx::IsNull( num )) {
HXLINE( 422)						return null();
            					}
            					else {
HXLINE( 423)						if (::hx::IsLess( num,minv )) {
HXLINE( 424)							minv = ( (Float)(num) );
            						}
            					}
            				}
            			}
HXLINE( 426)			return minv;
HXLINE( 417)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("platform-color",09,e9,38,71)) ){
HXLINE( 451)			 ::haxe::ui::core::Platform value = ::haxe::ui::core::Platform_obj::get_instance();
HXDLIN( 451)			return value->getColor(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >()));
HXDLIN( 451)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("rgb",0d,db,56,00)) ){
HXLINE( 455)			 ::Dynamic value = ::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >());
HXDLIN( 455)			 ::Dynamic value1 = ::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >());
HXDLIN( 455)			return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(( (int)(value) ),( (int)(value1) ),( (int)(::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(2).StaticCast<  ::haxe::ui::styles::Value >())) ),0));
HXDLIN( 455)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("theme-icon",7d,03,22,aa)) ||  (_hx_switch_0==HX_("theme-image",d7,86,32,3a)) ){
HXLINE( 453)			 ::haxe::ui::themes::ThemeManager value = ::haxe::ui::themes::ThemeManager_obj::get_instance();
HXDLIN( 453)			return value->image(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >()));
HXDLIN( 453)			goto _hx_goto_26;
            		}
            		/* default */{
HXLINE( 459)			return null();
            		}
            		_hx_goto_26:;
HXLINE( 402)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ValueTools_obj,call,return )


ValueTools_obj::ValueTools_obj()
{
}

bool ValueTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"any") ) { outValue = any_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _hx_bool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"none") ) { outValue = none_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"call") ) { outValue = call_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isNum") ) { outValue = isNum_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"float") ) { outValue = _hx_float_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { outValue = ( colors ); return true; }
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"variant") ) { outValue = variant_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"percent") ) { outValue = percent_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timeEReg") ) { outValue = ( timeEReg ); return true; }
		if (HX_FIELD_EQ(inName,"constant") ) { outValue = constant_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"composite") ) { outValue = composite_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseColor") ) { outValue = parseColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"validColor") ) { outValue = validColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"calcEasing") ) { outValue = calcEasing_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"calcDimension") ) { outValue = calcDimension_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compositeParts") ) { outValue = compositeParts_dyn(); return true; }
	}
	return false;
}

bool ValueTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timeEReg") ) { timeEReg=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ValueTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ValueTools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &ValueTools_obj::timeEReg,HX_("timeEReg",9c,a0,62,e3)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ValueTools_obj::colors,HX_("colors",b0,c5,86,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ValueTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValueTools_obj::timeEReg,"timeEReg");
	HX_MARK_MEMBER_NAME(ValueTools_obj::colors,"colors");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValueTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValueTools_obj::timeEReg,"timeEReg");
	HX_VISIT_MEMBER_NAME(ValueTools_obj::colors,"colors");
};

#endif

::hx::Class ValueTools_obj::__mClass;

static ::String ValueTools_obj_sStaticFields[] = {
	HX_("timeEReg",9c,a0,62,e3),
	HX_("parse",33,90,55,bd),
	HX_("compositeParts",99,77,03,0a),
	HX_("composite",07,10,a5,12),
	HX_("isNum",7c,08,52,c1),
	HX_("colors",b0,c5,86,c6),
	HX_("parseColor",30,b8,3d,74),
	HX_("validColor",c7,da,9b,98),
	HX_("time",0d,cc,fc,4c),
	HX_("variant",85,40,e2,dc),
	HX_("string",d1,28,30,11),
	HX_("bool",2a,84,1b,41),
	HX_("none",b8,12,0a,49),
	HX_("int",ef,0c,50,00),
	HX_("float",9c,c5,96,02),
	HX_("any",ec,fa,49,00),
	HX_("array",99,6d,8f,25),
	HX_("percent",c5,aa,da,78),
	HX_("constant",64,c1,9d,a5),
	HX_("calcDimension",11,c8,81,d4),
	HX_("calcEasing",20,f7,2b,3d),
	HX_("call",9e,18,ba,41),
	::String(null())
};

void ValueTools_obj::__register()
{
	ValueTools_obj _hx_dummy;
	ValueTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.ValueTools",84,d4,9a,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValueTools_obj::__GetStatic;
	__mClass->mSetStaticField = &ValueTools_obj::__SetStatic;
	__mClass->mMarkFunc = ValueTools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ValueTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ValueTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ValueTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValueTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValueTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ValueTools_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_12_boot)
HXDLIN(  12)		timeEReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(-?\\d+(?:\\.\\d+)?)(s|ms)$",d4,6d,c4,70),HX_("gi",22,5a,00,00));
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_118_boot)
HXDLIN( 118)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 118)			_g->set(HX_("black",bf,d5,f1,b4),0);
HXDLIN( 118)			_g->set(HX_("red",51,d9,56,00),16711680);
HXDLIN( 118)			_g->set(HX_("lime",15,17,b3,47),65280);
HXDLIN( 118)			_g->set(HX_("blue",9a,42,19,41),255);
HXDLIN( 118)			_g->set(HX_("white",a9,4a,bd,c9),16777215);
HXDLIN( 118)			_g->set(HX_("aqua",3c,d7,73,40),65535);
HXDLIN( 118)			_g->set(HX_("fuchsia",d7,c5,0f,9f),16711935);
HXDLIN( 118)			_g->set(HX_("yellow",74,9f,5c,d0),16776960);
HXDLIN( 118)			_g->set(HX_("maroon",70,87,73,ba),8388608);
HXDLIN( 118)			_g->set(HX_("green",c3,0e,ed,99),32768);
HXDLIN( 118)			_g->set(HX_("navy",36,7a,ff,48),128);
HXDLIN( 118)			_g->set(HX_("olive",db,82,2d,31),8421376);
HXDLIN( 118)			_g->set(HX_("purple",3c,f6,89,71),8388736);
HXDLIN( 118)			_g->set(HX_("teal",9c,b8,f9,4c),32896);
HXDLIN( 118)			_g->set(HX_("silver",0d,55,da,b7),12632256);
HXDLIN( 118)			_g->set(HX_("gray",e3,cf,6b,44),8421504);
HXDLIN( 118)			_g->set(HX_("grey",5f,d3,6b,44),8421504);
HXDLIN( 118)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_118_boot)
HXDLIN( 118)		colors = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
