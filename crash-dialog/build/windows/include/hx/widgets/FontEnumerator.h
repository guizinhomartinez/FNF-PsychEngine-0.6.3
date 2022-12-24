#ifndef INCLUDED_hx_widgets_FontEnumerator
#define INCLUDED_hx_widgets_FontEnumerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,widgets,FontEnumerator)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES FontEnumerator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FontEnumerator_obj OBJ_;
		FontEnumerator_obj();

	public:
		enum { _hx_ClassId = 0x0f9676b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.widgets.FontEnumerator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.widgets.FontEnumerator"); }

		inline static ::hx::ObjectPtr< FontEnumerator_obj > __new() {
			::hx::ObjectPtr< FontEnumerator_obj > __this = new FontEnumerator_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FontEnumerator_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FontEnumerator_obj *__this = (FontEnumerator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FontEnumerator_obj), false, "hx.widgets.FontEnumerator"));
			*(void **)__this = FontEnumerator_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FontEnumerator_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FontEnumerator",53,bc,93,b5); }

		static void __boot();
		static bool useCache;
		static ::Array< ::String > _faceNameCache;
		static ::Array< ::String > faceNames;
		static ::Array< ::String > get_faceNames();
		static ::Dynamic get_faceNames_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_FontEnumerator */ 
