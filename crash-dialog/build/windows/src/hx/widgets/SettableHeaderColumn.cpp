#include <hxcpp.h>

#ifndef INCLUDED_b4548bb3748a21b1
#define INCLUDED_b4548bb3748a21b1
#include "wx/headercol.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_HeaderColumn
#include <hx/widgets/HeaderColumn.h>
#endif
#ifndef INCLUDED_hx_widgets_SettableHeaderColumn
#include <hx/widgets/SettableHeaderColumn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfdcff6a04f31103_7_new,"hx.widgets.SettableHeaderColumn","new",0x5dea515e,"hx.widgets.SettableHeaderColumn.new","hx/widgets/SettableHeaderColumn.hx",7,0x0d82fb10)
HX_LOCAL_STACK_FRAME(_hx_pos_bfdcff6a04f31103_8_set_title,"hx.widgets.SettableHeaderColumn","set_title",0xe6f7b179,"hx.widgets.SettableHeaderColumn.set_title","hx/widgets/SettableHeaderColumn.hx",8,0x0d82fb10)
HX_LOCAL_STACK_FRAME(_hx_pos_bfdcff6a04f31103_14_set_width,"hx.widgets.SettableHeaderColumn","set_width",0xa11f51e7,"hx.widgets.SettableHeaderColumn.set_width","hx/widgets/SettableHeaderColumn.hx",14,0x0d82fb10)
HX_LOCAL_STACK_FRAME(_hx_pos_bfdcff6a04f31103_24_get_settableHeaderColumnRef,"hx.widgets.SettableHeaderColumn","get_settableHeaderColumnRef",0x34363a19,"hx.widgets.SettableHeaderColumn.get_settableHeaderColumnRef","hx/widgets/SettableHeaderColumn.hx",24,0x0d82fb10)
namespace hx{
namespace widgets{

void SettableHeaderColumn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bfdcff6a04f31103_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic SettableHeaderColumn_obj::__CreateEmpty() { return new SettableHeaderColumn_obj; }

void *SettableHeaderColumn_obj::_hx_vtable = 0;

Dynamic SettableHeaderColumn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SettableHeaderColumn_obj > _hx_result = new SettableHeaderColumn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SettableHeaderColumn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21841f1e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21841f1e;
	} else {
		return inClassId==(int)0x7b23bb4e;
	}
}

::String SettableHeaderColumn_obj::set_title(::String value){
            	HX_STACKFRAME(&_hx_pos_bfdcff6a04f31103_8_set_title)
HXLINE(   9)		const char* this1 = value.utf8_str();
HXDLIN(   9)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  10)		this->get_settableHeaderColumnRef()->ptr->SetTitle(s);
HXLINE(  11)		return value;
            	}


int SettableHeaderColumn_obj::set_width(int value){
            	HX_STACKFRAME(&_hx_pos_bfdcff6a04f31103_14_set_width)
HXLINE(  15)		this->get_settableHeaderColumnRef()->ptr->SetWidth(value);
HXLINE(  16)		return value;
            	}


::cpp::Pointer<  wxSettableHeaderColumn > SettableHeaderColumn_obj::get_settableHeaderColumnRef(){
            	HX_STACKFRAME(&_hx_pos_bfdcff6a04f31103_24_get_settableHeaderColumnRef)
HXDLIN(  24)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SettableHeaderColumn_obj,get_settableHeaderColumnRef,return )


::hx::ObjectPtr< SettableHeaderColumn_obj > SettableHeaderColumn_obj::__new() {
	::hx::ObjectPtr< SettableHeaderColumn_obj > __this = new SettableHeaderColumn_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SettableHeaderColumn_obj > SettableHeaderColumn_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SettableHeaderColumn_obj *__this = (SettableHeaderColumn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SettableHeaderColumn_obj), true, "hx.widgets.SettableHeaderColumn"));
	*(void **)__this = SettableHeaderColumn_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SettableHeaderColumn_obj::SettableHeaderColumn_obj()
{
}

void SettableHeaderColumn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SettableHeaderColumn);
	HX_MARK_MEMBER_NAME(settableHeaderColumnRef,"settableHeaderColumnRef");
	 ::hx::widgets::HeaderColumn_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SettableHeaderColumn_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(settableHeaderColumnRef,"settableHeaderColumnRef");
	 ::hx::widgets::HeaderColumn_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SettableHeaderColumn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"settableHeaderColumnRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_settableHeaderColumnRef() : settableHeaderColumnRef ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_settableHeaderColumnRef") ) { return ::hx::Val( get_settableHeaderColumnRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SettableHeaderColumn_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"settableHeaderColumnRef") ) { settableHeaderColumnRef=inValue.Cast< ::cpp::Pointer<  wxSettableHeaderColumn > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SettableHeaderColumn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("settableHeaderColumnRef",04,f1,50,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SettableHeaderColumn_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxSettableHeaderColumn > */ ,(int)offsetof(SettableHeaderColumn_obj,settableHeaderColumnRef),HX_("settableHeaderColumnRef",04,f1,50,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SettableHeaderColumn_obj_sStaticStorageInfo = 0;
#endif

static ::String SettableHeaderColumn_obj_sMemberFields[] = {
	HX_("set_title",fb,5d,35,37),
	HX_("set_width",69,fe,5c,f1),
	HX_("settableHeaderColumnRef",04,f1,50,e5),
	HX_("get_settableHeaderColumnRef",1b,2f,f3,b1),
	::String(null()) };

::hx::Class SettableHeaderColumn_obj::__mClass;

void SettableHeaderColumn_obj::__register()
{
	SettableHeaderColumn_obj _hx_dummy;
	SettableHeaderColumn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.SettableHeaderColumn",6c,0a,9b,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SettableHeaderColumn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SettableHeaderColumn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SettableHeaderColumn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SettableHeaderColumn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
