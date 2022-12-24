#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_EnumProperty
#include <hx/widgets/EnumProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_PGChoices
#include <hx/widgets/PGChoices.h>
#endif
#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da237d895f121f57_14_new,"hx.widgets.EnumProperty","new",0xa06b00c5,"hx.widgets.EnumProperty.new","hx/widgets/EnumProperty.hx",14,0xd8050789)
namespace hx{
namespace widgets{

void EnumProperty_obj::__construct(::String label,::String name,::Array< ::Dynamic> choices,::hx::Null< int >  __o_value){
            		int value = __o_value.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_da237d895f121f57_14_new)
HXLINE(  15)		 ::hx::widgets::PGChoices choices1 =  ::hx::widgets::PGChoices_obj::__alloc( HX_CTX ,choices);
HXLINE(  17)		const char* this1 = label.utf8_str();
HXDLIN(  17)		 wxString strLabel = wxString::FromUTF8(this1);
HXLINE(  18)		const char* this2 = name.utf8_str();
HXDLIN(  18)		 wxString strName = wxString::FromUTF8(this2);
HXLINE(  20)		::cpp::Pointer<  wxPGChoices > choicesRef = choices1->get_choicesRef();
HXLINE(  22)		::cpp::Pointer<  wxEnumProperty > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxEnumProperty(strLabel,strName,choicesRef->get_ref(),value)));
HXDLIN(  22)		this->_ref = _hx_tmp->reinterpret();
HXLINE(  24)		super::__construct();
            	}

Dynamic EnumProperty_obj::__CreateEmpty() { return new EnumProperty_obj; }

void *EnumProperty_obj::_hx_vtable = 0;

Dynamic EnumProperty_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EnumProperty_obj > _hx_result = new EnumProperty_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool EnumProperty_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5743f84b) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x5743f84b;
		}
	} else {
		return inClassId==(int)0x5a043935;
	}
}


::hx::ObjectPtr< EnumProperty_obj > EnumProperty_obj::__new(::String label,::String name,::Array< ::Dynamic> choices,::hx::Null< int >  __o_value) {
	::hx::ObjectPtr< EnumProperty_obj > __this = new EnumProperty_obj();
	__this->__construct(label,name,choices,__o_value);
	return __this;
}

::hx::ObjectPtr< EnumProperty_obj > EnumProperty_obj::__alloc(::hx::Ctx *_hx_ctx,::String label,::String name,::Array< ::Dynamic> choices,::hx::Null< int >  __o_value) {
	EnumProperty_obj *__this = (EnumProperty_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EnumProperty_obj), true, "hx.widgets.EnumProperty"));
	*(void **)__this = EnumProperty_obj::_hx_vtable;
	__this->__construct(label,name,choices,__o_value);
	return __this;
}

EnumProperty_obj::EnumProperty_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EnumProperty_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EnumProperty_obj_sStaticStorageInfo = 0;
#endif

::hx::Class EnumProperty_obj::__mClass;

void EnumProperty_obj::__register()
{
	EnumProperty_obj _hx_dummy;
	EnumProperty_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.EnumProperty",53,3a,c8,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EnumProperty_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EnumProperty_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EnumProperty_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
