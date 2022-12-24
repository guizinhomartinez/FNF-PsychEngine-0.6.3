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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxGroups
#include <haxe/ui/components/OptionBoxGroups.h>
#endif
#ifndef INCLUDED_haxe_ui_components__OptionBox_SelectedOptionBehaviour
#include <haxe/ui/components/_OptionBox/SelectedOptionBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_84685bf4a71a8287_44_new,"haxe.ui.components._OptionBox.SelectedOptionBehaviour","new",0x2a15188e,"haxe.ui.components._OptionBox.SelectedOptionBehaviour.new","haxe/ui/components/OptionBox.hx",44,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_84685bf4a71a8287_45_get,"haxe.ui.components._OptionBox.SelectedOptionBehaviour","get",0x2a0fc8c4,"haxe.ui.components._OptionBox.SelectedOptionBehaviour.get","haxe/ui/components/OptionBox.hx",45,0x8f34a36f)
namespace haxe{
namespace ui{
namespace components{
namespace _OptionBox{

void SelectedOptionBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_84685bf4a71a8287_44_new)
HXDLIN(  44)		super::__construct(component);
            	}

Dynamic SelectedOptionBehaviour_obj::__CreateEmpty() { return new SelectedOptionBehaviour_obj; }

void *SelectedOptionBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedOptionBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedOptionBehaviour_obj > _hx_result = new SelectedOptionBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedOptionBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x1df7e49e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1df7e49e;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType SelectedOptionBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_84685bf4a71a8287_45_get)
HXLINE(  46)		 ::haxe::ui::components::OptionBox optionbox = ::hx::TCast<  ::haxe::ui::components::OptionBox >::cast(this->_component);
HXLINE(  47)		 ::haxe::ui::components::OptionBoxGroups arr = ::haxe::ui::components::OptionBoxGroups_obj::get_instance();
HXDLIN(  47)		::Array< ::Dynamic> arr1 = arr->get(optionbox->get_componentGroup());
HXLINE(  48)		 ::haxe::ui::components::OptionBox selectionOption = null();
HXLINE(  49)		if (::hx::IsNotNull( arr1 )) {
HXLINE(  50)			int _g = 0;
HXDLIN(  50)			while((_g < arr1->length)){
HXLINE(  50)				 ::haxe::ui::components::OptionBox test = arr1->__get(_g).StaticCast<  ::haxe::ui::components::OptionBox >();
HXDLIN(  50)				_g = (_g + 1);
HXLINE(  51)				if ((test->get_selected() == true)) {
HXLINE(  52)					selectionOption = test;
HXLINE(  53)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE(  57)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(selectionOption);
            	}



::hx::ObjectPtr< SelectedOptionBehaviour_obj > SelectedOptionBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedOptionBehaviour_obj > __this = new SelectedOptionBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedOptionBehaviour_obj > SelectedOptionBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedOptionBehaviour_obj *__this = (SelectedOptionBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedOptionBehaviour_obj), true, "haxe.ui.components._OptionBox.SelectedOptionBehaviour"));
	*(void **)__this = SelectedOptionBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedOptionBehaviour_obj::SelectedOptionBehaviour_obj()
{
}

::hx::Val SelectedOptionBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedOptionBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedOptionBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedOptionBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class SelectedOptionBehaviour_obj::__mClass;

void SelectedOptionBehaviour_obj::__register()
{
	SelectedOptionBehaviour_obj _hx_dummy;
	SelectedOptionBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._OptionBox.SelectedOptionBehaviour",9c,79,a6,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedOptionBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedOptionBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedOptionBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedOptionBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _OptionBox
