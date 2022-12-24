#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_ZeroSize
#define INCLUDED_haxe_ui_backend_hxwidgets_size_ZeroSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,size,ZeroSize)
HX_DECLARE_CLASS3(haxe,ui,layouts,DelegateLayoutSize)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{


class HXCPP_CLASS_ATTRIBUTES ZeroSize_obj : public  ::haxe::ui::layouts::DelegateLayoutSize_obj
{
	public:
		typedef  ::haxe::ui::layouts::DelegateLayoutSize_obj super;
		typedef ZeroSize_obj OBJ_;
		ZeroSize_obj();

	public:
		enum { _hx_ClassId = 0x07635b2f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.size.ZeroSize")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.size.ZeroSize"); }
		static ::hx::ObjectPtr< ZeroSize_obj > __new();
		static ::hx::ObjectPtr< ZeroSize_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ZeroSize_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ZeroSize",29,4c,0a,39); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_size_ZeroSize */ 
