#ifndef INCLUDED_haxe_ui_containers_TreeView
#define INCLUDED_haxe_ui_containers_TreeView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
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
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES TreeView_obj : public  ::haxe::ui::containers::ScrollView_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollView_obj super;
		typedef TreeView_obj OBJ_;
		TreeView_obj();

	public:
		enum { _hx_ClassId = 0x606705f3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.TreeView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.TreeView"); }
		static ::hx::ObjectPtr< TreeView_obj > __new();
		static ::hx::ObjectPtr< TreeView_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TreeView",03,bb,c8,0b); }

		 ::haxe::ui::containers::TreeViewNode addNode( ::Dynamic data);
		::Dynamic addNode_dyn();

		 ::haxe::ui::containers::TreeViewNode removeNode( ::haxe::ui::containers::TreeViewNode node);
		::Dynamic removeNode_dyn();

		void clearNodes();
		::Dynamic clearNodes_dyn();

		::Array< ::Dynamic> getNodesInternal();
		::Dynamic getNodesInternal_dyn();

		 ::haxe::ui::data::DataSource _dataSource;
		 ::haxe::ui::data::DataSource get_dataSource();
		::Dynamic get_dataSource_dyn();

		 ::haxe::ui::data::DataSource set_dataSource( ::haxe::ui::data::DataSource value);
		::Dynamic set_dataSource_dyn();

		void onDataChanged();
		::Dynamic onDataChanged_dyn();

		::Array< ::Dynamic> getNodes();
		::Dynamic getNodes_dyn();

		 ::haxe::ui::core::ItemRenderer _itemRenderer;
		 ::haxe::ui::core::ItemRenderer get_itemRenderer();
		::Dynamic get_itemRenderer_dyn();

		 ::haxe::ui::core::ItemRenderer set_itemRenderer( ::haxe::ui::core::ItemRenderer value);
		::Dynamic set_itemRenderer_dyn();

		 ::haxe::ui::core::ItemRenderer _expandableItemRenderer;
		 ::haxe::ui::core::ItemRenderer get_expandableItemRenderer();
		::Dynamic get_expandableItemRenderer_dyn();

		 ::haxe::ui::core::ItemRenderer set_expandableItemRenderer( ::haxe::ui::core::ItemRenderer value);
		::Dynamic set_expandableItemRenderer_dyn();

		 ::haxe::ui::containers::TreeViewNode findNodeByPath(::String path,::String field);
		::Dynamic findNodeByPath_dyn();

		void registerComposite();

		void registerBehaviours();

		 ::haxe::ui::containers::TreeViewNode get_selectedNode();
		::Dynamic get_selectedNode_dyn();

		 ::haxe::ui::containers::TreeViewNode set_selectedNode( ::haxe::ui::containers::TreeViewNode value);
		::Dynamic set_selectedNode_dyn();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_TreeView */ 
