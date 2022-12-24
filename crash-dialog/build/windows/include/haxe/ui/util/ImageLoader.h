#ifndef INCLUDED_haxe_ui_util_ImageLoader
#define INCLUDED_haxe_ui_util_ImageLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,util,ImageLoader)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ImageLoader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageLoader_obj OBJ_;
		ImageLoader_obj();

	public:
		enum { _hx_ClassId = 0x6efa3c32 };

		void __construct( ::haxe::ui::util::VariantType resource);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.util.ImageLoader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.util.ImageLoader"); }
		static ::hx::ObjectPtr< ImageLoader_obj > __new( ::haxe::ui::util::VariantType resource);
		static ::hx::ObjectPtr< ImageLoader_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::util::VariantType resource);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageLoader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageLoader",ae,e9,e1,84); }

		 ::haxe::ui::util::VariantType _resource;
		void load( ::Dynamic callback,::hx::Null< bool >  useCache);
		::Dynamic load_dyn();

		void loadFromHttp(::String url, ::Dynamic callback);
		::Dynamic loadFromHttp_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_ImageLoader */ 
