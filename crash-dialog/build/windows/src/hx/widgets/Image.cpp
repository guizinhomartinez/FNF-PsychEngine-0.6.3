#include <hxcpp.h>

#ifndef INCLUDED_1742edf8d3281505
#define INCLUDED_1742edf8d3281505
#include "wx/image.h"
#endif
#ifndef INCLUDED_721c74fa2e6d5326
#define INCLUDED_721c74fa2e6d5326
#include "wx/mstream.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hx_widgets_Image
#include <hx/widgets/Image.h>
#endif
#ifndef INCLUDED_hx_widgets_ImageData
#include <hx/widgets/ImageData.h>
#endif
#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_MemoryInputStream
#include <hx/widgets/MemoryInputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa9e72e6297a3354_107_new,"hx.widgets.Image","new",0xd5fc8bd0,"hx.widgets.Image.new","hx/widgets/Image.hx",107,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_125_get_width,"hx.widgets.Image","get_width",0xf0d701cd,"hx.widgets.Image.get_width","hx/widgets/Image.hx",125,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_130_get_height,"hx.widgets.Image","get_height",0x819a0a40,"hx.widgets.Image.get_height","hx/widgets/Image.hx",130,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_133_scale,"hx.widgets.Image","scale",0x96b145fa,"hx.widgets.Image.scale","hx/widgets/Image.hx",133,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_145_get_hasAlpha,"hx.widgets.Image","get_hasAlpha",0x1e84fc3d,"hx.widgets.Image.get_hasAlpha","hx/widgets/Image.hx",145,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_149_addAlphaChannel,"hx.widgets.Image","addAlphaChannel",0xb820d836,"hx.widgets.Image.addAlphaChannel","hx/widgets/Image.hx",149,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_153_get_imageData,"hx.widgets.Image","get_imageData",0x374b266c,"hx.widgets.Image.get_imageData","hx/widgets/Image.hx",153,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_170_get_imageRef,"hx.widgets.Image","get_imageRef",0xf4cf4751,"hx.widgets.Image.get_imageRef","hx/widgets/Image.hx",170,0x548f18a2)
namespace hx{
namespace widgets{

void Image_obj::__construct( ::haxe::io::Bytes bytes, ::Dynamic width, ::Dynamic height,::hx::Null< bool >  __o_createAlphaChannel){
            		bool createAlphaChannel = __o_createAlphaChannel.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_aa9e72e6297a3354_107_new)
HXDLIN( 107)		super::__construct();
HXLINE( 108)		if (::hx::IsNotNull( bytes )) {
HXLINE( 109)			 ::hx::widgets::MemoryInputStream stream =  ::hx::widgets::MemoryInputStream_obj::__alloc( HX_CTX ,bytes);
HXLINE( 110)			::cpp::Pointer<  wxImage > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxImage(stream->get_memoryinputstreamRef()->get_ref())));
HXDLIN( 110)			this->_ref = _hx_tmp->reinterpret();
HXLINE( 111)			stream->destroy();
            		}
            		else {
HXLINE( 112)			bool _hx_tmp;
HXDLIN( 112)			if (::hx::IsNotNull( width )) {
HXLINE( 112)				_hx_tmp = ::hx::IsNotNull( height );
            			}
            			else {
HXLINE( 112)				_hx_tmp = false;
            			}
HXDLIN( 112)			if (_hx_tmp) {
HXLINE( 113)				::cpp::Pointer<  wxImage > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxImage(( (int)(width) ),( (int)(height) ))));
HXDLIN( 113)				this->_ref = _hx_tmp->reinterpret();
            			}
            		}
HXLINE( 115)		if ((createAlphaChannel == true)) {
HXLINE( 116)			this->addAlphaChannel();
            		}
            	}

Dynamic Image_obj::__CreateEmpty() { return new Image_obj; }

void *Image_obj::_hx_vtable = 0;

Dynamic Image_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Image_obj > _hx_result = new Image_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Image_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x2fe4a720;
	}
}

int Image_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_aa9e72e6297a3354_125_get_width)
HXDLIN( 125)		return this->get_imageRef()->ptr->GetWidth();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_width,return )

int Image_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_aa9e72e6297a3354_130_get_height)
HXDLIN( 130)		return this->get_imageRef()->ptr->GetHeight();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_height,return )

 ::hx::widgets::Image Image_obj::scale(int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_aa9e72e6297a3354_133_scale)
HXLINE( 134)		 wxImage r = this->get_imageRef()->ptr->Scale(width,height);
HXLINE( 135)		int width1 = r.GetWidth();
HXDLIN( 135)		::cpp::Pointer<  wxImage > copy = ::cpp::Pointer_obj::fromRaw((new wxImage(width1,r.GetHeight())));
HXLINE( 136)		copy->ptr->Paste(r,0,0);
HXLINE( 137)		 ::hx::widgets::Image image =  ::hx::widgets::Image_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 138)		image->_ref = copy->reinterpret();
HXLINE( 139)		r.Destroy();
HXLINE( 140)		return image;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,scale,return )

