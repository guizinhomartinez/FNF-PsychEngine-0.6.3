#include <hxcpp.h>

#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_4c441f4d8fa38f37
#define INCLUDED_4c441f4d8fa38f37
#include "wx/txtstrm.h"
#endif
#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif
#ifndef INCLUDED_hx_widgets_TextInputStream
#include <hx/widgets/TextInputStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4a229e44efc2505_8_new,"hx.widgets.TextInputStream","new",0xa463b7b2,"hx.widgets.TextInputStream.new","hx/widgets/TextInputStream.hx",8,0xf6f61580)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a229e44efc2505_20_readLine,"hx.widgets.TextInputStream","readLine",0xeed941d8,"hx.widgets.TextInputStream.readLine","hx/widgets/TextInputStream.hx",20,0xf6f61580)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a229e44efc2505_28_get_canRead,"hx.widgets.TextInputStream","get_canRead",0x221c1cef,"hx.widgets.TextInputStream.get_canRead","hx/widgets/TextInputStream.hx",28,0xf6f61580)
HX_LOCAL_STACK_FRAME(_hx_pos_f4a229e44efc2505_33_get_eof,"hx.widgets.TextInputStream","get_eof",0x452cc5a5,"hx.widgets.TextInputStream.get_eof","hx/widgets/TextInputStream.hx",33,0xf6f61580)
namespace hx{
namespace widgets{

void TextInputStream_obj::__construct( ::hx::widgets::InputStream stream){
            	HX_STACKFRAME(&_hx_pos_f4a229e44efc2505_8_new)
HXLINE(  11)		this->_stream = null();
HXLINE(   9)		this->_ref = null();
HXLINE(  15)		this->_stream = stream;
HXLINE(  16)		 wxInputStream & wxStream = stream->get_inputStreamRef()->get_ref();
HXLINE(  17)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxTextInputStream(wxStream)));
            	}

Dynamic TextInputStream_obj::__CreateEmpty() { return new TextInputStream_obj; }

void *TextInputStream_obj::_hx_vtable = 0;

Dynamic TextInputStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextInputStream_obj > _hx_result = new TextInputStream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextInputStream_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cf86eae;
}

::String TextInputStream_obj::readLine(){
            	HX_STACKFRAME(&_hx_pos_f4a229e44efc2505_20_readLine)
HXLINE(  21)		 wxString s = this->_ref->ptr->ReadLine();
HXLINE(  22)		return ::String(::String(s.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInputStream_obj,readLine,return )

bool TextInputStream_obj::get_canRead(){
            	HX_STACKFRAME(&_hx_pos_f4a229e44efc2505_28_get_canRead)
HXDLIN(  28)		return this->_stream->get_canRead();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInputStream_obj,get_canRead,return )

bool TextInputStream_obj::get_eof(){
            	HX_STACKFRAME(&_hx_pos_f4a229e44efc2505_33_get_eof)
HXDLIN(  33)		return this->_stream->get_eof();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInputStream_obj,get_eof,return )


::hx::ObjectPtr< TextInputStream_obj > TextInputStream_obj::__new( ::hx::widgets::InputStream stream) {
	::hx::ObjectPtr< TextInputStream_obj > __this = new TextInputStream_obj();
	__this->__construct(stream);
	return __this;
}

::hx::ObjectPtr< TextInputStream_obj > TextInputStream_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::InputStream stream) {
	TextInputStream_obj *__this = (TextInputStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextInputStream_obj), true, "hx.widgets.TextInputStream"));
	*(void **)__this = TextInputStream_obj::_hx_vtable;
	__this->__construct(stream);
	return __this;
}

TextInputStream_obj::TextInputStream_obj()
{
}

void TextInputStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextInputStream);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(_stream,"_stream");
	HX_MARK_MEMBER_NAME(canRead,"canRead");
	HX_MARK_MEMBER_NAME(eof,"eof");
	HX_MARK_END_CLASS();
}

void TextInputStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(_stream,"_stream");
	HX_VISIT_MEMBER_NAME(canRead,"canRead");
	HX_VISIT_MEMBER_NAME(eof,"eof");
}

::hx::Val TextInputStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_eof() : eof ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stream") ) { return ::hx::Val( _stream ); }
		if (HX_FIELD_EQ(inName,"canRead") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_canRead() : canRead ); }
		if (HX_FIELD_EQ(inName,"get_eof") ) { return ::hx::Val( get_eof_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readLine") ) { return ::hx::Val( readLine_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_canRead") ) { return ::hx::Val( get_canRead_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextInputStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { eof=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxTextInputStream > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stream") ) { _stream=inValue.Cast<  ::hx::widgets::InputStream >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canRead") ) { canRead=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextInputStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("_stream",1f,26,a4,7f));
	outFields->push(HX_("canRead",86,33,ff,69));
	outFields->push(HX_("eof",bc,04,4d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextInputStream_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxTextInputStream > */ ,(int)offsetof(TextInputStream_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsObject /*  ::hx::widgets::InputStream */ ,(int)offsetof(TextInputStream_obj,_stream),HX_("_stream",1f,26,a4,7f)},
	{::hx::fsBool,(int)offsetof(TextInputStream_obj,canRead),HX_("canRead",86,33,ff,69)},
	{::hx::fsBool,(int)offsetof(TextInputStream_obj,eof),HX_("eof",bc,04,4d,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextInputStream_obj_sStaticStorageInfo = 0;
#endif

static ::String TextInputStream_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("_stream",1f,26,a4,7f),
	HX_("readLine",6a,f2,aa,6f),
	HX_("canRead",86,33,ff,69),
	HX_("get_canRead",9d,93,f9,ef),
	HX_("eof",bc,04,4d,00),
	HX_("get_eof",53,cd,c1,26),
	::String(null()) };

::hx::Class TextInputStream_obj::__mClass;

void TextInputStream_obj::__register()
{
	TextInputStream_obj _hx_dummy;
	TextInputStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.TextInputStream",c0,b6,a5,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextInputStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextInputStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextInputStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextInputStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
