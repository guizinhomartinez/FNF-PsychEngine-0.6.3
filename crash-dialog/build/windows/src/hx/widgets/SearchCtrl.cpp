#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_a0eece3e33fd47bf
#define INCLUDED_a0eece3e33fd47bf
#include "wx/srchctrl.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_224ae41206d096c1
#define INCLUDED_224ae41206d096c1
#include "wx/textctrl.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_SearchCtrl
#include <hx/widgets/SearchCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_TextCtrl
#include <hx/widgets/TextCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_TextEntry
#include <hx/widgets/TextEntry.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_713b714e72ffccd7_8_new,"hx.widgets.SearchCtrl","new",0x20d5b1c2,"hx.widgets.SearchCtrl.new","hx/widgets/SearchCtrl.hx",8,0xa8fed9ac)
HX_LOCAL_STACK_FRAME(_hx_pos_713b714e72ffccd7_18_get_value,"hx.widgets.SearchCtrl","get_value",0xb539f2aa,"hx.widgets.SearchCtrl.get_value","hx/widgets/SearchCtrl.hx",18,0xa8fed9ac)
HX_LOCAL_STACK_FRAME(_hx_pos_713b714e72ffccd7_22_set_value,"hx.widgets.SearchCtrl","set_value",0x988adeb6,"hx.widgets.SearchCtrl.set_value","hx/widgets/SearchCtrl.hx",22,0xa8fed9ac)
HX_LOCAL_STACK_FRAME(_hx_pos_713b714e72ffccd7_33_get_searchCtrlRef,"hx.widgets.SearchCtrl","get_searchCtrlRef",0x90891f19,"hx.widgets.SearchCtrl.get_searchCtrlRef","hx/widgets/SearchCtrl.hx",33,0xa8fed9ac)
namespace hx{
namespace widgets{

void SearchCtrl_obj::__construct( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_713b714e72ffccd7_8_new)
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxSearchCtrl()))->reinterpret();
HXLINE(  11)			const char* this1 = text.utf8_str();
HXDLIN(  11)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  12)			 wxSearchCtrl * _hx_tmp = this->get_searchCtrlRef()->ptr;
HXDLIN(  12)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  12)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  12)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  12)			(*(_hx_tmp)).Create(_hx_tmp1,id,str,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  15)		super::__construct(parent,null(),id,null());
            	}

Dynamic SearchCtrl_obj::__CreateEmpty() { return new SearchCtrl_obj; }

void *SearchCtrl_obj::_hx_vtable = 0;

Dynamic SearchCtrl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SearchCtrl_obj > _hx_result = new SearchCtrl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool SearchCtrl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x10aa564e) {
		if (inClassId<=(int)0x0f2dbd53) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x0f2dbd53;
			}
		} else {
			return inClassId==(int)0x10aa564e;
		}
	} else {
		if (inClassId<=(int)0x467ba226) {
			return inClassId==(int)0x2045b63e || inClassId==(int)0x467ba226;
		} else {
			return inClassId==(int)0x5d92cb6f;
		}
	}
}

::String SearchCtrl_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_713b714e72ffccd7_18_get_value)
HXLINE(  19)		 wxString r = this->get_searchCtrlRef()->ptr->GetValue();
HXLINE(  20)		return ::String(::String(r.ToUTF8().data()));
            	}


::String SearchCtrl_obj::set_value(::String value){
            	HX_STACKFRAME(&_hx_pos_713b714e72ffccd7_22_set_value)
HXLINE(  23)		const char* this1 = value.utf8_str();
HXDLIN(  23)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  24)		this->get_searchCtrlRef()->ptr->SetValue(s);
HXLINE(  25)		return value;
            	}


::cpp::Pointer<  wxSearchCtrl > SearchCtrl_obj::get_searchCtrlRef(){
            	HX_STACKFRAME(&_hx_pos_713b714e72ffccd7_33_get_searchCtrlRef)
HXDLIN(  33)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SearchCtrl_obj,get_searchCtrlRef,return )


::hx::ObjectPtr< SearchCtrl_obj > SearchCtrl_obj::__new( ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< SearchCtrl_obj > __this = new SearchCtrl_obj();
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< SearchCtrl_obj > SearchCtrl_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	SearchCtrl_obj *__this = (SearchCtrl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SearchCtrl_obj), true, "hx.widgets.SearchCtrl"));
	*(void **)__this = SearchCtrl_obj::_hx_vtable;
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

SearchCtrl_obj::SearchCtrl_obj()
{
}

void SearchCtrl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SearchCtrl);
	HX_MARK_MEMBER_NAME(searchCtrlRef,"searchCtrlRef");
	 ::hx::widgets::TextCtrl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SearchCtrl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(searchCtrlRef,"searchCtrlRef");
	 ::hx::widgets::TextCtrl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SearchCtrl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"searchCtrlRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_searchCtrlRef() : searchCtrlRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_searchCtrlRef") ) { return ::hx::Val( get_searchCtrlRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SearchCtrl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"searchCtrlRef") ) { searchCtrlRef=inValue.Cast< ::cpp::Pointer<  wxSearchCtrl > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SearchCtrl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("searchCtrlRef",e0,4a,1c,ba));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SearchCtrl_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxSearchCtrl > */ ,(int)offsetof(SearchCtrl_obj,searchCtrlRef),HX_("searchCtrlRef",e0,4a,1c,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SearchCtrl_obj_sStaticStorageInfo = 0;
#endif

static ::String SearchCtrl_obj_sMemberFields[] = {
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("searchCtrlRef",e0,4a,1c,ba),
	HX_("get_searchCtrlRef",37,56,8c,c0),
	::String(null()) };

::hx::Class SearchCtrl_obj::__mClass;

void SearchCtrl_obj::__register()
{
	SearchCtrl_obj _hx_dummy;
	SearchCtrl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.SearchCtrl",d0,68,ed,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SearchCtrl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SearchCtrl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SearchCtrl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SearchCtrl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
