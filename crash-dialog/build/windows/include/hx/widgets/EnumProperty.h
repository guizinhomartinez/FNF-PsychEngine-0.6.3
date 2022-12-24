#ifndef INCLUDED_hx_widgets_EnumProperty
#define INCLUDED_hx_widgets_EnumProperty

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,EnumProperty)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PGProperty)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES EnumProperty_obj : public  ::hx::widgets::PGProperty_obj
{
	public:
		typedef  ::hx::widgets::PGProperty_obj super;
		typedef EnumProperty_obj OBJ_;
		EnumProperty_obj();

	public:
		enum { _hx_ClassId = 0x5a043935 };

		void __construct(::String label,::String name,::Array< ::Dynamic> choices,::hx::Null< int >  __o_value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.EnumProperty")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.EnumProperty"); }
		static ::hx::ObjectPtr< EnumProperty_obj > __new(::String label,::String name,::Array< ::Dynamic> choices,::hx::Null< int >  __o_value);
		static ::hx::ObjectPtr< EnumProperty_obj > __alloc(::hx::Ctx *_hx_ctx,::String label,::String name,::Array< ::Dynamic> choices,::hx::Null< int >  __o_value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EnumProperty_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EnumProperty",96,24,e7,50); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_EnumProperty */ 
