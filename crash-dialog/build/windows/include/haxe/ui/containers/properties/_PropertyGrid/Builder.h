#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGrid_Builder
#define INCLUDED_haxe_ui_containers_properties__PropertyGrid_Builder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Scroll)
HX_DECLARE_CLASS3(haxe,ui,components,VerticalScroll)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollViewBuilder)
HX_DECLARE_CLASS5(haxe,ui,containers,properties,_PropertyGrid,Builder)
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
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _PropertyGrid{


class HXCPP_CLASS_ATTRIBUTES Builder_obj : public  ::haxe::ui::containers::ScrollViewBuilder_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollViewBuilder_obj super;
		typedef Builder_obj OBJ_;
		Builder_obj();

	public:
		enum { _hx_ClassId = 0x6535bc48 };

		void __construct( ::haxe::ui::containers::ScrollView scrollview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.properties._PropertyGrid.Builder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.properties._PropertyGrid.Builder"); }
		static ::hx::ObjectPtr< Builder_obj > __new( ::haxe::ui::containers::ScrollView scrollview);
		static ::hx::ObjectPtr< Builder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Builder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Builder",fb,02,0c,3d); }

		 ::haxe::ui::components::VerticalScroll createVScroll();

		void destroyVScroll();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _PropertyGrid

#endif /* INCLUDED_haxe_ui_containers_properties__PropertyGrid_Builder */ 
