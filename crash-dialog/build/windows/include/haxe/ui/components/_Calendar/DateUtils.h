#ifndef INCLUDED_haxe_ui_components__Calendar_DateUtils
#define INCLUDED_haxe_ui_components__Calendar_DateUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS4(haxe,ui,components,_Calendar,DateUtils)

namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{


class HXCPP_CLASS_ATTRIBUTES DateUtils_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DateUtils_obj OBJ_;
		DateUtils_obj();

	public:
		enum { _hx_ClassId = 0x708ebc7e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.components._Calendar.DateUtils")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.components._Calendar.DateUtils"); }

		inline static ::hx::ObjectPtr< DateUtils_obj > __new() {
			::hx::ObjectPtr< DateUtils_obj > __this = new DateUtils_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DateUtils_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DateUtils_obj *__this = (DateUtils_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DateUtils_obj), false, "haxe.ui.components._Calendar.DateUtils"));
			*(void **)__this = DateUtils_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DateUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DateUtils",03,7d,0e,2c); }

		static int getEndDay(int month,int year);
		static ::Dynamic getEndDay_dyn();

		static  ::Date previousMonth( ::Date date);
		static ::Dynamic previousMonth_dyn();

		static  ::Date nextMonth( ::Date date);
		static ::Dynamic nextMonth_dyn();

		static  ::Date previousYear( ::Date date);
		static ::Dynamic previousYear_dyn();

		static  ::Date nextYear( ::Date date);
		static ::Dynamic nextYear_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Calendar

#endif /* INCLUDED_haxe_ui_components__Calendar_DateUtils */ 
