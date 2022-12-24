#include <hxcpp.h>

#ifndef INCLUDED_d17caf3128e9a450
#define INCLUDED_d17caf3128e9a450
#include "wx/arrstr.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_ArrayString
#include <hx/widgets/ArrayString.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f285829aa89858e7_13_new,"hx.widgets.ArrayString","new",0x802b377f,"hx.widgets.ArrayString.new","hx/widgets/ArrayString.hx",13,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_16_destroy,"hx.widgets.ArrayString","destroy",0xfb090f99,"hx.widgets.ArrayString.destroy","hx/widgets/ArrayString.hx",16,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_24_add,"hx.widgets.ArrayString","add",0x80215940,"hx.widgets.ArrayString.add","hx/widgets/ArrayString.hx",24,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_31_item,"hx.widgets.ArrayString","item",0xa2629914,"hx.widgets.ArrayString.item","hx/widgets/ArrayString.hx",31,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_38_get_count,"hx.widgets.ArrayString","get_count",0x3504a985,"hx.widgets.ArrayString.get_count","hx/widgets/ArrayString.hx",38,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_57_toArray,"hx.widgets.ArrayString","toArray",0xc8969cbd,"hx.widgets.ArrayString.toArray","hx/widgets/ArrayString.hx",57,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_71_get_arraystringRef,"hx.widgets.ArrayString","get_arraystringRef",0x9edcecd3,"hx.widgets.ArrayString.get_arraystringRef","hx/widgets/ArrayString.hx",71,0x6ab4e553)
HX_LOCAL_STACK_FRAME(_hx_pos_f285829aa89858e7_45_fromArray,"hx.widgets.ArrayString","fromArray",0x8110602e,"hx.widgets.ArrayString.fromArray","hx/widgets/ArrayString.hx",45,0x6ab4e553)
namespace hx{
namespace widgets{

void ArrayString_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_13_new)
HXDLIN(  13)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxArrayString()))->reinterpret();
            	}

Dynamic ArrayString_obj::__CreateEmpty() { return new ArrayString_obj; }

void *ArrayString_obj::_hx_vtable = 0;

Dynamic ArrayString_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayString_obj > _hx_result = new ArrayString_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayString_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x26cac797;
}

void ArrayString_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_16_destroy)
HXLINE(  17)		this->_ref->destroy();
HXLINE(  18)		this->_ref = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayString_obj,destroy,(void))

int ArrayString_obj::add(::String str){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_24_add)
HXLINE(  25)		const char* this1 = str.utf8_str();
HXDLIN(  25)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  26)		 wxArrayString * n = this->get_arraystringRef()->ptr;
HXDLIN(  26)		int n1 = (*(n)).Add(s->get_ref());
HXLINE(  27)		s->destroy();
HXLINE(  28)		return n1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayString_obj,add,return )

::String ArrayString_obj::item(int index){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_31_item)
HXLINE(  32)		 wxString s = this->get_arraystringRef()->ptr->Item(index);
HXLINE(  33)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayString_obj,item,return )

int ArrayString_obj::get_count(){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_38_get_count)
HXDLIN(  38)		return this->get_arraystringRef()->ptr->GetCount();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayString_obj,get_count,return )

::Array< ::String > ArrayString_obj::toArray(){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_57_toArray)
HXLINE(  58)		::Array< ::String > r = ::Array_obj< ::String >::__new(0);
HXLINE(  59)		int n = this->get_count();
HXLINE(  60)		if ((n > 0)) {
HXLINE(  61)			int _g = 0;
HXDLIN(  61)			int _g1 = n;
HXDLIN(  61)			while((_g < _g1)){
HXLINE(  61)				_g = (_g + 1);
HXDLIN(  61)				int i = (_g - 1);
HXLINE(  62)				::String s = this->item(i);
HXLINE(  63)				r->push(s);
            			}
            		}
HXLINE(  66)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayString_obj,toArray,return )

::cpp::Pointer<  wxArrayString > ArrayString_obj::get_arraystringRef(){
            	HX_STACKFRAME(&_hx_pos_f285829aa89858e7_71_get_arraystringRef)
HXDLIN(  71)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayString_obj,get_arraystringRef,return )

 ::hx::widgets::ArrayString ArrayString_obj::fromArray(::Array< ::String > arr){
            	HX_GC_STACKFRAME(&_hx_pos_f285829aa89858e7_45_fromArray)
HXLINE(  46)		 ::hx::widgets::ArrayString a =  ::hx::widgets::ArrayString_obj::__alloc( HX_CTX );
HXLINE(  47)		{
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			while((_g < arr->length)){
HXLINE(  47)				::String item = arr->__get(_g);
HXDLIN(  47)				_g = (_g + 1);
HXLINE(  48)				a->add(item);
            			}
            		}
HXLINE(  50)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayString_obj,fromArray,return )


::hx::ObjectPtr< ArrayString_obj > ArrayString_obj::__new() {
	::hx::ObjectPtr< ArrayString_obj > __this = new ArrayString_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ArrayString_obj > ArrayString_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ArrayString_obj *__this = (ArrayString_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayString_obj), true, "hx.widgets.ArrayString"));
	*(void **)__this = ArrayString_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ArrayString_obj::ArrayString_obj()
{
}

void ArrayString_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayString);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(arraystringRef,"arraystringRef");
	HX_MARK_END_CLASS();
}

void ArrayString_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(arraystringRef,"arraystringRef");
}

::hx::Val ArrayString_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		if (HX_FIELD_EQ(inName,"item") ) { return ::hx::Val( item_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_count() : count ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return ::hx::Val( toArray_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_count") ) { return ::hx::Val( get_count_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"arraystringRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_arraystringRef() : arraystringRef ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_arraystringRef") ) { return ::hx::Val( get_arraystringRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArrayString_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true; }
	}
	return false;
}

::hx::Val ArrayString_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxArrayString > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"arraystringRef") ) { arraystringRef=inValue.Cast< ::cpp::Pointer<  wxArrayString > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayString_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("count",cf,44,63,4a));
	outFields->push(HX_("arraystringRef",49,98,d9,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayString_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxArrayString > */ ,(int)offsetof(ArrayString_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsInt,(int)offsetof(ArrayString_obj,count),HX_("count",cf,44,63,4a)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxArrayString > */ ,(int)offsetof(ArrayString_obj,arraystringRef),HX_("arraystringRef",49,98,d9,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayString_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayString_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("destroy",fa,2c,86,24),
	HX_("add",21,f2,49,00),
	HX_("item",13,c5,bf,45),
	HX_("count",cf,44,63,4a),
	HX_("get_count",26,a1,0c,8e),
	HX_("toArray",1e,ba,13,f2),
	HX_("arraystringRef",49,98,d9,99),
	HX_("get_arraystringRef",12,79,73,35),
	::String(null()) };

::hx::Class ArrayString_obj::__mClass;

static ::String ArrayString_obj_sStaticFields[] = {
	HX_("fromArray",cf,57,18,da),
	::String(null())
};

void ArrayString_obj::__register()
{
	ArrayString_obj _hx_dummy;
	ArrayString_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ArrayString",0d,0c,44,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayString_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayString_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayString_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayString_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayString_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayString_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
