#ifndef INCLUDED_hx_widgets_Globals
#define INCLUDED_hx_widgets_Globals

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Globals)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Process)
HX_DECLARE_CLASS2(hx,widgets,Trackable)


#include <wx/utils.h>
#undef RegisterClass

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Globals_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Globals_obj OBJ_;
		Globals_obj();

	public:
		enum { _hx_ClassId = 0x11d37645 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.widgets.Globals")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.widgets.Globals"); }

		inline static ::hx::ObjectPtr< Globals_obj > __new() {
			::hx::ObjectPtr< Globals_obj > __this = new Globals_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Globals_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Globals_obj *__this = (Globals_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Globals_obj), false, "hx.widgets.Globals"));
			*(void **)__this = Globals_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Globals_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Globals",90,2d,8a,e1); }

		static void shell(::String command);
		static ::Dynamic shell_dyn();

		static int execute(::String cmd,::hx::Null< int >  flags, ::hx::widgets::Process callback, ::Dynamic env);
		static ::Dynamic execute_dyn();

		static bool yield();
		static ::Dynamic yield_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Globals */ 
