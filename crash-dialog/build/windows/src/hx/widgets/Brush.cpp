#include <hxcpp.h>

#ifndef INCLUDED_cd1f455405216f23
#define INCLUDED_cd1f455405216f23
#include "wx/brush.h"
#endif
#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_Brush
#include <hx/widgets/Brush.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c76c21b4ead3757d_10_new,"hx.widgets.Brush","new",0xf588406f,"hx.widgets.Brush.new","hx/widgets/Brush.hx",10,0x7e071ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_c76c21b4ead3757d_20_get_colour,"hx.widgets.Brush","get_colour",0xfc3c77e6,"hx.widgets.Brush.get_colour","hx/widgets/Brush.hx",20,0x7e071ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_c76c21b4ead3757d_23_set_colour,"hx.widgets.Brush","set_colour",0xffba165a,"hx.widgets.Brush.set_colour","hx/widgets/Brush.hx",23,0x7e071ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_c76c21b4ead3757d_32_get_style,"hx.widgets.Brush","get_style",0x6fb166d7,"hx.widgets.Brush.get_style","hx/widgets/Brush.hx",32,0x7e071ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_c76c21b4ead3757d_34_set_style,"hx.widgets.Brush","set_style",0x530252e3,"hx.widgets.Brush.set_style","hx/widgets/Brush.hx",34,0x7e071ce3)
HX_LOCAL_STACK_FRAME(_hx_pos_c76c21b4ead3757d_44_get_brushRef,"hx.widgets.Brush","get_brushRef",0xffe58b13,"hx.widgets.Brush.get_brushRef","hx/widgets/Brush.hx",44,0x7e071ce3)
namespace hx{
namespace widgets{

void Brush_obj::__construct(::hx::Null< int >  __o_colour){
            		int colour = __o_colour.Default(0);
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_10_new)
HXDLIN(  10)		super::__construct();
HXLINE(  11)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxBrush()))->reinterpret();
HXLINE(  12)		this->set_colour(colour);
            	}

Dynamic Brush_obj::__CreateEmpty() { return new Brush_obj; }

void *Brush_obj::_hx_vtable = 0;

Dynamic Brush_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Brush_obj > _hx_result = new Brush_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Brush_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0162a16c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0162a16c;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x2b73e03f;
	}
}

int Brush_obj::get_colour(){
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_20_get_colour)
HXDLIN(  20)		return ( (int)(this->get_brushRef()->ptr->GetColour().GetRGB()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Brush_obj,get_colour,return )

int Brush_obj::set_colour(int value){
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_23_set_colour)
HXLINE(  24)		::cpp::Pointer<  wxColour > temp = ::cpp::Pointer_obj::fromRaw((new wxColour(( (unsigned int)(((((value & 255) << 16) | (value & 65280)) | ((value & 16711680) >> 16))) ))));
HXLINE(  25)		 wxBrush * _hx_tmp = this->get_brushRef()->ptr;
HXDLIN(  25)		(*(_hx_tmp)).SetColour(temp->get_ref());
HXLINE(  26)		temp->destroy();
HXLINE(  27)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Brush_obj,set_colour,return )

 cpp::Struct<wxBrushStyle, cpp::EnumHandler> Brush_obj::get_style(){
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_32_get_style)
HXDLIN(  32)		return this->get_brushRef()->ptr->GetStyle();
            	}


 cpp::Struct<wxBrushStyle, cpp::EnumHandler> Brush_obj::set_style( cpp::Struct<wxBrushStyle, cpp::EnumHandler> value){
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_34_set_style)
HXLINE(  35)		this->get_brushRef()->ptr->SetStyle(value);
HXLINE(  36)		return value;
            	}


::cpp::Pointer<  wxBrush > Brush_obj::get_brushRef(){
            	HX_STACKFRAME(&_hx_pos_c76c21b4ead3757d_44_get_brushRef)
HXDLIN(  44)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Brush_obj,get_brushRef,return )


::hx::ObjectPtr< Brush_obj > Brush_obj::__new(::hx::Null< int >  __o_colour) {
	::hx::ObjectPtr< Brush_obj > __this = new Brush_obj();
	__this->__construct(__o_colour);
	return __this;
}

::hx::ObjectPtr< Brush_obj > Brush_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_colour) {
	Brush_obj *__this = (Brush_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Brush_obj), true, "hx.widgets.Brush"));
	*(void **)__this = Brush_obj::_hx_vtable;
	__this->__construct(__o_colour);
	return __this;
}

Brush_obj::Brush_obj()
{
}

void Brush_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Brush);
	HX_MARK_MEMBER_NAME(brushRef,"brushRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Brush_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(brushRef,"brushRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Brush_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colour() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"brushRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_brushRef() : brushRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_colour") ) { return ::hx::Val( get_colour_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colour") ) { return ::hx::Val( set_colour_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_brushRef") ) { return ::hx::Val( get_brushRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Brush_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colour(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"brushRef") ) { brushRef=inValue.Cast< ::cpp::Pointer<  wxBrush > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Brush_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colour",4c,c8,86,c6));
	outFields->push(HX_("style",31,a5,1d,84));
	outFields->push(HX_("brushRef",f9,40,b1,ad));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Brush_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxBrush > */ ,(int)offsetof(Brush_obj,brushRef),HX_("brushRef",f9,40,b1,ad)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Brush_obj_sStaticStorageInfo = 0;
#endif

static ::String Brush_obj_sMemberFields[] = {
	HX_("get_colour",15,38,0e,b7),
	HX_("set_colour",89,d6,8b,ba),
	HX_("brushRef",f9,40,b1,ad),
	HX_("get_brushRef",02,f5,ca,62),
	::String(null()) };

::hx::Class Brush_obj::__mClass;

void Brush_obj::__register()
{
	Brush_obj _hx_dummy;
	Brush_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Brush",fd,dc,4d,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Brush_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Brush_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Brush_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Brush_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
