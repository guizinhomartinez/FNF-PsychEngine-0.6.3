#ifndef INCLUDED_hx_widgets_IntProperty
#define INCLUDED_hx_widgets_IntProperty

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
HX_DECLARE_CLASS2(hx,widgets,IntProperty)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PGProperty)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES IntProperty_obj : public  ::hx::widgets::PGProperty_obj
{
	public:
		typedef  ::hx::widgets::PGProperty_obj super;
		typedef IntProperty_obj OBJ_;
		IntProperty_obj();

	public:
		enum { _hx_ClassId = 0x3dec5485 };

		void __construct(::String label,::String name,int value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.IntProperty")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.IntProperty"); }
		static ::hx::ObjectPtr< IntProperty_obj > __new(::String label,::String name,int value);
		static ::hx::ObjectPtr< IntProperty_obj > __alloc(::hx::Ctx *_hx_ctx,::String label,::String name,int value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IntProperty_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IntProperty",44,b0,b9,7a); }

		::cpp::Pointer<  wxIntProperty > intPropertyRef;
		::cpp::Pointer<  wxIntProperty > get_intPropertyRef();
		::Dynamic get_intPropertyRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_IntProperty */ 
