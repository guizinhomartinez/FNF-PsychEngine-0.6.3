#include <hxcpp.h>

#ifndef INCLUDED_b4548bb3748a21b1
#define INCLUDED_b4548bb3748a21b1
#include "wx/headercol.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_HeaderColumn
#include <hx/widgets/HeaderColumn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fc306f5c156c4db6_10_new,"hx.widgets.HeaderColumn","new",0x80038712,"hx.widgets.HeaderColumn.new","hx/widgets/HeaderColumn.hx",10,0x5abe89dc)
HX_LOCAL_STACK_FRAME(_hx_pos_fc306f5c156c4db6_14_get_title,"hx.widgets.HeaderColumn","get_title",0x6d2d3a21,"hx.widgets.HeaderColumn.get_title","hx/widgets/HeaderColumn.hx",14,0x5abe89dc)
HX_LOCAL_STACK_FRAME(_hx_pos_fc306f5c156c4db6_19_set_title,"hx.widgets.HeaderColumn","set_title",0x507e262d,"hx.widgets.HeaderColumn.set_title","hx/widgets/HeaderColumn.hx",19,0x5abe89dc)
HX_LOCAL_STACK_FRAME(_hx_pos_fc306f5c156c4db6_23_get_width,"hx.widgets.HeaderColumn","get_width",0x2754da8f,"hx.widgets.HeaderColumn.get_width","hx/widgets/HeaderColumn.hx",23,0x5abe89dc)
HX_LOCAL_STACK_FRAME(_hx_pos_fc306f5c156c4db6_28_set_width,"hx.widgets.HeaderColumn","set_width",0x0aa5c69b,"hx.widgets.HeaderColumn.set_width","hx/widgets/HeaderColumn.hx",28,0x5abe89dc)
HX_LOCAL_STACK_FRAME(_hx_pos_fc306f5c156c4db6_31_destroy,"hx.widgets.HeaderColumn","destroy",0x129c24ac,"hx.widgets.HeaderColumn.destroy","hx/widgets/HeaderColumn.hx",31,0x5abe89dc)
HX_LOCAL_STACK_FRAME(_hx_pos_fc306f5c156c4db6_44_get_headerColumn,"hx.widgets.HeaderColumn","get_headerColumn",0x99f862da,"hx.widgets.HeaderColumn.get_headerColumn","hx/widgets/HeaderColumn.hx",44,0x5abe89dc)
namespace hx{
namespace widgets{

void HeaderColumn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fc306f5c156c4db6_10_new)
            	}

Dynamic HeaderColumn_obj::__CreateEmpty() { return new HeaderColumn_obj; }

void *HeaderColumn_obj::_hx_vtable = 0;

Dynamic HeaderColumn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HeaderColumn_obj > _hx_result = new HeaderColumn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HeaderColumn_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21841f1e;
}

::String HeaderColumn_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_fc306f5c156c4db6_14_get_title)
HXLINE(  15)		 wxString r = this->get_headerColumn()->ptr->GetTitle();
HXLINE(  16)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HeaderColumn_obj,get_title,return )

::String HeaderColumn_obj::set_title(::String value){
            	HX_STACKFRAME(&_hx_pos_fc306f5c156c4db6_19_set_title)
HXDLIN(  19)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HeaderColumn_obj,set_title,return )

int HeaderColumn_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_fc306f5c156c4db6_23_get_width)
HXLINE(  24)		int r = this->get_headerColumn()->ptr->GetWidth();
HXLINE(  25)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HeaderColumn_obj,get_width,return )

int HeaderColumn_obj::set_width(int value){
            	HX_STACKFRAME(&_hx_pos_fc306f5c156c4db6_28_set_width)
HXDLIN(  28)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HeaderColumn_obj,set_width,return )

bool HeaderColumn_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_fc306f5c156c4db6_31_destroy)
HXLINE(  32)		if (::hx::IsNotNull( this->_ref )) {
HXLINE(  33)			this->_ref->destroy();
HXLINE(  34)			this->_ref = null();
            		}
HXLINE(  36)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HeaderColumn_obj,destroy,return )

::cpp::Pointer<  wxHeaderColumn > HeaderColumn_obj::get_headerColumn(){
            	HX_STACKFRAME(&_hx_pos_fc306f5c156c4db6_44_get_headerColumn)
HXDLIN(  44)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HeaderColumn_obj,get_headerColumn,return )


::hx::ObjectPtr< HeaderColumn_obj > HeaderColumn_obj::__new() {
	::hx::ObjectPtr< HeaderColumn_obj > __this = new HeaderColumn_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HeaderColumn_obj > HeaderColumn_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HeaderColumn_obj *__this = (HeaderColumn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HeaderColumn_obj), true, "hx.widgets.HeaderColumn"));
	*(void **)__this = HeaderColumn_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HeaderColumn_obj::HeaderColumn_obj()
{
}

void HeaderColumn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HeaderColumn);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(headerColumn,"headerColumn");
	HX_MARK_END_CLASS();
}

void HeaderColumn_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(headerColumn,"headerColumn");
}

::hx::Val HeaderColumn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_title() ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"headerColumn") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_headerColumn() : headerColumn ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_headerColumn") ) { return ::hx::Val( get_headerColumn_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HeaderColumn_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxHeaderColumn > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< int >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"headerColumn") ) { headerColumn=inValue.Cast< ::cpp::Pointer<  wxHeaderColumn > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HeaderColumn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("headerColumn",43,f4,9e,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HeaderColumn_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxHeaderColumn > */ ,(int)offsetof(HeaderColumn_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxHeaderColumn > */ ,(int)offsetof(HeaderColumn_obj,headerColumn),HX_("headerColumn",43,f4,9e,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HeaderColumn_obj_sStaticStorageInfo = 0;
#endif

static ::String HeaderColumn_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("destroy",fa,2c,86,24),
	HX_("headerColumn",43,f4,9e,e0),
	HX_("get_headerColumn",cc,e0,3d,e5),
	::String(null()) };

::hx::Class HeaderColumn_obj::__mClass;

void HeaderColumn_obj::__register()
{
	HeaderColumn_obj _hx_dummy;
	HeaderColumn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.HeaderColumn",20,56,92,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HeaderColumn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HeaderColumn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HeaderColumn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HeaderColumn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
