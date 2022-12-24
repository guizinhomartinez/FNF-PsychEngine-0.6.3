#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets__FontWeight_FontWeight_Impl_
#include <wx/widgets/_FontWeight/FontWeight_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7446b62ed3e156e8_10__new,"wx.widgets._FontWeight.FontWeight_Impl_","_new",0x47f8c574,"wx.widgets._FontWeight.FontWeight_Impl_._new","wx/widgets/FontWeight.hx",10,0x810fdb89)
HX_LOCAL_STACK_FRAME(_hx_pos_7446b62ed3e156e8_6_boot,"wx.widgets._FontWeight.FontWeight_Impl_","boot",0x49f53445,"wx.widgets._FontWeight.FontWeight_Impl_.boot","wx/widgets/FontWeight.hx",6,0x810fdb89)
HX_LOCAL_STACK_FRAME(_hx_pos_7446b62ed3e156e8_7_boot,"wx.widgets._FontWeight.FontWeight_Impl_","boot",0x49f53445,"wx.widgets._FontWeight.FontWeight_Impl_.boot","wx/widgets/FontWeight.hx",7,0x810fdb89)
HX_LOCAL_STACK_FRAME(_hx_pos_7446b62ed3e156e8_8_boot,"wx.widgets._FontWeight.FontWeight_Impl_","boot",0x49f53445,"wx.widgets._FontWeight.FontWeight_Impl_.boot","wx/widgets/FontWeight.hx",8,0x810fdb89)
namespace wx{
namespace widgets{
namespace _FontWeight{

void FontWeight_Impl__obj::__construct() { }

Dynamic FontWeight_Impl__obj::__CreateEmpty() { return new FontWeight_Impl__obj; }

void *FontWeight_Impl__obj::_hx_vtable = 0;

Dynamic FontWeight_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FontWeight_Impl__obj > _hx_result = new FontWeight_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontWeight_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24635fc3;
}

int FontWeight_Impl__obj::NORMAL;

int FontWeight_Impl__obj::LIGHT;

int FontWeight_Impl__obj::BOLD;

int FontWeight_Impl__obj::_new(int i){
            	HX_STACKFRAME(&_hx_pos_7446b62ed3e156e8_10__new)
HXDLIN(  10)		int this1 = i;
HXDLIN(  10)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontWeight_Impl__obj,_new,return )


FontWeight_Impl__obj::FontWeight_Impl__obj()
{
}

bool FontWeight_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FontWeight_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FontWeight_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FontWeight_Impl__obj::NORMAL,HX_("NORMAL",27,1e,ec,e2)},
	{::hx::fsInt,(void *) &FontWeight_Impl__obj::LIGHT,HX_("LIGHT",b6,c8,ea,f2)},
	{::hx::fsInt,(void *) &FontWeight_Impl__obj::BOLD,HX_("BOLD",85,49,dc,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FontWeight_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontWeight_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FontWeight_Impl__obj::LIGHT,"LIGHT");
	HX_MARK_MEMBER_NAME(FontWeight_Impl__obj::BOLD,"BOLD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontWeight_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontWeight_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FontWeight_Impl__obj::LIGHT,"LIGHT");
	HX_VISIT_MEMBER_NAME(FontWeight_Impl__obj::BOLD,"BOLD");
};

#endif

::hx::Class FontWeight_Impl__obj::__mClass;

static ::String FontWeight_Impl__obj_sStaticFields[] = {
	HX_("NORMAL",27,1e,ec,e2),
	HX_("LIGHT",b6,c8,ea,f2),
	HX_("BOLD",85,49,dc,2b),
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void FontWeight_Impl__obj::__register()
{
	FontWeight_Impl__obj _hx_dummy;
	FontWeight_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets._FontWeight.FontWeight_Impl_",3b,a9,de,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontWeight_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontWeight_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FontWeight_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FontWeight_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontWeight_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontWeight_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontWeight_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FontWeight_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		int _hx_run(){
            			HX_STACKFRAME(&_hx_pos_7446b62ed3e156e8_6_boot)
HXDLIN(   6)			int this1 = ::wxFONTWEIGHT_NORMAL;
HXDLIN(   6)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_7446b62ed3e156e8_6_boot)
HXDLIN(   6)		NORMAL = ( (int)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		int _hx_run(){
            			HX_STACKFRAME(&_hx_pos_7446b62ed3e156e8_7_boot)
HXDLIN(   7)			int this1 = ::wxFONTWEIGHT_LIGHT;
HXDLIN(   7)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_7446b62ed3e156e8_7_boot)
HXDLIN(   7)		LIGHT = ( (int)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		int _hx_run(){
            			HX_STACKFRAME(&_hx_pos_7446b62ed3e156e8_8_boot)
HXDLIN(   8)			int this1 = ::wxFONTWEIGHT_BOLD;
HXDLIN(   8)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_7446b62ed3e156e8_8_boot)
HXDLIN(   8)		BOLD = ( (int)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace _FontWeight
