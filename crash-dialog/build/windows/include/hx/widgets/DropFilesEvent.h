#ifndef INCLUDED_hx_widgets_DropFilesEvent
#define INCLUDED_hx_widgets_DropFilesEvent

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
HX_DECLARE_CLASS2(hx,widgets,DropFilesEvent)
HX_DECLARE_CLASS2(hx,widgets,Event)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DropFilesEvent_obj : public  ::hx::widgets::Event_obj
{
	public:
		typedef  ::hx::widgets::Event_obj super;
		typedef DropFilesEvent_obj OBJ_;
		DropFilesEvent_obj();

	public:
		enum { _hx_ClassId = 0x0aa66105 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DropFilesEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DropFilesEvent"); }
		static ::hx::ObjectPtr< DropFilesEvent_obj > __new();
		static ::hx::ObjectPtr< DropFilesEvent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DropFilesEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DropFilesEvent",52,0b,af,4f); }

		int numberOfFiles;
		int get_numberOfFiles();
		::Dynamic get_numberOfFiles_dyn();

		::Array< ::String > files;
		::Array< ::String > get_files();
		::Dynamic get_files_dyn();

		::cpp::Pointer<  wxDropFilesEvent > dropFilesEventRef;
		::cpp::Pointer<  wxDropFilesEvent > get_dropFilesEventRef();
		::Dynamic get_dropFilesEventRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DropFilesEvent */ 
