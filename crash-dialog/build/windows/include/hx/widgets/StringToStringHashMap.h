#ifndef INCLUDED_hx_widgets_StringToStringHashMap
#define INCLUDED_hx_widgets_StringToStringHashMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_453869af60c07cda
#define INCLUDED_453869af60c07cda
#include "wx/hashmap.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,StringToStringHashMap)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StringToStringHashMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringToStringHashMap_obj OBJ_;
		StringToStringHashMap_obj();

	public:
		enum { _hx_ClassId = 0x2e998016 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StringToStringHashMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.StringToStringHashMap"); }
		static ::hx::ObjectPtr< StringToStringHashMap_obj > __new();
		static ::hx::ObjectPtr< StringToStringHashMap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringToStringHashMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringToStringHashMap",31,8e,52,47); }

		::cpp::Pointer<  wxStringToStringHashMap > _ref;
		int size;
		int get_size();
		::Dynamic get_size_dyn();

		bool isEmpty;
		bool get_isEmpty();
		::Dynamic get_isEmpty_dyn();

		void clear();
		::Dynamic clear_dyn();

		void set(::String key,::String value);
		::Dynamic set_dyn();

		::String get(::String key);
		::Dynamic get_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StringToStringHashMap */ 
