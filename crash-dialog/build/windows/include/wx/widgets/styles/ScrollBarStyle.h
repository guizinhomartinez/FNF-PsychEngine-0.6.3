#ifndef INCLUDED_wx_widgets_styles_ScrollBarStyle
#define INCLUDED_wx_widgets_styles_ScrollBarStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,ScrollBarStyle)

#include <wx/scrolbar.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES ScrollBarStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ScrollBarStyle_obj OBJ_;
		ScrollBarStyle_obj();

	public:
		enum { _hx_ClassId = 0x694464d7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.ScrollBarStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.ScrollBarStyle"); }

		inline static ::hx::ObjectPtr< ScrollBarStyle_obj > __new() {
			::hx::ObjectPtr< ScrollBarStyle_obj > __this = new ScrollBarStyle_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ScrollBarStyle_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ScrollBarStyle_obj *__this = (ScrollBarStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollBarStyle_obj), false, "wx.widgets.styles.ScrollBarStyle"));
			*(void **)__this = ScrollBarStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScrollBarStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScrollBarStyle",ab,63,32,89); }

		static void __boot();
		static int HORIZONTAL;
		static int VERTICAL;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_ScrollBarStyle */ 
