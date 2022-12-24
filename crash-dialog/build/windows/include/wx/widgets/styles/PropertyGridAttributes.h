#ifndef INCLUDED_wx_widgets_styles_PropertyGridAttributes
#define INCLUDED_wx_widgets_styles_PropertyGridAttributes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,PropertyGridAttributes)

#include <wx/propgrid/propgrid.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES PropertyGridAttributes_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PropertyGridAttributes_obj OBJ_;
		PropertyGridAttributes_obj();

	public:
		enum { _hx_ClassId = 0x4fd61ea2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.PropertyGridAttributes")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.PropertyGridAttributes"); }

		inline static ::hx::ObjectPtr< PropertyGridAttributes_obj > __new() {
			::hx::ObjectPtr< PropertyGridAttributes_obj > __this = new PropertyGridAttributes_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PropertyGridAttributes_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PropertyGridAttributes_obj *__this = (PropertyGridAttributes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyGridAttributes_obj), false, "wx.widgets.styles.PropertyGridAttributes"));
			*(void **)__this = PropertyGridAttributes_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PropertyGridAttributes_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertyGridAttributes",92,92,3b,3b); }

		static void __boot();
		static ::String BOOL_USE_CHECKBOX;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_PropertyGridAttributes */ 
