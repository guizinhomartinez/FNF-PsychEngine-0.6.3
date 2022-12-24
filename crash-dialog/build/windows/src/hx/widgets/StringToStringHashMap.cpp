#include <hxcpp.h>

#ifndef INCLUDED_453869af60c07cda
#define INCLUDED_453869af60c07cda
#include "wx/hashmap.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_StringToStringHashMap
#include <hx/widgets/StringToStringHashMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4aa2668dbdeb2a47_11_new,"hx.widgets.StringToStringHashMap","new",0xa85bf3c6,"hx.widgets.StringToStringHashMap.new","hx/widgets/StringToStringHashMap.hx",11,0x37bd056c)
HX_LOCAL_STACK_FRAME(_hx_pos_4aa2668dbdeb2a47_16_get_size,"hx.widgets.StringToStringHashMap","get_size",0x4d0e2724,"hx.widgets.StringToStringHashMap.get_size","hx/widgets/StringToStringHashMap.hx",16,0x37bd056c)
HX_LOCAL_STACK_FRAME(_hx_pos_4aa2668dbdeb2a47_21_get_isEmpty,"hx.widgets.StringToStringHashMap","get_isEmpty",0x8fed37c0,"hx.widgets.StringToStringHashMap.get_isEmpty","hx/widgets/StringToStringHashMap.hx",21,0x37bd056c)
HX_LOCAL_STACK_FRAME(_hx_pos_4aa2668dbdeb2a47_25_clear,"hx.widgets.StringToStringHashMap","clear",0x1d3fba73,"hx.widgets.StringToStringHashMap.clear","hx/widgets/StringToStringHashMap.hx",25,0x37bd056c)
HX_LOCAL_STACK_FRAME(_hx_pos_4aa2668dbdeb2a47_28_set,"hx.widgets.StringToStringHashMap","set",0xa85fbf08,"hx.widgets.StringToStringHashMap.set","hx/widgets/StringToStringHashMap.hx",28,0x37bd056c)
HX_LOCAL_STACK_FRAME(_hx_pos_4aa2668dbdeb2a47_36_get,"hx.widgets.StringToStringHashMap","get",0xa856a3fc,"hx.widgets.StringToStringHashMap.get","hx/widgets/StringToStringHashMap.hx",36,0x37bd056c)
namespace hx{
namespace widgets{

void StringToStringHashMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4aa2668dbdeb2a47_11_new)
HXDLIN(  11)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxStringToStringHashMap()));
            	}

Dynamic StringToStringHashMap_obj::__CreateEmpty() { return new StringToStringHashMap_obj; }

void *StringToStringHashMap_obj::_hx_vtable = 0;

Dynamic StringToStringHashMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringToStringHashMap_obj > _hx_result = new StringToStringHashMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringToStringHashMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e998016;
}

int StringToStringHashMap_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_4aa2668dbdeb2a47_16_get_size)
HXDLIN(  16)		return this->_ref->ptr->size();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringToStringHashMap_obj,get_size,return )

bool StringToStringHashMap_obj::get_isEmpty(){
            	HX_STACKFRAME(&_hx_pos_4aa2668dbdeb2a47_21_get_isEmpty)
HXDLIN(  21)		return this->_ref->ptr->empty();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringToStringHashMap_obj,get_isEmpty,return )

void StringToStringHashMap_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_4aa2668dbdeb2a47_25_clear)
HXDLIN(  25)		this->_ref->ptr->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringToStringHashMap_obj,clear,(void))

void StringToStringHashMap_obj::set(::String key,::String value){
            	HX_STACKFRAME(&_hx_pos_4aa2668dbdeb2a47_28_set)
HXLINE(  29)		const char* this1 = key.utf8_str();
HXDLIN(  29)		::cpp::Pointer<  wxString > k = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  30)		const char* this2 = value.utf8_str();
HXDLIN(  30)		::cpp::Pointer<  wxString > v = ::cpp::Pointer_obj::fromRaw((new wxString(this2)));
HXLINE(  31)		{
HXLINE(  31)			 wxStringToStringHashMap * _this = this->_ref->ptr;
HXDLIN(  31)			 wxString key1 = k->get_ref();
HXDLIN(  31)			 wxString value1 = v->get_ref();
HXDLIN(  31)			(*(_this))[key1] = value1;
            		}
HXLINE(  32)		k->destroy();
HXLINE(  33)		v->destroy();
            	}


HX_DEFINE_DYNAMIC_FUNC2(StringToStringHashMap_obj,set,(void))

::String StringToStringHashMap_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_4aa2668dbdeb2a47_36_get)
HXLINE(  37)		const char* this1 = key.utf8_str();
HXDLIN(  37)		::cpp::Pointer<  wxString > k = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  38)		 wxStringToStringHashMap * _this = this->_ref->ptr;
HXDLIN(  38)		 wxString key1 = k->get_ref();
HXDLIN(  38)		 wxString v = (*(_this))[key1];
HXLINE(  39)		::String r = ::String(::String(v.ToUTF8().data()));
HXLINE(  40)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringToStringHashMap_obj,get,return )


::hx::ObjectPtr< StringToStringHashMap_obj > StringToStringHashMap_obj::__new() {
	::hx::ObjectPtr< StringToStringHashMap_obj > __this = new StringToStringHashMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StringToStringHashMap_obj > StringToStringHashMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StringToStringHashMap_obj *__this = (StringToStringHashMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringToStringHashMap_obj), true, "hx.widgets.StringToStringHashMap"));
	*(void **)__this = StringToStringHashMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StringToStringHashMap_obj::StringToStringHashMap_obj()
{
}

void StringToStringHashMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringToStringHashMap);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(isEmpty,"isEmpty");
	HX_MARK_END_CLASS();
}

void StringToStringHashMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(isEmpty,"isEmpty");
}

::hx::Val StringToStringHashMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_size() : size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isEmpty() : isEmpty ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return ::hx::Val( get_isEmpty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringToStringHashMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxStringToStringHashMap > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { isEmpty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringToStringHashMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("isEmpty",43,de,5f,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringToStringHashMap_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStringToStringHashMap > */ ,(int)offsetof(StringToStringHashMap_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsInt,(int)offsetof(StringToStringHashMap_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsBool,(int)offsetof(StringToStringHashMap_obj,isEmpty),HX_("isEmpty",43,de,5f,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringToStringHashMap_obj_sStaticStorageInfo = 0;
#endif

static ::String StringToStringHashMap_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("size",c1,a0,53,4c),
	HX_("get_size",4a,5c,0e,cc),
	HX_("isEmpty",43,de,5f,0c),
	HX_("get_isEmpty",5a,3e,5a,92),
	HX_("clear",8d,71,5b,48),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class StringToStringHashMap_obj::__mClass;

void StringToStringHashMap_obj::__register()
{
	StringToStringHashMap_obj _hx_dummy;
	StringToStringHashMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StringToStringHashMap",d4,58,21,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringToStringHashMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringToStringHashMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringToStringHashMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringToStringHashMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
