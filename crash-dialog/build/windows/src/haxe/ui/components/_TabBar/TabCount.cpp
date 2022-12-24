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
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_TabCount
#include <haxe/ui/components/_TabBar/TabCount.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_97fc531117eb456c_208_new,"haxe.ui.components._TabBar.TabCount","new",0xe2d492a3,"haxe.ui.components._TabBar.TabCount.new","haxe/ui/components/TabBar.hx",208,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_97fc531117eb456c_209_get,"haxe.ui.components._TabBar.TabCount","get",0xe2cf42d9,"haxe.ui.components._TabBar.TabCount.get","haxe/ui/components/TabBar.hx",209,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void TabCount_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_97fc531117eb456c_208_new)
HXDLIN( 208)		super::__construct(component);
            	}

Dynamic TabCount_obj::__CreateEmpty() { return new TabCount_obj; }

void *TabCount_obj::_hx_vtable = 0;

Dynamic TabCount_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabCount_obj > _hx_result = new TabCount_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabCount_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01b77423) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01b77423;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType TabCount_obj::get(){
            	HX_STACKFRAME(&_hx_pos_97fc531117eb456c_209_get)
HXLINE( 210)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 211)		 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 211)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 211)		if (::hx::IsNull( _this->_children )) {
HXLINE( 211)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 211)			_hx_tmp = _this->_children;
            		}
HXDLIN( 211)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(_hx_tmp->length);
            	}



::hx::ObjectPtr< TabCount_obj > TabCount_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TabCount_obj > __this = new TabCount_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TabCount_obj > TabCount_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TabCount_obj *__this = (TabCount_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabCount_obj), true, "haxe.ui.components._TabBar.TabCount"));
	*(void **)__this = TabCount_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TabCount_obj::TabCount_obj()
{
}

::hx::Val TabCount_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabCount_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabCount_obj_sStaticStorageInfo = 0;
#endif

static ::String TabCount_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class TabCount_obj::__mClass;

void TabCount_obj::__register()
{
	TabCount_obj _hx_dummy;
	TabCount_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.TabCount",31,05,90,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabCount_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabCount_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabCount_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabCount_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
