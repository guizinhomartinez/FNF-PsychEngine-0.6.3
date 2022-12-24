#ifndef INCLUDED_wx_widgets__FontFamily_FontFamily_Impl_
#define INCLUDED_wx_widgets__FontFamily_FontFamily_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,_FontFamily,FontFamily_Impl_)

#include <wx/font.h>
namespace wx{
namespace widgets{
namespace _FontFamily{


class HXCPP_CLASS_ATTRIBUTES FontFamily_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FontFamily_Impl__obj OBJ_;
		FontFamily_Impl__obj();

	public:
		enum { _hx_ClassId = 0x636e09b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets._FontFamily.FontFamily_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets._FontFamily.FontFamily_Impl_"); }

		inline static ::hx::ObjectPtr< FontFamily_Impl__obj > __new() {
			::hx::ObjectPtr< FontFamily_Impl__obj > __this = new FontFamily_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FontFamily_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FontFamily_Impl__obj *__this = (FontFamily_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FontFamily_Impl__obj), false, "wx.widgets._FontFamily.FontFamily_Impl_"));
			*(void **)__this = FontFamily_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FontFamily_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FontFamily_Impl_",d3,6f,c6,9a); }

		static void __boot();
		static int DEFAULT;
		static int DECORATIVE;
		static int ROMAN;
		static int SCRIPT;
		static int SWISS;
		static int MODERN;
		static int TELETYPE;
		static int _new(int i);
		static ::Dynamic _new_dyn();

};

} // end namespace wx
} // end namespace widgets
} // end namespace _FontFamily

#endif /* INCLUDED_wx_widgets__FontFamily_FontFamily_Impl_ */ 
