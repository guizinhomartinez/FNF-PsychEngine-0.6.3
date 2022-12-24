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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#include <haxe/ui/containers/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_GetNodesInternal
#include <haxe/ui/containers/_TreeView/GetNodesInternal.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5558fa8c8df03fa2_195_new,"haxe.ui.containers._TreeView.GetNodesInternal","new",0x40ff4840,"haxe.ui.containers._TreeView.GetNodesInternal.new","haxe/ui/containers/TreeView.hx",195,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_5558fa8c8df03fa2_196_call,"haxe.ui.containers._TreeView.GetNodesInternal","call",0x971784be,"haxe.ui.containers._TreeView.GetNodesInternal.call","haxe/ui/containers/TreeView.hx",196,0xc7a0e210)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeView{

void GetNodesInternal_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_5558fa8c8df03fa2_195_new)
HXDLIN( 195)		super::__construct(component);
            	}

Dynamic GetNodesInternal_obj::__CreateEmpty() { return new GetNodesInternal_obj; }

void *GetNodesInternal_obj::_hx_vtable = 0;

Dynamic GetNodesInternal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GetNodesInternal_obj > _hx_result = new GetNodesInternal_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetNodesInternal_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x5b8a2cce;
	}
}

 ::haxe::ui::util::VariantType GetNodesInternal_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_5558fa8c8df03fa2_196_call)
HXLINE( 197)		::Array< ::Dynamic> nodes = this->_component->findComponents(null(),::hx::ClassOf< ::haxe::ui::containers::TreeViewNode >(),3);
HXLINE( 198)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(nodes);
            	}



::hx::ObjectPtr< GetNodesInternal_obj > GetNodesInternal_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< GetNodesInternal_obj > __this = new GetNodesInternal_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< GetNodesInternal_obj > GetNodesInternal_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	GetNodesInternal_obj *__this = (GetNodesInternal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GetNodesInternal_obj), true, "haxe.ui.containers._TreeView.GetNodesInternal"));
	*(void **)__this = GetNodesInternal_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

GetNodesInternal_obj::GetNodesInternal_obj()
{
}

::hx::Val GetNodesInternal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GetNodesInternal_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GetNodesInternal_obj_sStaticStorageInfo = 0;
#endif

static ::String GetNodesInternal_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class GetNodesInternal_obj::__mClass;

void GetNodesInternal_obj::__register()
{
	GetNodesInternal_obj _hx_dummy;
	GetNodesInternal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeView.GetNodesInternal",4e,68,ae,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GetNodesInternal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GetNodesInternal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetNodesInternal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetNodesInternal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeView
