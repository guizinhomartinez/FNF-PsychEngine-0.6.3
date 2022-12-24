#ifndef INCLUDED_hx_widgets_PGChoices
#define INCLUDED_hx_widgets_PGChoices

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,PGChoices)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES PGChoices_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PGChoices_obj OBJ_;
		PGChoices_obj();

	public:
		enum { _hx_ClassId = 0x1f3fc320 };

		void __construct(::Array< ::Dynamic> items);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.PGChoices")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.PGChoices"); }
		static ::hx::ObjectPtr< PGChoices_obj > __new(::Array< ::Dynamic> items);
		static ::hx::ObjectPtr< PGChoices_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> items);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PGChoices_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PGChoices",bb,54,d7,6e); }

		::cpp::Pointer<  wxPGChoices > _ref;
		void add(::String label,int value);
		::Dynamic add_dyn();

		::cpp::Pointer<  wxPGChoices > choicesRef;
		::cpp::Pointer<  wxPGChoices > get_choicesRef();
		::Dynamic get_choicesRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_PGChoices */ 
