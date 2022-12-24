#ifndef INCLUDED_hx_widgets_PropertyCategory
#define INCLUDED_hx_widgets_PropertyCategory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PGProperty)
HX_DECLARE_CLASS2(hx,widgets,PropertyCategory)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES PropertyCategory_obj : public  ::hx::widgets::PGProperty_obj
{
	public:
		typedef  ::hx::widgets::PGProperty_obj super;
		typedef PropertyCategory_obj OBJ_;
		PropertyCategory_obj();

	public:
		enum { _hx_ClassId = 0x20ee38b2 };

		void __construct(::String label,::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.PropertyCategory")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.PropertyCategory"); }
		static ::hx::ObjectPtr< PropertyCategory_obj > __new(::String label,::String name);
		static ::hx::ObjectPtr< PropertyCategory_obj > __alloc(::hx::Ctx *_hx_ctx,::String label,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PropertyCategory_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertyCategory",93,e8,00,35); }

		::cpp::Pointer<  ::hx::widgets::PropertyCategory > propertyCategoryRef;
		::cpp::Pointer<  ::hx::widgets::PropertyCategory > get_propertyCategoryRef();
		::Dynamic get_propertyCategoryRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_PropertyCategory */ 
