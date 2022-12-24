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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_GetPage
#include <haxe/ui/containers/_TabView/GetPage.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_def011826358c7ab_226_new,"haxe.ui.containers._TabView.GetPage","new",0x9065602e,"haxe.ui.containers._TabView.GetPage.new","haxe/ui/containers/TabView.hx",226,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_def011826358c7ab_227_call,"haxe.ui.containers._TabView.GetPage","call",0xc1065d10,"haxe.ui.containers._TabView.GetPage.call","haxe/ui/containers/TabView.hx",227,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void GetPage_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_def011826358c7ab_226_new)
HXDLIN( 226)		super::__construct(component);
            	}

Dynamic GetPage_obj::__CreateEmpty() { return new GetPage_obj; }

void *GetPage_obj::_hx_vtable = 0;

Dynamic GetPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GetPage_obj > _hx_result = new GetPage_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetPage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ce4361a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2ce4361a;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType GetPage_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_def011826358c7ab_227_call)
HXLINE( 228)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 229)		int index = ( (int)(param) );
HXLINE( 230)		 ::haxe::ui::core::Component page = null();
HXLINE( 231)		if ((index < builder->_views->length)) {
HXLINE( 232)			page = builder->_views->__get(index).StaticCast<  ::haxe::ui::core::Component >();
            		}
HXLINE( 234)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(page);
            	}



::hx::ObjectPtr< GetPage_obj > GetPage_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< GetPage_obj > __this = new GetPage_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< GetPage_obj > GetPage_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	GetPage_obj *__this = (GetPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GetPage_obj), true, "haxe.ui.containers._TabView.GetPage"));
	*(void **)__this = GetPage_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

GetPage_obj::GetPage_obj()
{
}

::hx::Val GetPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GetPage_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GetPage_obj_sStaticStorageInfo = 0;
#endif

static ::String GetPage_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class GetPage_obj::__mClass;

void GetPage_obj::__register()
{
	GetPage_obj _hx_dummy;
	GetPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.GetPage",3c,71,12,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GetPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GetPage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
