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
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_TabPosition
#include <haxe/ui/containers/_TabView/TabPosition.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e2a91e4143c7ef9_184_new,"haxe.ui.containers._TabView.TabPosition","new",0xd88c1247,"haxe.ui.containers._TabView.TabPosition.new","haxe/ui/containers/TabView.hx",184,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_3e2a91e4143c7ef9_185_validateData,"haxe.ui.containers._TabView.TabPosition","validateData",0x62cd1f19,"haxe.ui.containers._TabView.TabPosition.validateData","haxe/ui/containers/TabView.hx",185,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void TabPosition_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3e2a91e4143c7ef9_184_new)
HXDLIN( 184)		super::__construct(component);
            	}

Dynamic TabPosition_obj::__CreateEmpty() { return new TabPosition_obj; }

void *TabPosition_obj::_hx_vtable = 0;

Dynamic TabPosition_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabPosition_obj > _hx_result = new TabPosition_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabPosition_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x0c77ed97) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c77ed97;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void TabPosition_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_3e2a91e4143c7ef9_185_validateData)
HXLINE( 186)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN( 186)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("bottom",eb,e6,78,65)))) {
HXLINE( 187)			this->_component->addClass(HX_(":bottom",a5,ce,55,d1),null(),null());
HXLINE( 188)			this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::TabBar >(),false,null()).StaticCast<  ::haxe::ui::components::TabBar >()->componentTabIndex = 1;
HXLINE( 189)			this->_component->findComponent(HX_("tabview-content",e6,41,c6,35),::hx::ClassOf< ::haxe::ui::containers::Box >(),false,null()).StaticCast<  ::haxe::ui::containers::Box >()->componentTabIndex = 0;
            		}
            		else {
HXLINE( 191)			this->_component->removeClass(HX_(":bottom",a5,ce,55,d1),null(),null());
HXLINE( 192)			this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::TabBar >(),false,null()).StaticCast<  ::haxe::ui::components::TabBar >()->componentTabIndex = 0;
HXLINE( 193)			this->_component->findComponent(HX_("tabview-content",e6,41,c6,35),::hx::ClassOf< ::haxe::ui::containers::Box >(),false,null()).StaticCast<  ::haxe::ui::containers::Box >()->componentTabIndex = 1;
            		}
HXLINE( 195)		 ::haxe::ui::components::TabBar _hx_tmp1 = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::TabBar >(),false,null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXDLIN( 195)		_hx_tmp1->set_tabPosition(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            	}



::hx::ObjectPtr< TabPosition_obj > TabPosition_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TabPosition_obj > __this = new TabPosition_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TabPosition_obj > TabPosition_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TabPosition_obj *__this = (TabPosition_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabPosition_obj), true, "haxe.ui.containers._TabView.TabPosition"));
	*(void **)__this = TabPosition_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TabPosition_obj::TabPosition_obj()
{
}

::hx::Val TabPosition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabPosition_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabPosition_obj_sStaticStorageInfo = 0;
#endif

static ::String TabPosition_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class TabPosition_obj::__mClass;

void TabPosition_obj::__register()
{
	TabPosition_obj _hx_dummy;
	TabPosition_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.TabPosition",d5,e2,dd,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabPosition_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabPosition_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabPosition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabPosition_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
