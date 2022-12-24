#include <hxcpp.h>

#ifndef INCLUDED_934d0db102cb1d0b
#define INCLUDED_934d0db102cb1d0b
#include "wx/graphics.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_SkinablePanel
#include <haxe/ui/backend/hxwidgets/custom/SkinablePanel.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Slice9
#include <haxe/ui/geom/Slice9.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GCDC
#include <hx/widgets/GCDC.h>
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
#ifndef INCLUDED_hx_widgets_OwnerDrawnPanel
#include <hx/widgets/OwnerDrawnPanel.h>
#endif
#ifndef INCLUDED_hx_widgets_Panel
#include <hx/widgets/Panel.h>
#endif
#ifndef INCLUDED_hx_widgets_Rect
#include <hx/widgets/Rect.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_StockBrushes
#include <hx/widgets/StockBrushes.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_WindowStyle
#include <wx/widgets/styles/WindowStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06e26146df0c676e_18_new,"haxe.ui.backend.hxwidgets.custom.SkinablePanel","new",0xf8fc9b1d,"haxe.ui.backend.hxwidgets.custom.SkinablePanel.new","haxe/ui/backend/hxwidgets/custom/SkinablePanel.hx",18,0xe090fb52)
HX_LOCAL_STACK_FRAME(_hx_pos_06e26146df0c676e_25_onPaint,"haxe.ui.backend.hxwidgets.custom.SkinablePanel","onPaint",0x841dc33c,"haxe.ui.backend.hxwidgets.custom.SkinablePanel.onPaint","haxe/ui/backend/hxwidgets/custom/SkinablePanel.hx",25,0xe090fb52)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{

void SkinablePanel_obj::__construct( ::hx::widgets::Window parent){
            	HX_STACKFRAME(&_hx_pos_06e26146df0c676e_18_new)
HXLINE(  19)		this->style = null();
HXLINE(  22)		super::__construct(parent,(::wx::widgets::styles::WindowStyle_obj::FULL_REPAINT_ON_RESIZE | ::wx::widgets::styles::WindowStyle_obj::CLIP_CHILDREN),null());
            	}

Dynamic SkinablePanel_obj::__CreateEmpty() { return new SkinablePanel_obj; }

void *SkinablePanel_obj::_hx_vtable = 0;

Dynamic SkinablePanel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SkinablePanel_obj > _hx_result = new SkinablePanel_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SkinablePanel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2fce02c9) {
			if (inClassId<=(int)0x2045b63e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
			} else {
				return inClassId==(int)0x2fce02c9;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		if (inClassId<=(int)0x7c81fd6e) {
			return inClassId==(int)0x5d92cb6f || inClassId==(int)0x7c81fd6e;
		} else {
			return inClassId==(int)0x7f35ecf3;
		}
	}
}

