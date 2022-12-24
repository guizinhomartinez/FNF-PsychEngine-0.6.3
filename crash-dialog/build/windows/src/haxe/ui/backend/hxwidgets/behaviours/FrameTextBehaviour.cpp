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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_FrameTextBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/FrameTextBehaviour.h>
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
#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
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
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBox
#include <hx/widgets/StaticBox.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBoxSizer
#include <hx/widgets/StaticBoxSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5387b4614ffaf1ce_6_new,"haxe.ui.backend.hxwidgets.behaviours.FrameTextBehaviour","new",0x48536d92,"haxe.ui.backend.hxwidgets.behaviours.FrameTextBehaviour.new","haxe/ui/backend/hxwidgets/behaviours/FrameTextBehaviour.hx",6,0x52b0c65f)
HX_LOCAL_STACK_FRAME(_hx_pos_5387b4614ffaf1ce_7_validateData,"haxe.ui.backend.hxwidgets.behaviours.FrameTextBehaviour","validateData",0x1093826e,"haxe.ui.backend.hxwidgets.behaviours.FrameTextBehaviour.validateData","haxe/ui/backend/hxwidgets/behaviours/FrameTextBehaviour.hx",7,0x52b0c65f)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void FrameTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_5387b4614ffaf1ce_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic FrameTextBehaviour_obj::__CreateEmpty() { return new FrameTextBehaviour_obj; }

void *FrameTextBehaviour_obj::_hx_vtable = 0;

Dynamic FrameTextBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FrameTextBehaviour_obj > _hx_result = new FrameTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FrameTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6459d9e6 || inClassId==(int)0x7e17fa9f;
	}
}

void FrameTextBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_5387b4614ffaf1ce_7_validateData)
HXLINE(   8)		 ::hx::widgets::StaticBoxSizer sizer = ::hx::TCast<  ::hx::widgets::StaticBoxSizer >::cast(this->_component->userData);
HXLINE(   9)		 ::hx::widgets::StaticBox _hx_tmp = sizer->get_staticBox();
HXDLIN(   9)		_hx_tmp->set_label(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            	}



::hx::ObjectPtr< FrameTextBehaviour_obj > FrameTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< FrameTextBehaviour_obj > __this = new FrameTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< FrameTextBehaviour_obj > FrameTextBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	FrameTextBehaviour_obj *__this = (FrameTextBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FrameTextBehaviour_obj), true, "haxe.ui.backend.hxwidgets.behaviours.FrameTextBehaviour"));
	*(void **)__this = FrameTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

FrameTextBehaviour_obj::FrameTextBehaviour_obj()
{
}

::hx::Val FrameTextBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FrameTextBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FrameTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String FrameTextBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class FrameTextBehaviour_obj::__mClass;

void FrameTextBehaviour_obj::__register()
{
	FrameTextBehaviour_obj _hx_dummy;
	FrameTextBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.FrameTextBehaviour",a0,fc,4c,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FrameTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FrameTextBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameTextBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
