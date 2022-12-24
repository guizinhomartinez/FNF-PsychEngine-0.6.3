#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_PropertyGridAttributes
#include <wx/widgets/styles/PropertyGridAttributes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c75f9e9440c61ed4_5_boot,"wx.widgets.styles.PropertyGridAttributes","boot",0x760efd4e,"wx.widgets.styles.PropertyGridAttributes.boot","wx/widgets/styles/PropertyGridAttributes.hx",5,0x69d52c0d)
namespace wx{
namespace widgets{
namespace styles{

void PropertyGridAttributes_obj::__construct() { }

Dynamic PropertyGridAttributes_obj::__CreateEmpty() { return new PropertyGridAttributes_obj; }

void *PropertyGridAttributes_obj::_hx_vtable = 0;

Dynamic PropertyGridAttributes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyGridAttributes_obj > _hx_result = new PropertyGridAttributes_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PropertyGridAttributes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4fd61ea2;
}

::String PropertyGridAttributes_obj::BOOL_USE_CHECKBOX;


PropertyGridAttributes_obj::PropertyGridAttributes_obj()
{
}

bool PropertyGridAttributes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"BOOL_USE_CHECKBOX") ) { outValue = ( BOOL_USE_CHECKBOX ); return true; }
	}
	return false;
}

bool PropertyGridAttributes_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"BOOL_USE_CHECKBOX") ) { BOOL_USE_CHECKBOX=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PropertyGridAttributes_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PropertyGridAttributes_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &PropertyGridAttributes_obj::BOOL_USE_CHECKBOX,HX_("BOOL_USE_CHECKBOX",10,49,12,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PropertyGridAttributes_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PropertyGridAttributes_obj::BOOL_USE_CHECKBOX,"BOOL_USE_CHECKBOX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PropertyGridAttributes_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PropertyGridAttributes_obj::BOOL_USE_CHECKBOX,"BOOL_USE_CHECKBOX");
};

#endif

::hx::Class PropertyGridAttributes_obj::__mClass;

static ::String PropertyGridAttributes_obj_sStaticFields[] = {
	HX_("BOOL_USE_CHECKBOX",10,49,12,a1),
	::String(null())
};

void PropertyGridAttributes_obj::__register()
{
	PropertyGridAttributes_obj _hx_dummy;
	PropertyGridAttributes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.styles.PropertyGridAttributes",d2,7c,4b,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PropertyGridAttributes_obj::__GetStatic;
	__mClass->mSetStaticField = &PropertyGridAttributes_obj::__SetStatic;
	__mClass->mMarkFunc = PropertyGridAttributes_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PropertyGridAttributes_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PropertyGridAttributes_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PropertyGridAttributes_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyGridAttributes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyGridAttributes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PropertyGridAttributes_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c75f9e9440c61ed4_5_boot)
HXDLIN(   5)		BOOL_USE_CHECKBOX = wxPG_BOOL_USE_CHECKBOX;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
