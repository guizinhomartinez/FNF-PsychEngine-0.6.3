#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeBuilder
#define INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,components,Image)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,TreeViewNode)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,containers,_TreeViewNode,TreeViewNodeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _TreeViewNode{


class HXCPP_CLASS_ATTRIBUTES TreeViewNodeBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef TreeViewNodeBuilder_obj OBJ_;
		TreeViewNodeBuilder_obj();

	public:
		enum { _hx_ClassId = 0x6487d722 };

		void __construct( ::haxe::ui::containers::TreeViewNode node);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TreeViewNode.TreeViewNodeBuilder"); }
		static ::hx::ObjectPtr< TreeViewNodeBuilder_obj > __new( ::haxe::ui::containers::TreeViewNode node);
		static ::hx::ObjectPtr< TreeViewNodeBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeViewNode node);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeViewNodeBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TreeViewNodeBuilder",f6,22,d8,eb); }

		 ::haxe::ui::containers::TreeViewNode _node;
		 ::haxe::ui::containers::HBox _nodeContainer;
		 ::haxe::ui::components::Image _expandCollapseIcon;
		 ::haxe::ui::core::ItemRenderer _renderer;
		 ::haxe::ui::containers::VBox _childContainer;
		bool _isExpandable;
		void onInitialize();

		void onContainerClick( ::haxe::ui::events::MouseEvent event);
		::Dynamic onContainerClick_dyn();

		void onContainerDblClick( ::haxe::ui::events::MouseEvent event);
		::Dynamic onContainerDblClick_dyn();

		void onExpandCollapseClicked( ::haxe::ui::events::UIEvent _);
		::Dynamic onExpandCollapseClicked_dyn();

		void updateIconClass();
		::Dynamic updateIconClass_dyn();

		void validateComponentData();

		void changeToExpandableRenderer();
		::Dynamic changeToExpandableRenderer_dyn();

		void changeToNonExpandableRenderer();
		::Dynamic changeToNonExpandableRenderer_dyn();

		void makeNonExpandableRendererChanges();
		::Dynamic makeNonExpandableRendererChanges_dyn();

		void makeExpandableRendererChanges();
		::Dynamic makeExpandableRendererChanges_dyn();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeViewNode

#endif /* INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeBuilder */ 
