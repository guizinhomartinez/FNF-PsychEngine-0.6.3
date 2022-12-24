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
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_PropertyCategory
#include <hx/widgets/PropertyCategory.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_653b61767027eb0b_8_new,"hx.widgets.PropertyCategory","new",0xe5f069c2,"hx.widgets.PropertyCategory.new","hx/widgets/PropertyCategory.hx",8,0xa8a5042c)
HX_LOCAL_STACK_FRAME(_hx_pos_653b61767027eb0b_23_get_propertyCategoryRef,"hx.widgets.PropertyCategory","get_propertyCategoryRef",0x9f5d8b99,"hx.widgets.PropertyCategory.get_propertyCategoryRef","hx/widgets/PropertyCategory.hx",23,0xa8a5042c)
namespace hx{
namespace widgets{

void PropertyCategory_obj::__construct(::String label,::String name){
            	HX_STACKFRAME(&_hx_pos_653b61767027eb0b_8_new)
HXLINE(   9)		const char* this1 = label.utf8_str();
HXDLIN(   9)		 wxString strLabel = wxString::FromUTF8(this1);
HXLINE(  10)		const char* this2 = name.utf8_str();
HXDLIN(  10)		 wxString strName = wxString::FromUTF8(this2);
HXLINE(  12)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxPropertyCategory(strLabel,strName)))->reinterpret();
HXLINE(  14)		super::__construct();
            	}

Dynamic PropertyCategory_obj::__CreateEmpty() { return new PropertyCategory_obj; }

void *PropertyCategory_obj::_hx_vtable = 0;

Dynamic PropertyCategory_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyCategory_obj > _hx_result = new PropertyCategory_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PropertyCategory_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20ee38b2) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x20ee38b2;
		}
	} else {
		return inClassId==(int)0x5743f84b;
	}
}

::cpp::Pointer<  ::hx::widgets::PropertyCategory > PropertyCategory_obj::get_propertyCategoryRef(){
            	HX_STACKFRAME(&_hx_pos_653b61767027eb0b_23_get_propertyCategoryRef)
HXDLIN(  23)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PropertyCategory_obj,get_propertyCategoryRef,return )


::hx::ObjectPtr< PropertyCategory_obj > PropertyCategory_obj::__new(::String label,::String name) {
	::hx::ObjectPtr< PropertyCategory_obj > __this = new PropertyCategory_obj();
	__this->__construct(label,name);
	return __this;
}

::hx::ObjectPtr< PropertyCategory_obj > PropertyCategory_obj::__alloc(::hx::Ctx *_hx_ctx,::String label,::String name) {
	PropertyCategory_obj *__this = (PropertyCategory_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyCategory_obj), true, "hx.widgets.PropertyCategory"));
	*(void **)__this = PropertyCategory_obj::_hx_vtable;
	__this->__construct(label,name);
	return __this;
}

PropertyCategory_obj::PropertyCategory_obj()
{
}

void PropertyCategory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyCategory);
	HX_MARK_MEMBER_NAME(propertyCategoryRef,"propertyCategoryRef");
	 ::hx::widgets::PGProperty_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PropertyCategory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(propertyCategoryRef,"propertyCategoryRef");
	 ::hx::widgets::PGProperty_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PropertyCategory_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"propertyCategoryRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_propertyCategoryRef() : propertyCategoryRef ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_propertyCategoryRef") ) { return ::hx::Val( get_propertyCategoryRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PropertyCategory_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"propertyCategoryRef") ) { propertyCategoryRef=inValue.Cast< ::cpp::Pointer<  ::hx::widgets::PropertyCategory > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyCategory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("propertyCategoryRef",a0,8e,8b,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PropertyCategory_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  ::hx::widgets::PropertyCategory > */ ,(int)offsetof(PropertyCategory_obj,propertyCategoryRef),HX_("propertyCategoryRef",a0,8e,8b,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PropertyCategory_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyCategory_obj_sMemberFields[] = {
	HX_("propertyCategoryRef",a0,8e,8b,47),
	HX_("get_propertyCategoryRef",37,35,e1,4f),
	::String(null()) };

::hx::Class PropertyCategory_obj::__mClass;

void PropertyCategory_obj::__register()
{
	PropertyCategory_obj _hx_dummy;
	PropertyCategory_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.PropertyCategory",d0,20,4c,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyCategory_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyCategory_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyCategory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyCategory_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
