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
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_TabPosition
#include <haxe/ui/components/_TabBar/TabPosition.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cbc99741c1a83bb0_188_new,"haxe.ui.components._TabBar.TabPosition","new",0x387939f9,"haxe.ui.components._TabBar.TabPosition.new","haxe/ui/components/TabBar.hx",188,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_cbc99741c1a83bb0_189_validateData,"haxe.ui.components._TabBar.TabPosition","validateData",0x294a7127,"haxe.ui.components._TabBar.TabPosition.validateData","haxe/ui/components/TabBar.hx",189,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void TabPosition_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_cbc99741c1a83bb0_188_new)
HXDLIN( 188)		super::__construct(component);
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
		if (inClassId<=(int)0x369ea771) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x369ea771;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void TabPosition_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_cbc99741c1a83bb0_189_validateData)
HXLINE( 190)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 191)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN( 191)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("bottom",eb,e6,78,65)))) {
HXLINE( 192)			this->_component->addClass(HX_(":bottom",a5,ce,55,d1),null(),null());
HXLINE( 193)			{
HXLINE( 193)				int _g = 0;
HXDLIN( 193)				 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 193)				::Array< ::Dynamic> _g1;
HXDLIN( 193)				if (::hx::IsNull( _this->_children )) {
HXLINE( 193)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 193)					_g1 = _this->_children;
            				}
HXDLIN( 193)				while((_g < _g1->length)){
HXLINE( 193)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 193)					_g = (_g + 1);
HXLINE( 194)					child->addClass(HX_(":bottom",a5,ce,55,d1),null(),null());
            				}
            			}
            		}
            		else {
HXLINE( 197)			this->_component->removeClass(HX_(":bottom",a5,ce,55,d1),null(),null());
HXLINE( 198)			{
HXLINE( 198)				int _g = 0;
HXDLIN( 198)				 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 198)				::Array< ::Dynamic> _g1;
HXDLIN( 198)				if (::hx::IsNull( _this->_children )) {
HXLINE( 198)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 198)					_g1 = _this->_children;
            				}
HXDLIN( 198)				while((_g < _g1->length)){
HXLINE( 198)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 198)					_g = (_g + 1);
HXLINE( 199)					child->removeClass(HX_(":bottom",a5,ce,55,d1),null(),null());
            				}
            			}
            		}
            	}



::hx::ObjectPtr< TabPosition_obj > TabPosition_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TabPosition_obj > __this = new TabPosition_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TabPosition_obj > TabPosition_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TabPosition_obj *__this = (TabPosition_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabPosition_obj), true, "haxe.ui.components._TabBar.TabPosition"));
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
	__mClass->mName = HX_("haxe.ui.components._TabBar.TabPosition",87,c9,0c,de);
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
} // end namespace components
} // end namespace _TabBar
