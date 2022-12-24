#ifndef INCLUDED_haxe_ui_containers__ListView_ListViewBuilder
#define INCLUDED_haxe_ui_containers__ListView_ListViewBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,IVirtualContainer)
HX_DECLARE_CLASS3(haxe,ui,containers,ListView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollViewBuilder)
HX_DECLARE_CLASS4(haxe,ui,containers,_ListView,ListViewBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _ListView{


class HXCPP_CLASS_ATTRIBUTES ListViewBuilder_obj : public  ::haxe::ui::containers::ScrollViewBuilder_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollViewBuilder_obj super;
		typedef ListViewBuilder_obj OBJ_;
		ListViewBuilder_obj();

	public:
		enum { _hx_ClassId = 0x517616ae };

		void __construct( ::haxe::ui::containers::ListView listview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._ListView.ListViewBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._ListView.ListViewBuilder"); }
		static ::hx::ObjectPtr< ListViewBuilder_obj > __new( ::haxe::ui::containers::ListView listview);
		static ::hx::ObjectPtr< ListViewBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ListView listview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListViewBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListViewBuilder",58,5b,01,6a); }

		 ::haxe::ui::containers::ListView _listview;
		void create();

		void createContentContainer(::String layoutName);

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void onVirtualChanged();

		void addItemRendererClass( ::haxe::ui::core::Component child,::String className,::hx::Null< bool >  add);
		::Dynamic addItemRendererClass_dyn();

		void ensureVisible( ::haxe::ui::core::ItemRenderer itemToEnsure);
		::Dynamic ensureVisible_dyn();

		void ensureVirtualItemVisible(int index);
		::Dynamic ensureVirtualItemVisible_dyn();

		void applyStyle( ::haxe::ui::styles::Style style);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ListView

#endif /* INCLUDED_haxe_ui_containers__ListView_ListViewBuilder */ 
