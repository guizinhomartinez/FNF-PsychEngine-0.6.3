#include <hxcpp.h>

#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_PGChoices
#include <hx/widgets/PGChoices.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_80f3f684c123ae06_15_new,"hx.widgets.PGChoices","new",0x39cd5ed0,"hx.widgets.PGChoices.new","hx/widgets/PGChoices.hx",15,0x4f804ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_80f3f684c123ae06_32_add,"hx.widgets.PGChoices","add",0x39c38091,"hx.widgets.PGChoices.add","hx/widgets/PGChoices.hx",32,0x4f804ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_80f3f684c123ae06_42_get_choicesRef,"hx.widgets.PGChoices","get_choicesRef",0x92c64e5a,"hx.widgets.PGChoices.get_choicesRef","hx/widgets/PGChoices.hx",42,0x4f804ea2)
namespace hx{
namespace widgets{

void PGChoices_obj::__construct(::Array< ::Dynamic> items){
            	HX_STACKFRAME(&_hx_pos_80f3f684c123ae06_15_new)
HXLINE(  16)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxPGChoices()))->reinterpret();
HXLINE(  18)		if (::hx::IsNotNull( items )) {
HXLINE(  19)			int index = 0;
HXLINE(  20)			{
HXLINE(  20)				int _g = 0;
HXDLIN(  20)				while((_g < items->length)){
HXLINE(  20)					 ::Dynamic item = items->__get(_g);
HXDLIN(  20)					_g = (_g + 1);
HXLINE(  21)					::String s = ( (::String)(item->__Field(HX_("label",f4,0d,af,6f),::hx::paccDynamic)) );
HXLINE(  22)					 ::Dynamic v = item->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE(  23)					if (::hx::IsNull( v )) {
HXLINE(  24)						v = index;
            					}
HXLINE(  26)					index = (index + 1);
HXLINE(  27)					this->add(s,( (int)(v) ));
            				}
            			}
            		}
            	}

Dynamic PGChoices_obj::__CreateEmpty() { return new PGChoices_obj; }

void *PGChoices_obj::_hx_vtable = 0;

Dynamic PGChoices_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PGChoices_obj > _hx_result = new PGChoices_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PGChoices_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f3fc320;
}

void PGChoices_obj::add(::String label,int value){
            	HX_STACKFRAME(&_hx_pos_80f3f684c123ae06_32_add)
HXLINE(  33)		const char* this1 = label.utf8_str();
HXDLIN(  33)		 wxString strLabel = wxString::FromUTF8(this1);
HXLINE(  34)		this->get_choicesRef()->ptr->Add(strLabel,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(PGChoices_obj,add,(void))

::cpp::Pointer<  wxPGChoices > PGChoices_obj::get_choicesRef(){
            	HX_STACKFRAME(&_hx_pos_80f3f684c123ae06_42_get_choicesRef)
HXDLIN(  42)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PGChoices_obj,get_choicesRef,return )


::hx::ObjectPtr< PGChoices_obj > PGChoices_obj::__new(::Array< ::Dynamic> items) {
	::hx::ObjectPtr< PGChoices_obj > __this = new PGChoices_obj();
	__this->__construct(items);
	return __this;
}

::hx::ObjectPtr< PGChoices_obj > PGChoices_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> items) {
	PGChoices_obj *__this = (PGChoices_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PGChoices_obj), true, "hx.widgets.PGChoices"));
	*(void **)__this = PGChoices_obj::_hx_vtable;
	__this->__construct(items);
	return __this;
}

PGChoices_obj::PGChoices_obj()
{
}

void PGChoices_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PGChoices);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(choicesRef,"choicesRef");
	HX_MARK_END_CLASS();
}

void PGChoices_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(choicesRef,"choicesRef");
}

::hx::Val PGChoices_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"choicesRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_choicesRef() : choicesRef ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_choicesRef") ) { return ::hx::Val( get_choicesRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PGChoices_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxPGChoices > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"choicesRef") ) { choicesRef=inValue.Cast< ::cpp::Pointer<  wxPGChoices > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PGChoices_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("choicesRef",81,9e,1b,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PGChoices_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxPGChoices > */ ,(int)offsetof(PGChoices_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxPGChoices > */ ,(int)offsetof(PGChoices_obj,choicesRef),HX_("choicesRef",81,9e,1b,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PGChoices_obj_sStaticStorageInfo = 0;
#endif

static ::String PGChoices_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("add",21,f2,49,00),
	HX_("choicesRef",81,9e,1b,f3),
	HX_("get_choicesRef",ca,26,11,69),
	::String(null()) };

::hx::Class PGChoices_obj::__mClass;

void PGChoices_obj::__register()
{
	PGChoices_obj _hx_dummy;
	PGChoices_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.PGChoices",de,f6,e9,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PGChoices_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PGChoices_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PGChoices_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PGChoices_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
