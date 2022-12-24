#ifndef INCLUDED_wx_widgets_styles_StaticLineStyle
#define INCLUDED_wx_widgets_styles_StaticLineStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,StaticLineStyle)

#include <wx/statline.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES StaticLineStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StaticLineStyle_obj OBJ_;
		StaticLineStyle_obj();

	public:
		enum { _hx_ClassId = 0x414726a7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.StaticLineStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.StaticLineStyle"); }

		inline static ::hx::ObjectPtr< StaticLineStyle_obj > __new() {
			::hx::ObjectPtr< StaticLineStyle_obj > __this = new StaticLineStyle_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StaticLineStyle_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StaticLineStyle_obj *__this = (StaticLineStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticLineStyle_obj), false, "wx.widgets.styles.StaticLineStyle"));
			*(void **)__this = StaticLineStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StaticLineStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StaticLineStyle",ef,ad,bd,61); }

		static void __boot();
		static int HORIZONTAL;
		static int VERTICAL;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_StaticLineStyle */ 
