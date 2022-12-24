#ifndef INCLUDED_hx_widgets_Icon
#define INCLUDED_hx_widgets_Icon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_04e4e804b5ca744c
#define INCLUDED_04e4e804b5ca744c
#include "wx/icon.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Icon)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Icon_obj : public  ::hx::widgets::GDIObject_obj
{
	public:
		typedef  ::hx::widgets::GDIObject_obj super;
		typedef Icon_obj OBJ_;
		Icon_obj();

	public:
		enum { _hx_ClassId = 0x6f13f138 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Icon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.Icon"); }
		static ::hx::ObjectPtr< Icon_obj > __new();
		static ::hx::ObjectPtr< Icon_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Icon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Icon",99,13,8c,30); }

		void copyFromBitmap( ::hx::widgets::Bitmap bmp);
		::Dynamic copyFromBitmap_dyn();

		::cpp::Pointer<  wxIcon > iconRef;
		::cpp::Pointer<  wxIcon > get_iconRef();
		::Dynamic get_iconRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Icon */ 
