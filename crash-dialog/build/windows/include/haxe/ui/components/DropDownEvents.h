#ifndef INCLUDED_haxe_ui_components_DropDownEvents
#define INCLUDED_haxe_ui_components_DropDownEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,ButtonEvents)
HX_DECLARE_CLASS3(haxe,ui,components,DropDown)
HX_DECLARE_CLASS3(haxe,ui,components,DropDownEvents)
HX_DECLARE_CLASS3(haxe,ui,components,TextField)
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
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES DropDownEvents_obj : public  ::haxe::ui::components::ButtonEvents_obj
{
	public:
		typedef  ::haxe::ui::components::ButtonEvents_obj super;
		typedef DropDownEvents_obj OBJ_;
		DropDownEvents_obj();

	public:
		enum { _hx_ClassId = 0x533436da };

		void __construct( ::haxe::ui::components::DropDown dropdown);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.DropDownEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.DropDownEvents"); }
		static ::hx::ObjectPtr< DropDownEvents_obj > __new( ::haxe::ui::components::DropDown dropdown);
		static ::hx::ObjectPtr< DropDownEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DropDownEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DropDownEvents",4a,b2,30,73); }

		 ::haxe::ui::components::DropDown _dropdown;
		void _hx_register();

		void unregister();

		void onClick( ::haxe::ui::events::MouseEvent event);
		::Dynamic onClick_dyn();

		void onMouseClick( ::haxe::ui::events::MouseEvent event);

		 ::haxe::ui::core::Component _overlay;
		 ::haxe::ui::containers::Box _wrapper;
		void showDropDown();
		::Dynamic showDropDown_dyn();

		void onDropDownMoved( ::Dynamic _);
		::Dynamic onDropDownMoved_dyn();

		 ::haxe::ui::components::TextField createSearchField();
		::Dynamic createSearchField_dyn();

		 ::haxe::ui::components::TextField _searchField;
		 ::haxe::ui::components::TextField get_searchField();
		::Dynamic get_searchField_dyn();

		 ::haxe::ui::components::TextField set_searchField( ::haxe::ui::components::TextField value);
		::Dynamic set_searchField_dyn();

		::String _lastSearchTerm;
		void onSearchChange( ::haxe::ui::events::UIEvent event);
		::Dynamic onSearchChange_dyn();

		void hideDropDown();
		::Dynamic hideDropDown_dyn();

		void onScreenMouseDown( ::haxe::ui::events::MouseEvent event);
		::Dynamic onScreenMouseDown_dyn();

		void dispatchChanged();

		void release();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_DropDownEvents */ 
