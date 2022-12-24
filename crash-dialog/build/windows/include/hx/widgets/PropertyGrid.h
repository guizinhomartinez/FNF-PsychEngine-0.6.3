#ifndef INCLUDED_hx_widgets_PropertyGrid
#define INCLUDED_hx_widgets_PropertyGrid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PGProperty)
HX_DECLARE_CLASS2(hx,widgets,PropertyGrid)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES PropertyGrid_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef PropertyGrid_obj OBJ_;
		PropertyGrid_obj();

	public:
		enum { _hx_ClassId = 0x6335c496 };

		void __construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.PropertyGrid")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.PropertyGrid"); }
		static ::hx::ObjectPtr< PropertyGrid_obj > __new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< PropertyGrid_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PropertyGrid_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertyGrid",db,e5,62,ea); }

		 ::hx::widgets::PGProperty append( ::hx::widgets::PGProperty property);
		::Dynamic append_dyn();

		 ::hx::widgets::PGProperty getProperty(::String name);
		::Dynamic getProperty_dyn();

		void setPropertyAttribute(::String id,::String attrName, ::Dynamic value,::hx::Null< int >  argFlags);
		::Dynamic setPropertyAttribute_dyn();

		 ::hx::widgets::PGProperty appendCategory(::String label,::String name);
		::Dynamic appendCategory_dyn();

		 ::hx::widgets::PGProperty appendStringProperty(::String label,::String value,::String name);
		::Dynamic appendStringProperty_dyn();

		 ::hx::widgets::PGProperty appendIntProperty(::String label,int value,::String name);
		::Dynamic appendIntProperty_dyn();

		 ::hx::widgets::PGProperty appendBoolProperty(::String label,bool value,::String name);
		::Dynamic appendBoolProperty_dyn();

		 ::hx::widgets::PGProperty appendEnumProperty(::String label,::Array< ::Dynamic> choices,::hx::Null< int >  value,::String name);
		::Dynamic appendEnumProperty_dyn();

		::cpp::Pointer<  wxPropertyGrid > propertyGridRef;
		::cpp::Pointer<  wxPropertyGrid > get_propertyGridRef();
		::Dynamic get_propertyGridRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_PropertyGrid */ 
