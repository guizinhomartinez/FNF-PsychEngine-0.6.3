#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_ChoiceHandler
#define INCLUDED_haxe_ui_backend_hxwidgets_handlers_ChoiceHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler
#include <haxe/ui/backend/hxwidgets/handlers/NativeHandler.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,handlers,ChoiceHandler)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,handlers,NativeHandler)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,Event)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{


class HXCPP_CLASS_ATTRIBUTES ChoiceHandler_obj : public  ::haxe::ui::backend::hxwidgets::handlers::NativeHandler_obj
{
	public:
		typedef  ::haxe::ui::backend::hxwidgets::handlers::NativeHandler_obj super;
		typedef ChoiceHandler_obj OBJ_;
		ChoiceHandler_obj();

	public:
		enum { _hx_ClassId = 0x469c275b };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.handlers.ChoiceHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.handlers.ChoiceHandler"); }
		static ::hx::ObjectPtr< ChoiceHandler_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ChoiceHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChoiceHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChoiceHandler",49,86,8a,ed); }

		void link();

		void unlink();

		void _hx___onChangeEvent( ::hx::widgets::Event event);
		::Dynamic _hx___onChangeEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_handlers_ChoiceHandler */ 
