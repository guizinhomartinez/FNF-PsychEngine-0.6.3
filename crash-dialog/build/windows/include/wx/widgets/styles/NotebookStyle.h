#ifndef INCLUDED_wx_widgets_styles_NotebookStyle
#define INCLUDED_wx_widgets_styles_NotebookStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,NotebookStyle)

#include <wx/notebook.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES NotebookStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NotebookStyle_obj OBJ_;
		NotebookStyle_obj();

	public:
		enum { _hx_ClassId = 0x788abbe6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.NotebookStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.NotebookStyle"); }

		inline static ::hx::ObjectPtr< NotebookStyle_obj > __new() {
			::hx::ObjectPtr< NotebookStyle_obj > __this = new NotebookStyle_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NotebookStyle_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NotebookStyle_obj *__this = (NotebookStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotebookStyle_obj), false, "wx.widgets.styles.NotebookStyle"));
			*(void **)__this = NotebookStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NotebookStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NotebookStyle",f6,85,63,79); }

		static void __boot();
		static int TOP;
		static int LEFT;
		static int RIGHT;
		static int BOTTOM;
		static int FIXEDWIDTH;
		static int MULTILINE;
		static int NOPAGETHEME;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_NotebookStyle */ 
