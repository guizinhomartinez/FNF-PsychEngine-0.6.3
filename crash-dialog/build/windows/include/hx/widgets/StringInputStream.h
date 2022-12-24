#ifndef INCLUDED_hx_widgets_StringInputStream
#define INCLUDED_hx_widgets_StringInputStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_3c13c1aba6e19fc4
#define INCLUDED_3c13c1aba6e19fc4
#include "wx/sstream.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,InputStream)
HX_DECLARE_CLASS2(hx,widgets,StreamBase)
HX_DECLARE_CLASS2(hx,widgets,StringInputStream)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StringInputStream_obj : public  ::hx::widgets::InputStream_obj
{
	public:
		typedef  ::hx::widgets::InputStream_obj super;
		typedef StringInputStream_obj OBJ_;
		StringInputStream_obj();

	public:
		enum { _hx_ClassId = 0x55238a82 };

		void __construct(::String s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StringInputStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.StringInputStream"); }
		static ::hx::ObjectPtr< StringInputStream_obj > __new(::String s);
		static ::hx::ObjectPtr< StringInputStream_obj > __alloc(::hx::Ctx *_hx_ctx,::String s);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringInputStream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringInputStream",b9,9e,52,3f); }

		::String _s;
		void destroy();
		::Dynamic destroy_dyn();

		::cpp::Pointer<  wxStringInputStream > stringinputstreamRef;
		::cpp::Pointer<  wxStringInputStream > get_stringinputstreamRef();
		::Dynamic get_stringinputstreamRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StringInputStream */ 
