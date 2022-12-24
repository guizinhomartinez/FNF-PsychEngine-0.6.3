#include <hxcpp.h>

#ifndef INCLUDED_782aa7a696219a25
#define INCLUDED_782aa7a696219a25
#include "wx/font.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_Font
#include <hx/widgets/Font.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_wx_widgets__FontFamily_FontFamily_Impl_
#include <wx/widgets/_FontFamily/FontFamily_Impl_.h>
#endif
#ifndef INCLUDED_wx_widgets__FontStyle_FontStyle_Impl_
#include <wx/widgets/_FontStyle/FontStyle_Impl_.h>
#endif
#ifndef INCLUDED_wx_widgets__FontWeight_FontWeight_Impl_
#include <wx/widgets/_FontWeight/FontWeight_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b06986455420577_17_new,"hx.widgets.Font","new",0x30ec819e,"hx.widgets.Font.new","hx/widgets/Font.hx",17,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_37_get_size,"hx.widgets.Font","get_size",0x69746a4c,"hx.widgets.Font.get_size","hx/widgets/Font.hx",37,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_39_set_size,"hx.widgets.Font","set_size",0x17d1c3c0,"hx.widgets.Font.set_size","hx/widgets/Font.hx",39,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_46_get_family,"hx.widgets.Font","get_family",0x28afe1ef,"hx.widgets.Font.get_family","hx/widgets/Font.hx",46,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_48_set_family,"hx.widgets.Font","set_family",0x2c2d8063,"hx.widgets.Font.set_family","hx/widgets/Font.hx",48,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_55_get_style,"hx.widgets.Font","get_style",0xe3ad3546,"hx.widgets.Font.get_style","hx/widgets/Font.hx",55,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_57_set_style,"hx.widgets.Font","set_style",0xc6fe2152,"hx.widgets.Font.set_style","hx/widgets/Font.hx",57,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_64_get_weight,"hx.widgets.Font","get_weight",0x3fb4f3c3,"hx.widgets.Font.get_weight","hx/widgets/Font.hx",64,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_66_set_weight,"hx.widgets.Font","set_weight",0x43329237,"hx.widgets.Font.set_weight","hx/widgets/Font.hx",66,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_73_get_underlined,"hx.widgets.Font","get_underlined",0xf2a659a3,"hx.widgets.Font.get_underlined","hx/widgets/Font.hx",73,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_75_set_underlined,"hx.widgets.Font","set_underlined",0x12c64217,"hx.widgets.Font.set_underlined","hx/widgets/Font.hx",75,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_82_get_faceName,"hx.widgets.Font","get_faceName",0x3ccd5093,"hx.widgets.Font.get_faceName","hx/widgets/Font.hx",82,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_84_set_faceName,"hx.widgets.Font","set_faceName",0x51c67407,"hx.widgets.Font.set_faceName","hx/widgets/Font.hx",84,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_92_createPointer,"hx.widgets.Font","createPointer",0x160283df,"hx.widgets.Font.createPointer","hx/widgets/Font.hx",92,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_104_copy,"hx.widgets.Font","copy",0x96c720b7,"hx.widgets.Font.copy","hx/widgets/Font.hx",104,0xd992b6d0)
namespace hx{
namespace widgets{

void Font_obj::__construct(::hx::Null< int >  __o_size, ::Dynamic family, ::Dynamic style, ::Dynamic weight,::hx::Null< bool >  __o_underlined,::String faceName){
            		int size = __o_size.Default(-1);
            		bool underlined = __o_underlined.Default(false);
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_17_new)
HXDLIN(  17)		super::__construct();
HXLINE(  18)		if (::hx::IsNull( family )) {
HXLINE(  19)			family = ::wx::widgets::_FontFamily::FontFamily_Impl__obj::DEFAULT;
            		}
HXLINE(  21)		if (::hx::IsNull( style )) {
HXLINE(  22)			style = ::wx::widgets::_FontStyle::FontStyle_Impl__obj::NORMAL;
            		}
HXLINE(  24)		if (::hx::IsNull( weight )) {
HXLINE(  25)			weight = ::wx::widgets::_FontWeight::FontWeight_Impl__obj::NORMAL;
            		}
HXLINE(  27)		this->_size = size;
HXLINE(  28)		this->_family = ( (int)(family) );
HXLINE(  29)		this->_style = ( (int)(style) );
HXLINE(  30)		this->_weight = ( (int)(weight) );
HXLINE(  31)		this->_underlined = underlined;
HXLINE(  32)		this->_faceName = faceName;
            	}

Dynamic Font_obj::__CreateEmpty() { return new Font_obj; }

void *Font_obj::_hx_vtable = 0;

Dynamic Font_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Font_obj > _hx_result = new Font_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Font_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0162a16c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0162a16c;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x6d21678e;
	}
}

int Font_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_37_get_size)
HXDLIN(  37)		return this->_size;
            	}


int Font_obj::set_size(int value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_39_set_size)
HXLINE(  40)		this->_size = value;
HXLINE(  41)		return value;
            	}


int Font_obj::get_family(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_46_get_family)
HXDLIN(  46)		return this->_family;
            	}


int Font_obj::set_family(int value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_48_set_family)
HXLINE(  49)		this->_family = value;
HXLINE(  50)		return value;
            	}


int Font_obj::get_style(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_55_get_style)
HXDLIN(  55)		return this->_style;
            	}


