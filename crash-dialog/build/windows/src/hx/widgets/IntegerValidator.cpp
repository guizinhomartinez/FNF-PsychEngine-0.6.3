#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_IntegerValidator
#include <hx/widgets/IntegerValidator.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Validator
#include <hx/widgets/Validator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_532f4b56e7387f30_11_new,"hx.widgets.IntegerValidator","new",0x15180803,"hx.widgets.IntegerValidator.new","hx/widgets/IntegerValidator.hx",11,0x550da90b)
HX_LOCAL_STACK_FRAME(_hx_pos_532f4b56e7387f30_20_set_min,"hx.widgets.IntegerValidator","set_min",0xc4c5b058,"hx.widgets.IntegerValidator.set_min","hx/widgets/IntegerValidator.hx",20,0x550da90b)
HX_LOCAL_STACK_FRAME(_hx_pos_532f4b56e7387f30_26_set_max,"hx.widgets.IntegerValidator","set_max",0xc4c5a96a,"hx.widgets.IntegerValidator.set_max","hx/widgets/IntegerValidator.hx",26,0x550da90b)
HX_LOCAL_STACK_FRAME(_hx_pos_532f4b56e7387f30_36_get_integerValidatorRef,"hx.widgets.IntegerValidator","get_integerValidatorRef",0xfe35d539,"hx.widgets.IntegerValidator.get_integerValidatorRef","hx/widgets/IntegerValidator.hx",36,0x550da90b)
namespace hx{
namespace widgets{

void IntegerValidator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_532f4b56e7387f30_11_new)
HXLINE(  12)		if (::hx::IsNull( this->_ref )) {
HXLINE(  13)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxIntegerValidator<int>()))->reinterpret();
            		}
HXLINE(  16)		super::__construct(null());
            	}

Dynamic IntegerValidator_obj::__CreateEmpty() { return new IntegerValidator_obj; }

void *IntegerValidator_obj::_hx_vtable = 0;

Dynamic IntegerValidator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IntegerValidator_obj > _hx_result = new IntegerValidator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IntegerValidator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0ddafdb3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0ddafdb3;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x49776273;
	}
}

int IntegerValidator_obj::set_min(int value){
            	HX_STACKFRAME(&_hx_pos_532f4b56e7387f30_20_set_min)
HXLINE(  21)		this->get_integerValidatorRef()->ptr->SetMin(value);
HXLINE(  22)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntegerValidator_obj,set_min,return )

int IntegerValidator_obj::set_max(int value){
            	HX_STACKFRAME(&_hx_pos_532f4b56e7387f30_26_set_max)
HXLINE(  27)		this->get_integerValidatorRef()->ptr->SetMax(value);
HXLINE(  28)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntegerValidator_obj,set_max,return )

::cpp::Pointer<  wxIntegerValidator<int> > IntegerValidator_obj::get_integerValidatorRef(){
            	HX_STACKFRAME(&_hx_pos_532f4b56e7387f30_36_get_integerValidatorRef)
HXDLIN(  36)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntegerValidator_obj,get_integerValidatorRef,return )


::hx::ObjectPtr< IntegerValidator_obj > IntegerValidator_obj::__new() {
	::hx::ObjectPtr< IntegerValidator_obj > __this = new IntegerValidator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< IntegerValidator_obj > IntegerValidator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	IntegerValidator_obj *__this = (IntegerValidator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IntegerValidator_obj), true, "hx.widgets.IntegerValidator"));
	*(void **)__this = IntegerValidator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

IntegerValidator_obj::IntegerValidator_obj()
{
}

void IntegerValidator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntegerValidator);
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(integerValidatorRef,"integerValidatorRef");
	 ::hx::widgets::Validator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IntegerValidator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(integerValidatorRef,"integerValidatorRef");
	 ::hx::widgets::Validator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val IntegerValidator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return ::hx::Val( min ); }
		if (HX_FIELD_EQ(inName,"max") ) { return ::hx::Val( max ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_min") ) { return ::hx::Val( set_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return ::hx::Val( set_max_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"integerValidatorRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_integerValidatorRef() : integerValidatorRef ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_integerValidatorRef") ) { return ::hx::Val( get_integerValidatorRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IntegerValidator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_min(inValue.Cast< int >()) );min=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_max(inValue.Cast< int >()) );max=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"integerValidatorRef") ) { integerValidatorRef=inValue.Cast< ::cpp::Pointer<  wxIntegerValidator<int> > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntegerValidator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("integerValidatorRef",7f,33,f4,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IntegerValidator_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(IntegerValidator_obj,min),HX_("min",92,11,53,00)},
	{::hx::fsInt,(int)offsetof(IntegerValidator_obj,max),HX_("max",a4,0a,53,00)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxIntegerValidator<int> > */ ,(int)offsetof(IntegerValidator_obj,integerValidatorRef),HX_("integerValidatorRef",7f,33,f4,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IntegerValidator_obj_sStaticStorageInfo = 0;
#endif

static ::String IntegerValidator_obj_sMemberFields[] = {
	HX_("min",92,11,53,00),
	HX_("set_min",35,6b,c9,19),
	HX_("max",a4,0a,53,00),
	HX_("set_max",47,64,c9,19),
	HX_("integerValidatorRef",7f,33,f4,f3),
	HX_("get_integerValidatorRef",16,da,49,fc),
	::String(null()) };

::hx::Class IntegerValidator_obj::__mClass;

void IntegerValidator_obj::__register()
{
	IntegerValidator_obj _hx_dummy;
	IntegerValidator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.IntegerValidator",91,4a,d5,c3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IntegerValidator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IntegerValidator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntegerValidator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntegerValidator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
