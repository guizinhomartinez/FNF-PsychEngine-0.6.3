#ifndef INCLUDED_hx_widgets_SystemSettings
#define INCLUDED_hx_widgets_SystemSettings

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_73d5db1815414fb9
#define INCLUDED_73d5db1815414fb9
#include "wx/settings.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,SystemSettings)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES SystemSettings_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef SystemSettings_obj OBJ_;
		SystemSettings_obj();

	public:
		enum { _hx_ClassId = 0x71112571 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.SystemSettings")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.SystemSettings"); }
		static ::hx::ObjectPtr< SystemSettings_obj > __new();
		static ::hx::ObjectPtr< SystemSettings_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SystemSettings_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SystemSettings",12,6b,0e,17); }

		static int getMetric( cpp::Struct<wxSystemMetric, cpp::EnumHandler> metric, ::hx::widgets::Window window);
		static ::Dynamic getMetric_dyn();

		static int getColour( cpp::Struct<wxSystemColour, cpp::EnumHandler> index);
		static ::Dynamic getColour_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_SystemSettings */ 
