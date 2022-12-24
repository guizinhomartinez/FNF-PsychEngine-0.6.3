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
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_RemovePage
#include <haxe/ui/containers/_TabView/RemovePage.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_597d856d1dd60d32_212_new,"haxe.ui.containers._TabView.RemovePage","new",0x773408ce,"haxe.ui.containers._TabView.RemovePage.new","haxe/ui/containers/TabView.hx",212,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_597d856d1dd60d32_213_call,"haxe.ui.containers._TabView.RemovePage","call",0xcf0b4070,"haxe.ui.containers._TabView.RemovePage.call","haxe/ui/containers/TabView.hx",213,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void RemovePage_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_597d856d1dd60d32_212_new)
HXDLIN( 212)		super::__construct(component);
            	}

Dynamic RemovePage_obj::__CreateEmpty() { return new RemovePage_obj; }

void *RemovePage_obj::_hx_vtable = 0;

Dynamic RemovePage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RemovePage_obj > _hx_result = new RemovePage_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RemovePage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37414d5a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x37414d5a;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType RemovePage_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_597d856d1dd60d32_213_call)
HXLINE( 214)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 215)		int index = ( (int)(param) );
HXLINE( 216)		if ((index < builder->_views->length)) {
HXLINE( 217)			builder->_tabs->removeTab(index);
            		}
HXLINE( 219)		return null();
            	}



::hx::ObjectPtr< RemovePage_obj > RemovePage_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RemovePage_obj > __this = new RemovePage_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RemovePage_obj > RemovePage_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RemovePage_obj *__this = (RemovePage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RemovePage_obj), true, "haxe.ui.containers._TabView.RemovePage"));
	*(void **)__this = RemovePage_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RemovePage_obj::RemovePage_obj()
{
}

::hx::Val RemovePage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RemovePage_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RemovePage_obj_sStaticStorageInfo = 0;
#endif

static ::String RemovePage_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class RemovePage_obj::__mClass;

void RemovePage_obj::__register()
{
	RemovePage_obj _hx_dummy;
	RemovePage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.RemovePage",dc,49,f8,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RemovePage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RemovePage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RemovePage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RemovePage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
