#ifndef INCLUDED_hx_widgets_GCDC
#define INCLUDED_hx_widgets_GCDC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_d138b2ba805d405f
#define INCLUDED_d138b2ba805d405f
#include "wx/dcgraph.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,GCDC)
HX_DECLARE_CLASS2(hx,widgets,GraphicsContext)
HX_DECLARE_CLASS2(hx,widgets,GraphicsObject)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES GCDC_obj : public  ::hx::widgets::DC_obj
{
	public:
		typedef  ::hx::widgets::DC_obj super;
		typedef GCDC_obj OBJ_;
		GCDC_obj();

	public:
		enum { _hx_ClassId = 0x6da9163a };

		void __construct( ::hx::widgets::GraphicsContext gc,::hx::Null< bool >  __o_create);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.GCDC")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.GCDC"); }
		static ::hx::ObjectPtr< GCDC_obj > __new( ::hx::widgets::GraphicsContext gc,::hx::Null< bool >  __o_create);
		static ::hx::ObjectPtr< GCDC_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::GraphicsContext gc,::hx::Null< bool >  __o_create);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GCDC_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GCDC",9b,38,21,2f); }

		 ::hx::widgets::GraphicsContext graphicsContext;
		 ::hx::widgets::GraphicsContext get_graphicsContext();
		::Dynamic get_graphicsContext_dyn();

		::cpp::Pointer<  wxGCDC > gcdcRef;
		::cpp::Pointer<  wxGCDC > get_gcdcRef();
		::Dynamic get_gcdcRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_GCDC */ 
