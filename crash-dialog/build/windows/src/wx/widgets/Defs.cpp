#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_5_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",5,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_6_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",6,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_7_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",7,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_8_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",8,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_9_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",9,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_10_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",10,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_12_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",12,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_13_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",13,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_14_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",14,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_15_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",15,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_16_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",16,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_17_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",17,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_18_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",18,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_19_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",19,0xfed35202)
namespace wx{
namespace widgets{

void Defs_obj::__construct() { }

Dynamic Defs_obj::__CreateEmpty() { return new Defs_obj; }

void *Defs_obj::_hx_vtable = 0;

Dynamic Defs_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Defs_obj > _hx_result = new Defs_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Defs_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1810aadc;
}

int Defs_obj::OK;

int Defs_obj::CANCEL;

int Defs_obj::CLOSE;

int Defs_obj::_hx_YES;

int Defs_obj::_hx_NO;

int Defs_obj::CENTRE;

int Defs_obj::ALIGN_NOT;

int Defs_obj::ALIGN_CENTER_HORIZONTAL;

int Defs_obj::ALIGN_LEFT;

int Defs_obj::ALIGN_TOP;

int Defs_obj::ALIGN_RIGHT;

int Defs_obj::ALIGN_BOTTOM;

int Defs_obj::ALIGN_CENTER_VERTICAL;

int Defs_obj::ALIGN_CENTER;


Defs_obj::Defs_obj()
{
}

bool Defs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"OK") ) { outValue = ( OK ); return true; }
		if (HX_FIELD_EQ(inName,"NO") ) { outValue = ( _hx_NO ); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"YES") ) { outValue = ( _hx_YES ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLOSE") ) { outValue = ( CLOSE ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { outValue = ( CANCEL ); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE") ) { outValue = ( CENTRE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALIGN_NOT") ) { outValue = ( ALIGN_NOT ); return true; }
		if (HX_FIELD_EQ(inName,"ALIGN_TOP") ) { outValue = ( ALIGN_TOP ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { outValue = ( ALIGN_LEFT ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ALIGN_RIGHT") ) { outValue = ( ALIGN_RIGHT ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALIGN_BOTTOM") ) { outValue = ( ALIGN_BOTTOM ); return true; }
		if (HX_FIELD_EQ(inName,"ALIGN_CENTER") ) { outValue = ( ALIGN_CENTER ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTER_VERTICAL") ) { outValue = ( ALIGN_CENTER_VERTICAL ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTER_HORIZONTAL") ) { outValue = ( ALIGN_CENTER_HORIZONTAL ); return true; }
	}
	return false;
}

bool Defs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"OK") ) { OK=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NO") ) { _hx_NO=ioValue.Cast< int >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"YES") ) { _hx_YES=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { CANCEL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE") ) { CENTRE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALIGN_NOT") ) { ALIGN_NOT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ALIGN_TOP") ) { ALIGN_TOP=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { ALIGN_LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ALIGN_RIGHT") ) { ALIGN_RIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALIGN_BOTTOM") ) { ALIGN_BOTTOM=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ALIGN_CENTER") ) { ALIGN_CENTER=ioValue.Cast< int >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTER_VERTICAL") ) { ALIGN_CENTER_VERTICAL=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTER_HORIZONTAL") ) { ALIGN_CENTER_HORIZONTAL=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Defs_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Defs_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Defs_obj::OK,HX_("OK",1c,45,00,00)},
	{::hx::fsInt,(void *) &Defs_obj::CANCEL,HX_("CANCEL",7a,99,b6,6a)},
	{::hx::fsInt,(void *) &Defs_obj::CLOSE,HX_("CLOSE",98,4f,51,c6)},
	{::hx::fsInt,(void *) &Defs_obj::_hx_YES,HX_("YES",07,c5,43,00)},
	{::hx::fsInt,(void *) &Defs_obj::_hx_NO,HX_("NO",41,44,00,00)},
	{::hx::fsInt,(void *) &Defs_obj::CENTRE,HX_("CENTRE",1b,dd,5d,b8)},
	{::hx::fsInt,(void *) &Defs_obj::ALIGN_NOT,HX_("ALIGN_NOT",19,ff,82,f1)},
	{::hx::fsInt,(void *) &Defs_obj::ALIGN_CENTER_HORIZONTAL,HX_("ALIGN_CENTER_HORIZONTAL",f4,02,de,b2)},
	{::hx::fsInt,(void *) &Defs_obj::ALIGN_LEFT,HX_("ALIGN_LEFT",21,27,c2,5f)},
	{::hx::fsInt,(void *) &Defs_obj::ALIGN_TOP,HX_("ALIGN_TOP",9b,8c,87,f1)},
	{::hx::fsInt,(void *) &Defs_obj::ALIGN_RIGHT,HX_("ALIGN_RIGHT",62,23,2d,e1)},
	{::hx::fsInt,(void *) &Defs_obj::ALIGN_BOTTOM,HX_("ALIGN_BOTTOM",85,64,a4,3d)},
	{::hx::fsInt,(void *) &Defs_obj::ALIGN_CENTER_VERTICAL,HX_("ALIGN_CENTER_VERTICAL",86,3a,08,07)},
	{::hx::fsInt,(void *) &Defs_obj::ALIGN_CENTER,HX_("ALIGN_CENTER",6f,a3,06,de)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Defs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Defs_obj::OK,"OK");
	HX_MARK_MEMBER_NAME(Defs_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(Defs_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(Defs_obj::_hx_YES,"YES");
	HX_MARK_MEMBER_NAME(Defs_obj::_hx_NO,"NO");
	HX_MARK_MEMBER_NAME(Defs_obj::CENTRE,"CENTRE");
	HX_MARK_MEMBER_NAME(Defs_obj::ALIGN_NOT,"ALIGN_NOT");
	HX_MARK_MEMBER_NAME(Defs_obj::ALIGN_CENTER_HORIZONTAL,"ALIGN_CENTER_HORIZONTAL");
	HX_MARK_MEMBER_NAME(Defs_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_MARK_MEMBER_NAME(Defs_obj::ALIGN_TOP,"ALIGN_TOP");
	HX_MARK_MEMBER_NAME(Defs_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_MARK_MEMBER_NAME(Defs_obj::ALIGN_BOTTOM,"ALIGN_BOTTOM");
	HX_MARK_MEMBER_NAME(Defs_obj::ALIGN_CENTER_VERTICAL,"ALIGN_CENTER_VERTICAL");
	HX_MARK_MEMBER_NAME(Defs_obj::ALIGN_CENTER,"ALIGN_CENTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Defs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Defs_obj::OK,"OK");
	HX_VISIT_MEMBER_NAME(Defs_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(Defs_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(Defs_obj::_hx_YES,"YES");
	HX_VISIT_MEMBER_NAME(Defs_obj::_hx_NO,"NO");
	HX_VISIT_MEMBER_NAME(Defs_obj::CENTRE,"CENTRE");
	HX_VISIT_MEMBER_NAME(Defs_obj::ALIGN_NOT,"ALIGN_NOT");
	HX_VISIT_MEMBER_NAME(Defs_obj::ALIGN_CENTER_HORIZONTAL,"ALIGN_CENTER_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(Defs_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_VISIT_MEMBER_NAME(Defs_obj::ALIGN_TOP,"ALIGN_TOP");
	HX_VISIT_MEMBER_NAME(Defs_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_VISIT_MEMBER_NAME(Defs_obj::ALIGN_BOTTOM,"ALIGN_BOTTOM");
	HX_VISIT_MEMBER_NAME(Defs_obj::ALIGN_CENTER_VERTICAL,"ALIGN_CENTER_VERTICAL");
	HX_VISIT_MEMBER_NAME(Defs_obj::ALIGN_CENTER,"ALIGN_CENTER");
};

#endif

::hx::Class Defs_obj::__mClass;

static ::String Defs_obj_sStaticFields[] = {
	HX_("OK",1c,45,00,00),
	HX_("CANCEL",7a,99,b6,6a),
	HX_("CLOSE",98,4f,51,c6),
	HX_("YES",07,c5,43,00),
	HX_("NO",41,44,00,00),
	HX_("CENTRE",1b,dd,5d,b8),
	HX_("ALIGN_NOT",19,ff,82,f1),
	HX_("ALIGN_CENTER_HORIZONTAL",f4,02,de,b2),
	HX_("ALIGN_LEFT",21,27,c2,5f),
	HX_("ALIGN_TOP",9b,8c,87,f1),
	HX_("ALIGN_RIGHT",62,23,2d,e1),
	HX_("ALIGN_BOTTOM",85,64,a4,3d),
	HX_("ALIGN_CENTER_VERTICAL",86,3a,08,07),
	HX_("ALIGN_CENTER",6f,a3,06,de),
	::String(null())
};

void Defs_obj::__register()
{
	Defs_obj _hx_dummy;
	Defs_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.Defs",3a,6c,94,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Defs_obj::__GetStatic;
	__mClass->mSetStaticField = &Defs_obj::__SetStatic;
	__mClass->mMarkFunc = Defs_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Defs_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Defs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Defs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Defs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Defs_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Defs_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_5_boot)
HXDLIN(   5)		OK = wxOK;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_6_boot)
HXDLIN(   6)		CANCEL = wxCANCEL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_7_boot)
HXDLIN(   7)		CLOSE = wxCLOSE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_8_boot)
HXDLIN(   8)		_hx_YES = wxYES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_9_boot)
HXDLIN(   9)		_hx_NO = wxNO;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_10_boot)
HXDLIN(  10)		CENTRE = wxCENTRE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_12_boot)
HXDLIN(  12)		ALIGN_NOT = wxALIGN_NOT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_13_boot)
HXDLIN(  13)		ALIGN_CENTER_HORIZONTAL = wxALIGN_CENTER_HORIZONTAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_14_boot)
HXDLIN(  14)		ALIGN_LEFT = wxALIGN_LEFT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_15_boot)
HXDLIN(  15)		ALIGN_TOP = wxALIGN_TOP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_16_boot)
HXDLIN(  16)		ALIGN_RIGHT = wxALIGN_RIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_17_boot)
HXDLIN(  17)		ALIGN_BOTTOM = wxALIGN_BOTTOM;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_18_boot)
HXDLIN(  18)		ALIGN_CENTER_VERTICAL = wxALIGN_CENTER_VERTICAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_19_boot)
HXDLIN(  19)		ALIGN_CENTER = wxALIGN_CENTER;
            	}
}

} // end namespace wx
} // end namespace widgets
