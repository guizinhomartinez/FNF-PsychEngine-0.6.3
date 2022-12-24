#ifndef INCLUDED_haxe_ui_components__NumberStepper_StandardLayout
#define INCLUDED_haxe_ui_components__NumberStepper_StandardLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,components,_NumberStepper,StandardLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{


class HXCPP_CLASS_ATTRIBUTES StandardLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef StandardLayout_obj OBJ_;
		StandardLayout_obj();

	public:
		enum { _hx_ClassId = 0x194876cc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._NumberStepper.StandardLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._NumberStepper.StandardLayout"); }
		static ::hx::ObjectPtr< StandardLayout_obj > __new();
		static ::hx::ObjectPtr< StandardLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StandardLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StandardLayout",e7,79,3b,51); }

		void resizeChildren();

		void repositionChildren();

		Float get_borderSize();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper

#endif /* INCLUDED_haxe_ui_components__NumberStepper_StandardLayout */ 
