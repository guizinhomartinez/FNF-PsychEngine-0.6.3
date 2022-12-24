#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_1b92b9574f32bb54
#define INCLUDED_1b92b9574f32bb54
#include "wx/imaglist.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_ImageList
#include <hx/widgets/ImageList.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45c4453842fbdecb_8_new,"hx.widgets.ImageList","new",0xdb7bb24e,"hx.widgets.ImageList.new","hx/widgets/ImageList.hx",8,0xde9374e4)
HX_LOCAL_STACK_FRAME(_hx_pos_45c4453842fbdecb_17_add,"hx.widgets.ImageList","add",0xdb71d40f,"hx.widgets.ImageList.add","hx/widgets/ImageList.hx",17,0xde9374e4)
HX_LOCAL_STACK_FRAME(_hx_pos_45c4453842fbdecb_25_get_imagelistRef,"hx.widgets.ImageList","get_imagelistRef",0x7d804375,"hx.widgets.ImageList.get_imagelistRef","hx/widgets/ImageList.hx",25,0xde9374e4)
namespace hx{
namespace widgets{

void ImageList_obj::__construct(::hx::Null< int >  __o_width,::hx::Null< int >  __o_height){
            		int width = __o_width.Default(-1);
            		int height = __o_height.Default(-1);
            	HX_STACKFRAME(&_hx_pos_45c4453842fbdecb_8_new)
HXDLIN(   8)		super::__construct();
HXLINE(   9)		bool _hx_tmp;
HXDLIN(   9)		if ((width != -1)) {
HXLINE(   9)			_hx_tmp = (height != -1);
            		}
            		else {
HXLINE(   9)			_hx_tmp = false;
            		}
HXDLIN(   9)		if (_hx_tmp) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxImageList()))->reinterpret();
HXLINE(  11)			this->get_imagelistRef()->ptr->Create(width,height);
            		}
            	}

Dynamic ImageList_obj::__CreateEmpty() { return new ImageList_obj; }

void *ImageList_obj::_hx_vtable = 0;

Dynamic ImageList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageList_obj > _hx_result = new ImageList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ImageList_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x7c22ff9e;
	}
}

int ImageList_obj::add( ::hx::widgets::Bitmap bitmap){
            	HX_STACKFRAME(&_hx_pos_45c4453842fbdecb_17_add)
HXDLIN(  17)		 wxImageList * _hx_tmp = this->get_imagelistRef()->ptr;
HXDLIN(  17)		return (*(_hx_tmp)).Add(bitmap->get_bitmapRef()->get_ref());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,add,return )

::cpp::Pointer<  wxImageList > ImageList_obj::get_imagelistRef(){
            	HX_STACKFRAME(&_hx_pos_45c4453842fbdecb_25_get_imagelistRef)
HXDLIN(  25)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,get_imagelistRef,return )


::hx::ObjectPtr< ImageList_obj > ImageList_obj::__new(::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	::hx::ObjectPtr< ImageList_obj > __this = new ImageList_obj();
	__this->__construct(__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< ImageList_obj > ImageList_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	ImageList_obj *__this = (ImageList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageList_obj), true, "hx.widgets.ImageList"));
	*(void **)__this = ImageList_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height);
	return __this;
}

ImageList_obj::ImageList_obj()
{
}

void ImageList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageList);
	HX_MARK_MEMBER_NAME(imagelistRef,"imagelistRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImageList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(imagelistRef,"imagelistRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ImageList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imagelistRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_imagelistRef() : imagelistRef ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_imagelistRef") ) { return ::hx::Val( get_imagelistRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"imagelistRef") ) { imagelistRef=inValue.Cast< ::cpp::Pointer<  wxImageList > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("imagelistRef",9a,55,fe,2c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageList_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxImageList > */ ,(int)offsetof(ImageList_obj,imagelistRef),HX_("imagelistRef",9a,55,fe,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageList_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageList_obj_sMemberFields[] = {
	HX_("add",21,f2,49,00),
	HX_("imagelistRef",9a,55,fe,2c),
	HX_("get_imagelistRef",23,42,9d,31),
	::String(null()) };

::hx::Class ImageList_obj::__mClass;

void ImageList_obj::__register()
{
	ImageList_obj _hx_dummy;
	ImageList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ImageList",5c,33,cd,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
