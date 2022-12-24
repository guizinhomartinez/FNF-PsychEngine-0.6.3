#ifndef INCLUDED_hx_widgets_ClientDC
#define INCLUDED_hx_widgets_ClientDC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_WindowDC
#include <hx/widgets/WindowDC.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,ClientDC)
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)
HX_DECLARE_CLASS2(hx,widgets,WindowDC)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ClientDC_obj : public  ::hx::widgets::WindowDC_obj
{
	public:
		typedef  ::hx::widgets::WindowDC_obj super;
		typedef ClientDC_obj OBJ_;
		ClientDC_obj();

	public:
		enum { _hx_ClassId = 0x27c0dc01 };

		void __construct( ::hx::widgets::Window window);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ClientDC")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.ClientDC"); }
		static ::hx::ObjectPtr< ClientDC_obj > __new( ::hx::widgets::Window window);
		static ::hx::ObjectPtr< ClientDC_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window window);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClientDC_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClientDC",aa,2a,41,ef); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ClientDC */ 
