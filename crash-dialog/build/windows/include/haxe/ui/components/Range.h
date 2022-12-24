#ifndef INCLUDED_haxe_ui_components_Range
#define INCLUDED_haxe_ui_components_Range

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Range)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDirectionalComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,geom,Point)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES Range_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef Range_obj OBJ_;
		Range_obj();

	public:
		enum { _hx_ClassId = 0x0eaf7545 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Range")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Range"); }
		static ::hx::ObjectPtr< Range_obj > __new();
		static ::hx::ObjectPtr< Range_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Range_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Range",9d,15,4d,77); }

		 ::Dynamic virtualStart;
		 ::Dynamic virtualEnd;
		Float posFromCoord( ::haxe::ui::geom::Point coord);
		::Dynamic posFromCoord_dyn();

		virtual ::String get_cssName();

		virtual void registerBehaviours();

		 ::Dynamic get_min();
		::Dynamic get_min_dyn();

		 ::Dynamic set_min( ::Dynamic value);
		::Dynamic set_min_dyn();

		 ::Dynamic get_max();
		::Dynamic get_max_dyn();

		 ::Dynamic set_max( ::Dynamic value);
		::Dynamic set_max_dyn();

		 ::Dynamic get_start();
		::Dynamic get_start_dyn();

		 ::Dynamic set_start( ::Dynamic value);
		::Dynamic set_start_dyn();

		Float get_end();
		::Dynamic get_end_dyn();

		Float set_end(Float value);
		::Dynamic set_end_dyn();

		int get_precision();
		::Dynamic get_precision_dyn();

		int set_precision(int value);
		::Dynamic set_precision_dyn();

		Float get_step();
		::Dynamic get_step_dyn();

		Float set_step(Float value);
		::Dynamic set_step_dyn();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

		virtual void registerComposite();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Range */ 
