#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Image_ImageLayout
#include <haxe/ui/components/_Image/ImageLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a7c5d462e41551f_85_new,"haxe.ui.components._Image.ImageLayout","new",0xd32c1ecb,"haxe.ui.components._Image.ImageLayout.new","haxe/ui/components/Image.hx",85,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_88_get_imageScaleMode,"haxe.ui.components._Image.ImageLayout","get_imageScaleMode",0xa384daf0,"haxe.ui.components._Image.ImageLayout.get_imageScaleMode","haxe/ui/components/Image.hx",88,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_93_get_imageHorizontalAlign,"haxe.ui.components._Image.ImageLayout","get_imageHorizontalAlign",0x10ea1b64,"haxe.ui.components._Image.ImageLayout.get_imageHorizontalAlign","haxe/ui/components/Image.hx",93,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_98_get_imageVerticalAlign,"haxe.ui.components._Image.ImageLayout","get_imageVerticalAlign",0xd60e4bd2,"haxe.ui.components._Image.ImageLayout.get_imageVerticalAlign","haxe/ui/components/Image.hx",98,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_102_resizeChildren,"haxe.ui.components._Image.ImageLayout","resizeChildren",0x7bc186c8,"haxe.ui.components._Image.ImageLayout.resizeChildren","haxe/ui/components/Image.hx",102,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_146_repositionChildren,"haxe.ui.components._Image.ImageLayout","repositionChildren",0xaa97a2b0,"haxe.ui.components._Image.ImageLayout.repositionChildren","haxe/ui/components/Image.hx",146,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_174_calcAutoSize,"haxe.ui.components._Image.ImageLayout","calcAutoSize",0x1f0d8dba,"haxe.ui.components._Image.ImageLayout.calcAutoSize","haxe/ui/components/Image.hx",174,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_183_refresh,"haxe.ui.components._Image.ImageLayout","refresh",0xe91839c6,"haxe.ui.components._Image.ImageLayout.refresh","haxe/ui/components/Image.hx",183,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_190_updateClipRect,"haxe.ui.components._Image.ImageLayout","updateClipRect",0x4825c6b2,"haxe.ui.components._Image.ImageLayout.updateClipRect","haxe/ui/components/Image.hx",190,0xeed4974a)
namespace haxe{
namespace ui{
namespace components{
namespace _Image{

void ImageLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_85_new)
HXDLIN(  85)		super::__construct();
            	}

Dynamic ImageLayout_obj::__CreateEmpty() { return new ImageLayout_obj; }

void *ImageLayout_obj::_hx_vtable = 0;

Dynamic ImageLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageLayout_obj > _hx_result = new ImageLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x355152f9) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x355152f9;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

::String ImageLayout_obj::get_imageScaleMode(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_88_get_imageScaleMode)
HXDLIN(  88)		return ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component)->get_scaleMode();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,get_imageScaleMode,return )

::String ImageLayout_obj::get_imageHorizontalAlign(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_93_get_imageHorizontalAlign)
HXDLIN(  93)		return ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component)->get_imageHorizontalAlign();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,get_imageHorizontalAlign,return )

::String ImageLayout_obj::get_imageVerticalAlign(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_98_get_imageVerticalAlign)
HXDLIN(  98)		return ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component)->get_imageVerticalAlign();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,get_imageVerticalAlign,return )

void ImageLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_102_resizeChildren)
HXDLIN( 102)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 103)			 ::haxe::ui::components::Image image = ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component);
HXLINE( 104)			 ::haxe::ui::core::ImageDisplay imageDisplay = image->getImageDisplay();
HXLINE( 105)			Float maxWidth = this->get_usableSize()->width;
HXLINE( 106)			Float maxHeight = this->get_usableSize()->height;
HXLINE( 107)			if ((this->get_component()->get_autoWidth() == true)) {
HXLINE( 108)				maxWidth = ( (Float)(-1) );
            			}
HXLINE( 111)			if ((this->_component->get_autoHeight() == true)) {
HXLINE( 112)				maxHeight = ( (Float)(-1) );
            			}
HXLINE( 115)			Float scaleW;
HXDLIN( 115)			if ((maxWidth != -1)) {
HXLINE( 115)				scaleW = (maxWidth / image->get_originalWidth());
            			}
            			else {
HXLINE( 115)				scaleW = ( (Float)(1) );
            			}
