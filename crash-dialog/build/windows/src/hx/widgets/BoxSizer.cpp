#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_3f256efeda3a1a55
#define INCLUDED_3f256efeda3a1a55
#include "wx/sizer.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f6e6a9f5c5d39f9b_7_new,"hx.widgets.BoxSizer","new",0x6b39b055,"hx.widgets.BoxSizer.new","hx/widgets/BoxSizer.hx",7,0xb8b182f9)
namespace hx{
namespace widgets{

void BoxSizer_obj::__construct( cpp::Struct<wxOrientation, cpp::EnumHandler> orient){
            	HX_STACKFRAME(&_hx_pos_f6e6a9f5c5d39f9b_7_new)
HXLINE(   8)		if (::hx::IsNull( this->_ref )) {
HXLINE(   9)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxBoxSizer(orient)))->reinterpret();
            		}
HXLINE(  12)		super::__construct();
            	}

Dynamic BoxSizer_obj::__CreateEmpty() { return new BoxSizer_obj; }

void *BoxSizer_obj::_hx_vtable = 0;

Dynamic BoxSizer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BoxSizer_obj > _hx_result = new BoxSizer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BoxSizer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x56489aba) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x56489aba;
		}
	} else {
		return inClassId==(int)0x7a9a47c5;
	}
}


::hx::ObjectPtr< BoxSizer_obj > BoxSizer_obj::__new( cpp::Struct<wxOrientation, cpp::EnumHandler> orient) {
	::hx::ObjectPtr< BoxSizer_obj > __this = new BoxSizer_obj();
	__this->__construct(orient);
	return __this;
}

::hx::ObjectPtr< BoxSizer_obj > BoxSizer_obj::__alloc(::hx::Ctx *_hx_ctx, cpp::Struct<wxOrientation, cpp::EnumHandler> orient) {
	BoxSizer_obj *__this = (BoxSizer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BoxSizer_obj), true, "hx.widgets.BoxSizer"));
	*(void **)__this = BoxSizer_obj::_hx_vtable;
	__this->__construct(orient);
	return __this;
}

BoxSizer_obj::BoxSizer_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BoxSizer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BoxSizer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class BoxSizer_obj::__mClass;

void BoxSizer_obj::__register()
{
	BoxSizer_obj _hx_dummy;
	BoxSizer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.BoxSizer",e3,e1,83,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BoxSizer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BoxSizer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BoxSizer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
