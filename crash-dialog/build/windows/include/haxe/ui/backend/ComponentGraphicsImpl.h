#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsImpl
#define INCLUDED_haxe_ui_backend_ComponentGraphicsImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#include <haxe/ui/backend/ComponentGraphicsBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentGraphicsBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentGraphicsImpl)
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
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ComponentGraphicsImpl_obj : public  ::haxe::ui::backend::ComponentGraphicsBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ComponentGraphicsBase_obj super;
		typedef ComponentGraphicsImpl_obj OBJ_;
		ComponentGraphicsImpl_obj();

	public:
		enum { _hx_ClassId = 0x2dd425b6 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ComponentGraphicsImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ComponentGraphicsImpl"); }
		static ::hx::ObjectPtr< ComponentGraphicsImpl_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ComponentGraphicsImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentGraphicsImpl_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentGraphicsImpl",88,79,ed,0b); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ComponentGraphicsImpl */ 
