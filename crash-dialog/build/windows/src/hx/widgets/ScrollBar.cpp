#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_40d633d332947b28
#define INCLUDED_40d633d332947b28
#include "wx/scrolbar.h"
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
#ifndef INCLUDED_hx_widgets_ScrollBar
#include <hx/widgets/ScrollBar.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_396d0a387984ccc6_8_new,"hx.widgets.ScrollBar","new",0xd088933b,"hx.widgets.ScrollBar.new","hx/widgets/ScrollBar.hx",8,0x9076d097)
HX_LOCAL_STACK_FRAME(_hx_pos_396d0a387984ccc6_21_setScrollbar,"hx.widgets.ScrollBar","setScrollbar",0xda3be9a9,"hx.widgets.ScrollBar.setScrollbar","hx/widgets/ScrollBar.hx",21,0x9076d097)
HX_LOCAL_STACK_FRAME(_hx_pos_396d0a387984ccc6_26_get_pageSize,"hx.widgets.ScrollBar","get_pageSize",0x820cb87e,"hx.widgets.ScrollBar.get_pageSize","hx/widgets/ScrollBar.hx",26,0x9076d097)
HX_LOCAL_STACK_FRAME(_hx_pos_396d0a387984ccc6_31_get_range,"hx.widgets.ScrollBar","get_range",0xedd7db2f,"hx.widgets.ScrollBar.get_range","hx/widgets/ScrollBar.hx",31,0x9076d097)
HX_LOCAL_STACK_FRAME(_hx_pos_396d0a387984ccc6_36_get_thumbPosition,"hx.widgets.ScrollBar","get_thumbPosition",0xe765fc51,"hx.widgets.ScrollBar.get_thumbPosition","hx/widgets/ScrollBar.hx",36,0x9076d097)
HX_LOCAL_STACK_FRAME(_hx_pos_396d0a387984ccc6_38_set_thumbPosition,"hx.widgets.ScrollBar","set_thumbPosition",0x0ad3d45d,"hx.widgets.ScrollBar.set_thumbPosition","hx/widgets/ScrollBar.hx",38,0x9076d097)
HX_LOCAL_STACK_FRAME(_hx_pos_396d0a387984ccc6_45_get_thumbSize,"hx.widgets.ScrollBar","get_thumbSize",0x32ae0869,"hx.widgets.ScrollBar.get_thumbSize","hx/widgets/ScrollBar.hx",45,0x9076d097)
HX_LOCAL_STACK_FRAME(_hx_pos_396d0a387984ccc6_53_get_scrollBarRef,"hx.widgets.ScrollBar","get_scrollBarRef",0xb39215fb,"hx.widgets.ScrollBar.get_scrollBarRef","hx/widgets/ScrollBar.hx",53,0x9076d097)
namespace hx{
namespace widgets{

void ScrollBar_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_396d0a387984ccc6_8_new)
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxScrollBar()))->reinterpret();
HXLINE(  11)			 wxScrollBar * _hx_tmp = this->get_scrollBarRef()->ptr;
HXDLIN(  11)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  11)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  11)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  11)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  14)		super::__construct(parent,id,null());
            	}

Dynamic ScrollBar_obj::__CreateEmpty() { return new ScrollBar_obj; }

void *ScrollBar_obj::_hx_vtable = 0;

Dynamic ScrollBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollBar_obj > _hx_result = new ScrollBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ScrollBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x096499a7) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x096499a7;
			}
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

void ScrollBar_obj::setScrollbar(int position,int thumbSize,int range,int pageSize){
            	HX_STACKFRAME(&_hx_pos_396d0a387984ccc6_21_setScrollbar)
HXDLIN(  21)		this->get_scrollBarRef()->ptr->SetScrollbar(position,thumbSize,range,pageSize);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ScrollBar_obj,setScrollbar,(void))

int ScrollBar_obj::get_pageSize(){
            	HX_STACKFRAME(&_hx_pos_396d0a387984ccc6_26_get_pageSize)
HXDLIN(  26)		return this->get_scrollBarRef()->ptr->GetPageSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollBar_obj,get_pageSize,return )

int ScrollBar_obj::get_range(){
            	HX_STACKFRAME(&_hx_pos_396d0a387984ccc6_31_get_range)
HXDLIN(  31)		return this->get_scrollBarRef()->ptr->GetRange();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollBar_obj,get_range,return )

