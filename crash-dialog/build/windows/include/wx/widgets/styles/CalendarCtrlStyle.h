#ifndef INCLUDED_wx_widgets_styles_CalendarCtrlStyle
#define INCLUDED_wx_widgets_styles_CalendarCtrlStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,CalendarCtrlStyle)

#include <wx/calctrl.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES CalendarCtrlStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CalendarCtrlStyle_obj OBJ_;
		CalendarCtrlStyle_obj();

	public:
		enum { _hx_ClassId = 0x2c6ebc1c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.CalendarCtrlStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.CalendarCtrlStyle"); }

		inline static ::hx::ObjectPtr< CalendarCtrlStyle_obj > __new() {
			::hx::ObjectPtr< CalendarCtrlStyle_obj > __this = new CalendarCtrlStyle_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CalendarCtrlStyle_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CalendarCtrlStyle_obj *__this = (CalendarCtrlStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CalendarCtrlStyle_obj), false, "wx.widgets.styles.CalendarCtrlStyle"));
			*(void **)__this = CalendarCtrlStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CalendarCtrlStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CalendarCtrlStyle",c8,b9,f4,6e); }

		static void __boot();
		static int SUNDAY_FIRST;
		static int MONDAY_FIRST;
		static int SHOW_HOLIDAYS;
		static int NO_YEAR_CHANGE;
		static int NO_MONTH_CHANGE;
		static int SEQUENTIAL_MONTH_SELECTION;
		static int SHOW_SURROUNDING_WEEKS;
		static int SHOW_WEEK_NUMBERS;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_CalendarCtrlStyle */ 
