#ifndef INCLUDED_hx_widgets_DataViewToggleRenderer
#define INCLUDED_hx_widgets_DataViewToggleRenderer

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
HX_DECLARE_CLASS2(hx,widgets,DataViewRenderer)
HX_DECLARE_CLASS2(hx,widgets,DataViewToggleRenderer)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewToggleRenderer_obj : public  ::hx::widgets::DataViewRenderer_obj
{
	public:
		typedef  ::hx::widgets::DataViewRenderer_obj super;
		typedef DataViewToggleRenderer_obj OBJ_;
		DataViewToggleRenderer_obj();

	public:
		enum { _hx_ClassId = 0x2cc8f485 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewToggleRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewToggleRenderer"); }
		static ::hx::ObjectPtr< DataViewToggleRenderer_obj > __new();
		static ::hx::ObjectPtr< DataViewToggleRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewToggleRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewToggleRenderer",26,43,e6,52); }

		::cpp::Pointer<  wxDataViewToggleRenderer > dataViewToggleRendererRef;
		::cpp::Pointer<  wxDataViewToggleRenderer > get_dataViewToggleRendererRef();
		::Dynamic get_dataViewToggleRendererRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewToggleRenderer */ 
