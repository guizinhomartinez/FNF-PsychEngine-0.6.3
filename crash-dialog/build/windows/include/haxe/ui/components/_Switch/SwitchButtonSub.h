#ifndef INCLUDED_haxe_ui_components__Switch_SwitchButtonSub
#define INCLUDED_haxe_ui_components__Switch_SwitchButtonSub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,Label)
HX_DECLARE_CLASS4(haxe,ui,components,_Switch,SwitchButtonSub)
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
namespace _Switch{


class HXCPP_CLASS_ATTRIBUTES SwitchButtonSub_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef SwitchButtonSub_obj OBJ_;
		SwitchButtonSub_obj();

	public:
		enum { _hx_ClassId = 0x01c1cdbf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._Switch.SwitchButtonSub")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._Switch.SwitchButtonSub"); }
		static ::hx::ObjectPtr< SwitchButtonSub_obj > __new();
		static ::hx::ObjectPtr< SwitchButtonSub_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SwitchButtonSub_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SwitchButtonSub",fa,01,f6,18); }

		 ::haxe::ui::components::Button _button;
		 ::haxe::ui::components::Label _label;
		void createChildren();

		bool _selected;
		bool get_selected();
		::Dynamic get_selected_dyn();

		bool set_selected(bool value);
		::Dynamic set_selected_dyn();

		::String _selectedText;
		::String get_selectedText();
		::Dynamic get_selectedText_dyn();

		::String set_selectedText(::String value);
		::Dynamic set_selectedText_dyn();

		::String _unselectedText;
		::String get_unselectedText();
		::Dynamic get_unselectedText_dyn();

		::String set_unselectedText(::String value);
		::Dynamic set_unselectedText_dyn();

		Float _pos;
		Float get_pos();
		::Dynamic get_pos_dyn();

		Float set_pos(Float value);
		::Dynamic set_pos_dyn();

		void registerBehaviours();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

		void registerComposite();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Switch

#endif /* INCLUDED_haxe_ui_components__Switch_SwitchButtonSub */ 
