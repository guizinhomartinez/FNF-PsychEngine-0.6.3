#ifndef INCLUDED_wx_widgets_styles_DataViewCtrlStyle
#define INCLUDED_wx_widgets_styles_DataViewCtrlStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,DataViewCtrlStyle)

#include <wx/dataview.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES DataViewCtrlStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DataViewCtrlStyle_obj OBJ_;
		DataViewCtrlStyle_obj();

	public:
		enum { _hx_ClassId = 0x0212b76f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.DataViewCtrlStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.DataViewCtrlStyle"); }

		inline static ::hx::ObjectPtr< DataViewCtrlStyle_obj > __new() {
			::hx::ObjectPtr< DataViewCtrlStyle_obj > __this = new DataViewCtrlStyle_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DataViewCtrlStyle_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DataViewCtrlStyle_obj *__this = (DataViewCtrlStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataViewCtrlStyle_obj), false, "wx.widgets.styles.DataViewCtrlStyle"));
			*(void **)__this = DataViewCtrlStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewCtrlStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewCtrlStyle",b7,a0,af,12); }

		static void __boot();
		static int DV_HORIZ_RULES;
		static int DV_MULTIPLE;
		static int DV_NO_HEADER;
		static int DV_ROW_LINES;
		static int DV_SINGLE;
		static int DV_VERT_RULES;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_DataViewCtrlStyle */ 
