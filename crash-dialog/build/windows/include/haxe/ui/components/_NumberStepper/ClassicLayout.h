#ifndef INCLUDED_haxe_ui_components__NumberStepper_ClassicLayout
#define INCLUDED_haxe_ui_components__NumberStepper_ClassicLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,components,_NumberStepper,ClassicLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{


class HXCPP_CLASS_ATTRIBUTES ClassicLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef ClassicLayout_obj OBJ_;
		ClassicLayout_obj();

	public:
		enum { _hx_ClassId = 0x34a887db };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._NumberStepper.ClassicLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._NumberStepper.ClassicLayout"); }
		static ::hx::ObjectPtr< ClassicLayout_obj > __new();
		static ::hx::ObjectPtr< ClassicLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClassicLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClassicLayout",3c,9e,1a,0e); }

		void resizeChildren();

		void repositionChildren();

		Float get_borderSize();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper

#endif /* INCLUDED_haxe_ui_components__NumberStepper_ClassicLayout */ 
