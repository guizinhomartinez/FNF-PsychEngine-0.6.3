#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_1742edf8d3281505
#define INCLUDED_1742edf8d3281505
#include "wx/image.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
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
#ifndef INCLUDED_hx_widgets_Rect
#include <hx/widgets/Rect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_733085b67698e96e_13_new,"hx.widgets.Bitmap","new",0x4e2c14fe,"hx.widgets.Bitmap.new","hx/widgets/Bitmap.hx",13,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_26_get_width,"hx.widgets.Bitmap","get_width",0xabaea17b,"hx.widgets.Bitmap.get_width","hx/widgets/Bitmap.hx",26,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_31_get_height,"hx.widgets.Bitmap","get_height",0x436e22d2,"hx.widgets.Bitmap.get_height","hx/widgets/Bitmap.hx",31,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_36_get_isOk,"hx.widgets.Bitmap","get_isOk",0xb98de9d1,"hx.widgets.Bitmap.get_isOk","hx/widgets/Bitmap.hx",36,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_40_getSubBitmap,"hx.widgets.Bitmap","getSubBitmap",0xb3a421bb,"hx.widgets.Bitmap.getSubBitmap","hx/widgets/Bitmap.hx",40,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_51_convertToImage,"hx.widgets.Bitmap","convertToImage",0xfbac6e4f,"hx.widgets.Bitmap.convertToImage","hx/widgets/Bitmap.hx",51,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_62_equals,"hx.widgets.Bitmap","equals",0x040ce061,"hx.widgets.Bitmap.equals","hx/widgets/Bitmap.hx",62,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_86_get_bitmapRef,"hx.widgets.Bitmap","get_bitmapRef",0x31df2a99,"hx.widgets.Bitmap.get_bitmapRef","hx/widgets/Bitmap.hx",86,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_69_fromHaxeResource,"hx.widgets.Bitmap","fromHaxeResource",0x8836fc40,"hx.widgets.Bitmap.fromHaxeResource","hx/widgets/Bitmap.hx",69,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_72_fromHaxeBytes,"hx.widgets.Bitmap","fromHaxeBytes",0xac952db9,"hx.widgets.Bitmap.fromHaxeBytes","hx/widgets/Bitmap.hx",72,0x59587af0)
namespace hx{
namespace widgets{

void Bitmap_obj::__construct( ::hx::widgets::Image image,::cpp::Pointer<  wxBitmap > bitmap){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_13_new)
HXDLIN(  13)		super::__construct();
HXLINE(  14)		if (::hx::IsNotNull( image )) {
HXLINE(  15)			::cpp::Pointer<  wxBitmap > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxBitmap(image->get_imageRef()->get_ref())));
HXDLIN(  15)			this->_ref = _hx_tmp->reinterpret();
            		}
            		else {
HXLINE(  16)			if (::hx::IsNotNull( bitmap )) {
HXLINE(  17)				this->_ref = bitmap->reinterpret();
            			}
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0162a16c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0162a16c;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x593c61a6;
	}
}

int Bitmap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_26_get_width)
HXDLIN(  26)		return this->get_bitmapRef()->ptr->GetWidth();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_width,return )

int Bitmap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_31_get_height)
HXDLIN(  31)		return this->get_bitmapRef()->ptr->GetHeight();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_height,return )

bool Bitmap_obj::get_isOk(){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_36_get_isOk)
HXDLIN(  36)		return this->get_bitmapRef()->ptr->IsOk();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_isOk,return )

 ::hx::widgets::Bitmap Bitmap_obj::getSubBitmap( ::hx::widgets::Rect rect){
            	HX_GC_STACKFRAME(&_hx_pos_733085b67698e96e_40_getSubBitmap)
HXLINE(  41)		::cpp::Pointer<  wxRect > r = rect->createPointer();
HXLINE(  42)		 wxBitmap * sub = this->get_bitmapRef()->ptr;
HXDLIN(  42)		 wxBitmap sub1 = (*(sub)).GetSubBitmap(r->get_ref());
HXLINE(  43)		r->destroy();
HXLINE(  45)		 ::hx::widgets::Bitmap bmp =  ::hx::widgets::Bitmap_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  46)		bmp->_ref = ::cpp::Pointer_obj::fromRaw((new wxBitmap(sub1)))->reinterpret();
HXLINE(  48)		return bmp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,getSubBitmap,return )

 ::hx::widgets::Image Bitmap_obj::convertToImage(){
            	HX_GC_STACKFRAME(&_hx_pos_733085b67698e96e_51_convertToImage)
HXLINE(  52)		 wxImage r = this->get_bitmapRef()->ptr->ConvertToImage();
HXLINE(  53)		int width = r.GetWidth();
HXDLIN(  53)		::cpp::Pointer<  wxImage > copy = ::cpp::Pointer_obj::fromRaw((new wxImage(width,r.GetHeight())));
HXLINE(  54)		copy->ptr->Paste(r,0,0);
HXLINE(  55)		 ::hx::widgets::Image image =  ::hx::widgets::Image_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  56)		image->_ref = copy->reinterpret();
HXLINE(  57)		r.Destroy();
HXLINE(  58)		return image;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,convertToImage,return )

