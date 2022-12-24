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
#ifndef INCLUDED_5731147d31755f8b
#define INCLUDED_5731147d31755f8b
#include "wx/taskbar.h"
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
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_TaskBarIcon
#include <hx/widgets/TaskBarIcon.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b6a660bd5bf0b597_10_new,"hx.widgets.TaskBarIcon","new",0xf28b5cdc,"hx.widgets.TaskBarIcon.new","hx/widgets/TaskBarIcon.hx",10,0xd5fb5a96)
HX_LOCAL_STACK_FRAME(_hx_pos_b6a660bd5bf0b597_27_setIcon,"hx.widgets.TaskBarIcon","setIcon",0x63d4a2b7,"hx.widgets.TaskBarIcon.setIcon","hx/widgets/TaskBarIcon.hx",27,0xd5fb5a96)
HX_LOCAL_STACK_FRAME(_hx_pos_b6a660bd5bf0b597_33_get_isIconInstalled,"hx.widgets.TaskBarIcon","get_isIconInstalled",0xac4208ca,"hx.widgets.TaskBarIcon.get_isIconInstalled","hx/widgets/TaskBarIcon.hx",33,0xd5fb5a96)
HX_LOCAL_STACK_FRAME(_hx_pos_b6a660bd5bf0b597_45_setBitmap,"hx.widgets.TaskBarIcon","setBitmap",0x278196ad,"hx.widgets.TaskBarIcon.setBitmap","hx/widgets/TaskBarIcon.hx",45,0xd5fb5a96)
HX_LOCAL_STACK_FRAME(_hx_pos_b6a660bd5bf0b597_58_get_taskBarIconRef,"hx.widgets.TaskBarIcon","get_taskBarIconRef",0x3806ad39,"hx.widgets.TaskBarIcon.get_taskBarIconRef","hx/widgets/TaskBarIcon.hx",58,0xd5fb5a96)
namespace hx{
namespace widgets{

void TaskBarIcon_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b6a660bd5bf0b597_10_new)
HXLINE(  11)		if (::hx::IsNull( this->_ref )) {
HXLINE(  12)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxTaskBarIcon()))->reinterpret();
            		}
HXLINE(  15)		super::__construct();
            	}

Dynamic TaskBarIcon_obj::__CreateEmpty() { return new TaskBarIcon_obj; }

void *TaskBarIcon_obj::_hx_vtable = 0;

Dynamic TaskBarIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TaskBarIcon_obj > _hx_result = new TaskBarIcon_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TaskBarIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x1347dfac) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1347dfac;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226;
	}
}

