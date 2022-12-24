#include <hxcpp.h>

#ifndef INCLUDED_8d3b7a3c6c60d838
#define INCLUDED_8d3b7a3c6c60d838
#include "wx/platinfo.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_PlatformInfo
#include <hx/widgets/PlatformInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11a17217511ea231_12_new,"hx.widgets.PlatformInfo","new",0x61469690,"hx.widgets.PlatformInfo.new","hx/widgets/PlatformInfo.hx",12,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_15_destroy,"hx.widgets.PlatformInfo","destroy",0xe08fcb2a,"hx.widgets.PlatformInfo.destroy","hx/widgets/PlatformInfo.hx",15,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_22_get_osMajorVersion,"hx.widgets.PlatformInfo","get_osMajorVersion",0xe573bebc,"hx.widgets.PlatformInfo.get_osMajorVersion","hx/widgets/PlatformInfo.hx",22,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_27_get_osMinorVersion,"hx.widgets.PlatformInfo","get_osMinorVersion",0xed90f840,"hx.widgets.PlatformInfo.get_osMinorVersion","hx/widgets/PlatformInfo.hx",27,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_31_get_archName,"hx.widgets.PlatformInfo","get_archName",0x281a731a,"hx.widgets.PlatformInfo.get_archName","hx/widgets/PlatformInfo.hx",31,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_37_get_operatingSystemFamilyName,"hx.widgets.PlatformInfo","get_operatingSystemFamilyName",0x0f6c8146,"hx.widgets.PlatformInfo.get_operatingSystemFamilyName","hx/widgets/PlatformInfo.hx",37,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_44_get_operatingSystemId,"hx.widgets.PlatformInfo","get_operatingSystemId",0x4820ae12,"hx.widgets.PlatformInfo.get_operatingSystemId","hx/widgets/PlatformInfo.hx",44,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_48_get_operatingSystemIdName,"hx.widgets.PlatformInfo","get_operatingSystemIdName",0x221ebd7d,"hx.widgets.PlatformInfo.get_operatingSystemIdName","hx/widgets/PlatformInfo.hx",48,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_58_get_isWindows,"hx.widgets.PlatformInfo","get_isWindows",0xa1f191c0,"hx.widgets.PlatformInfo.get_isWindows","hx/widgets/PlatformInfo.hx",58,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_63_get_isMac,"hx.widgets.PlatformInfo","get_isMac",0x0d4c1b4c,"hx.widgets.PlatformInfo.get_isMac","hx/widgets/PlatformInfo.hx",63,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_68_get_isLinux,"hx.widgets.PlatformInfo","get_isLinux",0x7eee65f1,"hx.widgets.PlatformInfo.get_isLinux","hx/widgets/PlatformInfo.hx",68,0x7628741e)
namespace hx{
namespace widgets{

void PlatformInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_12_new)
HXDLIN(  12)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxPlatformInfo()));
            	}

Dynamic PlatformInfo_obj::__CreateEmpty() { return new PlatformInfo_obj; }

void *PlatformInfo_obj::_hx_vtable = 0;

Dynamic PlatformInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlatformInfo_obj > _hx_result = new PlatformInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlatformInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dee179c;
}

void PlatformInfo_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_15_destroy)
HXLINE(  16)		this->_ref->destroy();
HXLINE(  17)		this->_ref = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,destroy,(void))

int PlatformInfo_obj::get_osMajorVersion(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_22_get_osMajorVersion)
HXDLIN(  22)		return this->_ref->ptr->GetOSMajorVersion();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_osMajorVersion,return )

int PlatformInfo_obj::get_osMinorVersion(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_27_get_osMinorVersion)
HXDLIN(  27)		return this->_ref->ptr->GetOSMinorVersion();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_osMinorVersion,return )

::String PlatformInfo_obj::get_archName(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_31_get_archName)
HXLINE(  32)		 wxString r = this->_ref->ptr->GetArchName();
HXLINE(  33)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_archName,return )

::String PlatformInfo_obj::get_operatingSystemFamilyName(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_37_get_operatingSystemFamilyName)
HXLINE(  38)		 wxString r = this->_ref->ptr->GetOperatingSystemFamilyName();
HXLINE(  39)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_operatingSystemFamilyName,return )

 wxOperatingSystemId PlatformInfo_obj::get_operatingSystemId(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_44_get_operatingSystemId)
HXDLIN(  44)		return this->_ref->ptr->GetOperatingSystemId();
            	}


