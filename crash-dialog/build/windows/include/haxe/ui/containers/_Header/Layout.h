#ifndef INCLUDED_haxe_ui_containers__Header_Layout
#define INCLUDED_haxe_ui_containers__Header_Layout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,containers,_Header,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,HorizontalLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace containers{
namespace _Header{


class HXCPP_CLASS_ATTRIBUTES Layout_obj : public  ::haxe::ui::layouts::HorizontalLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::HorizontalLayout_obj super;
		typedef Layout_obj OBJ_;
		Layout_obj();

	public:
		enum { _hx_ClassId = 0x2b150fca };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._Header.Layout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._Header.Layout"); }
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
} // end namespace containers
} // end namespace _Header

#endif /* INCLUDED_haxe_ui_containers__Header_Layout */ 
