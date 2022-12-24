#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#define INCLUDED_haxe_ui_backend_ImageDisplayImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ImageBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageSurface)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ImageDisplayImpl_obj : public  ::haxe::ui::backend::ImageBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ImageBase_obj super;
		typedef ImageDisplayImpl_obj OBJ_;
		ImageDisplayImpl_obj();

	public:
		enum { _hx_ClassId = 0x26448321 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ImageDisplayImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ImageDisplayImpl"); }
		static ::hx::ObjectPtr< ImageDisplayImpl_obj > __new();
		static ::hx::ObjectPtr< ImageDisplayImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageDisplayImpl_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageDisplayImpl",c7,ca,63,12); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ImageDisplayImpl */ 
