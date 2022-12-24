#ifndef INCLUDED_hx_widgets_CloseEvent
#define INCLUDED_hx_widgets_CloseEvent

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
HX_DECLARE_CLASS2(hx,widgets,CloseEvent)
HX_DECLARE_CLASS2(hx,widgets,Event)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES CloseEvent_obj : public  ::hx::widgets::Event_obj
{
	public:
		typedef  ::hx::widgets::Event_obj super;
		typedef CloseEvent_obj OBJ_;
		CloseEvent_obj();

	public:
		enum { _hx_ClassId = 0x70778841 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.CloseEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.CloseEvent"); }
		static ::hx::ObjectPtr< CloseEvent_obj > __new();
		static ::hx::ObjectPtr< CloseEvent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CloseEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CloseEvent",62,29,57,37); }

		bool canVeto;
		bool get_canVeto();
		::Dynamic get_canVeto_dyn();

		void veto(::hx::Null< bool >  veto);
		::Dynamic veto_dyn();

		::cpp::Pointer<  wxCloseEvent > closeEventRef;
		::cpp::Pointer<  wxCloseEvent > get_closeEventRef();
		::Dynamic get_closeEventRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_CloseEvent */ 
