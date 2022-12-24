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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ChoiceSelectedIndex
#include <haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedIndex.h>
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
#ifndef INCLUDED_hx_widgets_Choice
#include <hx/widgets/Choice.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8fb25b27c8028b2c_7_new,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedIndex","new",0x059dd02b,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedIndex.new","haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedIndex.hx",7,0x0c9e7a44)
HX_LOCAL_STACK_FRAME(_hx_pos_8fb25b27c8028b2c_8_validateData,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedIndex","validateData",0xc86e84b5,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedIndex.validateData","haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedIndex.hx",8,0x0c9e7a44)
HX_LOCAL_STACK_FRAME(_hx_pos_8fb25b27c8028b2c_17_get,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedIndex","get",0x05988061,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedIndex.get","haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedIndex.hx",17,0x0c9e7a44)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ChoiceSelectedIndex_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_8fb25b27c8028b2c_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic ChoiceSelectedIndex_obj::__CreateEmpty() { return new ChoiceSelectedIndex_obj; }

void *ChoiceSelectedIndex_obj::_hx_vtable = 0;

Dynamic ChoiceSelectedIndex_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChoiceSelectedIndex_obj > _hx_result = new ChoiceSelectedIndex_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChoiceSelectedIndex_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x13acae7b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x13acae7b;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void ChoiceSelectedIndex_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_8fb25b27c8028b2c_8_validateData)
HXLINE(   9)		 ::hx::widgets::Choice choice = ::hx::TCast<  ::hx::widgets::Choice >::cast(this->_component->get_window());
HXLINE(  10)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN(  10)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::neq(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1))) {
HXLINE(  11)			choice->set_selection(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
            		}
            		else {
HXLINE(  13)			choice->set_selection(-1);
            		}
            	}


 ::haxe::ui::util::VariantType ChoiceSelectedIndex_obj::get(){
            	HX_STACKFRAME(&_hx_pos_8fb25b27c8028b2c_17_get)
HXLINE(  18)		 ::hx::widgets::Choice choice = ::hx::TCast<  ::hx::widgets::Choice >::cast(this->_component->get_window());
HXLINE(  19)		if (::hx::IsNull( choice )) {
HXLINE(  20)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1);
            		}
HXLINE(  22)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(choice->get_selection());
            	}



::hx::ObjectPtr< ChoiceSelectedIndex_obj > ChoiceSelectedIndex_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ChoiceSelectedIndex_obj > __this = new ChoiceSelectedIndex_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ChoiceSelectedIndex_obj > ChoiceSelectedIndex_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ChoiceSelectedIndex_obj *__this = (ChoiceSelectedIndex_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChoiceSelectedIndex_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedIndex"));
	*(void **)__this = ChoiceSelectedIndex_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ChoiceSelectedIndex_obj::ChoiceSelectedIndex_obj()
{
}

::hx::Val ChoiceSelectedIndex_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ChoiceSelectedIndex_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ChoiceSelectedIndex_obj_sStaticStorageInfo = 0;
#endif

static ::String ChoiceSelectedIndex_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class ChoiceSelectedIndex_obj::__mClass;

void ChoiceSelectedIndex_obj::__register()
{
	ChoiceSelectedIndex_obj _hx_dummy;
	ChoiceSelectedIndex_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedIndex",b9,de,79,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChoiceSelectedIndex_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChoiceSelectedIndex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChoiceSelectedIndex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChoiceSelectedIndex_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
