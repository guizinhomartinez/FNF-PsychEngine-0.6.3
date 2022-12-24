#ifndef INCLUDED_haxe_ui_components__TabBar_ButtonHeight
#define INCLUDED_haxe_ui_components__TabBar_ButtonHeight

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
HX_DECLARE_CLASS4(haxe,ui,components,_TabBar,ButtonHeight)
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
namespace components{
namespace _TabBar{


class HXCPP_CLASS_ATTRIBUTES ButtonHeight_obj : public  ::haxe::ui::behaviours::DataBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DataBehaviour_obj super;
		typedef ButtonHeight_obj OBJ_;
		ButtonHeight_obj();

	public:
		enum { _hx_ClassId = 0x514fb6fe };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._TabBar.ButtonHeight")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._TabBar.ButtonHeight"); }
		static ::hx::ObjectPtr< ButtonHeight_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ButtonHeight_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ButtonHeight_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ButtonHeight",99,2b,1c,72); }

		void validateData();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar

#endif /* INCLUDED_haxe_ui_components__TabBar_ButtonHeight */ 
