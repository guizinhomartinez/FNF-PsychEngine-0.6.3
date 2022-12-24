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
#ifndef INCLUDED_haxe_ui_containers_TabView
#include <haxe/ui/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_SelectedPage
#include <haxe/ui/containers/_TabView/SelectedPage.h>
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
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_73807e888603cddc_164_new,"haxe.ui.containers._TabView.SelectedPage","new",0x96208225,"haxe.ui.containers._TabView.SelectedPage.new","haxe/ui/containers/TabView.hx",164,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_73807e888603cddc_165_get,"haxe.ui.containers._TabView.SelectedPage","get",0x961b325b,"haxe.ui.containers._TabView.SelectedPage.get","haxe/ui/containers/TabView.hx",165,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_73807e888603cddc_172_set,"haxe.ui.containers._TabView.SelectedPage","set",0x96244d67,"haxe.ui.containers._TabView.SelectedPage.set","haxe/ui/containers/TabView.hx",172,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void SelectedPage_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_73807e888603cddc_164_new)
HXDLIN( 164)		super::__construct(component);
            	}

Dynamic SelectedPage_obj::__CreateEmpty() { return new SelectedPage_obj; }

void *SelectedPage_obj::_hx_vtable = 0;

Dynamic SelectedPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedPage_obj > _hx_result = new SelectedPage_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedPage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x09b8eab1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x09b8eab1;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType SelectedPage_obj::get(){
            	HX_STACKFRAME(&_hx_pos_73807e888603cddc_165_get)
HXLINE( 166)		 ::haxe::ui::containers::TabView tabview = ::hx::TCast<  ::haxe::ui::containers::TabView >::cast(this->_component);
HXLINE( 167)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 168)		 ::haxe::ui::core::Component view = builder->_views->__get(tabview->get_pageIndex()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 169)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(view);
            	}


void SelectedPage_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_73807e888603cddc_172_set)
HXLINE( 173)		 ::haxe::ui::containers::TabView tabview = ::hx::TCast<  ::haxe::ui::containers::TabView >::cast(this->_component);
HXLINE( 174)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 175)		 ::haxe::ui::core::Component view = ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(value);
HXLINE( 176)		int viewIndex = builder->_views->indexOf(view,null());
HXLINE( 177)		if ((viewIndex != -1)) {
HXLINE( 178)			tabview->set_pageIndex(viewIndex);
            		}
            	}



::hx::ObjectPtr< SelectedPage_obj > SelectedPage_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedPage_obj > __this = new SelectedPage_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedPage_obj > SelectedPage_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedPage_obj *__this = (SelectedPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedPage_obj), true, "haxe.ui.containers._TabView.SelectedPage"));
	*(void **)__this = SelectedPage_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedPage_obj::SelectedPage_obj()
{
}

::hx::Val SelectedPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedPage_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedPage_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedPage_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class SelectedPage_obj::__mClass;

void SelectedPage_obj::__register()
{
	SelectedPage_obj _hx_dummy;
	SelectedPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.SelectedPage",b3,8b,89,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedPage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
