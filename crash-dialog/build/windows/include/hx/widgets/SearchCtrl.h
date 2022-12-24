#ifndef INCLUDED_hx_widgets_SearchCtrl
#define INCLUDED_hx_widgets_SearchCtrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_TextCtrl
#include <hx/widgets/TextCtrl.h>
#endif
#ifndef INCLUDED_a0eece3e33fd47bf
#define INCLUDED_a0eece3e33fd47bf
#include "wx/srchctrl.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,SearchCtrl)
HX_DECLARE_CLASS2(hx,widgets,TextCtrl)
HX_DECLARE_CLASS2(hx,widgets,TextEntry)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES SearchCtrl_obj : public  ::hx::widgets::TextCtrl_obj
{
	public:
		typedef  ::hx::widgets::TextCtrl_obj super;
		typedef SearchCtrl_obj OBJ_;
		SearchCtrl_obj();

	public:
		enum { _hx_ClassId = 0x10aa564e };

		void __construct( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.SearchCtrl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.SearchCtrl"); }
		static ::hx::ObjectPtr< SearchCtrl_obj > __new( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< SearchCtrl_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SearchCtrl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SearchCtrl",53,2c,b2,65); }

		::String get_value();

		::String set_value(::String value);

		::cpp::Pointer<  wxSearchCtrl > searchCtrlRef;
		::cpp::Pointer<  wxSearchCtrl > get_searchCtrlRef();
		::Dynamic get_searchCtrlRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_SearchCtrl */ 
