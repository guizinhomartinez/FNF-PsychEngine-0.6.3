#include <hxcpp.h>

#ifndef INCLUDED_cd1f455405216f23
#define INCLUDED_cd1f455405216f23
#include "wx/brush.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_Brush
#include <hx/widgets/Brush.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_StockBrushes
#include <hx/widgets/StockBrushes.h>
#endif
#ifndef INCLUDED_wx_widgets_StockBrushes
#include <wx/widgets/StockBrushes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_23_createStockBrush,"hx.widgets.StockBrushes","createStockBrush",0x66d4e61f,"hx.widgets.StockBrushes.createStockBrush","hx/widgets/StockBrushes.hx",23,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_10_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",10,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_11_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",11,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_12_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",12,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_13_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",13,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_14_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",14,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_15_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",15,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_16_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",16,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_17_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",17,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_18_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",18,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_19_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",19,0x19cab24d)
HX_LOCAL_STACK_FRAME(_hx_pos_477790c37b205c2e_20_boot,"hx.widgets.StockBrushes","boot",0x33e78ff1,"hx.widgets.StockBrushes.boot","hx/widgets/StockBrushes.hx",20,0x19cab24d)
namespace hx{
namespace widgets{

void StockBrushes_obj::__construct() { }

Dynamic StockBrushes_obj::__CreateEmpty() { return new StockBrushes_obj; }

void *StockBrushes_obj::_hx_vtable = 0;

Dynamic StockBrushes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StockBrushes_obj > _hx_result = new StockBrushes_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StockBrushes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01d3b60d;
}

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_BLACK;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_BLUE;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_CYAN;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_GREEN;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_YELLOW;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_GREY;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_LIGHT_GREY;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_MEDIUM_GREY;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_RED;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_TRANSPARENT;

 ::hx::widgets::Brush StockBrushes_obj::BRUSH_WHITE;

 ::hx::widgets::Brush StockBrushes_obj::createStockBrush(::cpp::Pointer<  wxBrush > stock){
            	HX_GC_STACKFRAME(&_hx_pos_477790c37b205c2e_23_createStockBrush)
HXLINE(  24)		 ::hx::widgets::Brush brush =  ::hx::widgets::Brush_obj::__alloc( HX_CTX ,null());
HXLINE(  25)		brush->destroy();
HXLINE(  26)		brush->_ref = ::cpp::Pointer_obj::fromPointer(stock->ptr);
HXLINE(  27)		return brush;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StockBrushes_obj,createStockBrush,return )


StockBrushes_obj::StockBrushes_obj()
{
}

bool StockBrushes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"BRUSH_RED") ) { outValue = ( BRUSH_RED ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BRUSH_BLUE") ) { outValue = ( BRUSH_BLUE ); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_CYAN") ) { outValue = ( BRUSH_CYAN ); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_GREY") ) { outValue = ( BRUSH_GREY ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BRUSH_BLACK") ) { outValue = ( BRUSH_BLACK ); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_GREEN") ) { outValue = ( BRUSH_GREEN ); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_WHITE") ) { outValue = ( BRUSH_WHITE ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BRUSH_YELLOW") ) { outValue = ( BRUSH_YELLOW ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"BRUSH_LIGHT_GREY") ) { outValue = ( BRUSH_LIGHT_GREY ); return true; }
		if (HX_FIELD_EQ(inName,"createStockBrush") ) { outValue = createStockBrush_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BRUSH_MEDIUM_GREY") ) { outValue = ( BRUSH_MEDIUM_GREY ); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_TRANSPARENT") ) { outValue = ( BRUSH_TRANSPARENT ); return true; }
	}
	return false;
}

bool StockBrushes_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"BRUSH_RED") ) { BRUSH_RED=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BRUSH_BLUE") ) { BRUSH_BLUE=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_CYAN") ) { BRUSH_CYAN=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_GREY") ) { BRUSH_GREY=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BRUSH_BLACK") ) { BRUSH_BLACK=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_GREEN") ) { BRUSH_GREEN=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_WHITE") ) { BRUSH_WHITE=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BRUSH_YELLOW") ) { BRUSH_YELLOW=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"BRUSH_LIGHT_GREY") ) { BRUSH_LIGHT_GREY=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BRUSH_MEDIUM_GREY") ) { BRUSH_MEDIUM_GREY=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
		if (HX_FIELD_EQ(inName,"BRUSH_TRANSPARENT") ) { BRUSH_TRANSPARENT=ioValue.Cast<  ::hx::widgets::Brush >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StockBrushes_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StockBrushes_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_BLACK,HX_("BRUSH_BLACK",ba,a4,85,47)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_BLUE,HX_("BRUSH_BLUE",df,0f,59,46)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_CYAN,HX_("BRUSH_CYAN",68,12,0c,47)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_GREEN,HX_("BRUSH_GREEN",be,dd,80,2c)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_YELLOW,HX_("BRUSH_YELLOW",f9,eb,1d,7f)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_GREY,HX_("BRUSH_GREY",a4,a0,ab,49)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_LIGHT_GREY,HX_("BRUSH_LIGHT_GREY",cd,61,8b,e8)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_MEDIUM_GREY,HX_("BRUSH_MEDIUM_GREY",04,4c,08,93)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_RED,HX_("BRUSH_RED",8c,7f,88,66)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_TRANSPARENT,HX_("BRUSH_TRANSPARENT",8d,94,2a,23)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(void *) &StockBrushes_obj::BRUSH_WHITE,HX_("BRUSH_WHITE",a4,19,51,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StockBrushes_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_BLACK,"BRUSH_BLACK");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_BLUE,"BRUSH_BLUE");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_CYAN,"BRUSH_CYAN");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_GREEN,"BRUSH_GREEN");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_YELLOW,"BRUSH_YELLOW");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_GREY,"BRUSH_GREY");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_LIGHT_GREY,"BRUSH_LIGHT_GREY");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_MEDIUM_GREY,"BRUSH_MEDIUM_GREY");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_RED,"BRUSH_RED");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_TRANSPARENT,"BRUSH_TRANSPARENT");
	HX_MARK_MEMBER_NAME(StockBrushes_obj::BRUSH_WHITE,"BRUSH_WHITE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StockBrushes_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_BLACK,"BRUSH_BLACK");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_BLUE,"BRUSH_BLUE");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_CYAN,"BRUSH_CYAN");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_GREEN,"BRUSH_GREEN");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_YELLOW,"BRUSH_YELLOW");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_GREY,"BRUSH_GREY");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_LIGHT_GREY,"BRUSH_LIGHT_GREY");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_MEDIUM_GREY,"BRUSH_MEDIUM_GREY");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_RED,"BRUSH_RED");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_TRANSPARENT,"BRUSH_TRANSPARENT");
	HX_VISIT_MEMBER_NAME(StockBrushes_obj::BRUSH_WHITE,"BRUSH_WHITE");
};

