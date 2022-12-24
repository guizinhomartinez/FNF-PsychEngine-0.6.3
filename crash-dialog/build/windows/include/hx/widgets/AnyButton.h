#ifndef INCLUDED_hx_widgets_AnyButton
#define INCLUDED_hx_widgets_AnyButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_5ecb25d8c63467a7
#define INCLUDED_5ecb25d8c63467a7
#include "wx/anybutton.h"
#endif
#ifndef INCLUDED_ba6509720fa912ce
#define INCLUDED_ba6509720fa912ce
#include "wx/defs.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,AnyButton)
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES AnyButton_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef AnyButton_obj OBJ_;
		AnyButton_obj();

	public:
		enum { _hx_ClassId = 0x02a80bdf };

		void __construct( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.AnyButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.AnyButton"); }
		static ::hx::ObjectPtr< AnyButton_obj > __new( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id);
		static ::hx::ObjectPtr< AnyButton_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnyButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnyButton",de,a9,12,d9); }

		bool _hasBitmap;
		 ::hx::widgets::Bitmap get_bitmap();
		::Dynamic get_bitmap_dyn();

		 ::hx::widgets::Bitmap set_bitmap( ::hx::widgets::Bitmap value);
		::Dynamic set_bitmap_dyn();

		 cpp::Struct<wxDirection, cpp::EnumHandler> bitmapPosition;
		 cpp::Struct<wxDirection, cpp::EnumHandler> set_bitmapPosition( cpp::Struct<wxDirection, cpp::EnumHandler> value);

		::cpp::Pointer<  wxAnyButton > anyButtonRef;
		::cpp::Pointer<  wxAnyButton > get_anyButtonRef();
		::Dynamic get_anyButtonRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_AnyButton */ 
