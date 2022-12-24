#ifndef INCLUDED_hx_widgets_SystemOptions
#define INCLUDED_hx_widgets_SystemOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,SystemOptions)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES SystemOptions_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef SystemOptions_obj OBJ_;
		SystemOptions_obj();

	public:
		enum { _hx_ClassId = 0x374464f4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.SystemOptions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.SystemOptions"); }
		static ::hx::ObjectPtr< SystemOptions_obj > __new();
		static ::hx::ObjectPtr< SystemOptions_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SystemOptions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SystemOptions",0f,60,94,f7); }

		static int getOption(::String name);
		static ::Dynamic getOption_dyn();

		static void setOption(::String name,int value);
		static ::Dynamic setOption_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_SystemOptions */ 
