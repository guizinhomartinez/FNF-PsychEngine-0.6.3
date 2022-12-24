#include <hxcpp.h>

#ifndef INCLUDED_d17caf3128e9a450
#define INCLUDED_d17caf3128e9a450
#include "wx/arrstr.h"
#endif
#ifndef INCLUDED_b98c6ac3f7b2c765
#define INCLUDED_b98c6ac3f7b2c765
#include "wx/fontenum.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_FontEnumerator
#include <hx/widgets/FontEnumerator.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b367c84852dd63e7_10_get_faceNames,"hx.widgets.FontEnumerator","get_faceNames",0x4236e824,"hx.widgets.FontEnumerator.get_faceNames","hx/widgets/FontEnumerator.hx",10,0x4ea00e2c)
HX_LOCAL_STACK_FRAME(_hx_pos_b367c84852dd63e7_6_boot,"hx.widgets.FontEnumerator","boot",0xc165b610,"hx.widgets.FontEnumerator.boot","hx/widgets/FontEnumerator.hx",6,0x4ea00e2c)
HX_LOCAL_STACK_FRAME(_hx_pos_b367c84852dd63e7_7_boot,"hx.widgets.FontEnumerator","boot",0xc165b610,"hx.widgets.FontEnumerator.boot","hx/widgets/FontEnumerator.hx",7,0x4ea00e2c)
namespace hx{
namespace widgets{

void FontEnumerator_obj::__construct() { }

Dynamic FontEnumerator_obj::__CreateEmpty() { return new FontEnumerator_obj; }

void *FontEnumerator_obj::_hx_vtable = 0;

Dynamic FontEnumerator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FontEnumerator_obj > _hx_result = new FontEnumerator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontEnumerator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f9676b2;
}

bool FontEnumerator_obj::useCache;

::Array< ::String > FontEnumerator_obj::_faceNameCache;

::Array< ::String > FontEnumerator_obj::faceNames;

::Array< ::String > FontEnumerator_obj::get_faceNames(){
            	HX_STACKFRAME(&_hx_pos_b367c84852dd63e7_10_get_faceNames)
HXLINE(  11)		if (::hx::IsNotNull( ::hx::widgets::FontEnumerator_obj::_faceNameCache )) {
HXLINE(  12)			return ::hx::widgets::FontEnumerator_obj::_faceNameCache;
            		}
HXLINE(  15)		 wxArrayString wxFaceNames = wxFontEnumerator::GetFacenames();
HXLINE(  16)		::Array< ::String > r = ::Array_obj< ::String >::__new(0);
HXLINE(  17)		{
HXLINE(  17)			int _g = 0;
HXDLIN(  17)			int _g1 = wxFaceNames.GetCount();
HXDLIN(  17)			while((_g < _g1)){
HXLINE(  17)				_g = (_g + 1);
HXDLIN(  17)				int i = (_g - 1);
HXLINE(  18)				 wxString item = wxFaceNames.Item(i);
HXLINE(  19)				r->push(::String(::String(item.ToUTF8().data())));
            			}
            		}
HXLINE(  22)		if ((::hx::widgets::FontEnumerator_obj::useCache == true)) {
HXLINE(  23)			::hx::widgets::FontEnumerator_obj::_faceNameCache = r;
            		}
HXLINE(  26)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FontEnumerator_obj,get_faceNames,return )


FontEnumerator_obj::FontEnumerator_obj()
{
}

bool FontEnumerator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"useCache") ) { outValue = ( useCache ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"faceNames") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_faceNames() : faceNames ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_faceNames") ) { outValue = get_faceNames_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_faceNameCache") ) { outValue = ( _faceNameCache ); return true; }
	}
	return false;
}

bool FontEnumerator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"useCache") ) { useCache=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"faceNames") ) { faceNames=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_faceNameCache") ) { _faceNameCache=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FontEnumerator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FontEnumerator_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FontEnumerator_obj::useCache,HX_("useCache",7b,fc,7f,08)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &FontEnumerator_obj::_faceNameCache,HX_("_faceNameCache",db,87,8d,82)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &FontEnumerator_obj::faceNames,HX_("faceNames",eb,71,d7,58)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FontEnumerator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontEnumerator_obj::useCache,"useCache");
	HX_MARK_MEMBER_NAME(FontEnumerator_obj::_faceNameCache,"_faceNameCache");
	HX_MARK_MEMBER_NAME(FontEnumerator_obj::faceNames,"faceNames");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontEnumerator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontEnumerator_obj::useCache,"useCache");
	HX_VISIT_MEMBER_NAME(FontEnumerator_obj::_faceNameCache,"_faceNameCache");
	HX_VISIT_MEMBER_NAME(FontEnumerator_obj::faceNames,"faceNames");
};

#endif

::hx::Class FontEnumerator_obj::__mClass;

static ::String FontEnumerator_obj_sStaticFields[] = {
	HX_("useCache",7b,fc,7f,08),
	HX_("_faceNameCache",db,87,8d,82),
	HX_("faceNames",eb,71,d7,58),
	HX_("get_faceNames",c2,45,3b,1a),
	::String(null())
};

void FontEnumerator_obj::__register()
{
	FontEnumerator_obj _hx_dummy;
	FontEnumerator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.FontEnumerator",50,7b,33,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontEnumerator_obj::__GetStatic;
	__mClass->mSetStaticField = &FontEnumerator_obj::__SetStatic;
	__mClass->mMarkFunc = FontEnumerator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FontEnumerator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FontEnumerator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontEnumerator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontEnumerator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontEnumerator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FontEnumerator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b367c84852dd63e7_6_boot)
HXDLIN(   6)		useCache = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b367c84852dd63e7_7_boot)
HXDLIN(   7)		_faceNameCache = null();
            	}
}

} // end namespace hx
} // end namespace widgets