HXLINE( 116)			Float scaleH;
HXDLIN( 116)			if ((maxHeight != -1)) {
HXLINE( 116)				scaleH = (maxHeight / image->get_originalHeight());
            			}
            			else {
HXLINE( 116)				scaleH = ( (Float)(1) );
            			}
HXLINE( 118)			scaleW = (scaleW * image->get_imageScale());
HXLINE( 119)			scaleH = (scaleH * image->get_imageScale());
HXLINE( 121)			if ((this->get_imageScaleMode() != HX_("fill",83,ce,bb,43))) {
HXLINE( 122)				Float scale;
HXLINE( 123)				::String _hx_switch_0 = this->get_imageScaleMode();
            				if (  (_hx_switch_0==HX_("fitheight",78,7c,e6,5b)) ){
HXLINE( 131)					scale = scaleH;
HXDLIN( 131)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("fitinside",8d,b4,7a,f7)) ){
HXLINE( 125)					if ((scaleW < scaleH)) {
HXLINE( 125)						scale = scaleW;
            					}
            					else {
HXLINE( 125)						scale = scaleH;
            					}
HXDLIN( 125)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("fitoutside",74,17,ea,f3)) ){
HXLINE( 127)					if ((scaleW > scaleH)) {
HXLINE( 127)						scale = scaleW;
            					}
            					else {
HXLINE( 127)						scale = scaleH;
            					}
HXDLIN( 127)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("fitwidth",95,be,2f,04)) ){
HXLINE( 129)					scale = scaleW;
HXDLIN( 129)					goto _hx_goto_4;
            				}
            				/* default */{
HXLINE( 133)					scale = ( (Float)(1) );
            				}
            				_hx_goto_4:;
HXLINE( 136)				imageDisplay->set_imageWidth((image->get_originalWidth() * scale));
HXLINE( 137)				imageDisplay->set_imageHeight((image->get_originalHeight() * scale));
            			}
            			else {
HXLINE( 139)				imageDisplay->set_imageWidth((image->get_originalWidth() * scaleW));
HXLINE( 140)				imageDisplay->set_imageHeight((image->get_originalHeight() * scaleH));
            			}
            		}
            	}


void ImageLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_146_repositionChildren)
HXDLIN( 146)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 147)			 ::haxe::ui::components::Image image = ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component);
HXLINE( 148)			 ::haxe::ui::core::ImageDisplay imageDisplay = this->_component->getImageDisplay();
HXLINE( 150)			::String _hx_switch_0 = image->get_imageHorizontalAlign();
            			if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 152)				 ::Dynamic _hx_tmp = this->_component->get_componentWidth();
HXDLIN( 152)				imageDisplay->set_left(((( (Float)(_hx_tmp) ) - imageDisplay->get_imageWidth()) / ( (Float)(2) )));
HXDLIN( 152)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 158)				imageDisplay->set_left(this->get_paddingLeft());
HXDLIN( 158)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 155)				 ::Dynamic _hx_tmp = this->_component->get_componentWidth();
HXDLIN( 155)				Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - imageDisplay->get_imageWidth());
HXDLIN( 155)				imageDisplay->set_left((_hx_tmp1 - this->get_paddingRight()));
HXDLIN( 155)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE( 161)			::String _hx_switch_1 = image->get_imageVerticalAlign();
            			if (  (_hx_switch_1==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 166)				 ::Dynamic _hx_tmp = this->_component->get_componentHeight();
HXDLIN( 166)				Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - imageDisplay->get_imageHeight());
HXDLIN( 166)				imageDisplay->set_top((_hx_tmp1 - this->get_paddingBottom()));
HXDLIN( 166)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 163)				 ::Dynamic _hx_tmp = this->_component->get_componentHeight();
HXDLIN( 163)				imageDisplay->set_top(((( (Float)(_hx_tmp) ) - imageDisplay->get_imageHeight()) / ( (Float)(2) )));
HXDLIN( 163)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_1==HX_("top",95,66,58,00)) ){
HXLINE( 169)				imageDisplay->set_top(this->get_paddingTop());
HXDLIN( 169)				goto _hx_goto_7;
            			}
            			_hx_goto_7:;
            		}
            	}


 ::haxe::ui::geom::Size ImageLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_174_calcAutoSize)
