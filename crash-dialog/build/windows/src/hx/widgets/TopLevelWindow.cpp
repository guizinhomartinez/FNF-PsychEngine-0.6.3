#include <hxcpp.h>

#ifndef INCLUDED_04e4e804b5ca744c
#define INCLUDED_04e4e804b5ca744c
#include "wx/icon.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_76c96c3c0bae3300
#define INCLUDED_76c96c3c0bae3300
#include "wx/toplevel.h"
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
#ifndef INCLUDED_hx_widgets_Icon
#include <hx/widgets/Icon.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_9_new,"hx.widgets.TopLevelWindow","new",0x22e08a0e,"hx.widgets.TopLevelWindow.new","hx/widgets/TopLevelWindow.hx",9,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_15_get_title,"hx.widgets.TopLevelWindow","get_title",0x2dd8a21d,"hx.widgets.TopLevelWindow.get_title","hx/widgets/TopLevelWindow.hx",15,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_19_set_title,"hx.widgets.TopLevelWindow","set_title",0x11298e29,"hx.widgets.TopLevelWindow.set_title","hx/widgets/TopLevelWindow.hx",19,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_27_iconize,"hx.widgets.TopLevelWindow","iconize",0x7fb88a29,"hx.widgets.TopLevelWindow.iconize","hx/widgets/TopLevelWindow.hx",27,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_32_get_iconized,"hx.widgets.TopLevelWindow","get_iconized",0xec3e3f24,"hx.widgets.TopLevelWindow.get_iconized","hx/widgets/TopLevelWindow.hx",32,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_34_set_iconized,"hx.widgets.TopLevelWindow","set_iconized",0x01376298,"hx.widgets.TopLevelWindow.set_iconized","hx/widgets/TopLevelWindow.hx",34,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_40_maximize,"hx.widgets.TopLevelWindow","maximize",0x8e2c945e,"hx.widgets.TopLevelWindow.maximize","hx/widgets/TopLevelWindow.hx",40,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_45_get_maximized,"hx.widgets.TopLevelWindow","get_maximized",0x5c7fc11d,"hx.widgets.TopLevelWindow.get_maximized","hx/widgets/TopLevelWindow.hx",45,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_47_set_maximized,"hx.widgets.TopLevelWindow","set_maximized",0xa185a329,"hx.widgets.TopLevelWindow.set_maximized","hx/widgets/TopLevelWindow.hx",47,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_60_setIcon,"hx.widgets.TopLevelWindow","setIcon",0xb4cd50e9,"hx.widgets.TopLevelWindow.setIcon","hx/widgets/TopLevelWindow.hx",60,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_75_setBitmap,"hx.widgets.TopLevelWindow","setBitmap",0x2aa7b55f,"hx.widgets.TopLevelWindow.setBitmap","hx/widgets/TopLevelWindow.hx",75,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_87_get_topLevelWindowRef,"hx.widgets.TopLevelWindow","get_topLevelWindowRef",0xc7074299,"hx.widgets.TopLevelWindow.get_topLevelWindowRef","hx/widgets/TopLevelWindow.hx",87,0x5ce745e0)
namespace hx{
namespace widgets{

void TopLevelWindow_obj::__construct( ::hx::widgets::Window parent, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_9_new)
HXDLIN(   9)		super::__construct(parent,id);
            	}

Dynamic TopLevelWindow_obj::__CreateEmpty() { return new TopLevelWindow_obj; }

void *TopLevelWindow_obj::_hx_vtable = 0;

Dynamic TopLevelWindow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TopLevelWindow_obj > _hx_result = new TopLevelWindow_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TopLevelWindow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x3ade267e) {
			if (inClassId<=(int)0x2045b63e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
			} else {
				return inClassId==(int)0x3ade267e;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		return inClassId==(int)0x4af00867 || inClassId==(int)0x5d92cb6f;
	}
}

::String TopLevelWindow_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_15_get_title)
HXLINE(  16)		 wxString r = this->get_topLevelWindowRef()->ptr->GetTitle();
HXLINE(  17)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TopLevelWindow_obj,get_title,return )

::String TopLevelWindow_obj::set_title(::String value){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_19_set_title)
HXLINE(  20)		const char* this1 = value.utf8_str();
HXDLIN(  20)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  21)		 wxTopLevelWindow * _hx_tmp = this->get_topLevelWindowRef()->ptr;
HXDLIN(  21)		(*(_hx_tmp)).SetTitle(s->get_ref());
HXLINE(  22)		s->destroy();
HXLINE(  23)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TopLevelWindow_obj,set_title,return )

void TopLevelWindow_obj::iconize(::hx::Null< bool >  __o_iconize){
            		bool iconize = __o_iconize.Default(true);
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_27_iconize)
HXDLIN(  27)		this->get_topLevelWindowRef()->ptr->Iconize(iconize);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TopLevelWindow_obj,iconize,(void))

bool TopLevelWindow_obj::get_iconized(){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_32_get_iconized)
HXDLIN(  32)		return this->get_topLevelWindowRef()->ptr->IsIconized();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TopLevelWindow_obj,get_iconized,return )

bool TopLevelWindow_obj::set_iconized(bool value){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_34_set_iconized)
HXLINE(  35)		this->get_topLevelWindowRef()->ptr->Iconize(value);
HXLINE(  36)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TopLevelWindow_obj,set_iconized,return )

