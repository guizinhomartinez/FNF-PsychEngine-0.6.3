#ifndef INCLUDED_wx_widgets_styles_PropertyGridStyles
#define INCLUDED_wx_widgets_styles_PropertyGridStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,PropertyGridStyles)

#include <wx/propgrid/propgrid.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES PropertyGridStyles_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PropertyGridStyles_obj OBJ_;
		PropertyGridStyles_obj();

	public:
		enum { _hx_ClassId = 0x039fda6d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.PropertyGridStyles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.PropertyGridStyles"); }

		inline static ::hx::ObjectPtr< PropertyGridStyles_obj > __new() {
			::hx::ObjectPtr< PropertyGridStyles_obj > __this = new PropertyGridStyles_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PropertyGridStyles_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PropertyGridStyles_obj *__this = (PropertyGridStyles_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyGridStyles_obj), false, "wx.widgets.styles.PropertyGridStyles"));
			*(void **)__this = PropertyGridStyles_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PropertyGridStyles_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertyGridStyles",5d,96,60,70); }

		static void __boot();
		static int AUTO_SORT;
		static int HIDE_CATEGORIES;
		static int ALPHABETIC_MODE;
		static int BOLD_MODIFIED;
		static int SPLITTER_AUTO_CENTER;
		static int TOOLTIPS;
		static int HIDE_MARGIN;
		static int STATIC_SPLITTER;
		static int STATIC_LAYOUT;
		static int LIMITED_EDITING;
		static int TOOLBAR;
		static int DESCRIPTION;
		static int NO_INTERNAL_BORDER;
		static int DEFAULT_STYLE;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_PropertyGridStyles */ 
