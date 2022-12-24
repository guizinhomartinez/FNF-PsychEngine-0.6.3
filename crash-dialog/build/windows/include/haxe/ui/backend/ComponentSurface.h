#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#define INCLUDED_haxe_ui_backend_ComponentSurface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2e253224f0b43858_4_new)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ComponentSurface_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ComponentSurface_obj OBJ_;
		ComponentSurface_obj();

	public:
		enum { _hx_ClassId = 0x4ba87886 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.ComponentSurface")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.ComponentSurface"); }

		inline static ::hx::ObjectPtr< ComponentSurface_obj > __new() {
			::hx::ObjectPtr< ComponentSurface_obj > __this = new ComponentSurface_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ComponentSurface_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ComponentSurface_obj *__this = (ComponentSurface_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentSurface_obj), false, "haxe.ui.backend.ComponentSurface"));
			*(void **)__this = ComponentSurface_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2e253224f0b43858_4_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentSurface_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentSurface",10,bb,dd,9a); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ComponentSurface */ 
