#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#define INCLUDED_haxe_ui_containers__TabView_Builder

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
HX_DECLARE_CLASS3(haxe,ui,components,TabBar)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,TabView)
HX_DECLARE_CLASS4(haxe,ui,containers,_TabView,Builder)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{


class HXCPP_CLASS_ATTRIBUTES Builder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef Builder_obj OBJ_;
		Builder_obj();

	public:
		enum { _hx_ClassId = 0x05c1c414 };

		void __construct( ::haxe::ui::containers::TabView tabview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TabView.Builder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TabView.Builder"); }
		static ::hx::ObjectPtr< Builder_obj > __new( ::haxe::ui::containers::TabView tabview);
		static ::hx::ObjectPtr< Builder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TabView tabview);
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

		 ::haxe::ui::containers::TabView _tabview;
		 ::haxe::ui::components::TabBar _tabs;
		 ::haxe::ui::containers::Box _content;
		 ::haxe::ui::core::Component _currentView;
		::Array< ::Dynamic> _views;
		void create();

		 ::Dynamic get_numComponents();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component addComponentAt( ::haxe::ui::core::Component child,int index);

		void onPagePropertyChanged( ::haxe::ui::events::UIEvent event);
		::Dynamic onPagePropertyChanged_dyn();

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		 ::haxe::ui::core::Component removeComponentAt(int index,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		int getComponentIndex( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component setComponentIndex( ::haxe::ui::core::Component child,int index);

		 ::haxe::ui::core::Component getComponentAt(int index);

		 ::Dynamic findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType);

		void applyStyle( ::haxe::ui::styles::Style style);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView

#endif /* INCLUDED_haxe_ui_containers__TabView_Builder */ 
