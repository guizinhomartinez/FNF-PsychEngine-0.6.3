#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_StyledTextCtrl
#include <hx/widgets/StyledTextCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_14d50fd7153f97fa_25_new,"hx.widgets.StyledTextCtrl","new",0x2992013a,"hx.widgets.StyledTextCtrl.new","hx/widgets/StyledTextCtrl.hx",25,0xa2f5d834)
namespace hx{
namespace widgets{

void StyledTextCtrl_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_14d50fd7153f97fa_25_new)
HXDLIN(  25)		super::__construct(parent,id,null());
            	}

Dynamic StyledTextCtrl_obj::__CreateEmpty() { return new StyledTextCtrl_obj; }

void *StyledTextCtrl_obj::_hx_vtable = 0;

Dynamic StyledTextCtrl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyledTextCtrl_obj > _hx_result = new StyledTextCtrl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool StyledTextCtrl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x073320c6) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x073320c6;
			}
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}


::hx::ObjectPtr< StyledTextCtrl_obj > StyledTextCtrl_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< StyledTextCtrl_obj > __this = new StyledTextCtrl_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< StyledTextCtrl_obj > StyledTextCtrl_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	StyledTextCtrl_obj *__this = (StyledTextCtrl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyledTextCtrl_obj), true, "hx.widgets.StyledTextCtrl"));
	*(void **)__this = StyledTextCtrl_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

StyledTextCtrl_obj::StyledTextCtrl_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StyledTextCtrl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StyledTextCtrl_obj_sStaticStorageInfo = 0;
#endif

::hx::Class StyledTextCtrl_obj::__mClass;

void StyledTextCtrl_obj::__register()
{
	StyledTextCtrl_obj _hx_dummy;
	StyledTextCtrl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.StyledTextCtrl",48,9c,7e,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StyledTextCtrl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyledTextCtrl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyledTextCtrl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
