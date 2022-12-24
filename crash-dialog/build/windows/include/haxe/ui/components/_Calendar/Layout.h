#ifndef INCLUDED_haxe_ui_components__Calendar_Layout
#define INCLUDED_haxe_ui_components__Calendar_Layout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_VerticalGridLayout
#include <haxe/ui/layouts/VerticalGridLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,components,_Calendar,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,VerticalGridLayout)

namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{


class HXCPP_CLASS_ATTRIBUTES Layout_obj : public  ::haxe::ui::layouts::VerticalGridLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::VerticalGridLayout_obj super;
		typedef Layout_obj OBJ_;
		Layout_obj();

	public:
		enum { _hx_ClassId = 0x022f7553 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._Calendar.Layout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._Calendar.Layout"); }
		static ::hx::ObjectPtr< Layout_obj > __new();
		static ::hx::ObjectPtr< Layout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Layout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Layout",ca,22,4d,8d); }

		void resizeChildren();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Calendar

#endif /* INCLUDED_haxe_ui_components__Calendar_Layout */ 
