#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ImageLoader
#include <haxe/ui/util/ImageLoader.h>
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
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d91662fd4fb13014_13_new,"haxe.ui.util.ImageLoader","new",0xc6924146,"haxe.ui.util.ImageLoader.new","haxe/ui/util/ImageLoader.hx",13,0x67cd160b)
HX_LOCAL_STACK_FRAME(_hx_pos_d91662fd4fb13014_17_load,"haxe.ui.util.ImageLoader","load",0xf81bf280,"haxe.ui.util.ImageLoader.load","haxe/ui/util/ImageLoader.hx",17,0x67cd160b)
HX_LOCAL_STACK_FRAME(_hx_pos_d91662fd4fb13014_28_load,"haxe.ui.util.ImageLoader","load",0xf81bf280,"haxe.ui.util.ImageLoader.load","haxe/ui/util/ImageLoader.hx",28,0x67cd160b)
HX_LOCAL_STACK_FRAME(_hx_pos_d91662fd4fb13014_33_load,"haxe.ui.util.ImageLoader","load",0xf81bf280,"haxe.ui.util.ImageLoader.load","haxe/ui/util/ImageLoader.hx",33,0x67cd160b)
HX_LOCAL_STACK_FRAME(_hx_pos_d91662fd4fb13014_128_loadFromHttp,"haxe.ui.util.ImageLoader","loadFromHttp",0x35a698b2,"haxe.ui.util.ImageLoader.loadFromHttp","haxe/ui/util/ImageLoader.hx",128,0x67cd160b)
HX_LOCAL_STACK_FRAME(_hx_pos_d91662fd4fb13014_176_loadFromHttp,"haxe.ui.util.ImageLoader","loadFromHttp",0x35a698b2,"haxe.ui.util.ImageLoader.loadFromHttp","haxe/ui/util/ImageLoader.hx",176,0x67cd160b)
HX_LOCAL_STACK_FRAME(_hx_pos_d91662fd4fb13014_179_loadFromHttp,"haxe.ui.util.ImageLoader","loadFromHttp",0x35a698b2,"haxe.ui.util.ImageLoader.loadFromHttp","haxe/ui/util/ImageLoader.hx",179,0x67cd160b)
HX_LOCAL_STACK_FRAME(_hx_pos_d91662fd4fb13014_49_loadFromHttp,"haxe.ui.util.ImageLoader","loadFromHttp",0x35a698b2,"haxe.ui.util.ImageLoader.loadFromHttp","haxe/ui/util/ImageLoader.hx",49,0x67cd160b)
static const int _hx_array_data_17c2e654_8[] = {
	(int)-1,
};
namespace haxe{
namespace ui{
namespace util{

void ImageLoader_obj::__construct( ::haxe::ui::util::VariantType resource){
            	HX_STACKFRAME(&_hx_pos_d91662fd4fb13014_13_new)
HXDLIN(  13)		this->_resource = resource;
            	}

Dynamic ImageLoader_obj::__CreateEmpty() { return new ImageLoader_obj; }

void *ImageLoader_obj::_hx_vtable = 0;

Dynamic ImageLoader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageLoader_obj > _hx_result = new ImageLoader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ImageLoader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6efa3c32;
}

void ImageLoader_obj::load( ::Dynamic callback,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_d91662fd4fb13014_17_load)
HXDLIN(  17)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(this->_resource)) {
HXLINE(  18)			::Array< ::String > stringResource = ::Array_obj< ::String >::__new(1)->init(0,::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_resource));
HXLINE(  19)			if ((useCache == true)) {
HXLINE(  20)				 ::haxe::ui::ToolkitAssets cachedImage = ::haxe::ui::ToolkitAssets_obj::get_instance();
HXDLIN(  20)				 ::Dynamic cachedImage1 = cachedImage->getCachedImage(stringResource->__get(0));
HXLINE(  21)				if (::hx::IsNotNull( cachedImage1 )) {
HXLINE(  22)					callback(cachedImage1);
HXLINE(  23)					return;
            				}
            			}
HXLINE(  26)			stringResource[0] = ::StringTools_obj::trim(stringResource->__get(0));
HXLINE(  27)			bool _hx_tmp;
HXDLIN(  27)			if (!(::StringTools_obj::startsWith(stringResource->__get(0),HX_("http://",52,75,cd,5a)))) {
HXLINE(  27)				_hx_tmp = ::StringTools_obj::startsWith(stringResource->__get(0),HX_("https://",cf,b4,ae,3e));
            			}
            			else {
HXLINE(  27)				_hx_tmp = true;
            			}
HXDLIN(  27)			if (_hx_tmp) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,stringResource, ::Dynamic,callback) HXARGC(1)
            				void _hx_run( ::Dynamic imageInfo){
            					HX_STACKFRAME(&_hx_pos_d91662fd4fb13014_28_load)
HXLINE(  29)					 ::haxe::ui::ToolkitAssets _hx_tmp = ::haxe::ui::ToolkitAssets_obj::get_instance();
HXDLIN(  29)					_hx_tmp->cacheImage(stringResource->__get(0),imageInfo);
HXLINE(  30)					callback(imageInfo);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  28)				this->loadFromHttp(stringResource->__get(0), ::Dynamic(new _hx_Closure_0(stringResource,callback)));
            			}
            			else {
HXLINE(  32)				if (::StringTools_obj::startsWith(stringResource->__get(0),HX_("file://",de,92,3b,ff))) {
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Array< ::String >,stringResource, ::Dynamic,callback) HXARGC(1)
            					void _hx_run( ::Dynamic imageInfo){
            						HX_STACKFRAME(&_hx_pos_d91662fd4fb13014_33_load)
HXLINE(  34)						 ::haxe::ui::ToolkitAssets _hx_tmp = ::haxe::ui::ToolkitAssets_obj::get_instance();
HXDLIN(  34)						_hx_tmp->cacheImage(stringResource->__get(0),imageInfo);
HXLINE(  35)						callback(imageInfo);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  33)					 ::haxe::ui::ToolkitAssets _hx_tmp = ::haxe::ui::Toolkit_obj::get_assets();
HXDLIN(  33)					_hx_tmp->imageFromFile(stringResource->__get(0).substr(7,null()), ::Dynamic(new _hx_Closure_1(stringResource,callback)));
            				}
            				else {
HXLINE(  38)					 ::haxe::ui::ToolkitAssets _hx_tmp = ::haxe::ui::Toolkit_obj::get_assets();
HXDLIN(  38)					_hx_tmp->getImage(stringResource->__get(0),callback,null());
            				}
            			}
            		}
            		else {
HXLINE(  41)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isImageData(this->_resource)) {
HXLINE(  42)				 ::hx::widgets::Bitmap imageData = ::haxe::ui::util::_Variant::Variant_Impl__obj::toImageData(this->_resource);
HXLINE(  43)				if (::hx::IsNotNull( callback )) {
HXLINE(  44)					 ::Dynamic callback1 = callback;
HXDLIN(  44)					callback1(::haxe::ui::ToolkitAssets_obj::get_instance()->imageInfoFromImageData(imageData));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ImageLoader_obj,load,(void))

void ImageLoader_obj::loadFromHttp(::String url, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::util::ImageLoader,_gthis, ::sys::Http,http,::Array< int >,httpStatus,::String,url, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::haxe::io::Bytes data){
            			HX_GC_STACKFRAME(&_hx_pos_d91662fd4fb13014_128_loadFromHttp)
HXLINE( 128)			bool _hx_tmp;
HXDLIN( 128)			if (::hx::IsNotNull( data )) {
HXLINE( 128)				_hx_tmp = (data->length > 0);
            			}
            			else {
HXLINE( 128)				_hx_tmp = false;
            			}
HXDLIN( 128)			if (_hx_tmp) {
HXLINE( 129)				::haxe::ui::Toolkit_obj::get_assets()->imageFromBytes(data,callback);
            			}
            			else {
HXLINE( 131)				bool _hx_tmp;
HXDLIN( 131)				if ((httpStatus->__get(0) != 301)) {
HXLINE( 131)					_hx_tmp = (httpStatus->__get(0) == 302);
            				}
            				else {
HXLINE( 131)					_hx_tmp = true;
            				}
HXDLIN( 131)				if (_hx_tmp) {
HXLINE( 132)					::String location = http->responseHeaders->get_string(HX_("location",35,6e,46,e5));
HXLINE( 133)					if (::hx::IsNull( location )) {
HXLINE( 134)						location = http->responseHeaders->get_string(HX_("Location",55,2a,f8,be));
            					}
HXLINE( 136)					if (::hx::IsNotNull( location )) {
HXLINE( 137)						_gthis->loadFromHttp(location,callback);
            					}
            					else {
HXLINE( 139)						::haxe::Log_obj::trace(((HX_("WARNING: redirect encounters but no location header found (http status: ",70,88,f9,10) + httpStatus->__get(0)) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/util/ImageLoader.hx",0b,16,cd,67),139,HX_("haxe.ui.util.ImageLoader",54,e6,c2,17),HX_("loadFromHttp",58,56,4b,5c)));
HXLINE( 140)						callback(null());
            					}
            				}
            				else {
HXLINE( 143)					::haxe::Log_obj::trace(((((HX_("WARNING: 0 length bytes found for '",55,2a,c1,5b) + url) + HX_("' (http status: ",a1,e0,83,d1)) + httpStatus->__get(0)) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/util/ImageLoader.hx",0b,16,cd,67),143,HX_("haxe.ui.util.ImageLoader",54,e6,c2,17),HX_("loadFromHttp",58,56,4b,5c)));
HXLINE( 144)					callback(null());
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< int >,httpStatus) HXARGC(1)
            		void _hx_run(int status){
            			HX_GC_STACKFRAME(&_hx_pos_d91662fd4fb13014_176_loadFromHttp)
HXLINE( 176)			httpStatus[0] = status;
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2,::Array< int >,httpStatus, ::Dynamic,callback) HXARGC(1)
            		void _hx_run(::String msg){
            			HX_GC_STACKFRAME(&_hx_pos_d91662fd4fb13014_179_loadFromHttp)
HXLINE( 180)			::haxe::Log_obj::trace((((msg + HX_(" (http status: ",e8,9c,2d,79)) + httpStatus->__get(0)) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/util/ImageLoader.hx",0b,16,cd,67),180,HX_("haxe.ui.util.ImageLoader",54,e6,c2,17),HX_("loadFromHttp",58,56,4b,5c)));
HXLINE( 181)			callback(null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_d91662fd4fb13014_49_loadFromHttp)
HXDLIN(  49)		 ::haxe::ui::util::ImageLoader _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 123)		 ::sys::Http http =  ::sys::Http_obj::__alloc( HX_CTX ,url);
HXLINE( 124)		::Array< int > httpStatus = ::Array_obj< int >::fromData( _hx_array_data_17c2e654_8,1);
HXLINE( 127)		http->onBytes =  ::Dynamic(new _hx_Closure_0(_gthis,http,httpStatus,url,callback));
HXLINE( 175)		http->onStatus =  ::Dynamic(new _hx_Closure_1(httpStatus));
HXLINE( 179)		http->onError =  ::Dynamic(new _hx_Closure_2(httpStatus,callback));
HXLINE( 184)		http->request(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ImageLoader_obj,loadFromHttp,(void))


::hx::ObjectPtr< ImageLoader_obj > ImageLoader_obj::__new( ::haxe::ui::util::VariantType resource) {
	::hx::ObjectPtr< ImageLoader_obj > __this = new ImageLoader_obj();
	__this->__construct(resource);
	return __this;
}

::hx::ObjectPtr< ImageLoader_obj > ImageLoader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::util::VariantType resource) {
	ImageLoader_obj *__this = (ImageLoader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageLoader_obj), true, "haxe.ui.util.ImageLoader"));
	*(void **)__this = ImageLoader_obj::_hx_vtable;
	__this->__construct(resource);
	return __this;
}

ImageLoader_obj::ImageLoader_obj()
{
}

void ImageLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageLoader);
	HX_MARK_MEMBER_NAME(_resource,"_resource");
	HX_MARK_END_CLASS();
}

void ImageLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_resource,"_resource");
}

::hx::Val ImageLoader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resource") ) { return ::hx::Val( _resource ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromHttp") ) { return ::hx::Val( loadFromHttp_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageLoader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_resource") ) { _resource=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_resource",2d,54,36,5a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageLoader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(ImageLoader_obj,_resource),HX_("_resource",2d,54,36,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageLoader_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageLoader_obj_sMemberFields[] = {
	HX_("_resource",2d,54,36,5a),
	HX_("load",26,9a,b7,47),
	HX_("loadFromHttp",58,56,4b,5c),
	::String(null()) };

::hx::Class ImageLoader_obj::__mClass;

void ImageLoader_obj::__register()
{
	ImageLoader_obj _hx_dummy;
	ImageLoader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.ImageLoader",54,e6,c2,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageLoader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageLoader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageLoader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
