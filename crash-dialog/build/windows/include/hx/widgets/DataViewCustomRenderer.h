#ifndef INCLUDED_hx_widgets_DataViewCustomRenderer
#define INCLUDED_hx_widgets_DataViewCustomRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,DataViewCustomRenderer)
HX_DECLARE_CLASS2(hx,widgets,DataViewRenderer)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewCustomRenderer_obj : public  ::hx::widgets::DataViewRenderer_obj
{
	public:
		typedef  ::hx::widgets::DataViewRenderer_obj super;
		typedef DataViewCustomRenderer_obj OBJ_;
		DataViewCustomRenderer_obj();

	public:
		enum { _hx_ClassId = 0x5a78a1a2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewCustomRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewCustomRenderer"); }
		static ::hx::ObjectPtr< DataViewCustomRenderer_obj > __new();
		static ::hx::ObjectPtr< DataViewCustomRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewCustomRenderer_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewCustomRenderer",43,f0,95,80); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewCustomRenderer */ 
