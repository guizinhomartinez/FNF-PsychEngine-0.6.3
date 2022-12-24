#ifndef INCLUDED_haxe_ui_components_DropDownHandler
#define INCLUDED_haxe_ui_components_DropDownHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,DropDown)
HX_DECLARE_CLASS3(haxe,ui,components,DropDownHandler)
HX_DECLARE_CLASS3(haxe,ui,components,IDropDownHandler)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES DropDownHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DropDownHandler_obj OBJ_;
		DropDownHandler_obj();

	public:
		enum { _hx_ClassId = 0x184b9921 };

		void __construct( ::haxe::ui::components::DropDown dropdown);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.DropDownHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.DropDownHandler"); }
		static ::hx::ObjectPtr< DropDownHandler_obj > __new( ::haxe::ui::components::DropDown dropdown);
		static ::hx::ObjectPtr< DropDownHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DropDownHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("DropDownHandler",79,17,a6,96); }

		 ::haxe::ui::components::DropDown _dropdown;
		 ::haxe::ui::core::Component component;
		virtual  ::haxe::ui::core::Component get_component();
		::Dynamic get_component_dyn();

		virtual void prepare( ::haxe::ui::containers::Box wrapper);
		::Dynamic prepare_dyn();

		virtual void reset();
		::Dynamic reset_dyn();

		virtual int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		virtual int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		virtual  ::Dynamic get_selectedItem();
		::Dynamic get_selectedItem_dyn();

		virtual  ::Dynamic set_selectedItem( ::Dynamic value);
		::Dynamic set_selectedItem_dyn();

		virtual void applyDefault();
		::Dynamic applyDefault_dyn();

		bool eventsPaused;
		void pauseEvents();
		::Dynamic pauseEvents_dyn();

		void resumeEvents();
		::Dynamic resumeEvents_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_DropDownHandler */ 
