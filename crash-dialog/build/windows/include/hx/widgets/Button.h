#ifndef INCLUDED_hx_widgets_Button
#define INCLUDED_hx_widgets_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_AnyButton
#include <hx/widgets/AnyButton.h>
#endif
#ifndef INCLUDED_01922b43f2a15a43
#define INCLUDED_01922b43f2a15a43
#include "wx/button.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,AnyButton)
HX_DECLARE_CLASS2(hx,widgets,Button)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Button_obj : public  ::hx::widgets::AnyButton_obj
{
	public:
		typedef  ::hx::widgets::AnyButton_obj super;
		typedef Button_obj OBJ_;
		Button_obj();

	public:
		enum { _hx_ClassId = 0x4210b3a9 };

		void __construct( ::hx::widgets::Window parent,::String label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Button")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.Button"); }
		static ::hx::ObjectPtr< Button_obj > __new( ::hx::widgets::Window parent,::String label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< Button_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String label,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Button",12,d6,74,0e); }

		::cpp::Pointer<  wxButton > buttonRef;
		::cpp::Pointer<  wxButton > get_buttonRef();
		::Dynamic get_buttonRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Button */ 
