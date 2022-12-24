#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TableViewIcons
#define INCLUDED_haxe_ui_backend_hxwidgets_TableViewIcons

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,TableViewIcons)
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES TableViewIcons_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TableViewIcons_obj OBJ_;
		TableViewIcons_obj();

	public:
		enum { _hx_ClassId = 0x76dc7410 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.TableViewIcons")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.TableViewIcons"); }

		inline static ::hx::ObjectPtr< TableViewIcons_obj > __new() {
			::hx::ObjectPtr< TableViewIcons_obj > __this = new TableViewIcons_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TableViewIcons_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TableViewIcons_obj *__this = (TableViewIcons_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TableViewIcons_obj), false, "haxe.ui.backend.hxwidgets.TableViewIcons"));
			*(void **)__this = TableViewIcons_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TableViewIcons_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TableViewIcons",67,5c,8c,4e); }

		static void __boot();
		static  ::haxe::ds::StringMap _map;
		static  ::hx::widgets::Bitmap get(::String id);
		static ::Dynamic get_dyn();

		static bool findAndCompare(::String id, ::hx::widgets::Bitmap bmp);
		static ::Dynamic findAndCompare_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_TableViewIcons */ 