::String PlatformInfo_obj::get_operatingSystemIdName(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_48_get_operatingSystemIdName)
HXLINE(  49)		 wxString r = this->_ref->ptr->GetOperatingSystemIdName();
HXLINE(  50)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_operatingSystemIdName,return )

bool PlatformInfo_obj::get_isWindows(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_58_get_isWindows)
HXDLIN(  58)		if (::hx::IsInstanceNotEq( this->get_operatingSystemId(),wxOS_WINDOWS_NT )) {
HXDLIN(  58)			return ::hx::IsInstanceEq( this->get_operatingSystemId(),wxOS_WINDOWS_NT );
            		}
            		else {
HXDLIN(  58)			return true;
            		}
HXDLIN(  58)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_isWindows,return )

bool PlatformInfo_obj::get_isMac(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_63_get_isMac)
HXDLIN(  63)		bool _hx_tmp;
HXDLIN(  63)		if (::hx::IsInstanceNotEq( this->get_operatingSystemId(),wxOS_MAC )) {
HXDLIN(  63)			_hx_tmp = ::hx::IsInstanceEq( this->get_operatingSystemId(),wxOS_MAC_OS );
            		}
            		else {
HXDLIN(  63)			_hx_tmp = true;
            		}
HXDLIN(  63)		if (!(_hx_tmp)) {
HXDLIN(  63)			return ::hx::IsInstanceEq( this->get_operatingSystemId(),wxOS_MAC_OSX_DARWIN );
            		}
            		else {
HXDLIN(  63)			return true;
            		}
HXDLIN(  63)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_isMac,return )

bool PlatformInfo_obj::get_isLinux(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_68_get_isLinux)
HXDLIN(  68)		return ::hx::IsInstanceEq( this->get_operatingSystemId(),wxOS_UNIX_LINUX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_isLinux,return )


::hx::ObjectPtr< PlatformInfo_obj > PlatformInfo_obj::__new() {
	::hx::ObjectPtr< PlatformInfo_obj > __this = new PlatformInfo_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlatformInfo_obj > PlatformInfo_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlatformInfo_obj *__this = (PlatformInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlatformInfo_obj), true, "hx.widgets.PlatformInfo"));
	*(void **)__this = PlatformInfo_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlatformInfo_obj::PlatformInfo_obj()
{
}

void PlatformInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlatformInfo);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(osMajorVersion,"osMajorVersion");
	HX_MARK_MEMBER_NAME(osMinorVersion,"osMinorVersion");
	HX_MARK_MEMBER_NAME(archName,"archName");
	HX_MARK_MEMBER_NAME(operatingSystemFamilyName,"operatingSystemFamilyName");
	HX_MARK_MEMBER_NAME(operatingSystemId,"operatingSystemId");
	HX_MARK_MEMBER_NAME(operatingSystemIdName,"operatingSystemIdName");
	HX_MARK_MEMBER_NAME(isWindows,"isWindows");
	HX_MARK_MEMBER_NAME(isMac,"isMac");
	HX_MARK_MEMBER_NAME(isLinux,"isLinux");
	HX_MARK_END_CLASS();
}

void PlatformInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(osMajorVersion,"osMajorVersion");
	HX_VISIT_MEMBER_NAME(osMinorVersion,"osMinorVersion");
	HX_VISIT_MEMBER_NAME(archName,"archName");
	HX_VISIT_MEMBER_NAME(operatingSystemFamilyName,"operatingSystemFamilyName");
	HX_VISIT_MEMBER_NAME(operatingSystemId,"operatingSystemId");
	HX_VISIT_MEMBER_NAME(operatingSystemIdName,"operatingSystemIdName");
	HX_VISIT_MEMBER_NAME(isWindows,"isWindows");
	HX_VISIT_MEMBER_NAME(isMac,"isMac");
	HX_VISIT_MEMBER_NAME(isLinux,"isLinux");
}

