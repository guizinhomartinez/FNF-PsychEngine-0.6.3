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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_Expanded
#include <haxe/ui/containers/_TreeViewNode/Expanded.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeBuilder
#include <haxe/ui/containers/_TreeViewNode/TreeViewNodeBuilder.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_efde936c15941bc5_189_new,"haxe.ui.containers._TreeViewNode.Expanded","new",0x816e6a7f,"haxe.ui.containers._TreeViewNode.Expanded.new","haxe/ui/containers/TreeViewNode.hx",189,0x9b33be2e)
HX_LOCAL_STACK_FRAME(_hx_pos_efde936c15941bc5_190_validateData,"haxe.ui.containers._TreeViewNode.Expanded","validateData",0x3729ffe1,"haxe.ui.containers._TreeViewNode.Expanded.validateData","haxe/ui/containers/TreeViewNode.hx",190,0x9b33be2e)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeViewNode{

void Expanded_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_efde936c15941bc5_189_new)
HXDLIN( 189)		super::__construct(component);
            	}

Dynamic Expanded_obj::__CreateEmpty() { return new Expanded_obj; }

void *Expanded_obj::_hx_vtable = 0;

Dynamic Expanded_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Expanded_obj > _hx_result = new Expanded_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Expanded_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x0ba7921d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0ba7921d;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void Expanded_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_efde936c15941bc5_190_validateData)
HXLINE( 191)		 ::haxe::ui::containers::Box childContainer = this->_component->findComponent(HX_("treenode-child-container",e3,70,2d,aa),::hx::ClassOf< ::haxe::ui::containers::Box >(),null(),null()).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE( 192)		if (::hx::IsNull( childContainer )) {
HXLINE( 193)			return;
            		}
HXLINE( 196)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN( 196)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true))) {
HXLINE( 197)			childContainer->show();
            		}
            		else {
HXLINE( 199)			childContainer->hide();
            		}
HXLINE( 202)		 ::haxe::ui::containers::_TreeViewNode::TreeViewNodeBuilder builder = ::hx::TCast<  ::haxe::ui::containers::_TreeViewNode::TreeViewNodeBuilder >::cast(this->_component->_compositeBuilder);
HXLINE( 203)		builder->updateIconClass();
            	}



::hx::ObjectPtr< Expanded_obj > Expanded_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Expanded_obj > __this = new Expanded_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Expanded_obj > Expanded_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Expanded_obj *__this = (Expanded_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Expanded_obj), true, "haxe.ui.containers._TreeViewNode.Expanded"));
	*(void **)__this = Expanded_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Expanded_obj::Expanded_obj()
{
}

::hx::Val Expanded_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Expanded_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Expanded_obj_sStaticStorageInfo = 0;
#endif

static ::String Expanded_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class Expanded_obj::__mClass;

void Expanded_obj::__register()
{
	Expanded_obj _hx_dummy;
	Expanded_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeViewNode.Expanded",0d,bf,31,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Expanded_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Expanded_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Expanded_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Expanded_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeViewNode
