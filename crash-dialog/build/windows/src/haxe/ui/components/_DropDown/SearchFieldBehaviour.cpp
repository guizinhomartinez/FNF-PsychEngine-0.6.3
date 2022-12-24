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
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownEvents
#include <haxe/ui/components/DropDownEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_SearchFieldBehaviour
#include <haxe/ui/components/_DropDown/SearchFieldBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_646b3b3d2ba35bc9_182_new,"haxe.ui.components._DropDown.SearchFieldBehaviour","new",0xa8cf14c1,"haxe.ui.components._DropDown.SearchFieldBehaviour.new","haxe/ui/components/DropDown.hx",182,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_646b3b3d2ba35bc9_183_get,"haxe.ui.components._DropDown.SearchFieldBehaviour","get",0xa8c9c4f7,"haxe.ui.components._DropDown.SearchFieldBehaviour.get","haxe/ui/components/DropDown.hx",183,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_646b3b3d2ba35bc9_188_set,"haxe.ui.components._DropDown.SearchFieldBehaviour","set",0xa8d2e003,"haxe.ui.components._DropDown.SearchFieldBehaviour.set","haxe/ui/components/DropDown.hx",188,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{
namespace _DropDown{

void SearchFieldBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_646b3b3d2ba35bc9_182_new)
HXDLIN( 182)		super::__construct(component);
            	}

Dynamic SearchFieldBehaviour_obj::__CreateEmpty() { return new SearchFieldBehaviour_obj; }

void *SearchFieldBehaviour_obj::_hx_vtable = 0;

Dynamic SearchFieldBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SearchFieldBehaviour_obj > _hx_result = new SearchFieldBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SearchFieldBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6597ec6c) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x6597ec6c;
		}
	} else {
		return inClassId==(int)0x6e720c37;
	}
}

 ::haxe::ui::util::VariantType SearchFieldBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_646b3b3d2ba35bc9_183_get)
HXLINE( 184)		 ::haxe::ui::components::DropDownEvents events = ::hx::TCast<  ::haxe::ui::components::DropDownEvents >::cast(this->_component->_internalEvents);
HXLINE( 185)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(events->get_searchField());
            	}


void SearchFieldBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_646b3b3d2ba35bc9_188_set)
HXLINE( 189)		 ::haxe::ui::components::DropDownEvents events = ::hx::TCast<  ::haxe::ui::components::DropDownEvents >::cast(this->_component->_internalEvents);
HXLINE( 190)		events->set_searchField(( ( ::haxe::ui::components::TextField)(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(value)) ));
            	}



::hx::ObjectPtr< SearchFieldBehaviour_obj > SearchFieldBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SearchFieldBehaviour_obj > __this = new SearchFieldBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SearchFieldBehaviour_obj > SearchFieldBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SearchFieldBehaviour_obj *__this = (SearchFieldBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SearchFieldBehaviour_obj), true, "haxe.ui.components._DropDown.SearchFieldBehaviour"));
	*(void **)__this = SearchFieldBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SearchFieldBehaviour_obj::SearchFieldBehaviour_obj()
{
}

::hx::Val SearchFieldBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SearchFieldBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SearchFieldBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SearchFieldBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class SearchFieldBehaviour_obj::__mClass;

void SearchFieldBehaviour_obj::__register()
{
	SearchFieldBehaviour_obj _hx_dummy;
	SearchFieldBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._DropDown.SearchFieldBehaviour",4f,a0,1b,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SearchFieldBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SearchFieldBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SearchFieldBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SearchFieldBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _DropDown
