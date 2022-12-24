#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_DialogCreator
#define INCLUDED_haxe_ui_backend_hxwidgets_creators_DialogCreator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,DialogBase)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,creators,Creator)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,creators,DialogCreator)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,Dialog)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{


class HXCPP_CLASS_ATTRIBUTES DialogCreator_obj : public  ::haxe::ui::backend::hxwidgets::creators::Creator_obj
{
	public:
		typedef  ::haxe::ui::backend::hxwidgets::creators::Creator_obj super;
		typedef DialogCreator_obj OBJ_;
		DialogCreator_obj();

	public:
		enum { _hx_ClassId = 0x1a6cee98 };

		void __construct( ::haxe::ui::containers::dialogs::Dialog dialog);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.creators.DialogCreator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.creators.DialogCreator"); }
		static ::hx::ObjectPtr< DialogCreator_obj > __new( ::haxe::ui::containers::dialogs::Dialog dialog);
		static ::hx::ObjectPtr< DialogCreator_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::dialogs::Dialog dialog);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DialogCreator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DialogCreator",a4,da,0a,cb); }

		 ::haxe::ui::containers::dialogs::Dialog _dialog;
		::cpp::VirtualArray createConstructorParams(::cpp::VirtualArray params);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_creators_DialogCreator */ 
