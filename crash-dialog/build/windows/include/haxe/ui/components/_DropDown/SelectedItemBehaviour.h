#ifndef INCLUDED_haxe_ui_components__DropDown_SelectedItemBehaviour
#define INCLUDED_haxe_ui_components__DropDown_SelectedItemBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_DynamicDataBehaviour
#include <haxe/ui/behaviours/DynamicDataBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,DynamicBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,DynamicDataBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,IValidatingBehaviour)
HX_DECLARE_CLASS4(haxe,ui,components,_DropDown,SelectedItemBehaviour)
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
namespace _DropDown{


class HXCPP_CLASS_ATTRIBUTES SelectedItemBehaviour_obj : public  ::haxe::ui::behaviours::DynamicDataBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DynamicDataBehaviour_obj super;
		typedef SelectedItemBehaviour_obj OBJ_;
		SelectedItemBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x58e86b4f };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._DropDown.SelectedItemBehaviour")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._DropDown.SelectedItemBehaviour"); }
		static ::hx::ObjectPtr< SelectedItemBehaviour_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< SelectedItemBehaviour_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SelectedItemBehaviour_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SelectedItemBehaviour",2f,0b,e6,d9); }

		void validateData();

		 ::Dynamic getDynamic();

		void setDynamic( ::Dynamic value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _DropDown

#endif /* INCLUDED_haxe_ui_components__DropDown_SelectedItemBehaviour */ 
