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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Stepper
#include <haxe/ui/components/Stepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Stepper_Builder
#include <haxe/ui/components/_Stepper/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_300179e4296d82f0_99_new,"haxe.ui.components._Stepper.Builder","new",0xf74320f7,"haxe.ui.components._Stepper.Builder.new","haxe/ui/components/Stepper.hx",99,0x78893714)
HX_LOCAL_STACK_FRAME(_hx_pos_300179e4296d82f0_104_create,"haxe.ui.components._Stepper.Builder","create",0x89614ec5,"haxe.ui.components._Stepper.Builder.create","haxe/ui/components/Stepper.hx",104,0x78893714)
namespace haxe{
namespace ui{
namespace components{
namespace _Stepper{

void Builder_obj::__construct( ::haxe::ui::components::Stepper stepper){
            	HX_STACKFRAME(&_hx_pos_300179e4296d82f0_99_new)
HXLINE( 100)		super::__construct(stepper);
HXLINE( 101)		this->_stepper = stepper;
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x18c93c15;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_300179e4296d82f0_104_create)
HXLINE( 105)		 ::haxe::ui::components::Button button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 106)		button->set_styleNames(HX_("stepper-button stepper-inc",30,da,49,5d));
HXLINE( 107)		button->set_id(HX_("stepper-inc",62,08,25,9a));
HXLINE( 108)		button->set_repeater(this->_stepper->get_repeater());
HXLINE( 109)		button->set_easeInRepeater(true);
HXLINE( 110)		button->set_allowFocus(false);
HXLINE( 111)		button->set_repeatInterval(this->_stepper->get_repeatInterval());
HXLINE( 112)		this->_stepper->addComponent(button);
HXLINE( 114)		 ::haxe::ui::components::Button button1 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 115)		button1->set_styleNames(HX_("stepper-button stepper-deinc",cf,e1,29,c0));
HXLINE( 116)		button1->set_id(HX_("stepper-deinc",81,80,d2,4c));
HXLINE( 117)		button1->set_repeater(this->_stepper->get_repeater());
HXLINE( 118)		button1->set_easeInRepeater(true);
HXLINE( 119)		button1->set_allowFocus(false);
HXLINE( 120)		button1->set_repeatInterval(this->_stepper->get_repeatInterval());
HXLINE( 121)		this->_stepper->addComponent(button1);
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::components::Stepper stepper) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(stepper);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Stepper stepper) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.components._Stepper.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(stepper);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_stepper,"_stepper");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stepper,"_stepper");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stepper") ) { return ::hx::Val( _stepper ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_stepper") ) { _stepper=inValue.Cast<  ::haxe::ui::components::Stepper >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_stepper",92,5e,18,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Stepper */ ,(int)offsetof(Builder_obj,_stepper),HX_("_stepper",92,5e,18,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_stepper",92,5e,18,bb),
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Stepper.Builder",85,d9,db,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Stepper