void TaskBarIcon_obj::setIcon( ::hx::widgets::Icon icon,::String tooltip){
            	HX_STACKFRAME(&_hx_pos_b6a660bd5bf0b597_27_setIcon)
HXDLIN(  27)		 wxTaskBarIcon * _hx_tmp = this->get_taskBarIconRef()->ptr;
HXDLIN(  27)		 wxIcon & _hx_tmp1 = icon->get_iconRef()->get_ref();
HXDLIN(  27)		const char* this1 = tooltip.utf8_str();
HXDLIN(  27)		 wxString _hx_tmp2 = wxString::FromUTF8(this1);
HXDLIN(  27)		(*(_hx_tmp)).SetIcon(_hx_tmp1,_hx_tmp2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TaskBarIcon_obj,setIcon,(void))

bool TaskBarIcon_obj::get_isIconInstalled(){
            	HX_STACKFRAME(&_hx_pos_b6a660bd5bf0b597_33_get_isIconInstalled)
HXDLIN(  33)		return this->get_taskBarIconRef()->ptr->IsIconInstalled();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TaskBarIcon_obj,get_isIconInstalled,return )

void TaskBarIcon_obj::setBitmap( ::hx::widgets::Bitmap bitmap,::String tooltip){
            	HX_GC_STACKFRAME(&_hx_pos_b6a660bd5bf0b597_45_setBitmap)
HXLINE(  46)		 ::hx::widgets::Icon icon =  ::hx::widgets::Icon_obj::__alloc( HX_CTX );
HXLINE(  47)		icon->copyFromBitmap(bitmap);
HXLINE(  48)		 wxTaskBarIcon * _hx_tmp = this->get_taskBarIconRef()->ptr;
HXDLIN(  48)		 wxIcon & _hx_tmp1 = icon->get_iconRef()->get_ref();
HXDLIN(  48)		const char* this1 = tooltip.utf8_str();
HXDLIN(  48)		 wxString _hx_tmp2 = wxString::FromUTF8(this1);
HXDLIN(  48)		(*(_hx_tmp)).SetIcon(_hx_tmp1,_hx_tmp2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TaskBarIcon_obj,setBitmap,(void))

::cpp::Pointer<  wxTaskBarIcon > TaskBarIcon_obj::get_taskBarIconRef(){
            	HX_STACKFRAME(&_hx_pos_b6a660bd5bf0b597_58_get_taskBarIconRef)
HXDLIN(  58)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TaskBarIcon_obj,get_taskBarIconRef,return )


::hx::ObjectPtr< TaskBarIcon_obj > TaskBarIcon_obj::__new() {
	::hx::ObjectPtr< TaskBarIcon_obj > __this = new TaskBarIcon_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TaskBarIcon_obj > TaskBarIcon_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TaskBarIcon_obj *__this = (TaskBarIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TaskBarIcon_obj), true, "hx.widgets.TaskBarIcon"));
	*(void **)__this = TaskBarIcon_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TaskBarIcon_obj::TaskBarIcon_obj()
{
}

void TaskBarIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TaskBarIcon);
	HX_MARK_MEMBER_NAME(isIconInstalled,"isIconInstalled");
	HX_MARK_MEMBER_NAME(taskBarIconRef,"taskBarIconRef");
	 ::hx::widgets::EvtHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TaskBarIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isIconInstalled,"isIconInstalled");
	HX_VISIT_MEMBER_NAME(taskBarIconRef,"taskBarIconRef");
	 ::hx::widgets::EvtHandler_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TaskBarIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"setIcon") ) { return ::hx::Val( setIcon_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setBitmap") ) { return ::hx::Val( setBitmap_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"taskBarIconRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_taskBarIconRef() : taskBarIconRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isIconInstalled") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isIconInstalled() : isIconInstalled ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_taskBarIconRef") ) { return ::hx::Val( get_taskBarIconRef_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_isIconInstalled") ) { return ::hx::Val( get_isIconInstalled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TaskBarIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"taskBarIconRef") ) { taskBarIconRef=inValue.Cast< ::cpp::Pointer<  wxTaskBarIcon > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isIconInstalled") ) { isIconInstalled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TaskBarIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isIconInstalled",37,f5,0d,4c));
	outFields->push(HX_("taskBarIconRef",6c,ed,f2,a6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TaskBarIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TaskBarIcon_obj,isIconInstalled),HX_("isIconInstalled",37,f5,0d,4c)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxTaskBarIcon > */ ,(int)offsetof(TaskBarIcon_obj,taskBarIconRef),HX_("taskBarIconRef",6c,ed,f2,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TaskBarIcon_obj_sStaticStorageInfo = 0;
#endif

static ::String TaskBarIcon_obj_sMemberFields[] = {
	HX_("setIcon",3b,28,37,0b),
	HX_("isIconInstalled",37,f5,0d,4c),
	HX_("get_isIconInstalled",4e,c4,18,d7),
	HX_("setBitmap",31,85,b3,50),
	HX_("taskBarIconRef",6c,ed,f2,a6),
	HX_("get_taskBarIconRef",35,ce,8c,42),
	::String(null()) };

::hx::Class TaskBarIcon_obj::__mClass;

void TaskBarIcon_obj::__register()
{
	TaskBarIcon_obj _hx_dummy;
	TaskBarIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.TaskBarIcon",ea,fe,b4,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TaskBarIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TaskBarIcon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TaskBarIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TaskBarIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
