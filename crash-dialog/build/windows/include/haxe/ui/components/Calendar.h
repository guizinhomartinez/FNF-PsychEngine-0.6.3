#ifndef INCLUDED_haxe_ui_components_Calendar
#define INCLUDED_haxe_ui_components_Calendar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
#endif
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Calendar)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,Grid)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES Calendar_obj : public  ::haxe::ui::containers::Grid_obj
{
	public:
		typedef  ::haxe::ui::containers::Grid_obj super;
		typedef Calendar_obj OBJ_;
		Calendar_obj();

	public:
		enum { _hx_ClassId = 0x7bfde3d2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Calendar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Calendar"); }
		static ::hx::ObjectPtr< Calendar_obj > __new();
		static ::hx::ObjectPtr< Calendar_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Calendar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Calendar",de,1a,db,58); }

		 ::haxe::ui::util::VariantType previousMonth();
		::Dynamic previousMonth_dyn();

		 ::haxe::ui::util::VariantType nextMonth();
		::Dynamic nextMonth_dyn();

		 ::haxe::ui::util::VariantType previousYear();
		::Dynamic previousYear_dyn();

		 ::haxe::ui::util::VariantType nextYear();
		::Dynamic nextYear_dyn();

		void createDefaults();

		void registerComposite();

		void registerBehaviours();

		 ::Date get_date();
		::Dynamic get_date_dyn();

		 ::Date set_date( ::Date value);
		::Dynamic set_date_dyn();

		 ::Date get_selectedDate();
		::Dynamic get_selectedDate_dyn();

		 ::Date set_selectedDate( ::Date value);
		::Dynamic set_selectedDate_dyn();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Calendar */ 
