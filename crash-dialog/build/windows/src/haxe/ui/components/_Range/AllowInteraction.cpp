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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_AllowInteraction
#include <haxe/ui/components/_Range/AllowInteraction.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_Events
#include <haxe/ui/components/_Range/Events.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4f21fe1ac88faa51_164_new,"haxe.ui.components._Range.AllowInteraction","new",0x2b135e25,"haxe.ui.components._Range.AllowInteraction.new","haxe/ui/components/Range.hx",164,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_4f21fe1ac88faa51_166_get,"haxe.ui.components._Range.AllowInteraction","get",0x2b0e0e5b,"haxe.ui.components._Range.AllowInteraction.get","haxe/ui/components/Range.hx",166,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_4f21fe1ac88faa51_169_set,"haxe.ui.components._Range.AllowInteraction","set",0x2b172967,"haxe.ui.components._Range.AllowInteraction.set","haxe/ui/components/Range.hx",169,0x313cba28)
namespace haxe{
namespace ui{
namespace components{
namespace _Range{

void AllowInteraction_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4f21fe1ac88faa51_164_new)
HXDLIN( 164)		super::__construct(component);
            	}

Dynamic AllowInteraction_obj::__CreateEmpty() { return new AllowInteraction_obj; }

void *AllowInteraction_obj::_hx_vtable = 0;

Dynamic AllowInteraction_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AllowInteraction_obj > _hx_result = new AllowInteraction_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AllowInteraction_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x0660a997) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0660a997;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType AllowInteraction_obj::get(){
            	HX_STACKFRAME(&_hx_pos_4f21fe1ac88faa51_166_get)
HXDLIN( 166)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(::hx::IsNotNull( this->_component->_internalEvents ));
            	}


void AllowInteraction_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_4f21fe1ac88faa51_169_set)
HXLINE( 170)		if (::hx::IsEq( this->_component->get_native(),true )) {
HXLINE( 171)			return;
            		}
HXLINE( 174)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true))) {
HXLINE( 175)			this->_component->registerInternalEvents(::hx::ClassOf< ::haxe::ui::components::_Range::Events >(),null());
            		}
            		else {
HXLINE( 177)			this->_component->unregisterInternalEvents();
            		}
            	}



::hx::ObjectPtr< AllowInteraction_obj > AllowInteraction_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< AllowInteraction_obj > __this = new AllowInteraction_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< AllowInteraction_obj > AllowInteraction_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	AllowInteraction_obj *__this = (AllowInteraction_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AllowInteraction_obj), true, "haxe.ui.components._Range.AllowInteraction"));
	*(void **)__this = AllowInteraction_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

AllowInteraction_obj::AllowInteraction_obj()
{
}

::hx::Val AllowInteraction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AllowInteraction_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AllowInteraction_obj_sStaticStorageInfo = 0;
#endif

static ::String AllowInteraction_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class AllowInteraction_obj::__mClass;

void AllowInteraction_obj::__register()
{
	AllowInteraction_obj _hx_dummy;
	AllowInteraction_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Range.AllowInteraction",b3,67,de,ee);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AllowInteraction_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AllowInteraction_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AllowInteraction_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AllowInteraction_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Range
