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
#ifndef INCLUDED_782aa7a696219a25
#define INCLUDED_782aa7a696219a25
#include "wx/font.h"
#endif
#ifndef INCLUDED_934d0db102cb1d0b
#define INCLUDED_934d0db102cb1d0b
#include "wx/graphics.h"
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
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Brush
#include <hx/widgets/Brush.h>
#endif
#ifndef INCLUDED_hx_widgets_Colour
#include <hx/widgets/Colour.h>
#endif
#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Font
#include <hx/widgets/Font.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_GraphicsContext
#include <hx/widgets/GraphicsContext.h>
#endif
#ifndef INCLUDED_hx_widgets_GraphicsObject
#include <hx/widgets/GraphicsObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Pen
#include <hx/widgets/Pen.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_hx_widgets_WindowDC
#include <hx/widgets/WindowDC.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_39e5aa58fd613943_12_new,"hx.widgets.GraphicsContext","new",0xb8472b19,"hx.widgets.GraphicsContext.new","hx/widgets/GraphicsContext.hx",12,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_22_strokeLine,"hx.widgets.GraphicsContext","strokeLine",0x27519233,"hx.widgets.GraphicsContext.strokeLine","hx/widgets/GraphicsContext.hx",22,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_27_set_pen,"hx.widgets.GraphicsContext","set_pen",0xdc9559b5,"hx.widgets.GraphicsContext.set_pen","hx/widgets/GraphicsContext.hx",27,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_34_set_brush,"hx.widgets.GraphicsContext","set_brush",0x28e84c56,"hx.widgets.GraphicsContext.set_brush","hx/widgets/GraphicsContext.hx",34,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_39_drawText,"hx.widgets.GraphicsContext","drawText",0x0f0f9d78,"hx.widgets.GraphicsContext.drawText","hx/widgets/GraphicsContext.hx",39,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_45_drawRoundedRectangle,"hx.widgets.GraphicsContext","drawRoundedRectangle",0x60989b8d,"hx.widgets.GraphicsContext.drawRoundedRectangle","hx/widgets/GraphicsContext.hx",45,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_49_drawBitmap,"hx.widgets.GraphicsContext","drawBitmap",0xc0cfe97a,"hx.widgets.GraphicsContext.drawBitmap","hx/widgets/GraphicsContext.hx",49,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_60_set_antialiasMode,"hx.widgets.GraphicsContext","set_antialiasMode",0x2690f50d,"hx.widgets.GraphicsContext.set_antialiasMode","hx/widgets/GraphicsContext.hx",60,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_66_set_interpolationQuality,"hx.widgets.GraphicsContext","set_interpolationQuality",0xe4746b9f,"hx.widgets.GraphicsContext.set_interpolationQuality","hx/widgets/GraphicsContext.hx",66,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_73_setFont,"hx.widgets.GraphicsContext","setFont",0xcc0e49ca,"hx.widgets.GraphicsContext.setFont","hx/widgets/GraphicsContext.hx",73,0xd5c24bf9)
HX_LOCAL_STACK_FRAME(_hx_pos_39e5aa58fd613943_87_get_graphicscontextRef,"hx.widgets.GraphicsContext","get_graphicscontextRef",0x0d75755f,"hx.widgets.GraphicsContext.get_graphicscontextRef","hx/widgets/GraphicsContext.hx",87,0xd5c24bf9)
namespace hx{
namespace widgets{

void GraphicsContext_obj::__construct( ::hx::widgets::Window window, ::hx::widgets::WindowDC dc){
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_12_new)
HXDLIN(  12)		super::__construct();
HXLINE(  13)		if (::hx::IsNotNull( window )) {
HXLINE(  14)			::cpp::Pointer<  wxGraphicsContext > _hx_tmp = ::cpp::Pointer_obj::fromRaw(wxGraphicsContext::Create(::hx::widgets::Window_obj::toRaw(window)));
HXDLIN(  14)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  16)		if (::hx::IsNotNull( dc )) {
HXLINE(  17)			::cpp::Pointer<  wxGraphicsContext > _hx_tmp = ::cpp::Pointer_obj::fromRaw(wxGraphicsContext::Create(dc->_ref->rawCast()));
HXDLIN(  17)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic GraphicsContext_obj::__CreateEmpty() { return new GraphicsContext_obj; }

void *GraphicsContext_obj::_hx_vtable = 0;

Dynamic GraphicsContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsContext_obj > _hx_result = new GraphicsContext_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GraphicsContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x01bca505) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x01bca505;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x6c636469;
	}
}

void GraphicsContext_obj::strokeLine(Float x1,Float y1,Float x2,Float y2){
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_22_strokeLine)
HXDLIN(  22)		this->get_graphicscontextRef()->ptr->StrokeLine(x1,y1,x2,y2);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsContext_obj,strokeLine,(void))

 ::hx::widgets::Pen GraphicsContext_obj::set_pen( ::hx::widgets::Pen value){
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_27_set_pen)
HXLINE(  28)		 wxGraphicsContext * _hx_tmp = this->get_graphicscontextRef()->ptr;
HXDLIN(  28)		(*(_hx_tmp)).SetPen(value->get_penRef()->get_ref());
HXLINE(  29)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsContext_obj,set_pen,return )

 ::hx::widgets::Brush GraphicsContext_obj::set_brush( ::hx::widgets::Brush value){
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_34_set_brush)
HXLINE(  35)		 wxGraphicsContext * _hx_tmp = this->get_graphicscontextRef()->ptr;
HXDLIN(  35)		(*(_hx_tmp)).SetBrush(value->get_brushRef()->get_ref());
HXLINE(  36)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsContext_obj,set_brush,return )

