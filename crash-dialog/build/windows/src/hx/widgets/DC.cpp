#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_cd1f455405216f23
#define INCLUDED_cd1f455405216f23
#include "wx/brush.h"
#endif
#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
#ifndef INCLUDED_e91341a8faf5e3a2
#define INCLUDED_e91341a8faf5e3a2
#include "wx/dcclient.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_fae0d7f0d9ceb2f8
#define INCLUDED_fae0d7f0d9ceb2f8
#include "wx/pen.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Brush
#include <hx/widgets/Brush.h>
#endif
#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Pen
#include <hx/widgets/Pen.h>
#endif
#ifndef INCLUDED_hx_widgets_Rect
#include <hx/widgets/Rect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_430522e7e40ac393_11_new,"hx.widgets.DC","new",0x79c301ee,"hx.widgets.DC.new","hx/widgets/DC.hx",11,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_15_clear,"hx.widgets.DC","clear",0x6124a29b,"hx.widgets.DC.clear","hx/widgets/DC.hx",15,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_19_drawLine,"hx.widgets.DC","drawLine",0x93a92dca,"hx.widgets.DC.drawLine","hx/widgets/DC.hx",19,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_24_get_textForeground,"hx.widgets.DC","get_textForeground",0xc54002cb,"hx.widgets.DC.get_textForeground","hx/widgets/DC.hx",24,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_26_set_textForeground,"hx.widgets.DC","set_textForeground",0xa1ef353f,"hx.widgets.DC.set_textForeground","hx/widgets/DC.hx",26,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_35_get_textBackground,"hx.widgets.DC","get_textBackground",0xda6e7df6,"hx.widgets.DC.get_textBackground","hx/widgets/DC.hx",35,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_37_set_textBackground,"hx.widgets.DC","set_textBackground",0xb71db06a,"hx.widgets.DC.set_textBackground","hx/widgets/DC.hx",37,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_44_gradientFillLinear,"hx.widgets.DC","gradientFillLinear",0x7c57a10a,"hx.widgets.DC.gradientFillLinear","hx/widgets/DC.hx",44,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_58_set_pen,"hx.widgets.DC","set_pen",0xdc0dbf0a,"hx.widgets.DC.set_pen","hx/widgets/DC.hx",58,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_65_set_brush,"hx.widgets.DC","set_brush",0x434470eb,"hx.widgets.DC.set_brush","hx/widgets/DC.hx",65,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_70_drawText,"hx.widgets.DC","drawText",0x98efe283,"hx.widgets.DC.drawText","hx/widgets/DC.hx",70,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_76_drawRoundedRectangle,"hx.widgets.DC","drawRoundedRectangle",0x1b91c518,"hx.widgets.DC.drawRoundedRectangle","hx/widgets/DC.hx",76,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_80_drawCircle,"hx.widgets.DC","drawCircle",0x1c152966,"hx.widgets.DC.drawCircle","hx/widgets/DC.hx",80,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_85_set_background,"hx.widgets.DC","set_background",0x874e41dd,"hx.widgets.DC.set_background","hx/widgets/DC.hx",85,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_92_drawBitmap,"hx.widgets.DC","drawBitmap",0xb713c745,"hx.widgets.DC.drawBitmap","hx/widgets/DC.hx",92,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_100_get_dcRef,"hx.widgets.DC","get_dcRef",0x7cbbdf79,"hx.widgets.DC.get_dcRef","hx/widgets/DC.hx",100,0x88dcc500)
namespace hx{
namespace widgets{

void DC_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_11_new)
HXDLIN(  11)		super::__construct();
            	}

Dynamic DC_obj::__CreateEmpty() { return new DC_obj; }

void *DC_obj::_hx_vtable = 0;

Dynamic DC_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DC_obj > _hx_result = new DC_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x2a3310b2;
	}
}

void DC_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_15_clear)
HXDLIN(  15)		this->get_dcRef()->ptr->Clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DC_obj,clear,(void))

void DC_obj::drawLine(int x1,int y1,int x2,int y2){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_19_drawLine)
HXDLIN(  19)		this->get_dcRef()->ptr->DrawLine(x1,y1,x2,y2);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DC_obj,drawLine,(void))

int DC_obj::get_textForeground(){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_24_get_textForeground)
HXDLIN(  24)		return ( (int)(this->get_dcRef()->ptr->GetTextForeground().GetRGB()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DC_obj,get_textForeground,return )

int DC_obj::set_textForeground(int value){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_26_set_textForeground)
HXLINE(  27)		::cpp::Pointer<  wxColour > temp = ::cpp::Pointer_obj::fromRaw((new wxColour(( (unsigned int)(((((value & 255) << 16) | (value & 65280)) | ((value & 16711680) >> 16))) ))));
HXLINE(  28)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  28)		(*(_hx_tmp)).SetTextForeground(temp->get_ref());
HXLINE(  29)		temp->destroy();
HXLINE(  30)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DC_obj,set_textForeground,return )

