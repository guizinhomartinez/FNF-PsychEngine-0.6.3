#ifndef INCLUDED_hx_widgets_AppConsole
#define INCLUDED_hx_widgets_AppConsole

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_EventFilter
#include <hx/widgets/EventFilter.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,AppConsole)
HX_DECLARE_CLASS2(hx,widgets,EventFilter)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)


#include <wx/app.h>
#undef RegisterClass

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES AppConsole_obj : public  ::hx::widgets::EvtHandler_obj
{
	public:
		typedef  ::hx::widgets::EvtHandler_obj super;
		typedef AppConsole_obj OBJ_;
		AppConsole_obj();

	public:
		enum { _hx_ClassId = 0x41dfbfb5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.AppConsole")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.AppConsole"); }
		static ::hx::ObjectPtr< AppConsole_obj > __new();
		static ::hx::ObjectPtr< AppConsole_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AppConsole_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AppConsole",d6,60,bf,08); }

		bool yield(::hx::Null< bool >  onlyIfNeeded);
		::Dynamic yield_dyn();

		void scheduleForDestruction( ::hx::widgets::Object object);
		::Dynamic scheduleForDestruction_dyn();

		::cpp::Pointer<  wxAppConsole > appConsoleRef;
		::cpp::Pointer<  wxAppConsole > get_appConsoleRef();
		::Dynamic get_appConsoleRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_AppConsole */ 
