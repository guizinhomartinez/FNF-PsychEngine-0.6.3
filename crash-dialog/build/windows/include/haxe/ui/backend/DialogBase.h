#ifndef INCLUDED_haxe_ui_backend_DialogBase
#define INCLUDED_haxe_ui_backend_DialogBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,DialogBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,BoxSizer)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Sizer)
HX_DECLARE_CLASS2(hx,widgets,StdDialogButtonSizer)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES DialogBase_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef DialogBase_obj OBJ_;
		DialogBase_obj();

	public:
		enum { _hx_ClassId = 0x7f2ed947 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.DialogBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.DialogBase"); }
		static ::hx::ObjectPtr< DialogBase_obj > __new();
		static ::hx::ObjectPtr< DialogBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DialogBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DialogBase",19,21,c4,ab); }

		static ::String standardIdToButton(int id);
		static ::Dynamic standardIdToButton_dyn();

		bool modal;
		::String buttons;
		bool centerDialog;
		::String button;
		 ::haxe::ui::containers::VBox dialogContentContainer;
		 ::haxe::ui::containers::VBox dialogContent;
		 ::haxe::ui::containers::Box customDialogFooterContainer;
		 ::haxe::ui::containers::Box customDialogFooter;
		void showDialog(::hx::Null< bool >  modal);
		::Dynamic showDialog_dyn();

		void show();

		int buttonToStandardId(::String button);
		::Dynamic buttonToStandardId_dyn();

		void validateDialog(::String button, ::Dynamic fn);
		::Dynamic validateDialog_dyn();

		void hide();

		void hideDialog(::String button);
		::Dynamic hideDialog_dyn();

		::String _title;
		::String get_title();
		::Dynamic get_title_dyn();

		::String set_title(::String value);
		::Dynamic set_title_dyn();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void createButtons();
		::Dynamic createButtons_dyn();

		 ::hx::widgets::StdDialogButtonSizer _buttonSizer;
		void createFooter();
		::Dynamic createFooter_dyn();

		::Array< ::Dynamic> _footerComponents;
		void addFooterComponent( ::haxe::ui::core::Component c);
		::Dynamic addFooterComponent_dyn();

		void onFooterButtonClick( ::haxe::ui::events::MouseEvent event);
		::Dynamic onFooterButtonClick_dyn();

		virtual void registerBehaviours();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_DialogBase */ 
