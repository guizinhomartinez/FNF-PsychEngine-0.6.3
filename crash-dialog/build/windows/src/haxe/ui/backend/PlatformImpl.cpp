#include <hxcpp.h>

#ifndef INCLUDED_73d5db1815414fb9
#define INCLUDED_73d5db1815414fb9
#include "wx/settings.h"
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_SystemSettings
#include <hx/widgets/SystemSettings.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd6becf6ec623f70_8_new,"haxe.ui.backend.PlatformImpl","new",0xbfd74871,"haxe.ui.backend.PlatformImpl.new","haxe/ui/backend/PlatformImpl.hx",8,0x6a0d169e)
HX_LOCAL_STACK_FRAME(_hx_pos_cd6becf6ec623f70_9_getMetric,"haxe.ui.backend.PlatformImpl","getMetric",0x1c136c37,"haxe.ui.backend.PlatformImpl.getMetric","haxe/ui/backend/PlatformImpl.hx",9,0x6a0d169e)
HX_LOCAL_STACK_FRAME(_hx_pos_cd6becf6ec623f70_19_getColor,"haxe.ui.backend.PlatformImpl","getColor",0x6f2e2b3c,"haxe.ui.backend.PlatformImpl.getColor","haxe/ui/backend/PlatformImpl.hx",19,0x6a0d169e)
namespace haxe{
namespace ui{
namespace backend{

void PlatformImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cd6becf6ec623f70_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic PlatformImpl_obj::__CreateEmpty() { return new PlatformImpl_obj; }

void *PlatformImpl_obj::_hx_vtable = 0;

Dynamic PlatformImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlatformImpl_obj > _hx_result = new PlatformImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlatformImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7903ebde) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7903ebde;
	} else {
		return inClassId==(int)0x7dad82ad;
	}
}