int DC_obj::get_textBackground(){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_35_get_textBackground)
HXDLIN(  35)		return ( (int)(this->get_dcRef()->ptr->GetTextBackground().GetRGB()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DC_obj,get_textBackground,return )

int DC_obj::set_textBackground(int value){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_37_set_textBackground)
HXLINE(  38)		::cpp::Pointer<  wxColour > temp = ::cpp::Pointer_obj::fromRaw((new wxColour(( (unsigned int)(((((value & 255) << 16) | (value & 65280)) | ((value & 16711680) >> 16))) ))));
HXLINE(  39)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  39)		(*(_hx_tmp)).SetTextBackground(temp->get_ref());
HXLINE(  40)		temp->destroy();
HXLINE(  41)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DC_obj,set_textBackground,return )

void DC_obj::gradientFillLinear( ::hx::widgets::Rect rect,int initialColour,int destColour){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_44_gradientFillLinear)
HXLINE(  45)		::cpp::Pointer<  wxRect > tempRect = ::cpp::Pointer_obj::fromRaw((new wxRect(rect->x,rect->y,rect->width,rect->height)));
HXLINE(  46)		::cpp::Pointer<  wxColour > tempInitialColour = ::cpp::Pointer_obj::fromRaw((new wxColour(( (unsigned int)(((((initialColour & 255) << 16) | (initialColour & 65280)) | ((initialColour & 16711680) >> 16))) ))));
HXLINE(  47)		::cpp::Pointer<  wxColour > tempDestColour = ::cpp::Pointer_obj::fromRaw((new wxColour(( (unsigned int)(((((destColour & 255) << 16) | (destColour & 65280)) | ((destColour & 16711680) >> 16))) ))));
HXLINE(  49)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  49)		 wxRect & _hx_tmp1 = tempRect->get_ref();
HXDLIN(  49)		 wxColour & _hx_tmp2 = tempInitialColour->get_ref();
HXDLIN(  49)		 wxColour & _hx_tmp3 = tempDestColour->get_ref();
HXDLIN(  49)		(*(_hx_tmp)).GradientFillLinear(_hx_tmp1,_hx_tmp2,_hx_tmp3);
HXLINE(  51)		tempRect->destroy();
HXLINE(  52)		tempInitialColour->destroy();
HXLINE(  53)		tempDestColour->destroy();
            	}


HX_DEFINE_DYNAMIC_FUNC3(DC_obj,gradientFillLinear,(void))

 ::hx::widgets::Pen DC_obj::set_pen( ::hx::widgets::Pen value){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_58_set_pen)
HXLINE(  59)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  59)		(*(_hx_tmp)).SetPen(value->get_penRef()->get_ref());
HXLINE(  60)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DC_obj,set_pen,return )

 ::hx::widgets::Brush DC_obj::set_brush( ::hx::widgets::Brush value){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_65_set_brush)
HXLINE(  66)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  66)		(*(_hx_tmp)).SetBrush(value->get_brushRef()->get_ref());
HXLINE(  67)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DC_obj,set_brush,return )

void DC_obj::drawText(::String text,int x,int y){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_70_drawText)
HXLINE(  71)		const char* this1 = text.utf8_str();
HXDLIN(  71)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  72)		this->get_dcRef()->ptr->DrawText(str,x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DC_obj,drawText,(void))

void DC_obj::drawRoundedRectangle(int x,int y,int width,int height,Float radius){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_76_drawRoundedRectangle)
HXDLIN(  76)		this->get_dcRef()->ptr->DrawRoundedRectangle(x,y,width,height,radius);
            	}


HX_DEFINE_DYNAMIC_FUNC5(DC_obj,drawRoundedRectangle,(void))

void DC_obj::drawCircle(int x,int y,int radius){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_80_drawCircle)
HXDLIN(  80)		this->get_dcRef()->ptr->DrawCircle(x,y,radius);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DC_obj,drawCircle,(void))

 ::hx::widgets::Brush DC_obj::set_background( ::hx::widgets::Brush value){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_85_set_background)
HXLINE(  86)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  86)		(*(_hx_tmp)).SetBackground(value->get_brushRef()->get_ref());
HXLINE(  87)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DC_obj,set_background,return )

void DC_obj::drawBitmap( ::hx::widgets::Bitmap bmp,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_92_drawBitmap)
HXDLIN(  92)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  92)		(*(_hx_tmp)).DrawBitmap(bmp->get_bitmapRef()->get_ref(),x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DC_obj,drawBitmap,(void))

