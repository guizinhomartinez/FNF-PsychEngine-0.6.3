#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_311737314af0e063
#define INCLUDED_311737314af0e063
#include "wx/statline.h"
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
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticLine
#include <hx/widgets/StaticLine.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f693333057630ce1_7_new,"hx.widgets.StaticLine","new",0x34000cd1,"hx.widgets.StaticLine.new","hx/widgets/StaticLine.hx",7,0x9590d57d)
HX_LOCAL_STACK_FRAME(_hx_pos_f693333057630ce1_21_get_staticLineRef,"hx.widgets.StaticLine","get_staticLineRef",0x324d1239,"hx.widgets.StaticLine.get_staticLineRef","hx/widgets/StaticLine.hx",21,0x9590d57d)
namespace hx{
namespace widgets{

void StaticLine_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_f693333057630ce1_7_new)
HXLINE(   8)		if (::hx::IsNull( this->_ref )) {
HXLINE(   9)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxStaticLine()))->reinterpret();
HXLINE(  10)			 wxStaticLine * _hx_tmp = this->get_staticLineRef()->ptr;
HXDLIN(  10)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  10)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  10)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  10)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  13)		super::__construct(parent,id,null());
            	}

Dynamic StaticLine_obj::__CreateEmpty() { return new StaticLine_obj; }

void *StaticLine_obj::_hx_vtable = 0;

Dynamic StaticLine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticLine_obj > _hx_result = new StaticLine_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool StaticLine_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		return inClassId==(int)0x4b083ddd || inClassId==(int)0x5d92cb6f;
	}
}

::cpp::Pointer<  wxStaticLine > StaticLine_obj::get_staticLineRef(){
            	HX_STACKFRAME(&_hx_pos_f693333057630ce1_21_get_staticLineRef)
HXDLIN(  21)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StaticLine_obj,get_staticLineRef,return )


::hx::ObjectPtr< StaticLine_obj > StaticLine_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< StaticLine_obj > __this = new StaticLine_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< StaticLine_obj > StaticLine_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	StaticLine_obj *__this = (StaticLine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticLine_obj), true, "hx.widgets.StaticLine"));
	*(void **)__this = StaticLine_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

StaticLine_obj::StaticLine_obj()
{
}

void StaticLine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticLine);
	HX_MARK_MEMBER_NAME(staticLineRef,"staticLineRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticLine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(staticLineRef,"staticLineRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StaticLine_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"staticLineRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_staticLineRef() : staticLineRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_staticLineRef") ) { return ::hx::Val( get_staticLineRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StaticLine_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"staticLineRef") ) { staticLineRef=inValue.Cast< ::cpp::Pointer<  wxStaticLine > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticLine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("staticLineRef",b1,46,ae,a6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StaticLine_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxStaticLine > */ ,(int)offsetof(StaticLine_obj,staticLineRef),HX_("staticLineRef",b1,46,ae,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StaticLine_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticLine_obj_sMemberFields[] = {
	HX_("staticLineRef",b1,46,ae,a6),
	HX_("get_staticLineRef",08,52,1e,ad),
	::String(null()) };

::hx::Class StaticLine_obj::__mClass;

void StaticLine_obj::__register()
{
	StaticLine_obj _hx_dummy;
	StaticLine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StaticLine",5f,50,4b,d2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticLine_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticLine_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticLine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticLine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
