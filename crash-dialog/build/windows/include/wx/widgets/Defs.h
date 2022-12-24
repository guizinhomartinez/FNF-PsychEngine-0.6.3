#ifndef INCLUDED_wx_widgets_Defs
#define INCLUDED_wx_widgets_Defs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,Defs)

#include <wx/defs.h>
namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Defs_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Defs_obj OBJ_;
		Defs_obj();

	public:
		enum { _hx_ClassId = 0x1810aadc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.Defs")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.Defs"); }

		inline static ::hx::ObjectPtr< Defs_obj > __new() {
			::hx::ObjectPtr< Defs_obj > __this = new Defs_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Defs_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Defs_obj *__this = (Defs_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Defs_obj), false, "wx.widgets.Defs"));
			*(void **)__this = Defs_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Defs_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Defs",2e,7f,3f,2d); }

		static void __boot();
		static int OK;
		static int CANCEL;
		static int CLOSE;
		static int _hx_YES;
		static int _hx_NO;
		static int CENTRE;
		static int ALIGN_NOT;
		static int ALIGN_CENTER_HORIZONTAL;
		static int ALIGN_LEFT;
		static int ALIGN_TOP;
		static int ALIGN_RIGHT;
		static int ALIGN_BOTTOM;
		static int ALIGN_CENTER_VERTICAL;
		static int ALIGN_CENTER;
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_Defs */ 
