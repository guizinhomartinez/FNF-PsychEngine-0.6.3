#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_DateUtils
#include <haxe/ui/components/_Calendar/DateUtils.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_98ac011bc6b9590c_200_getEndDay,"haxe.ui.components._Calendar.DateUtils","getEndDay",0x9d22c255,"haxe.ui.components._Calendar.DateUtils.getEndDay","haxe/ui/components/Calendar.hx",200,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_98ac011bc6b9590c_218_previousMonth,"haxe.ui.components._Calendar.DateUtils","previousMonth",0x01fdce67,"haxe.ui.components._Calendar.DateUtils.previousMonth","haxe/ui/components/Calendar.hx",218,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_98ac011bc6b9590c_233_nextMonth,"haxe.ui.components._Calendar.DateUtils","nextMonth",0xda04952b,"haxe.ui.components._Calendar.DateUtils.nextMonth","haxe/ui/components/Calendar.hx",233,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_98ac011bc6b9590c_248_previousYear,"haxe.ui.components._Calendar.DateUtils","previousYear",0xb9d92476,"haxe.ui.components._Calendar.DateUtils.previousYear","haxe/ui/components/Calendar.hx",248,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_98ac011bc6b9590c_259_nextYear,"haxe.ui.components._Calendar.DateUtils","nextYear",0x87286232,"haxe.ui.components._Calendar.DateUtils.nextYear","haxe/ui/components/Calendar.hx",259,0xa4f8a419)
namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{

void DateUtils_obj::__construct() { }

Dynamic DateUtils_obj::__CreateEmpty() { return new DateUtils_obj; }

void *DateUtils_obj::_hx_vtable = 0;

Dynamic DateUtils_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DateUtils_obj > _hx_result = new DateUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DateUtils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x708ebc7e;
}

int DateUtils_obj::getEndDay(int month,int year){
            	HX_STACKFRAME(&_hx_pos_98ac011bc6b9590c_200_getEndDay)
HXLINE( 201)		int endDay = -1;
HXLINE( 202)		switch((int)(month)){
            			case (int)1: {
HXLINE( 204)				bool _hx_tmp;
HXDLIN( 204)				if ((::hx::Mod(year,400) != 0)) {
HXLINE( 204)					if ((::hx::Mod(year,100) != 0)) {
HXLINE( 204)						_hx_tmp = (::hx::Mod(year,4) == 0);
            					}
            					else {
HXLINE( 204)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 204)					_hx_tmp = true;
            				}
HXDLIN( 204)				if (_hx_tmp) {
HXLINE( 205)					endDay = 29;
            				}
            				else {
HXLINE( 207)					endDay = 28;
            				}
            			}
            			break;
            			case (int)3: case (int)5: case (int)8: case (int)10: {
HXLINE( 210)				endDay = 30;
            			}
            			break;
            			default:{
HXLINE( 212)				endDay = 31;
            			}
            		}
HXLINE( 215)		return endDay;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateUtils_obj,getEndDay,return )

 ::Date DateUtils_obj::previousMonth( ::Date date){
            	HX_GC_STACKFRAME(&_hx_pos_98ac011bc6b9590c_218_previousMonth)
HXLINE( 219)		int year = date->getFullYear();
HXLINE( 220)		int month = date->getMonth();
HXLINE( 221)		int day = date->getDate();
HXLINE( 223)		month = (month - 1);
HXLINE( 224)		if ((month < 0)) {
HXLINE( 225)			month = 11;
HXLINE( 226)			year = (year - 1);
            		}
HXLINE( 228)		day = ::hx::TCast< int >::cast(::Math_obj::min(( (Float)(day) ),( (Float)(::haxe::ui::components::_Calendar::DateUtils_obj::getEndDay(month,year)) )));
HXLINE( 229)		date =  ::Date_obj::__alloc( HX_CTX ,year,month,day,0,0,0);
HXLINE( 230)		return date;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DateUtils_obj,previousMonth,return )

 ::Date DateUtils_obj::nextMonth( ::Date date){
            	HX_GC_STACKFRAME(&_hx_pos_98ac011bc6b9590c_233_nextMonth)
HXLINE( 234)		int year = date->getFullYear();
HXLINE( 235)		int month = date->getMonth();
HXLINE( 236)		int day = date->getDate();
HXLINE( 238)		month = (month + 1);
HXLINE( 239)		if ((month > 11)) {
HXLINE( 240)			month = 0;
HXLINE( 241)			year = (year + 1);
            		}
HXLINE( 243)		day = ::hx::TCast< int >::cast(::Math_obj::min(( (Float)(day) ),( (Float)(::haxe::ui::components::_Calendar::DateUtils_obj::getEndDay(month,year)) )));
HXLINE( 244)		date =  ::Date_obj::__alloc( HX_CTX ,year,month,day,0,0,0);
HXLINE( 245)		return date;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DateUtils_obj,nextMonth,return )

 ::Date DateUtils_obj::previousYear( ::Date date){
            	HX_GC_STACKFRAME(&_hx_pos_98ac011bc6b9590c_248_previousYear)
HXLINE( 249)		int year = date->getFullYear();
HXLINE( 250)		int month = date->getMonth();
HXLINE( 251)		int day = date->getDate();
HXLINE( 253)		year = (year - 1);
HXLINE( 254)		day = ::hx::TCast< int >::cast(::Math_obj::min(( (Float)(day) ),( (Float)(::haxe::ui::components::_Calendar::DateUtils_obj::getEndDay(month,year)) )));
HXLINE( 255)		date =  ::Date_obj::__alloc( HX_CTX ,year,month,day,0,0,0);
HXLINE( 256)		return date;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DateUtils_obj,previousYear,return )

 ::Date DateUtils_obj::nextYear( ::Date date){
            	HX_GC_STACKFRAME(&_hx_pos_98ac011bc6b9590c_259_nextYear)
HXLINE( 260)		int year = date->getFullYear();
HXLINE( 261)		int month = date->getMonth();
HXLINE( 262)		int day = date->getDate();
HXLINE( 264)		year = (year + 1);
HXLINE( 265)		day = ::hx::TCast< int >::cast(::Math_obj::min(( (Float)(day) ),( (Float)(::haxe::ui::components::_Calendar::DateUtils_obj::getEndDay(month,year)) )));
HXLINE( 266)		date =  ::Date_obj::__alloc( HX_CTX ,year,month,day,0,0,0);
HXLINE( 267)		return date;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DateUtils_obj,nextYear,return )


DateUtils_obj::DateUtils_obj()
{
}

bool DateUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"nextYear") ) { outValue = nextYear_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getEndDay") ) { outValue = getEndDay_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"nextMonth") ) { outValue = nextMonth_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousYear") ) { outValue = previousYear_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"previousMonth") ) { outValue = previousMonth_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DateUtils_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DateUtils_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DateUtils_obj::__mClass;

static ::String DateUtils_obj_sStaticFields[] = {
	HX_("getEndDay",77,0e,c3,76),
	HX_("previousMonth",89,d3,53,33),
	HX_("nextMonth",4d,e1,a4,b3),
	HX_("previousYear",94,99,e9,f6),
	HX_("nextYear",50,70,14,fc),
	::String(null())
};

void DateUtils_obj::__register()
{
	DateUtils_obj _hx_dummy;
	DateUtils_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Calendar.DateUtils",cc,32,4e,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DateUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DateUtils_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DateUtils_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DateUtils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DateUtils_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Calendar