HXLINE( 175)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 176)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 177)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 177)			Float size2 = size1->width;
HXDLIN( 177)			size1->width = (size2 + this->get_component()->getImageDisplay()->get_imageWidth());
HXLINE( 178)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN( 178)			Float size4 = size3->height;
HXDLIN( 178)			size3->height = (size4 + this->get_component()->getImageDisplay()->get_imageHeight());
            		}
HXLINE( 180)		return size;
            	}


void ImageLayout_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_183_refresh)
HXLINE( 184)		this->super::refresh();
HXLINE( 186)		this->updateClipRect();
            	}


void ImageLayout_obj::updateClipRect(){
            	HX_GC_STACKFRAME(&_hx_pos_5a7c5d462e41551f_190_updateClipRect)
HXDLIN( 190)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 191)			 ::haxe::ui::geom::Size usz = this->get_usableSize();
HXLINE( 192)			 ::haxe::ui::core::ImageDisplay imageDisplay = this->get_component()->getImageDisplay();
HXLINE( 193)			 ::haxe::ui::geom::Rectangle rc = imageDisplay->get_imageClipRect();
HXLINE( 195)			bool _hx_tmp;
HXDLIN( 195)			Float _hx_tmp1 = imageDisplay->get_imageWidth();
HXDLIN( 195)			if (!((_hx_tmp1 > usz->width))) {
HXLINE( 196)				Float _hx_tmp1 = imageDisplay->get_imageHeight();
HXLINE( 195)				_hx_tmp = (_hx_tmp1 > usz->height);
            			}
            			else {
HXLINE( 195)				_hx_tmp = true;
            			}
HXDLIN( 195)			if (_hx_tmp) {
HXLINE( 197)				if (::hx::IsNull( rc )) {
HXLINE( 198)					rc =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXLINE( 201)				rc->top = this->get_paddingLeft();
HXLINE( 202)				rc->left = this->get_paddingTop();
HXLINE( 203)				rc->width = usz->width;
HXLINE( 204)				rc->height = usz->height;
            			}
            			else {
HXLINE( 206)				rc = null();
            			}
HXLINE( 209)			imageDisplay->set_imageClipRect(rc);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,updateClipRect,(void))


::hx::ObjectPtr< ImageLayout_obj > ImageLayout_obj::__new() {
	::hx::ObjectPtr< ImageLayout_obj > __this = new ImageLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ImageLayout_obj > ImageLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ImageLayout_obj *__this = (ImageLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageLayout_obj), true, "haxe.ui.components._Image.ImageLayout"));
	*(void **)__this = ImageLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageLayout_obj::ImageLayout_obj()
{
}

::hx::Val ImageLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return ::hx::Val( refresh_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"imageScaleMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageScaleMode() ); }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateClipRect") ) { return ::hx::Val( updateClipRect_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_imageScaleMode") ) { return ::hx::Val( get_imageScaleMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"imageVerticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageVerticalAlign() ); }
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"imageHorizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageHorizontalAlign() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_imageVerticalAlign") ) { return ::hx::Val( get_imageVerticalAlign_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_imageHorizontalAlign") ) { return ::hx::Val( get_imageHorizontalAlign_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void ImageLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("imageScaleMode",32,58,1a,fa));
	outFields->push(HX_("imageHorizontalAlign",26,f6,c3,b8));
	outFields->push(HX_("imageVerticalAlign",14,92,18,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ImageLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageLayout_obj_sMemberFields[] = {
	HX_("get_imageScaleMode",fb,38,b4,95),
	HX_("get_imageHorizontalAlign",af,13,60,fb),
	HX_("get_imageVerticalAlign",5d,0b,ad,0b),
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("refresh",db,d9,20,ed),
	HX_("updateClipRect",3d,83,94,8d),
	::String(null()) };

::hx::Class ImageLayout_obj::__mClass;

void ImageLayout_obj::__register()
{
	ImageLayout_obj _hx_dummy;
	ImageLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Image.ImageLayout",59,5d,d4,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Image