Float PlatformImpl_obj::getMetric(::String id){
            	HX_STACKFRAME(&_hx_pos_cd6becf6ec623f70_9_getMetric)
HXLINE(  10)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("patform.metrics.hscroll.height",f2,dd,e6,aa)) ){
HXLINE(  14)			return ( (Float)(::hx::widgets::SystemSettings_obj::getMetric(wxSYS_HSCROLL_Y,null())) );
HXDLIN(  14)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("patform.metrics.vscroll.width",69,87,e4,8d)) ){
HXLINE(  12)			return ( (Float)(::hx::widgets::SystemSettings_obj::getMetric(wxSYS_VSCROLL_X,null())) );
HXDLIN(  12)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE(  16)		return ( (Float)(0) );
            	}


 ::Dynamic PlatformImpl_obj::getColor(::String id){
            	HX_STACKFRAME(&_hx_pos_cd6becf6ec623f70_19_getColor)
HXLINE(  20)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("3d-dk-shadow",6a,2d,e5,f7)) ){
HXLINE(  42)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_3DDKSHADOW);
HXDLIN(  42)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  42)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("3d-face",d9,8c,34,71)) ){
HXLINE(  55)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_3DFACE);
HXDLIN(  55)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  55)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("3d-highlight",78,24,1c,2a)) ){
HXLINE(  58)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_3DHIGHLIGHT);
HXDLIN(  58)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  58)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("3d-hilight",79,a7,2e,18)) ){
HXLINE(  59)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_3DHILIGHT);
HXDLIN(  59)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  59)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("3d-light",1a,ed,7a,16)) ){
HXLINE(  43)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_3DLIGHT);
HXDLIN(  43)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  43)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("3d-shadow",1c,27,33,ca)) ){
HXLINE(  56)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_3DSHADOW);
HXDLIN(  56)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  56)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("active-border",d3,4f,d8,9d)) ){
HXLINE(  31)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_ACTIVEBORDER);
HXDLIN(  31)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  31)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("active-caption",1f,3a,cd,f3)) ){
HXLINE(  23)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_ACTIVECAPTION);
HXDLIN(  23)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  23)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("app-workspace",69,d7,51,09)) ){
HXLINE(  33)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_APPWORKSPACE);
HXDLIN(  33)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  33)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("background",ee,93,1d,26)) ){
HXLINE(  54)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_BACKGROUND);
HXDLIN(  54)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  54)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("btn-face",6e,ff,08,e5)) ){
HXLINE(  36)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_BTNFACE);
HXDLIN(  36)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  36)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("btn-highlight",c3,35,17,98)) ){
HXLINE(  41)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_BTNHIGHLIGHT);
HXDLIN(  41)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  41)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("btn-hilight",04,40,aa,7d)) ){
HXLINE(  57)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_BTNHILIGHT);
HXDLIN(  57)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  57)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("btn-shadow",f1,28,f9,31)) ){
HXLINE(  37)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_BTNSHADOW);
HXDLIN(  37)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  37)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("btn-text",7e,17,4d,ee)) ){
HXLINE(  39)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_BTNTEXT);
HXDLIN(  39)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  39)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("caption-text",b4,f2,08,a6)) ){
HXLINE(  30)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_CAPTIONTEXT);
HXDLIN(  30)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  30)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("desktop",dc,c5,94,1e)) ){
HXLINE(  22)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_DESKTOP);
HXDLIN(  22)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  22)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("frame-bk",29,9d,d8,1c)) ){
HXLINE(  60)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_FRAMEBK);
HXDLIN(  60)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  60)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("gradient-active-caption",1c,c3,f7,ce)) ){
HXLINE(  48)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_GRADIENTACTIVECAPTION);
HXDLIN(  48)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  48)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("gradient-inactive-caption",01,3f,49,8c)) ){
HXLINE(  49)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_GRADIENTINACTIVECAPTION);
HXDLIN(  49)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  49)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("gray-text",97,a0,6a,b0)) ){
HXLINE(  38)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_GRAYTEXT);
HXDLIN(  38)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  38)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("highlight",34,56,00,ed)) ){
HXLINE(  34)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_HIGHLIGHT);
HXDLIN(  34)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  34)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("highlight-text",a6,94,98,a4)) ){
HXLINE(  35)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_HIGHLIGHTTEXT);
HXDLIN(  35)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  35)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("hotlight",29,46,af,1a)) ){
HXLINE(  47)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_HOTLIGHT);
HXDLIN(  47)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  47)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("inactive-border",ce,a8,86,5f)) ){
HXLINE(  32)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_INACTIVEBORDER);
HXDLIN(  32)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  32)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("inactive-caption",c4,bc,ac,aa)) ){
HXLINE(  24)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_INACTIVECAPTION);
HXDLIN(  24)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  24)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("inactive-caption-text",16,64,9e,d1)) ){
HXLINE(  40)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_INACTIVECAPTIONTEXT);
HXDLIN(  40)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  40)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("info-bk",88,bb,ef,0d)) ){
HXLINE(  45)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_INFOBK);
HXDLIN(  45)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  45)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("info-text",2c,60,dd,41)) ){
HXLINE(  44)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_INFOTEXT);
HXDLIN(  44)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  44)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("listbox",6d,30,93,0a)) ){
HXLINE(  46)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_LISTBOX);
HXDLIN(  46)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  46)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("listbox-highlight-text",c6,fb,d7,7e)) ){
HXLINE(  53)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT);
HXDLIN(  53)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  53)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("listbox-text",cd,0b,c7,ac)) ){
HXLINE(  52)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_LISTBOXTEXT);
HXDLIN(  52)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  52)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("menu",9f,45,59,48)) ){
HXLINE(  25)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_MENU);
HXDLIN(  25)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  25)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("menu-hilight",47,3e,a2,41)) ){
HXLINE(  50)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_MENUHILIGHT);
HXDLIN(  50)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  50)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("menu-text",5b,e1,ac,3d)) ){
HXLINE(  28)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_MENUTEXT);
HXDLIN(  28)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  28)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("menubar",94,79,63,ba)) ){
HXLINE(  51)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_MENUBAR);
HXDLIN(  51)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  51)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("scrollbar",e6,9f,14,3e)) ){
HXLINE(  21)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_SCROLLBAR);
HXDLIN(  21)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  21)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("window",f0,93,8c,52)) ){
HXLINE(  26)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_WINDOW);
HXDLIN(  26)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  26)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("window-frame",d0,dc,6e,97)) ){
HXLINE(  27)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_WINDOWFRAME);
HXDLIN(  27)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  27)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("window-text",6a,0d,a7,93)) ){
HXLINE(  29)			int c = ::hx::widgets::SystemSettings_obj::getColour(wxSYS_COLOUR_WINDOWTEXT);
HXDLIN(  29)			return ((((c & 255) << 16) | (c & 65280)) | ((c & 16711680) >> 16));
HXDLIN(  29)			goto _hx_goto_3;
            		}
            		_hx_goto_3:;
HXLINE(  62)		return null();
            	}



::hx::ObjectPtr< PlatformImpl_obj > PlatformImpl_obj::__new() {
	::hx::ObjectPtr< PlatformImpl_obj > __this = new PlatformImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlatformImpl_obj > PlatformImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlatformImpl_obj *__this = (PlatformImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlatformImpl_obj), true, "haxe.ui.backend.PlatformImpl"));
	*(void **)__this = PlatformImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlatformImpl_obj::PlatformImpl_obj()
{
}

::hx::Val PlatformImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMetric") ) { return ::hx::Val( getMetric_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlatformImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlatformImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String PlatformImpl_obj_sMemberFields[] = {
	HX_("getMetric",66,11,b9,85),
	HX_("getColor",ed,80,33,aa),
	::String(null()) };

::hx::Class PlatformImpl_obj::__mClass;

void PlatformImpl_obj::__register()
{
	PlatformImpl_obj _hx_dummy;
	PlatformImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.PlatformImpl",ff,3b,b4,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlatformImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlatformImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlatformImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlatformImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
