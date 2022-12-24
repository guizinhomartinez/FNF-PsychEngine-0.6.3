#ifndef INCLUDED_hx_widgets_OwnerDrawnPanel
#define INCLUDED_hx_widgets_OwnerDrawnPanel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Panel
#include <hx/widgets/Panel.h>
#endif
#ifndef INCLUDED_3f00743f583fa004
#define INCLUDED_3f00743f583fa004
#include "custom/wxownerdrawnpanel.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,GCDC)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,OwnerDrawnPanel)
HX_DECLARE_CLASS2(hx,widgets,Panel)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES OwnerDrawnPanel_obj : public  ::hx::widgets::Panel_obj
{
	public:
		typedef  ::hx::widgets::Panel_obj super;
		typedef OwnerDrawnPanel_obj OBJ_;
		OwnerDrawnPanel_obj();

	public:
		enum { _hx_ClassId = 0x7c81fd6e };

		void __construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.OwnerDrawnPanel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.OwnerDrawnPanel"); }
		static ::hx::ObjectPtr< OwnerDrawnPanel_obj > __new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< OwnerDrawnPanel_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OwnerDrawnPanel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OwnerDrawnPanel",ad,a4,21,14); }

		void onPaintInternal();
		::Dynamic onPaintInternal_dyn();

		virtual void onPaint( ::hx::widgets::GCDC gdc);
		::Dynamic onPaint_dyn();

		::cpp::Pointer<  wxOwnerDrawnPanel > ownerDrawnPanelRef;
		::cpp::Pointer<  wxOwnerDrawnPanel > get_ownerDrawnPanelRef();
		::Dynamic get_ownerDrawnPanelRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_OwnerDrawnPanel */ 
