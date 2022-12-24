#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_AllowInteraction
#define INCLUDED_haxe_ui_backend_hxwidgets_behaviours_AllowInteraction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,behaviours,AllowInteraction)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,DataBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,IValidatingBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,ValueBehaviour)
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
namespace behaviours{


class HXCPP_CLASS_ATTRIBUTES AllowInteraction_obj : public  ::haxe::ui::behaviours::DataBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DataBehaviour_obj super;
		typedef AllowInteraction_obj OBJ_;
		AllowInteraction_obj();

	public:
		enum { _hx_ClassId = 0x457734c4 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.behaviours.AllowInteraction")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.behaviours.AllowInteraction"); }
		static ::hx::ObjectPtr< AllowInteraction_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< AllowInteraction_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AllowInteraction_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AllowInteraction",e9,31,7f,7d); }

		void validateData();

		bool _hasEvents;
		void registerEvents();
		::Dynamic registerEvents_dyn();

		void unregisterEvents();
		::Dynamic unregisterEvents_dyn();

		void onLeftDown( ::hx::widgets::Event e);
		::Dynamic onLeftDown_dyn();

		void onLeftUp( ::hx::widgets::Event e);
		::Dynamic onLeftUp_dyn();

		void onEnterWindow( ::hx::widgets::Event e);
		::Dynamic onEnterWindow_dyn();

		void onLeaveWindow( ::hx::widgets::Event e);
		::Dynamic onLeaveWindow_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_behaviours_AllowInteraction */ 
