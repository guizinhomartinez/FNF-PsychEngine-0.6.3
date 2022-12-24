#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_wx_widgets_Entry
#include <wx/widgets/Entry.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f626ff10d2bb31a0_10_start,"wx.widgets.Entry","start",0xbc180bba,"wx.widgets.Entry.start","wx/widgets/Entry.hx",10,0xe08777ba)
HX_LOCAL_STACK_FRAME(_hx_pos_f626ff10d2bb31a0_28_cleanup,"wx.widgets.Entry","cleanup",0x7125297c,"wx.widgets.Entry.cleanup","wx/widgets/Entry.hx",28,0xe08777ba)
namespace wx{
namespace widgets{

void Entry_obj::__construct() { }

Dynamic Entry_obj::__CreateEmpty() { return new Entry_obj; }

void *Entry_obj::_hx_vtable = 0;

Dynamic Entry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Entry_obj > _hx_result = new Entry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Entry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5dd109ac;
}

void Entry_obj::start(::Array< ::String > args){
            	HX_STACKFRAME(&_hx_pos_f626ff10d2bb31a0_10_start)
HXLINE(  12)		args = ::Array_obj< ::String >::__new(0);
HXLINE(  14)		::Array< ::String > args1 = ::Array_obj< ::String >::__new(1)->init(0,::Sys_obj::programPath())->concat(args);
HXLINE(  15)		int argc = args1->length;
HXLINE(  16)		char** argv = new char*[argc];
HXLINE(  18)		{
HXLINE(  18)			int _g = 0;
HXDLIN(  18)			int _g1 = argc;
HXDLIN(  18)			while((_g < _g1)){
HXLINE(  18)				_g = (_g + 1);
HXDLIN(  18)				int i = (_g - 1);
HXLINE(  19)				const char* this1 = args1->__get(i).utf8_str();
HXDLIN(  19)				const char* arg = this1;
HXLINE(  20)				argv[i] = (char *)arg;
            			}
            		}
HXLINE(  22)		wxEntryStart(argc, argv);
HXLINE(  23)		delete[] argv;
HXLINE(  24)		wxInitAllImageHandlers();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Entry_obj,start,(void))

void Entry_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_f626ff10d2bb31a0_28_cleanup)
HXDLIN(  28)		wxEntryCleanup();;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Entry_obj,cleanup,(void))


Entry_obj::Entry_obj()
{
}

bool Entry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { outValue = cleanup_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Entry_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Entry_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Entry_obj::__mClass;

static ::String Entry_obj_sStaticFields[] = {
	HX_("start",62,74,0b,84),
	HX_("cleanup",24,0c,42,ab),
	::String(null())
};

void Entry_obj::__register()
{
	Entry_obj _hx_dummy;
	Entry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.Entry",c6,65,ae,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Entry_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Entry_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Entry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Entry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Entry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace wx
} // end namespace widgets
