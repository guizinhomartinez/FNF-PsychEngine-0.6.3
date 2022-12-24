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
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_SelectedIndexBehaviour
#include <haxe/ui/containers/_TableView/SelectedIndexBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_69fd336de6798f19_651_new,"haxe.ui.containers._TableView.SelectedIndexBehaviour","new",0xc3543f48,"haxe.ui.containers._TableView.SelectedIndexBehaviour.new","haxe/ui/containers/TableView.hx",651,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_69fd336de6798f19_652_get,"haxe.ui.containers._TableView.SelectedIndexBehaviour","get",0xc34eef7e,"haxe.ui.containers._TableView.SelectedIndexBehaviour.get","haxe/ui/containers/TableView.hx",652,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_69fd336de6798f19_658_set,"haxe.ui.containers._TableView.SelectedIndexBehaviour","set",0xc3580a8a,"haxe.ui.containers._TableView.SelectedIndexBehaviour.set","haxe/ui/containers/TableView.hx",658,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void SelectedIndexBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_69fd336de6798f19_651_new)
HXDLIN( 651)		super::__construct(component);
            	}

Dynamic SelectedIndexBehaviour_obj::__CreateEmpty() { return new SelectedIndexBehaviour_obj; }

void *SelectedIndexBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedIndexBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedIndexBehaviour_obj > _hx_result = new SelectedIndexBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedIndexBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x6769078a;
	}
}

 ::haxe::ui::util::VariantType SelectedIndexBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_69fd336de6798f19_652_get)
HXLINE( 653)		 ::haxe::ui::containers::TableView tableView = ::hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component);
HXLINE( 654)		::Array< int > selectedIndices = tableView->get_selectedIndices();
HXLINE( 655)		bool _hx_tmp;
HXDLIN( 655)		if (::hx::IsNotNull( selectedIndices )) {
HXLINE( 655)			_hx_tmp = (selectedIndices->length > 0);
            		}
            		else {
HXLINE( 655)			_hx_tmp = false;
            		}
HXDLIN( 655)		if (_hx_tmp) {
HXLINE( 655)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(selectedIndices->__get((selectedIndices->length - 1)));
            		}
            		else {
HXLINE( 655)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1);
            		}
HXDLIN( 655)		return null();
            	}


void SelectedIndexBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_69fd336de6798f19_658_set)
HXLINE( 659)		 ::haxe::ui::containers::TableView tableView = ::hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component);
HXLINE( 660)		::Array< int > _hx_tmp;
HXDLIN( 660)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::neq(value,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1))) {
HXLINE( 660)			_hx_tmp = ::Array_obj< int >::__new(1)->init(0,::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
            		}
            		else {
HXLINE( 660)			_hx_tmp = null();
            		}
HXDLIN( 660)		tableView->set_selectedIndices(_hx_tmp);
            	}



::hx::ObjectPtr< SelectedIndexBehaviour_obj > SelectedIndexBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedIndexBehaviour_obj > __this = new SelectedIndexBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedIndexBehaviour_obj > SelectedIndexBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedIndexBehaviour_obj *__this = (SelectedIndexBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedIndexBehaviour_obj), true, "haxe.ui.containers._TableView.SelectedIndexBehaviour"));
	*(void **)__this = SelectedIndexBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedIndexBehaviour_obj::SelectedIndexBehaviour_obj()
{
}

::hx::Val SelectedIndexBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedIndexBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedIndexBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedIndexBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class SelectedIndexBehaviour_obj::__mClass;

void SelectedIndexBehaviour_obj::__register()
{
	SelectedIndexBehaviour_obj _hx_dummy;
	SelectedIndexBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.SelectedIndexBehaviour",56,3b,69,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedIndexBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedIndexBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedIndexBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedIndexBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
