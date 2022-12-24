#include <hxcpp.h>

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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Menu
#include <hx/widgets/Menu.h>
#endif
#ifndef INCLUDED_hx_widgets_MenuBar
#include <hx/widgets/MenuBar.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d11a90af0297f57_9_new,"hx.widgets.MenuBar","new",0x6d3ae529,"hx.widgets.MenuBar.new","hx/widgets/MenuBar.hx",9,0xe5b131e9)
HX_LOCAL_STACK_FRAME(_hx_pos_2d11a90af0297f57_20_append,"hx.widgets.MenuBar","append",0xaa6d30b1,"hx.widgets.MenuBar.append","hx/widgets/MenuBar.hx",20,0xe5b131e9)
HX_LOCAL_STACK_FRAME(_hx_pos_2d11a90af0297f57_48_get_menuBarRef,"hx.widgets.MenuBar","get_menuBarRef",0x3f40c65f,"hx.widgets.MenuBar.get_menuBarRef","hx/widgets/MenuBar.hx",48,0xe5b131e9)
HX_LOCAL_STACK_FRAME(_hx_pos_2d11a90af0297f57_33_get_autoWindowMenu,"hx.widgets.MenuBar","get_autoWindowMenu",0x0c4e781e,"hx.widgets.MenuBar.get_autoWindowMenu","hx/widgets/MenuBar.hx",33,0xe5b131e9)
HX_LOCAL_STACK_FRAME(_hx_pos_2d11a90af0297f57_40_set_autoWindowMenu,"hx.widgets.MenuBar","set_autoWindowMenu",0xe8fdaa92,"hx.widgets.MenuBar.set_autoWindowMenu","hx/widgets/MenuBar.hx",40,0xe5b131e9)
namespace hx{
namespace widgets{

void MenuBar_obj::__construct(::hx::Null< int >  __o_style,::hx::Null< bool >  __o_create){
            		int style = __o_style.Default(0);
            		bool create = __o_create.Default(true);
            	HX_STACKFRAME(&_hx_pos_2d11a90af0297f57_9_new)
HXLINE(  10)		super::__construct(null(),-1);
HXLINE(  11)		if (create) {
HXLINE(  12)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxMenuBar(style)))->reinterpret();
            		}
            	}

Dynamic MenuBar_obj::__CreateEmpty() { return new MenuBar_obj; }

void *MenuBar_obj::_hx_vtable = 0;

Dynamic MenuBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuBar_obj > _hx_result = new MenuBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MenuBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		return inClassId==(int)0x54b58915 || inClassId==(int)0x5d92cb6f;
	}
}

void MenuBar_obj::append( ::hx::widgets::Menu menu,::String title){
            	HX_STACKFRAME(&_hx_pos_2d11a90af0297f57_20_append)
HXLINE(  21)		const char* this1 = title.utf8_str();
HXDLIN(  21)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  22)		 wxMenuBar * _hx_tmp = this->get_menuBarRef()->ptr;
HXDLIN(  22)		(*(_hx_tmp)).Append(menu->get_menuRef()->get_raw(),str);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MenuBar_obj,append,(void))

::cpp::Pointer<  wxMenuBar > MenuBar_obj::get_menuBarRef(){
            	HX_STACKFRAME(&_hx_pos_2d11a90af0297f57_48_get_menuBarRef)
HXDLIN(  48)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuBar_obj,get_menuBarRef,return )

bool MenuBar_obj::get_autoWindowMenu(){
            	HX_STACKFRAME(&_hx_pos_2d11a90af0297f57_33_get_autoWindowMenu)
HXDLIN(  33)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MenuBar_obj,get_autoWindowMenu,return )

bool MenuBar_obj::set_autoWindowMenu(bool value){
            	HX_STACKFRAME(&_hx_pos_2d11a90af0297f57_40_set_autoWindowMenu)
HXDLIN(  40)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MenuBar_obj,set_autoWindowMenu,return )


::hx::ObjectPtr< MenuBar_obj > MenuBar_obj::__new(::hx::Null< int >  __o_style,::hx::Null< bool >  __o_create) {
	::hx::ObjectPtr< MenuBar_obj > __this = new MenuBar_obj();
	__this->__construct(__o_style,__o_create);
	return __this;
}

::hx::ObjectPtr< MenuBar_obj > MenuBar_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_style,::hx::Null< bool >  __o_create) {
	MenuBar_obj *__this = (MenuBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuBar_obj), true, "hx.widgets.MenuBar"));
	*(void **)__this = MenuBar_obj::_hx_vtable;
	__this->__construct(__o_style,__o_create);
	return __this;
}

MenuBar_obj::MenuBar_obj()
{
}

void MenuBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuBar);
	HX_MARK_MEMBER_NAME(menuBarRef,"menuBarRef");
	 ::hx::widgets::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuBarRef,"menuBarRef");
	 ::hx::widgets::Window_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuBarRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_menuBarRef() : menuBarRef ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_menuBarRef") ) { return ::hx::Val( get_menuBarRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MenuBar_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"autoWindowMenu") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_autoWindowMenu() ); return true; } }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_autoWindowMenu") ) { outValue = get_autoWindowMenu_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_autoWindowMenu") ) { outValue = set_autoWindowMenu_dyn(); return true; }
	}
	return false;
}

::hx::Val MenuBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"menuBarRef") ) { menuBarRef=inValue.Cast< ::cpp::Pointer<  wxMenuBar > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuBar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"autoWindowMenu") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_autoWindowMenu(ioValue.Cast< bool >()) ); }
	}
	return false;
}

void MenuBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menuBarRef",3f,c0,f4,36));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuBar_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxMenuBar > */ ,(int)offsetof(MenuBar_obj,menuBarRef),HX_("menuBarRef",3f,c0,f4,36)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuBar_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuBar_obj_sMemberFields[] = {
	HX_("append",da,e1,d3,8f),
	HX_("menuBarRef",3f,c0,f4,36),
	HX_("get_menuBarRef",88,48,ea,ac),
	::String(null()) };

::hx::Class MenuBar_obj::__mClass;

static ::String MenuBar_obj_sStaticFields[] = {
	HX_("get_autoWindowMenu",c7,c2,4e,b5),
	HX_("set_autoWindowMenu",3b,f5,fd,91),
	::String(null())
};

void MenuBar_obj::__register()
{
	MenuBar_obj _hx_dummy;
	MenuBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.MenuBar",b7,1c,6d,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuBar_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuBar_obj::__SetStatic;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MenuBar_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
