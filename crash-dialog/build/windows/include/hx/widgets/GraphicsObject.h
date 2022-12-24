#ifndef INCLUDED_hx_widgets_GraphicsObject
#define INCLUDED_hx_widgets_GraphicsObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,GraphicsObject)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES GraphicsObject_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef GraphicsObject_obj OBJ_;
		GraphicsObject_obj();

	public:
		enum { _hx_ClassId = 0x6c636469 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.GraphicsObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.GraphicsObject"); }
		static ::hx::ObjectPtr< GraphicsObject_obj > __new();
		static ::hx::ObjectPtr< GraphicsObject_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicsObject_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicsObject",0a,aa,60,12); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_GraphicsObject */ 
