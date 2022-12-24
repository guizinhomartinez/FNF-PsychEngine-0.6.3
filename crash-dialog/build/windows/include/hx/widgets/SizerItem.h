#ifndef INCLUDED_hx_widgets_SizerItem
#define INCLUDED_hx_widgets_SizerItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,SizerItem)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES SizerItem_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef SizerItem_obj OBJ_;
		SizerItem_obj();

	public:
		enum { _hx_ClassId = 0x0b185825 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.SizerItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.SizerItem"); }
		static ::hx::ObjectPtr< SizerItem_obj > __new();
		static ::hx::ObjectPtr< SizerItem_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SizerItem_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SizerItem",24,f6,82,e1); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_SizerItem */ 
