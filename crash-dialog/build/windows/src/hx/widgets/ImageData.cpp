#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hx_widgets_Image
#include <hx/widgets/Image.h>
#endif
#ifndef INCLUDED_hx_widgets_ImageData
#include <hx/widgets/ImageData.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_965984fe8dcaadcc_16_new,"hx.widgets.ImageData","new",0x3afac21a,"hx.widgets.ImageData.new","hx/widgets/Image.hx",16,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_965984fe8dcaadcc_24_setRGB,"hx.widgets.ImageData","setRGB",0xa7e5ab11,"hx.widgets.ImageData.setRGB","hx/widgets/Image.hx",24,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_965984fe8dcaadcc_31_setRGBA,"hx.widgets.ImageData","setRGBA",0x41100410,"hx.widgets.ImageData.setRGBA","hx/widgets/Image.hx",31,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_965984fe8dcaadcc_43_copyARGB,"hx.widgets.ImageData","copyARGB",0x90eb1b87,"hx.widgets.ImageData.copyARGB","hx/widgets/Image.hx",43,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_965984fe8dcaadcc_56_copyRGBA,"hx.widgets.ImageData","copyRGBA",0x9c1f5eef,"hx.widgets.ImageData.copyRGBA","hx/widgets/Image.hx",56,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_965984fe8dcaadcc_69_copyRGB,"hx.widgets.ImageData","copyRGB",0x737f9112,"hx.widgets.ImageData.copyRGB","hx/widgets/Image.hx",69,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_965984fe8dcaadcc_81_set,"hx.widgets.ImageData","set",0x3afe8d5c,"hx.widgets.ImageData.set","hx/widgets/Image.hx",81,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_965984fe8dcaadcc_96_clear,"hx.widgets.ImageData","clear",0xafedc5c7,"hx.widgets.ImageData.clear","hx/widgets/Image.hx",96,0x548f18a2)
namespace hx{
namespace widgets{

void ImageData_obj::__construct( ::hx::widgets::Image image,::cpp::Pointer< unsigned char > data,::cpp::Pointer< unsigned char > alpha){
            	HX_STACKFRAME(&_hx_pos_965984fe8dcaadcc_16_new)
HXLINE(  17)		this->_image = image;
HXLINE(  18)		this->_data = data;
HXLINE(  19)		this->_alpha = alpha;
HXLINE(  20)		this->_width = image->get_width();
HXLINE(  21)		this->_height = image->get_height();
            	}

Dynamic ImageData_obj::__CreateEmpty() { return new ImageData_obj; }

void *ImageData_obj::_hx_vtable = 0;

Dynamic ImageData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageData_obj > _hx_result = new ImageData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ImageData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76d3396a;
}

void ImageData_obj::setRGB(int x,int y,int r,int g,int b){
            	HX_STACKFRAME(&_hx_pos_965984fe8dcaadcc_24_setRGB)
HXLINE(  25)		int offset = ((x + (this->_width * y)) * 3);
HXLINE(  26)		this->_data.ptr[offset] = ( (unsigned char)(r) );
HXLINE(  27)		::cpp::Pointer< unsigned char > _hx_tmp = this->_data;
HXDLIN(  27)		_hx_tmp.ptr[(offset + 1)] = ( (unsigned char)(g) );
HXLINE(  28)		::cpp::Pointer< unsigned char > _hx_tmp1 = this->_data;
HXDLIN(  28)		_hx_tmp1.ptr[(offset + 2)] = ( (unsigned char)(b) );
            	}


HX_DEFINE_DYNAMIC_FUNC5(ImageData_obj,setRGB,(void))

void ImageData_obj::setRGBA(int x,int y,int r,int g,int b,int a){
            	HX_STACKFRAME(&_hx_pos_965984fe8dcaadcc_31_setRGBA)
HXLINE(  32)		int offset = ((x + (this->_width * y)) * 3);
HXLINE(  33)		this->_data.ptr[offset] = ( (unsigned char)(r) );
HXLINE(  34)		::cpp::Pointer< unsigned char > _hx_tmp = this->_data;
HXDLIN(  34)		_hx_tmp.ptr[(offset + 1)] = ( (unsigned char)(g) );
HXLINE(  35)		::cpp::Pointer< unsigned char > _hx_tmp1 = this->_data;
HXDLIN(  35)		_hx_tmp1.ptr[(offset + 2)] = ( (unsigned char)(b) );
HXLINE(  36)		if (::hx::IsNotNull( this->_alpha )) {
HXLINE(  37)			int alphaOffset = (x + (this->_width * y));
HXLINE(  38)			this->_alpha.ptr[alphaOffset] = ( (unsigned char)(a) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(ImageData_obj,setRGBA,(void))

void ImageData_obj::copyARGB( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_965984fe8dcaadcc_43_copyARGB)
HXDLIN(  43)		int _g = 0;
HXDLIN(  43)		int _g1 = this->_height;
HXDLIN(  43)		while((_g < _g1)){
HXDLIN(  43)			_g = (_g + 1);
HXDLIN(  43)			int y = (_g - 1);
HXLINE(  44)			{
HXLINE(  44)				int _g1 = 0;
HXDLIN(  44)				int _g2 = this->_width;
HXDLIN(  44)				while((_g1 < _g2)){
HXLINE(  44)					_g1 = (_g1 + 1);
HXDLIN(  44)					int x = (_g1 - 1);
HXLINE(  45)					int offset = ((x + (this->_width * y)) * 4);
HXLINE(  46)					int a = ( (int)(bytes->b->__get(offset)) );
HXLINE(  47)					int r = ( (int)(bytes->b->__get((offset + 1))) );
HXLINE(  48)					int g = ( (int)(bytes->b->__get((offset + 2))) );
HXLINE(  49)					int b = ( (int)(bytes->b->__get((offset + 3))) );
HXLINE(  50)					this->setRGBA(x,y,r,g,b,a);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageData_obj,copyARGB,(void))

void ImageData_obj::copyRGBA( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_965984fe8dcaadcc_56_copyRGBA)
HXDLIN(  56)		int _g = 0;
HXDLIN(  56)		int _g1 = this->_height;
HXDLIN(  56)		while((_g < _g1)){
HXDLIN(  56)			_g = (_g + 1);
HXDLIN(  56)			int y = (_g - 1);
HXLINE(  57)			{
HXLINE(  57)				int _g1 = 0;
HXDLIN(  57)				int _g2 = this->_width;
HXDLIN(  57)				while((_g1 < _g2)){
HXLINE(  57)					_g1 = (_g1 + 1);
HXDLIN(  57)					int x = (_g1 - 1);
HXLINE(  58)					int offset = ((x + (this->_width * y)) * 4);
HXLINE(  59)					int r = ( (int)(bytes->b->__get(offset)) );
HXLINE(  60)					int g = ( (int)(bytes->b->__get((offset + 1))) );
HXLINE(  61)					int b = ( (int)(bytes->b->__get((offset + 2))) );
HXLINE(  62)					int a = ( (int)(bytes->b->__get((offset + 3))) );
HXLINE(  63)					this->setRGBA(x,y,r,g,b,a);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageData_obj,copyRGBA,(void))

void ImageData_obj::copyRGB( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_965984fe8dcaadcc_69_copyRGB)
HXDLIN(  69)		int _g = 0;
HXDLIN(  69)		int _g1 = this->_height;
HXDLIN(  69)		while((_g < _g1)){
HXDLIN(  69)			_g = (_g + 1);
HXDLIN(  69)			int y = (_g - 1);
HXLINE(  70)			{
HXLINE(  70)				int _g1 = 0;
HXDLIN(  70)				int _g2 = this->_width;
HXDLIN(  70)				while((_g1 < _g2)){
HXLINE(  70)					_g1 = (_g1 + 1);
HXDLIN(  70)					int x = (_g1 - 1);
HXLINE(  71)					int offset = ((x + (this->_width * y)) * 3);
HXLINE(  72)					int r = ( (int)(bytes->b->__get(offset)) );
HXLINE(  73)					int g = ( (int)(bytes->b->__get((offset + 1))) );
HXLINE(  74)					int b = ( (int)(bytes->b->__get((offset + 2))) );
HXLINE(  75)					this->setRGB(x,y,r,g,b);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageData_obj,copyRGB,(void))

void ImageData_obj::set(int x,int y,int c,::hx::Null< bool >  __o_useAlpha){
            		bool useAlpha = __o_useAlpha.Default(false);
            	HX_STACKFRAME(&_hx_pos_965984fe8dcaadcc_81_set)
HXDLIN(  81)		if ((useAlpha == true)) {
HXLINE(  82)			int r = ((c & -16777216) >> 24);
HXLINE(  83)			int g = ((c & 16711680) >> 16);
HXLINE(  84)			int b = ((c & 65280) >> 8);
HXLINE(  85)			int a = (c & 255);
HXLINE(  86)			this->setRGBA(x,y,r,g,b,a);
            		}
            		else {
HXLINE(  88)			int r = ((c & 16711680) >> 16);
HXLINE(  89)			int g = ((c & 65280) >> 8);
HXLINE(  90)			int b = (c & 255);
HXLINE(  91)			this->setRGB(x,y,r,g,b);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(ImageData_obj,set,(void))

void ImageData_obj::clear(int c,::hx::Null< bool >  __o_useAlpha){
            		bool useAlpha = __o_useAlpha.Default(false);
            	HX_STACKFRAME(&_hx_pos_965984fe8dcaadcc_96_clear)
HXDLIN(  96)		int _g = 0;
HXDLIN(  96)		int _g1 = this->_height;
HXDLIN(  96)		while((_g < _g1)){
HXDLIN(  96)			_g = (_g + 1);
HXDLIN(  96)			int y = (_g - 1);
HXLINE(  97)			{
HXLINE(  97)				int _g1 = 0;
HXDLIN(  97)				int _g2 = this->_width;
HXDLIN(  97)				while((_g1 < _g2)){
HXLINE(  97)					_g1 = (_g1 + 1);
HXDLIN(  97)					int x = (_g1 - 1);
HXLINE(  98)					this->set(x,y,c,useAlpha);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ImageData_obj,clear,(void))


::hx::ObjectPtr< ImageData_obj > ImageData_obj::__new( ::hx::widgets::Image image,::cpp::Pointer< unsigned char > data,::cpp::Pointer< unsigned char > alpha) {
	::hx::ObjectPtr< ImageData_obj > __this = new ImageData_obj();
	__this->__construct(image,data,alpha);
	return __this;
}

::hx::ObjectPtr< ImageData_obj > ImageData_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Image image,::cpp::Pointer< unsigned char > data,::cpp::Pointer< unsigned char > alpha) {
	ImageData_obj *__this = (ImageData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageData_obj), true, "hx.widgets.ImageData"));
	*(void **)__this = ImageData_obj::_hx_vtable;
	__this->__construct(image,data,alpha);
	return __this;
}

ImageData_obj::ImageData_obj()
{
}

void ImageData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageData);
	HX_MARK_MEMBER_NAME(_image,"_image");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_END_CLASS();
}

void ImageData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_image,"_image");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
}

::hx::Val ImageData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { return ::hx::Val( _image ); }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return ::hx::Val( _alpha ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"setRGB") ) { return ::hx::Val( setRGB_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"setRGBA") ) { return ::hx::Val( setRGBA_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyRGB") ) { return ::hx::Val( copyRGB_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyARGB") ) { return ::hx::Val( copyARGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyRGBA") ) { return ::hx::Val( copyRGBA_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::cpp::Pointer< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { _image=inValue.Cast<  ::hx::widgets::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< ::cpp::Pointer< unsigned char > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_image",9c,66,50,b9));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("_alpha",9f,ee,7d,1d));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageData_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::Image */ ,(int)offsetof(ImageData_obj,_image),HX_("_image",9c,66,50,b9)},
	{::hx::fsUnknown /* ::cpp::Pointer< unsigned char > */ ,(int)offsetof(ImageData_obj,_data),HX_("_data",09,72,74,f5)},
	{::hx::fsUnknown /* ::cpp::Pointer< unsigned char > */ ,(int)offsetof(ImageData_obj,_alpha),HX_("_alpha",9f,ee,7d,1d)},
	{::hx::fsInt,(int)offsetof(ImageData_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsInt,(int)offsetof(ImageData_obj,_height),HX_("_height",86,19,c3,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageData_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageData_obj_sMemberFields[] = {
	HX_("_image",9c,66,50,b9),
	HX_("_data",09,72,74,f5),
	HX_("_alpha",9f,ee,7d,1d),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("setRGB",8b,4c,6e,6f),
	HX_("setRGBA",56,ad,14,11),
	HX_("copyARGB",81,8f,fa,c4),
	HX_("copyRGBA",e9,d2,2e,d0),
	HX_("copyRGB",58,3a,84,43),
	HX_("set",a2,9b,57,00),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

::hx::Class ImageData_obj::__mClass;

void ImageData_obj::__register()
{
	ImageData_obj _hx_dummy;
	ImageData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ImageData",28,6d,7d,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
