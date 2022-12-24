#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewNodeBuilder
#define INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewNodeBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,builders,TreeViewNodeBuilder)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,custom,TreeViewNode)
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
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{


class HXCPP_CLASS_ATTRIBUTES TreeViewNodeBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef TreeViewNodeBuilder_obj OBJ_;
		TreeViewNodeBuilder_obj();

	public:
		enum { _hx_ClassId = 0x6949cd99 };

		void __construct( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.builders.TreeViewNodeBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.builders.TreeViewNodeBuilder"); }
		static ::hx::ObjectPtr< TreeViewNodeBuilder_obj > __new( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node);
		static ::hx::ObjectPtr< TreeViewNodeBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node);
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

		 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode _node;
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewNodeBuilder */ 
