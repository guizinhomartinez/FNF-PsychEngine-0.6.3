#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_RadioButtonCreator
#define INCLUDED_haxe_ui_backend_hxwidgets_creators_RadioButtonCreator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,creators,Creator)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,creators,RadioButtonCreator)
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
namespace backend{
namespace hxwidgets{
namespace creators{


class HXCPP_CLASS_ATTRIBUTES RadioButtonCreator_obj : public  ::haxe::ui::backend::hxwidgets::creators::Creator_obj
{
	public:
		typedef  ::haxe::ui::backend::hxwidgets::creators::Creator_obj super;
		typedef RadioButtonCreator_obj OBJ_;
		RadioButtonCreator_obj();

	public:
		enum { _hx_ClassId = 0x5197c08b };

		void __construct( ::haxe::ui::components::OptionBox optionbox);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.creators.RadioButtonCreator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.creators.RadioButtonCreator"); }
		static ::hx::ObjectPtr< RadioButtonCreator_obj > __new( ::haxe::ui::components::OptionBox optionbox);
		static ::hx::ObjectPtr< RadioButtonCreator_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::OptionBox optionbox);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RadioButtonCreator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RadioButtonCreator",ff,a8,4a,4d); }

		 ::haxe::ui::components::OptionBox _optionbox;
		int createStyle(int style);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_creators_RadioButtonCreator */ 
