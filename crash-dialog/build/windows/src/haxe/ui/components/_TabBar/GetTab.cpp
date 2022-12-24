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
#ifndef INCLUDED_haxe_ui_components__TabBar_GetTab
#include <haxe/ui/components/_TabBar/GetTab.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c47a7887b785ba9e_247_new,"haxe.ui.components._TabBar.GetTab","new",0xe908fa88,"haxe.ui.components._TabBar.GetTab.new","haxe/ui/components/TabBar.hx",247,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_c47a7887b785ba9e_248_call,"haxe.ui.components._TabBar.GetTab","call",0xf789d176,"haxe.ui.components._TabBar.GetTab.call","haxe/ui/components/TabBar.hx",248,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void GetTab_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c47a7887b785ba9e_247_new)
HXDLIN( 247)		super::__construct(component);
            	}

Dynamic GetTab_obj::__CreateEmpty() { return new GetTab_obj; }

void *GetTab_obj::_hx_vtable = 0;

Dynamic GetTab_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GetTab_obj > _hx_result = new GetTab_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetTab_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x249e40ec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x249e40ec;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType GetTab_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_c47a7887b785ba9e_248_call)
HXLINE( 249)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 250)		int index = ( (int)(param) );
HXLINE( 251)		 ::haxe::ui::core::Component tab = null();
HXLINE( 252)		 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 252)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 252)		if (::hx::IsNull( _this->_children )) {
HXLINE( 252)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 252)			_hx_tmp = _this->_children;
            		}
HXDLIN( 252)		if ((index < _hx_tmp->length)) {
HXLINE( 253)			 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 253)			::Array< ::Dynamic> tab1;
HXDLIN( 253)			if (::hx::IsNull( _this->_children )) {
HXLINE( 253)				tab1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 253)				tab1 = _this->_children;
            			}
HXDLIN( 253)			tab = tab1->__get(index).StaticCast<  ::haxe::ui::core::Component >();
            		}
HXLINE( 255)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(tab);
            	}



::hx::ObjectPtr< GetTab_obj > GetTab_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< GetTab_obj > __this = new GetTab_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< GetTab_obj > GetTab_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	GetTab_obj *__this = (GetTab_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GetTab_obj), true, "haxe.ui.components._TabBar.GetTab"));
	*(void **)__this = GetTab_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

GetTab_obj::GetTab_obj()
{
}

::hx::Val GetTab_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GetTab_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GetTab_obj_sStaticStorageInfo = 0;
#endif

static ::String GetTab_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class GetTab_obj::__mClass;

void GetTab_obj::__register()
{
	GetTab_obj _hx_dummy;
	GetTab_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.GetTab",96,56,cf,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GetTab_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GetTab_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetTab_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetTab_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
