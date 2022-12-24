#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#define INCLUDED_haxe_ui_components__TabBar_Builder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,TabBar)
HX_DECLARE_CLASS4(haxe,ui,components,_TabBar,Builder)
HX_DECLARE_CLASS4(haxe,ui,components,_TabBar,TabBarButton)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{


class HXCPP_CLASS_ATTRIBUTES Builder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef Builder_obj OBJ_;
		Builder_obj();

	public:
		enum { _hx_ClassId = 0x361c08ee };

		void __construct( ::haxe::ui::components::TabBar tabbar);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._TabBar.Builder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._TabBar.Builder"); }
		static ::hx::ObjectPtr< Builder_obj > __new( ::haxe::ui::components::TabBar tabbar);
		static ::hx::ObjectPtr< Builder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::TabBar tabbar);
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

		static void __boot();
		static int SCROLL_INCREMENT;
		 ::haxe::ui::components::TabBar _tabbar;
		 ::haxe::ui::containers::HBox _container;
		 ::haxe::ui::containers::Box _filler;
		void create();

		void createContainer();
		::Dynamic createContainer_dyn();

		 ::haxe::ui::core::Component addTab( ::haxe::ui::core::Component child);
		::Dynamic addTab_dyn();

		 ::haxe::ui::core::Component addTabAt( ::haxe::ui::core::Component child,int index);
		::Dynamic addTabAt_dyn();

		 ::haxe::ui::components::_TabBar::TabBarButton createTabBarButton( ::haxe::ui::core::Component child);
		::Dynamic createTabBarButton_dyn();

		 ::Dynamic get_numComponents();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component addComponentAt( ::haxe::ui::core::Component child,int index);

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		 ::haxe::ui::core::Component removeComponentAt(int index,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		int getComponentIndex( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component setComponentIndex( ::haxe::ui::core::Component child,int index);

		 ::haxe::ui::core::Component getComponentAt(int index);

		bool validateComponentLayout();

		 ::haxe::ui::components::Button _scrollLeft;
		 ::haxe::ui::components::Button _scrollRight;
		void showScrollButtons();
		::Dynamic showScrollButtons_dyn();

		 ::Dynamic _containerPosition;
		void scrollLeft();
		::Dynamic scrollLeft_dyn();

		void scrollRight();
		::Dynamic scrollRight_dyn();

		void hideScrollButtons();
		::Dynamic hideScrollButtons_dyn();

		void applyStyle( ::haxe::ui::styles::Style style);

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar

#endif /* INCLUDED_haxe_ui_components__TabBar_Builder */ 
