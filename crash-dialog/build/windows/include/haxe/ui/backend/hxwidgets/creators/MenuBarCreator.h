#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_MenuBarCreator
#define INCLUDED_haxe_ui_backend_hxwidgets_creators_MenuBarCreator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,creators,Creator)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,creators,MenuBarCreator)
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


class HXCPP_CLASS_ATTRIBUTES MenuBarCreator_obj : public  ::haxe::ui::backend::hxwidgets::creators::Creator_obj
{
	public:
		typedef  ::haxe::ui::backend::hxwidgets::creators::Creator_obj super;
		typedef MenuBarCreator_obj OBJ_;
		MenuBarCreator_obj();

	public:
		enum { _hx_ClassId = 0x37498144 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.creators.MenuBarCreator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.creators.MenuBarCreator"); }
		static ::hx::ObjectPtr< MenuBarCreator_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< MenuBarCreator_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuBarCreator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuBarCreator",b8,1f,da,10); }

		 ::hx::widgets::Object createWindow( ::hx::widgets::Object parent,::hx::Null< int >  style);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_creators_MenuBarCreator */ 