void SkinablePanel_obj::onPaint( ::hx::widgets::GCDC gdc){
            	HX_GC_STACKFRAME(&_hx_pos_06e26146df0c676e_25_onPaint)
HXLINE(  26)		if (::hx::IsNull( this->style )) {
HXLINE(  27)			return;
            		}
HXLINE(  30)		 ::hx::widgets::Size size = this->get_clientSize();
HXLINE(  31)		int cx = size->width;
HXLINE(  32)		int cy = size->height;
HXLINE(  33)		 ::hx::widgets::GraphicsContext ctx = gdc->get_graphicsContext();
HXLINE(  34)		ctx->set_interpolationQuality(wxINTERPOLATION_NONE);
HXLINE(  35)		if (::hx::IsNotNull( this->style->backgroundColor )) {
HXLINE(  36)			gdc->set_background( ::hx::widgets::Brush_obj::__alloc( HX_CTX ,this->style->backgroundColor));
            		}
            		else {
HXLINE(  38)			gdc->set_background(::hx::widgets::StockBrushes_obj::BRUSH_TRANSPARENT);
            		}
HXLINE(  40)		gdc->clear();
HXLINE(  42)		if (::hx::IsNotNull( this->style->backgroundImage )) {
HXLINE(  43)			 ::hx::widgets::Bitmap backgroundImage = ::hx::widgets::Bitmap_obj::fromHaxeResource(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->style->backgroundImage));
HXLINE(  44)			bool _hx_tmp;
HXDLIN(  44)			bool _hx_tmp1;
HXDLIN(  44)			bool _hx_tmp2;
HXDLIN(  44)			if (::hx::IsNotNull( this->style->backgroundImageClipTop )) {
HXLINE(  44)				_hx_tmp2 = ::hx::IsNotNull( this->style->backgroundImageClipLeft );
            			}
            			else {
HXLINE(  44)				_hx_tmp2 = false;
            			}
HXDLIN(  44)			if (_hx_tmp2) {
HXLINE(  44)				_hx_tmp1 = ::hx::IsNotNull( this->style->backgroundImageClipBottom );
            			}
            			else {
HXLINE(  44)				_hx_tmp1 = false;
            			}
HXDLIN(  44)			if (_hx_tmp1) {
HXLINE(  44)				_hx_tmp = ::hx::IsNotNull( this->style->backgroundImageClipRight );
            			}
            			else {
HXLINE(  44)				_hx_tmp = false;
            			}
HXDLIN(  44)			if (_hx_tmp) {
HXLINE(  48)				int backgroundImage1 = ::Std_obj::_hx_int(( (Float)(this->style->backgroundImageClipLeft) ));
HXDLIN(  48)				int backgroundImage2 = ::Std_obj::_hx_int(( (Float)(this->style->backgroundImageClipTop) ));
HXDLIN(  48)				int backgroundImage3 = ::Std_obj::_hx_int((( (Float)(this->style->backgroundImageClipRight) ) - ( (Float)(this->style->backgroundImageClipLeft) )));
HXDLIN(  48)				backgroundImage = backgroundImage->getSubBitmap( ::hx::widgets::Rect_obj::__alloc( HX_CTX ,backgroundImage1,backgroundImage2,backgroundImage3,::Std_obj::_hx_int((( (Float)(this->style->backgroundImageClipBottom) ) - ( (Float)(this->style->backgroundImageClipTop) )))));
            			}
HXLINE(  51)			bool _hx_tmp3;
HXDLIN(  51)			bool _hx_tmp4;
HXDLIN(  51)			bool _hx_tmp5;
HXDLIN(  51)			if (::hx::IsNotNull( this->style->backgroundImageSliceTop )) {
HXLINE(  51)				_hx_tmp5 = ::hx::IsNotNull( this->style->backgroundImageSliceLeft );
            			}
            			else {
HXLINE(  51)				_hx_tmp5 = false;
            			}
HXDLIN(  51)			if (_hx_tmp5) {
HXLINE(  51)				_hx_tmp4 = ::hx::IsNotNull( this->style->backgroundImageSliceBottom );
            			}
            			else {
HXLINE(  51)				_hx_tmp4 = false;
            			}
HXDLIN(  51)			if (_hx_tmp4) {
HXLINE(  51)				_hx_tmp3 = ::hx::IsNotNull( this->style->backgroundImageSliceRight );
            			}
            			else {
HXLINE(  51)				_hx_tmp3 = false;
            			}
HXDLIN(  51)			if (_hx_tmp3) {
HXLINE(  56)				 ::haxe::ui::geom::Rectangle slice =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,this->style->backgroundImageSliceLeft,this->style->backgroundImageSliceTop,(( (Float)(this->style->backgroundImageSliceRight) ) - ( (Float)(this->style->backgroundImageSliceLeft) )),(( (Float)(this->style->backgroundImageSliceBottom) ) - ( (Float)(this->style->backgroundImageSliceTop) )));
HXLINE(  61)				Float w = ( (Float)(cx) );
HXLINE(  62)				Float h = ( (Float)(cy) );
HXLINE(  63)				int rects = backgroundImage->get_width();
HXDLIN(  63)				 ::Dynamic rects1 = ::haxe::ui::geom::Slice9_obj::buildRects(w,h,( (Float)(rects) ),( (Float)(backgroundImage->get_height()) ),slice);
HXLINE(  65)				{
HXLINE(  65)					int _g = 0;
HXDLIN(  65)					int _g1 = ( (::Array< ::Dynamic>)(rects1->__Field(HX_("src",e4,a6,57,00),::hx::paccDynamic)) )->length;
HXDLIN(  65)					while((_g < _g1)){
HXLINE(  65)						_g = (_g + 1);
HXDLIN(  65)						int i = (_g - 1);
HXLINE(  66)						 ::haxe::ui::geom::Rectangle srcRect = Dynamic(  ::Dynamic(rects1->__Field(HX_("src",e4,a6,57,00),::hx::paccDynamic))->__GetItem(i)).StaticCast<  ::haxe::ui::geom::Rectangle >();
HXLINE(  67)						 ::haxe::ui::geom::Rectangle dstRect = Dynamic(  ::Dynamic(rects1->__Field(HX_("dst",05,46,4c,00),::hx::paccDynamic))->__GetItem(i)).StaticCast<  ::haxe::ui::geom::Rectangle >();
HXLINE(  70)						if ((i == 1)) {
HXLINE(  71)							 ::haxe::ui::geom::Rectangle dstRect1 = dstRect;
HXDLIN(  71)							dstRect1->width = (dstRect1->width + 2);
            						}
            						else {
HXLINE(  73)							if ((i == 3)) {
HXLINE(  74)								 ::haxe::ui::geom::Rectangle dstRect1 = dstRect;
HXDLIN(  74)								dstRect1->height = (dstRect1->height + 2);
            							}
            							else {
HXLINE(  76)								if ((i == 4)) {
HXLINE(  77)									 ::haxe::ui::geom::Rectangle dstRect1 = dstRect;
HXDLIN(  77)									dstRect1->width = (dstRect1->width + 2);
HXLINE(  78)									 ::haxe::ui::geom::Rectangle dstRect2 = dstRect;
HXDLIN(  78)									dstRect2->height = (dstRect2->height + 2);
            								}
            								else {
HXLINE(  80)									if ((i == 5)) {
HXLINE(  81)										 ::haxe::ui::geom::Rectangle dstRect1 = dstRect;
HXDLIN(  81)										dstRect1->height = (dstRect1->height + 2);
            									}
            									else {
HXLINE(  83)										if ((i == 7)) {
HXLINE(  84)											 ::haxe::ui::geom::Rectangle dstRect1 = dstRect;
HXDLIN(  84)											dstRect1->width = (dstRect1->width + 2);
            										}
            									}
            								}
            							}
            						}
HXLINE(  87)						int part = ::Std_obj::_hx_int(srcRect->left);
HXDLIN(  87)						int part1 = ::Std_obj::_hx_int(srcRect->top);
HXDLIN(  87)						int part2 = ::Std_obj::_hx_int(srcRect->width);
HXDLIN(  87)						 ::hx::widgets::Bitmap part3 = backgroundImage->getSubBitmap( ::hx::widgets::Rect_obj::__alloc( HX_CTX ,part,part1,part2,::Std_obj::_hx_int(srcRect->height)));
HXLINE(  88)						ctx->drawBitmap(part3,dstRect->left,dstRect->top,dstRect->width,dstRect->height);
            					}
            				}
            			}
            			else {
HXLINE(  92)				ctx->drawBitmap(backgroundImage,0,0,cx,cy);
            			}
            		}
            	}



