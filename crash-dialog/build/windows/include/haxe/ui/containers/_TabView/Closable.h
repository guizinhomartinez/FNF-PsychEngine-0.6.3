#ifndef INCLUDED_haxe_ui_containers__TabView_Closable
#define INCLUDED_haxe_ui_containers__TabView_Closable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,DataBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,IValidatingBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,ValueBehaviour)
HX_DECLARE_CLASS4(haxe,ui,containers,_TabView,Closable)
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
namespace _TabView{


class HXCPP_CLASS_ATTRIBUTES Closable_obj : public  ::haxe::ui::behaviours::DataBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DataBehaviour_obj super;
		typedef Closable_obj OBJ_;
		Closable_obj();

	public:
		enum { _hx_ClassId = 0x32af5d0e };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TabView.Closable")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TabView.Closable"); }
		static ::hx::ObjectPtr< Closable_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< Closable_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Closable_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Closable",47,28,5c,5c); }

		void validateData();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView

#endif /* INCLUDED_haxe_ui_containers__TabView_Closable */ 
