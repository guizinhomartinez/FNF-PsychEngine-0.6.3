#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_locale_Formats
#include <haxe/ui/locale/Formats.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2c7244c09707f90c_6_get_dateFormatShort,"haxe.ui.locale.Formats","get_dateFormatShort",0x0a8046da,"haxe.ui.locale.Formats.get_dateFormatShort","haxe/ui/locale/Formats.hx",6,0x718e03a5)
HX_LOCAL_STACK_FRAME(_hx_pos_2c7244c09707f90c_12_set_dateFormatShort,"haxe.ui.locale.Formats","set_dateFormatShort",0x471d39e6,"haxe.ui.locale.Formats.set_dateFormatShort","haxe/ui/locale/Formats.hx",12,0x718e03a5)
HX_LOCAL_STACK_FRAME(_hx_pos_2c7244c09707f90c_19_get_decimalSeperator,"haxe.ui.locale.Formats","get_decimalSeperator",0xd68abd0d,"haxe.ui.locale.Formats.get_decimalSeperator","haxe/ui/locale/Formats.hx",19,0x718e03a5)
HX_LOCAL_STACK_FRAME(_hx_pos_2c7244c09707f90c_25_set_decimalSeperator,"haxe.ui.locale.Formats","set_decimalSeperator",0xa3427481,"haxe.ui.locale.Formats.set_decimalSeperator","haxe/ui/locale/Formats.hx",25,0x718e03a5)
HX_LOCAL_STACK_FRAME(_hx_pos_2c7244c09707f90c_4_boot,"haxe.ui.locale.Formats","boot",0x437c5126,"haxe.ui.locale.Formats.boot","haxe/ui/locale/Formats.hx",4,0x718e03a5)
HX_LOCAL_STACK_FRAME(_hx_pos_2c7244c09707f90c_17_boot,"haxe.ui.locale.Formats","boot",0x437c5126,"haxe.ui.locale.Formats.boot","haxe/ui/locale/Formats.hx",17,0x718e03a5)
namespace haxe{
namespace ui{
namespace locale{

void Formats_obj::__construct() { }

Dynamic Formats_obj::__CreateEmpty() { return new Formats_obj; }

void *Formats_obj::_hx_vtable = 0;

Dynamic Formats_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Formats_obj > _hx_result = new Formats_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Formats_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x357871c4;
}

::String Formats_obj::_dateFormatShort;

::String Formats_obj::get_dateFormatShort(){
            	HX_STACKFRAME(&_hx_pos_2c7244c09707f90c_6_get_dateFormatShort)
HXLINE(   7)		if (::hx::IsNull( ::haxe::ui::locale::Formats_obj::_dateFormatShort )) {
HXLINE(   8)			return ::haxe::ui::locale::LocaleManager_obj::get_instance()->lookupString(HX_("formats.date.short",0e,d4,ee,8b),null(),null(),null(),null());
            		}
HXLINE(  10)		return ::haxe::ui::locale::Formats_obj::_dateFormatShort;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Formats_obj,get_dateFormatShort,return )

::String Formats_obj::set_dateFormatShort(::String value){
            	HX_STACKFRAME(&_hx_pos_2c7244c09707f90c_12_set_dateFormatShort)
HXLINE(  13)		::haxe::ui::locale::Formats_obj::_dateFormatShort = value;
HXLINE(  14)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Formats_obj,set_dateFormatShort,return )

::String Formats_obj::_decimalSeperator;

::String Formats_obj::get_decimalSeperator(){
            	HX_STACKFRAME(&_hx_pos_2c7244c09707f90c_19_get_decimalSeperator)
HXLINE(  20)		if (::hx::IsNull( ::haxe::ui::locale::Formats_obj::_decimalSeperator )) {
HXLINE(  21)			return ::haxe::ui::locale::LocaleManager_obj::get_instance()->lookupString(HX_("formats.decimal.seperator",32,04,e1,c3),null(),null(),null(),null());
            		}
HXLINE(  23)		return ::haxe::ui::locale::Formats_obj::_decimalSeperator;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Formats_obj,get_decimalSeperator,return )

::String Formats_obj::set_decimalSeperator(::String value){
            	HX_STACKFRAME(&_hx_pos_2c7244c09707f90c_25_set_decimalSeperator)
HXLINE(  26)		::haxe::ui::locale::Formats_obj::_decimalSeperator = value;
HXLINE(  27)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Formats_obj,set_decimalSeperator,return )


Formats_obj::Formats_obj()
{
}

bool Formats_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"dateFormatShort") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_dateFormatShort() ); return true; } }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_dateFormatShort") ) { outValue = ( _dateFormatShort ); return true; }
		if (HX_FIELD_EQ(inName,"decimalSeperator") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_decimalSeperator() ); return true; } }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_decimalSeperator") ) { outValue = ( _decimalSeperator ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_dateFormatShort") ) { outValue = get_dateFormatShort_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_dateFormatShort") ) { outValue = set_dateFormatShort_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_decimalSeperator") ) { outValue = get_decimalSeperator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_decimalSeperator") ) { outValue = set_decimalSeperator_dyn(); return true; }
	}
	return false;
}

bool Formats_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"dateFormatShort") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_dateFormatShort(ioValue.Cast< ::String >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_dateFormatShort") ) { _dateFormatShort=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"decimalSeperator") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_decimalSeperator(ioValue.Cast< ::String >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_decimalSeperator") ) { _decimalSeperator=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Formats_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Formats_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Formats_obj::_dateFormatShort,HX_("_dateFormatShort",b8,d4,08,86)},
	{::hx::fsString,(void *) &Formats_obj::_decimalSeperator,HX_("_decimalSeperator",6f,51,7e,72)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Formats_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Formats_obj::_dateFormatShort,"_dateFormatShort");
	HX_MARK_MEMBER_NAME(Formats_obj::_decimalSeperator,"_decimalSeperator");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Formats_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Formats_obj::_dateFormatShort,"_dateFormatShort");
	HX_VISIT_MEMBER_NAME(Formats_obj::_decimalSeperator,"_decimalSeperator");
};

#endif

::hx::Class Formats_obj::__mClass;

static ::String Formats_obj_sStaticFields[] = {
	HX_("_dateFormatShort",b8,d4,08,86),
	HX_("get_dateFormatShort",4e,61,34,26),
	HX_("set_dateFormatShort",5a,54,d1,62),
	HX_("_decimalSeperator",6f,51,7e,72),
	HX_("get_decimalSeperator",19,c8,6d,f8),
	HX_("set_decimalSeperator",8d,7f,25,c5),
	::String(null())
};

void Formats_obj::__register()
{
	Formats_obj _hx_dummy;
	Formats_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.locale.Formats",fa,b7,8e,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Formats_obj::__GetStatic;
	__mClass->mSetStaticField = &Formats_obj::__SetStatic;
	__mClass->mMarkFunc = Formats_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Formats_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Formats_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Formats_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Formats_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Formats_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Formats_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2c7244c09707f90c_4_boot)
HXDLIN(   4)		_dateFormatShort = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_2c7244c09707f90c_17_boot)
HXDLIN(  17)		_decimalSeperator = null();
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace locale
