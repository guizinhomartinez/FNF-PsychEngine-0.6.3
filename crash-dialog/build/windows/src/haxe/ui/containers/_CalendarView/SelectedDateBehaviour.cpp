#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Calendar
#include <haxe/ui/components/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__CalendarView_SelectedDateBehaviour
#include <haxe/ui/containers/_CalendarView/SelectedDateBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_608eece584ddf745_27_new,"haxe.ui.containers._CalendarView.SelectedDateBehaviour","new",0xbd83b4b0,"haxe.ui.containers._CalendarView.SelectedDateBehaviour.new","haxe/ui/containers/CalendarView.hx",27,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_608eece584ddf745_29_get,"haxe.ui.containers._CalendarView.SelectedDateBehaviour","get",0xbd7e64e6,"haxe.ui.containers._CalendarView.SelectedDateBehaviour.get","haxe/ui/containers/CalendarView.hx",29,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_608eece584ddf745_33_set,"haxe.ui.containers._CalendarView.SelectedDateBehaviour","set",0xbd877ff2,"haxe.ui.containers._CalendarView.SelectedDateBehaviour.set","haxe/ui/containers/CalendarView.hx",33,0x20b6d730)
namespace haxe{
namespace ui{
namespace containers{
namespace _CalendarView{

void SelectedDateBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_608eece584ddf745_27_new)
HXDLIN(  27)		super::__construct(component);
            	}

Dynamic SelectedDateBehaviour_obj::__CreateEmpty() { return new SelectedDateBehaviour_obj; }

void *SelectedDateBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedDateBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedDateBehaviour_obj > _hx_result = new SelectedDateBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedDateBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x52849a46) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x52849a46;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType SelectedDateBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_608eece584ddf745_29_get)
HXDLIN(  29)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDate(this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >()->get_selectedDate());
            	}


void SelectedDateBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_608eece584ddf745_33_set)
HXDLIN(  33)		 ::haxe::ui::components::Calendar _hx_tmp = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Calendar >(),null(),null()).StaticCast<  ::haxe::ui::components::Calendar >();
HXDLIN(  33)		_hx_tmp->set_selectedDate(::haxe::ui::util::_Variant::Variant_Impl__obj::toDate(value));
            	}



::hx::ObjectPtr< SelectedDateBehaviour_obj > SelectedDateBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedDateBehaviour_obj > __this = new SelectedDateBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedDateBehaviour_obj > SelectedDateBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedDateBehaviour_obj *__this = (SelectedDateBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedDateBehaviour_obj), true, "haxe.ui.containers._CalendarView.SelectedDateBehaviour"));
	*(void **)__this = SelectedDateBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedDateBehaviour_obj::SelectedDateBehaviour_obj()
{
}

::hx::Val SelectedDateBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedDateBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedDateBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedDateBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class SelectedDateBehaviour_obj::__mClass;

void SelectedDateBehaviour_obj::__register()
{
	SelectedDateBehaviour_obj _hx_dummy;
	SelectedDateBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._CalendarView.SelectedDateBehaviour",be,dc,87,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedDateBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedDateBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedDateBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedDateBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _CalendarView
