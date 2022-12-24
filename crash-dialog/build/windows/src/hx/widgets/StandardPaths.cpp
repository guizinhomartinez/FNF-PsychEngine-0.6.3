#include <hxcpp.h>

#ifndef INCLUDED_e319d66b5ac82c8a
#define INCLUDED_e319d66b5ac82c8a
#include "wx/stdpaths.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_StandardPaths
#include <hx/widgets/StandardPaths.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_10_new,"hx.widgets.StandardPaths","new",0xef48f126,"hx.widgets.StandardPaths.new","hx/widgets/StandardPaths.hx",10,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_14_get_appDocumentsDir,"hx.widgets.StandardPaths","get_appDocumentsDir",0x4b092953,"hx.widgets.StandardPaths.get_appDocumentsDir","hx/widgets/StandardPaths.hx",14,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_20_get_configDir,"hx.widgets.StandardPaths","get_configDir",0x0e3eabc8,"hx.widgets.StandardPaths.get_configDir","hx/widgets/StandardPaths.hx",20,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_26_get_dataDir,"hx.widgets.StandardPaths","get_dataDir",0x57940c20,"hx.widgets.StandardPaths.get_dataDir","hx/widgets/StandardPaths.hx",26,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_32_get_documentsDir,"hx.widgets.StandardPaths","get_documentsDir",0x85c3df38,"hx.widgets.StandardPaths.get_documentsDir","hx/widgets/StandardPaths.hx",32,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_38_get_executablePath,"hx.widgets.StandardPaths","get_executablePath",0xbdbeb352,"hx.widgets.StandardPaths.get_executablePath","hx/widgets/StandardPaths.hx",38,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_44_get_localDataDir,"hx.widgets.StandardPaths","get_localDataDir",0x44e2cf1b,"hx.widgets.StandardPaths.get_localDataDir","hx/widgets/StandardPaths.hx",44,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_50_get_resourcesDir,"hx.widgets.StandardPaths","get_resourcesDir",0x05c5a26b,"hx.widgets.StandardPaths.get_resourcesDir","hx/widgets/StandardPaths.hx",50,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_56_get_tempDir,"hx.widgets.StandardPaths","get_tempDir",0x8c750d76,"hx.widgets.StandardPaths.get_tempDir","hx/widgets/StandardPaths.hx",56,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_62_get_userConfigDir,"hx.widgets.StandardPaths","get_userConfigDir",0x4ba5aa7d,"hx.widgets.StandardPaths.get_userConfigDir","hx/widgets/StandardPaths.hx",62,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_68_get_userDataDir,"hx.widgets.StandardPaths","get_userDataDir",0xa5d68395,"hx.widgets.StandardPaths.get_userDataDir","hx/widgets/StandardPaths.hx",68,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_74_get_userLocalDataDir,"hx.widgets.StandardPaths","get_userLocalDataDir",0x47122f86,"hx.widgets.StandardPaths.get_userLocalDataDir","hx/widgets/StandardPaths.hx",74,0x806d020c)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc5a12a817f0dce_84_get_standardPathsRef,"hx.widgets.StandardPaths","get_standardPathsRef",0x374334a5,"hx.widgets.StandardPaths.get_standardPathsRef","hx/widgets/StandardPaths.hx",84,0x806d020c)
namespace hx{
namespace widgets{

void StandardPaths_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_10_new)
            	}

Dynamic StandardPaths_obj::__CreateEmpty() { return new StandardPaths_obj; }

void *StandardPaths_obj::_hx_vtable = 0;

Dynamic StandardPaths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StandardPaths_obj > _hx_result = new StandardPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StandardPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ea549da;
}

::String StandardPaths_obj::get_appDocumentsDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_14_get_appDocumentsDir)
HXLINE(  15)		 wxString s = this->get_standardPathsRef()->ptr->GetAppDocumentsDir();
HXLINE(  16)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_appDocumentsDir,return )

::String StandardPaths_obj::get_configDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_20_get_configDir)
HXLINE(  21)		 wxString s = this->get_standardPathsRef()->ptr->GetConfigDir();
HXLINE(  22)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_configDir,return )

::String StandardPaths_obj::get_dataDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_26_get_dataDir)
HXLINE(  27)		 wxString s = this->get_standardPathsRef()->ptr->GetDataDir();
HXLINE(  28)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_dataDir,return )

::String StandardPaths_obj::get_documentsDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_32_get_documentsDir)
HXLINE(  33)		 wxString s = this->get_standardPathsRef()->ptr->GetDocumentsDir();
HXLINE(  34)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_documentsDir,return )

::String StandardPaths_obj::get_executablePath(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_38_get_executablePath)
HXLINE(  39)		 wxString s = this->get_standardPathsRef()->ptr->GetExecutablePath();
HXLINE(  40)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_executablePath,return )

::String StandardPaths_obj::get_localDataDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_44_get_localDataDir)
HXLINE(  45)		 wxString s = this->get_standardPathsRef()->ptr->GetLocalDataDir();
HXLINE(  46)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_localDataDir,return )

