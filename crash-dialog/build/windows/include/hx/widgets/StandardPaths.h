#ifndef INCLUDED_hx_widgets_StandardPaths
#define INCLUDED_hx_widgets_StandardPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_e319d66b5ac82c8a
#define INCLUDED_e319d66b5ac82c8a
#include "wx/stdpaths.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,StandardPaths)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StandardPaths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StandardPaths_obj OBJ_;
		StandardPaths_obj();

	public:
		enum { _hx_ClassId = 0x4ea549da };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StandardPaths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.StandardPaths"); }
		static ::hx::ObjectPtr< StandardPaths_obj > __new();
		static ::hx::ObjectPtr< StandardPaths_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StandardPaths_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StandardPaths",91,36,9a,bf); }

		::cpp::Pointer<  wxStandardPaths > _ref;
		::String appDocumentsDir;
		::String get_appDocumentsDir();
		::Dynamic get_appDocumentsDir_dyn();

		::String configDir;
		::String get_configDir();
		::Dynamic get_configDir_dyn();

		::String dataDir;
		::String get_dataDir();
		::Dynamic get_dataDir_dyn();

		::String documentsDir;
		::String get_documentsDir();
		::Dynamic get_documentsDir_dyn();

		::String executablePath;
		::String get_executablePath();
		::Dynamic get_executablePath_dyn();

		::String localDataDir;
		::String get_localDataDir();
		::Dynamic get_localDataDir_dyn();

		::String resourcesDir;
		::String get_resourcesDir();
		::Dynamic get_resourcesDir_dyn();

		::String tempDir;
		::String get_tempDir();
		::Dynamic get_tempDir_dyn();

		::String userConfigDir;
		::String get_userConfigDir();
		::Dynamic get_userConfigDir_dyn();

		::String userDataDir;
		::String get_userDataDir();
		::Dynamic get_userDataDir_dyn();

		::String userLocalDataDir;
		::String get_userLocalDataDir();
		::Dynamic get_userLocalDataDir_dyn();

		::cpp::Pointer<  wxStandardPaths > standardPathsRef;
		::cpp::Pointer<  wxStandardPaths > get_standardPathsRef();
		::Dynamic get_standardPathsRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StandardPaths */ 
