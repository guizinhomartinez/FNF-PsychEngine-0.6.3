#ifndef INCLUDED_haxe_ui_components_OptionBox
#define INCLUDED_haxe_ui_components_OptionBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,CheckBox)
HX_DECLARE_CLASS3(haxe,ui,components,OptionBox)
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


class HXCPP_CLASS_ATTRIBUTES OptionBox_obj : public  ::haxe::ui::components::CheckBox_obj
{
	public:
		typedef  ::haxe::ui::components::CheckBox_obj super;
		typedef OptionBox_obj OBJ_;
		OptionBox_obj();

	public:
		enum { _hx_ClassId = 0x0277f43a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.OptionBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.OptionBox"); }
		static ::hx::ObjectPtr< OptionBox_obj > __new();
		static ::hx::ObjectPtr< OptionBox_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OptionBox_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OptionBox",76,59,26,24); }

		void resetGroup();
		::Dynamic resetGroup_dyn();

		void registerComposite();

		void registerBehaviours();

		::String get_componentGroup();
		::Dynamic get_componentGroup_dyn();

		::String set_componentGroup(::String value);
		::Dynamic set_componentGroup_dyn();

		 ::haxe::ui::core::Component get_selectedOption();
		::Dynamic get_selectedOption_dyn();

		 ::haxe::ui::core::Component set_selectedOption( ::haxe::ui::core::Component value);
		::Dynamic set_selectedOption_dyn();

		 ::Dynamic get_value();

		 ::Dynamic set_value( ::Dynamic value);

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_OptionBox */ 
