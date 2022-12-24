#ifndef INCLUDED_haxe_ui_components_DropDownBuilder
#define INCLUDED_haxe_ui_components_DropDownBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,ButtonBuilder)
HX_DECLARE_CLASS3(haxe,ui,components,DropDown)
HX_DECLARE_CLASS3(haxe,ui,components,DropDownBuilder)
HX_DECLARE_CLASS3(haxe,ui,components,IDropDownHandler)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES DropDownBuilder_obj : public  ::haxe::ui::components::ButtonBuilder_obj
{
	public:
		typedef  ::haxe::ui::components::ButtonBuilder_obj super;
		typedef DropDownBuilder_obj OBJ_;
		DropDownBuilder_obj();

	public:
		enum { _hx_ClassId = 0x12e64056 };

		void __construct( ::haxe::ui::components::DropDown dropdown);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.DropDownBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.DropDownBuilder"); }
		static ::hx::ObjectPtr< DropDownBuilder_obj > __new( ::haxe::ui::components::DropDown dropdown);
		static ::hx::ObjectPtr< DropDownBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DropDownBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DropDownBuilder",ca,42,8b,c0); }

		static void __boot();
		static  ::haxe::ds::StringMap HANDLER_MAP;
		 ::haxe::ui::components::DropDown _dropdown;
		::Dynamic _handler;
		::Dynamic handler;
		::Dynamic get_handler();
		::Dynamic get_handler_dyn();

		void onReady();

		void create();

		void destroy();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void onThemeChanged();
		::Dynamic onThemeChanged_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_DropDownBuilder */ 
