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
#ifndef INCLUDED_haxe_ui_containers__ScrollView_PercentContentHeight
#include <haxe/ui/containers/_ScrollView/PercentContentHeight.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8bf9af5c2eb65ae0_273_new,"haxe.ui.containers._ScrollView.PercentContentHeight","new",0x2e148554,"haxe.ui.containers._ScrollView.PercentContentHeight.new","haxe/ui/containers/ScrollView.hx",273,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_8bf9af5c2eb65ae0_274_get,"haxe.ui.containers._ScrollView.PercentContentHeight","get",0x2e0f358a,"haxe.ui.containers._ScrollView.PercentContentHeight.get","haxe/ui/containers/ScrollView.hx",274,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_8bf9af5c2eb65ae0_282_set,"haxe.ui.containers._ScrollView.PercentContentHeight","set",0x2e185096,"haxe.ui.containers._ScrollView.PercentContentHeight.set","haxe/ui/containers/ScrollView.hx",282,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void PercentContentHeight_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_8bf9af5c2eb65ae0_273_new)
HXDLIN( 273)		super::__construct(component);
            	}

Dynamic PercentContentHeight_obj::__CreateEmpty() { return new PercentContentHeight_obj; }

void *PercentContentHeight_obj::_hx_vtable = 0;

Dynamic PercentContentHeight_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PercentContentHeight_obj > _hx_result = new PercentContentHeight_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PercentContentHeight_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x5b7c19e0;
	}
}

 ::haxe::ui::util::VariantType PercentContentHeight_obj::get(){
            	HX_STACKFRAME(&_hx_pos_8bf9af5c2eb65ae0_274_get)
HXLINE( 275)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 276)		if (::hx::IsNull( contents )) {
HXLINE( 277)			return null();
            		}
HXLINE( 279)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(contents->get_percentHeight()) ));
            	}


void PercentContentHeight_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_8bf9af5c2eb65ae0_282_set)
HXLINE( 283)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 284)		if (::hx::IsNotNull( contents )) {
HXLINE( 285)			contents->set_componentHeight(null());
HXLINE( 286)			contents->set_percentHeight(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(value));
            		}
            	}



::hx::ObjectPtr< PercentContentHeight_obj > PercentContentHeight_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PercentContentHeight_obj > __this = new PercentContentHeight_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PercentContentHeight_obj > PercentContentHeight_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PercentContentHeight_obj *__this = (PercentContentHeight_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PercentContentHeight_obj), true, "haxe.ui.containers._ScrollView.PercentContentHeight"));
	*(void **)__this = PercentContentHeight_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PercentContentHeight_obj::PercentContentHeight_obj()
{
}

::hx::Val PercentContentHeight_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PercentContentHeight_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PercentContentHeight_obj_sStaticStorageInfo = 0;
#endif

static ::String PercentContentHeight_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class PercentContentHeight_obj::__mClass;

void PercentContentHeight_obj::__register()
{
	PercentContentHeight_obj _hx_dummy;
	PercentContentHeight_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.PercentContentHeight",62,8b,72,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PercentContentHeight_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PercentContentHeight_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PercentContentHeight_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PercentContentHeight_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
