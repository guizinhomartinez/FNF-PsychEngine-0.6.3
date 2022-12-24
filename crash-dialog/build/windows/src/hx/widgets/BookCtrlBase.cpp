#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_BookCtrlBase
#include <hx/widgets/BookCtrlBase.h>
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
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f39ac0374aa03de1_3_new,"hx.widgets.BookCtrlBase","new",0xe531cb74,"hx.widgets.BookCtrlBase.new","hx/widgets/BookCtrlBase.hx",3,0x22f267ba)
namespace hx{
namespace widgets{

void BookCtrlBase_obj::__construct( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_f39ac0374aa03de1_3_new)
HXDLIN(   3)		super::__construct(parent,style,id);
            	}

Dynamic BookCtrlBase_obj::__CreateEmpty() { return new BookCtrlBase_obj; }

void *BookCtrlBase_obj::_hx_vtable = 0;

Dynamic BookCtrlBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BookCtrlBase_obj > _hx_result = new BookCtrlBase_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BookCtrlBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27e64064) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x27e64064;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

static ::hx::widgets::WithImages_obj _hx_hx_widgets_BookCtrlBase__hx_hx_widgets_WithImages= {
};

void *BookCtrlBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x08bfc11d: return &_hx_hx_widgets_BookCtrlBase__hx_hx_widgets_WithImages;
	}
	return super::_hx_getInterface(inHash);
}


::hx::ObjectPtr< BookCtrlBase_obj > BookCtrlBase_obj::__new( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id) {
	::hx::ObjectPtr< BookCtrlBase_obj > __this = new BookCtrlBase_obj();
	__this->__construct(parent,style,id);
	return __this;
}

::hx::ObjectPtr< BookCtrlBase_obj > BookCtrlBase_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id) {
	BookCtrlBase_obj *__this = (BookCtrlBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BookCtrlBase_obj), true, "hx.widgets.BookCtrlBase"));
	*(void **)__this = BookCtrlBase_obj::_hx_vtable;
	__this->__construct(parent,style,id);
	return __this;
}

BookCtrlBase_obj::BookCtrlBase_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BookCtrlBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BookCtrlBase_obj_sStaticStorageInfo = 0;
#endif

::hx::Class BookCtrlBase_obj::__mClass;

void BookCtrlBase_obj::__register()
{
	BookCtrlBase_obj _hx_dummy;
	BookCtrlBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.BookCtrlBase",82,41,aa,c3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BookCtrlBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BookCtrlBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BookCtrlBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
