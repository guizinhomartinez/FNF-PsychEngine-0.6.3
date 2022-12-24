#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_TextCtrlHandler
#define INCLUDED_haxe_ui_backend_hxwidgets_handlers_TextCtrlHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler
#include <haxe/ui/backend/hxwidgets/handlers/NativeHandler.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,handlers,NativeHandler)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,handlers,TextCtrlHandler)
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

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{


class HXCPP_CLASS_ATTRIBUTES TextCtrlHandler_obj : public  ::haxe::ui::backend::hxwidgets::handlers::NativeHandler_obj
{
	public:
		typedef  ::haxe::ui::backend::hxwidgets::handlers::NativeHandler_obj super;
		typedef TextCtrlHandler_obj OBJ_;
		TextCtrlHandler_obj();

	public:
		enum { _hx_ClassId = 0x27587c24 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.handlers.TextCtrlHandler"); }
		static ::hx::ObjectPtr< TextCtrlHandler_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< TextCtrlHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextCtrlHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextCtrlHandler",92,f2,ce,2d); }

		bool applyStyle( ::haxe::ui::styles::Style style);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_handlers_TextCtrlHandler */ 
