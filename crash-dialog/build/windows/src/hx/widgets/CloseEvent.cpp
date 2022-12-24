#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_hx_widgets_CloseEvent
#include <hx/widgets/CloseEvent.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f024ea472ebf4a0d_6_new,"hx.widgets.CloseEvent","new",0x983fe251,"hx.widgets.CloseEvent.new","hx/widgets/CloseEvent.hx",6,0xbac02ffd)
HX_LOCAL_STACK_FRAME(_hx_pos_f024ea472ebf4a0d_10_get_canVeto,"hx.widgets.CloseEvent","get_canVeto",0xf3c769a2,"hx.widgets.CloseEvent.get_canVeto","hx/widgets/CloseEvent.hx",10,0xbac02ffd)
HX_LOCAL_STACK_FRAME(_hx_pos_f024ea472ebf4a0d_14_veto,"hx.widgets.CloseEvent","veto",0xa4efd759,"hx.widgets.CloseEvent.veto","hx/widgets/CloseEvent.hx",14,0xbac02ffd)
HX_LOCAL_STACK_FRAME(_hx_pos_f024ea472ebf4a0d_22_get_closeEventRef,"hx.widgets.CloseEvent","get_closeEventRef",0xe5b6e239,"hx.widgets.CloseEvent.get_closeEventRef","hx/widgets/CloseEvent.hx",22,0xbac02ffd)
namespace hx{
namespace widgets{

void CloseEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f024ea472ebf4a0d_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic CloseEvent_obj::__CreateEmpty() { return new CloseEvent_obj; }

void *CloseEvent_obj::_hx_vtable = 0;

Dynamic CloseEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CloseEvent_obj > _hx_result = new CloseEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CloseEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4f345a43) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4f345a43;
	} else {
		return inClassId==(int)0x70778841;
	}
}

bool CloseEvent_obj::get_canVeto(){
            	HX_STACKFRAME(&_hx_pos_f024ea472ebf4a0d_10_get_canVeto)
HXDLIN(  10)		return this->get_closeEventRef()->ptr->CanVeto();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CloseEvent_obj,get_canVeto,return )

void CloseEvent_obj::veto(::hx::Null< bool >  __o_veto){
            		bool veto = __o_veto.Default(true);
            	HX_STACKFRAME(&_hx_pos_f024ea472ebf4a0d_14_veto)
HXDLIN(  14)		this->get_closeEventRef()->ptr->Veto(veto);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CloseEvent_obj,veto,(void))

::cpp::Pointer<  wxCloseEvent > CloseEvent_obj::get_closeEventRef(){
            	HX_STACKFRAME(&_hx_pos_f024ea472ebf4a0d_22_get_closeEventRef)
HXDLIN(  22)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CloseEvent_obj,get_closeEventRef,return )


::hx::ObjectPtr< CloseEvent_obj > CloseEvent_obj::__new() {
	::hx::ObjectPtr< CloseEvent_obj > __this = new CloseEvent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CloseEvent_obj > CloseEvent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CloseEvent_obj *__this = (CloseEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CloseEvent_obj), true, "hx.widgets.CloseEvent"));
	*(void **)__this = CloseEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CloseEvent_obj::CloseEvent_obj()
{
}

void CloseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CloseEvent);
	HX_MARK_MEMBER_NAME(canVeto,"canVeto");
	HX_MARK_MEMBER_NAME(closeEventRef,"closeEventRef");
	 ::hx::widgets::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CloseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canVeto,"canVeto");
	HX_VISIT_MEMBER_NAME(closeEventRef,"closeEventRef");
	 ::hx::widgets::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CloseEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"veto") ) { return ::hx::Val( veto_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canVeto") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_canVeto() : canVeto ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_canVeto") ) { return ::hx::Val( get_canVeto_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeEventRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_closeEventRef() : closeEventRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_closeEventRef") ) { return ::hx::Val( get_closeEventRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CloseEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"canVeto") ) { canVeto=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeEventRef") ) { closeEventRef=inValue.Cast< ::cpp::Pointer<  wxCloseEvent > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CloseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("canVeto",9a,1e,a4,6c));
	outFields->push(HX_("closeEventRef",31,a1,dd,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CloseEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(CloseEvent_obj,canVeto),HX_("canVeto",9a,1e,a4,6c)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxCloseEvent > */ ,(int)offsetof(CloseEvent_obj,closeEventRef),HX_("closeEventRef",31,a1,dd,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CloseEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String CloseEvent_obj_sMemberFields[] = {
	HX_("canVeto",9a,1e,a4,6c),
	HX_("get_canVeto",b1,7e,9e,f2),
	HX_("veto",6a,36,4c,4e),
	HX_("closeEventRef",31,a1,dd,cb),
	HX_("get_closeEventRef",88,ac,4d,d2),
	::String(null()) };

::hx::Class CloseEvent_obj::__mClass;

void CloseEvent_obj::__register()
{
	CloseEvent_obj _hx_dummy;
	CloseEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.CloseEvent",df,65,92,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CloseEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CloseEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CloseEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CloseEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
