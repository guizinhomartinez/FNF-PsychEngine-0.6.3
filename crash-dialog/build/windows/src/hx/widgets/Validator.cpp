#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_042e2541d3faf743
#define INCLUDED_042e2541d3faf743
#include "wx/validate.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5a012f9e40b7dd4b_7_new,"hx.widgets.Validator","new",0x42cfed47,"hx.widgets.Validator.new","hx/widgets/Validator.hx",7,0x5b057c0b)
HX_LOCAL_STACK_FRAME(_hx_pos_5a012f9e40b7dd4b_20_get_validatorRef,"hx.widgets.Validator","get_validatorRef",0xfae90fe3,"hx.widgets.Validator.get_validatorRef","hx/widgets/Validator.hx",20,0x5b057c0b)
namespace hx{
namespace widgets{

void Validator_obj::__construct(::hx::Null< bool >  __o_create){
            		bool create = __o_create.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a012f9e40b7dd4b_7_new)
HXLINE(   8)		bool _hx_tmp;
HXDLIN(   8)		if ((create == true)) {
HXLINE(   8)			_hx_tmp = ::hx::IsNull( this->_ref );
            		}
            		else {
HXLINE(   8)			_hx_tmp = false;
            		}
HXDLIN(   8)		if (_hx_tmp) {
HXLINE(   9)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxValidator()))->reinterpret();
            		}
HXLINE(  12)		super::__construct();
            	}

Dynamic Validator_obj::__CreateEmpty() { return new Validator_obj; }

void *Validator_obj::_hx_vtable = 0;

Dynamic Validator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Validator_obj > _hx_result = new Validator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Validator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0ddafdb3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0ddafdb3;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226;
	}
}

::cpp::Pointer<  wxValidator > Validator_obj::get_validatorRef(){
            	HX_STACKFRAME(&_hx_pos_5a012f9e40b7dd4b_20_get_validatorRef)
HXDLIN(  20)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Validator_obj,get_validatorRef,return )


::hx::ObjectPtr< Validator_obj > Validator_obj::__new(::hx::Null< bool >  __o_create) {
	::hx::ObjectPtr< Validator_obj > __this = new Validator_obj();
	__this->__construct(__o_create);
	return __this;
}

::hx::ObjectPtr< Validator_obj > Validator_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_create) {
	Validator_obj *__this = (Validator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Validator_obj), true, "hx.widgets.Validator"));
	*(void **)__this = Validator_obj::_hx_vtable;
	__this->__construct(__o_create);
	return __this;
}

Validator_obj::Validator_obj()
{
}

void Validator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Validator);
	HX_MARK_MEMBER_NAME(validatorRef,"validatorRef");
	 ::hx::widgets::EvtHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Validator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(validatorRef,"validatorRef");
	 ::hx::widgets::EvtHandler_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Validator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validatorRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_validatorRef() : validatorRef ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_validatorRef") ) { return ::hx::Val( get_validatorRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Validator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validatorRef") ) { validatorRef=inValue.Cast< ::cpp::Pointer<  wxValidator > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Validator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("validatorRef",a1,84,c1,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Validator_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxValidator > */ ,(int)offsetof(Validator_obj,validatorRef),HX_("validatorRef",a1,84,c1,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Validator_obj_sStaticStorageInfo = 0;
#endif

static ::String Validator_obj_sMemberFields[] = {
	HX_("validatorRef",a1,84,c1,76),
	HX_("get_validatorRef",2a,71,60,7b),
	::String(null()) };

::hx::Class Validator_obj::__mClass;

void Validator_obj::__register()
{
	Validator_obj _hx_dummy;
	Validator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Validator",d5,3d,58,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Validator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Validator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Validator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Validator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
