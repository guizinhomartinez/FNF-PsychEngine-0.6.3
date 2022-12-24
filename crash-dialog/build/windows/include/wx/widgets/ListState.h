#ifndef INCLUDED_wx_widgets_ListState
#define INCLUDED_wx_widgets_ListState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,ListState)


#include <wx/listctrl.h>

namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ListState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ListState_obj OBJ_;
		ListState_obj();

	public:
		enum { _hx_ClassId = 0x664ad245 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.ListState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.ListState"); }

		inline static ::hx::ObjectPtr< ListState_obj > __new() {
			::hx::ObjectPtr< ListState_obj > __this = new ListState_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ListState_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ListState_obj *__this = (ListState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListState_obj), false, "wx.widgets.ListState"));
			*(void **)__this = ListState_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListState_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListState",b3,14,1f,3c); }

		static void __boot();
		static int DISABLED;
		static int DONTCARE;
		static int DROPHILITED;
		static int FILTERED;
		static int FOCUSED;
		static int INUSE;
		static int PICKED;
		static int SELECTED;
		static int SOURCE;
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_ListState */ 
