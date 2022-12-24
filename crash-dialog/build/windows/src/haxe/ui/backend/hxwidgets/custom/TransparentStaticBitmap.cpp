#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticBitmap
#include <haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Image
#include <hx/widgets/Image.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBitmap
#include <hx/widgets/StaticBitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_77ae9d7e6f4ad5ac_10_new,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","new",0xb910de5f,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap.new","haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.hx",10,0x4be32310)
HX_LOCAL_STACK_FRAME(_hx_pos_77ae9d7e6f4ad5ac_25_get_scaledMode,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","get_scaledMode",0x37ea0bc7,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap.get_scaledMode","haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.hx",25,0x4be32310)
HX_LOCAL_STACK_FRAME(_hx_pos_77ae9d7e6f4ad5ac_27_set_scaleMode,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","set_scaleMode",0xc239b3af,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap.set_scaleMode","haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.hx",27,0x4be32310)
HX_LOCAL_STACK_FRAME(_hx_pos_77ae9d7e6f4ad5ac_38_bind,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","bind",0x2dc626de,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap.bind","haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.hx",38,0x4be32310)
HX_LOCAL_STACK_FRAME(_hx_pos_77ae9d7e6f4ad5ac_51_doNothing,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","doNothing",0xb7435b01,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap.doNothing","haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.hx",51,0x4be32310)
HX_LOCAL_STACK_FRAME(_hx_pos_77ae9d7e6f4ad5ac_55_onSize,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap","onSize",0xca9424e1,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap.onSize","haxe/ui/backend/hxwidgets/custom/TransparentStaticBitmap.hx",55,0x4be32310)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{

void TransparentStaticBitmap_obj::__construct( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_77ae9d7e6f4ad5ac_10_new)
HXLINE(  23)		this->_scaleMode = HX_("fill",83,ce,bb,43);
HXLINE(  14)		this->scaleMode = HX_("fill",83,ce,bb,43);
HXLINE(  12)		this->_hasUp = true;
HXLINE(  11)		this->_hasDown = true;
HXLINE(  17)		super::__construct(parent,bitmap,id);
HXLINE(  18)		this->super::bind(::wx::widgets::EventType_obj::LEFT_DOWN,this->doNothing_dyn(),null());
HXLINE(  19)		this->super::bind(::wx::widgets::EventType_obj::LEFT_UP,this->doNothing_dyn(),null());
HXLINE(  20)		this->super::bind(::wx::widgets::EventType_obj::SIZE,this->onSize_dyn(),null());
            	}

Dynamic TransparentStaticBitmap_obj::__CreateEmpty() { return new TransparentStaticBitmap_obj; }

void *TransparentStaticBitmap_obj::_hx_vtable = 0;

Dynamic TransparentStaticBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransparentStaticBitmap_obj > _hx_result = new TransparentStaticBitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TransparentStaticBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		if (inClassId<=(int)0x5d92cb6f) {
			return inClassId==(int)0x50654218 || inClassId==(int)0x5d92cb6f;
		} else {
			return inClassId==(int)0x7dfbe1dd;
		}
	}
}

::String TransparentStaticBitmap_obj::get_scaledMode(){
            	HX_STACKFRAME(&_hx_pos_77ae9d7e6f4ad5ac_25_get_scaledMode)
HXDLIN(  25)		return this->_scaleMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TransparentStaticBitmap_obj,get_scaledMode,return )

::String TransparentStaticBitmap_obj::set_scaleMode(::String value){
            	HX_STACKFRAME(&_hx_pos_77ae9d7e6f4ad5ac_27_set_scaleMode)
HXLINE(  28)		if ((this->_scaleMode == value)) {
HXLINE(  29)			return value;
            		}
HXLINE(  32)		this->_scaleMode = value;
HXLINE(  33)		this->onSize(null());
HXLINE(  35)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransparentStaticBitmap_obj,set_scaleMode,return )

