#ifndef INCLUDED_hx_widgets_ImageData
#define INCLUDED_hx_widgets_ImageData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hx,widgets,Image)
HX_DECLARE_CLASS2(hx,widgets,ImageData)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ImageData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageData_obj OBJ_;
		ImageData_obj();

	public:
		enum { _hx_ClassId = 0x76d3396a };

		void __construct( ::hx::widgets::Image image,::cpp::Pointer< unsigned char > data,::cpp::Pointer< unsigned char > alpha);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ImageData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.ImageData"); }
		static ::hx::ObjectPtr< ImageData_obj > __new( ::hx::widgets::Image image,::cpp::Pointer< unsigned char > data,::cpp::Pointer< unsigned char > alpha);
		static ::hx::ObjectPtr< ImageData_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Image image,::cpp::Pointer< unsigned char > data,::cpp::Pointer< unsigned char > alpha);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageData",05,cb,6a,c6); }

		 ::hx::widgets::Image _image;
		::cpp::Pointer< unsigned char > _data;
		::cpp::Pointer< unsigned char > _alpha;
		int _width;
		int _height;
		void setRGB(int x,int y,int r,int g,int b);
		::Dynamic setRGB_dyn();

		void setRGBA(int x,int y,int r,int g,int b,int a);
		::Dynamic setRGBA_dyn();

		void copyARGB( ::haxe::io::Bytes bytes);
		::Dynamic copyARGB_dyn();

		void copyRGBA( ::haxe::io::Bytes bytes);
		::Dynamic copyRGBA_dyn();

		void copyRGB( ::haxe::io::Bytes bytes);
		::Dynamic copyRGB_dyn();

		void set(int x,int y,int c,::hx::Null< bool >  useAlpha);
		::Dynamic set_dyn();

		void clear(int c,::hx::Null< bool >  useAlpha);
		::Dynamic clear_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ImageData */ 
