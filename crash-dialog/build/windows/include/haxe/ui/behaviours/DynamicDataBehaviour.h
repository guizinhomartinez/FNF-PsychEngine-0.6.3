#ifndef INCLUDED_haxe_ui_behaviours_DynamicDataBehaviour
#define INCLUDED_haxe_ui_behaviours_DynamicDataBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_DynamicBehaviour
#include <haxe/ui/behaviours/DynamicBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,DynamicBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,DynamicDataBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,IValidatingBehaviour)
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
namespace behaviours{


class HXCPP_CLASS_ATTRIBUTES DynamicDataBehaviour_obj : public  ::haxe::ui::behaviours::DynamicBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DynamicBehaviour_obj super;
		typedef DynamicDataBehaviour_obj OBJ_;
		DynamicDataBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x03c21548 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.behaviours.DynamicDataBehaviour")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.behaviours.DynamicDataBehaviour"); }
		static ::hx::ObjectPtr< DynamicDataBehaviour_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< DynamicDataBehaviour_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DynamicDataBehaviour_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("DynamicDataBehaviour",d4,7f,23,d8); }

		bool _dataInvalid;
		virtual void setDynamic( ::Dynamic value);

		void validate();
		::Dynamic validate_dyn();

		void invalidateData();
		::Dynamic invalidateData_dyn();

		virtual void validateData();
		::Dynamic validateData_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours

#endif /* INCLUDED_haxe_ui_behaviours_DynamicDataBehaviour */ 
