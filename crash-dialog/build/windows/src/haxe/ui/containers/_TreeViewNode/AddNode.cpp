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
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_AddNode
#include <haxe/ui/containers/_TreeViewNode/AddNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0dc0248c3af535d7_156_new,"haxe.ui.containers._TreeViewNode.AddNode","new",0xc6a4b9e1,"haxe.ui.containers._TreeViewNode.AddNode.new","haxe/ui/containers/TreeViewNode.hx",156,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_0dc0248c3af535d7_157_call,"haxe.ui.containers._TreeViewNode.AddNode","call",0x02357ffd,"haxe.ui.containers._TreeViewNode.AddNode.call","haxe/ui/containers/TreeViewNode.hx",157,0x9b33be2e)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeViewNode{

void AddNode_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0dc0248c3af535d7_156_new)
HXDLIN( 156)		super::__construct(component);
            	}

Dynamic AddNode_obj::__CreateEmpty() { return new AddNode_obj; }

void *AddNode_obj::_hx_vtable = 0;

Dynamic AddNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AddNode_obj > _hx_result = new AddNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AddNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x7348da8b;
	}
}

 ::haxe::ui::util::VariantType AddNode_obj::call( ::Dynamic param){
            	HX_GC_STACKFRAME(&_hx_pos_0dc0248c3af535d7_157_call)
HXLINE( 158)		 ::haxe::ui::containers::TreeViewNode node =  ::haxe::ui::containers::TreeViewNode_obj::__alloc( HX_CTX );
HXLINE( 159)		node->parentNode = ::hx::TCast<  ::haxe::ui::containers::TreeViewNode >::cast(this->_component);
HXLINE( 160)		node->set_data(param);
HXLINE( 161)		this->_component->addComponent(node);
HXLINE( 162)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(node);
            	}



::hx::ObjectPtr< AddNode_obj > AddNode_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< AddNode_obj > __this = new AddNode_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< AddNode_obj > AddNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	AddNode_obj *__this = (AddNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AddNode_obj), true, "haxe.ui.containers._TreeViewNode.AddNode"));
	*(void **)__this = AddNode_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

AddNode_obj::AddNode_obj()
{
}

::hx::Val AddNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AddNode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AddNode_obj_sStaticStorageInfo = 0;
#endif

static ::String AddNode_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class AddNode_obj::__mClass;

void AddNode_obj::__register()
{
	AddNode_obj _hx_dummy;
	AddNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeViewNode.AddNode",6f,35,b0,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AddNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AddNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AddNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AddNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeViewNode
