#ifndef INCLUDED_hx_widgets_SettableHeaderColumn
#define INCLUDED_hx_widgets_SettableHeaderColumn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_HeaderColumn
#include <hx/widgets/HeaderColumn.h>
#endif
#ifndef INCLUDED_b4548bb3748a21b1
#define INCLUDED_b4548bb3748a21b1
#include "wx/headercol.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,HeaderColumn)
HX_DECLARE_CLASS2(hx,widgets,SettableHeaderColumn)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES SettableHeaderColumn_obj : public  ::hx::widgets::HeaderColumn_obj
{
	public:
		typedef  ::hx::widgets::HeaderColumn_obj super;
		typedef SettableHeaderColumn_obj OBJ_;
		SettableHeaderColumn_obj();

	public:
		enum { _hx_ClassId = 0x7b23bb4e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.SettableHeaderColumn")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.SettableHeaderColumn"); }
		static ::hx::ObjectPtr< SettableHeaderColumn_obj > __new();
		static ::hx::ObjectPtr< SettableHeaderColumn_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SettableHeaderColumn_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SettableHeaderColumn",af,6f,e2,ac); }

		::String set_title(::String value);

		int set_width(int value);

		::cpp::Pointer<  wxSettableHeaderColumn > settableHeaderColumnRef;
		::cpp::Pointer<  wxSettableHeaderColumn > get_settableHeaderColumnRef();
		::Dynamic get_settableHeaderColumnRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_SettableHeaderColumn */ 
