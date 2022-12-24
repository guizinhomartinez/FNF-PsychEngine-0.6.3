#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Column
#include <haxe/ui/components/Column.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_AddColumn
#include <haxe/ui/containers/_TableView/AddColumn.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_79d1b1c8e25449f6_816_new,"haxe.ui.containers._TableView.AddColumn","new",0x91048779,"haxe.ui.containers._TableView.AddColumn.new","haxe/ui/containers/TableView.hx",816,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_79d1b1c8e25449f6_817_call,"haxe.ui.containers._TableView.AddColumn","call",0x4ba99765,"haxe.ui.containers._TableView.AddColumn.call","haxe/ui/containers/TableView.hx",817,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void AddColumn_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_79d1b1c8e25449f6_816_new)
HXDLIN( 816)		super::__construct(component);
            	}

Dynamic AddColumn_obj::__CreateEmpty() { return new AddColumn_obj; }

void *AddColumn_obj::_hx_vtable = 0;

Dynamic AddColumn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AddColumn_obj > _hx_result = new AddColumn_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AddColumn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x4c9e4c6f;
	}
}

 ::haxe::ui::util::VariantType AddColumn_obj::call( ::Dynamic param){
            	HX_GC_STACKFRAME(&_hx_pos_79d1b1c8e25449f6_817_call)
HXLINE( 818)		 ::haxe::ui::containers::Header header = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::containers::Header >(),null(),null()).StaticCast<  ::haxe::ui::containers::Header >();
HXLINE( 819)		if (::hx::IsNull( header )) {
HXLINE( 820)			header =  ::haxe::ui::containers::Header_obj::__alloc( HX_CTX );
HXLINE( 821)			this->_component->addComponent(header);
            		}
HXLINE( 823)		 ::haxe::ui::components::Column column =  ::haxe::ui::components::Column_obj::__alloc( HX_CTX );
HXLINE( 824)		column->set_text(( (::String)(param) ));
HXLINE( 825)		column->set_id(::StringTools_obj::replace(( (::String)(param) ),HX_(" ",20,00,00,00),HX_("_",5f,00,00,00)));
HXLINE( 826)		header->addComponent(column);
HXLINE( 827)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(column);
            	}



::hx::ObjectPtr< AddColumn_obj > AddColumn_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< AddColumn_obj > __this = new AddColumn_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< AddColumn_obj > AddColumn_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	AddColumn_obj *__this = (AddColumn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AddColumn_obj), true, "haxe.ui.containers._TableView.AddColumn"));
	*(void **)__this = AddColumn_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

AddColumn_obj::AddColumn_obj()
{
}

::hx::Val AddColumn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AddColumn_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AddColumn_obj_sStaticStorageInfo = 0;
#endif

static ::String AddColumn_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class AddColumn_obj::__mClass;

void AddColumn_obj::__register()
{
	AddColumn_obj _hx_dummy;
	AddColumn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.AddColumn",07,57,83,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AddColumn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AddColumn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AddColumn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AddColumn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