void GraphicsContext_obj::drawText(::String text,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_39_drawText)
HXLINE(  40)		const char* this1 = text.utf8_str();
HXDLIN(  40)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  41)		this->get_graphicscontextRef()->ptr->DrawText(str,x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC3(GraphicsContext_obj,drawText,(void))

void GraphicsContext_obj::drawRoundedRectangle(Float x,Float y,Float width,Float height,Float radius){
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_45_drawRoundedRectangle)
HXDLIN(  45)		this->get_graphicscontextRef()->ptr->DrawRoundedRectangle(x,y,width,height,radius);
            	}


HX_DEFINE_DYNAMIC_FUNC5(GraphicsContext_obj,drawRoundedRectangle,(void))

void GraphicsContext_obj::drawBitmap( ::hx::widgets::Bitmap bmp,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float width = __o_width.Default(-1);
            		Float height = __o_height.Default(-1);
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_49_drawBitmap)
HXLINE(  50)		if ((width == -1)) {
HXLINE(  51)			width = ( (Float)(bmp->get_width()) );
            		}
HXLINE(  53)		if ((height == -1)) {
HXLINE(  54)			height = ( (Float)(bmp->get_height()) );
            		}
HXLINE(  56)		 wxGraphicsContext * _hx_tmp = this->get_graphicscontextRef()->ptr;
HXDLIN(  56)		(*(_hx_tmp)).DrawBitmap(bmp->get_bitmapRef()->get_ref(),x,y,width,height);
            	}


HX_DEFINE_DYNAMIC_FUNC5(GraphicsContext_obj,drawBitmap,(void))

 cpp::Struct<wxAntialiasMode, cpp::EnumHandler> GraphicsContext_obj::set_antialiasMode( cpp::Struct<wxAntialiasMode, cpp::EnumHandler> value){
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_60_set_antialiasMode)
HXLINE(  61)		this->get_graphicscontextRef()->ptr->SetAntialiasMode(value);
HXLINE(  62)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsContext_obj,set_antialiasMode,return )

 cpp::Struct<wxInterpolationQuality, cpp::EnumHandler> GraphicsContext_obj::set_interpolationQuality( cpp::Struct<wxInterpolationQuality, cpp::EnumHandler> value){
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_66_set_interpolationQuality)
HXLINE(  67)		this->get_graphicscontextRef()->ptr->SetInterpolationQuality(value);
HXLINE(  68)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsContext_obj,set_interpolationQuality,return )

void GraphicsContext_obj::setFont( ::hx::widgets::Font font,::hx::Null< int >  __o_color){
            		int color = __o_color.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_39e5aa58fd613943_73_setFont)
HXLINE(  74)		::cpp::Pointer<  wxFont > p1 = font->createPointer();
HXLINE(  75)		 ::hx::widgets::Colour c =  ::hx::widgets::Colour_obj::__alloc( HX_CTX ,color);
HXLINE(  76)		::cpp::Pointer<  wxColour > p2 = c->createPointer();
HXLINE(  77)		 wxGraphicsContext * _hx_tmp = this->get_graphicscontextRef()->ptr;
HXDLIN(  77)		 wxFont & _hx_tmp1 = p1->get_ref();
HXDLIN(  77)		 wxColour & _hx_tmp2 = p2->get_ref();
HXDLIN(  77)		(*(_hx_tmp)).SetFont(_hx_tmp1,_hx_tmp2);
HXLINE(  78)		p1->destroy();
HXLINE(  79)		p2->destroy();
            	}


::cpp::Pointer<  wxGraphicsContext > GraphicsContext_obj::get_graphicscontextRef(){
            	HX_STACKFRAME(&_hx_pos_39e5aa58fd613943_87_get_graphicscontextRef)
HXDLIN(  87)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsContext_obj,get_graphicscontextRef,return )


::hx::ObjectPtr< GraphicsContext_obj > GraphicsContext_obj::__new( ::hx::widgets::Window window, ::hx::widgets::WindowDC dc) {
	::hx::ObjectPtr< GraphicsContext_obj > __this = new GraphicsContext_obj();
	__this->__construct(window,dc);
	return __this;
}

::hx::ObjectPtr< GraphicsContext_obj > GraphicsContext_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window window, ::hx::widgets::WindowDC dc) {
	GraphicsContext_obj *__this = (GraphicsContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsContext_obj), true, "hx.widgets.GraphicsContext"));
	*(void **)__this = GraphicsContext_obj::_hx_vtable;
	__this->__construct(window,dc);
	return __this;
}

GraphicsContext_obj::GraphicsContext_obj()
{
}

void GraphicsContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsContext);
	HX_MARK_MEMBER_NAME(pen,"pen");
	HX_MARK_MEMBER_NAME(brush,"brush");
	HX_MARK_MEMBER_NAME(antialiasMode,"antialiasMode");
	HX_MARK_MEMBER_NAME(interpolationQuality,"interpolationQuality");
	HX_MARK_MEMBER_NAME(graphicscontextRef,"graphicscontextRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GraphicsContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pen,"pen");
	HX_VISIT_MEMBER_NAME(brush,"brush");
	HX_VISIT_MEMBER_NAME(antialiasMode,"antialiasMode");
	HX_VISIT_MEMBER_NAME(interpolationQuality,"interpolationQuality");
	HX_VISIT_MEMBER_NAME(graphicscontextRef,"graphicscontextRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GraphicsContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pen") ) { return ::hx::Val( pen ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"brush") ) { return ::hx::Val( brush ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_pen") ) { return ::hx::Val( set_pen_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawText") ) { return ::hx::Val( drawText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_brush") ) { return ::hx::Val( set_brush_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strokeLine") ) { return ::hx::Val( strokeLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawBitmap") ) { return ::hx::Val( drawBitmap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antialiasMode") ) { return ::hx::Val( antialiasMode ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_antialiasMode") ) { return ::hx::Val( set_antialiasMode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"graphicscontextRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_graphicscontextRef() : graphicscontextRef ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundedRectangle") ) { return ::hx::Val( drawRoundedRectangle_dyn() ); }
		if (HX_FIELD_EQ(inName,"interpolationQuality") ) { return ::hx::Val( interpolationQuality ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_graphicscontextRef") ) { return ::hx::Val( get_graphicscontextRef_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_interpolationQuality") ) { return ::hx::Val( set_interpolationQuality_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pen") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pen(inValue.Cast<  ::hx::widgets::Pen >()) );pen=inValue.Cast<  ::hx::widgets::Pen >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"brush") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_brush(inValue.Cast<  ::hx::widgets::Brush >()) );brush=inValue.Cast<  ::hx::widgets::Brush >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antialiasMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antialiasMode(inValue.Cast<  cpp::Struct<wxAntialiasMode, cpp::EnumHandler> >()) );antialiasMode=inValue.Cast<  cpp::Struct<wxAntialiasMode, cpp::EnumHandler> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"graphicscontextRef") ) { graphicscontextRef=inValue.Cast< ::cpp::Pointer<  wxGraphicsContext > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"interpolationQuality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_interpolationQuality(inValue.Cast<  cpp::Struct<wxInterpolationQuality, cpp::EnumHandler> >()) );interpolationQuality=inValue.Cast<  cpp::Struct<wxInterpolationQuality, cpp::EnumHandler> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pen",d9,54,55,00));
	outFields->push(HX_("brush",7a,58,f8,b8));
	outFields->push(HX_("antialiasMode",31,c5,7f,41));
	outFields->push(HX_("interpolationQuality",fb,a7,17,2b));
	outFields->push(HX_("graphicscontextRef",2f,1f,59,67));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::Pen */ ,(int)offsetof(GraphicsContext_obj,pen),HX_("pen",d9,54,55,00)},
	{::hx::fsObject /*  ::hx::widgets::Brush */ ,(int)offsetof(GraphicsContext_obj,brush),HX_("brush",7a,58,f8,b8)},
	{::hx::fsUnknown /*  cpp::Struct<wxAntialiasMode, cpp::EnumHandler> */ ,(int)offsetof(GraphicsContext_obj,antialiasMode),HX_("antialiasMode",31,c5,7f,41)},
	{::hx::fsUnknown /*  cpp::Struct<wxInterpolationQuality, cpp::EnumHandler> */ ,(int)offsetof(GraphicsContext_obj,interpolationQuality),HX_("interpolationQuality",fb,a7,17,2b)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxGraphicsContext > */ ,(int)offsetof(GraphicsContext_obj,graphicscontextRef),HX_("graphicscontextRef",2f,1f,59,67)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsContext_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsContext_obj_sMemberFields[] = {
	HX_("strokeLine",cc,33,51,99),
	HX_("pen",d9,54,55,00),
	HX_("set_pen",7c,ae,cb,19),
	HX_("brush",7a,58,f8,b8),
	HX_("set_brush",dd,a0,f2,df),
	HX_("drawText",d1,76,63,61),
	HX_("drawRoundedRectangle",66,96,b9,cd),
	HX_("drawBitmap",13,8b,cf,32),
	HX_("antialiasMode",31,c5,7f,41),
	HX_("set_antialiasMode",94,a8,5d,6b),
	HX_("interpolationQuality",fb,a7,17,2b),
	HX_("set_interpolationQuality",f8,46,8e,80),
	HX_("graphicscontextRef",2f,1f,59,67),
	HX_("get_graphicscontextRef",78,98,ed,c0),
	::String(null()) };

::hx::Class GraphicsContext_obj::__mClass;

void GraphicsContext_obj::__register()
{
	GraphicsContext_obj _hx_dummy;
	GraphicsContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.GraphicsContext",a7,aa,83,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
