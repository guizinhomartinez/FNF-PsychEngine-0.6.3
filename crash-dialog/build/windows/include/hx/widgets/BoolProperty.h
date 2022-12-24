#ifndef INCLUDED_hx_widgets_BoolProperty
#define INCLUDED_hx_widgets_BoolProperty

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif
#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,BoolProperty)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PGProperty)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES BoolProperty_obj : public  ::hx::widgets::PGProperty_obj
{
	public:
		typedef  ::hx::widgets::PGProperty_obj super;
		typedef BoolProperty_obj OBJ_;
		BoolProperty_obj();

	public:
		enum { _hx_ClassId = 0x30a9ed7a };

		void __construct(::String label,::String name,bool value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.BoolProperty")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.BoolProperty"); }
		static ::hx::ObjectPtr< BoolProperty_obj > __new(::String label,::String name,bool value);
		static ::hx::ObjectPtr< BoolProperty_obj > __alloc(::hx::Ctx *_hx_ctx,::String label,::String name,bool value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BoolProperty_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BoolProperty",bf,0e,d7,b7); }

		::cpp::Pointer<  wxBoolProperty > boolPropertyRef;
		::cpp::Pointer<  wxBoolProperty > get_boolPropertyRef();
		::Dynamic get_boolPropertyRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_BoolProperty */ 