::hx::Val PlatformInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isMac") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isMac() : isMac ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"isLinux") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isLinux() : isLinux ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"archName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_archName() : archName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isWindows() : isWindows ); }
		if (HX_FIELD_EQ(inName,"get_isMac") ) { return ::hx::Val( get_isMac_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isLinux") ) { return ::hx::Val( get_isLinux_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_archName") ) { return ::hx::Val( get_archName_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_isWindows") ) { return ::hx::Val( get_isWindows_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"osMajorVersion") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_osMajorVersion() : osMajorVersion ); }
		if (HX_FIELD_EQ(inName,"osMinorVersion") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_osMinorVersion() : osMinorVersion ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_osMajorVersion") ) { return ::hx::Val( get_osMajorVersion_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_osMinorVersion") ) { return ::hx::Val( get_osMinorVersion_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"operatingSystemIdName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_operatingSystemIdName() : operatingSystemIdName ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"operatingSystemFamilyName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_operatingSystemFamilyName() : operatingSystemFamilyName ); }
		if (HX_FIELD_EQ(inName,"get_operatingSystemIdName") ) { return ::hx::Val( get_operatingSystemIdName_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_operatingSystemFamilyName") ) { return ::hx::Val( get_operatingSystemFamilyName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlatformInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxPlatformInfo > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isMac") ) { isMac=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isLinux") ) { isLinux=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"archName") ) { archName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"osMajorVersion") ) { osMajorVersion=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"osMinorVersion") ) { osMinorVersion=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"operatingSystemIdName") ) { operatingSystemIdName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"operatingSystemFamilyName") ) { operatingSystemFamilyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlatformInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("osMajorVersion",23,2e,b6,31));
	outFields->push(HX_("osMinorVersion",a7,67,d3,39));
	outFields->push(HX_("archName",41,cb,85,db));
	outFields->push(HX_("operatingSystemFamilyName",3f,8d,f7,fa));
	outFields->push(HX_("operatingSystemId",0b,99,e2,33));
	outFields->push(HX_("operatingSystemIdName",f6,18,e4,a4));
	outFields->push(HX_("isWindows",b9,5b,73,ec));
	outFields->push(HX_("isMac",c5,34,51,c1));
	outFields->push(HX_("isLinux",aa,8f,87,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlatformInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxPlatformInfo > */ ,(int)offsetof(PlatformInfo_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsInt,(int)offsetof(PlatformInfo_obj,osMajorVersion),HX_("osMajorVersion",23,2e,b6,31)},
	{::hx::fsInt,(int)offsetof(PlatformInfo_obj,osMinorVersion),HX_("osMinorVersion",a7,67,d3,39)},
	{::hx::fsString,(int)offsetof(PlatformInfo_obj,archName),HX_("archName",41,cb,85,db)},
	{::hx::fsString,(int)offsetof(PlatformInfo_obj,operatingSystemFamilyName),HX_("operatingSystemFamilyName",3f,8d,f7,fa)},
	{::hx::fsUnknown /*  wxOperatingSystemId */ ,(int)offsetof(PlatformInfo_obj,operatingSystemId),HX_("operatingSystemId",0b,99,e2,33)},
	{::hx::fsString,(int)offsetof(PlatformInfo_obj,operatingSystemIdName),HX_("operatingSystemIdName",f6,18,e4,a4)},
	{::hx::fsBool,(int)offsetof(PlatformInfo_obj,isWindows),HX_("isWindows",b9,5b,73,ec)},
	{::hx::fsBool,(int)offsetof(PlatformInfo_obj,isMac),HX_("isMac",c5,34,51,c1)},
	{::hx::fsBool,(int)offsetof(PlatformInfo_obj,isLinux),HX_("isLinux",aa,8f,87,11)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlatformInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String PlatformInfo_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("destroy",fa,2c,86,24),
	HX_("osMajorVersion",23,2e,b6,31),
	HX_("get_osMajorVersion",ec,0e,50,cd),
	HX_("osMinorVersion",a7,67,d3,39),
	HX_("get_osMinorVersion",70,48,6d,d5),
	HX_("archName",41,cb,85,db),
	HX_("get_archName",4a,7f,9f,90),
	HX_("operatingSystemFamilyName",3f,8d,f7,fa),
	HX_("get_operatingSystemFamilyName",16,bf,36,e3),
	HX_("operatingSystemIdName",f6,18,e4,a4),
	HX_("get_operatingSystemIdName",4d,d3,e1,aa),
	HX_("isWindows",b9,5b,73,ec),
	HX_("get_isWindows",90,2f,d7,ad),
	HX_("isMac",c5,34,51,c1),
	HX_("get_isMac",1c,91,fa,04),
	HX_("isLinux",aa,8f,87,11),
	HX_("get_isLinux",c1,ef,81,97),
	::String(null()) };

::hx::Class PlatformInfo_obj::__mClass;

void PlatformInfo_obj::__register()
{
	PlatformInfo_obj _hx_dummy;
	PlatformInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.PlatformInfo",9e,4e,fc,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlatformInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlatformInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlatformInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlatformInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
