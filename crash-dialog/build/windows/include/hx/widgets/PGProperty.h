#ifndef INCLUDED_hx_widgets_PGProperty
#define INCLUDED_hx_widgets_PGProperty

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PGProperty)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES PGProperty_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef PGProperty_obj OBJ_;
		PGProperty_obj();

	public:
		enum { _hx_ClassId = 0x5743f84b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.PGProperty")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.PGProperty"); }
		static ::hx::ObjectPtr< PGProperty_obj > __new();
		static ::hx::ObjectPtr< PGProperty_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PGProperty_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PGProperty",6c,99,23,1e); }

		::String valueAsString;
		::String get_valueAsString();
		::Dynamic get_valueAsString_dyn();

		::String name;
		::String get_name();
		::Dynamic get_name_dyn();

		::cpp::Pointer<  wxPGProperty > propertyRef;
		::cpp::Pointer<  wxPGProperty > get_propertyRef();
		::Dynamic get_propertyRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_PGProperty */ 
