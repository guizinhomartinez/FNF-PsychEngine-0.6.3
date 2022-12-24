#include <hxcpp.h>

#ifndef INCLUDED_255fe586a8b249f3
#define INCLUDED_255fe586a8b249f3
#include "wx/listctrl.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_ListItem
#include <hx/widgets/ListItem.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_378b6f4ef87e8798_8_new,"hx.widgets.ListItem","new",0x6657b3e0,"hx.widgets.ListItem.new","hx/widgets/ListItem.hx",8,0xe44b79ce)
HX_LOCAL_STACK_FRAME(_hx_pos_378b6f4ef87e8798_32_get_id,"hx.widgets.ListItem","get_id",0x01173fa4,"hx.widgets.ListItem.get_id","hx/widgets/ListItem.hx",32,0xe44b79ce)
HX_LOCAL_STACK_FRAME(_hx_pos_378b6f4ef87e8798_34_set_id,"hx.widgets.ListItem","set_id",0xcd5f9418,"hx.widgets.ListItem.set_id","hx/widgets/ListItem.hx",34,0xe44b79ce)
HX_LOCAL_STACK_FRAME(_hx_pos_378b6f4ef87e8798_40_get_text,"hx.widgets.ListItem","get_text",0xec67f4b6,"hx.widgets.ListItem.get_text","hx/widgets/ListItem.hx",40,0xe44b79ce)
HX_LOCAL_STACK_FRAME(_hx_pos_378b6f4ef87e8798_44_set_text,"hx.widgets.ListItem","set_text",0x9ac54e2a,"hx.widgets.ListItem.set_text","hx/widgets/ListItem.hx",44,0xe44b79ce)
HX_LOCAL_STACK_FRAME(_hx_pos_378b6f4ef87e8798_52_get_image,"hx.widgets.ListItem","get_image",0x9e5dff32,"hx.widgets.ListItem.get_image","hx/widgets/ListItem.hx",52,0xe44b79ce)
HX_LOCAL_STACK_FRAME(_hx_pos_378b6f4ef87e8798_54_set_image,"hx.widgets.ListItem","set_image",0x81aeeb3e,"hx.widgets.ListItem.set_image","hx/widgets/ListItem.hx",54,0xe44b79ce)
HX_LOCAL_STACK_FRAME(_hx_pos_378b6f4ef87e8798_61_get_column,"hx.widgets.ListItem","get_column",0xbbda4b1f,"hx.widgets.ListItem.get_column","hx/widgets/ListItem.hx",61,0xe44b79ce)
HX_LOCAL_STACK_FRAME(_hx_pos_378b6f4ef87e8798_63_set_column,"hx.widgets.ListItem","set_column",0xbf57e993,"hx.widgets.ListItem.set_column","hx/widgets/ListItem.hx",63,0xe44b79ce)
HX_LOCAL_STACK_FRAME(_hx_pos_378b6f4ef87e8798_73_get_listItemRef,"hx.widgets.ListItem","get_listItemRef",0xc5634859,"hx.widgets.ListItem.get_listItemRef","hx/widgets/ListItem.hx",73,0xe44b79ce)
namespace hx{
namespace widgets{

void ListItem_obj::__construct(::String text,::hx::Null< int >  __o_image,::hx::Null< int >  __o_column,::hx::Null< int >  __o_id){
            		int image = __o_image.Default(-1);
            		int column = __o_column.Default(-1);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_8_new)
HXDLIN(   8)		super::__construct();
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxListItem()))->reinterpret();
            		}
HXLINE(  13)		if (::hx::IsNotNull( text )) {
HXLINE(  14)			this->set_text(text);
            		}
HXLINE(  16)		if ((image > -1)) {
HXLINE(  17)			this->set_image(image);
            		}
HXLINE(  19)		if ((column > -1)) {
HXLINE(  20)			this->set_column(column);
            		}
HXLINE(  22)		if ((id > -1)) {
HXLINE(  23)			this->set_id(id);
            		}
            	}

Dynamic ListItem_obj::__CreateEmpty() { return new ListItem_obj; }

void *ListItem_obj::_hx_vtable = 0;

Dynamic ListItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListItem_obj > _hx_result = new ListItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ListItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x37e60208;
	}
}

int ListItem_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_32_get_id)
HXDLIN(  32)		return this->get_listItemRef()->ptr->GetId();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListItem_obj,get_id,return )

