#ifndef INCLUDED_hx_widgets_ToggleButton
#define INCLUDED_hx_widgets_ToggleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
#endif
#ifndef INCLUDED_d35b1bea04ac25e6
#define INCLUDED_d35b1bea04ac25e6
#include "wx/tglbtn.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,AnyButton)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,ToggleButton)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ToggleButton_obj : public  ::hx::widgets::AnyButton_obj
{
	public:
		typedef  ::hx::widgets::AnyButton_obj super;
		typedef ToggleButton_obj OBJ_;
		ToggleButton_obj();

	public:
		enum { _hx_ClassId = 0x5129dd65 };

		void __construct( ::hx::widgets::Window parent,::String __o_label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ToggleButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.ToggleButton"); }
		static ::hx::ObjectPtr< ToggleButton_obj > __new( ::hx::widgets::Window parent,::String __o_label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< ToggleButton_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String __o_label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ToggleButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ToggleButton",c6,c8,0c,48); }

		bool get_value();
		::Dynamic get_value_dyn();

		bool set_value(bool value);
		::Dynamic set_value_dyn();

		::cpp::Pointer<  wxToggleButton > toggleButtonRef;
		::cpp::Pointer<  wxToggleButton > get_toggleButtonRef();
		::Dynamic get_toggleButtonRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ToggleButton */ 
