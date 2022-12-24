#ifndef INCLUDED_hx_widgets_WebView
#define INCLUDED_hx_widgets_WebView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,WebView)
HX_DECLARE_CLASS2(hx,widgets,Window)

#undef RegisterClass
namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES WebView_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef WebView_obj OBJ_;
		WebView_obj();

	public:
		enum { _hx_ClassId = 0x0b33a01e };

		void __construct( ::hx::widgets::Window parent,::String url,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.WebView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.WebView"); }
		static ::hx::ObjectPtr< WebView_obj > __new( ::hx::widgets::Window parent,::String url,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< WebView_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String url,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebView",f9,04,44,2a); }

		void loadURL(::String url);
		::Dynamic loadURL_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_WebView */ 
