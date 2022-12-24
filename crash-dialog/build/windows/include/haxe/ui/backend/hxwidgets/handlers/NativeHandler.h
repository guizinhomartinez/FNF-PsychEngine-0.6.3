#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler
#define INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,handlers,NativeHandler)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{


class HXCPP_CLASS_ATTRIBUTES NativeHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeHandler_obj OBJ_;
		NativeHandler_obj();

	public:
		enum { _hx_ClassId = 0x70a0e439 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.handlers.NativeHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.handlers.NativeHandler"); }
		static ::hx::ObjectPtr< NativeHandler_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< NativeHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeHandler",d3,ce,d6,4c); }

		 ::haxe::ui::core::Component _component;
		virtual void link();
		::Dynamic link_dyn();

		virtual void unlink();
		::Dynamic unlink_dyn();

		virtual bool applyStyle( ::haxe::ui::styles::Style style);
		::Dynamic applyStyle_dyn();

		 ::hx::widgets::Window window;
		 ::hx::widgets::Window get_window();
		::Dynamic get_window_dyn();

		virtual void resize(int width,int height);
		::Dynamic resize_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler */ 
