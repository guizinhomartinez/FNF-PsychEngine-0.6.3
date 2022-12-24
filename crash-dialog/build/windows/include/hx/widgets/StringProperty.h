#ifndef INCLUDED_hx_widgets_StringProperty
#define INCLUDED_hx_widgets_StringProperty

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
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PGProperty)
HX_DECLARE_CLASS2(hx,widgets,StringProperty)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StringProperty_obj : public  ::hx::widgets::PGProperty_obj
{
	public:
		typedef  ::hx::widgets::PGProperty_obj super;
		typedef StringProperty_obj OBJ_;
		StringProperty_obj();

	public:
		enum { _hx_ClassId = 0x3af134c5 };

		void __construct(::String label,::String name,::String value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StringProperty")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.StringProperty"); }
		static ::hx::ObjectPtr< StringProperty_obj > __new(::String label,::String name,::String value);
		static ::hx::ObjectPtr< StringProperty_obj > __alloc(::hx::Ctx *_hx_ctx,::String label,::String name,::String value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringProperty_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringProperty",66,7a,ee,e0); }

		::cpp::Pointer<  wxStringProperty > stringPropertyRef;
		::cpp::Pointer<  wxStringProperty > get_stringPropertyRef();
		::Dynamic get_stringPropertyRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StringProperty */ 
