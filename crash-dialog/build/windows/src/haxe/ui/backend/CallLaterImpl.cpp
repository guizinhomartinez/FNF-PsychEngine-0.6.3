#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_CallLaterImpl
#include <haxe/ui/backend/CallLaterImpl.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba418526ce7b3618_11_new,"haxe.ui.backend.CallLaterImpl","new",0xecae2eb4,"haxe.ui.backend.CallLaterImpl.new","haxe/ui/backend/CallLaterImpl.hx",11,0xcf690bdd)
namespace haxe{
namespace ui{
namespace backend{

void CallLaterImpl_obj::__construct( ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_ba418526ce7b3618_11_new)
HXLINE(  12)		 ::Dynamic t = null();
HXLINE(  19)		fn();
            	}

Dynamic CallLaterImpl_obj::__CreateEmpty() { return new CallLaterImpl_obj; }

void *CallLaterImpl_obj::_hx_vtable = 0;

Dynamic CallLaterImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallLaterImpl_obj > _hx_result = new CallLaterImpl_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CallLaterImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b00791c;
}


CallLaterImpl_obj::CallLaterImpl_obj()
{
}

void CallLaterImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CallLaterImpl);
	HX_MARK_MEMBER_NAME(_fn,"_fn");
	HX_MARK_END_CLASS();
}

void CallLaterImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fn,"_fn");
}

::hx::Val CallLaterImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { return ::hx::Val( _fn ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CallLaterImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { _fn=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CallLaterImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CallLaterImpl_obj,_fn),HX_("_fn",67,6f,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CallLaterImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String CallLaterImpl_obj_sMemberFields[] = {
	HX_("_fn",67,6f,48,00),
	::String(null()) };

::hx::Class CallLaterImpl_obj::__mClass;

void CallLaterImpl_obj::__register()
{
	CallLaterImpl_obj _hx_dummy;
	CallLaterImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.CallLaterImpl",c2,04,e4,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CallLaterImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CallLaterImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallLaterImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallLaterImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