::hx::ObjectPtr< SkinablePanel_obj > SkinablePanel_obj::__new( ::hx::widgets::Window parent) {
	::hx::ObjectPtr< SkinablePanel_obj > __this = new SkinablePanel_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< SkinablePanel_obj > SkinablePanel_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent) {
	SkinablePanel_obj *__this = (SkinablePanel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SkinablePanel_obj), true, "haxe.ui.backend.hxwidgets.custom.SkinablePanel"));
	*(void **)__this = SkinablePanel_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

SkinablePanel_obj::SkinablePanel_obj()
{
}

void SkinablePanel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinablePanel);
	HX_MARK_MEMBER_NAME(style,"style");
	 ::hx::widgets::OwnerDrawnPanel_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkinablePanel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(style,"style");
	 ::hx::widgets::OwnerDrawnPanel_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SkinablePanel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return ::hx::Val( style ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onPaint") ) { return ::hx::Val( onPaint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SkinablePanel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkinablePanel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("style",31,a5,1d,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SkinablePanel_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::styles::Style */ ,(int)offsetof(SkinablePanel_obj,style),HX_("style",31,a5,1d,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SkinablePanel_obj_sStaticStorageInfo = 0;
#endif

static ::String SkinablePanel_obj_sMemberFields[] = {
	HX_("style",31,a5,1d,84),
	HX_("onPaint",ff,55,8c,53),
	::String(null()) };

::hx::Class SkinablePanel_obj::__mClass;

void SkinablePanel_obj::__register()
{
	SkinablePanel_obj _hx_dummy;
	SkinablePanel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.custom.SkinablePanel",ab,c8,37,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SkinablePanel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SkinablePanel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SkinablePanel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SkinablePanel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom
