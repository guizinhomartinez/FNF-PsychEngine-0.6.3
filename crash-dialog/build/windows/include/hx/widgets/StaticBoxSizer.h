#ifndef INCLUDED_hx_widgets_StaticBoxSizer
#define INCLUDED_hx_widgets_StaticBoxSizer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
#endif
#ifndef INCLUDED_3f256efeda3a1a55
#define INCLUDED_3f256efeda3a1a55
#include "wx/sizer.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,BoxSizer)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Sizer)
HX_DECLARE_CLASS2(hx,widgets,StaticBox)
HX_DECLARE_CLASS2(hx,widgets,StaticBoxSizer)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StaticBoxSizer_obj : public  ::hx::widgets::BoxSizer_obj
{
	public:
		typedef  ::hx::widgets::BoxSizer_obj super;
		typedef StaticBoxSizer_obj OBJ_;
		StaticBoxSizer_obj();

	public:
		enum { _hx_ClassId = 0x0643d327 };

		void __construct( cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String __o_title);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StaticBoxSizer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.StaticBoxSizer"); }
		static ::hx::ObjectPtr< StaticBoxSizer_obj > __new( cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String __o_title);
		static ::hx::ObjectPtr< StaticBoxSizer_obj > __alloc(::hx::Ctx *_hx_ctx, cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String __o_title);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StaticBoxSizer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StaticBoxSizer",74,7d,4c,4b); }

		 ::hx::widgets::StaticBox staticBox;
		 ::hx::widgets::StaticBox get_staticBox();
		::Dynamic get_staticBox_dyn();

		::cpp::Pointer<  wxStaticBoxSizer > staticBoxSizerRef;
		::cpp::Pointer<  wxStaticBoxSizer > get_staticBoxSizerRef();
		::Dynamic get_staticBoxSizerRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StaticBoxSizer */ 
