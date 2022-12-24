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
#ifndef INCLUDED_haxe_ui_containers__TreeView_RemoveNode
#include <haxe/ui/containers/_TreeView/RemoveNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4b4e8253235fa940_134_new,"haxe.ui.containers._TreeView.RemoveNode","new",0x12d9c10e,"haxe.ui.containers._TreeView.RemoveNode.new","haxe/ui/containers/TreeView.hx",134,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_4b4e8253235fa940_135_call,"haxe.ui.containers._TreeView.RemoveNode","call",0x6466c030,"haxe.ui.containers._TreeView.RemoveNode.call","haxe/ui/containers/TreeView.hx",135,0xc7a0e210)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeView{

void RemoveNode_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4b4e8253235fa940_134_new)
HXDLIN( 134)		super::__construct(component);
            	}

Dynamic RemoveNode_obj::__CreateEmpty() { return new RemoveNode_obj; }

void *RemoveNode_obj::_hx_vtable = 0;

Dynamic RemoveNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RemoveNode_obj > _hx_result = new RemoveNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RemoveNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x24ca469c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x24ca469c;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType RemoveNode_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_4b4e8253235fa940_135_call)
HXLINE( 136)		 ::haxe::ui::containers::TreeViewNode node = ( ( ::haxe::ui::containers::TreeViewNode)(param) );
HXLINE( 137)		this->_component->removeComponent(node,null(),null());
HXLINE( 138)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(node);
            	}



::hx::ObjectPtr< RemoveNode_obj > RemoveNode_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< RemoveNode_obj > __this = new RemoveNode_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< RemoveNode_obj > RemoveNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RemoveNode_obj *__this = (RemoveNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RemoveNode_obj), true, "haxe.ui.containers._TreeView.RemoveNode"));
	*(void **)__this = RemoveNode_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RemoveNode_obj::RemoveNode_obj()
{
}

::hx::Val RemoveNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RemoveNode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RemoveNode_obj_sStaticStorageInfo = 0;
#endif

static ::String RemoveNode_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class RemoveNode_obj::__mClass;

void RemoveNode_obj::__register()
{
	RemoveNode_obj _hx_dummy;
	RemoveNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeView.RemoveNode",1c,e2,cc,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RemoveNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RemoveNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RemoveNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RemoveNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeView
