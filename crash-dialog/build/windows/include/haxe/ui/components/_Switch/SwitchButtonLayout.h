#ifndef INCLUDED_haxe_ui_components__Switch_SwitchButtonLayout
#define INCLUDED_haxe_ui_components__Switch_SwitchButtonLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,components,_Switch,SwitchButtonLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace components{
namespace _Switch{


class HXCPP_CLASS_ATTRIBUTES SwitchButtonLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef SwitchButtonLayout_obj OBJ_;
		SwitchButtonLayout_obj();

	public:
		enum { _hx_ClassId = 0x59e11dd3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._Switch.SwitchButtonLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._Switch.SwitchButtonLayout"); }
		static ::hx::ObjectPtr< SwitchButtonLayout_obj > __new();
		static ::hx::ObjectPtr< SwitchButtonLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SwitchButtonLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SwitchButtonLayout",70,5e,45,72); }

		void repositionChildren();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Switch

#endif /* INCLUDED_haxe_ui_components__Switch_SwitchButtonLayout */ 
