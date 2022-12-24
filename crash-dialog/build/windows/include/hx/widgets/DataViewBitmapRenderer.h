#ifndef INCLUDED_hx_widgets_DataViewBitmapRenderer
#define INCLUDED_hx_widgets_DataViewBitmapRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DataViewRenderer
#include <hx/widgets/DataViewRenderer.h>
#endif
#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DataViewBitmapRenderer)
HX_DECLARE_CLASS2(hx,widgets,DataViewRenderer)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewBitmapRenderer_obj : public  ::hx::widgets::DataViewRenderer_obj
{
	public:
		typedef  ::hx::widgets::DataViewRenderer_obj super;
		typedef DataViewBitmapRenderer_obj OBJ_;
		DataViewBitmapRenderer_obj();

	public:
		enum { _hx_ClassId = 0x033197e0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewBitmapRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewBitmapRenderer"); }
		static ::hx::ObjectPtr< DataViewBitmapRenderer_obj > __new();
		static ::hx::ObjectPtr< DataViewBitmapRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewBitmapRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewBitmapRenderer",81,e6,4e,29); }

		::cpp::Pointer<  wxDataViewBitmapRenderer > dataViewBitmapRendererRef;
		::cpp::Pointer<  wxDataViewBitmapRenderer > get_dataViewBitmapRendererRef();
		::Dynamic get_dataViewBitmapRendererRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewBitmapRenderer */ 
