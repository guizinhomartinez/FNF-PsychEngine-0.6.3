#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#define INCLUDED_haxe_ui_containers_ScrollViewBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,HorizontalScroll)
HX_DECLARE_CLASS3(haxe,ui,components,Scroll)
HX_DECLARE_CLASS3(haxe,ui,components,VerticalScroll)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollViewBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDirectionalComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES ScrollViewBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef ScrollViewBuilder_obj OBJ_;
		ScrollViewBuilder_obj();

	public:
		enum { _hx_ClassId = 0x17e93bfd };

		void __construct( ::haxe::ui::containers::ScrollView scrollview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.ScrollViewBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.ScrollViewBuilder"); }
		static ::hx::ObjectPtr< ScrollViewBuilder_obj > __new( ::haxe::ui::containers::ScrollView scrollview);
		static ::hx::ObjectPtr< ScrollViewBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScrollViewBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScrollViewBuilder",09,28,d9,9d); }

		 ::haxe::ui::containers::ScrollView _scrollview;
		 ::haxe::ui::containers::Box _contents;
		::String _contentsLayoutName;
		virtual void create();

		void destroy();

		 ::Dynamic get_numComponents();

		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component addComponentAt( ::haxe::ui::core::Component child,int index);

		virtual  ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		bool removeAllComponents(::hx::Null< bool >  dispose);

		 ::haxe::ui::core::Component removeComponentAt(int index,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		int getComponentIndex( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component setComponentIndex( ::haxe::ui::core::Component child,int index);

		 ::haxe::ui::core::Component getComponentAt(int index);

		virtual void createContentContainer(::String layoutName);
		::Dynamic createContentContainer_dyn();

		Float horizontalConstraintModifier();
		::Dynamic horizontalConstraintModifier_dyn();

		virtual Float verticalConstraintModifier();
		::Dynamic verticalConstraintModifier_dyn();

		void checkScrolls();
		::Dynamic checkScrolls_dyn();

		 ::haxe::ui::components::HorizontalScroll createHScroll();
		::Dynamic createHScroll_dyn();

		virtual  ::haxe::ui::components::VerticalScroll createVScroll();
		::Dynamic createVScroll_dyn();

		void destroyHScroll();
		::Dynamic destroyHScroll_dyn();

		virtual void destroyVScroll();
		::Dynamic destroyVScroll_dyn();

		void updateScrollRect();
		::Dynamic updateScrollRect_dyn();

		bool virtualHorizontal;
		virtual bool get_virtualHorizontal();
		::Dynamic get_virtualHorizontal_dyn();

		bool virtualVertical;
		bool get_virtualVertical();
		::Dynamic get_virtualVertical_dyn();

		virtual void onVirtualChanged();
		::Dynamic onVirtualChanged_dyn();

		virtual void applyStyle( ::haxe::ui::styles::Style style);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_ScrollViewBuilder */ 