bool Bitmap_obj::equals( ::hx::widgets::Bitmap bmp){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_62_equals)
HXDLIN(  62)		 wxObject* _hx_tmp = bmp->_ref->get_raw();
HXDLIN(  62)		return ::hx::IsEq( _hx_tmp,this->_ref->get_raw() );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,equals,return )

::cpp::Pointer<  wxBitmap > Bitmap_obj::get_bitmapRef(){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_86_get_bitmapRef)
HXDLIN(  86)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_bitmapRef,return )

 ::hx::widgets::Bitmap Bitmap_obj::fromHaxeResource(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_69_fromHaxeResource)
HXDLIN(  69)		return ::hx::widgets::Bitmap_obj::fromHaxeBytes(::haxe::Resource_obj::getBytes(resourceId));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,fromHaxeResource,return )

 ::hx::widgets::Bitmap Bitmap_obj::fromHaxeBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_733085b67698e96e_72_fromHaxeBytes)
HXLINE(  73)		if (::hx::IsNull( bytes )) {
HXLINE(  74)			return null();
            		}
HXLINE(  77)		 ::hx::widgets::Image image =  ::hx::widgets::Image_obj::__alloc( HX_CTX ,bytes,null(),null(),null());
HXLINE(  78)		return  ::hx::widgets::Bitmap_obj::__alloc( HX_CTX ,image,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,fromHaxeBytes,return )


::hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::hx::widgets::Image image,::cpp::Pointer<  wxBitmap > bitmap) {
	::hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(image,bitmap);
	return __this;
}

::hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Image image,::cpp::Pointer<  wxBitmap > bitmap) {
	Bitmap_obj *__this = (Bitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "hx.widgets.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(image,bitmap);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(isOk,"isOk");
	HX_MARK_MEMBER_NAME(bitmapRef,"bitmapRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(isOk,"isOk");
	HX_VISIT_MEMBER_NAME(bitmapRef,"bitmapRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Bitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"isOk") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isOk() : isOk ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_isOk") ) { return ::hx::Val( get_isOk_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"bitmapRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bitmapRef() : bitmapRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSubBitmap") ) { return ::hx::Val( getSubBitmap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_bitmapRef") ) { return ::hx::Val( get_bitmapRef_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"convertToImage") ) { return ::hx::Val( convertToImage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"fromHaxeBytes") ) { outValue = fromHaxeBytes_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromHaxeResource") ) { outValue = fromHaxeResource_dyn(); return true; }
	}
	return false;
}

::hx::Val Bitmap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"isOk") ) { isOk=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapRef") ) { bitmapRef=inValue.Cast< ::cpp::Pointer<  wxBitmap > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("isOk",a6,ef,be,45));
	outFields->push(HX_("bitmapRef",a4,e0,df,c6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Bitmap_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(Bitmap_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsBool,(int)offsetof(Bitmap_obj,isOk),HX_("isOk",a6,ef,be,45)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxBitmap > */ ,(int)offsetof(Bitmap_obj,bitmapRef),HX_("bitmapRef",a4,e0,df,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("get_width",5d,12,0c,0e),
	HX_("height",e7,07,4c,02),
	HX_("get_height",b0,77,d3,f2),
	HX_("isOk",a6,ef,be,45),
	HX_("get_isOk",2f,ab,79,c5),
	HX_("getSubBitmap",19,ea,ae,06),
	HX_("convertToImage",2d,8a,40,3d),
	HX_("equals",3f,ee,f2,bf),
	HX_("bitmapRef",a4,e0,df,c6),
	HX_("get_bitmapRef",7b,b4,43,88),
	::String(null()) };

::hx::Class Bitmap_obj::__mClass;

static ::String Bitmap_obj_sStaticFields[] = {
	HX_("fromHaxeResource",9e,4b,f0,6b),
	HX_("fromHaxeBytes",9b,b7,f9,02),
	::String(null())
};

void Bitmap_obj::__register()
{
	Bitmap_obj _hx_dummy;
	Bitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Bitmap",0c,7e,8a,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Bitmap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
