#ifndef INCLUDED_haxe_ui_containers_ListViewEvents
#define INCLUDED_haxe_ui_containers_ListViewEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,IVirtualContainer)
HX_DECLARE_CLASS3(haxe,ui,containers,ListView)
HX_DECLARE_CLASS3(haxe,ui,containers,ListViewEvents)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollViewEvents)
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
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,events,ActionEvent)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,ScrollEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES ListViewEvents_obj : public  ::haxe::ui::containers::ScrollViewEvents_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollViewEvents_obj super;
		typedef ListViewEvents_obj OBJ_;
		ListViewEvents_obj();

	public:
		enum { _hx_ClassId = 0x434e1108 };

		void __construct( ::haxe::ui::containers::ListView listview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.ListViewEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.ListViewEvents"); }
		static ::hx::ObjectPtr< ListViewEvents_obj > __new( ::haxe::ui::containers::ListView listview);
		static ::hx::ObjectPtr< ListViewEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ListView listview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListViewEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListViewEvents",7c,65,97,23); }

		 ::haxe::ui::containers::ListView _listview;
		 ::haxe::ui::events::UIEvent lastEvent;
		void _hx_register();

		void unregister();

		void onScrollChange( ::haxe::ui::events::ScrollEvent e);
		::Dynamic onScrollChange_dyn();

		void onRendererCreated( ::haxe::ui::events::UIEvent e);
		::Dynamic onRendererCreated_dyn();

		void onRendererDestroyed( ::haxe::ui::events::UIEvent e);
		::Dynamic onRendererDestroyed_dyn();

		void onRendererMouseDown( ::haxe::ui::events::MouseEvent e);
		::Dynamic onRendererMouseDown_dyn();

		void startLongPressSelection( ::haxe::ui::events::MouseEvent e);
		::Dynamic startLongPressSelection_dyn();

		void onContainerEventsStatusChanged();

		void onRendererClick( ::haxe::ui::events::MouseEvent e);
		::Dynamic onRendererClick_dyn();

		void toggleSelection( ::haxe::ui::core::ItemRenderer renderer);
		::Dynamic toggleSelection_dyn();

		void selectRange(int fromIndex,int toIndex);
		::Dynamic selectRange_dyn();

		void onActionStart( ::haxe::ui::events::ActionEvent event);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_ListViewEvents */ 
