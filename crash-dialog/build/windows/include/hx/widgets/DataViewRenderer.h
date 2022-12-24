#ifndef INCLUDED_hx_widgets_DataViewRenderer
#define INCLUDED_hx_widgets_DataViewRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DataViewRenderer)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewRenderer_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef DataViewRenderer_obj OBJ_;
		DataViewRenderer_obj();

	public:
		enum { _hx_ClassId = 0x56388651 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewRenderer"); }
		static ::hx::ObjectPtr< DataViewRenderer_obj > __new();
		static ::hx::ObjectPtr< DataViewRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewRenderer",32,36,4b,6a); }

		::cpp::Pointer<  wxDataViewRenderer > dataViewRendererRef;
		::cpp::Pointer<  wxDataViewRenderer > get_dataViewRendererRef();
		::Dynamic get_dataViewRendererRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewRenderer */ 
