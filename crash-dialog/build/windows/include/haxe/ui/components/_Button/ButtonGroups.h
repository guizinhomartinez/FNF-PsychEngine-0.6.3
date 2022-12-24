#ifndef INCLUDED_haxe_ui_components__Button_ButtonGroups
#define INCLUDED_haxe_ui_components__Button_ButtonGroups

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS4(haxe,ui,components,_Button,ButtonGroups)
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
namespace _Button{


class HXCPP_CLASS_ATTRIBUTES ButtonGroups_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ButtonGroups_obj OBJ_;
		ButtonGroups_obj();

	public:
		enum { _hx_ClassId = 0x4bba63a7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._Button.ButtonGroups")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._Button.ButtonGroups"); }
		static ::hx::ObjectPtr< ButtonGroups_obj > __new();
		static ::hx::ObjectPtr< ButtonGroups_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ButtonGroups_obj();

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
		::String __ToString() const { return HX_("ButtonGroups",06,48,f8,8b); }

		static  ::haxe::ui::components::_Button::ButtonGroups _instance;
		static  ::haxe::ui::components::_Button::ButtonGroups instance;
		static  ::haxe::ui::components::_Button::ButtonGroups get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ds::StringMap _groups;
		::Array< ::Dynamic> get(::String name);
		::Dynamic get_dyn();

		void set(::String name,::Array< ::Dynamic> buttons);
		::Dynamic set_dyn();

		void add(::String name, ::haxe::ui::components::Button button);
		::Dynamic add_dyn();

		void remove(::String name, ::haxe::ui::components::Button button);
		::Dynamic remove_dyn();

		void reset(::String name);
		::Dynamic reset_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Button

#endif /* INCLUDED_haxe_ui_components__Button_ButtonGroups */ 
