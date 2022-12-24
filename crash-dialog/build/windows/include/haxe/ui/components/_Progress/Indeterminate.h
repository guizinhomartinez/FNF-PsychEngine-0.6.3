#ifndef INCLUDED_haxe_ui_components__Progress_Indeterminate
#define INCLUDED_haxe_ui_components__Progress_Indeterminate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,ValueBehaviour)
HX_DECLARE_CLASS4(haxe,ui,components,_Progress,Indeterminate)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _Progress{


class HXCPP_CLASS_ATTRIBUTES Indeterminate_obj : public  ::haxe::ui::behaviours::ValueBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::ValueBehaviour_obj super;
		typedef Indeterminate_obj OBJ_;
		Indeterminate_obj();

	public:
		enum { _hx_ClassId = 0x713afaff };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._Progress.Indeterminate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._Progress.Indeterminate"); }
		static ::hx::ObjectPtr< Indeterminate_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< Indeterminate_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Indeterminate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Indeterminate",db,46,3a,56); }

		 ::haxe::ui::util::VariantType get();

		void set( ::haxe::ui::util::VariantType value);

		void detatch();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Progress

#endif /* INCLUDED_haxe_ui_components__Progress_Indeterminate */ 
