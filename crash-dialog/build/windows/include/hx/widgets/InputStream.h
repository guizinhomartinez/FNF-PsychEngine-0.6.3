#ifndef INCLUDED_hx_widgets_InputStream
#define INCLUDED_hx_widgets_InputStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif
#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,InputStream)
HX_DECLARE_CLASS2(hx,widgets,StreamBase)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES InputStream_obj : public  ::hx::widgets::StreamBase_obj
{
	public:
		typedef  ::hx::widgets::StreamBase_obj super;
		typedef InputStream_obj OBJ_;
		InputStream_obj();

	public:
		enum { _hx_ClassId = 0x03ba0713 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.InputStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.InputStream"); }
		static ::hx::ObjectPtr< InputStream_obj > __new();
		static ::hx::ObjectPtr< InputStream_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InputStream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InputStream",0a,88,93,ea); }

		bool canRead;
		bool get_canRead();
		::Dynamic get_canRead_dyn();

		bool eof;
		bool get_eof();
		::Dynamic get_eof_dyn();

		int getC();
		::Dynamic getC_dyn();

		::cpp::Pointer<  wxInputStream > inputStreamRef;
		::cpp::Pointer<  wxInputStream > get_inputStreamRef();
		::Dynamic get_inputStreamRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_InputStream */ 
