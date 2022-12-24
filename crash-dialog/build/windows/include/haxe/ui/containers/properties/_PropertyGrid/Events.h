#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGrid_Events
#define INCLUDED_haxe_ui_containers_properties__PropertyGrid_Events

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollViewEvents)
HX_DECLARE_CLASS5(haxe,ui,containers,properties,_PropertyGrid,Events)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _PropertyGrid{


class HXCPP_CLASS_ATTRIBUTES Events_obj : public  ::haxe::ui::containers::ScrollViewEvents_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollViewEvents_obj super;
		typedef Events_obj OBJ_;
		Events_obj();

	public:
		enum { _hx_ClassId = 0x553afc54 };

		void __construct( ::haxe::ui::containers::ScrollView scrollview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.properties._PropertyGrid.Events")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.properties._PropertyGrid.Events"); }
		static ::hx::ObjectPtr< Events_obj > __new( ::haxe::ui::containers::ScrollView scrollview);
		static ::hx::ObjectPtr< Events_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Events_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Events",39,c3,fe,ca); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _PropertyGrid

#endif /* INCLUDED_haxe_ui_containers_properties__PropertyGrid_Events */ 
