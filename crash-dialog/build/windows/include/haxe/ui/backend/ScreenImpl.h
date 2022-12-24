#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#define INCLUDED_haxe_ui_backend_ScreenImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,MenuBar)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Frame)
HX_DECLARE_CLASS2(hx,widgets,MenuBar)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ScreenImpl_obj : public  ::haxe::ui::backend::ScreenBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ScreenBase_obj super;
		typedef ScreenImpl_obj OBJ_;
		ScreenImpl_obj();

	public:
		enum { _hx_ClassId = 0x7faef962 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ScreenImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ScreenImpl"); }
		static ::hx::ObjectPtr< ScreenImpl_obj > __new();
		static ::hx::ObjectPtr< ScreenImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScreenImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScreenImpl",8c,10,a2,b4); }

		 ::haxe::ds::StringMap _hx___eventMap;
		Float get_width();

		Float get_height();

		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component component);

		virtual  ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  dispose);

		 ::hx::widgets::Frame frame;
		 ::hx::widgets::Frame get_frame();
		::Dynamic get_frame_dyn();

		::String get_title();

		::String set_title(::String t);

		bool _hasListener;
		void addResizeListener();
		::Dynamic addResizeListener_dyn();

		void handleSetComponentIndex( ::haxe::ui::core::Component child,int index);

		 ::haxe::ui::containers::menus::MenuBar _menuBar;
		 ::hx::widgets::MenuBar _nativeMenuBar;
		void linkMenuBar( ::haxe::ui::containers::menus::MenuBar menuBar, ::hx::widgets::MenuBar nativeMenuBar);
		::Dynamic linkMenuBar_dyn();

		void onMenu( ::hx::widgets::Event e);
		::Dynamic onMenu_dyn();

		bool supportsEvent(::String type);

		void mapEvent(::String type, ::Dynamic listener);

		void unmapEvent(::String type, ::Dynamic listener);

		void _hx___onMouseEvent( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ScreenImpl */ 