#endif

::hx::Class StockBrushes_obj::__mClass;

static ::String StockBrushes_obj_sStaticFields[] = {
	HX_("BRUSH_BLACK",ba,a4,85,47),
	HX_("BRUSH_BLUE",df,0f,59,46),
	HX_("BRUSH_CYAN",68,12,0c,47),
	HX_("BRUSH_GREEN",be,dd,80,2c),
	HX_("BRUSH_YELLOW",f9,eb,1d,7f),
	HX_("BRUSH_GREY",a4,a0,ab,49),
	HX_("BRUSH_LIGHT_GREY",cd,61,8b,e8),
	HX_("BRUSH_MEDIUM_GREY",04,4c,08,93),
	HX_("BRUSH_RED",8c,7f,88,66),
	HX_("BRUSH_TRANSPARENT",8d,94,2a,23),
	HX_("BRUSH_WHITE",a4,19,51,5c),
	HX_("createStockBrush",e0,b7,06,22),
	::String(null())
};

void StockBrushes_obj::__register()
{
	StockBrushes_obj _hx_dummy;
	StockBrushes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StockBrushes",0f,ed,e1,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StockBrushes_obj::__GetStatic;
	__mClass->mSetStaticField = &StockBrushes_obj::__SetStatic;
	__mClass->mMarkFunc = StockBrushes_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StockBrushes_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StockBrushes_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StockBrushes_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StockBrushes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StockBrushes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StockBrushes_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_10_boot)
HXDLIN(  10)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_BLACK;
HXDLIN(  10)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_10_boot)
HXDLIN(  10)		BRUSH_BLACK = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_11_boot)
HXDLIN(  11)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_BLUE;
HXDLIN(  11)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_11_boot)
HXDLIN(  11)		BRUSH_BLUE = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_12_boot)
HXDLIN(  12)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_CYAN;
HXDLIN(  12)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_12_boot)
HXDLIN(  12)		BRUSH_CYAN = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_13_boot)
HXDLIN(  13)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_GREEN;
HXDLIN(  13)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_13_boot)
HXDLIN(  13)		BRUSH_GREEN = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_14_boot)
HXDLIN(  14)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_YELLOW;
HXDLIN(  14)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_14_boot)
HXDLIN(  14)		BRUSH_YELLOW = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_15_boot)
HXDLIN(  15)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_GREY;
HXDLIN(  15)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_15_boot)
HXDLIN(  15)		BRUSH_GREY = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_16_boot)
HXDLIN(  16)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_LIGHT_GREY;
HXDLIN(  16)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_16_boot)
HXDLIN(  16)		BRUSH_LIGHT_GREY = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_17_boot)
HXDLIN(  17)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_MEDIUM_GREY;
HXDLIN(  17)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_17_boot)
HXDLIN(  17)		BRUSH_MEDIUM_GREY = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_18_boot)
HXDLIN(  18)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_RED;
HXDLIN(  18)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_18_boot)
HXDLIN(  18)		BRUSH_RED = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_19_boot)
HXDLIN(  19)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_TRANSPARENT;
HXDLIN(  19)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_19_boot)
HXDLIN(  19)		BRUSH_TRANSPARENT = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hx::widgets::Brush _hx_run(){
            			HX_STACKFRAME(&_hx_pos_477790c37b205c2e_20_boot)
HXDLIN(  20)			::cpp::Pointer<  wxBrush > tmp = ::wx::widgets::StockBrushes_obj::BRUSH_WHITE;
HXDLIN(  20)			return ::hx::widgets::StockBrushes_obj::createStockBrush(tmp);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_477790c37b205c2e_20_boot)
HXDLIN(  20)		BRUSH_WHITE = ( ( ::hx::widgets::Brush)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace hx
} // end namespace widgets
