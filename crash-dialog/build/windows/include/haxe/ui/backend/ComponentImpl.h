#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#define INCLUDED_haxe_ui_backend_ComponentImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,handlers,NativeHandler)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,MouseEvent)
HX_DECLARE_CLASS2(hx,widgets,MouseState)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ComponentImpl_obj : public  ::haxe::ui::backend::ComponentBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ComponentBase_obj super;
		typedef ComponentImpl_obj OBJ_;
		ComponentImpl_obj();

	public:
		enum { _hx_ClassId = 0x13d76ae7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ComponentImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ComponentImpl"); }
		static ::hx::ObjectPtr< ComponentImpl_obj > __new();
		static ::hx::ObjectPtr< ComponentImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentImpl",1d,8e,4b,2b); }

		static void __boot();
		static ::Array< ::Dynamic> _inComponents;
		static int convertColor(int c);
		static ::Dynamic convertColor_dyn();

		static int hash(::String s);
		static ::Dynamic hash_dyn();

		 ::haxe::ds::StringMap _eventMap;
		 ::haxe::ui::core::Component _hx___parent;
		::Array< ::Dynamic> _hx___children;
		 ::hx::widgets::Object object;
		 ::hx::widgets::Window get_window();
		::Dynamic get_window_dyn();

		 ::hx::widgets::Window set_window( ::hx::widgets::Window value);
		::Dynamic set_window_dyn();

		void handleReady();

		bool get_isNativeScroller();

		bool _firstResize;
		 ::haxe::ui::backend::hxwidgets::handlers::NativeHandler _hx___handler;
		void createWindow( ::hx::widgets::Object parent);
		::Dynamic createWindow_dyn();

		void handleSize( ::Dynamic width, ::Dynamic height, ::haxe::ui::styles::Style style);

		 ::haxe::ui::core::Component handleAddComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component handleAddComponentAt( ::haxe::ui::core::Component child,int index);

		 ::haxe::ui::core::Component handleRemoveComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose);

		 ::haxe::ui::core::Component handleRemoveComponentAt(int index,::hx::Null< bool >  dispose);

		bool _hideOnCreate;
		void handleVisibility(bool show);

		void handleClipRect( ::haxe::ui::geom::Rectangle value);

		void handlePosition( ::Dynamic left, ::Dynamic top, ::haxe::ui::styles::Style style);

		void lock(::hx::Null< bool >  recusive);
		::Dynamic lock_dyn();

		void unlock(::hx::Null< bool >  recusive);
		::Dynamic unlock_dyn();

		int _repositionUnlockCount;
		void handlePreReposition();

		void handlePostReposition();

		void handleSetComponentIndex( ::haxe::ui::core::Component child,int index);

		bool _backColourSet;
		bool _foreColourSet;
		 ::haxe::ui::styles::Style _cachedStyle;
		virtual void applyStyle( ::haxe::ui::styles::Style style);

		 ::haxe::ds::StringMap _hx___props;
		 ::Dynamic get(::String name);
		::Dynamic get_dyn();

		void set(::String name, ::Dynamic value);
		::Dynamic set_dyn();

		bool has(::String name);
		::Dynamic has_dyn();

		 ::haxe::ds::StringMap _hx___eventsToMap;
		void mapEvent(::String type, ::Dynamic listener);

		void unmapEvent(::String type, ::Dynamic listener);

		void _hx___onFocusEvent( ::hx::widgets::Event event);
		::Dynamic _hx___onFocusEvent_dyn();

		void _hx___onEvent( ::hx::widgets::Event event);
		::Dynamic _hx___onEvent_dyn();

		bool _mouseOverFlag;
		void _hx___onMouseMove( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseMove_dyn();

		bool _mouseDownFlag;
		void _hx___onMouseDown( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseDown_dyn();

		void _hx___onMouseUp( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseUp_dyn();

		void _hx___onMouseOut( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseOut_dyn();

		void handleMouseOut( ::haxe::ui::backend::ComponentImpl c, ::hx::widgets::MouseEvent mouseEvent);
		::Dynamic handleMouseOut_dyn();

		void _hx___onMouseEvent( ::hx::widgets::Event event);
		::Dynamic _hx___onMouseEvent_dyn();

		virtual void registerBehaviours();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ComponentImpl */ 