::String StandardPaths_obj::get_resourcesDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_50_get_resourcesDir)
HXLINE(  51)		 wxString s = this->get_standardPathsRef()->ptr->GetResourcesDir();
HXLINE(  52)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_resourcesDir,return )

::String StandardPaths_obj::get_tempDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_56_get_tempDir)
HXLINE(  57)		 wxString s = this->get_standardPathsRef()->ptr->GetTempDir();
HXLINE(  58)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_tempDir,return )

::String StandardPaths_obj::get_userConfigDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_62_get_userConfigDir)
HXLINE(  63)		 wxString s = this->get_standardPathsRef()->ptr->GetUserConfigDir();
HXLINE(  64)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_userConfigDir,return )

::String StandardPaths_obj::get_userDataDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_68_get_userDataDir)
HXLINE(  69)		 wxString s = this->get_standardPathsRef()->ptr->GetUserDataDir();
HXLINE(  70)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_userDataDir,return )

::String StandardPaths_obj::get_userLocalDataDir(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_74_get_userLocalDataDir)
HXLINE(  75)		 wxString s = this->get_standardPathsRef()->ptr->GetUserLocalDataDir();
HXLINE(  76)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_userLocalDataDir,return )

::cpp::Pointer<  wxStandardPaths > StandardPaths_obj::get_standardPathsRef(){
            	HX_STACKFRAME(&_hx_pos_7dc5a12a817f0dce_84_get_standardPathsRef)
HXDLIN(  84)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StandardPaths_obj,get_standardPathsRef,return )


::hx::ObjectPtr< StandardPaths_obj > StandardPaths_obj::__new() {
	::hx::ObjectPtr< StandardPaths_obj > __this = new StandardPaths_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StandardPaths_obj > StandardPaths_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StandardPaths_obj *__this = (StandardPaths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StandardPaths_obj), true, "hx.widgets.StandardPaths"));
	*(void **)__this = StandardPaths_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StandardPaths_obj::StandardPaths_obj()
{
}

void StandardPaths_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StandardPaths);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(appDocumentsDir,"appDocumentsDir");
	HX_MARK_MEMBER_NAME(configDir,"configDir");
	HX_MARK_MEMBER_NAME(dataDir,"dataDir");
	HX_MARK_MEMBER_NAME(documentsDir,"documentsDir");
	HX_MARK_MEMBER_NAME(executablePath,"executablePath");
	HX_MARK_MEMBER_NAME(localDataDir,"localDataDir");
	HX_MARK_MEMBER_NAME(resourcesDir,"resourcesDir");
	HX_MARK_MEMBER_NAME(tempDir,"tempDir");
	HX_MARK_MEMBER_NAME(userConfigDir,"userConfigDir");
	HX_MARK_MEMBER_NAME(userDataDir,"userDataDir");
	HX_MARK_MEMBER_NAME(userLocalDataDir,"userLocalDataDir");
	HX_MARK_MEMBER_NAME(standardPathsRef,"standardPathsRef");
	HX_MARK_END_CLASS();
}

void StandardPaths_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(appDocumentsDir,"appDocumentsDir");
	HX_VISIT_MEMBER_NAME(configDir,"configDir");
	HX_VISIT_MEMBER_NAME(dataDir,"dataDir");
	HX_VISIT_MEMBER_NAME(documentsDir,"documentsDir");
	HX_VISIT_MEMBER_NAME(executablePath,"executablePath");
	HX_VISIT_MEMBER_NAME(localDataDir,"localDataDir");
	HX_VISIT_MEMBER_NAME(resourcesDir,"resourcesDir");
	HX_VISIT_MEMBER_NAME(tempDir,"tempDir");
	HX_VISIT_MEMBER_NAME(userConfigDir,"userConfigDir");
	HX_VISIT_MEMBER_NAME(userDataDir,"userDataDir");
	HX_VISIT_MEMBER_NAME(userLocalDataDir,"userLocalDataDir");
	HX_VISIT_MEMBER_NAME(standardPathsRef,"standardPathsRef");
}

