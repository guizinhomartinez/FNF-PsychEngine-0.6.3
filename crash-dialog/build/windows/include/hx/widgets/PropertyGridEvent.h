#ifndef INCLUDED_hx_widgets_PropertyGridEvent
#define INCLUDED_hx_widgets_PropertyGridEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PGProperty)
HX_DECLARE_CLASS2(hx,widgets,PropertyGridEvent)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES PropertyGridEvent_obj : public  ::hx::widgets::Event_obj
{
	public:
		typedef  ::hx::widgets::Event_obj super;
		typedef PropertyGridEvent_obj OBJ_;
		PropertyGridEvent_obj();

	public:
		enum { _hx_ClassId = 0x08d20340 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.PropertyGridEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.PropertyGridEvent"); }
		static ::hx::ObjectPtr< PropertyGridEvent_obj > __new();
		static ::hx::ObjectPtr< PropertyGridEvent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PropertyGridEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertyGridEvent",3f,38,19,85); }

		static  ::hx::widgets::Event fromPointer(::cpp::Pointer<  wxEvent > ptr);
		static ::Dynamic fromPointer_dyn();

		 ::hx::widgets::PGProperty property;
		 ::hx::widgets::PGProperty get_property();
		::Dynamic get_property_dyn();

		::cpp::Pointer<  wxPropertyGridEvent > propertyGridEventRef;
		::cpp::Pointer<  wxPropertyGridEvent > get_propertyGridEventRef();
		::Dynamic get_propertyGridEventRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_PropertyGridEvent */ 
