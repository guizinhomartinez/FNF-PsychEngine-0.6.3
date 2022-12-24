#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_StaticBitmapCreator
#include <haxe/ui/backend/hxwidgets/creators/StaticBitmapCreator.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_34dc420915e71165_5_new,"haxe.ui.backend.hxwidgets.creators.StaticBitmapCreator","new",0x792a85f5,"haxe.ui.backend.hxwidgets.creators.StaticBitmapCreator.new","haxe/ui/backend/hxwidgets/creators/StaticBitmapCreator.hx",5,0x2c99b83a)
HX_LOCAL_STACK_FRAME(_hx_pos_34dc420915e71165_6_createConstructorParams,"haxe.ui.backend.hxwidgets.creators.StaticBitmapCreator","createConstructorParams",0x78282f59,"haxe.ui.backend.hxwidgets.creators.StaticBitmapCreator.createConstructorParams","haxe/ui/backend/hxwidgets/creators/StaticBitmapCreator.hx",6,0x2c99b83a)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void StaticBitmapCreator_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_34dc420915e71165_5_new)
HXDLIN(   5)		super::__construct(component);
            	}

Dynamic StaticBitmapCreator_obj::__CreateEmpty() { return new StaticBitmapCreator_obj; }

void *StaticBitmapCreator_obj::_hx_vtable = 0;

Dynamic StaticBitmapCreator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticBitmapCreator_obj > _hx_result = new StaticBitmapCreator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StaticBitmapCreator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0606dbc3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0606dbc3;
	} else {
		return inClassId==(int)0x3925cb80;
	}
}

::cpp::VirtualArray StaticBitmapCreator_obj::createConstructorParams(::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_34dc420915e71165_6_createConstructorParams)
HXLINE(   7)		params->push(::hx::widgets::Bitmap_obj::fromHaxeResource(HX_("styles/FF00FF-0.png",eb,dd,46,26)));
HXLINE(   8)		return params;
            	}



::hx::ObjectPtr< StaticBitmapCreator_obj > StaticBitmapCreator_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< StaticBitmapCreator_obj > __this = new StaticBitmapCreator_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< StaticBitmapCreator_obj > StaticBitmapCreator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	StaticBitmapCreator_obj *__this = (StaticBitmapCreator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticBitmapCreator_obj), true, "haxe.ui.backend.hxwidgets.creators.StaticBitmapCreator"));
	*(void **)__this = StaticBitmapCreator_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

StaticBitmapCreator_obj::StaticBitmapCreator_obj()
{
}

::hx::Val StaticBitmapCreator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"createConstructorParams") ) { return ::hx::Val( createConstructorParams_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StaticBitmapCreator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StaticBitmapCreator_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticBitmapCreator_obj_sMemberFields[] = {
	HX_("createConstructorParams",44,51,16,38),
	::String(null()) };

::hx::Class StaticBitmapCreator_obj::__mClass;

void StaticBitmapCreator_obj::__register()
{
	StaticBitmapCreator_obj _hx_dummy;
	StaticBitmapCreator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.StaticBitmapCreator",83,67,b1,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticBitmapCreator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticBitmapCreator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticBitmapCreator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticBitmapCreator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
