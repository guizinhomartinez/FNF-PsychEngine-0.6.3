#ifndef INCLUDED_haxe_ui_components__TabBar_ButtonWidth
#define INCLUDED_haxe_ui_components__TabBar_ButtonWidth

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
HX_DECLARE_CLASS4(haxe,ui,components,_TabBar,ButtonWidth)
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


class HXCPP_CLASS_ATTRIBUTES ButtonWidth_obj : public  ::haxe::ui::behaviours::DataBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DataBehaviour_obj super;
		typedef ButtonWidth_obj OBJ_;
		ButtonWidth_obj();

	public:
		enum { _hx_ClassId = 0x1aaaa06b };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._TabBar.ButtonWidth")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._TabBar.ButtonWidth"); }
		static ::hx::ObjectPtr< ButtonWidth_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ButtonWidth_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ButtonWidth_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ButtonWidth",94,0e,40,fc); }

		void validateData();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar

#endif /* INCLUDED_haxe_ui_components__TabBar_ButtonWidth */ 