void TopLevelWindow_obj::maximize(::hx::Null< bool >  __o_maximize){
            		bool maximize = __o_maximize.Default(true);
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_40_maximize)
HXDLIN(  40)		this->get_topLevelWindowRef()->ptr->Maximize(maximize);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TopLevelWindow_obj,maximize,(void))

bool TopLevelWindow_obj::get_maximized(){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_45_get_maximized)
HXDLIN(  45)		return this->get_topLevelWindowRef()->ptr->IsMaximized();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TopLevelWindow_obj,get_maximized,return )

bool TopLevelWindow_obj::set_maximized(bool value){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_47_set_maximized)
HXLINE(  48)		this->get_topLevelWindowRef()->ptr->Maximize(value);
HXLINE(  49)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TopLevelWindow_obj,set_maximized,return )

void TopLevelWindow_obj::setIcon( ::hx::widgets::Icon icon){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_60_setIcon)
HXDLIN(  60)		 wxTopLevelWindow * _hx_tmp = this->get_topLevelWindowRef()->ptr;
HXDLIN(  60)		(*(_hx_tmp)).SetIcon(icon->get_iconRef()->get_ref());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TopLevelWindow_obj,setIcon,(void))

void TopLevelWindow_obj::setBitmap( ::hx::widgets::Bitmap bitmap){
            	HX_GC_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_75_setBitmap)
HXLINE(  76)		 ::hx::widgets::Icon icon =  ::hx::widgets::Icon_obj::__alloc( HX_CTX );
HXLINE(  77)		icon->copyFromBitmap(bitmap);
HXLINE(  78)		 wxTopLevelWindow * _hx_tmp = this->get_topLevelWindowRef()->ptr;
HXDLIN(  78)		(*(_hx_tmp)).SetIcon(icon->get_iconRef()->get_ref());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TopLevelWindow_obj,setBitmap,(void))

::cpp::Pointer<  wxTopLevelWindow > TopLevelWindow_obj::get_topLevelWindowRef(){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_87_get_topLevelWindowRef)
HXDLIN(  87)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TopLevelWindow_obj,get_topLevelWindowRef,return )


::hx::ObjectPtr< TopLevelWindow_obj > TopLevelWindow_obj::__new( ::hx::widgets::Window parent, ::Dynamic id) {
	::hx::ObjectPtr< TopLevelWindow_obj > __this = new TopLevelWindow_obj();
	__this->__construct(parent,id);
	return __this;
}

::hx::ObjectPtr< TopLevelWindow_obj > TopLevelWindow_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic id) {
	TopLevelWindow_obj *__this = (TopLevelWindow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TopLevelWindow_obj), true, "hx.widgets.TopLevelWindow"));
	*(void **)__this = TopLevelWindow_obj::_hx_vtable;
	__this->__construct(parent,id);
	return __this;
}

TopLevelWindow_obj::TopLevelWindow_obj()
{
}

void TopLevelWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TopLevelWindow);
	HX_MARK_MEMBER_NAME(topLevelWindowRef,"topLevelWindowRef");
	 ::hx::widgets::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TopLevelWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(topLevelWindowRef,"topLevelWindowRef");
	 ::hx::widgets::Window_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TopLevelWindow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_title() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"iconize") ) { return ::hx::Val( iconize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return ::hx::Val( setIcon_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iconized") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_iconized() ); }
		if (HX_FIELD_EQ(inName,"maximize") ) { return ::hx::Val( maximize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"maximized") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maximized() ); }
		if (HX_FIELD_EQ(inName,"setBitmap") ) { return ::hx::Val( setBitmap_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_iconized") ) { return ::hx::Val( get_iconized_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_iconized") ) { return ::hx::Val( set_iconized_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_maximized") ) { return ::hx::Val( get_maximized_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maximized") ) { return ::hx::Val( set_maximized_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"topLevelWindowRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_topLevelWindowRef() : topLevelWindowRef ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_topLevelWindowRef") ) { return ::hx::Val( get_topLevelWindowRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TopLevelWindow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iconized") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_iconized(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maximized") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maximized(inValue.Cast< bool >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"topLevelWindowRef") ) { topLevelWindowRef=inValue.Cast< ::cpp::Pointer<  wxTopLevelWindow > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TopLevelWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("iconized",89,ea,f2,87));
	outFields->push(HX_("maximized",18,0e,e1,fe));
	outFields->push(HX_("topLevelWindowRef",94,82,46,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TopLevelWindow_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxTopLevelWindow > */ ,(int)offsetof(TopLevelWindow_obj,topLevelWindowRef),HX_("topLevelWindowRef",94,82,46,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TopLevelWindow_obj_sStaticStorageInfo = 0;
#endif

static ::String TopLevelWindow_obj_sMemberFields[] = {
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("iconize",7b,61,22,d6),
	HX_("get_iconized",92,9e,0c,3d),
	HX_("set_iconized",06,c2,05,52),
	HX_("maximize",cc,24,5f,d4),
	HX_("get_maximized",ef,e1,44,c0),
	HX_("set_maximized",fb,c3,4a,05),
	HX_("setIcon",3b,28,37,0b),
	HX_("setBitmap",31,85,b3,50),
	HX_("topLevelWindowRef",94,82,46,b0),
	HX_("get_topLevelWindowRef",6b,85,f4,2e),
	::String(null()) };

::hx::Class TopLevelWindow_obj::__mClass;

void TopLevelWindow_obj::__register()
{
	TopLevelWindow_obj _hx_dummy;
	TopLevelWindow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.TopLevelWindow",1c,2b,7b,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TopLevelWindow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TopLevelWindow_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TopLevelWindow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TopLevelWindow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
