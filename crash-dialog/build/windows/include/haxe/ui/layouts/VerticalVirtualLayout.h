#ifndef INCLUDED_haxe_ui_layouts_VerticalVirtualLayout
#define INCLUDED_haxe_ui_layouts_VerticalVirtualLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_VirtualLayout
#include <haxe/ui/layouts/VirtualLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,geom,Size)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ScrollViewLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,VerticalVirtualLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,VirtualLayout)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES VerticalVirtualLayout_obj : public  ::haxe::ui::layouts::VirtualLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::VirtualLayout_obj super;
		typedef VerticalVirtualLayout_obj OBJ_;
		VerticalVirtualLayout_obj();

	public:
		enum { _hx_ClassId = 0x32ce0794 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.VerticalVirtualLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.VerticalVirtualLayout"); }
		static ::hx::ObjectPtr< VerticalVirtualLayout_obj > __new();
		static ::hx::ObjectPtr< VerticalVirtualLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VerticalVirtualLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VerticalVirtualLayout",9f,0c,42,14); }

		virtual void repositionChildren();

		virtual Float verticalConstraintModifier();
		::Dynamic verticalConstraintModifier_dyn();

		void calculateRangeVisible();

		void updateScroll();

		virtual  ::haxe::ui::geom::Size calcAutoSize(::Array< ::Dynamic> exclusions);

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_VerticalVirtualLayout */ 
