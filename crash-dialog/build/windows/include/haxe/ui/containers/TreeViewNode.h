#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#define INCLUDED_haxe_ui_containers_TreeViewNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
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
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES TreeViewNode_obj : public  ::haxe::ui::containers::VBox_obj
{
	public:
		typedef  ::haxe::ui::containers::VBox_obj super;
		typedef TreeViewNode_obj OBJ_;
		TreeViewNode_obj();

	public:
		enum { _hx_ClassId = 0x02a99f31 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.TreeViewNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.TreeViewNode"); }
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

		 ::haxe::ui::containers::TreeViewNode addNode( ::Dynamic data);
		::Dynamic addNode_dyn();

		 ::haxe::ui::containers::TreeViewNode removeNode( ::haxe::ui::containers::TreeViewNode node);
		::Dynamic removeNode_dyn();

		void clearNodes();
		::Dynamic clearNodes_dyn();

		virtual ::Array< ::Dynamic> getNodesInternal();
		::Dynamic getNodesInternal_dyn();

		 ::haxe::ui::containers::TreeViewNode parentNode;
		::String nodePath(::String field);
		::Dynamic nodePath_dyn();

		 ::haxe::ui::containers::TreeViewNode findNodeByPath(::String path,::String field);
		::Dynamic findNodeByPath_dyn();

		bool matchesPathPart(::String part,::String field);
		::Dynamic matchesPathPart_dyn();

		::Array< ::Dynamic> getNodes();
		::Dynamic getNodes_dyn();

		virtual bool get_selected();
		::Dynamic get_selected_dyn();

		virtual bool set_selected(bool value);
		::Dynamic set_selected_dyn();

		 ::Dynamic _data;
		 ::Dynamic get_data();
		::Dynamic get_data_dyn();

		virtual  ::Dynamic set_data( ::Dynamic value);
		::Dynamic set_data_dyn();

		::String get_text();

		::String set_text(::String value);

		::String get_icon();

		::String set_icon(::String value);

		void registerComposite();

		virtual void registerBehaviours();

		virtual bool get_expanded();
		::Dynamic get_expanded_dyn();

		virtual bool set_expanded(bool value);
		::Dynamic set_expanded_dyn();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_TreeViewNode */ 
