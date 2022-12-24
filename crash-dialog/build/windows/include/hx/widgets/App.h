#ifndef INCLUDED_hx_widgets_App
#define INCLUDED_hx_widgets_App

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_AppConsole
#include <hx/widgets/AppConsole.h>
#endif
#ifndef INCLUDED_c98dd3744054cb1f
#define INCLUDED_c98dd3744054cb1f
#include "wx/intl.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,App)
HX_DECLARE_CLASS2(hx,widgets,AppConsole)
HX_DECLARE_CLASS2(hx,widgets,AppTraits)
HX_DECLARE_CLASS2(hx,widgets,EventFilter)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)


#include <wx/wx.h>
#undef RegisterClass

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES App_obj : public  ::hx::widgets::AppConsole_obj
{
	public:
		typedef  ::hx::widgets::AppConsole_obj super;
		typedef App_obj OBJ_;
		App_obj();

	public:
		enum { _hx_ClassId = 0x7d9089d6 };

		void __construct(::hx::Null< bool >  __o_setInstance);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.App")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.App"); }
		static ::hx::ObjectPtr< App_obj > __new(::hx::Null< bool >  __o_setInstance);
		static ::hx::ObjectPtr< App_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_setInstance);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~App_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("App",81,b4,31,00); }

		static  ::hx::widgets::App instance;
		static void setInstance( ::hx::widgets::App instance);
		static ::Dynamic setInstance_dyn();

		::cpp::Pointer<  wxLocale > _locale;
		bool init();
		::Dynamic init_dyn();

		void run();
		::Dynamic run_dyn();

		void exit();
		::Dynamic exit_dyn();

		void setCLocale();
		::Dynamic setCLocale_dyn();

		 ::hx::widgets::AppTraits traits;
		 ::hx::widgets::AppTraits get_traits();
		::Dynamic get_traits_dyn();

		::cpp::Pointer<  wxApp > appRef;
		::cpp::Pointer<  wxApp > get_appRef();
		::Dynamic get_appRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_App */ 
