#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TextCtrlPlaceholder
#include <haxe/ui/backend/hxwidgets/behaviours/TextCtrlPlaceholder.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_TextCtrl
#include <hx/widgets/TextCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_TextEntry
#include <hx/widgets/TextEntry.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1764ce2987a580b2_6_new,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder","new",0x29af9a70,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder.new","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPlaceholder.hx",6,0x60955f9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1764ce2987a580b2_7_set,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder","set",0x29b365b2,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder.set","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPlaceholder.hx",7,0x60955f9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1764ce2987a580b2_21_get,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder","get",0x29aa4aa6,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder.get","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPlaceholder.hx",21,0x60955f9f)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TextCtrlPlaceholder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_1764ce2987a580b2_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic TextCtrlPlaceholder_obj::__CreateEmpty() { return new TextCtrlPlaceholder_obj; }

void *TextCtrlPlaceholder_obj::_hx_vtable = 0;

Dynamic TextCtrlPlaceholder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextCtrlPlaceholder_obj > _hx_result = new TextCtrlPlaceholder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextCtrlPlaceholder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x71b1e25d) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x71b1e25d;
		}
	} else {
		return inClassId==(int)0x7d12a278;
	}
}

void TextCtrlPlaceholder_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_1764ce2987a580b2_7_set)
HXLINE(   8)		this->super::set(value);
HXLINE(   9)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  10)			return;
            		}
HXLINE(  13)		if (!(::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::TextCtrl >()))) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		 ::hx::widgets::TextCtrl textCtrl = ::hx::TCast<  ::hx::widgets::TextCtrl >::cast(this->_component->get_window());
HXLINE(  18)		textCtrl->set_hint(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
            	}


 ::haxe::ui::util::VariantType TextCtrlPlaceholder_obj::get(){
            	HX_STACKFRAME(&_hx_pos_1764ce2987a580b2_21_get)
HXLINE(  22)		if (!(::Std_obj::isOfType(this->_component->get_window(),::hx::ClassOf< ::hx::widgets::TextCtrl >()))) {
HXLINE(  23)			return null();
            		}
HXLINE(  26)		 ::hx::widgets::TextCtrl textCtrl = ::hx::TCast<  ::hx::widgets::TextCtrl >::cast(this->_component->get_window());
HXLINE(  27)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(textCtrl->get_hint());
            	}



::hx::ObjectPtr< TextCtrlPlaceholder_obj > TextCtrlPlaceholder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TextCtrlPlaceholder_obj > __this = new TextCtrlPlaceholder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TextCtrlPlaceholder_obj > TextCtrlPlaceholder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextCtrlPlaceholder_obj *__this = (TextCtrlPlaceholder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextCtrlPlaceholder_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder"));
	*(void **)__this = TextCtrlPlaceholder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextCtrlPlaceholder_obj::TextCtrlPlaceholder_obj()
{
}

::hx::Val TextCtrlPlaceholder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextCtrlPlaceholder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextCtrlPlaceholder_obj_sStaticStorageInfo = 0;
#endif

static ::String TextCtrlPlaceholder_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class TextCtrlPlaceholder_obj::__mClass;

void TextCtrlPlaceholder_obj::__register()
{
	TextCtrlPlaceholder_obj _hx_dummy;
	TextCtrlPlaceholder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder",7e,e2,dd,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextCtrlPlaceholder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextCtrlPlaceholder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextCtrlPlaceholder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextCtrlPlaceholder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
