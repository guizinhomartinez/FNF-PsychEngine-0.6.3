#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewBuilder
#define INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,builders,TreeViewBuilder)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,custom,TreeViewNode)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,TreeView)
HX_DECLARE_CLASS3(haxe,ui,containers,TreeViewNode)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
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
HX_DECLARE_CLASS2(hx,widgets,DataViewItem)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{


class HXCPP_CLASS_ATTRIBUTES TreeViewBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef TreeViewBuilder_obj OBJ_;
		TreeViewBuilder_obj();

	public:
		enum { _hx_ClassId = 0x0d6b3e23 };

		void __construct( ::haxe::ui::containers::TreeView treeview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.builders.TreeViewBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder"); }
		static ::hx::ObjectPtr< TreeViewBuilder_obj > __new( ::haxe::ui::containers::TreeView treeview);
		static ::hx::ObjectPtr< TreeViewBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeView treeview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeViewBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TreeViewBuilder",58,fe,37,3f); }

		 ::haxe::ui::containers::TreeView _treeview;
		::Array< ::Dynamic> nodesToCreate;
		void onInitialize();

		 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode dataViewItemToNode( ::hx::widgets::DataViewItem dataViewItem);
		::Dynamic dataViewItemToNode_dyn();

		::Array< ::Dynamic> dataViewItemChildren( ::hx::widgets::DataViewItem dataViewItem);
		::Dynamic dataViewItemChildren_dyn();

		 ::haxe::ds::IntMap _dataViewItemToNodeMap;
		void createNode( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node);
		::Dynamic createNode_dyn();

		void removeNode( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node);
		::Dynamic removeNode_dyn();

		void clearNodes( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node);
		::Dynamic clearNodes_dyn();

		void deleteDataViewItem( ::hx::widgets::DataViewItem dataViewItem,bool clearObjects);
		::Dynamic deleteDataViewItem_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewBuilder */ 
