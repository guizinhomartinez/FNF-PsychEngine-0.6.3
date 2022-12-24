#include <hxcpp.h>

#ifndef INCLUDED_d138b2ba805d405f
#define INCLUDED_d138b2ba805d405f
#include "wx/dcgraph.h"
#endif
#ifndef INCLUDED_934d0db102cb1d0b
#define INCLUDED_934d0db102cb1d0b
#include "wx/graphics.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GCDC
#include <hx/widgets/GCDC.h>
#endif
#ifndef INCLUDED_hx_widgets_GraphicsContext
#include <hx/widgets/GraphicsContext.h>
#endif
#ifndef INCLUDED_hx_widgets_GraphicsObject
#include <hx/widgets/GraphicsObject.h>
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
#ifndef INCLUDED_hx_widgets_WindowDC
#include <hx/widgets/WindowDC.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_673888ebaf10c590_12_new,"hx.widgets.GCDC","new",0x42cef64a,"hx.widgets.GCDC.new","hx/widgets/GCDC.hx",12,0x1c3c7ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_673888ebaf10c590_21_get_graphicsContext,"hx.widgets.GCDC","get_graphicsContext",0xdc8e2d65,"hx.widgets.GCDC.get_graphicsContext","hx/widgets/GCDC.hx",21,0x1c3c7ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_673888ebaf10c590_33_get_gcdcRef,"hx.widgets.GCDC","get_gcdcRef",0x1684b379,"hx.widgets.GCDC.get_gcdcRef","hx/widgets/GCDC.hx",33,0x1c3c7ba4)
namespace hx{
namespace widgets{

void GCDC_obj::__construct( ::hx::widgets::GraphicsContext gc,::hx::Null< bool >  __o_create){
            		bool create = __o_create.Default(true);
            	HX_STACKFRAME(&_hx_pos_673888ebaf10c590_12_new)
HXLINE(  13)		if ((create == true)) {
HXLINE(  14)			::cpp::Pointer<  wxGCDC > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxGCDC(gc->get_graphicscontextRef()->rawCast())));
HXDLIN(  14)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  17)		super::__construct();
            	}

Dynamic GCDC_obj::__CreateEmpty() { return new GCDC_obj; }

void *GCDC_obj::_hx_vtable = 0;

Dynamic GCDC_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GCDC_obj > _hx_result = new GCDC_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GCDC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a3310b2) {
		if (inClassId<=(int)0x2045b63e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
		} else {
			return inClassId==(int)0x2a3310b2;
		}
	} else {
		return inClassId==(int)0x6da9163a;
	}
}

 ::hx::widgets::GraphicsContext GCDC_obj::get_graphicsContext(){
            	HX_GC_STACKFRAME(&_hx_pos_673888ebaf10c590_21_get_graphicsContext)
HXLINE(  22)		 wxGraphicsContext* p = this->get_gcdcRef()->ptr->GetGraphicsContext();
HXLINE(  23)		 ::hx::widgets::GraphicsContext gtx =  ::hx::widgets::GraphicsContext_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  24)		gtx->_ref = ::cpp::Pointer_obj::fromRaw(p)->reinterpret();
HXLINE(  25)		return gtx;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GCDC_obj,get_graphicsContext,return )

::cpp::Pointer<  wxGCDC > GCDC_obj::get_gcdcRef(){
            	HX_STACKFRAME(&_hx_pos_673888ebaf10c590_33_get_gcdcRef)
HXDLIN(  33)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GCDC_obj,get_gcdcRef,return )


::hx::ObjectPtr< GCDC_obj > GCDC_obj::__new( ::hx::widgets::GraphicsContext gc,::hx::Null< bool >  __o_create) {
	::hx::ObjectPtr< GCDC_obj > __this = new GCDC_obj();
	__this->__construct(gc,__o_create);
	return __this;
}

::hx::ObjectPtr< GCDC_obj > GCDC_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::GraphicsContext gc,::hx::Null< bool >  __o_create) {
	GCDC_obj *__this = (GCDC_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GCDC_obj), true, "hx.widgets.GCDC"));
	*(void **)__this = GCDC_obj::_hx_vtable;
	__this->__construct(gc,__o_create);
	return __this;
}

GCDC_obj::GCDC_obj()
{
}

void GCDC_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GCDC);
	HX_MARK_MEMBER_NAME(graphicsContext,"graphicsContext");
	HX_MARK_MEMBER_NAME(gcdcRef,"gcdcRef");
	 ::hx::widgets::DC_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GCDC_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphicsContext,"graphicsContext");
	HX_VISIT_MEMBER_NAME(gcdcRef,"gcdcRef");
	 ::hx::widgets::DC_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GCDC_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gcdcRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_gcdcRef() : gcdcRef ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_gcdcRef") ) { return ::hx::Val( get_gcdcRef_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"graphicsContext") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_graphicsContext() : graphicsContext ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_graphicsContext") ) { return ::hx::Val( get_graphicsContext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GCDC_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gcdcRef") ) { gcdcRef=inValue.Cast< ::cpp::Pointer<  wxGCDC > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"graphicsContext") ) { graphicsContext=inValue.Cast<  ::hx::widgets::GraphicsContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GCDC_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("graphicsContext",64,44,d0,38));
	outFields->push(HX_("gcdcRef",78,33,38,26));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GCDC_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::GraphicsContext */ ,(int)offsetof(GCDC_obj,graphicsContext),HX_("graphicsContext",64,44,d0,38)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxGCDC > */ ,(int)offsetof(GCDC_obj,gcdcRef),HX_("gcdcRef",78,33,38,26)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GCDC_obj_sStaticStorageInfo = 0;
#endif

static ::String GCDC_obj_sMemberFields[] = {
	HX_("graphicsContext",64,44,d0,38),
	HX_("get_graphicsContext",7b,13,db,c3),
	HX_("gcdcRef",78,33,38,26),
	HX_("get_gcdcRef",8f,93,32,ac),
	::String(null()) };

::hx::Class GCDC_obj::__mClass;

void GCDC_obj::__register()
{
	GCDC_obj _hx_dummy;
	GCDC_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.GCDC",58,c9,b7,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GCDC_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GCDC_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GCDC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GCDC_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