::cpp::Pointer<  wxDC > DC_obj::get_dcRef(){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_100_get_dcRef)
HXDLIN( 100)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DC_obj,get_dcRef,return )


::hx::ObjectPtr< DC_obj > DC_obj::__new() {
	::hx::ObjectPtr< DC_obj > __this = new DC_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DC_obj > DC_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DC_obj *__this = (DC_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DC_obj), true, "hx.widgets.DC"));
	*(void **)__this = DC_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DC_obj::DC_obj()
{
}

void DC_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DC);
	HX_MARK_MEMBER_NAME(pen,"pen");
	HX_MARK_MEMBER_NAME(brush,"brush");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(dcRef,"dcRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DC_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pen,"pen");
	HX_VISIT_MEMBER_NAME(brush,"brush");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(dcRef,"dcRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DC_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pen") ) { return ::hx::Val( pen ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"brush") ) { return ::hx::Val( brush ); }
		if (HX_FIELD_EQ(inName,"dcRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dcRef() : dcRef ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_pen") ) { return ::hx::Val( set_pen_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLine") ) { return ::hx::Val( drawLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawText") ) { return ::hx::Val( drawText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_brush") ) { return ::hx::Val( set_brush_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dcRef") ) { return ::hx::Val( get_dcRef_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return ::hx::Val( drawCircle_dyn() ); }
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"drawBitmap") ) { return ::hx::Val( drawBitmap_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"textForeground") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textForeground() ); }
		if (HX_FIELD_EQ(inName,"textBackground") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textBackground() ); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return ::hx::Val( set_background_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_textForeground") ) { return ::hx::Val( get_textForeground_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textForeground") ) { return ::hx::Val( set_textForeground_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textBackground") ) { return ::hx::Val( get_textBackground_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textBackground") ) { return ::hx::Val( set_textBackground_dyn() ); }
		if (HX_FIELD_EQ(inName,"gradientFillLinear") ) { return ::hx::Val( gradientFillLinear_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundedRectangle") ) { return ::hx::Val( drawRoundedRectangle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DC_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pen") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pen(inValue.Cast<  ::hx::widgets::Pen >()) );pen=inValue.Cast<  ::hx::widgets::Pen >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"brush") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_brush(inValue.Cast<  ::hx::widgets::Brush >()) );brush=inValue.Cast<  ::hx::widgets::Brush >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dcRef") ) { dcRef=inValue.Cast< ::cpp::Pointer<  wxDC > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_background(inValue.Cast<  ::hx::widgets::Brush >()) );background=inValue.Cast<  ::hx::widgets::Brush >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"textForeground") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textForeground(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"textBackground") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textBackground(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DC_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textForeground",d0,63,9f,f9));
	outFields->push(HX_("textBackground",fb,de,cd,0e));
	outFields->push(HX_("pen",d9,54,55,00));
	outFields->push(HX_("brush",7a,58,f8,b8));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("dcRef",14,b3,c0,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DC_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::Pen */ ,(int)offsetof(DC_obj,pen),HX_("pen",d9,54,55,00)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(int)offsetof(DC_obj,brush),HX_("brush",7a,58,f8,b8)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(int)offsetof(DC_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDC > */ ,(int)offsetof(DC_obj,dcRef),HX_("dcRef",14,b3,c0,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DC_obj_sStaticStorageInfo = 0;
#endif

static ::String DC_obj_sMemberFields[] = {
	HX_("clear",8d,71,5b,48),
	HX_("drawLine",18,c2,1c,5c),
	HX_("get_textForeground",99,44,39,95),
	HX_("set_textForeground",0d,77,e8,71),
	HX_("get_textBackground",c4,bf,67,aa),
	HX_("set_textBackground",38,f2,16,87),
	HX_("gradientFillLinear",d8,e2,50,4c),
	HX_("pen",d9,54,55,00),
	HX_("set_pen",7c,ae,cb,19),
	HX_("brush",7a,58,f8,b8),
	HX_("set_brush",dd,a0,f2,df),
	HX_("drawText",d1,76,63,61),
	HX_("drawRoundedRectangle",66,96,b9,cd),
	HX_("drawCircle",34,ed,d0,97),
	HX_("background",ee,93,1d,26),
	HX_("set_background",ab,04,33,bc),
	HX_("drawBitmap",13,8b,cf,32),
	HX_("dcRef",14,b3,c0,d5),
	HX_("get_dcRef",6b,0f,6a,19),
	::String(null()) };

::hx::Class DC_obj::__mClass;

void DC_obj::__register()
{
	DC_obj _hx_dummy;
	DC_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DC",fc,32,0c,c3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DC_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DC_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DC_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
