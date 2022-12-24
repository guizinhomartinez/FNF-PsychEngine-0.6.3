#ifndef INCLUDED_haxe_ui_components_TextField
#define INCLUDED_haxe_ui_components_TextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,TextField)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES TextField_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef TextField_obj OBJ_;
		TextField_obj();

	public:
		enum { _hx_ClassId = 0x19a59f71 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.TextField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.TextField"); }
		static ::hx::ObjectPtr< TextField_obj > __new();
		static ::hx::ObjectPtr< TextField_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextField_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextField",ad,04,54,3b); }

		void registerBehaviours();

		bool get_password();
		::Dynamic get_password_dyn();

		bool set_password(bool value);
		::Dynamic set_password_dyn();

		int get_maxChars();
		::Dynamic get_maxChars_dyn();

		int set_maxChars(int value);
		::Dynamic set_maxChars_dyn();

		::String get_restrictChars();
		::Dynamic get_restrictChars_dyn();

		::String set_restrictChars(::String value);
		::Dynamic set_restrictChars_dyn();

		::String get_placeholder();
		::Dynamic get_placeholder_dyn();

		::String set_placeholder(::String value);
		::Dynamic set_placeholder_dyn();

		::String get_htmlText();
		::Dynamic get_htmlText_dyn();

		::String set_htmlText(::String value);
		::Dynamic set_htmlText_dyn();

		::String get_icon();
		::Dynamic get_icon_dyn();

		::String set_icon(::String value);
		::Dynamic set_icon_dyn();

		int get_caretIndex();
		::Dynamic get_caretIndex_dyn();

		int set_caretIndex(int value);
		::Dynamic set_caretIndex_dyn();

		int get_selectionStartIndex();
		::Dynamic get_selectionStartIndex_dyn();

		int set_selectionStartIndex(int value);
		::Dynamic set_selectionStartIndex_dyn();

		int get_selectionEndIndex();
		::Dynamic get_selectionEndIndex_dyn();

		int set_selectionEndIndex(int value);
		::Dynamic set_selectionEndIndex_dyn();

		 ::Dynamic get_value();

		 ::Dynamic set_value( ::Dynamic value);

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

		void registerComposite();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_TextField */ 
