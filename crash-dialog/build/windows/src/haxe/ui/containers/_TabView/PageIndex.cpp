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
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Builder
#include <haxe/ui/containers/_TabView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_PageIndex
#include <haxe/ui/containers/_TabView/PageIndex.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_27055f30c44997fe_116_new,"haxe.ui.containers._TabView.PageIndex","new",0x5fa29b2c,"haxe.ui.containers._TabView.PageIndex.new","haxe/ui/containers/TabView.hx",116,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_27055f30c44997fe_117_set,"haxe.ui.containers._TabView.PageIndex","set",0x5fa6666e,"haxe.ui.containers._TabView.PageIndex.set","haxe/ui/containers/TabView.hx",117,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_27055f30c44997fe_125_validateData,"haxe.ui.containers._TabView.PageIndex","validateData",0xdb42d194,"haxe.ui.containers._TabView.PageIndex.validateData","haxe/ui/containers/TabView.hx",125,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void PageIndex_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_27055f30c44997fe_116_new)
HXDLIN( 116)		super::__construct(component);
            	}

Dynamic PageIndex_obj::__CreateEmpty() { return new PageIndex_obj; }

void *PageIndex_obj::_hx_vtable = 0;

Dynamic PageIndex_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PageIndex_obj > _hx_result = new PageIndex_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PageIndex_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x588e0d98 || inClassId==(int)0x7e17fa9f;
	}
}

void PageIndex_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_27055f30c44997fe_117_set)
HXLINE( 118)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::gt(value,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1))) {
HXLINE( 119)			 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 120)			 ::haxe::ui::components::TabBar builder1 = builder->_tabs;
HXDLIN( 120)			builder1->set_selectedIndex(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value)) ));
            		}
HXLINE( 122)		this->super::set(value);
            	}


void PageIndex_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_27055f30c44997fe_125_validateData)
HXLINE( 126)		if (::hx::IsEq( this->_component->get_native(),true )) {
HXLINE( 127)			return;
            		}
HXLINE( 130)		 ::haxe::ui::containers::_TabView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TabView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 132)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN( 132)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::lt(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0))) {
HXLINE( 133)			return;
            		}
HXLINE( 135)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN( 135)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::gt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((builder->_views->length - 1)))) {
HXLINE( 136)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((builder->_views->length - 1));
HXLINE( 137)			return;
            		}
HXLINE( 140)		 ::haxe::ui::components::TabBar builder1 = builder->_tabs;
HXDLIN( 140)		builder1->set_selectedIndex(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
HXLINE( 141)		 ::haxe::ui::core::Component view = builder->_views->__get(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) )).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 142)		if (::hx::IsNotNull( view )) {
HXLINE( 143)			if (::hx::IsNotNull( builder->_currentView )) {
HXLINE( 145)				builder->_currentView->hide();
            			}
HXLINE( 147)			if ((builder->_content->getComponentIndex(view) == -1)) {
HXLINE( 148)				builder->_content->addComponent(view);
            			}
            			else {
HXLINE( 150)				view->show();
            			}
HXLINE( 153)			builder->_currentView = view;
            		}
HXLINE( 156)		 ::haxe::ui::core::Component _hx_tmp2 = this->_component;
HXDLIN( 156)		_hx_tmp2->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}



::hx::ObjectPtr< PageIndex_obj > PageIndex_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PageIndex_obj > __this = new PageIndex_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PageIndex_obj > PageIndex_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PageIndex_obj *__this = (PageIndex_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PageIndex_obj), true, "haxe.ui.containers._TabView.PageIndex"));
	*(void **)__this = PageIndex_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PageIndex_obj::PageIndex_obj()
{
}

::hx::Val PageIndex_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PageIndex_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PageIndex_obj_sStaticStorageInfo = 0;
#endif

static ::String PageIndex_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class PageIndex_obj::__mClass;

void PageIndex_obj::__register()
{
	PageIndex_obj _hx_dummy;
	PageIndex_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.PageIndex",3a,d5,1a,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PageIndex_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PageIndex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PageIndex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PageIndex_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