bool Image_obj::get_hasAlpha(){
            	HX_STACKFRAME(&_hx_pos_aa9e72e6297a3354_145_get_hasAlpha)
HXDLIN( 145)		return this->get_imageRef()->ptr->HasAlpha();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_hasAlpha,return )

void Image_obj::addAlphaChannel(){
            	HX_STACKFRAME(&_hx_pos_aa9e72e6297a3354_149_addAlphaChannel)
HXDLIN( 149)		this->get_imageRef()->ptr->SetAlpha(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,addAlphaChannel,(void))

 ::hx::widgets::ImageData Image_obj::get_imageData(){
            	HX_GC_STACKFRAME(&_hx_pos_aa9e72e6297a3354_153_get_imageData)
HXLINE( 154)		unsigned char* rawPointerData = this->get_imageRef()->ptr->GetData();
HXLINE( 155)		::cpp::Pointer< unsigned char > data = ::cpp::Pointer_obj::fromRaw(rawPointerData);
HXLINE( 156)		unsigned char* rawPointerAlpha = this->get_imageRef()->ptr->GetAlpha();
HXLINE( 157)		::cpp::Pointer< unsigned char > alpha = null();
HXLINE( 158)		if (::hx::IsNotNull( rawPointerAlpha )) {
HXLINE( 159)			alpha = ::cpp::Pointer_obj::fromRaw(rawPointerAlpha);
            		}
HXLINE( 161)		 ::hx::widgets::ImageData wrapper =  ::hx::widgets::ImageData_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),data,alpha);
HXLINE( 162)		return wrapper;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_imageData,return )

::cpp::Pointer<  wxImage > Image_obj::get_imageRef(){
            	HX_STACKFRAME(&_hx_pos_aa9e72e6297a3354_170_get_imageRef)
HXDLIN( 170)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_imageRef,return )


::hx::ObjectPtr< Image_obj > Image_obj::__new( ::haxe::io::Bytes bytes, ::Dynamic width, ::Dynamic height,::hx::Null< bool >  __o_createAlphaChannel) {
	::hx::ObjectPtr< Image_obj > __this = new Image_obj();
	__this->__construct(bytes,width,height,__o_createAlphaChannel);
	return __this;
}

::hx::ObjectPtr< Image_obj > Image_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes, ::Dynamic width, ::Dynamic height,::hx::Null< bool >  __o_createAlphaChannel) {
	Image_obj *__this = (Image_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Image_obj), true, "hx.widgets.Image"));
	*(void **)__this = Image_obj::_hx_vtable;
	__this->__construct(bytes,width,height,__o_createAlphaChannel);
	return __this;
}

Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(hasAlpha,"hasAlpha");
	HX_MARK_MEMBER_NAME(imageData,"imageData");
	HX_MARK_MEMBER_NAME(imageRef,"imageRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(hasAlpha,"hasAlpha");
	HX_VISIT_MEMBER_NAME(imageData,"imageData");
	HX_VISIT_MEMBER_NAME(imageRef,"imageRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Image_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAlpha") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasAlpha() : hasAlpha ); }
		if (HX_FIELD_EQ(inName,"imageRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_imageRef() : imageRef ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"imageData") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_imageData() : imageData ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_hasAlpha") ) { return ::hx::Val( get_hasAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imageRef") ) { return ::hx::Val( get_imageRef_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_imageData") ) { return ::hx::Val( get_imageData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addAlphaChannel") ) { return ::hx::Val( addAlphaChannel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Image_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAlpha") ) { hasAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageRef") ) { imageRef=inValue.Cast< ::cpp::Pointer<  wxImage > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageData") ) { imageData=inValue.Cast<  ::hx::widgets::ImageData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("hasAlpha",a4,f1,ee,ad));
	outFields->push(HX_("imageData",25,eb,97,24));
	outFields->push(HX_("imageRef",b8,3c,39,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Image_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Image_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(Image_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsBool,(int)offsetof(Image_obj,hasAlpha),HX_("hasAlpha",a4,f1,ee,ad)},
	{::hx::fsObject /*  ::hx::widgets::ImageData */ ,(int)offsetof(Image_obj,imageData),HX_("imageData",25,eb,97,24)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxImage > */ ,(int)offsetof(Image_obj,imageRef),HX_("imageRef",b8,3c,39,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Image_obj_sStaticStorageInfo = 0;
#endif

static ::String Image_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("get_width",5d,12,0c,0e),
	HX_("height",e7,07,4c,02),
	HX_("get_height",b0,77,d3,f2),
	HX_("scale",8a,ce,ce,78),
	HX_("hasAlpha",a4,f1,ee,ad),
	HX_("get_hasAlpha",ad,a5,08,63),
	HX_("addAlphaChannel",c6,b4,94,e6),
	HX_("imageData",25,eb,97,24),
	HX_("get_imageData",fc,be,fb,e5),
	HX_("imageRef",b8,3c,39,84),
	HX_("get_imageRef",c1,f0,52,39),
	::String(null()) };

::hx::Class Image_obj::__mClass;

void Image_obj::__register()
{
	Image_obj _hx_dummy;
	Image_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Image",de,a3,be,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Image_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Image_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Image_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Image_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
