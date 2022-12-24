#include <hxcpp.h>

#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_fae0d7f0d9ceb2f8
#define INCLUDED_fae0d7f0d9ceb2f8
#include "wx/pen.h"
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Pen
#include <hx/widgets/Pen.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6621012f1fad58d8_9_new,"hx.widgets.Pen","new",0x4b60c18e,"hx.widgets.Pen.new","hx/widgets/Pen.hx",9,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_20_get_colour,"hx.widgets.Pen","get_colour",0xea01e8a7,"hx.widgets.Pen.get_colour","hx/widgets/Pen.hx",20,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_23_set_colour,"hx.widgets.Pen","set_colour",0xed7f871b,"hx.widgets.Pen.set_colour","hx/widgets/Pen.hx",23,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_32_get_width,"hx.widgets.Pen","get_width",0x57bf1a0b,"hx.widgets.Pen.get_width","hx/widgets/Pen.hx",32,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_34_set_width,"hx.widgets.Pen","set_width",0x3b100617,"hx.widgets.Pen.set_width","hx/widgets/Pen.hx",34,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_44_get_penRef,"hx.widgets.Pen","get_penRef",0x5be02a55,"hx.widgets.Pen.get_penRef","hx/widgets/Pen.hx",44,0xc2594024)
namespace hx{
namespace widgets{

void Pen_obj::__construct(::hx::Null< int >  __o_colour,::hx::Null< int >  __o_width){
            		int colour = __o_colour.Default(0);
            		int width = __o_width.Default(1);
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_9_new)
HXDLIN(   9)		super::__construct();
HXLINE(  10)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxPen()))->reinterpret();
HXLINE(  11)		this->set_colour(colour);
HXLINE(  12)		this->set_width(width);
            	}

Dynamic Pen_obj::__CreateEmpty() { return new Pen_obj; }

void *Pen_obj::_hx_vtable = 0;

Dynamic Pen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pen_obj > _hx_result = new Pen_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Pen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0162a16c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0162a16c;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x7d9be20e;
	}
}

int Pen_obj::get_colour(){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_20_get_colour)
HXDLIN(  20)		return ( (int)(this->get_penRef()->ptr->GetColour().GetRGB()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pen_obj,get_colour,return )

int Pen_obj::set_colour(int value){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_23_set_colour)
HXLINE(  24)		::cpp::Pointer<  wxColour > temp = ::cpp::Pointer_obj::fromRaw((new wxColour(( (unsigned int)(((((value & 255) << 16) | (value & 65280)) | ((value & 16711680) >> 16))) ))));
HXLINE(  25)		 wxPen * _hx_tmp = this->get_penRef()->ptr;
HXDLIN(  25)		(*(_hx_tmp)).SetColour(temp->get_ref());
HXLINE(  26)		temp->destroy();
HXLINE(  27)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen_obj,set_colour,return )

int Pen_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_32_get_width)
HXDLIN(  32)		return this->get_penRef()->ptr->GetWidth();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pen_obj,get_width,return )

int Pen_obj::set_width(int value){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_34_set_width)
HXLINE(  35)		this->get_penRef()->ptr->SetWidth(value);
HXLINE(  36)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen_obj,set_width,return )

::cpp::Pointer<  wxPen > Pen_obj::get_penRef(){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_44_get_penRef)
HXDLIN(  44)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pen_obj,get_penRef,return )


::hx::ObjectPtr< Pen_obj > Pen_obj::__new(::hx::Null< int >  __o_colour,::hx::Null< int >  __o_width) {
	::hx::ObjectPtr< Pen_obj > __this = new Pen_obj();
	__this->__construct(__o_colour,__o_width);
	return __this;
}

::hx::ObjectPtr< Pen_obj > Pen_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_colour,::hx::Null< int >  __o_width) {
	Pen_obj *__this = (Pen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pen_obj), true, "hx.widgets.Pen"));
	*(void **)__this = Pen_obj::_hx_vtable;
	__this->__construct(__o_colour,__o_width);
	return __this;
}

Pen_obj::Pen_obj()
{
}

void Pen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pen);
	HX_MARK_MEMBER_NAME(penRef,"penRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(penRef,"penRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Pen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colour() ); }
		if (HX_FIELD_EQ(inName,"penRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_penRef() : penRef ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_colour") ) { return ::hx::Val( get_colour_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colour") ) { return ::hx::Val( set_colour_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_penRef") ) { return ::hx::Val( get_penRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Pen_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colour(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"penRef") ) { penRef=inValue.Cast< ::cpp::Pointer<  wxPen > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colour",4c,c8,86,c6));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("penRef",fa,09,65,38));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Pen_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxPen > */ ,(int)offsetof(Pen_obj,penRef),HX_("penRef",fa,09,65,38)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Pen_obj_sStaticStorageInfo = 0;
#endif

static ::String Pen_obj_sMemberFields[] = {
	HX_("get_colour",15,38,0e,b7),
	HX_("set_colour",89,d6,8b,ba),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("penRef",fa,09,65,38),
	HX_("get_penRef",c3,79,ec,28),
	::String(null()) };

::hx::Class Pen_obj::__mClass;

void Pen_obj::__register()
{
	Pen_obj _hx_dummy;
	Pen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Pen",9c,a2,a9,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Pen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Pen_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
