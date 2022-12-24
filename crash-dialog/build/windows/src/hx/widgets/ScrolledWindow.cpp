#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_12c1599105de71f3
#define INCLUDED_12c1599105de71f3
#include "wx/scrolwin.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
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
#ifndef INCLUDED_hx_widgets_ScrolledWindow
#include <hx/widgets/ScrolledWindow.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_69a4e0ca46fca438_8_new,"hx.widgets.ScrolledWindow","new",0x6c1af34b,"hx.widgets.ScrolledWindow.new","hx/widgets/ScrolledWindow.hx",8,0x9fd09343)
HX_LOCAL_STACK_FRAME(_hx_pos_69a4e0ca46fca438_21_setScrollbars,"hx.widgets.ScrolledWindow","setScrollbars",0x16619eba,"hx.widgets.ScrolledWindow.setScrollbars","hx/widgets/ScrolledWindow.hx",21,0x9fd09343)
HX_LOCAL_STACK_FRAME(_hx_pos_69a4e0ca46fca438_25_setScrollRate,"hx.widgets.ScrolledWindow","setScrollRate",0x0bce367a,"hx.widgets.ScrolledWindow.setScrollRate","hx/widgets/ScrolledWindow.hx",25,0x9fd09343)
HX_LOCAL_STACK_FRAME(_hx_pos_69a4e0ca46fca438_29_showScrollbars,"hx.widgets.ScrolledWindow","showScrollbars",0xb0fde01f,"hx.widgets.ScrolledWindow.showScrollbars","hx/widgets/ScrolledWindow.hx",29,0x9fd09343)
HX_LOCAL_STACK_FRAME(_hx_pos_69a4e0ca46fca438_33_enableScrolling,"hx.widgets.ScrolledWindow","enableScrolling",0x34c01b5d,"hx.widgets.ScrolledWindow.enableScrolling","hx/widgets/ScrolledWindow.hx",33,0x9fd09343)
HX_LOCAL_STACK_FRAME(_hx_pos_69a4e0ca46fca438_41_get_scrolledWindowRef,"hx.widgets.ScrolledWindow","get_scrolledWindowRef",0xbb170c79,"hx.widgets.ScrolledWindow.get_scrolledWindowRef","hx/widgets/ScrolledWindow.hx",41,0x9fd09343)
namespace hx{
namespace widgets{

void ScrolledWindow_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_69a4e0ca46fca438_8_new)
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxScrolledWindow()))->reinterpret();
HXLINE(  11)			 wxScrolledWindow * _hx_tmp = this->get_scrolledWindowRef()->ptr;
HXDLIN(  11)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  11)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  11)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  11)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  14)		super::__construct(parent,id);
            	}

Dynamic ScrolledWindow_obj::__CreateEmpty() { return new ScrolledWindow_obj; }

void *ScrolledWindow_obj::_hx_vtable = 0;

Dynamic ScrolledWindow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrolledWindow_obj > _hx_result = new ScrolledWindow_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ScrolledWindow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x0d01ed3b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0d01ed3b;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

void ScrolledWindow_obj::setScrollbars(int pixelsPerUnitX,int pixelsPerUnitY,int noUnitsX,int noUnitsY,::hx::Null< int >  __o_xPos,::hx::Null< int >  __o_yPos,::hx::Null< bool >  __o_noRefresh){
            		int xPos = __o_xPos.Default(0);
            		int yPos = __o_yPos.Default(0);
            		bool noRefresh = __o_noRefresh.Default(false);
            	HX_STACKFRAME(&_hx_pos_69a4e0ca46fca438_21_setScrollbars)
HXDLIN(  21)		this->get_scrolledWindowRef()->ptr->SetScrollbars(pixelsPerUnitX,pixelsPerUnitY,noUnitsX,noUnitsY,xPos,yPos,noRefresh);
            	}


