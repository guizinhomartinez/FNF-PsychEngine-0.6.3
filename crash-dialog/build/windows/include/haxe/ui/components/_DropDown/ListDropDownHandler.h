#ifndef INCLUDED_haxe_ui_components__DropDown_ListDropDownHandler
#define INCLUDED_haxe_ui_components__DropDown_ListDropDownHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_DropDownHandler
#include <haxe/ui/components/DropDownHandler.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,DropDown)
HX_DECLARE_CLASS3(haxe,ui,components,DropDownHandler)
HX_DECLARE_CLASS3(haxe,ui,components,IDropDownHandler)
HX_DECLARE_CLASS4(haxe,ui,components,_DropDown,ListDropDownHandler)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,IVirtualContainer)
HX_DECLARE_CLASS3(haxe,ui,containers,ListView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _DropDown{


class HXCPP_CLASS_ATTRIBUTES ListDropDownHandler_obj : public  ::haxe::ui::components::DropDownHandler_obj
{
	public:
		typedef  ::haxe::ui::components::DropDownHandler_obj super;
		typedef ListDropDownHandler_obj OBJ_;
		ListDropDownHandler_obj();

	public:
		enum { _hx_ClassId = 0x0101a03f };

		void __construct( ::haxe::ui::components::DropDown dropdown);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._DropDown.ListDropDownHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._DropDown.ListDropDownHandler"); }
		static ::hx::ObjectPtr< ListDropDownHandler_obj > __new( ::haxe::ui::components::DropDown dropdown);
		static ::hx::ObjectPtr< ListDropDownHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListDropDownHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListDropDownHandler",bb,0c,df,b6); }

		 ::haxe::ui::containers::ListView _listview;
		 ::haxe::ui::core::Component get_component();

		void reset();

		void prepare( ::haxe::ui::containers::Box wrapper);

		int _cachedSelectedIndex;
		int get_selectedIndex();

		int set_selectedIndex(int value);

		int indexOfItem(::String text);
		::Dynamic indexOfItem_dyn();

		 ::Dynamic get_selectedItem();

		 ::Dynamic _cachedSelectedItem;
		 ::Dynamic set_selectedItem( ::Dynamic value);

		void createListView();
		::Dynamic createListView_dyn();

		void onListChange( ::haxe::ui::events::UIEvent event);
		::Dynamic onListChange_dyn();

		void applySelection();
		::Dynamic applySelection_dyn();

		void applyDefault();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _DropDown

#endif /* INCLUDED_haxe_ui_components__DropDown_ListDropDownHandler */ 
