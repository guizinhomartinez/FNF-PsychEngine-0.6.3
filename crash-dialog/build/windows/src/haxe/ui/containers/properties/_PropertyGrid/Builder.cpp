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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyGroup
#include <haxe/ui/containers/properties/PropertyGroup.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGrid_Builder
#include <haxe/ui/containers/properties/_PropertyGrid/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cbf342628d979835_26_new,"haxe.ui.containers.properties._PropertyGrid.Builder","new",0xccc64888,"haxe.ui.containers.properties._PropertyGrid.Builder.new","haxe/ui/containers/properties/PropertyGrid.hx",26,0xa23bcb92)
HX_LOCAL_STACK_FRAME(_hx_pos_cbf342628d979835_27_createVScroll,"haxe.ui.containers.properties._PropertyGrid.Builder","createVScroll",0x831a1baf,"haxe.ui.containers.properties._PropertyGrid.Builder.createVScroll","haxe/ui/containers/properties/PropertyGrid.hx",27,0xa23bcb92)
HX_LOCAL_STACK_FRAME(_hx_pos_cbf342628d979835_35_destroyVScroll,"haxe.ui.containers.properties._PropertyGrid.Builder","destroyVScroll",0x9963a021,"haxe.ui.containers.properties._PropertyGrid.Builder.destroyVScroll","haxe/ui/containers/properties/PropertyGrid.hx",35,0xa23bcb92)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _PropertyGrid{

void Builder_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_cbf342628d979835_26_new)
HXDLIN(  26)		super::__construct(scrollview);
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
	if (inClassId<=(int)0x17e93bfd) {
		if (inClassId<=(int)0x0472fd8d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
		} else {
			return inClassId==(int)0x17e93bfd;
		}
	} else {
		return inClassId==(int)0x6535bc48;
	}
}

 ::haxe::ui::components::VerticalScroll Builder_obj::createVScroll(){
            	HX_STACKFRAME(&_hx_pos_cbf342628d979835_27_createVScroll)
HXLINE(  28)		{
HXLINE(  28)			int _g = 0;
HXDLIN(  28)			::Array< ::Dynamic> _g1 = this->_component->findComponents(null(),::hx::ClassOf< ::haxe::ui::containers::properties::PropertyGroup >(),null());
HXDLIN(  28)			while((_g < _g1->length)){
HXLINE(  28)				 ::haxe::ui::containers::properties::PropertyGroup g = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::properties::PropertyGroup >();
HXDLIN(  28)				_g = (_g + 1);
HXLINE(  29)				g->findComponent(HX_("property-group-header",53,22,a5,a8),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >()->addClass(HX_("scrolling",f5,fa,19,3e),null(),null());
HXLINE(  30)				g->findComponent(HX_("property-group-contents",60,5b,d5,e0),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >()->addClass(HX_("scrolling",f5,fa,19,3e),null(),null());
            			}
            		}
HXLINE(  32)		return this->super::createVScroll();
            	}


void Builder_obj::destroyVScroll(){
            	HX_STACKFRAME(&_hx_pos_cbf342628d979835_35_destroyVScroll)
HXLINE(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			::Array< ::Dynamic> _g1 = this->_component->findComponents(null(),::hx::ClassOf< ::haxe::ui::containers::properties::PropertyGroup >(),null());
HXDLIN(  36)			while((_g < _g1->length)){
HXLINE(  36)				 ::haxe::ui::containers::properties::PropertyGroup g = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::properties::PropertyGroup >();
HXDLIN(  36)				_g = (_g + 1);
HXLINE(  37)				g->findComponent(HX_("property-group-header",53,22,a5,a8),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >()->removeClass(HX_("scrolling",f5,fa,19,3e),null(),null());
HXLINE(  38)				g->findComponent(HX_("property-group-contents",60,5b,d5,e0),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >()->removeClass(HX_("scrolling",f5,fa,19,3e),null(),null());
            			}
            		}
HXLINE(  40)		this->super::destroyVScroll();
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers.properties._PropertyGrid.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

Builder_obj::Builder_obj()
{
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"createVScroll") ) { return ::hx::Val( createVScroll_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyVScroll") ) { return ::hx::Val( destroyVScroll_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Builder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("createVScroll",87,e1,20,8f),
	HX_("destroyVScroll",49,f7,49,13),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties._PropertyGrid.Builder",96,a4,4d,ee);
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
} // end namespace containers
} // end namespace properties
} // end namespace _PropertyGrid
