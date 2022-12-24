#include <hxcpp.h>

#ifndef INCLUDED_3f00743f583fa004
#define INCLUDED_3f00743f583fa004
#include "custom/wxownerdrawnpanel.h"
#endif
#ifndef INCLUDED_d138b2ba805d405f
#define INCLUDED_d138b2ba805d405f
#include "wx/dcgraph.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
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
#ifndef INCLUDED_hx_widgets_OwnerDrawnPanel
#include <hx/widgets/OwnerDrawnPanel.h>
#endif
#ifndef INCLUDED_hx_widgets_Panel
#include <hx/widgets/Panel.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c542638486e1ec76_9_new,"hx.widgets.OwnerDrawnPanel","new",0x31ab6c02,"hx.widgets.OwnerDrawnPanel.new","hx/widgets/OwnerDrawnPanel.hx",9,0x144b5b30)
HX_LOCAL_STACK_FRAME(_hx_pos_c542638486e1ec76_17_onPaintInternal,"hx.widgets.OwnerDrawnPanel","onPaintInternal",0x0fac96fe,"hx.widgets.OwnerDrawnPanel.onPaintInternal","hx/widgets/OwnerDrawnPanel.hx",17,0x144b5b30)
HX_LOCAL_STACK_FRAME(_hx_pos_c542638486e1ec76_24_onPaint,"hx.widgets.OwnerDrawnPanel","onPaint",0xdf376aa1,"hx.widgets.OwnerDrawnPanel.onPaint","hx/widgets/OwnerDrawnPanel.hx",24,0x144b5b30)
HX_LOCAL_STACK_FRAME(_hx_pos_c542638486e1ec76_32_get_ownerDrawnPanelRef,"hx.widgets.OwnerDrawnPanel","get_ownerDrawnPanelRef",0x128d1d6d,"hx.widgets.OwnerDrawnPanel.get_ownerDrawnPanelRef","hx/widgets/OwnerDrawnPanel.hx",32,0x144b5b30)
namespace hx{
namespace widgets{

void OwnerDrawnPanel_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_c542638486e1ec76_9_new)
HXLINE(  10)		if (::hx::IsNull( this->_ref )) {
HXLINE(  11)			::cpp::Pointer<  wxOwnerDrawnPanel > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxOwnerDrawnPanel(::hx::widgets::Window_obj::toRaw(parent))));
HXDLIN(  11)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  13)		super::__construct(parent,style,id);
HXLINE(  14)		this->get_ownerDrawnPanelRef()->ptr->onPaint = this->onPaintInternal_dyn();
            	}

Dynamic OwnerDrawnPanel_obj::__CreateEmpty() { return new OwnerDrawnPanel_obj; }

void *OwnerDrawnPanel_obj::_hx_vtable = 0;

Dynamic OwnerDrawnPanel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OwnerDrawnPanel_obj > _hx_result = new OwnerDrawnPanel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool OwnerDrawnPanel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2fce02c9) {
			if (inClassId<=(int)0x2045b63e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
			} else {
				return inClassId==(int)0x2fce02c9;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		return inClassId==(int)0x5d92cb6f || inClassId==(int)0x7c81fd6e;
	}
}

void OwnerDrawnPanel_obj::onPaintInternal(){
            	HX_GC_STACKFRAME(&_hx_pos_c542638486e1ec76_17_onPaintInternal)
HXLINE(  18)		 wxGCDC* pGCDC = this->get_ownerDrawnPanelRef()->ptr->pGCDC;
HXLINE(  19)		 ::hx::widgets::GCDC gdc =  ::hx::widgets::GCDC_obj::__alloc( HX_CTX ,null(),false);
HXLINE(  20)		gdc->_ref = ::cpp::Pointer_obj::fromRaw(pGCDC)->reinterpret();
HXLINE(  21)		this->onPaint(gdc);
            	}


HX_DEFINE_DYNAMIC_FUNC0(OwnerDrawnPanel_obj,onPaintInternal,(void))

void OwnerDrawnPanel_obj::onPaint( ::hx::widgets::GCDC gdc){
            	HX_STACKFRAME(&_hx_pos_c542638486e1ec76_24_onPaint)
            	}


HX_DEFINE_DYNAMIC_FUNC1(OwnerDrawnPanel_obj,onPaint,(void))

::cpp::Pointer<  wxOwnerDrawnPanel > OwnerDrawnPanel_obj::get_ownerDrawnPanelRef(){
            	HX_STACKFRAME(&_hx_pos_c542638486e1ec76_32_get_ownerDrawnPanelRef)
HXDLIN(  32)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OwnerDrawnPanel_obj,get_ownerDrawnPanelRef,return )


::hx::ObjectPtr< OwnerDrawnPanel_obj > OwnerDrawnPanel_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< OwnerDrawnPanel_obj > __this = new OwnerDrawnPanel_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< OwnerDrawnPanel_obj > OwnerDrawnPanel_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	OwnerDrawnPanel_obj *__this = (OwnerDrawnPanel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OwnerDrawnPanel_obj), true, "hx.widgets.OwnerDrawnPanel"));
	*(void **)__this = OwnerDrawnPanel_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

OwnerDrawnPanel_obj::OwnerDrawnPanel_obj()
{
}

void OwnerDrawnPanel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OwnerDrawnPanel);
	HX_MARK_MEMBER_NAME(ownerDrawnPanelRef,"ownerDrawnPanelRef");
	 ::hx::widgets::Panel_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OwnerDrawnPanel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ownerDrawnPanelRef,"ownerDrawnPanelRef");
	 ::hx::widgets::Panel_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OwnerDrawnPanel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onPaint") ) { return ::hx::Val( onPaint_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPaintInternal") ) { return ::hx::Val( onPaintInternal_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"ownerDrawnPanelRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_ownerDrawnPanelRef() : ownerDrawnPanelRef ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_ownerDrawnPanelRef") ) { return ::hx::Val( get_ownerDrawnPanelRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OwnerDrawnPanel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"ownerDrawnPanelRef") ) { ownerDrawnPanelRef=inValue.Cast< ::cpp::Pointer<  wxOwnerDrawnPanel > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OwnerDrawnPanel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ownerDrawnPanelRef",86,32,93,9c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OwnerDrawnPanel_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxOwnerDrawnPanel > */ ,(int)offsetof(OwnerDrawnPanel_obj,ownerDrawnPanelRef),HX_("ownerDrawnPanelRef",86,32,93,9c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OwnerDrawnPanel_obj_sStaticStorageInfo = 0;
#endif

static ::String OwnerDrawnPanel_obj_sMemberFields[] = {
	HX_("onPaintInternal",5c,10,09,08),
	HX_("onPaint",ff,55,8c,53),
	HX_("ownerDrawnPanelRef",86,32,93,9c),
	HX_("get_ownerDrawnPanelRef",cf,ab,27,f6),
	::String(null()) };

::hx::Class OwnerDrawnPanel_obj::__mClass;

void OwnerDrawnPanel_obj::__register()
{
	OwnerDrawnPanel_obj _hx_dummy;
	OwnerDrawnPanel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.OwnerDrawnPanel",10,03,49,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OwnerDrawnPanel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OwnerDrawnPanel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OwnerDrawnPanel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OwnerDrawnPanel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
