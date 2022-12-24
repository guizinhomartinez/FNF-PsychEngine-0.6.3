#ifndef INCLUDED_wx_widgets_styles_StyledTextControlStyle
#define INCLUDED_wx_widgets_styles_StyledTextControlStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,StyledTextControlStyle)

#include <wx/stc/stc.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES StyledTextControlStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StyledTextControlStyle_obj OBJ_;
		StyledTextControlStyle_obj();

	public:
		enum { _hx_ClassId = 0x1c5b5a60 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.StyledTextControlStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.StyledTextControlStyle"); }

		inline static ::hx::ObjectPtr< StyledTextControlStyle_obj > __new() {
			::hx::ObjectPtr< StyledTextControlStyle_obj > __this = new StyledTextControlStyle_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StyledTextControlStyle_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StyledTextControlStyle_obj *__this = (StyledTextControlStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyledTextControlStyle_obj), false, "wx.widgets.styles.StyledTextControlStyle"));
			*(void **)__this = StyledTextControlStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StyledTextControlStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyledTextControlStyle",34,4d,62,a7); }

		static void __boot();
		static int DEFAULT;
		static int LINENUMBER;
		static int BRACELIGHT;
		static int BRACEBAD;
		static int CONTROLCHAR;
		static int INDENTGUIDE;
		static int CALLTIP;
		static int FOLDDISPLAYTEXT;
		static int LASTPREDEFINED;
		static int MAX;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_StyledTextControlStyle */ 
