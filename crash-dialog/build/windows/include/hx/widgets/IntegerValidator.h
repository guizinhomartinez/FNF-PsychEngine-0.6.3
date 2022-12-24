#ifndef INCLUDED_hx_widgets_IntegerValidator
#define INCLUDED_hx_widgets_IntegerValidator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Validator
#include <hx/widgets/Validator.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,IntegerValidator)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Validator)


#include <wx/event.h>
#include <wx/valnum.h>

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES IntegerValidator_obj : public  ::hx::widgets::Validator_obj
{
	public:
		typedef  ::hx::widgets::Validator_obj super;
		typedef IntegerValidator_obj OBJ_;
		IntegerValidator_obj();

	public:
		enum { _hx_ClassId = 0x49776273 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.IntegerValidator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.IntegerValidator"); }
		static ::hx::ObjectPtr< IntegerValidator_obj > __new();
		static ::hx::ObjectPtr< IntegerValidator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IntegerValidator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IntegerValidator",54,12,8a,5d); }

		int min;
		int set_min(int value);
		::Dynamic set_min_dyn();

		int max;
		int set_max(int value);
		::Dynamic set_max_dyn();

		::cpp::Pointer<  wxIntegerValidator<int> > integerValidatorRef;
		::cpp::Pointer<  wxIntegerValidator<int> > get_integerValidatorRef();
		::Dynamic get_integerValidatorRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_IntegerValidator */ 
