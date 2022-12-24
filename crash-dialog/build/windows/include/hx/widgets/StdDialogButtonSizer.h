#ifndef INCLUDED_hx_widgets_StdDialogButtonSizer
#define INCLUDED_hx_widgets_StdDialogButtonSizer

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
HX_DECLARE_CLASS2(hx,widgets,AnyButton)
HX_DECLARE_CLASS2(hx,widgets,BoxSizer)
HX_DECLARE_CLASS2(hx,widgets,Button)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Sizer)
HX_DECLARE_CLASS2(hx,widgets,StdDialogButtonSizer)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StdDialogButtonSizer_obj : public  ::hx::widgets::BoxSizer_obj
{
	public:
		typedef  ::hx::widgets::BoxSizer_obj super;
		typedef StdDialogButtonSizer_obj OBJ_;
		StdDialogButtonSizer_obj();

	public:
		enum { _hx_ClassId = 0x26fdaf0f };

		void __construct(::cpp::Pointer<  wxStdDialogButtonSizer > ref);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StdDialogButtonSizer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.StdDialogButtonSizer"); }
		static ::hx::ObjectPtr< StdDialogButtonSizer_obj > __new(::cpp::Pointer<  wxStdDialogButtonSizer > ref);
		static ::hx::ObjectPtr< StdDialogButtonSizer_obj > __alloc(::hx::Ctx *_hx_ctx,::cpp::Pointer<  wxStdDialogButtonSizer > ref);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StdDialogButtonSizer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StdDialogButtonSizer",54,1d,c5,1c); }

		void addButton( ::hx::widgets::Button button);
		::Dynamic addButton_dyn();

		void realize();
		::Dynamic realize_dyn();

		::cpp::Pointer<  wxStdDialogButtonSizer > stdDialogButtonSizerRef;
		::cpp::Pointer<  wxStdDialogButtonSizer > get_stdDialogButtonSizerRef();
		::Dynamic get_stdDialogButtonSizerRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StdDialogButtonSizer */ 
