#ifndef INCLUDED_haxe_ui_containers__TableView_Builder
#define INCLUDED_haxe_ui_containers__TableView_Builder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,Header)
HX_DECLARE_CLASS3(haxe,ui,containers,IVirtualContainer)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollViewBuilder)
HX_DECLARE_CLASS3(haxe,ui,containers,TableView)
HX_DECLARE_CLASS4(haxe,ui,containers,_TableView,Builder)
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
HX_DECLARE_CLASS3(haxe,ui,events,SortEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{


class HXCPP_CLASS_ATTRIBUTES Builder_obj : public  ::haxe::ui::containers::ScrollViewBuilder_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollViewBuilder_obj super;
		typedef Builder_obj OBJ_;
		Builder_obj();

	public:
		enum { _hx_ClassId = 0x3aec497b };

		void __construct( ::haxe::ui::containers::TableView tableview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TableView.Builder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TableView.Builder"); }
		static ::hx::ObjectPtr< Builder_obj > __new( ::haxe::ui::containers::TableView tableview);
		static ::hx::ObjectPtr< Builder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TableView tableview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Builder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Builder",fb,02,0c,3d); }

		 ::haxe::ui::containers::TableView _tableview;
		 ::haxe::ui::containers::Header _header;
		void create();

		void onInitialize();

		void onReady();

		void createContentContainer(::String layoutName);

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void onColumnAdded( ::Dynamic e);
		::Dynamic onColumnAdded_dyn();

		void onSortChanged( ::haxe::ui::events::SortEvent e);
		::Dynamic onSortChanged_dyn();

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		 ::haxe::ui::core::ItemRenderer createRenderer(::String id);
		::Dynamic createRenderer_dyn();

		void buildDefaultRenderer();
		::Dynamic buildDefaultRenderer_dyn();

		void fillExistingRenderer();
		::Dynamic fillExistingRenderer_dyn();

		Float verticalConstraintModifier();

		void onVirtualChanged();

		bool get_virtualHorizontal();

		void addItemRendererClass( ::haxe::ui::core::Component child,::String className,::hx::Null< bool >  add);
		::Dynamic addItemRendererClass_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView

#endif /* INCLUDED_haxe_ui_containers__TableView_Builder */ 