::hx::Val StandardPaths_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dataDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dataDir() : dataDir ); }
		if (HX_FIELD_EQ(inName,"tempDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_tempDir() : tempDir ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"configDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_configDir() : configDir ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_dataDir") ) { return ::hx::Val( get_dataDir_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tempDir") ) { return ::hx::Val( get_tempDir_dyn() ); }
		if (HX_FIELD_EQ(inName,"userDataDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_userDataDir() : userDataDir ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"documentsDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_documentsDir() : documentsDir ); }
		if (HX_FIELD_EQ(inName,"localDataDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_localDataDir() : localDataDir ); }
		if (HX_FIELD_EQ(inName,"resourcesDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_resourcesDir() : resourcesDir ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_configDir") ) { return ::hx::Val( get_configDir_dyn() ); }
		if (HX_FIELD_EQ(inName,"userConfigDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_userConfigDir() : userConfigDir ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"executablePath") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_executablePath() : executablePath ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"appDocumentsDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_appDocumentsDir() : appDocumentsDir ); }
		if (HX_FIELD_EQ(inName,"get_userDataDir") ) { return ::hx::Val( get_userDataDir_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_documentsDir") ) { return ::hx::Val( get_documentsDir_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_localDataDir") ) { return ::hx::Val( get_localDataDir_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_resourcesDir") ) { return ::hx::Val( get_resourcesDir_dyn() ); }
		if (HX_FIELD_EQ(inName,"userLocalDataDir") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_userLocalDataDir() : userLocalDataDir ); }
		if (HX_FIELD_EQ(inName,"standardPathsRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_standardPathsRef() : standardPathsRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userConfigDir") ) { return ::hx::Val( get_userConfigDir_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_executablePath") ) { return ::hx::Val( get_executablePath_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_appDocumentsDir") ) { return ::hx::Val( get_appDocumentsDir_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_userLocalDataDir") ) { return ::hx::Val( get_userLocalDataDir_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_standardPathsRef") ) { return ::hx::Val( get_standardPathsRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StandardPaths_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxStandardPaths > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dataDir") ) { dataDir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempDir") ) { tempDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"configDir") ) { configDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"userDataDir") ) { userDataDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"documentsDir") ) { documentsDir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localDataDir") ) { localDataDir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resourcesDir") ) { resourcesDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userConfigDir") ) { userConfigDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"executablePath") ) { executablePath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"appDocumentsDir") ) { appDocumentsDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"userLocalDataDir") ) { userLocalDataDir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"standardPathsRef") ) { standardPathsRef=inValue.Cast< ::cpp::Pointer<  wxStandardPaths > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StandardPaths_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("appDocumentsDir",76,cd,34,14));
	outFields->push(HX_("configDir",ab,c3,36,c0));
	outFields->push(HX_("dataDir",43,55,cd,11));
	outFields->push(HX_("documentsDir",35,97,bf,28));
	outFields->push(HX_("executablePath",8f,24,16,e1));
	outFields->push(HX_("localDataDir",18,87,de,e7));
	outFields->push(HX_("resourcesDir",68,5a,c1,a8));
	outFields->push(HX_("tempDir",99,56,ae,46));
	outFields->push(HX_("userConfigDir",e0,ef,ea,44));
	outFields->push(HX_("userDataDir",38,9a,ee,d7));
	outFields->push(HX_("userLocalDataDir",03,2a,16,84));
	outFields->push(HX_("standardPathsRef",22,2f,47,74));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StandardPaths_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStandardPaths > */ ,(int)offsetof(StandardPaths_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,appDocumentsDir),HX_("appDocumentsDir",76,cd,34,14)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,configDir),HX_("configDir",ab,c3,36,c0)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,dataDir),HX_("dataDir",43,55,cd,11)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,documentsDir),HX_("documentsDir",35,97,bf,28)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,executablePath),HX_("executablePath",8f,24,16,e1)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,localDataDir),HX_("localDataDir",18,87,de,e7)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,resourcesDir),HX_("resourcesDir",68,5a,c1,a8)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,tempDir),HX_("tempDir",99,56,ae,46)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,userConfigDir),HX_("userConfigDir",e0,ef,ea,44)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,userDataDir),HX_("userDataDir",38,9a,ee,d7)},
	{::hx::fsString,(int)offsetof(StandardPaths_obj,userLocalDataDir),HX_("userLocalDataDir",03,2a,16,84)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStandardPaths > */ ,(int)offsetof(StandardPaths_obj,standardPathsRef),HX_("standardPathsRef",22,2f,47,74)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StandardPaths_obj_sStaticStorageInfo = 0;
#endif

static ::String StandardPaths_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("appDocumentsDir",76,cd,34,14),
	HX_("get_appDocumentsDir",8d,9c,3f,9f),
	HX_("configDir",ab,c3,36,c0),
	HX_("get_configDir",82,97,9a,81),
	HX_("dataDir",43,55,cd,11),
	HX_("get_dataDir",5a,b5,c7,97),
	HX_("documentsDir",35,97,bf,28),
	HX_("get_documentsDir",be,83,5e,2d),
	HX_("executablePath",8f,24,16,e1),
	HX_("get_executablePath",58,05,b0,7c),
	HX_("localDataDir",18,87,de,e7),
	HX_("get_localDataDir",a1,73,7d,ec),
	HX_("resourcesDir",68,5a,c1,a8),
	HX_("get_resourcesDir",f1,46,60,ad),
	HX_("tempDir",99,56,ae,46),
	HX_("get_tempDir",b0,b6,a8,cc),
	HX_("userConfigDir",e0,ef,ea,44),
	HX_("get_userConfigDir",37,fb,5a,4b),
	HX_("userDataDir",38,9a,ee,d7),
	HX_("get_userDataDir",cf,51,d0,98),
	HX_("userLocalDataDir",03,2a,16,84),
	HX_("get_userLocalDataDir",0c,8f,80,a2),
	HX_("standardPathsRef",22,2f,47,74),
	HX_("get_standardPathsRef",2b,94,b1,92),
	::String(null()) };

::hx::Class StandardPaths_obj::__mClass;

void StandardPaths_obj::__register()
{
	StandardPaths_obj _hx_dummy;
	StandardPaths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StandardPaths",34,26,ac,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StandardPaths_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StandardPaths_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StandardPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StandardPaths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
