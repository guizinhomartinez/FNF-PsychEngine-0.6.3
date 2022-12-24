#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TreeViewNode
#define INCLUDED_haxe_ui_backend_hxwidgets_custom_TreeViewNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#include <haxe/ui/containers/TreeViewNode.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
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
namespace custom{


class HXCPP_CLASS_ATTRIBUTES TreeViewNode_obj : public  ::haxe::ui::containers::TreeViewNode_obj
{
	public:
		typedef  ::haxe::ui::containers::TreeViewNode_obj super;
		typedef TreeViewNode_obj OBJ_;
		TreeViewNode_obj();

	public:
		enum { _hx_ClassId = 0x31fbae07 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.custom.TreeViewNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.custom.TreeViewNode"); }
		static ::hx::ObjectPtr< TreeViewNode_obj > __new();
		static ::hx::ObjectPtr< TreeViewNode_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeViewNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TreeViewNode",a5,2e,59,6c); }

		 ::haxe::ui::containers::TreeView treeView;
		 ::hx::widgets::DataViewItem dataViewItem;
		void applyExpanded();
		::Dynamic applyExpanded_dyn();

		 ::Dynamic set_data( ::Dynamic value);

		void updateNodeFromData();
		::Dynamic updateNodeFromData_dyn();

		 ::Dynamic _expand;
		bool get_expanded();

		bool set_expanded(bool value);

		::Array< ::Dynamic> getNodesInternal();

		bool get_selected();

		bool set_selected(bool value);

		void registerBehaviours();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_custom_TreeViewNode */ 
