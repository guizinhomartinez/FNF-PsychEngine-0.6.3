#ifndef INCLUDED_haxe_ui_locale_Formats
#define INCLUDED_haxe_ui_locale_Formats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,locale,Formats)

namespace haxe{
namespace ui{
namespace locale{


class HXCPP_CLASS_ATTRIBUTES Formats_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Formats_obj OBJ_;
		Formats_obj();

	public:
		enum { _hx_ClassId = 0x357871c4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.locale.Formats")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.locale.Formats"); }

		inline static ::hx::ObjectPtr< Formats_obj > __new() {
			::hx::ObjectPtr< Formats_obj > __this = new Formats_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Formats_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Formats_obj *__this = (Formats_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Formats_obj), false, "haxe.ui.locale.Formats"));
			*(void **)__this = Formats_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Formats_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Formats",3c,e9,7f,ac); }

		static void __boot();
		static ::String _dateFormatShort;
		static ::String get_dateFormatShort();
		static ::Dynamic get_dateFormatShort_dyn();

		static ::String set_dateFormatShort(::String value);
		static ::Dynamic set_dateFormatShort_dyn();

		static ::String _decimalSeperator;
		static ::String get_decimalSeperator();
		static ::Dynamic get_decimalSeperator_dyn();

		static ::String set_decimalSeperator(::String value);
		static ::Dynamic set_decimalSeperator_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace locale

#endif /* INCLUDED_haxe_ui_locale_Formats */ 
