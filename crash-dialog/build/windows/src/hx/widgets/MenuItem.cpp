#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_bc23844531366d98
#define INCLUDED_bc23844531366d98
#include "wx/menu.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Menu
#include <hx/widgets/Menu.h>
#endif
#ifndef INCLUDED_hx_widgets_MenuItem
#include <hx/widgets/MenuItem.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cb996530242dabc_10_new,"hx.widgets.MenuItem","new",0xb61a8621,"hx.widgets.MenuItem.new","hx/widgets/MenuItem.hx",10,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_24_set_bitmap,"hx.widgets.MenuItem","set_bitmap",0xddc3128b,"hx.widgets.MenuItem.set_bitmap","hx/widgets/MenuItem.hx",24,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_30_check,"hx.widgets.MenuItem","check",0x02e700c9,"hx.widgets.MenuItem.check","hx/widgets/MenuItem.hx",30,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_35_get_enable,"hx.widgets.MenuItem","get_enable",0xe1c112ab,"hx.widgets.MenuItem.get_enable","hx/widgets/MenuItem.hx",35,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_37_set_enable,"hx.widgets.MenuItem","set_enable",0xe53eb11f,"hx.widgets.MenuItem.set_enable","hx/widgets/MenuItem.hx",37,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_44_get_id,"hx.widgets.MenuItem","get_id",0x705a8c03,"hx.widgets.MenuItem.get_id","hx/widgets/MenuItem.hx",44,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_48_get_label,"hx.widgets.MenuItem","get_label",0x084366cc,"hx.widgets.MenuItem.get_label","hx/widgets/MenuItem.hx",48,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_52_set_label,"hx.widgets.MenuItem","set_label",0xeb9452d8,"hx.widgets.MenuItem.set_label","hx/widgets/MenuItem.hx",52,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_64_get_menuitemRef,"hx.widgets.MenuItem","get_menuitemRef",0x19d7c119,"hx.widgets.MenuItem.get_menuitemRef","hx/widgets/MenuItem.hx",64,0x7e7b6aad)
namespace hx{
namespace widgets{

void MenuItem_obj::__construct( ::hx::widgets::Menu parent,::String text, cpp::Struct<wxItemKind, cpp::EnumHandler> kind,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_10_new)
HXDLIN(  10)		super::__construct();
HXLINE(  11)		if (::hx::IsNotNull( parent )) {
HXLINE(  12)			if (::hx::IsNull( kind )) {
HXLINE(  13)				kind = wxITEM_NORMAL;
            			}
HXLINE(  16)			const char* this1 = text.utf8_str();
HXDLIN(  16)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  17)			const char* this2 = HX_("",00,00,00,00).utf8_str();
HXDLIN(  17)			 wxString str2 = wxString::FromUTF8(this2);
HXLINE(  18)			 wxMenu* subMenu = null();
HXDLIN(  18)			::cpp::Pointer<  wxMenuItem > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxMenuItem(parent->get_menuRef()->get_raw(),id,str,str2,kind,subMenu)));
HXDLIN(  18)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic MenuItem_obj::__CreateEmpty() { return new MenuItem_obj; }

void *MenuItem_obj::_hx_vtable = 0;

Dynamic MenuItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItem_obj > _hx_result = new MenuItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool MenuItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1698d3ad) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1698d3ad;
	} else {
		return inClassId==(int)0x2045b63e;
	}
}

 ::hx::widgets::Bitmap MenuItem_obj::set_bitmap( ::hx::widgets::Bitmap value){
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_24_set_bitmap)
HXLINE(  25)		 wxMenuItem * _hx_tmp = this->get_menuitemRef()->ptr;
HXDLIN(  25)		(*(_hx_tmp)).SetBitmap(value->get_bitmapRef()->get_ref());
HXLINE(  26)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuItem_obj,set_bitmap,return )

void MenuItem_obj::check(::hx::Null< bool >  __o_checked){
            		bool checked = __o_checked.Default(true);
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_30_check)
HXDLIN(  30)		this->get_menuitemRef()->ptr->Check(checked);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuItem_obj,check,(void))

bool MenuItem_obj::get_enable(){
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_35_get_enable)
HXDLIN(  35)		return this->get_menuitemRef()->ptr->IsEnabled();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,get_enable,return )

