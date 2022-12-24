#ifndef INCLUDED_haxe_ui_geom_Point
#define INCLUDED_haxe_ui_geom_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_153cc208b8cdc04d_7_new)
HX_DECLARE_CLASS3(haxe,ui,geom,Point)

namespace haxe{
namespace ui{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Point_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();

	public:
		enum { _hx_ClassId = 0x0c1d003a };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.geom.Point")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.geom.Point"); }

		inline static ::hx::ObjectPtr< Point_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
			::hx::ObjectPtr< Point_obj > __this = new Point_obj();
			__this->__construct(__o_x,__o_y);
			return __this;
		}

		inline static ::hx::ObjectPtr< Point_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
			Point_obj *__this = (Point_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "haxe.ui.geom.Point"));
			*(void **)__this = Point_obj::_hx_vtable;
{
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_153cc208b8cdc04d_7_new)
HXLINE(   8)		( ( ::haxe::ui::geom::Point)(__this) )->x = x;
HXLINE(   9)		( ( ::haxe::ui::geom::Point)(__this) )->y = y;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Point",30,24,bd,59); }

		Float x;
		Float y;
};

} // end namespace haxe
} // end namespace ui
} // end namespace geom

#endif /* INCLUDED_haxe_ui_geom_Point */ 
