#ifndef INCLUDED_hx_widgets_Image
#define INCLUDED_hx_widgets_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_1742edf8d3281505
#define INCLUDED_1742edf8d3281505
#include "wx/image.h"
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hx,widgets,Image)
HX_DECLARE_CLASS2(hx,widgets,ImageData)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Image_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef Image_obj OBJ_;
		Image_obj();

	public:
		enum { _hx_ClassId = 0x2fe4a720 };

		void __construct( ::haxe::io::Bytes bytes, ::Dynamic width, ::Dynamic height,::hx::Null< bool >  __o_createAlphaChannel);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Image")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.Image"); }
		static ::hx::ObjectPtr< Image_obj > __new( ::haxe::io::Bytes bytes, ::Dynamic width, ::Dynamic height,::hx::Null< bool >  __o_createAlphaChannel);
		static ::hx::ObjectPtr< Image_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes, ::Dynamic width, ::Dynamic height,::hx::Null< bool >  __o_createAlphaChannel);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Image",3b,8f,96,50); }

		int width;
		int get_width();
		::Dynamic get_width_dyn();

		int height;
		int get_height();
		::Dynamic get_height_dyn();

		 ::hx::widgets::Image scale(int width,int height);
		::Dynamic scale_dyn();

		bool hasAlpha;
		bool get_hasAlpha();
		::Dynamic get_hasAlpha_dyn();

		void addAlphaChannel();
		::Dynamic addAlphaChannel_dyn();

		 ::hx::widgets::ImageData imageData;
		 ::hx::widgets::ImageData get_imageData();
		::Dynamic get_imageData_dyn();

		::cpp::Pointer<  wxImage > imageRef;
		::cpp::Pointer<  wxImage > get_imageRef();
		::Dynamic get_imageRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Image */ 
