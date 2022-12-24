#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_ReflectionHandler
#define INCLUDED_haxe_ui_backend_hxwidgets_handlers_ReflectionHandler

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
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,handlers,ReflectionHandler)
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


class HXCPP_CLASS_ATTRIBUTES ReflectionHandler_obj : public  ::haxe::ui::backend::hxwidgets::handlers::NativeHandler_obj
{
	public:
		typedef  ::haxe::ui::backend::hxwidgets::handlers::NativeHandler_obj super;
		typedef ReflectionHandler_obj OBJ_;
		ReflectionHandler_obj();

	public:
		enum { _hx_ClassId = 0x0e57b16d };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.handlers.ReflectionHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.handlers.ReflectionHandler"); }
		static ::hx::ObjectPtr< ReflectionHandler_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ReflectionHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ReflectionHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ReflectionHandler",3f,65,47,58); }

		::String _event;
		int _eventId;
		::String _sourceProp;
		::String _targetProp;
		void link();

		void unlink();

		void onEvent( ::hx::widgets::Event event);
		::Dynamic onEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_handlers_ReflectionHandler */ 