void TransparentStaticBitmap_obj::bind(int event, ::Dynamic fn,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_77ae9d7e6f4ad5ac_38_bind)
HXLINE(  39)		bool _hx_tmp;
HXDLIN(  39)		if ((event == ::wx::widgets::EventType_obj::LEFT_DOWN)) {
HXLINE(  39)			_hx_tmp = (this->_hasDown == true);
            		}
            		else {
HXLINE(  39)			_hx_tmp = false;
            		}
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  40)			this->super::unbind(::wx::widgets::EventType_obj::LEFT_DOWN,this->doNothing_dyn(),null());
HXLINE(  41)			this->_hasDown = false;
            		}
HXLINE(  43)		bool _hx_tmp1;
HXDLIN(  43)		if ((event == ::wx::widgets::EventType_obj::LEFT_UP)) {
HXLINE(  43)			_hx_tmp1 = (this->_hasUp == true);
            		}
            		else {
HXLINE(  43)			_hx_tmp1 = false;
            		}
HXDLIN(  43)		if (_hx_tmp1) {
HXLINE(  44)			this->super::unbind(::wx::widgets::EventType_obj::LEFT_UP,this->doNothing_dyn(),null());
HXLINE(  45)			this->_hasUp = false;
            		}
HXLINE(  48)		this->super::bind(event,fn,id);
            	}


void TransparentStaticBitmap_obj::doNothing( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_77ae9d7e6f4ad5ac_51_doNothing)
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransparentStaticBitmap_obj,doNothing,(void))

void TransparentStaticBitmap_obj::onSize( ::hx::widgets::Event _){
            	HX_GC_STACKFRAME(&_hx_pos_77ae9d7e6f4ad5ac_55_onSize)
HXLINE(  56)		 ::hx::widgets::Size s = this->get_size();
HXLINE(  57)		int cx = this->get_size()->width;
HXLINE(  58)		int cy = this->get_size()->height;
HXLINE(  59)		 ::hx::widgets::Bitmap bmp = this->get_bitmap();
HXLINE(  60)		int bmpCX = bmp->get_width();
HXLINE(  61)		int bmpCY = bmp->get_height();
HXLINE(  63)		bool _hx_tmp;
HXDLIN(  63)		if ((cx == bmpCX)) {
HXLINE(  63)			_hx_tmp = (cy != bmpCY);
            		}
            		else {
HXLINE(  63)			_hx_tmp = true;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  65)			Float scaleW = (( (Float)(cx) ) / ( (Float)(bmpCX) ));
HXLINE(  66)			Float scaleH = (( (Float)(cy) ) / ( (Float)(bmpCY) ));
HXLINE(  68)			if ((this->scaleMode != HX_("fill",83,ce,bb,43))) {
HXLINE(  69)				Float scale;
HXLINE(  70)				::String _hx_switch_0 = this->scaleMode;
            				if (  (_hx_switch_0==HX_("fitheight",78,7c,e6,5b)) ){
HXLINE(  78)					scale = scaleH;
HXDLIN(  78)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==HX_("fitinside",8d,b4,7a,f7)) ){
HXLINE(  72)					if ((scaleW < scaleH)) {
HXLINE(  72)						scale = scaleW;
            					}
            					else {
HXLINE(  72)						scale = scaleH;
            					}
HXDLIN(  72)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==HX_("fitoutside",74,17,ea,f3)) ){
HXLINE(  74)					if ((scaleW > scaleH)) {
HXLINE(  74)						scale = scaleW;
            					}
            					else {
HXLINE(  74)						scale = scaleH;
            					}
HXDLIN(  74)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==HX_("fitwidth",95,be,2f,04)) ){
HXLINE(  76)					scale = scaleW;
HXDLIN(  76)					goto _hx_goto_5;
            				}
            				/* default */{
HXLINE(  80)					scale = ( (Float)(1) );
            				}
            				_hx_goto_5:;
HXLINE(  83)				scaleW = scale;
HXLINE(  84)				scaleH = scale;
            			}
HXLINE(  87)			 ::hx::widgets::Image image = bmp->convertToImage();
HXLINE(  88)			int scaled = ::Std_obj::_hx_int((( (Float)(bmpCX) ) * scaleW));
HXDLIN(  88)			 ::hx::widgets::Image scaled1 = image->scale(scaled,::Std_obj::_hx_int((( (Float)(bmpCY) ) * scaleH)));
HXLINE(  89)			this->set_bitmap( ::hx::widgets::Bitmap_obj::__alloc( HX_CTX ,scaled1,null()));
HXLINE(  91)			bmp->destroy();
HXLINE(  92)			image->destroy();
HXLINE(  93)			scaled1->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransparentStaticBitmap_obj,onSize,(void))


