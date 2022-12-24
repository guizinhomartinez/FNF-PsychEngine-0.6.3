#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#define INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,creators,Creator)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{


class HXCPP_CLASS_ATTRIBUTES Creator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Creator_obj OBJ_;
		Creator_obj();

	public:
		enum { _hx_ClassId = 0x3925cb80 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.creators.Creator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.creators.Creator"); }
		static ::hx::ObjectPtr< Creator_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< Creator_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Creator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Creator",8c,e6,bb,de); }

		 ::haxe::ui::core::Component _component;
		virtual int createStyle(int style);
		::Dynamic createStyle_dyn();

		virtual ::cpp::VirtualArray createConstructorParams(::cpp::VirtualArray params);
		::Dynamic createConstructorParams_dyn();

		virtual  ::hx::widgets::Object createWindow( ::hx::widgets::Object parent,::hx::Null< int >  style);
		::Dynamic createWindow_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator */ 
