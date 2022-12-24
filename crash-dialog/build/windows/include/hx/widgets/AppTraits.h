#ifndef INCLUDED_hx_widgets_AppTraits
#define INCLUDED_hx_widgets_AppTraits

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_461fe5b5a6849249
#define INCLUDED_461fe5b5a6849249
#include "wx/apptrait.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,AppTraits)
HX_DECLARE_CLASS2(hx,widgets,StandardPaths)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES AppTraits_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AppTraits_obj OBJ_;
		AppTraits_obj();

	public:
		enum { _hx_ClassId = 0x6a6d2247 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.AppTraits")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.AppTraits"); }
		static ::hx::ObjectPtr< AppTraits_obj > __new();
		static ::hx::ObjectPtr< AppTraits_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AppTraits_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AppTraits",46,c0,d7,40); }

		::cpp::Pointer<  wxAppTraits > _ref;
		::String desktopEnvironment;
		::String get_desktopEnvironment();
		::Dynamic get_desktopEnvironment_dyn();

		 ::hx::widgets::StandardPaths standardPaths;
		 ::hx::widgets::StandardPaths get_standardPaths();
		::Dynamic get_standardPaths_dyn();

		::cpp::Pointer<  wxAppTraits > appTraitsRef;
		::cpp::Pointer<  wxAppTraits > get_appTraitsRef();
		::Dynamic get_appTraitsRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_AppTraits */ 
