#ifndef INCLUDED_haxe_ui_containers_ListView
#define INCLUDED_haxe_ui_containers_ListView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
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
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,events,ItemEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES ListView_obj : public  ::haxe::ui::containers::ScrollView_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollView_obj super;
		typedef ListView_obj OBJ_;
		ListView_obj();

	public:
		enum { _hx_ClassId = 0x5c9408f3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.ListView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.ListView"); }
		static ::hx::ObjectPtr< ListView_obj > __new();
		static ::hx::ObjectPtr< ListView_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ListView",03,be,f5,07); }

		::hx::Class _itemRendererClass;
		::hx::Class get_itemRendererClass();
		::Dynamic get_itemRendererClass_dyn();

		::hx::Class set_itemRendererClass(::hx::Class value);
		::Dynamic set_itemRendererClass_dyn();

		 ::haxe::ui::core::ItemRenderer _itemRenderer;
		 ::haxe::ui::core::ItemRenderer get_itemRenderer();
		::Dynamic get_itemRenderer_dyn();

		 ::haxe::ui::core::ItemRenderer set_itemRenderer( ::haxe::ui::core::ItemRenderer value);
		::Dynamic set_itemRenderer_dyn();

		void registerComposite();

		 ::Dynamic _internal__onComponentEvent;
		Dynamic _internal__onComponentEvent_dyn() { return _internal__onComponentEvent;}
		 ::Dynamic onComponentEvent;
		Dynamic onComponentEvent_dyn() { return onComponentEvent;}
		 ::Dynamic set_onComponentEvent( ::Dynamic value);
		::Dynamic set_onComponentEvent_dyn();

		void registerBehaviours();

		 ::haxe::ui::data::DataSource get_dataSource();
		::Dynamic get_dataSource_dyn();

		 ::haxe::ui::data::DataSource set_dataSource( ::haxe::ui::data::DataSource value);
		::Dynamic set_dataSource_dyn();

		Float get_itemWidth();
		::Dynamic get_itemWidth_dyn();

		Float set_itemWidth(Float value);
		::Dynamic set_itemWidth_dyn();

		Float get_itemHeight();
		::Dynamic get_itemHeight_dyn();

		Float set_itemHeight(Float value);
		::Dynamic set_itemHeight_dyn();

		int get_itemCount();
		::Dynamic get_itemCount_dyn();

		int set_itemCount(int value);
		::Dynamic set_itemCount_dyn();

		bool get_variableItemSize();
		::Dynamic get_variableItemSize_dyn();

		bool set_variableItemSize(bool value);
		::Dynamic set_variableItemSize_dyn();

		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		 ::Dynamic get_selectedItem();
		::Dynamic get_selectedItem_dyn();

		 ::Dynamic set_selectedItem( ::Dynamic value);
		::Dynamic set_selectedItem_dyn();

		::Array< int > get_selectedIndices();
		::Dynamic get_selectedIndices_dyn();

		::Array< int > set_selectedIndices(::Array< int > value);
		::Dynamic set_selectedIndices_dyn();

		::cpp::VirtualArray get_selectedItems();
		::Dynamic get_selectedItems_dyn();

		::cpp::VirtualArray set_selectedItems(::cpp::VirtualArray value);
		::Dynamic set_selectedItems_dyn();

		::String get_selectionMode();
		::Dynamic get_selectionMode_dyn();

		::String set_selectionMode(::String value);
		::Dynamic set_selectionMode_dyn();

		int get_longPressSelectionTime();
		::Dynamic get_longPressSelectionTime_dyn();

		int set_longPressSelectionTime(int value);
		::Dynamic set_longPressSelectionTime_dyn();

		 ::Dynamic get_value();

		 ::Dynamic set_value( ::Dynamic value);

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_ListView */ 