::hx::ObjectPtr< TransparentStaticBitmap_obj > TransparentStaticBitmap_obj::__new( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< TransparentStaticBitmap_obj > __this = new TransparentStaticBitmap_obj();
	__this->__construct(parent,bitmap,__o_id);
	return __this;
}

::hx::ObjectPtr< TransparentStaticBitmap_obj > TransparentStaticBitmap_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,::hx::Null< int >  __o_id) {
	TransparentStaticBitmap_obj *__this = (TransparentStaticBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransparentStaticBitmap_obj), true, "haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap"));
	*(void **)__this = TransparentStaticBitmap_obj::_hx_vtable;
	__this->__construct(parent,bitmap,__o_id);
	return __this;
}

TransparentStaticBitmap_obj::TransparentStaticBitmap_obj()
{
}

void TransparentStaticBitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransparentStaticBitmap);
	HX_MARK_MEMBER_NAME(_hasDown,"_hasDown");
	HX_MARK_MEMBER_NAME(_hasUp,"_hasUp");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(_scaleMode,"_scaleMode");
	 ::hx::widgets::StaticBitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransparentStaticBitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hasDown,"_hasDown");
	HX_VISIT_MEMBER_NAME(_hasUp,"_hasUp");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(_scaleMode,"_scaleMode");
	 ::hx::widgets::StaticBitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TransparentStaticBitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_hasUp") ) { return ::hx::Val( _hasUp ); }
		if (HX_FIELD_EQ(inName,"onSize") ) { return ::hx::Val( onSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasDown") ) { return ::hx::Val( _hasDown ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return ::hx::Val( scaleMode ); }
		if (HX_FIELD_EQ(inName,"doNothing") ) { return ::hx::Val( doNothing_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_scaleMode") ) { return ::hx::Val( _scaleMode ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return ::hx::Val( set_scaleMode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_scaledMode") ) { return ::hx::Val( get_scaledMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TransparentStaticBitmap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_hasUp") ) { _hasUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasDown") ) { _hasDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_scaleMode") ) { _scaleMode=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransparentStaticBitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_hasDown",5d,72,6a,4b));
	outFields->push(HX_("_hasUp",96,db,08,1e));
	outFields->push(HX_("scaleMode",0d,db,d3,2b));
	outFields->push(HX_("_scaleMode",ce,56,76,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransparentStaticBitmap_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TransparentStaticBitmap_obj,_hasDown),HX_("_hasDown",5d,72,6a,4b)},
	{::hx::fsBool,(int)offsetof(TransparentStaticBitmap_obj,_hasUp),HX_("_hasUp",96,db,08,1e)},
	{::hx::fsString,(int)offsetof(TransparentStaticBitmap_obj,scaleMode),HX_("scaleMode",0d,db,d3,2b)},
	{::hx::fsString,(int)offsetof(TransparentStaticBitmap_obj,_scaleMode),HX_("_scaleMode",ce,56,76,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TransparentStaticBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String TransparentStaticBitmap_obj_sMemberFields[] = {
	HX_("_hasDown",5d,72,6a,4b),
	HX_("_hasUp",96,db,08,1e),
	HX_("scaleMode",0d,db,d3,2b),
	HX_("_scaleMode",ce,56,76,87),
	HX_("get_scaledMode",66,c7,47,cb),
	HX_("set_scaleMode",f0,90,3d,32),
	HX_("bind",bd,f5,16,41),
	HX_("doNothing",c2,43,dd,4f),
	HX_("onSize",80,a9,dd,ee),
	::String(null()) };

::hx::Class TransparentStaticBitmap_obj::__mClass;

void TransparentStaticBitmap_obj::__register()
{
	TransparentStaticBitmap_obj _hx_dummy;
	TransparentStaticBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap",ed,c2,d4,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransparentStaticBitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransparentStaticBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransparentStaticBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransparentStaticBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom
