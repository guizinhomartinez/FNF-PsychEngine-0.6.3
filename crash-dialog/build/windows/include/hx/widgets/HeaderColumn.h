#ifndef INCLUDED_hx_widgets_HeaderColumn
#define INCLUDED_hx_widgets_HeaderColumn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_b4548bb3748a21b1
#define INCLUDED_b4548bb3748a21b1
#include "wx/headercol.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,HeaderColumn)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES HeaderColumn_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HeaderColumn_obj OBJ_;
		HeaderColumn_obj();

	public:
		enum { _hx_ClassId = 0x21841f1e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.HeaderColumn")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.HeaderColumn"); }
		static ::hx::ObjectPtr< HeaderColumn_obj > __new();
		static ::hx::ObjectPtr< HeaderColumn_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HeaderColumn_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HeaderColumn",63,40,b1,a8); }

		::cpp::Pointer<  wxHeaderColumn > _ref;
		::String get_title();
		::Dynamic get_title_dyn();

		virtual ::String set_title(::String value);
		::Dynamic set_title_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		virtual int set_width(int value);
		::Dynamic set_width_dyn();

		bool destroy();
		::Dynamic destroy_dyn();

		::cpp::Pointer<  wxHeaderColumn > headerColumn;
		::cpp::Pointer<  wxHeaderColumn > get_headerColumn();
		::Dynamic get_headerColumn_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_HeaderColumn */ 
