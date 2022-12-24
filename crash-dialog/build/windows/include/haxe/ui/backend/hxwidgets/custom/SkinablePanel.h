#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_SkinablePanel
#define INCLUDED_haxe_ui_backend_hxwidgets_custom_SkinablePanel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_OwnerDrawnPanel
#include <hx/widgets/OwnerDrawnPanel.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,custom,SkinablePanel)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,GCDC)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,OwnerDrawnPanel)
HX_DECLARE_CLASS2(hx,widgets,Panel)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{


class HXCPP_CLASS_ATTRIBUTES SkinablePanel_obj : public  ::hx::widgets::OwnerDrawnPanel_obj
{
	public:
		typedef  ::hx::widgets::OwnerDrawnPanel_obj super;
		typedef SkinablePanel_obj OBJ_;
		SkinablePanel_obj();

	public:
		enum { _hx_ClassId = 0x7f35ecf3 };

		void __construct( ::hx::widgets::Window parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.custom.SkinablePanel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.custom.SkinablePanel"); }
		static ::hx::ObjectPtr< SkinablePanel_obj > __new( ::hx::widgets::Window parent);
		static ::hx::ObjectPtr< SkinablePanel_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SkinablePanel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SkinablePanel",cd,f0,06,a4); }

		 ::haxe::ui::styles::Style style;
		void onPaint( ::hx::widgets::GCDC gdc);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_custom_SkinablePanel */ 
