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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_ButtonWidth
#include <haxe/ui/components/_TabBar/ButtonWidth.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5e285d1fa7882a5e_262_new,"haxe.ui.components._TabBar.ButtonWidth","new",0xcaa41f8f,"haxe.ui.components._TabBar.ButtonWidth.new","haxe/ui/components/TabBar.hx",262,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5e285d1fa7882a5e_263_validateData,"haxe.ui.components._TabBar.ButtonWidth","validateData",0x4abd28d1,"haxe.ui.components._TabBar.ButtonWidth.validateData","haxe/ui/components/TabBar.hx",263,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void ButtonWidth_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_5e285d1fa7882a5e_262_new)
HXDLIN( 262)		super::__construct(component);
            	}

Dynamic ButtonWidth_obj::__CreateEmpty() { return new ButtonWidth_obj; }

void *ButtonWidth_obj::_hx_vtable = 0;

Dynamic ButtonWidth_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonWidth_obj > _hx_result = new ButtonWidth_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonWidth_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x1aaaa06b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1aaaa06b;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void ButtonWidth_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_5e285d1fa7882a5e_263_validateData)
HXLINE( 264)		bool _hx_tmp;
HXDLIN( 264)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 264)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 264)			_hx_tmp = true;
            		}
HXDLIN( 264)		if (_hx_tmp) {
HXLINE( 265)			return;
            		}
HXLINE( 267)		{
HXLINE( 267)			int _g = 0;
HXDLIN( 267)			::Array< ::Dynamic> _g1 = this->_component->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Button >(),null());
HXDLIN( 267)			while((_g < _g1->length)){
HXLINE( 267)				 ::haxe::ui::components::Button b = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN( 267)				_g = (_g + 1);
HXLINE( 268)				b->set_width(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value));
            			}
            		}
            	}



::hx::ObjectPtr< ButtonWidth_obj > ButtonWidth_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ButtonWidth_obj > __this = new ButtonWidth_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ButtonWidth_obj > ButtonWidth_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ButtonWidth_obj *__this = (ButtonWidth_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonWidth_obj), true, "haxe.ui.components._TabBar.ButtonWidth"));
	*(void **)__this = ButtonWidth_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ButtonWidth_obj::ButtonWidth_obj()
{
}

::hx::Val ButtonWidth_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ButtonWidth_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ButtonWidth_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonWidth_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ButtonWidth_obj::__mClass;

void ButtonWidth_obj::__register()
{
	ButtonWidth_obj _hx_dummy;
	ButtonWidth_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.ButtonWidth",1d,ac,03,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonWidth_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonWidth_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonWidth_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonWidth_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
