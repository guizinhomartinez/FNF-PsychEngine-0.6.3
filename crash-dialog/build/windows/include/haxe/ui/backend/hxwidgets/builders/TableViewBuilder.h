#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TableViewBuilder
#define INCLUDED_haxe_ui_backend_hxwidgets_builders_TableViewBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,builders,TableViewBuilder)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,Header)
HX_DECLARE_CLASS3(haxe,ui,containers,IVirtualContainer)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,TableView)
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
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,Event)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{


class HXCPP_CLASS_ATTRIBUTES TableViewBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef TableViewBuilder_obj OBJ_;
		TableViewBuilder_obj();

	public:
		enum { _hx_ClassId = 0x4ec37365 };

		void __construct( ::haxe::ui::containers::TableView table);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.builders.TableViewBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.builders.TableViewBuilder"); }
		static ::hx::ObjectPtr< TableViewBuilder_obj > __new( ::haxe::ui::containers::TableView table);
		static ::hx::ObjectPtr< TableViewBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TableView table);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TableViewBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TableViewBuilder",e8,d1,3a,e9); }

		 ::haxe::ui::containers::TableView _table;
		 ::haxe::ui::containers::Header _header;
		bool headersCreated;
		::Array< ::Dynamic> columns;
		::Array< ::Dynamic> renderers;
		void create();

		void onReady();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void createColumns();
		::Dynamic createColumns_dyn();

		void onItemChanged( ::hx::widgets::Event e);
		::Dynamic onItemChanged_dyn();

		void onTableResized( ::Dynamic _);
		::Dynamic onTableResized_dyn();

		 ::Dynamic getRendererInfo(int index);
		::Dynamic getRendererInfo_dyn();

		void resizeColumns();
		::Dynamic resizeColumns_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_builders_TableViewBuilder */ 
