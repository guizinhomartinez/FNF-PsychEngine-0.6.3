#ifndef INCLUDED_hx_widgets_TaskBarIcon
#define INCLUDED_hx_widgets_TaskBarIcon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_5731147d31755f8b
#define INCLUDED_5731147d31755f8b
#include "wx/taskbar.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Icon)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TaskBarIcon)
HX_DECLARE_CLASS2(hx,widgets,Trackable)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES TaskBarIcon_obj : public  ::hx::widgets::EvtHandler_obj
{
	public:
		typedef  ::hx::widgets::EvtHandler_obj super;
		typedef TaskBarIcon_obj OBJ_;
		TaskBarIcon_obj();

	public:
		enum { _hx_ClassId = 0x1347dfac };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.TaskBarIcon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.TaskBarIcon"); }
		static ::hx::ObjectPtr< TaskBarIcon_obj > __new();
		static ::hx::ObjectPtr< TaskBarIcon_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TaskBarIcon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TaskBarIcon",07,4e,1b,25); }

		void setIcon( ::hx::widgets::Icon icon,::String tooltip);
		::Dynamic setIcon_dyn();

		bool isIconInstalled;
		bool get_isIconInstalled();
		::Dynamic get_isIconInstalled_dyn();

		void setBitmap( ::hx::widgets::Bitmap bitmap,::String tooltip);
		::Dynamic setBitmap_dyn();

		::cpp::Pointer<  wxTaskBarIcon > taskBarIconRef;
		::cpp::Pointer<  wxTaskBarIcon > get_taskBarIconRef();
		::Dynamic get_taskBarIconRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_TaskBarIcon */ 
