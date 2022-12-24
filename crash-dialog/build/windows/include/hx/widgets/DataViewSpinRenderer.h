#ifndef INCLUDED_hx_widgets_DataViewSpinRenderer
#define INCLUDED_hx_widgets_DataViewSpinRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DataViewCustomRenderer
#include <hx/widgets/DataViewCustomRenderer.h>
#endif
#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DataViewCustomRenderer)
HX_DECLARE_CLASS2(hx,widgets,DataViewRenderer)
HX_DECLARE_CLASS2(hx,widgets,DataViewSpinRenderer)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewSpinRenderer_obj : public  ::hx::widgets::DataViewCustomRenderer_obj
{
	public:
		typedef  ::hx::widgets::DataViewCustomRenderer_obj super;
		typedef DataViewSpinRenderer_obj OBJ_;
		DataViewSpinRenderer_obj();

	public:
		enum { _hx_ClassId = 0x1c059b4f };

		void __construct(::hx::Null< int >  __o_min,::hx::Null< int >  __o_max);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewSpinRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewSpinRenderer"); }
		static ::hx::ObjectPtr< DataViewSpinRenderer_obj > __new(::hx::Null< int >  __o_min,::hx::Null< int >  __o_max);
		static ::hx::ObjectPtr< DataViewSpinRenderer_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_min,::hx::Null< int >  __o_max);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewSpinRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewSpinRenderer",94,09,cd,11); }

		::cpp::Pointer<  wxDataViewSpinRenderer > dataViewSpinRendererRef;
		::cpp::Pointer<  wxDataViewSpinRenderer > get_dataViewSpinRendererRef();
		::Dynamic get_dataViewSpinRendererRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewSpinRenderer */ 