int Font_obj::set_style(int value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_57_set_style)
HXLINE(  58)		this->_style = value;
HXLINE(  59)		return value;
            	}


int Font_obj::get_weight(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_64_get_weight)
HXDLIN(  64)		return this->_weight;
            	}


int Font_obj::set_weight(int value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_66_set_weight)
HXLINE(  67)		this->_weight = value;
HXLINE(  68)		return value;
            	}


bool Font_obj::get_underlined(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_73_get_underlined)
HXDLIN(  73)		return this->_underlined;
            	}


bool Font_obj::set_underlined(bool value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_75_set_underlined)
HXLINE(  76)		this->_underlined = value;
HXLINE(  77)		return value;
            	}


::String Font_obj::get_faceName(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_82_get_faceName)
HXDLIN(  82)		return this->_faceName;
            	}


::String Font_obj::set_faceName(::String value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_84_set_faceName)
HXLINE(  85)		this->_faceName = value;
HXLINE(  86)		return value;
            	}


::cpp::Pointer<  wxFont > Font_obj::createPointer(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_92_createPointer)
HXLINE(  93)		::String fn = this->_faceName;
HXLINE(  94)		if (::hx::IsNull( fn )) {
HXLINE(  95)			fn = HX_("",00,00,00,00);
            		}
HXLINE(  97)		const char* this1 = fn.utf8_str();
HXDLIN(  97)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  98)		return ::cpp::Pointer_obj::fromRaw((new wxFont(this->_size,this->_family,this->_style,this->_weight,this->_underlined,s)));
            	}


 ::hx::widgets::Font Font_obj::copy( wxFont other){
            	HX_GC_STACKFRAME(&_hx_pos_7b06986455420577_104_copy)
HXLINE( 105)		 wxString r = other.GetFaceName();
HXLINE( 106)		int _hx_tmp = other.GetPointSize();
HXDLIN( 106)		int _hx_tmp1 = other.GetFamily();
HXDLIN( 106)		int _hx_tmp2 = other.GetStyle();
HXDLIN( 106)		int _hx_tmp3 = other.GetWeight();
HXDLIN( 106)		bool _hx_tmp4 = other.GetUnderlined();
HXDLIN( 106)		return  ::hx::widgets::Font_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,::String(::String(r.ToUTF8().data())));
            	}



::hx::ObjectPtr< Font_obj > Font_obj::__new(::hx::Null< int >  __o_size, ::Dynamic family, ::Dynamic style, ::Dynamic weight,::hx::Null< bool >  __o_underlined,::String faceName) {
	::hx::ObjectPtr< Font_obj > __this = new Font_obj();
	__this->__construct(__o_size,family,style,weight,__o_underlined,faceName);
	return __this;
}

::hx::ObjectPtr< Font_obj > Font_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_size, ::Dynamic family, ::Dynamic style, ::Dynamic weight,::hx::Null< bool >  __o_underlined,::String faceName) {
	Font_obj *__this = (Font_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Font_obj), true, "hx.widgets.Font"));
	*(void **)__this = Font_obj::_hx_vtable;
	__this->__construct(__o_size,family,style,weight,__o_underlined,faceName);
	return __this;
}

Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_MEMBER_NAME(_family,"_family");
	HX_MARK_MEMBER_NAME(_style,"_style");
	HX_MARK_MEMBER_NAME(_weight,"_weight");
	HX_MARK_MEMBER_NAME(_underlined,"_underlined");
	HX_MARK_MEMBER_NAME(_faceName,"_faceName");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_size,"_size");
	HX_VISIT_MEMBER_NAME(_family,"_family");
	HX_VISIT_MEMBER_NAME(_style,"_style");
	HX_VISIT_MEMBER_NAME(_weight,"_weight");
	HX_VISIT_MEMBER_NAME(_underlined,"_underlined");
	HX_VISIT_MEMBER_NAME(_faceName,"_faceName");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_size",a0,bc,64,ff));
	outFields->push(HX_("_family",43,71,18,59));
	outFields->push(HX_("_style",72,ec,04,80));
	outFields->push(HX_("_weight",17,83,1d,70));
	outFields->push(HX_("_underlined",f7,22,ab,21));
	outFields->push(HX_("_faceName",e7,5c,f7,c3));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("family",a4,5f,a1,ea));
	outFields->push(HX_("style",31,a5,1d,84));
	outFields->push(HX_("weight",78,71,a6,01));
	outFields->push(HX_("underlined",d8,55,21,4f));
	outFields->push(HX_("faceName",88,65,61,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Font_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Font_obj,_size),HX_("_size",a0,bc,64,ff)},
	{::hx::fsInt,(int)offsetof(Font_obj,_family),HX_("_family",43,71,18,59)},
	{::hx::fsInt,(int)offsetof(Font_obj,_style),HX_("_style",72,ec,04,80)},
	{::hx::fsInt,(int)offsetof(Font_obj,_weight),HX_("_weight",17,83,1d,70)},
	{::hx::fsBool,(int)offsetof(Font_obj,_underlined),HX_("_underlined",f7,22,ab,21)},
	{::hx::fsString,(int)offsetof(Font_obj,_faceName),HX_("_faceName",e7,5c,f7,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Font_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Font_obj::__mClass;

void Font_obj::__register()
{
	Font_obj _hx_dummy;
	Font_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Font",ac,1a,30,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Font_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Font_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Font_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