HX_DEFINE_DYNAMIC_FUNC7(ScrolledWindow_obj,setScrollbars,(void))

void ScrolledWindow_obj::setScrollRate(int xstep,int ystep){
            	HX_STACKFRAME(&_hx_pos_69a4e0ca46fca438_25_setScrollRate)
HXDLIN(  25)		this->get_scrolledWindowRef()->ptr->SetScrollRate(xstep,ystep);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScrolledWindow_obj,setScrollRate,(void))

void ScrolledWindow_obj::showScrollbars( cpp::Struct<wxScrollbarVisibility, cpp::EnumHandler> horz, cpp::Struct<wxScrollbarVisibility, cpp::EnumHandler> vert){
            	HX_STACKFRAME(&_hx_pos_69a4e0ca46fca438_29_showScrollbars)
HXDLIN(  29)		this->get_scrolledWindowRef()->ptr->ShowScrollbars(horz,vert);
            	}


void ScrolledWindow_obj::enableScrolling(bool xScrolling,bool yScrolling){
            	HX_STACKFRAME(&_hx_pos_69a4e0ca46fca438_33_enableScrolling)
HXDLIN(  33)		this->get_scrolledWindowRef()->ptr->EnableScrolling(xScrolling,yScrolling);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScrolledWindow_obj,enableScrolling,(void))

::cpp::Pointer<  wxScrolledWindow > ScrolledWindow_obj::get_scrolledWindowRef(){
            	HX_STACKFRAME(&_hx_pos_69a4e0ca46fca438_41_get_scrolledWindowRef)
HXDLIN(  41)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrolledWindow_obj,get_scrolledWindowRef,return )


::hx::ObjectPtr< ScrolledWindow_obj > ScrolledWindow_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< ScrolledWindow_obj > __this = new ScrolledWindow_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< ScrolledWindow_obj > ScrolledWindow_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	ScrolledWindow_obj *__this = (ScrolledWindow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrolledWindow_obj), true, "hx.widgets.ScrolledWindow"));
	*(void **)__this = ScrolledWindow_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

ScrolledWindow_obj::ScrolledWindow_obj()
{
}

void ScrolledWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrolledWindow);
	HX_MARK_MEMBER_NAME(scrolledWindowRef,"scrolledWindowRef");
	 ::hx::widgets::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrolledWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scrolledWindowRef,"scrolledWindowRef");
	 ::hx::widgets::Window_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrolledWindow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"setScrollbars") ) { return ::hx::Val( setScrollbars_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScrollRate") ) { return ::hx::Val( setScrollRate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enableScrolling") ) { return ::hx::Val( enableScrolling_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"scrolledWindowRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_scrolledWindowRef() : scrolledWindowRef ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_scrolledWindowRef") ) { return ::hx::Val( get_scrolledWindowRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrolledWindow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"scrolledWindowRef") ) { scrolledWindowRef=inValue.Cast< ::cpp::Pointer<  wxScrolledWindow > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrolledWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scrolledWindowRef",f7,cf,2f,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrolledWindow_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxScrolledWindow > */ ,(int)offsetof(ScrolledWindow_obj,scrolledWindowRef),HX_("scrolledWindowRef",f7,cf,2f,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrolledWindow_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrolledWindow_obj_sMemberFields[] = {
	HX_("setScrollbars",0f,88,6f,b5),
	HX_("setScrollRate",cf,1f,dc,aa),
	HX_("enableScrolling",f2,c3,1a,22),
	HX_("scrolledWindowRef",f7,cf,2f,f3),
	HX_("get_scrolledWindowRef",ce,d2,dd,71),
	::String(null()) };

::hx::Class ScrolledWindow_obj::__mClass;

void ScrolledWindow_obj::__register()
{
	ScrolledWindow_obj _hx_dummy;
	ScrolledWindow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ScrolledWindow",d9,f1,9e,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrolledWindow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrolledWindow_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrolledWindow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrolledWindow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
