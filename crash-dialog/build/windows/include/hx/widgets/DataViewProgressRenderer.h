#ifndef INCLUDED_hx_widgets_DataViewProgressRenderer
#define INCLUDED_hx_widgets_DataViewProgressRenderer

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
HX_DECLARE_CLASS2(hx,widgets,DataViewProgressRenderer)
HX_DECLARE_CLASS2(hx,widgets,DataViewRenderer)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewProgressRenderer_obj : public  ::hx::widgets::DataViewRenderer_obj
{
	public:
		typedef  ::hx::widgets::DataViewRenderer_obj super;
		typedef DataViewProgressRenderer_obj OBJ_;
		DataViewProgressRenderer_obj();

	public:
		enum { _hx_ClassId = 0x0d79f556 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewProgressRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewProgressRenderer"); }
		static ::hx::ObjectPtr< DataViewProgressRenderer_obj > __new();
		static ::hx::ObjectPtr< DataViewProgressRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewProgressRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewProgressRenderer",ff,e5,eb,91); }

		::cpp::Pointer<  wxDataViewProgressRenderer > dataViewProgressRendererRef;
		::cpp::Pointer<  wxDataViewProgressRenderer > get_dataViewProgressRendererRef();
		::Dynamic get_dataViewProgressRendererRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewProgressRenderer */ 
