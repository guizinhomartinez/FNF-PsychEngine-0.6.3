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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Switch
#include <haxe/ui/components/Switch.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_Builder
#include <haxe/ui/components/_Switch/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_SwitchButtonSub
#include <haxe/ui/components/_Switch/SwitchButtonSub.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a882ec7d3708272_95_new,"haxe.ui.components._Switch.Builder","new",0xfe240b6c,"haxe.ui.components._Switch.Builder.new","haxe/ui/components/Switch.hx",95,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_2a882ec7d3708272_100_create,"haxe.ui.components._Switch.Builder","create",0x07c49b70,"haxe.ui.components._Switch.Builder.create","haxe/ui/components/Switch.hx",100,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_2a882ec7d3708272_103_create,"haxe.ui.components._Switch.Builder","create",0x07c49b70,"haxe.ui.components._Switch.Builder.create","haxe/ui/components/Switch.hx",103,0x0342e663)
namespace haxe{
namespace ui{
namespace components{
namespace _Switch{

void Builder_obj::__construct( ::haxe::ui::components::Switch s){
            	HX_STACKFRAME(&_hx_pos_2a882ec7d3708272_95_new)
HXLINE(  96)		super::__construct(s);
HXLINE(  97)		this->_switch = s;
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
		return inClassId==(int)0x303bcfe4;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_2a882ec7d3708272_100_create)
HXDLIN( 100)		 ::haxe::ui::components::_Switch::Builder _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 101)		if (::hx::IsNull( this->_button )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::_Switch::Builder,_gthis) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::UIEvent e){
            				HX_GC_STACKFRAME(&_hx_pos_2a882ec7d3708272_103_create)
HXLINE( 104)				 ::haxe::ui::components::Switch _gthis1 = _gthis->_switch;
HXDLIN( 104)				_gthis1->set_selected(_gthis->_button->get_selected());
HXLINE( 105)				 ::haxe::ui::components::Switch _gthis2 = _gthis->_switch;
HXDLIN( 105)				_gthis2->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 102)			this->_button =  ::haxe::ui::components::_Switch::SwitchButtonSub_obj::__alloc( HX_CTX );
HXLINE( 103)			this->_button->set_onChange( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 107)			this->_component->addComponent(this->_button);
            		}
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::components::Switch s) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(s);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Switch s) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.components._Switch.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_switch,"_switch");
	HX_MARK_MEMBER_NAME(_button,"_button");
	HX_MARK_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_switch,"_switch");
	HX_VISIT_MEMBER_NAME(_button,"_button");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return ::hx::Val( _label ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_switch") ) { return ::hx::Val( _switch ); }
		if (HX_FIELD_EQ(inName,"_button") ) { return ::hx::Val( _button ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_switch") ) { _switch=inValue.Cast<  ::haxe::ui::components::Switch >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast<  ::haxe::ui::components::_Switch::SwitchButtonSub >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_switch",93,5b,f0,33));
	outFields->push(HX_("_button",91,73,57,48));
	outFields->push(HX_("_label",35,55,96,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Switch */ ,(int)offsetof(Builder_obj,_switch),HX_("_switch",93,5b,f0,33)},
	{::hx::fsObject /*  ::haxe::ui::components::_Switch::SwitchButtonSub */ ,(int)offsetof(Builder_obj,_button),HX_("_button",91,73,57,48)},
	{::hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(Builder_obj,_label),HX_("_label",35,55,96,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_switch",93,5b,f0,33),
	HX_("_button",91,73,57,48),
	HX_("_label",35,55,96,6b),
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Switch.Builder",7a,25,8f,59);
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
} // end namespace _Switch
