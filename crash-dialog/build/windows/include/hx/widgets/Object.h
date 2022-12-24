#ifndef INCLUDED_hx_widgets_Object
#define INCLUDED_hx_widgets_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Object_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Object_obj OBJ_;
		Object_obj();

	public:
		enum { _hx_ClassId = 0x2045b63e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Object")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.Object"); }
		static ::hx::ObjectPtr< Object_obj > __new();
		static ::hx::ObjectPtr< Object_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Object_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Object",df,f2,d3,49); }

		::cpp::Pointer<  wxObject > _ref;
		bool _disposed;
		virtual bool destroy();
		::Dynamic destroy_dyn();

		::cpp::Pointer<  wxObject > objectRef;
		::cpp::Pointer<  wxObject > get_objectRef();
		::Dynamic get_objectRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Object */ 
