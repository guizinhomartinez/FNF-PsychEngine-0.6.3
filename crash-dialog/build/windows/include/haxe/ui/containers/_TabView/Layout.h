#ifndef INCLUDED_haxe_ui_containers__TabView_Layout
#define INCLUDED_haxe_ui_containers__TabView_Layout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,containers,_TabView,Layout)
HX_DECLARE_CLASS3(haxe,ui,geom,Size)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{


class HXCPP_CLASS_ATTRIBUTES Layout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef Layout_obj OBJ_;
		Layout_obj();

	public:
		enum { _hx_ClassId = 0x21a304fd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TabView.Layout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TabView.Layout"); }
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

		void repositionChildren();

		void resizeChildren();

		 ::haxe::ui::geom::Size get_usableSize();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView

#endif /* INCLUDED_haxe_ui_containers__TabView_Layout */ 
