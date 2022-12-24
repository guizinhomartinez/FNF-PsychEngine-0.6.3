#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#define INCLUDED_haxe_ui_containers_dialogs_Dialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_DialogBase
#include <haxe/ui/backend/DialogBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,DialogBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,Dialog)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogEvent)
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

namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{


class HXCPP_CLASS_ATTRIBUTES Dialog_obj : public  ::haxe::ui::backend::DialogBase_obj
{
	public:
		typedef  ::haxe::ui::backend::DialogBase_obj super;
		typedef Dialog_obj OBJ_;
		Dialog_obj();

	public:
		enum { _hx_ClassId = 0x1e1df847 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.dialogs.Dialog")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.dialogs.Dialog"); }
		static ::hx::ObjectPtr< Dialog_obj > __new();
		static ::hx::ObjectPtr< Dialog_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Dialog_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Dialog",e8,78,c7,e5); }

		 ::Dynamic _hx___onDialogClosed;
		Dynamic _hx___onDialogClosed_dyn() { return _hx___onDialogClosed;}
		 ::Dynamic onDialogClosed;
		Dynamic onDialogClosed_dyn() { return onDialogClosed;}
		 ::Dynamic set_onDialogClosed( ::Dynamic value);
		::Dynamic set_onDialogClosed_dyn();

		void registerBehaviours();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs

#endif /* INCLUDED_haxe_ui_containers_dialogs_Dialog */ 
