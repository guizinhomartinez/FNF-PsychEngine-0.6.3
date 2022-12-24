#ifndef INCLUDED_hx_widgets_Validator
#define INCLUDED_hx_widgets_Validator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_042e2541d3faf743
#define INCLUDED_042e2541d3faf743
#include "wx/validate.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Validator)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Validator_obj : public  ::hx::widgets::EvtHandler_obj
{
	public:
		typedef  ::hx::widgets::EvtHandler_obj super;
		typedef Validator_obj OBJ_;
		Validator_obj();

	public:
		enum { _hx_ClassId = 0x0ddafdb3 };

		void __construct(::hx::Null< bool >  __o_create);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Validator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.Validator"); }
		static ::hx::ObjectPtr< Validator_obj > __new(::hx::Null< bool >  __o_create);
		static ::hx::ObjectPtr< Validator_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_create);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Validator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Validator",b2,9b,45,e4); }

		::cpp::Pointer<  wxValidator > validatorRef;
		::cpp::Pointer<  wxValidator > get_validatorRef();
		::Dynamic get_validatorRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Validator */ 
