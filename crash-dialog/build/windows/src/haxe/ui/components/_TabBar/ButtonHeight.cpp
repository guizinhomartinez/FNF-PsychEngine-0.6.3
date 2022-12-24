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
#ifndef INCLUDED_haxe_ui_components__TabBar_ButtonHeight
#include <haxe/ui/components/_TabBar/ButtonHeight.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_88f3884d2e7ae91a_276_new,"haxe.ui.components._TabBar.ButtonHeight","new",0x19ffbee2,"haxe.ui.components._TabBar.ButtonHeight.new","haxe/ui/components/TabBar.hx",276,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_88f3884d2e7ae91a_277_validateData,"haxe.ui.components._TabBar.ButtonHeight","validateData",0x509a871e,"haxe.ui.components._TabBar.ButtonHeight.validateData","haxe/ui/components/TabBar.hx",277,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void ButtonHeight_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_88f3884d2e7ae91a_276_new)
HXDLIN( 276)		super::__construct(component);
            	}

Dynamic ButtonHeight_obj::__CreateEmpty() { return new ButtonHeight_obj; }

void *ButtonHeight_obj::_hx_vtable = 0;

Dynamic ButtonHeight_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonHeight_obj > _hx_result = new ButtonHeight_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonHeight_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x514fb6fe || inClassId==(int)0x7e17fa9f;
	}
}

void ButtonHeight_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_88f3884d2e7ae91a_277_validateData)
HXLINE( 278)		bool _hx_tmp;
HXDLIN( 278)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 278)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 278)			_hx_tmp = true;
            		}
HXDLIN( 278)		if (_hx_tmp) {
HXLINE( 279)			return;
            		}
HXLINE( 281)		{
HXLINE( 281)			int _g = 0;
HXDLIN( 281)			::Array< ::Dynamic> _g1 = this->_component->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Button >(),null());
HXDLIN( 281)			while((_g < _g1->length)){
HXLINE( 281)				 ::haxe::ui::components::Button b = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN( 281)				_g = (_g + 1);
HXLINE( 282)				b->set_height(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value));
            			}
            		}
            	}



::hx::ObjectPtr< ButtonHeight_obj > ButtonHeight_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ButtonHeight_obj > __this = new ButtonHeight_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ButtonHeight_obj > ButtonHeight_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ButtonHeight_obj *__this = (ButtonHeight_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonHeight_obj), true, "haxe.ui.components._TabBar.ButtonHeight"));
	*(void **)__this = ButtonHeight_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ButtonHeight_obj::ButtonHeight_obj()
{
}

::hx::Val ButtonHeight_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ButtonHeight_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ButtonHeight_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonHeight_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ButtonHeight_obj::__mClass;

void ButtonHeight_obj::__register()
{
	ButtonHeight_obj _hx_dummy;
	ButtonHeight_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.ButtonHeight",f0,65,82,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonHeight_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonHeight_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonHeight_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonHeight_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
