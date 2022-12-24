#include <hxcpp.h>

#ifndef INCLUDED_461fe5b5a6849249
#define INCLUDED_461fe5b5a6849249
#include "wx/apptrait.h"
#endif
#ifndef INCLUDED_e319d66b5ac82c8a
#define INCLUDED_e319d66b5ac82c8a
#include "wx/stdpaths.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_AppTraits
#include <hx/widgets/AppTraits.h>
#endif
#ifndef INCLUDED_hx_widgets_StandardPaths
#include <hx/widgets/StandardPaths.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b7578bf8b6828e6e_11_new,"hx.widgets.AppTraits","new",0xf491ebdb,"hx.widgets.AppTraits.new","hx/widgets/AppTraits.hx",11,0xd3356bf7)
HX_LOCAL_STACK_FRAME(_hx_pos_b7578bf8b6828e6e_15_get_desktopEnvironment,"hx.widgets.AppTraits","get_desktopEnvironment",0xf71a8a05,"hx.widgets.AppTraits.get_desktopEnvironment","hx/widgets/AppTraits.hx",15,0xd3356bf7)
HX_LOCAL_STACK_FRAME(_hx_pos_b7578bf8b6828e6e_22_get_standardPaths,"hx.widgets.AppTraits","get_standardPaths",0x41970ec3,"hx.widgets.AppTraits.get_standardPaths","hx/widgets/AppTraits.hx",22,0xd3356bf7)
HX_LOCAL_STACK_FRAME(_hx_pos_b7578bf8b6828e6e_34_get_appTraitsRef,"hx.widgets.AppTraits","get_appTraitsRef",0x81a474bb,"hx.widgets.AppTraits.get_appTraitsRef","hx/widgets/AppTraits.hx",34,0xd3356bf7)
namespace hx{
namespace widgets{

void AppTraits_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b7578bf8b6828e6e_11_new)
            	}

Dynamic AppTraits_obj::__CreateEmpty() { return new AppTraits_obj; }

void *AppTraits_obj::_hx_vtable = 0;

Dynamic AppTraits_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AppTraits_obj > _hx_result = new AppTraits_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AppTraits_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a6d2247;
}

::String AppTraits_obj::get_desktopEnvironment(){
            	HX_STACKFRAME(&_hx_pos_b7578bf8b6828e6e_15_get_desktopEnvironment)
HXLINE(  16)		 wxString s = this->get_appTraitsRef()->ptr->GetDesktopEnvironment();
HXLINE(  17)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppTraits_obj,get_desktopEnvironment,return )

 ::hx::widgets::StandardPaths AppTraits_obj::get_standardPaths(){
            	HX_GC_STACKFRAME(&_hx_pos_b7578bf8b6828e6e_22_get_standardPaths)
HXLINE(  23)		 wxStandardPaths & p = this->get_appTraitsRef()->ptr->GetStandardPaths();
HXLINE(  24)		 ::hx::widgets::StandardPaths paths =  ::hx::widgets::StandardPaths_obj::__alloc( HX_CTX );
HXLINE(  25)		paths->_ref = ::cpp::Pointer_obj::addressOf(p);
HXLINE(  26)		return paths;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppTraits_obj,get_standardPaths,return )

::cpp::Pointer<  wxAppTraits > AppTraits_obj::get_appTraitsRef(){
            	HX_STACKFRAME(&_hx_pos_b7578bf8b6828e6e_34_get_appTraitsRef)
HXDLIN(  34)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppTraits_obj,get_appTraitsRef,return )


::hx::ObjectPtr< AppTraits_obj > AppTraits_obj::__new() {
	::hx::ObjectPtr< AppTraits_obj > __this = new AppTraits_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AppTraits_obj > AppTraits_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AppTraits_obj *__this = (AppTraits_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AppTraits_obj), true, "hx.widgets.AppTraits"));
	*(void **)__this = AppTraits_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AppTraits_obj::AppTraits_obj()
{
}

void AppTraits_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppTraits);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(desktopEnvironment,"desktopEnvironment");
	HX_MARK_MEMBER_NAME(standardPaths,"standardPaths");
	HX_MARK_MEMBER_NAME(appTraitsRef,"appTraitsRef");
	HX_MARK_END_CLASS();
}

void AppTraits_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(desktopEnvironment,"desktopEnvironment");
	HX_VISIT_MEMBER_NAME(standardPaths,"standardPaths");
	HX_VISIT_MEMBER_NAME(appTraitsRef,"appTraitsRef");
}

::hx::Val AppTraits_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"appTraitsRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_appTraitsRef() : appTraitsRef ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"standardPaths") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_standardPaths() : standardPaths ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_appTraitsRef") ) { return ::hx::Val( get_appTraitsRef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_standardPaths") ) { return ::hx::Val( get_standardPaths_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"desktopEnvironment") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_desktopEnvironment() : desktopEnvironment ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_desktopEnvironment") ) { return ::hx::Val( get_desktopEnvironment_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AppTraits_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxAppTraits > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"appTraitsRef") ) { appTraitsRef=inValue.Cast< ::cpp::Pointer<  wxAppTraits > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"standardPaths") ) { standardPaths=inValue.Cast<  ::hx::widgets::StandardPaths >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"desktopEnvironment") ) { desktopEnvironment=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppTraits_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("desktopEnvironment",57,33,4c,63));
	outFields->push(HX_("standardPaths",b1,e6,a9,77));
	outFields->push(HX_("appTraitsRef",8d,74,f1,ee));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AppTraits_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxAppTraits > */ ,(int)offsetof(AppTraits_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsString,(int)offsetof(AppTraits_obj,desktopEnvironment),HX_("desktopEnvironment",57,33,4c,63)},
	{::hx::fsObject /*  ::hx::widgets::StandardPaths */ ,(int)offsetof(AppTraits_obj,standardPaths),HX_("standardPaths",b1,e6,a9,77)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxAppTraits > */ ,(int)offsetof(AppTraits_obj,appTraitsRef),HX_("appTraitsRef",8d,74,f1,ee)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AppTraits_obj_sStaticStorageInfo = 0;
#endif

static ::String AppTraits_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("desktopEnvironment",57,33,4c,63),
	HX_("get_desktopEnvironment",a0,ac,e0,bc),
	HX_("standardPaths",b1,e6,a9,77),
	HX_("get_standardPaths",08,f2,19,7e),
	HX_("appTraitsRef",8d,74,f1,ee),
	HX_("get_appTraitsRef",16,61,90,f3),
	::String(null()) };

::hx::Class AppTraits_obj::__mClass;

void AppTraits_obj::__register()
{
	AppTraits_obj _hx_dummy;
	AppTraits_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.AppTraits",69,62,ea,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AppTraits_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AppTraits_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppTraits_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppTraits_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
