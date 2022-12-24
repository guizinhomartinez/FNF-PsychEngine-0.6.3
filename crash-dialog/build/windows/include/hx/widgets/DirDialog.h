#ifndef INCLUDED_hx_widgets_DirDialog
#define INCLUDED_hx_widgets_DirDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_e595ef90afd342fe
#define INCLUDED_e595ef90afd342fe
#include "wx/wx.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Dialog)
HX_DECLARE_CLASS2(hx,widgets,DirDialog)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DirDialog_obj : public  ::hx::widgets::Dialog_obj
{
	public:
		typedef  ::hx::widgets::Dialog_obj super;
		typedef DirDialog_obj OBJ_;
		DirDialog_obj();

	public:
		enum { _hx_ClassId = 0x11bc6fd6 };

		void __construct( ::hx::widgets::Window parent,::String message,::String defaultPath,::hx::Null< int >  __o_style);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DirDialog")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DirDialog"); }
		static ::hx::ObjectPtr< DirDialog_obj > __new( ::hx::widgets::Window parent,::String message,::String defaultPath,::hx::Null< int >  __o_style);
		static ::hx::ObjectPtr< DirDialog_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String defaultPath,::hx::Null< int >  __o_style);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DirDialog_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DirDialog",d5,0d,27,e8); }

		::String get_path();
		::Dynamic get_path_dyn();

		::String set_path(::String value);
		::Dynamic set_path_dyn();

		::cpp::Pointer<  wxDirDialog > dirDialogRef;
		::cpp::Pointer<  wxDirDialog > get_dirDialogRef();
		::Dynamic get_dirDialogRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DirDialog */ 