bool MenuItem_obj::set_enable(bool value){
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_37_set_enable)
HXLINE(  38)		this->get_menuitemRef()->ptr->Enable(value);
HXLINE(  39)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuItem_obj,set_enable,return )

int MenuItem_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_44_get_id)
HXDLIN(  44)		return this->get_menuitemRef()->ptr->GetId();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,get_id,return )

::String MenuItem_obj::get_label(){
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_48_get_label)
HXLINE(  49)		 wxString r = this->get_menuitemRef()->ptr->GetItemLabel();
HXLINE(  50)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,get_label,return )

::String MenuItem_obj::set_label(::String value){
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_52_set_label)
HXLINE(  53)		const char* this1 = value.utf8_str();
HXDLIN(  53)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  54)		 wxMenuItem * _hx_tmp = this->get_menuitemRef()->ptr;
HXDLIN(  54)		(*(_hx_tmp)).SetItemLabel(s->get_ref());
HXLINE(  55)		s->destroy();
HXLINE(  56)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuItem_obj,set_label,return )

::cpp::Pointer<  wxMenuItem > MenuItem_obj::get_menuitemRef(){
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_64_get_menuitemRef)
HXDLIN(  64)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,get_menuitemRef,return )


::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new( ::hx::widgets::Menu parent,::String text, cpp::Struct<wxItemKind, cpp::EnumHandler> kind,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< MenuItem_obj > __this = new MenuItem_obj();
	__this->__construct(parent,text,kind,__o_id);
	return __this;
}

::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Menu parent,::String text, cpp::Struct<wxItemKind, cpp::EnumHandler> kind,::hx::Null< int >  __o_id) {
	MenuItem_obj *__this = (MenuItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItem_obj), true, "hx.widgets.MenuItem"));
	*(void **)__this = MenuItem_obj::_hx_vtable;
	__this->__construct(parent,text,kind,__o_id);
	return __this;
}

MenuItem_obj::MenuItem_obj()
{
}

void MenuItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuItem);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(menuitemRef,"menuitemRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(menuitemRef,"menuitemRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_id() : id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_label() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return ::hx::Val( bitmap ); }
		if (HX_FIELD_EQ(inName,"enable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enable() ); }
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_label") ) { return ::hx::Val( get_label_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_label") ) { return ::hx::Val( set_label_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return ::hx::Val( set_bitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_enable") ) { return ::hx::Val( get_enable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enable") ) { return ::hx::Val( set_enable_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"menuitemRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_menuitemRef() : menuitemRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_menuitemRef") ) { return ::hx::Val( get_menuitemRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_label(inValue.Cast< ::String >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bitmap(inValue.Cast<  ::hx::widgets::Bitmap >()) );bitmap=inValue.Cast<  ::hx::widgets::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enable(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"menuitemRef") ) { menuitemRef=inValue.Cast< ::cpp::Pointer<  wxMenuItem > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	outFields->push(HX_("enable",83,ae,87,f8));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("label",f4,0d,af,6f));
	outFields->push(HX_("menuitemRef",41,36,55,63));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::Bitmap */ ,(int)offsetof(MenuItem_obj,bitmap),HX_("bitmap",ef,0f,0c,f1)},
	{::hx::fsInt,(int)offsetof(MenuItem_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxMenuItem > */ ,(int)offsetof(MenuItem_obj,menuitemRef),HX_("menuitemRef",41,36,55,63)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuItem_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItem_obj_sMemberFields[] = {
	HX_("bitmap",ef,0f,0c,f1),
	HX_("set_bitmap",2c,1e,11,e5),
	HX_("check",c8,98,b6,45),
	HX_("get_enable",4c,1e,0f,e9),
	HX_("set_enable",c0,bc,8c,ec),
	HX_("id",db,5b,00,00),
	HX_("get_id",24,f3,2f,a3),
	HX_("get_label",4b,6a,58,b3),
	HX_("set_label",57,56,a9,96),
	HX_("menuitemRef",41,36,55,63),
	HX_("get_menuitemRef",d8,ed,36,24),
	::String(null()) };

::hx::Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	MenuItem_obj _hx_dummy;
	MenuItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.MenuItem",af,e1,ba,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