int ScrollBar_obj::get_thumbPosition(){
            	HX_STACKFRAME(&_hx_pos_396d0a387984ccc6_36_get_thumbPosition)
HXDLIN(  36)		return this->get_scrollBarRef()->ptr->GetThumbPosition();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollBar_obj,get_thumbPosition,return )

int ScrollBar_obj::set_thumbPosition(int value){
            	HX_STACKFRAME(&_hx_pos_396d0a387984ccc6_38_set_thumbPosition)
HXLINE(  39)		this->get_scrollBarRef()->ptr->SetThumbPosition(value);
HXLINE(  40)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollBar_obj,set_thumbPosition,return )

int ScrollBar_obj::get_thumbSize(){
            	HX_STACKFRAME(&_hx_pos_396d0a387984ccc6_45_get_thumbSize)
HXDLIN(  45)		return this->get_scrollBarRef()->ptr->GetThumbSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollBar_obj,get_thumbSize,return )

::cpp::Pointer<  wxScrollBar > ScrollBar_obj::get_scrollBarRef(){
            	HX_STACKFRAME(&_hx_pos_396d0a387984ccc6_53_get_scrollBarRef)
HXDLIN(  53)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollBar_obj,get_scrollBarRef,return )


::hx::ObjectPtr< ScrollBar_obj > ScrollBar_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< ScrollBar_obj > __this = new ScrollBar_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< ScrollBar_obj > ScrollBar_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	ScrollBar_obj *__this = (ScrollBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollBar_obj), true, "hx.widgets.ScrollBar"));
	*(void **)__this = ScrollBar_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

ScrollBar_obj::ScrollBar_obj()
{
}

void ScrollBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollBar);
	HX_MARK_MEMBER_NAME(thumbSize,"thumbSize");
	HX_MARK_MEMBER_NAME(scrollBarRef,"scrollBarRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(thumbSize,"thumbSize");
	HX_VISIT_MEMBER_NAME(scrollBarRef,"scrollBarRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_range() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pageSize() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_range") ) { return ::hx::Val( get_range_dyn() ); }
		if (HX_FIELD_EQ(inName,"thumbSize") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_thumbSize() : thumbSize ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setScrollbar") ) { return ::hx::Val( setScrollbar_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pageSize") ) { return ::hx::Val( get_pageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollBarRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_scrollBarRef() : scrollBarRef ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"thumbPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_thumbPosition() ); }
		if (HX_FIELD_EQ(inName,"get_thumbSize") ) { return ::hx::Val( get_thumbSize_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_scrollBarRef") ) { return ::hx::Val( get_scrollBarRef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_thumbPosition") ) { return ::hx::Val( get_thumbPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_thumbPosition") ) { return ::hx::Val( set_thumbPosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"thumbSize") ) { thumbSize=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollBarRef") ) { scrollBarRef=inValue.Cast< ::cpp::Pointer<  wxScrollBar > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"thumbPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_thumbPosition(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pageSize",b0,7a,1b,55));
	outFields->push(HX_("range",bd,a5,1f,e4));
	outFields->push(HX_("thumbPosition",df,04,70,7b));
	outFields->push(HX_("thumbSize",f7,31,89,0c));
	outFields->push(HX_("scrollBarRef",2d,d9,32,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollBar_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ScrollBar_obj,thumbSize),HX_("thumbSize",f7,31,89,0c)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxScrollBar > */ ,(int)offsetof(ScrollBar_obj,scrollBarRef),HX_("scrollBarRef",2d,d9,32,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollBar_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollBar_obj_sMemberFields[] = {
	HX_("setScrollbar",e4,5f,64,62),
	HX_("get_pageSize",b9,2e,35,0a),
	HX_("get_range",14,02,c9,27),
	HX_("get_thumbPosition",36,10,e0,81),
	HX_("set_thumbPosition",42,e8,4d,a5),
	HX_("thumbSize",f7,31,89,0c),
	HX_("get_thumbSize",ce,05,ed,cd),
	HX_("scrollBarRef",2d,d9,32,ac),
	HX_("get_scrollBarRef",b6,c5,d1,b0),
	::String(null()) };

::hx::Class ScrollBar_obj::__mClass;

void ScrollBar_obj::__register()
{
	ScrollBar_obj _hx_dummy;
	ScrollBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ScrollBar",c9,d9,e1,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
