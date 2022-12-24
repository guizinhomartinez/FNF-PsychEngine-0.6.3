#ifndef INCLUDED_hx_widgets_TextInputStream
#define INCLUDED_hx_widgets_TextInputStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_4c441f4d8fa38f37
#define INCLUDED_4c441f4d8fa38f37
#include "wx/txtstrm.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,InputStream)
HX_DECLARE_CLASS2(hx,widgets,StreamBase)
HX_DECLARE_CLASS2(hx,widgets,TextInputStream)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES TextInputStream_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextInputStream_obj OBJ_;
		TextInputStream_obj();

	public:
		enum { _hx_ClassId = 0x1cf86eae };

		void __construct( ::hx::widgets::InputStream stream);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.TextInputStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.TextInputStream"); }
		static ::hx::ObjectPtr< TextInputStream_obj > __new( ::hx::widgets::InputStream stream);
		static ::hx::ObjectPtr< TextInputStream_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::InputStream stream);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextInputStream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextInputStream",5d,58,7e,18); }

		::cpp::Pointer<  wxTextInputStream > _ref;
		 ::hx::widgets::InputStream _stream;
		::String readLine();
		::Dynamic readLine_dyn();

		bool canRead;
		bool get_canRead();
		::Dynamic get_canRead_dyn();

		bool eof;
		bool get_eof();
		::Dynamic get_eof_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_TextInputStream */ 