int ListItem_obj::set_id(int value){
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_34_set_id)
HXLINE(  35)		this->get_listItemRef()->ptr->SetId(value);
HXLINE(  36)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListItem_obj,set_id,return )

::String ListItem_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_40_get_text)
HXLINE(  41)		 wxString r = this->get_listItemRef()->ptr->GetText();
HXLINE(  42)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListItem_obj,get_text,return )

::String ListItem_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_44_set_text)
HXLINE(  45)		const char* this1 = value.utf8_str();
HXDLIN(  45)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  46)		this->get_listItemRef()->ptr->SetText(s);
HXLINE(  47)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListItem_obj,set_text,return )

int ListItem_obj::get_image(){
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_52_get_image)
HXDLIN(  52)		return this->get_listItemRef()->ptr->GetImage();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListItem_obj,get_image,return )

int ListItem_obj::set_image(int value){
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_54_set_image)
HXLINE(  55)		this->get_listItemRef()->ptr->SetImage(value);
HXLINE(  56)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListItem_obj,set_image,return )

int ListItem_obj::get_column(){
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_61_get_column)
HXDLIN(  61)		return this->get_listItemRef()->ptr->GetColumn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListItem_obj,get_column,return )

int ListItem_obj::set_column(int value){
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_63_set_column)
HXLINE(  64)		this->get_listItemRef()->ptr->SetColumn(value);
HXLINE(  65)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListItem_obj,set_column,return )

::cpp::Pointer<  wxListItem > ListItem_obj::get_listItemRef(){
            	HX_STACKFRAME(&_hx_pos_378b6f4ef87e8798_73_get_listItemRef)
HXDLIN(  73)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListItem_obj,get_listItemRef,return )


::hx::ObjectPtr< ListItem_obj > ListItem_obj::__new(::String text,::hx::Null< int >  __o_image,::hx::Null< int >  __o_column,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< ListItem_obj > __this = new ListItem_obj();
	__this->__construct(text,__o_image,__o_column,__o_id);
	return __this;
}

::hx::ObjectPtr< ListItem_obj > ListItem_obj::__alloc(::hx::Ctx *_hx_ctx,::String text,::hx::Null< int >  __o_image,::hx::Null< int >  __o_column,::hx::Null< int >  __o_id) {
	ListItem_obj *__this = (ListItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListItem_obj), true, "hx.widgets.ListItem"));
	*(void **)__this = ListItem_obj::_hx_vtable;
	__this->__construct(text,__o_image,__o_column,__o_id);
	return __this;
}

ListItem_obj::ListItem_obj()
{
}

void ListItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListItem);
	HX_MARK_MEMBER_NAME(listItemRef,"listItemRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listItemRef,"listItemRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ListItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_image() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return ::hx::Val( set_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"column") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_column() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_image") ) { return ::hx::Val( get_image_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_image") ) { return ::hx::Val( set_image_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_column") ) { return ::hx::Val( get_column_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_column") ) { return ::hx::Val( set_column_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listItemRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_listItemRef() : listItemRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_listItemRef") ) { return ::hx::Val( get_listItemRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_id(inValue.Cast< int >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_image(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"column") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_column(inValue.Cast< int >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listItemRef") ) { listItemRef=inValue.Cast< ::cpp::Pointer<  wxListItem > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("image",5b,1f,69,bd));
	outFields->push(HX_("column",d6,4e,8b,c6));
	outFields->push(HX_("listItemRef",42,6d,76,96));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListItem_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxListItem > */ ,(int)offsetof(ListItem_obj,listItemRef),HX_("listItemRef",42,6d,76,96)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListItem_obj_sStaticStorageInfo = 0;
#endif

static ::String ListItem_obj_sMemberFields[] = {
	HX_("get_id",24,f3,2f,a3),
	HX_("set_id",98,47,78,6f),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_image",b2,7b,12,01),
	HX_("set_image",be,67,63,e4),
	HX_("get_column",9f,be,12,b7),
	HX_("set_column",13,5d,90,ba),
	HX_("listItemRef",42,6d,76,96),
	HX_("get_listItemRef",d9,24,58,57),
	::String(null()) };

::hx::Class ListItem_obj::__mClass;

void ListItem_obj::__register()
{
	ListItem_obj _hx_dummy;
	ListItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ListItem",ee,83,40,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
